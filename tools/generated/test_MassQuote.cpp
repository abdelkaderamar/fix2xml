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
  FIX::Account Account_13("STRING_1821951277");
  msg.set(Account_13);
  MassQuote_0.insert(Account_13.getString());
  FIX::AccountType AccountType_10(8);
  msg.set(AccountType_10);
  MassQuote_0.insert(AccountType_10.getString());
  FIX::AcctIDSource AcctIDSource_6(2);
  msg.set(AcctIDSource_6);
  MassQuote_0.insert(AcctIDSource_6.getString());
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("748365");
  msg.set(DefBidSize_0);
  MassQuote_0.insert(DefBidSize_0.getString());
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("15238485");
  msg.set(DefOfferSize_0);
  MassQuote_0.insert(DefOfferSize_0.getString());
  FIX::QuoteID QuoteID_1("STRING_1679031801");
  msg.set(QuoteID_1);
  MassQuote_0.insert(QuoteID_1.getString());
  FIX::QuoteReqID QuoteReqID_0("STRING_1216507501");
  msg.set(QuoteReqID_0);
  MassQuote_0.insert(QuoteReqID_0.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_0(1);
  msg.set(QuoteResponseLevel_0);
  MassQuote_0.insert(QuoteResponseLevel_0.getString());
  FIX::QuoteType QuoteType_2(0);
  msg.set(QuoteType_2);
  MassQuote_0.insert(QuoteType_2.getString());
  all_values.push_back(MassQuote_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_67;
    FIX::PartyID PartyID_67("STRING_1152105160");
    noPartyIDs_0_0.set(PartyID_67);
    Parties_NoPartyIDs_67.insert(PartyID_67.getString());
    FIX::PartyIDSource PartyIDSource_67('D');
    noPartyIDs_0_0.set(PartyIDSource_67);
    Parties_NoPartyIDs_67.insert(PartyIDSource_67.getString());
    FIX::PartyRole PartyRole_67(10);
    noPartyIDs_0_0.set(PartyRole_67);
    Parties_NoPartyIDs_67.insert(PartyRole_67.getString());
    all_values.push_back(Parties_NoPartyIDs_67);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_141;
      FIX::PartySubID PartySubID_141("STRING_641864459");
      noPartySubIDs_0_1_0.set(PartySubID_141);
      PtysSubGrp_NoPartySubIDs_141.insert(PartySubID_141.getString());
      FIX::PartySubIDType PartySubIDType_141(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_141);
      PtysSubGrp_NoPartySubIDs_141.insert(PartySubIDType_141.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_141);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_68;
    FIX::PartyID PartyID_68("STRING_1368841452");
    noPartyIDs_0_1.set(PartyID_68);
    Parties_NoPartyIDs_68.insert(PartyID_68.getString());
    FIX::PartyIDSource PartyIDSource_68('7');
    noPartyIDs_0_1.set(PartyIDSource_68);
    Parties_NoPartyIDs_68.insert(PartyIDSource_68.getString());
    FIX::PartyRole PartyRole_68(15);
    noPartyIDs_0_1.set(PartyRole_68);
    Parties_NoPartyIDs_68.insert(PartyRole_68.getString());
    all_values.push_back(Parties_NoPartyIDs_68);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_142;
      FIX::PartySubID PartySubID_142("STRING_605879280");
      noPartySubIDs_1_1_0.set(PartySubID_142);
      PtysSubGrp_NoPartySubIDs_142.insert(PartySubID_142.getString());
      FIX::PartySubIDType PartySubIDType_142(5);
      noPartySubIDs_1_1_0.set(PartySubIDType_142);
      PtysSubGrp_NoPartySubIDs_142.insert(PartySubIDType_142.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_142);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_143;
      FIX::PartySubID PartySubID_143("STRING_1539745982");
      noPartySubIDs_1_1_1.set(PartySubID_143);
      PtysSubGrp_NoPartySubIDs_143.insert(PartySubID_143.getString());
      FIX::PartySubIDType PartySubIDType_143(13);
      noPartySubIDs_1_1_1.set(PartySubIDType_143);
      PtysSubGrp_NoPartySubIDs_143.insert(PartySubIDType_143.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_143);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_69;
    FIX::PartyID PartyID_69("STRING_1216657646");
    noPartyIDs_0_2.set(PartyID_69);
    Parties_NoPartyIDs_69.insert(PartyID_69.getString());
    FIX::PartyIDSource PartyIDSource_69('1');
    noPartyIDs_0_2.set(PartyIDSource_69);
    Parties_NoPartyIDs_69.insert(PartyIDSource_69.getString());
    FIX::PartyRole PartyRole_69(40);
    noPartyIDs_0_2.set(PartyRole_69);
    Parties_NoPartyIDs_69.insert(PartyRole_69.getString());
    all_values.push_back(Parties_NoPartyIDs_69);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_144;
      FIX::PartySubID PartySubID_144("STRING_1315163838");
      noPartySubIDs_2_1_0.set(PartySubID_144);
      PtysSubGrp_NoPartySubIDs_144.insert(PartySubID_144.getString());
      FIX::PartySubIDType PartySubIDType_144(8);
      noPartySubIDs_2_1_0.set(PartySubIDType_144);
      PtysSubGrp_NoPartySubIDs_144.insert(PartySubIDType_144.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_144);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_145;
      FIX::PartySubID PartySubID_145("STRING_294845336");
      noPartySubIDs_2_1_1.set(PartySubID_145);
      PtysSubGrp_NoPartySubIDs_145.insert(PartySubID_145.getString());
      FIX::PartySubIDType PartySubIDType_145(12);
      noPartySubIDs_2_1_1.set(PartySubIDType_145);
      PtysSubGrp_NoPartySubIDs_145.insert(PartySubIDType_145.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_145);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_146;
      FIX::PartySubID PartySubID_146("STRING_1654382130");
      noPartySubIDs_2_1_2.set(PartySubID_146);
      PtysSubGrp_NoPartySubIDs_146.insert(PartySubID_146.getString());
      FIX::PartySubIDType PartySubIDType_146(19);
      noPartySubIDs_2_1_2.set(PartySubIDType_146);
      PtysSubGrp_NoPartySubIDs_146.insert(PartySubIDType_146.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_146);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
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
    FIX::QuoteSetID QuoteSetID_0("STRING_1523716822");
    noQuoteSets_0_0.set(QuoteSetID_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetID_0.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_0(FIX::UTCTIMESTAMP(7, 30, 23, 15, 1, 2012));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_0(1152942870);
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
      BidForwardPoints_0.setString("11738952");
      noQuoteEntries_0_1_0.set(BidForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints_0.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("3743006");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints2_0.getString());
      FIX::BidPx BidPx_0;
      BidPx_0.setString("6845213");
      noQuoteEntries_0_1_0.set(BidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidPx_0.getString());
      FIX::BidSize BidSize_0;
      BidSize_0.setString("11985483");
      noQuoteEntries_0_1_0.set(BidSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSize_0.getString());
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("17922769");
      noQuoteEntries_0_1_0.set(BidSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSpotRate_0.getString());
      FIX::BidYield BidYield_0;
      BidYield_0.setString("6.250000");
      noQuoteEntries_0_1_0.set(BidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidYield_0.getString());
      FIX::BookingType BookingType_6(2);
      noQuoteEntries_0_1_0.set(BookingType_6);
      QuotEntryGrp_NoQuoteEntries_0.insert(BookingType_6.getString());
      FIX::Currency Currency_33("GBP");
      noQuoteEntries_0_1_0.set(Currency_33);
      QuotEntryGrp_NoQuoteEntries_0.insert(Currency_33.getString());
      FIX::MidPx MidPx_0;
      MidPx_0.setString("11563779");
      noQuoteEntries_0_1_0.set(MidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidPx_0.getString());
      FIX::MidYield MidYield_0;
      MidYield_0.setString("3.710000");
      noQuoteEntries_0_1_0.set(MidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidYield_0.getString());
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("19749578");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints_0.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("614893");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_0.getString());
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("2050105");
      noQuoteEntries_0_1_0.set(OfferPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferPx_0.getString());
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("8587963");
      noQuoteEntries_0_1_0.set(OfferSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSize_0.getString());
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("3563346");
      noQuoteEntries_0_1_0.set(OfferSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSpotRate_0.getString());
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("20.290000");
      noQuoteEntries_0_1_0.set(OfferYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferYield_0.getString());
      FIX::OrdType OrdType_33('M');
      noQuoteEntries_0_1_0.set(OrdType_33);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrdType_33.getString());
      FIX::OrderCapacity OrderCapacity_9('I');
      noQuoteEntries_0_1_0.set(OrderCapacity_9);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderCapacity_9.getString());
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("1116263");
      noQuoteEntries_0_1_0.set(OrderQty2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderQty2_1.getString());
      FIX::OrderRestrictions OrderRestrictions_4("MULTIPLECHARVALUE_A");
      noQuoteEntries_0_1_0.set(OrderRestrictions_4);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderRestrictions_4.getString());
      FIX::QuoteEntryID QuoteEntryID_5("STRING_1724736487");
      noQuoteEntries_0_1_0.set(QuoteEntryID_5);
      QuotEntryGrp_NoQuoteEntries_0.insert(QuoteEntryID_5.getString());
      FIX::SettlDate SettlDate_25("LOCALMKTDATE_245118200");
      noQuoteEntries_0_1_0.set(SettlDate_25);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate_25.getString());
      FIX::SettlDate2 SettlDate2_1("LOCALMKTDATE_357299726");
      noQuoteEntries_0_1_0.set(SettlDate2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate2_1.getString());
      FIX::TradingSessionID TradingSessionID_37("STRING_6");
      noQuoteEntries_0_1_0.set(TradingSessionID_37);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionID_37.getString());
      FIX::TradingSessionSubID TradingSessionSubID_37("STRING_2");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_37);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionSubID_37.getString());
      FIX::TransactTime TransactTime_27(FIX::UTCTIMESTAMP(5, 11, 24, 24, 8, 2005));
      noQuoteEntries_0_1_0.set(TransactTime_27);
      QuotEntryGrp_NoQuoteEntries_0.insert(TransactTime_27.getString());
      FIX::ValidUntilTime ValidUntilTime_1(FIX::UTCTIMESTAMP(21, 18, 58, 0, 9, 2016));
      noQuoteEntries_0_1_0.set(ValidUntilTime_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(ValidUntilTime_1.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_56;
        FIX::EncodedLegIssuer EncodedLegIssuer_56("DATA_1716685623");
        noLegs_0_0_2_0.set(EncodedLegIssuer_56);
        InstrumentLeg_56.insert(EncodedLegIssuer_56.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_56(626401036);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_56);
        InstrumentLeg_56.insert(EncodedLegIssuerLen_56.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_56("DATA_1442110492");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_56);
        InstrumentLeg_56.insert(EncodedLegSecurityDesc_56.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_56(1921696184);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_56);
        InstrumentLeg_56.insert(EncodedLegSecurityDescLen_56.getString());
        FIX::LegCFICode LegCFICode_56("STRING_1485197391");
        noLegs_0_0_2_0.set(LegCFICode_56);
        InstrumentLeg_56.insert(LegCFICode_56.getString());
        FIX::LegContractMultiplier LegContractMultiplier_56;
        LegContractMultiplier_56.setString("17984451");
        noLegs_0_0_2_0.set(LegContractMultiplier_56);
        InstrumentLeg_56.insert(LegContractMultiplier_56.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_56(968854565);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_56);
        InstrumentLeg_56.insert(LegContractMultiplierUnit_56.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_56("MONTHYEAR_1850892228");
        noLegs_0_0_2_0.set(LegContractSettlMonth_56);
        InstrumentLeg_56.insert(LegContractSettlMonth_56.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_56("COUNTRY_1999464799");
        noLegs_0_0_2_0.set(LegCountryOfIssue_56);
        InstrumentLeg_56.insert(LegCountryOfIssue_56.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_56("LOCALMKTDATE_1080480929");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_56);
        InstrumentLeg_56.insert(LegCouponPaymentDate_56.getString());
        FIX::LegCouponRate LegCouponRate_56;
        LegCouponRate_56.setString("4.190000");
        noLegs_0_0_2_0.set(LegCouponRate_56);
        InstrumentLeg_56.insert(LegCouponRate_56.getString());
        FIX::LegCreditRating LegCreditRating_56("STRING_1576717638");
        noLegs_0_0_2_0.set(LegCreditRating_56);
        InstrumentLeg_56.insert(LegCreditRating_56.getString());
        FIX::LegCurrency LegCurrency_56("JPY");
        noLegs_0_0_2_0.set(LegCurrency_56);
        InstrumentLeg_56.insert(LegCurrency_56.getString());
        FIX::LegDatedDate LegDatedDate_56("LOCALMKTDATE_877510120");
        noLegs_0_0_2_0.set(LegDatedDate_56);
        InstrumentLeg_56.insert(LegDatedDate_56.getString());
        FIX::LegExerciseStyle LegExerciseStyle_56(877798405);
        noLegs_0_0_2_0.set(LegExerciseStyle_56);
        InstrumentLeg_56.insert(LegExerciseStyle_56.getString());
        FIX::LegFactor LegFactor_56;
        LegFactor_56.setString("19274129");
        noLegs_0_0_2_0.set(LegFactor_56);
        InstrumentLeg_56.insert(LegFactor_56.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_56(704329309);
        noLegs_0_0_2_0.set(LegFlowScheduleType_56);
        InstrumentLeg_56.insert(LegFlowScheduleType_56.getString());
        FIX::LegInstrRegistry LegInstrRegistry_56("STRING_937361317");
        noLegs_0_0_2_0.set(LegInstrRegistry_56);
        InstrumentLeg_56.insert(LegInstrRegistry_56.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_56("LOCALMKTDATE_1403134916");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_56);
        InstrumentLeg_56.insert(LegInterestAccrualDate_56.getString());
        FIX::LegIssueDate LegIssueDate_56("LOCALMKTDATE_1699039666");
        noLegs_0_0_2_0.set(LegIssueDate_56);
        InstrumentLeg_56.insert(LegIssueDate_56.getString());
        FIX::LegIssuer LegIssuer_56("STRING_23335800");
        noLegs_0_0_2_0.set(LegIssuer_56);
        InstrumentLeg_56.insert(LegIssuer_56.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_56("STRING_1253157588");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_56);
        InstrumentLeg_56.insert(LegLocaleOfIssue_56.getString());
        FIX::LegMaturityDate LegMaturityDate_56("LOCALMKTDATE_1230787719");
        noLegs_0_0_2_0.set(LegMaturityDate_56);
        InstrumentLeg_56.insert(LegMaturityDate_56.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_56("MONTHYEAR_307858677");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_56);
        InstrumentLeg_56.insert(LegMaturityMonthYear_56.getString());
        FIX::LegMaturityTime LegMaturityTime_56("TZTIMEONLY_747973558");
        noLegs_0_0_2_0.set(LegMaturityTime_56);
        InstrumentLeg_56.insert(LegMaturityTime_56.getString());
        FIX::LegOptAttribute LegOptAttribute_56('2');
        noLegs_0_0_2_0.set(LegOptAttribute_56);
        InstrumentLeg_56.insert(LegOptAttribute_56.getString());
        FIX::LegOptionRatio LegOptionRatio_56;
        LegOptionRatio_56.setString("5321018");
        noLegs_0_0_2_0.set(LegOptionRatio_56);
        InstrumentLeg_56.insert(LegOptionRatio_56.getString());
        FIX::LegPool LegPool_56("STRING_1427328810");
        noLegs_0_0_2_0.set(LegPool_56);
        InstrumentLeg_56.insert(LegPool_56.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_56("STRING_704379543");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_56);
        InstrumentLeg_56.insert(LegPriceUnitOfMeasure_56.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_56;
        LegPriceUnitOfMeasureQty_56.setString("19127230");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_56);
        InstrumentLeg_56.insert(LegPriceUnitOfMeasureQty_56.getString());
        FIX::LegProduct LegProduct_56(996530785);
        noLegs_0_0_2_0.set(LegProduct_56);
        InstrumentLeg_56.insert(LegProduct_56.getString());
        FIX::LegPutOrCall LegPutOrCall_56(1330780579);
        noLegs_0_0_2_0.set(LegPutOrCall_56);
        InstrumentLeg_56.insert(LegPutOrCall_56.getString());
        FIX::LegRatioQty LegRatioQty_56;
        LegRatioQty_56.setString("12073499");
        noLegs_0_0_2_0.set(LegRatioQty_56);
        InstrumentLeg_56.insert(LegRatioQty_56.getString());
        FIX::LegRedemptionDate LegRedemptionDate_56("LOCALMKTDATE_770743322");
        noLegs_0_0_2_0.set(LegRedemptionDate_56);
        InstrumentLeg_56.insert(LegRedemptionDate_56.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_56("STRING_668494323");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_56);
        InstrumentLeg_56.insert(LegRepoCollateralSecurityType_56.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_56;
        LegRepurchaseRate_56.setString("14.010000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_56);
        InstrumentLeg_56.insert(LegRepurchaseRate_56.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_56(1739597887);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_56);
        InstrumentLeg_56.insert(LegRepurchaseTerm_56.getString());
        FIX::LegSecurityDesc LegSecurityDesc_56("STRING_371902903");
        noLegs_0_0_2_0.set(LegSecurityDesc_56);
        InstrumentLeg_56.insert(LegSecurityDesc_56.getString());
        FIX::LegSecurityExchange LegSecurityExchange_56("EXCHANGE_710292552");
        noLegs_0_0_2_0.set(LegSecurityExchange_56);
        InstrumentLeg_56.insert(LegSecurityExchange_56.getString());
        FIX::LegSecurityID LegSecurityID_56("STRING_672595169");
        noLegs_0_0_2_0.set(LegSecurityID_56);
        InstrumentLeg_56.insert(LegSecurityID_56.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_56("STRING_1471753323");
        noLegs_0_0_2_0.set(LegSecurityIDSource_56);
        InstrumentLeg_56.insert(LegSecurityIDSource_56.getString());
        FIX::LegSecuritySubType LegSecuritySubType_56("STRING_139526543");
        noLegs_0_0_2_0.set(LegSecuritySubType_56);
        InstrumentLeg_56.insert(LegSecuritySubType_56.getString());
        FIX::LegSecurityType LegSecurityType_56("STRING_1998194299");
        noLegs_0_0_2_0.set(LegSecurityType_56);
        InstrumentLeg_56.insert(LegSecurityType_56.getString());
        FIX::LegSide LegSide_56('7');
        noLegs_0_0_2_0.set(LegSide_56);
        InstrumentLeg_56.insert(LegSide_56.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_56("STRING_1017036663");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_56);
        InstrumentLeg_56.insert(LegStateOrProvinceOfIssue_56.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_56("EUR");
        noLegs_0_0_2_0.set(LegStrikeCurrency_56);
        InstrumentLeg_56.insert(LegStrikeCurrency_56.getString());
        FIX::LegStrikePrice LegStrikePrice_56;
        LegStrikePrice_56.setString("17213659");
        noLegs_0_0_2_0.set(LegStrikePrice_56);
        InstrumentLeg_56.insert(LegStrikePrice_56.getString());
        FIX::LegSymbol LegSymbol_56("STRING_1665870373");
        noLegs_0_0_2_0.set(LegSymbol_56);
        InstrumentLeg_56.insert(LegSymbol_56.getString());
        FIX::LegSymbolSfx LegSymbolSfx_56("STRING_1964484009");
        noLegs_0_0_2_0.set(LegSymbolSfx_56);
        InstrumentLeg_56.insert(LegSymbolSfx_56.getString());
        FIX::LegTimeUnit LegTimeUnit_56("STRING_1272921990");
        noLegs_0_0_2_0.set(LegTimeUnit_56);
        InstrumentLeg_56.insert(LegTimeUnit_56.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_56("STRING_1689206173");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_56);
        InstrumentLeg_56.insert(LegUnitOfMeasure_56.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_56;
        LegUnitOfMeasureQty_56.setString("10701579");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_56);
        InstrumentLeg_56.insert(LegUnitOfMeasureQty_56.getString());
        all_values.push_back(InstrumentLeg_56);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_118;
          FIX::LegSecurityAltID LegSecurityAltID_118("STRING_1997064850");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_118);
          LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltID_118.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_118("STRING_1818131508");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_118);
          LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltIDSource_118.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_118);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_119;
          FIX::LegSecurityAltID LegSecurityAltID_119("STRING_261678810");
          noLegSecurityAltID_0_0_0_3_1.set(LegSecurityAltID_119);
          LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltID_119.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_119("STRING_381683087");
          noLegSecurityAltID_0_0_0_3_1.set(LegSecurityAltIDSource_119);
          LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltIDSource_119.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_119);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_57;
        FIX::EncodedLegIssuer EncodedLegIssuer_57("DATA_1097976670");
        noLegs_0_0_2_1.set(EncodedLegIssuer_57);
        InstrumentLeg_57.insert(EncodedLegIssuer_57.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_57(966058353);
        noLegs_0_0_2_1.set(EncodedLegIssuerLen_57);
        InstrumentLeg_57.insert(EncodedLegIssuerLen_57.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_57("DATA_146922509");
        noLegs_0_0_2_1.set(EncodedLegSecurityDesc_57);
        InstrumentLeg_57.insert(EncodedLegSecurityDesc_57.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_57(2094507456);
        noLegs_0_0_2_1.set(EncodedLegSecurityDescLen_57);
        InstrumentLeg_57.insert(EncodedLegSecurityDescLen_57.getString());
        FIX::LegCFICode LegCFICode_57("STRING_149355285");
        noLegs_0_0_2_1.set(LegCFICode_57);
        InstrumentLeg_57.insert(LegCFICode_57.getString());
        FIX::LegContractMultiplier LegContractMultiplier_57;
        LegContractMultiplier_57.setString("13542724");
        noLegs_0_0_2_1.set(LegContractMultiplier_57);
        InstrumentLeg_57.insert(LegContractMultiplier_57.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_57(717767130);
        noLegs_0_0_2_1.set(LegContractMultiplierUnit_57);
        InstrumentLeg_57.insert(LegContractMultiplierUnit_57.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_57("MONTHYEAR_817849608");
        noLegs_0_0_2_1.set(LegContractSettlMonth_57);
        InstrumentLeg_57.insert(LegContractSettlMonth_57.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_57("COUNTRY_65100176");
        noLegs_0_0_2_1.set(LegCountryOfIssue_57);
        InstrumentLeg_57.insert(LegCountryOfIssue_57.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_57("LOCALMKTDATE_309881369");
        noLegs_0_0_2_1.set(LegCouponPaymentDate_57);
        InstrumentLeg_57.insert(LegCouponPaymentDate_57.getString());
        FIX::LegCouponRate LegCouponRate_57;
        LegCouponRate_57.setString("25.110000");
        noLegs_0_0_2_1.set(LegCouponRate_57);
        InstrumentLeg_57.insert(LegCouponRate_57.getString());
        FIX::LegCreditRating LegCreditRating_57("STRING_775392729");
        noLegs_0_0_2_1.set(LegCreditRating_57);
        InstrumentLeg_57.insert(LegCreditRating_57.getString());
        FIX::LegCurrency LegCurrency_57("GBP");
        noLegs_0_0_2_1.set(LegCurrency_57);
        InstrumentLeg_57.insert(LegCurrency_57.getString());
        FIX::LegDatedDate LegDatedDate_57("LOCALMKTDATE_914919272");
        noLegs_0_0_2_1.set(LegDatedDate_57);
        InstrumentLeg_57.insert(LegDatedDate_57.getString());
        FIX::LegExerciseStyle LegExerciseStyle_57(833187189);
        noLegs_0_0_2_1.set(LegExerciseStyle_57);
        InstrumentLeg_57.insert(LegExerciseStyle_57.getString());
        FIX::LegFactor LegFactor_57;
        LegFactor_57.setString("12954420");
        noLegs_0_0_2_1.set(LegFactor_57);
        InstrumentLeg_57.insert(LegFactor_57.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_57(1931955935);
        noLegs_0_0_2_1.set(LegFlowScheduleType_57);
        InstrumentLeg_57.insert(LegFlowScheduleType_57.getString());
        FIX::LegInstrRegistry LegInstrRegistry_57("STRING_1561696246");
        noLegs_0_0_2_1.set(LegInstrRegistry_57);
        InstrumentLeg_57.insert(LegInstrRegistry_57.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_57("LOCALMKTDATE_1856791100");
        noLegs_0_0_2_1.set(LegInterestAccrualDate_57);
        InstrumentLeg_57.insert(LegInterestAccrualDate_57.getString());
        FIX::LegIssueDate LegIssueDate_57("LOCALMKTDATE_1505838259");
        noLegs_0_0_2_1.set(LegIssueDate_57);
        InstrumentLeg_57.insert(LegIssueDate_57.getString());
        FIX::LegIssuer LegIssuer_57("STRING_1080082971");
        noLegs_0_0_2_1.set(LegIssuer_57);
        InstrumentLeg_57.insert(LegIssuer_57.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_57("STRING_1673791462");
        noLegs_0_0_2_1.set(LegLocaleOfIssue_57);
        InstrumentLeg_57.insert(LegLocaleOfIssue_57.getString());
        FIX::LegMaturityDate LegMaturityDate_57("LOCALMKTDATE_631276602");
        noLegs_0_0_2_1.set(LegMaturityDate_57);
        InstrumentLeg_57.insert(LegMaturityDate_57.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_57("MONTHYEAR_621805497");
        noLegs_0_0_2_1.set(LegMaturityMonthYear_57);
        InstrumentLeg_57.insert(LegMaturityMonthYear_57.getString());
        FIX::LegMaturityTime LegMaturityTime_57("TZTIMEONLY_596465763");
        noLegs_0_0_2_1.set(LegMaturityTime_57);
        InstrumentLeg_57.insert(LegMaturityTime_57.getString());
        FIX::LegOptAttribute LegOptAttribute_57('9');
        noLegs_0_0_2_1.set(LegOptAttribute_57);
        InstrumentLeg_57.insert(LegOptAttribute_57.getString());
        FIX::LegOptionRatio LegOptionRatio_57;
        LegOptionRatio_57.setString("4713866");
        noLegs_0_0_2_1.set(LegOptionRatio_57);
        InstrumentLeg_57.insert(LegOptionRatio_57.getString());
        FIX::LegPool LegPool_57("STRING_267113623");
        noLegs_0_0_2_1.set(LegPool_57);
        InstrumentLeg_57.insert(LegPool_57.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_57("STRING_1249181474");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasure_57);
        InstrumentLeg_57.insert(LegPriceUnitOfMeasure_57.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_57;
        LegPriceUnitOfMeasureQty_57.setString("8530697");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasureQty_57);
        InstrumentLeg_57.insert(LegPriceUnitOfMeasureQty_57.getString());
        FIX::LegProduct LegProduct_57(1365090294);
        noLegs_0_0_2_1.set(LegProduct_57);
        InstrumentLeg_57.insert(LegProduct_57.getString());
        FIX::LegPutOrCall LegPutOrCall_57(67756179);
        noLegs_0_0_2_1.set(LegPutOrCall_57);
        InstrumentLeg_57.insert(LegPutOrCall_57.getString());
        FIX::LegRatioQty LegRatioQty_57;
        LegRatioQty_57.setString("9999922");
        noLegs_0_0_2_1.set(LegRatioQty_57);
        InstrumentLeg_57.insert(LegRatioQty_57.getString());
        FIX::LegRedemptionDate LegRedemptionDate_57("LOCALMKTDATE_1312114102");
        noLegs_0_0_2_1.set(LegRedemptionDate_57);
        InstrumentLeg_57.insert(LegRedemptionDate_57.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_57("STRING_217111464");
        noLegs_0_0_2_1.set(LegRepoCollateralSecurityType_57);
        InstrumentLeg_57.insert(LegRepoCollateralSecurityType_57.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_57;
        LegRepurchaseRate_57.setString("10.720000");
        noLegs_0_0_2_1.set(LegRepurchaseRate_57);
        InstrumentLeg_57.insert(LegRepurchaseRate_57.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_57(2029881232);
        noLegs_0_0_2_1.set(LegRepurchaseTerm_57);
        InstrumentLeg_57.insert(LegRepurchaseTerm_57.getString());
        FIX::LegSecurityDesc LegSecurityDesc_57("STRING_1034961072");
        noLegs_0_0_2_1.set(LegSecurityDesc_57);
        InstrumentLeg_57.insert(LegSecurityDesc_57.getString());
        FIX::LegSecurityExchange LegSecurityExchange_57("EXCHANGE_271881248");
        noLegs_0_0_2_1.set(LegSecurityExchange_57);
        InstrumentLeg_57.insert(LegSecurityExchange_57.getString());
        FIX::LegSecurityID LegSecurityID_57("STRING_192278953");
        noLegs_0_0_2_1.set(LegSecurityID_57);
        InstrumentLeg_57.insert(LegSecurityID_57.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_57("STRING_77229936");
        noLegs_0_0_2_1.set(LegSecurityIDSource_57);
        InstrumentLeg_57.insert(LegSecurityIDSource_57.getString());
        FIX::LegSecuritySubType LegSecuritySubType_57("STRING_1047273977");
        noLegs_0_0_2_1.set(LegSecuritySubType_57);
        InstrumentLeg_57.insert(LegSecuritySubType_57.getString());
        FIX::LegSecurityType LegSecurityType_57("STRING_1174755492");
        noLegs_0_0_2_1.set(LegSecurityType_57);
        InstrumentLeg_57.insert(LegSecurityType_57.getString());
        FIX::LegSide LegSide_57('5');
        noLegs_0_0_2_1.set(LegSide_57);
        InstrumentLeg_57.insert(LegSide_57.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_57("STRING_1962193249");
        noLegs_0_0_2_1.set(LegStateOrProvinceOfIssue_57);
        InstrumentLeg_57.insert(LegStateOrProvinceOfIssue_57.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_57("JPY");
        noLegs_0_0_2_1.set(LegStrikeCurrency_57);
        InstrumentLeg_57.insert(LegStrikeCurrency_57.getString());
        FIX::LegStrikePrice LegStrikePrice_57;
        LegStrikePrice_57.setString("17466655");
        noLegs_0_0_2_1.set(LegStrikePrice_57);
        InstrumentLeg_57.insert(LegStrikePrice_57.getString());
        FIX::LegSymbol LegSymbol_57("STRING_1422155279");
        noLegs_0_0_2_1.set(LegSymbol_57);
        InstrumentLeg_57.insert(LegSymbol_57.getString());
        FIX::LegSymbolSfx LegSymbolSfx_57("STRING_1596001582");
        noLegs_0_0_2_1.set(LegSymbolSfx_57);
        InstrumentLeg_57.insert(LegSymbolSfx_57.getString());
        FIX::LegTimeUnit LegTimeUnit_57("STRING_1105020148");
        noLegs_0_0_2_1.set(LegTimeUnit_57);
        InstrumentLeg_57.insert(LegTimeUnit_57.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_57("STRING_354754603");
        noLegs_0_0_2_1.set(LegUnitOfMeasure_57);
        InstrumentLeg_57.insert(LegUnitOfMeasure_57.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_57;
        LegUnitOfMeasureQty_57.setString("11223093");
        noLegs_0_0_2_1.set(LegUnitOfMeasureQty_57);
        InstrumentLeg_57.insert(LegUnitOfMeasureQty_57.getString());
        all_values.push_back(InstrumentLeg_57);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_120;
          FIX::LegSecurityAltID LegSecurityAltID_120("STRING_976560100");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltID_120);
          LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltID_120.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_120("STRING_1718775160");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltIDSource_120);
          LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltIDSource_120.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_120);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_121;
          FIX::LegSecurityAltID LegSecurityAltID_121("STRING_576315765");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltID_121);
          LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltID_121.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_121("STRING_1447946799");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltIDSource_121);
          LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltIDSource_121.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_121);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_58;
        FIX::EncodedLegIssuer EncodedLegIssuer_58("DATA_1985888783");
        noLegs_0_0_2_2.set(EncodedLegIssuer_58);
        InstrumentLeg_58.insert(EncodedLegIssuer_58.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_58(1825497239);
        noLegs_0_0_2_2.set(EncodedLegIssuerLen_58);
        InstrumentLeg_58.insert(EncodedLegIssuerLen_58.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_58("DATA_153532938");
        noLegs_0_0_2_2.set(EncodedLegSecurityDesc_58);
        InstrumentLeg_58.insert(EncodedLegSecurityDesc_58.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_58(1203495429);
        noLegs_0_0_2_2.set(EncodedLegSecurityDescLen_58);
        InstrumentLeg_58.insert(EncodedLegSecurityDescLen_58.getString());
        FIX::LegCFICode LegCFICode_58("STRING_1893253419");
        noLegs_0_0_2_2.set(LegCFICode_58);
        InstrumentLeg_58.insert(LegCFICode_58.getString());
        FIX::LegContractMultiplier LegContractMultiplier_58;
        LegContractMultiplier_58.setString("11535252");
        noLegs_0_0_2_2.set(LegContractMultiplier_58);
        InstrumentLeg_58.insert(LegContractMultiplier_58.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_58(368125883);
        noLegs_0_0_2_2.set(LegContractMultiplierUnit_58);
        InstrumentLeg_58.insert(LegContractMultiplierUnit_58.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_58("MONTHYEAR_2110364883");
        noLegs_0_0_2_2.set(LegContractSettlMonth_58);
        InstrumentLeg_58.insert(LegContractSettlMonth_58.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_58("COUNTRY_1360306307");
        noLegs_0_0_2_2.set(LegCountryOfIssue_58);
        InstrumentLeg_58.insert(LegCountryOfIssue_58.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_58("LOCALMKTDATE_250523467");
        noLegs_0_0_2_2.set(LegCouponPaymentDate_58);
        InstrumentLeg_58.insert(LegCouponPaymentDate_58.getString());
        FIX::LegCouponRate LegCouponRate_58;
        LegCouponRate_58.setString("23.080000");
        noLegs_0_0_2_2.set(LegCouponRate_58);
        InstrumentLeg_58.insert(LegCouponRate_58.getString());
        FIX::LegCreditRating LegCreditRating_58("STRING_1632187555");
        noLegs_0_0_2_2.set(LegCreditRating_58);
        InstrumentLeg_58.insert(LegCreditRating_58.getString());
        FIX::LegCurrency LegCurrency_58("GBP");
        noLegs_0_0_2_2.set(LegCurrency_58);
        InstrumentLeg_58.insert(LegCurrency_58.getString());
        FIX::LegDatedDate LegDatedDate_58("LOCALMKTDATE_531977885");
        noLegs_0_0_2_2.set(LegDatedDate_58);
        InstrumentLeg_58.insert(LegDatedDate_58.getString());
        FIX::LegExerciseStyle LegExerciseStyle_58(1617557913);
        noLegs_0_0_2_2.set(LegExerciseStyle_58);
        InstrumentLeg_58.insert(LegExerciseStyle_58.getString());
        FIX::LegFactor LegFactor_58;
        LegFactor_58.setString("16663243");
        noLegs_0_0_2_2.set(LegFactor_58);
        InstrumentLeg_58.insert(LegFactor_58.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_58(346687486);
        noLegs_0_0_2_2.set(LegFlowScheduleType_58);
        InstrumentLeg_58.insert(LegFlowScheduleType_58.getString());
        FIX::LegInstrRegistry LegInstrRegistry_58("STRING_1478016946");
        noLegs_0_0_2_2.set(LegInstrRegistry_58);
        InstrumentLeg_58.insert(LegInstrRegistry_58.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_58("LOCALMKTDATE_1405534848");
        noLegs_0_0_2_2.set(LegInterestAccrualDate_58);
        InstrumentLeg_58.insert(LegInterestAccrualDate_58.getString());
        FIX::LegIssueDate LegIssueDate_58("LOCALMKTDATE_2093353023");
        noLegs_0_0_2_2.set(LegIssueDate_58);
        InstrumentLeg_58.insert(LegIssueDate_58.getString());
        FIX::LegIssuer LegIssuer_58("STRING_752688578");
        noLegs_0_0_2_2.set(LegIssuer_58);
        InstrumentLeg_58.insert(LegIssuer_58.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_58("STRING_854052783");
        noLegs_0_0_2_2.set(LegLocaleOfIssue_58);
        InstrumentLeg_58.insert(LegLocaleOfIssue_58.getString());
        FIX::LegMaturityDate LegMaturityDate_58("LOCALMKTDATE_1050889523");
        noLegs_0_0_2_2.set(LegMaturityDate_58);
        InstrumentLeg_58.insert(LegMaturityDate_58.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_58("MONTHYEAR_1107443181");
        noLegs_0_0_2_2.set(LegMaturityMonthYear_58);
        InstrumentLeg_58.insert(LegMaturityMonthYear_58.getString());
        FIX::LegMaturityTime LegMaturityTime_58("TZTIMEONLY_1976362179");
        noLegs_0_0_2_2.set(LegMaturityTime_58);
        InstrumentLeg_58.insert(LegMaturityTime_58.getString());
        FIX::LegOptAttribute LegOptAttribute_58('6');
        noLegs_0_0_2_2.set(LegOptAttribute_58);
        InstrumentLeg_58.insert(LegOptAttribute_58.getString());
        FIX::LegOptionRatio LegOptionRatio_58;
        LegOptionRatio_58.setString("20840032");
        noLegs_0_0_2_2.set(LegOptionRatio_58);
        InstrumentLeg_58.insert(LegOptionRatio_58.getString());
        FIX::LegPool LegPool_58("STRING_1547653691");
        noLegs_0_0_2_2.set(LegPool_58);
        InstrumentLeg_58.insert(LegPool_58.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_58("STRING_1216018390");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasure_58);
        InstrumentLeg_58.insert(LegPriceUnitOfMeasure_58.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_58;
        LegPriceUnitOfMeasureQty_58.setString("13844664");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasureQty_58);
        InstrumentLeg_58.insert(LegPriceUnitOfMeasureQty_58.getString());
        FIX::LegProduct LegProduct_58(1386058827);
        noLegs_0_0_2_2.set(LegProduct_58);
        InstrumentLeg_58.insert(LegProduct_58.getString());
        FIX::LegPutOrCall LegPutOrCall_58(894031982);
        noLegs_0_0_2_2.set(LegPutOrCall_58);
        InstrumentLeg_58.insert(LegPutOrCall_58.getString());
        FIX::LegRatioQty LegRatioQty_58;
        LegRatioQty_58.setString("15379993");
        noLegs_0_0_2_2.set(LegRatioQty_58);
        InstrumentLeg_58.insert(LegRatioQty_58.getString());
        FIX::LegRedemptionDate LegRedemptionDate_58("LOCALMKTDATE_442070608");
        noLegs_0_0_2_2.set(LegRedemptionDate_58);
        InstrumentLeg_58.insert(LegRedemptionDate_58.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_58("STRING_639801753");
        noLegs_0_0_2_2.set(LegRepoCollateralSecurityType_58);
        InstrumentLeg_58.insert(LegRepoCollateralSecurityType_58.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_58;
        LegRepurchaseRate_58.setString("9.580000");
        noLegs_0_0_2_2.set(LegRepurchaseRate_58);
        InstrumentLeg_58.insert(LegRepurchaseRate_58.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_58(810196492);
        noLegs_0_0_2_2.set(LegRepurchaseTerm_58);
        InstrumentLeg_58.insert(LegRepurchaseTerm_58.getString());
        FIX::LegSecurityDesc LegSecurityDesc_58("STRING_602682988");
        noLegs_0_0_2_2.set(LegSecurityDesc_58);
        InstrumentLeg_58.insert(LegSecurityDesc_58.getString());
        FIX::LegSecurityExchange LegSecurityExchange_58("EXCHANGE_1904347265");
        noLegs_0_0_2_2.set(LegSecurityExchange_58);
        InstrumentLeg_58.insert(LegSecurityExchange_58.getString());
        FIX::LegSecurityID LegSecurityID_58("STRING_1060719959");
        noLegs_0_0_2_2.set(LegSecurityID_58);
        InstrumentLeg_58.insert(LegSecurityID_58.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_58("STRING_1600525296");
        noLegs_0_0_2_2.set(LegSecurityIDSource_58);
        InstrumentLeg_58.insert(LegSecurityIDSource_58.getString());
        FIX::LegSecuritySubType LegSecuritySubType_58("STRING_1389051172");
        noLegs_0_0_2_2.set(LegSecuritySubType_58);
        InstrumentLeg_58.insert(LegSecuritySubType_58.getString());
        FIX::LegSecurityType LegSecurityType_58("STRING_1503522380");
        noLegs_0_0_2_2.set(LegSecurityType_58);
        InstrumentLeg_58.insert(LegSecurityType_58.getString());
        FIX::LegSide LegSide_58('5');
        noLegs_0_0_2_2.set(LegSide_58);
        InstrumentLeg_58.insert(LegSide_58.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_58("STRING_1921029057");
        noLegs_0_0_2_2.set(LegStateOrProvinceOfIssue_58);
        InstrumentLeg_58.insert(LegStateOrProvinceOfIssue_58.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_58("CHF");
        noLegs_0_0_2_2.set(LegStrikeCurrency_58);
        InstrumentLeg_58.insert(LegStrikeCurrency_58.getString());
        FIX::LegStrikePrice LegStrikePrice_58;
        LegStrikePrice_58.setString("1202328");
        noLegs_0_0_2_2.set(LegStrikePrice_58);
        InstrumentLeg_58.insert(LegStrikePrice_58.getString());
        FIX::LegSymbol LegSymbol_58("STRING_304129944");
        noLegs_0_0_2_2.set(LegSymbol_58);
        InstrumentLeg_58.insert(LegSymbol_58.getString());
        FIX::LegSymbolSfx LegSymbolSfx_58("STRING_1452489459");
        noLegs_0_0_2_2.set(LegSymbolSfx_58);
        InstrumentLeg_58.insert(LegSymbolSfx_58.getString());
        FIX::LegTimeUnit LegTimeUnit_58("STRING_66102271");
        noLegs_0_0_2_2.set(LegTimeUnit_58);
        InstrumentLeg_58.insert(LegTimeUnit_58.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_58("STRING_1056818522");
        noLegs_0_0_2_2.set(LegUnitOfMeasure_58);
        InstrumentLeg_58.insert(LegUnitOfMeasure_58.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_58;
        LegUnitOfMeasureQty_58.setString("1590585");
        noLegs_0_0_2_2.set(LegUnitOfMeasureQty_58);
        InstrumentLeg_58.insert(LegUnitOfMeasureQty_58.getString());
        all_values.push_back(InstrumentLeg_58);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_122;
          FIX::LegSecurityAltID LegSecurityAltID_122("STRING_16778055");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltID_122);
          LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltID_122.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_122("STRING_2135420774");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltIDSource_122);
          LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltIDSource_122.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_122);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_36;
      FIX::AttachmentPoint AttachmentPoint_36;
      AttachmentPoint_36.setString("44.190000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_36);
      Instrument_36.insert(AttachmentPoint_36.getString());
      FIX::CFICode CFICode_36("STRING_2100781336");
      noQuoteEntries_0_1_0.set(CFICode_36);
      Instrument_36.insert(CFICode_36.getString());
      FIX::CPProgram CPProgram_36(99);
      noQuoteEntries_0_1_0.set(CPProgram_36);
      Instrument_36.insert(CPProgram_36.getString());
      FIX::CPRegType CPRegType_36("STRING_825229161");
      noQuoteEntries_0_1_0.set(CPRegType_36);
      Instrument_36.insert(CPRegType_36.getString());
      FIX::CapPrice CapPrice_36;
      CapPrice_36.setString("13377641");
      noQuoteEntries_0_1_0.set(CapPrice_36);
      Instrument_36.insert(CapPrice_36.getString());
      FIX::ContractMultiplier ContractMultiplier_36;
      ContractMultiplier_36.setString("7741659");
      noQuoteEntries_0_1_0.set(ContractMultiplier_36);
      Instrument_36.insert(ContractMultiplier_36.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_36(2);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_36);
      Instrument_36.insert(ContractMultiplierUnit_36.getString());
      FIX::ContractSettlMonth ContractSettlMonth_36("MONTHYEAR_728279843");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_36);
      Instrument_36.insert(ContractSettlMonth_36.getString());
      FIX::CountryOfIssue CountryOfIssue_36("COUNTRY_1216236605");
      noQuoteEntries_0_1_0.set(CountryOfIssue_36);
      Instrument_36.insert(CountryOfIssue_36.getString());
      FIX::CouponPaymentDate CouponPaymentDate_36("LOCALMKTDATE_211579248");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_36);
      Instrument_36.insert(CouponPaymentDate_36.getString());
      FIX::CouponRate CouponRate_36;
      CouponRate_36.setString("8.010000");
      noQuoteEntries_0_1_0.set(CouponRate_36);
      Instrument_36.insert(CouponRate_36.getString());
      FIX::CreditRating CreditRating_36("STRING_2026433097");
      noQuoteEntries_0_1_0.set(CreditRating_36);
      Instrument_36.insert(CreditRating_36.getString());
      FIX::DatedDate DatedDate_36("LOCALMKTDATE_814262237");
      noQuoteEntries_0_1_0.set(DatedDate_36);
      Instrument_36.insert(DatedDate_36.getString());
      FIX::DetachmentPoint DetachmentPoint_36;
      DetachmentPoint_36.setString("44.180000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_36);
      Instrument_36.insert(DetachmentPoint_36.getString());
      FIX::EncodedIssuer EncodedIssuer_36("DATA_939669408");
      noQuoteEntries_0_1_0.set(EncodedIssuer_36);
      Instrument_36.insert(EncodedIssuer_36.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_36(267303885);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_36);
      Instrument_36.insert(EncodedIssuerLen_36.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_36("DATA_270751943");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_36);
      Instrument_36.insert(EncodedSecurityDesc_36.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_36(295708141);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_36);
      Instrument_36.insert(EncodedSecurityDescLen_36.getString());
      FIX::ExerciseStyle ExerciseStyle_36(1);
      noQuoteEntries_0_1_0.set(ExerciseStyle_36);
      Instrument_36.insert(ExerciseStyle_36.getString());
      FIX::Factor Factor_36;
      Factor_36.setString("442973");
      noQuoteEntries_0_1_0.set(Factor_36);
      Instrument_36.insert(Factor_36.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_36(true);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_36);
      Instrument_36.insert(FlexProductEligibilityIndicator_36.getString());
      FIX::FlexibleIndicator FlexibleIndicator_36(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_36);
      Instrument_36.insert(FlexibleIndicator_36.getString());
      FIX::FloorPrice FloorPrice_36;
      FloorPrice_36.setString("1645302");
      noQuoteEntries_0_1_0.set(FloorPrice_36);
      Instrument_36.insert(FloorPrice_36.getString());
      FIX::FlowScheduleType FlowScheduleType_36(0);
      noQuoteEntries_0_1_0.set(FlowScheduleType_36);
      Instrument_36.insert(FlowScheduleType_36.getString());
      FIX::InstrRegistry InstrRegistry_36("STRING_147378200");
      noQuoteEntries_0_1_0.set(InstrRegistry_36);
      Instrument_36.insert(InstrRegistry_36.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_36('2');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_36);
      Instrument_36.insert(InstrmtAssignmentMethod_36.getString());
      FIX::InterestAccrualDate InterestAccrualDate_36("LOCALMKTDATE_482769604");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_36);
      Instrument_36.insert(InterestAccrualDate_36.getString());
      FIX::IssueDate IssueDate_36("LOCALMKTDATE_306436795");
      noQuoteEntries_0_1_0.set(IssueDate_36);
      Instrument_36.insert(IssueDate_36.getString());
      FIX::Issuer Issuer_36("STRING_1347624313");
      noQuoteEntries_0_1_0.set(Issuer_36);
      Instrument_36.insert(Issuer_36.getString());
      FIX::ListMethod ListMethod_36(1);
      noQuoteEntries_0_1_0.set(ListMethod_36);
      Instrument_36.insert(ListMethod_36.getString());
      FIX::LocaleOfIssue LocaleOfIssue_36("STRING_294373921");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_36);
      Instrument_36.insert(LocaleOfIssue_36.getString());
      FIX::MaturityDate MaturityDate_36("LOCALMKTDATE_956835084");
      noQuoteEntries_0_1_0.set(MaturityDate_36);
      Instrument_36.insert(MaturityDate_36.getString());
      FIX::MaturityMonthYear MaturityMonthYear_36("MONTHYEAR_452845347");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_36);
      Instrument_36.insert(MaturityMonthYear_36.getString());
      FIX::MaturityTime MaturityTime_36("TZTIMEONLY_1829964738");
      noQuoteEntries_0_1_0.set(MaturityTime_36);
      Instrument_36.insert(MaturityTime_36.getString());
      FIX::MinPriceIncrement MinPriceIncrement_36;
      MinPriceIncrement_36.setString("17820642");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_36);
      Instrument_36.insert(MinPriceIncrement_36.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_36;
      MinPriceIncrementAmount_36.setString("17906094");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_36);
      Instrument_36.insert(MinPriceIncrementAmount_36.getString());
      FIX::NTPositionLimit NTPositionLimit_36(456647087);
      noQuoteEntries_0_1_0.set(NTPositionLimit_36);
      Instrument_36.insert(NTPositionLimit_36.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_36;
      NotionalPercentageOutstanding_36.setString("17.410000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_36);
      Instrument_36.insert(NotionalPercentageOutstanding_36.getString());
      FIX::OptAttribute OptAttribute_36('3');
      noQuoteEntries_0_1_0.set(OptAttribute_36);
      Instrument_36.insert(OptAttribute_36.getString());
      FIX::OptPayoutAmount OptPayoutAmount_36;
      OptPayoutAmount_36.setString("16728836");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_36);
      Instrument_36.insert(OptPayoutAmount_36.getString());
      FIX::OptPayoutType OptPayoutType_36(3);
      noQuoteEntries_0_1_0.set(OptPayoutType_36);
      Instrument_36.insert(OptPayoutType_36.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_36;
      OriginalNotionalPercentageOutstanding_36.setString("64.650000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_36);
      Instrument_36.insert(OriginalNotionalPercentageOutstanding_36.getString());
      FIX::Pool Pool_36("STRING_1551833141");
      noQuoteEntries_0_1_0.set(Pool_36);
      Instrument_36.insert(Pool_36.getString());
      FIX::PositionLimit PositionLimit_36(232199579);
      noQuoteEntries_0_1_0.set(PositionLimit_36);
      Instrument_36.insert(PositionLimit_36.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_36("STRING_PCTPAR");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_36);
      Instrument_36.insert(PriceQuoteMethod_36.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_36("STRING_344018901");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_36);
      Instrument_36.insert(PriceUnitOfMeasure_36.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_36;
      PriceUnitOfMeasureQty_36.setString("4995034");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_36);
      Instrument_36.insert(PriceUnitOfMeasureQty_36.getString());
      FIX::Product Product_38(3);
      noQuoteEntries_0_1_0.set(Product_38);
      Instrument_36.insert(Product_38.getString());
      FIX::ProductComplex ProductComplex_36("STRING_639727042");
      noQuoteEntries_0_1_0.set(ProductComplex_36);
      Instrument_36.insert(ProductComplex_36.getString());
      FIX::PutOrCall PutOrCall_36(0);
      noQuoteEntries_0_1_0.set(PutOrCall_36);
      Instrument_36.insert(PutOrCall_36.getString());
      FIX::RedemptionDate RedemptionDate_36("LOCALMKTDATE_840476531");
      noQuoteEntries_0_1_0.set(RedemptionDate_36);
      Instrument_36.insert(RedemptionDate_36.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_36("STRING_1909031829");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_36);
      Instrument_36.insert(RepoCollateralSecurityType_36.getString());
      FIX::RepurchaseRate RepurchaseRate_36;
      RepurchaseRate_36.setString("36.310000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_36);
      Instrument_36.insert(RepurchaseRate_36.getString());
      FIX::RepurchaseTerm RepurchaseTerm_36(1005006779);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_36);
      Instrument_36.insert(RepurchaseTerm_36.getString());
      FIX::RestructuringType RestructuringType_36("STRING_XR");
      noQuoteEntries_0_1_0.set(RestructuringType_36);
      Instrument_36.insert(RestructuringType_36.getString());
      FIX::SecurityDesc SecurityDesc_36("STRING_137188184");
      noQuoteEntries_0_1_0.set(SecurityDesc_36);
      Instrument_36.insert(SecurityDesc_36.getString());
      FIX::SecurityExchange SecurityExchange_36("EXCHANGE_1235639299");
      noQuoteEntries_0_1_0.set(SecurityExchange_36);
      Instrument_36.insert(SecurityExchange_36.getString());
      FIX::SecurityGroup SecurityGroup_36("STRING_1817752516");
      noQuoteEntries_0_1_0.set(SecurityGroup_36);
      Instrument_36.insert(SecurityGroup_36.getString());
      FIX::SecurityID SecurityID_36("STRING_443624979");
      noQuoteEntries_0_1_0.set(SecurityID_36);
      Instrument_36.insert(SecurityID_36.getString());
      FIX::SecurityIDSource SecurityIDSource_36("STRING_5");
      noQuoteEntries_0_1_0.set(SecurityIDSource_36);
      Instrument_36.insert(SecurityIDSource_36.getString());
      FIX::SecurityStatus SecurityStatus_36("STRING_2");
      noQuoteEntries_0_1_0.set(SecurityStatus_36);
      Instrument_36.insert(SecurityStatus_36.getString());
      FIX::SecuritySubType SecuritySubType_37("STRING_737998900");
      noQuoteEntries_0_1_0.set(SecuritySubType_37);
      Instrument_36.insert(SecuritySubType_37.getString());
      FIX::SecurityType SecurityType_38("STRING_WITHDRN");
      noQuoteEntries_0_1_0.set(SecurityType_38);
      Instrument_36.insert(SecurityType_38.getString());
      FIX::Seniority Seniority_36("STRING_SR");
      noQuoteEntries_0_1_0.set(Seniority_36);
      Instrument_36.insert(Seniority_36.getString());
      FIX::SettlMethod SettlMethod_36('C');
      noQuoteEntries_0_1_0.set(SettlMethod_36);
      Instrument_36.insert(SettlMethod_36.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_36("STRING_1027195647");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_36);
      Instrument_36.insert(SettleOnOpenFlag_36.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_36("STRING_265787695");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_36);
      Instrument_36.insert(StateOrProvinceOfIssue_36.getString());
      FIX::StrikeCurrency StrikeCurrency_36("GBP");
      noQuoteEntries_0_1_0.set(StrikeCurrency_36);
      Instrument_36.insert(StrikeCurrency_36.getString());
      FIX::StrikeMultiplier StrikeMultiplier_36;
      StrikeMultiplier_36.setString("6371933");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_36);
      Instrument_36.insert(StrikeMultiplier_36.getString());
      FIX::StrikePrice StrikePrice_36;
      StrikePrice_36.setString("4025271");
      noQuoteEntries_0_1_0.set(StrikePrice_36);
      Instrument_36.insert(StrikePrice_36.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_36(1);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_36);
      Instrument_36.insert(StrikePriceBoundaryMethod_36.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_36;
      StrikePriceBoundaryPrecision_36.setString("61.750000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_36);
      Instrument_36.insert(StrikePriceBoundaryPrecision_36.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_36(3);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_36);
      Instrument_36.insert(StrikePriceDeterminationMethod_36.getString());
      FIX::StrikeValue StrikeValue_36;
      StrikeValue_36.setString("20311743");
      noQuoteEntries_0_1_0.set(StrikeValue_36);
      Instrument_36.insert(StrikeValue_36.getString());
      FIX::Symbol Symbol_36("STRING_658863411");
      noQuoteEntries_0_1_0.set(Symbol_36);
      Instrument_36.insert(Symbol_36.getString());
      FIX::SymbolSfx SymbolSfx_36("STRING_CD");
      noQuoteEntries_0_1_0.set(SymbolSfx_36);
      Instrument_36.insert(SymbolSfx_36.getString());
      FIX::TimeUnit TimeUnit_36("STRING_H");
      noQuoteEntries_0_1_0.set(TimeUnit_36);
      Instrument_36.insert(TimeUnit_36.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_36(2);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_36);
      Instrument_36.insert(UnderlyingPriceDeterminationMethod_36.getString());
      FIX::UnitOfMeasure UnitOfMeasure_36("STRING_USD");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_36);
      Instrument_36.insert(UnitOfMeasure_36.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_36;
      UnitOfMeasureQty_36.setString("16781153");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_36);
      Instrument_36.insert(UnitOfMeasureQty_36.getString());
      FIX::ValuationMethod ValuationMethod_36("STRING_FUTDA");
      noQuoteEntries_0_1_0.set(ValuationMethod_36);
      Instrument_36.insert(ValuationMethod_36.getString());
      all_values.push_back(Instrument_36);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_73;
        FIX::ComplexEventCondition ComplexEventCondition_73(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventCondition_73.getString());
        FIX::ComplexEventPrice ComplexEventPrice_73;
        ComplexEventPrice_73.setString("11530422");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPrice_73.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_73(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryMethod_73.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_73;
        ComplexEventPriceBoundaryPrecision_73.setString("35.360000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryPrecision_73.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_73(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceTimeType_73.getString());
        FIX::ComplexEventType ComplexEventType_73(6);
        noComplexEvents_0_0_2_0.set(ComplexEventType_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventType_73.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_73;
        ComplexOptPayoutAmount_73.setString("1012548");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexOptPayoutAmount_73.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_73);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_152;
          FIX::ComplexEventEndDate ComplexEventEndDate_152(FIX::UTCTIMESTAMP(23, 16, 13, 9, 12, 2002));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventEndDate_152.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_152(FIX::UTCTIMESTAMP(8, 27, 28, 26, 7, 2011));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventStartDate_152.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_152);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_321;
            FIX::ComplexEventEndTime ComplexEventEndTime_321(FIX::UTCTIMEONLY(15, 46, 15));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_321);
            ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventEndTime_321.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_321(FIX::UTCTIMEONLY(6, 7, 57));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_321);
            ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventStartTime_321.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_321);

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
        multiset<string> EvntGrp_NoEvents_66;
        FIX::EventDate EventDate_66("LOCALMKTDATE_358850931");
        noEvents_0_0_2_0.set(EventDate_66);
        EvntGrp_NoEvents_66.insert(EventDate_66.getString());
        FIX::EventPx EventPx_66;
        EventPx_66.setString("14321397");
        noEvents_0_0_2_0.set(EventPx_66);
        EvntGrp_NoEvents_66.insert(EventPx_66.getString());
        FIX::EventText EventText_66("STRING_1957421486");
        noEvents_0_0_2_0.set(EventText_66);
        EvntGrp_NoEvents_66.insert(EventText_66.getString());
        FIX::EventTime EventTime_66(FIX::UTCTIMESTAMP(19, 33, 22, 9, 1, 2000));
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
        FIX::EventDate EventDate_67("LOCALMKTDATE_2010180230");
        noEvents_0_0_2_1.set(EventDate_67);
        EvntGrp_NoEvents_67.insert(EventDate_67.getString());
        FIX::EventPx EventPx_67;
        EventPx_67.setString("9572");
        noEvents_0_0_2_1.set(EventPx_67);
        EvntGrp_NoEvents_67.insert(EventPx_67.getString());
        FIX::EventText EventText_67("STRING_1092456251");
        noEvents_0_0_2_1.set(EventText_67);
        EvntGrp_NoEvents_67.insert(EventText_67.getString());
        FIX::EventTime EventTime_67(FIX::UTCTIMESTAMP(6, 30, 17, 0, 2, 2004));
        noEvents_0_0_2_1.set(EventTime_67);
        EvntGrp_NoEvents_67.insert(EventTime_67.getString());
        FIX::EventType EventType_67(5);
        noEvents_0_0_2_1.set(EventType_67);
        EvntGrp_NoEvents_67.insert(EventType_67.getString());
        all_values.push_back(EvntGrp_NoEvents_67);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_68;
        FIX::EventDate EventDate_68("LOCALMKTDATE_1039419698");
        noEvents_0_0_2_2.set(EventDate_68);
        EvntGrp_NoEvents_68.insert(EventDate_68.getString());
        FIX::EventPx EventPx_68;
        EventPx_68.setString("7924354");
        noEvents_0_0_2_2.set(EventPx_68);
        EvntGrp_NoEvents_68.insert(EventPx_68.getString());
        FIX::EventText EventText_68("STRING_1689956910");
        noEvents_0_0_2_2.set(EventText_68);
        EvntGrp_NoEvents_68.insert(EventText_68.getString());
        FIX::EventTime EventTime_68(FIX::UTCTIMESTAMP(13, 29, 53, 2, 8, 2014));
        noEvents_0_0_2_2.set(EventTime_68);
        EvntGrp_NoEvents_68.insert(EventTime_68.getString());
        FIX::EventType EventType_68(19);
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
        multiset<string> InstrumentParties_NoInstrumentParties_66;
        FIX::InstrumentPartyID InstrumentPartyID_66("STRING_261901351");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_66);
        InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyID_66.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_66('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_66);
        InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyIDSource_66.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_66(47778003);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_66);
        InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyRole_66.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_66);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
          FIX::InstrumentPartySubID InstrumentPartySubID_143("STRING_2026289238");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_143);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubID_143.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_143(798224476);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_143);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubIDType_143.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
          FIX::InstrumentPartySubID InstrumentPartySubID_144("STRING_590580375");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_144);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubID_144.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_144(503056873);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_144);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubIDType_144.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145;
          FIX::InstrumentPartySubID InstrumentPartySubID_145("STRING_660921058");
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubID_145);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubID_145.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_145(591537613);
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubIDType_145);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubIDType_145.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_67;
        FIX::InstrumentPartyID InstrumentPartyID_67("STRING_1595513125");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_67);
        InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyID_67.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_67('5');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_67);
        InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyIDSource_67.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_67(1775353507);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_67);
        InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyRole_67.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_67);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146;
          FIX::InstrumentPartySubID InstrumentPartySubID_146("STRING_756972904");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_146);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubID_146.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_146(1646035492);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_146);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubIDType_146.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147;
          FIX::InstrumentPartySubID InstrumentPartySubID_147("STRING_787605840");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_147);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubID_147.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_147(1199731905);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_147);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubIDType_147.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_68;
        FIX::InstrumentPartyID InstrumentPartyID_68("STRING_87274228");
        noInstrumentParties_0_0_2_2.set(InstrumentPartyID_68);
        InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyID_68.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_68('1');
        noInstrumentParties_0_0_2_2.set(InstrumentPartyIDSource_68);
        InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyIDSource_68.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_68(1992167344);
        noInstrumentParties_0_0_2_2.set(InstrumentPartyRole_68);
        InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyRole_68.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_68);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148;
          FIX::InstrumentPartySubID InstrumentPartySubID_148("STRING_1924218444");
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubID_148);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubID_148.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_148(1777418133);
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubIDType_148);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubIDType_148.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149;
          FIX::InstrumentPartySubID InstrumentPartySubID_149("STRING_1951570648");
          noInstrumentPartySubIDs_0_0_2_3_1.set(InstrumentPartySubID_149);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubID_149.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_149(1227220029);
          noInstrumentPartySubIDs_0_0_2_3_1.set(InstrumentPartySubIDType_149);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubIDType_149.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150;
          FIX::InstrumentPartySubID InstrumentPartySubID_150("STRING_1107655011");
          noInstrumentPartySubIDs_0_0_2_3_2.set(InstrumentPartySubID_150);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubID_150.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_150(130734459);
          noInstrumentPartySubIDs_0_0_2_3_2.set(InstrumentPartySubIDType_150);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubIDType_150.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_75;
        FIX::SecurityAltID SecurityAltID_75("STRING_1870031629");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_75);
        SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltID_75.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_75("STRING_267319757");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_75);
        SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltIDSource_75.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_75);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_76;
        FIX::SecurityAltID SecurityAltID_76("STRING_1150973897");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_76);
        SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltID_76.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_76("STRING_1327003210");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_76);
        SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltIDSource_76.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_76);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_72;
      FIX::SecurityXML SecurityXML_73("XMLDATA_315097761");
      noQuoteEntries_0_1_0.set(SecurityXML_73);
      FIX::SecurityXMLLen SecurityXMLLen_36(542418302);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_36);
      FIX::SecurityXMLSchema SecurityXMLSchema_36("STRING_1205808801");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_36);
      SecurityXML_72.insert(SecurityXMLSchema_36.getString());
      all_values.push_back(SecurityXML_72);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("11133222");
      noQuoteEntries_0_1_1.set(BidForwardPoints_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidForwardPoints_1.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("11329986");
      noQuoteEntries_0_1_1.set(BidForwardPoints2_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidForwardPoints2_1.getString());
      FIX::BidPx BidPx_1;
      BidPx_1.setString("17088656");
      noQuoteEntries_0_1_1.set(BidPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidPx_1.getString());
      FIX::BidSize BidSize_1;
      BidSize_1.setString("17742432");
      noQuoteEntries_0_1_1.set(BidSize_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidSize_1.getString());
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("17245362");
      noQuoteEntries_0_1_1.set(BidSpotRate_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidSpotRate_1.getString());
      FIX::BidYield BidYield_1;
      BidYield_1.setString("51.510000");
      noQuoteEntries_0_1_1.set(BidYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidYield_1.getString());
      FIX::BookingType BookingType_7(2);
      noQuoteEntries_0_1_1.set(BookingType_7);
      QuotEntryGrp_NoQuoteEntries_1.insert(BookingType_7.getString());
      FIX::Currency Currency_34("CHF");
      noQuoteEntries_0_1_1.set(Currency_34);
      QuotEntryGrp_NoQuoteEntries_1.insert(Currency_34.getString());
      FIX::MidPx MidPx_1;
      MidPx_1.setString("8967273");
      noQuoteEntries_0_1_1.set(MidPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(MidPx_1.getString());
      FIX::MidYield MidYield_1;
      MidYield_1.setString("79.940000");
      noQuoteEntries_0_1_1.set(MidYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(MidYield_1.getString());
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("14429013");
      noQuoteEntries_0_1_1.set(OfferForwardPoints_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferForwardPoints_1.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("20964592");
      noQuoteEntries_0_1_1.set(OfferForwardPoints2_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_1.getString());
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("9382322");
      noQuoteEntries_0_1_1.set(OfferPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferPx_1.getString());
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("11224432");
      noQuoteEntries_0_1_1.set(OfferSize_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferSize_1.getString());
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("19411429");
      noQuoteEntries_0_1_1.set(OfferSpotRate_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferSpotRate_1.getString());
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("97.140000");
      noQuoteEntries_0_1_1.set(OfferYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferYield_1.getString());
      FIX::OrdType OrdType_34('G');
      noQuoteEntries_0_1_1.set(OrdType_34);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrdType_34.getString());
      FIX::OrderCapacity OrderCapacity_10('G');
      noQuoteEntries_0_1_1.set(OrderCapacity_10);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderCapacity_10.getString());
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("3720667");
      noQuoteEntries_0_1_1.set(OrderQty2_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderQty2_2.getString());
      FIX::OrderRestrictions OrderRestrictions_5("MULTIPLECHARVALUE_7");
      noQuoteEntries_0_1_1.set(OrderRestrictions_5);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderRestrictions_5.getString());
      FIX::QuoteEntryID QuoteEntryID_6("STRING_531248829");
      noQuoteEntries_0_1_1.set(QuoteEntryID_6);
      QuotEntryGrp_NoQuoteEntries_1.insert(QuoteEntryID_6.getString());
      FIX::SettlDate SettlDate_26("LOCALMKTDATE_502801173");
      noQuoteEntries_0_1_1.set(SettlDate_26);
      QuotEntryGrp_NoQuoteEntries_1.insert(SettlDate_26.getString());
      FIX::SettlDate2 SettlDate2_2("LOCALMKTDATE_867987014");
      noQuoteEntries_0_1_1.set(SettlDate2_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(SettlDate2_2.getString());
      FIX::TradingSessionID TradingSessionID_38("STRING_3");
      noQuoteEntries_0_1_1.set(TradingSessionID_38);
      QuotEntryGrp_NoQuoteEntries_1.insert(TradingSessionID_38.getString());
      FIX::TradingSessionSubID TradingSessionSubID_38("STRING_7");
      noQuoteEntries_0_1_1.set(TradingSessionSubID_38);
      QuotEntryGrp_NoQuoteEntries_1.insert(TradingSessionSubID_38.getString());
      FIX::TransactTime TransactTime_28(FIX::UTCTIMESTAMP(13, 12, 25, 2, 6, 2001));
      noQuoteEntries_0_1_1.set(TransactTime_28);
      QuotEntryGrp_NoQuoteEntries_1.insert(TransactTime_28.getString());
      FIX::ValidUntilTime ValidUntilTime_2(FIX::UTCTIMESTAMP(16, 6, 32, 14, 5, 2011));
      noQuoteEntries_0_1_1.set(ValidUntilTime_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(ValidUntilTime_2.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_1);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_59;
        FIX::EncodedLegIssuer EncodedLegIssuer_59("DATA_1179827383");
        noLegs_0_1_2_0.set(EncodedLegIssuer_59);
        InstrumentLeg_59.insert(EncodedLegIssuer_59.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_59(1308115662);
        noLegs_0_1_2_0.set(EncodedLegIssuerLen_59);
        InstrumentLeg_59.insert(EncodedLegIssuerLen_59.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_59("DATA_663274416");
        noLegs_0_1_2_0.set(EncodedLegSecurityDesc_59);
        InstrumentLeg_59.insert(EncodedLegSecurityDesc_59.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_59(2118059606);
        noLegs_0_1_2_0.set(EncodedLegSecurityDescLen_59);
        InstrumentLeg_59.insert(EncodedLegSecurityDescLen_59.getString());
        FIX::LegCFICode LegCFICode_59("STRING_283075305");
        noLegs_0_1_2_0.set(LegCFICode_59);
        InstrumentLeg_59.insert(LegCFICode_59.getString());
        FIX::LegContractMultiplier LegContractMultiplier_59;
        LegContractMultiplier_59.setString("4569337");
        noLegs_0_1_2_0.set(LegContractMultiplier_59);
        InstrumentLeg_59.insert(LegContractMultiplier_59.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_59(538555672);
        noLegs_0_1_2_0.set(LegContractMultiplierUnit_59);
        InstrumentLeg_59.insert(LegContractMultiplierUnit_59.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_59("MONTHYEAR_1182253392");
        noLegs_0_1_2_0.set(LegContractSettlMonth_59);
        InstrumentLeg_59.insert(LegContractSettlMonth_59.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_59("COUNTRY_2028011213");
        noLegs_0_1_2_0.set(LegCountryOfIssue_59);
        InstrumentLeg_59.insert(LegCountryOfIssue_59.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_59("LOCALMKTDATE_910622386");
        noLegs_0_1_2_0.set(LegCouponPaymentDate_59);
        InstrumentLeg_59.insert(LegCouponPaymentDate_59.getString());
        FIX::LegCouponRate LegCouponRate_59;
        LegCouponRate_59.setString("78.600000");
        noLegs_0_1_2_0.set(LegCouponRate_59);
        InstrumentLeg_59.insert(LegCouponRate_59.getString());
        FIX::LegCreditRating LegCreditRating_59("STRING_411776394");
        noLegs_0_1_2_0.set(LegCreditRating_59);
        InstrumentLeg_59.insert(LegCreditRating_59.getString());
        FIX::LegCurrency LegCurrency_59("EUR");
        noLegs_0_1_2_0.set(LegCurrency_59);
        InstrumentLeg_59.insert(LegCurrency_59.getString());
        FIX::LegDatedDate LegDatedDate_59("LOCALMKTDATE_665573205");
        noLegs_0_1_2_0.set(LegDatedDate_59);
        InstrumentLeg_59.insert(LegDatedDate_59.getString());
        FIX::LegExerciseStyle LegExerciseStyle_59(36060842);
        noLegs_0_1_2_0.set(LegExerciseStyle_59);
        InstrumentLeg_59.insert(LegExerciseStyle_59.getString());
        FIX::LegFactor LegFactor_59;
        LegFactor_59.setString("19006321");
        noLegs_0_1_2_0.set(LegFactor_59);
        InstrumentLeg_59.insert(LegFactor_59.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_59(98889578);
        noLegs_0_1_2_0.set(LegFlowScheduleType_59);
        InstrumentLeg_59.insert(LegFlowScheduleType_59.getString());
        FIX::LegInstrRegistry LegInstrRegistry_59("STRING_1121279534");
        noLegs_0_1_2_0.set(LegInstrRegistry_59);
        InstrumentLeg_59.insert(LegInstrRegistry_59.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_59("LOCALMKTDATE_167044056");
        noLegs_0_1_2_0.set(LegInterestAccrualDate_59);
        InstrumentLeg_59.insert(LegInterestAccrualDate_59.getString());
        FIX::LegIssueDate LegIssueDate_59("LOCALMKTDATE_738014752");
        noLegs_0_1_2_0.set(LegIssueDate_59);
        InstrumentLeg_59.insert(LegIssueDate_59.getString());
        FIX::LegIssuer LegIssuer_59("STRING_1172336815");
        noLegs_0_1_2_0.set(LegIssuer_59);
        InstrumentLeg_59.insert(LegIssuer_59.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_59("STRING_1713938299");
        noLegs_0_1_2_0.set(LegLocaleOfIssue_59);
        InstrumentLeg_59.insert(LegLocaleOfIssue_59.getString());
        FIX::LegMaturityDate LegMaturityDate_59("LOCALMKTDATE_938521952");
        noLegs_0_1_2_0.set(LegMaturityDate_59);
        InstrumentLeg_59.insert(LegMaturityDate_59.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_59("MONTHYEAR_850153743");
        noLegs_0_1_2_0.set(LegMaturityMonthYear_59);
        InstrumentLeg_59.insert(LegMaturityMonthYear_59.getString());
        FIX::LegMaturityTime LegMaturityTime_59("TZTIMEONLY_690401537");
        noLegs_0_1_2_0.set(LegMaturityTime_59);
        InstrumentLeg_59.insert(LegMaturityTime_59.getString());
        FIX::LegOptAttribute LegOptAttribute_59('1');
        noLegs_0_1_2_0.set(LegOptAttribute_59);
        InstrumentLeg_59.insert(LegOptAttribute_59.getString());
        FIX::LegOptionRatio LegOptionRatio_59;
        LegOptionRatio_59.setString("6677251");
        noLegs_0_1_2_0.set(LegOptionRatio_59);
        InstrumentLeg_59.insert(LegOptionRatio_59.getString());
        FIX::LegPool LegPool_59("STRING_1019270925");
        noLegs_0_1_2_0.set(LegPool_59);
        InstrumentLeg_59.insert(LegPool_59.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_59("STRING_13654919");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasure_59);
        InstrumentLeg_59.insert(LegPriceUnitOfMeasure_59.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_59;
        LegPriceUnitOfMeasureQty_59.setString("13820239");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasureQty_59);
        InstrumentLeg_59.insert(LegPriceUnitOfMeasureQty_59.getString());
        FIX::LegProduct LegProduct_59(51614660);
        noLegs_0_1_2_0.set(LegProduct_59);
        InstrumentLeg_59.insert(LegProduct_59.getString());
        FIX::LegPutOrCall LegPutOrCall_59(1321770582);
        noLegs_0_1_2_0.set(LegPutOrCall_59);
        InstrumentLeg_59.insert(LegPutOrCall_59.getString());
        FIX::LegRatioQty LegRatioQty_59;
        LegRatioQty_59.setString("20452983");
        noLegs_0_1_2_0.set(LegRatioQty_59);
        InstrumentLeg_59.insert(LegRatioQty_59.getString());
        FIX::LegRedemptionDate LegRedemptionDate_59("LOCALMKTDATE_22190618");
        noLegs_0_1_2_0.set(LegRedemptionDate_59);
        InstrumentLeg_59.insert(LegRedemptionDate_59.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_59("STRING_1604845887");
        noLegs_0_1_2_0.set(LegRepoCollateralSecurityType_59);
        InstrumentLeg_59.insert(LegRepoCollateralSecurityType_59.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_59;
        LegRepurchaseRate_59.setString("84.420000");
        noLegs_0_1_2_0.set(LegRepurchaseRate_59);
        InstrumentLeg_59.insert(LegRepurchaseRate_59.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_59(560746290);
        noLegs_0_1_2_0.set(LegRepurchaseTerm_59);
        InstrumentLeg_59.insert(LegRepurchaseTerm_59.getString());
        FIX::LegSecurityDesc LegSecurityDesc_59("STRING_639615631");
        noLegs_0_1_2_0.set(LegSecurityDesc_59);
        InstrumentLeg_59.insert(LegSecurityDesc_59.getString());
        FIX::LegSecurityExchange LegSecurityExchange_59("EXCHANGE_235276007");
        noLegs_0_1_2_0.set(LegSecurityExchange_59);
        InstrumentLeg_59.insert(LegSecurityExchange_59.getString());
        FIX::LegSecurityID LegSecurityID_59("STRING_1471368676");
        noLegs_0_1_2_0.set(LegSecurityID_59);
        InstrumentLeg_59.insert(LegSecurityID_59.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_59("STRING_1800783491");
        noLegs_0_1_2_0.set(LegSecurityIDSource_59);
        InstrumentLeg_59.insert(LegSecurityIDSource_59.getString());
        FIX::LegSecuritySubType LegSecuritySubType_59("STRING_647052402");
        noLegs_0_1_2_0.set(LegSecuritySubType_59);
        InstrumentLeg_59.insert(LegSecuritySubType_59.getString());
        FIX::LegSecurityType LegSecurityType_59("STRING_737308588");
        noLegs_0_1_2_0.set(LegSecurityType_59);
        InstrumentLeg_59.insert(LegSecurityType_59.getString());
        FIX::LegSide LegSide_59('1');
        noLegs_0_1_2_0.set(LegSide_59);
        InstrumentLeg_59.insert(LegSide_59.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_59("STRING_1312625607");
        noLegs_0_1_2_0.set(LegStateOrProvinceOfIssue_59);
        InstrumentLeg_59.insert(LegStateOrProvinceOfIssue_59.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_59("CHF");
        noLegs_0_1_2_0.set(LegStrikeCurrency_59);
        InstrumentLeg_59.insert(LegStrikeCurrency_59.getString());
        FIX::LegStrikePrice LegStrikePrice_59;
        LegStrikePrice_59.setString("14115151");
        noLegs_0_1_2_0.set(LegStrikePrice_59);
        InstrumentLeg_59.insert(LegStrikePrice_59.getString());
        FIX::LegSymbol LegSymbol_59("STRING_1894648965");
        noLegs_0_1_2_0.set(LegSymbol_59);
        InstrumentLeg_59.insert(LegSymbol_59.getString());
        FIX::LegSymbolSfx LegSymbolSfx_59("STRING_1602647265");
        noLegs_0_1_2_0.set(LegSymbolSfx_59);
        InstrumentLeg_59.insert(LegSymbolSfx_59.getString());
        FIX::LegTimeUnit LegTimeUnit_59("STRING_2046289");
        noLegs_0_1_2_0.set(LegTimeUnit_59);
        InstrumentLeg_59.insert(LegTimeUnit_59.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_59("STRING_919502132");
        noLegs_0_1_2_0.set(LegUnitOfMeasure_59);
        InstrumentLeg_59.insert(LegUnitOfMeasure_59.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_59;
        LegUnitOfMeasureQty_59.setString("11691019");
        noLegs_0_1_2_0.set(LegUnitOfMeasureQty_59);
        InstrumentLeg_59.insert(LegUnitOfMeasureQty_59.getString());
        all_values.push_back(InstrumentLeg_59);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_123;
          FIX::LegSecurityAltID LegSecurityAltID_123("STRING_1769655876");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltID_123);
          LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltID_123.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_123("STRING_1859503453");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltIDSource_123);
          LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltIDSource_123.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_123);

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_60;
        FIX::EncodedLegIssuer EncodedLegIssuer_60("DATA_1089008898");
        noLegs_0_1_2_1.set(EncodedLegIssuer_60);
        InstrumentLeg_60.insert(EncodedLegIssuer_60.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_60(289897373);
        noLegs_0_1_2_1.set(EncodedLegIssuerLen_60);
        InstrumentLeg_60.insert(EncodedLegIssuerLen_60.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_60("DATA_731290730");
        noLegs_0_1_2_1.set(EncodedLegSecurityDesc_60);
        InstrumentLeg_60.insert(EncodedLegSecurityDesc_60.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_60(1102663817);
        noLegs_0_1_2_1.set(EncodedLegSecurityDescLen_60);
        InstrumentLeg_60.insert(EncodedLegSecurityDescLen_60.getString());
        FIX::LegCFICode LegCFICode_60("STRING_1671921299");
        noLegs_0_1_2_1.set(LegCFICode_60);
        InstrumentLeg_60.insert(LegCFICode_60.getString());
        FIX::LegContractMultiplier LegContractMultiplier_60;
        LegContractMultiplier_60.setString("7829053");
        noLegs_0_1_2_1.set(LegContractMultiplier_60);
        InstrumentLeg_60.insert(LegContractMultiplier_60.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_60(276950751);
        noLegs_0_1_2_1.set(LegContractMultiplierUnit_60);
        InstrumentLeg_60.insert(LegContractMultiplierUnit_60.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_60("MONTHYEAR_1569735993");
        noLegs_0_1_2_1.set(LegContractSettlMonth_60);
        InstrumentLeg_60.insert(LegContractSettlMonth_60.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_60("COUNTRY_805096009");
        noLegs_0_1_2_1.set(LegCountryOfIssue_60);
        InstrumentLeg_60.insert(LegCountryOfIssue_60.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_60("LOCALMKTDATE_1881796638");
        noLegs_0_1_2_1.set(LegCouponPaymentDate_60);
        InstrumentLeg_60.insert(LegCouponPaymentDate_60.getString());
        FIX::LegCouponRate LegCouponRate_60;
        LegCouponRate_60.setString("44.350000");
        noLegs_0_1_2_1.set(LegCouponRate_60);
        InstrumentLeg_60.insert(LegCouponRate_60.getString());
        FIX::LegCreditRating LegCreditRating_60("STRING_1365842300");
        noLegs_0_1_2_1.set(LegCreditRating_60);
        InstrumentLeg_60.insert(LegCreditRating_60.getString());
        FIX::LegCurrency LegCurrency_60("CHF");
        noLegs_0_1_2_1.set(LegCurrency_60);
        InstrumentLeg_60.insert(LegCurrency_60.getString());
        FIX::LegDatedDate LegDatedDate_60("LOCALMKTDATE_689727328");
        noLegs_0_1_2_1.set(LegDatedDate_60);
        InstrumentLeg_60.insert(LegDatedDate_60.getString());
        FIX::LegExerciseStyle LegExerciseStyle_60(27228465);
        noLegs_0_1_2_1.set(LegExerciseStyle_60);
        InstrumentLeg_60.insert(LegExerciseStyle_60.getString());
        FIX::LegFactor LegFactor_60;
        LegFactor_60.setString("6593291");
        noLegs_0_1_2_1.set(LegFactor_60);
        InstrumentLeg_60.insert(LegFactor_60.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_60(1427035916);
        noLegs_0_1_2_1.set(LegFlowScheduleType_60);
        InstrumentLeg_60.insert(LegFlowScheduleType_60.getString());
        FIX::LegInstrRegistry LegInstrRegistry_60("STRING_1709683183");
        noLegs_0_1_2_1.set(LegInstrRegistry_60);
        InstrumentLeg_60.insert(LegInstrRegistry_60.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_60("LOCALMKTDATE_1971954804");
        noLegs_0_1_2_1.set(LegInterestAccrualDate_60);
        InstrumentLeg_60.insert(LegInterestAccrualDate_60.getString());
        FIX::LegIssueDate LegIssueDate_60("LOCALMKTDATE_52921699");
        noLegs_0_1_2_1.set(LegIssueDate_60);
        InstrumentLeg_60.insert(LegIssueDate_60.getString());
        FIX::LegIssuer LegIssuer_60("STRING_997802744");
        noLegs_0_1_2_1.set(LegIssuer_60);
        InstrumentLeg_60.insert(LegIssuer_60.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_60("STRING_1235986341");
        noLegs_0_1_2_1.set(LegLocaleOfIssue_60);
        InstrumentLeg_60.insert(LegLocaleOfIssue_60.getString());
        FIX::LegMaturityDate LegMaturityDate_60("LOCALMKTDATE_1947570664");
        noLegs_0_1_2_1.set(LegMaturityDate_60);
        InstrumentLeg_60.insert(LegMaturityDate_60.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_60("MONTHYEAR_452966361");
        noLegs_0_1_2_1.set(LegMaturityMonthYear_60);
        InstrumentLeg_60.insert(LegMaturityMonthYear_60.getString());
        FIX::LegMaturityTime LegMaturityTime_60("TZTIMEONLY_1238032630");
        noLegs_0_1_2_1.set(LegMaturityTime_60);
        InstrumentLeg_60.insert(LegMaturityTime_60.getString());
        FIX::LegOptAttribute LegOptAttribute_60('7');
        noLegs_0_1_2_1.set(LegOptAttribute_60);
        InstrumentLeg_60.insert(LegOptAttribute_60.getString());
        FIX::LegOptionRatio LegOptionRatio_60;
        LegOptionRatio_60.setString("16220682");
        noLegs_0_1_2_1.set(LegOptionRatio_60);
        InstrumentLeg_60.insert(LegOptionRatio_60.getString());
        FIX::LegPool LegPool_60("STRING_31117223");
        noLegs_0_1_2_1.set(LegPool_60);
        InstrumentLeg_60.insert(LegPool_60.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_60("STRING_341761376");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasure_60);
        InstrumentLeg_60.insert(LegPriceUnitOfMeasure_60.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_60;
        LegPriceUnitOfMeasureQty_60.setString("13340880");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasureQty_60);
        InstrumentLeg_60.insert(LegPriceUnitOfMeasureQty_60.getString());
        FIX::LegProduct LegProduct_60(1120126121);
        noLegs_0_1_2_1.set(LegProduct_60);
        InstrumentLeg_60.insert(LegProduct_60.getString());
        FIX::LegPutOrCall LegPutOrCall_60(631658750);
        noLegs_0_1_2_1.set(LegPutOrCall_60);
        InstrumentLeg_60.insert(LegPutOrCall_60.getString());
        FIX::LegRatioQty LegRatioQty_60;
        LegRatioQty_60.setString("20653788");
        noLegs_0_1_2_1.set(LegRatioQty_60);
        InstrumentLeg_60.insert(LegRatioQty_60.getString());
        FIX::LegRedemptionDate LegRedemptionDate_60("LOCALMKTDATE_75306291");
        noLegs_0_1_2_1.set(LegRedemptionDate_60);
        InstrumentLeg_60.insert(LegRedemptionDate_60.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_60("STRING_156096401");
        noLegs_0_1_2_1.set(LegRepoCollateralSecurityType_60);
        InstrumentLeg_60.insert(LegRepoCollateralSecurityType_60.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_60;
        LegRepurchaseRate_60.setString("5.560000");
        noLegs_0_1_2_1.set(LegRepurchaseRate_60);
        InstrumentLeg_60.insert(LegRepurchaseRate_60.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_60(352257042);
        noLegs_0_1_2_1.set(LegRepurchaseTerm_60);
        InstrumentLeg_60.insert(LegRepurchaseTerm_60.getString());
        FIX::LegSecurityDesc LegSecurityDesc_60("STRING_1725832395");
        noLegs_0_1_2_1.set(LegSecurityDesc_60);
        InstrumentLeg_60.insert(LegSecurityDesc_60.getString());
        FIX::LegSecurityExchange LegSecurityExchange_60("EXCHANGE_1505896565");
        noLegs_0_1_2_1.set(LegSecurityExchange_60);
        InstrumentLeg_60.insert(LegSecurityExchange_60.getString());
        FIX::LegSecurityID LegSecurityID_60("STRING_86570033");
        noLegs_0_1_2_1.set(LegSecurityID_60);
        InstrumentLeg_60.insert(LegSecurityID_60.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_60("STRING_1502833182");
        noLegs_0_1_2_1.set(LegSecurityIDSource_60);
        InstrumentLeg_60.insert(LegSecurityIDSource_60.getString());
        FIX::LegSecuritySubType LegSecuritySubType_60("STRING_724255217");
        noLegs_0_1_2_1.set(LegSecuritySubType_60);
        InstrumentLeg_60.insert(LegSecuritySubType_60.getString());
        FIX::LegSecurityType LegSecurityType_60("STRING_460498654");
        noLegs_0_1_2_1.set(LegSecurityType_60);
        InstrumentLeg_60.insert(LegSecurityType_60.getString());
        FIX::LegSide LegSide_60('1');
        noLegs_0_1_2_1.set(LegSide_60);
        InstrumentLeg_60.insert(LegSide_60.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_60("STRING_1413982546");
        noLegs_0_1_2_1.set(LegStateOrProvinceOfIssue_60);
        InstrumentLeg_60.insert(LegStateOrProvinceOfIssue_60.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_60("JPY");
        noLegs_0_1_2_1.set(LegStrikeCurrency_60);
        InstrumentLeg_60.insert(LegStrikeCurrency_60.getString());
        FIX::LegStrikePrice LegStrikePrice_60;
        LegStrikePrice_60.setString("6935348");
        noLegs_0_1_2_1.set(LegStrikePrice_60);
        InstrumentLeg_60.insert(LegStrikePrice_60.getString());
        FIX::LegSymbol LegSymbol_60("STRING_49926655");
        noLegs_0_1_2_1.set(LegSymbol_60);
        InstrumentLeg_60.insert(LegSymbol_60.getString());
        FIX::LegSymbolSfx LegSymbolSfx_60("STRING_1998910330");
        noLegs_0_1_2_1.set(LegSymbolSfx_60);
        InstrumentLeg_60.insert(LegSymbolSfx_60.getString());
        FIX::LegTimeUnit LegTimeUnit_60("STRING_746456513");
        noLegs_0_1_2_1.set(LegTimeUnit_60);
        InstrumentLeg_60.insert(LegTimeUnit_60.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_60("STRING_1047729399");
        noLegs_0_1_2_1.set(LegUnitOfMeasure_60);
        InstrumentLeg_60.insert(LegUnitOfMeasure_60.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_60;
        LegUnitOfMeasureQty_60.setString("10874130");
        noLegs_0_1_2_1.set(LegUnitOfMeasureQty_60);
        InstrumentLeg_60.insert(LegUnitOfMeasureQty_60.getString());
        all_values.push_back(InstrumentLeg_60);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_124;
          FIX::LegSecurityAltID LegSecurityAltID_124("STRING_1500695761");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltID_124);
          LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltID_124.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_124("STRING_177962005");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltIDSource_124);
          LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltIDSource_124.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_124);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_125;
          FIX::LegSecurityAltID LegSecurityAltID_125("STRING_1266132678");
          noLegSecurityAltID_0_1_1_3_1.set(LegSecurityAltID_125);
          LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltID_125.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_125("STRING_975280390");
          noLegSecurityAltID_0_1_1_3_1.set(LegSecurityAltIDSource_125);
          LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltIDSource_125.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_125);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_1);
      }
      // Instrument
      multiset<string> Instrument_37;
      FIX::AttachmentPoint AttachmentPoint_37;
      AttachmentPoint_37.setString("92.290000");
      noQuoteEntries_0_1_1.set(AttachmentPoint_37);
      Instrument_37.insert(AttachmentPoint_37.getString());
      FIX::CFICode CFICode_37("STRING_1607894054");
      noQuoteEntries_0_1_1.set(CFICode_37);
      Instrument_37.insert(CFICode_37.getString());
      FIX::CPProgram CPProgram_37(2);
      noQuoteEntries_0_1_1.set(CPProgram_37);
      Instrument_37.insert(CPProgram_37.getString());
      FIX::CPRegType CPRegType_37("STRING_1329205350");
      noQuoteEntries_0_1_1.set(CPRegType_37);
      Instrument_37.insert(CPRegType_37.getString());
      FIX::CapPrice CapPrice_37;
      CapPrice_37.setString("920691");
      noQuoteEntries_0_1_1.set(CapPrice_37);
      Instrument_37.insert(CapPrice_37.getString());
      FIX::ContractMultiplier ContractMultiplier_37;
      ContractMultiplier_37.setString("797799");
      noQuoteEntries_0_1_1.set(ContractMultiplier_37);
      Instrument_37.insert(ContractMultiplier_37.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_37(0);
      noQuoteEntries_0_1_1.set(ContractMultiplierUnit_37);
      Instrument_37.insert(ContractMultiplierUnit_37.getString());
      FIX::ContractSettlMonth ContractSettlMonth_37("MONTHYEAR_248165558");
      noQuoteEntries_0_1_1.set(ContractSettlMonth_37);
      Instrument_37.insert(ContractSettlMonth_37.getString());
      FIX::CountryOfIssue CountryOfIssue_37("COUNTRY_780580546");
      noQuoteEntries_0_1_1.set(CountryOfIssue_37);
      Instrument_37.insert(CountryOfIssue_37.getString());
      FIX::CouponPaymentDate CouponPaymentDate_37("LOCALMKTDATE_1756768684");
      noQuoteEntries_0_1_1.set(CouponPaymentDate_37);
      Instrument_37.insert(CouponPaymentDate_37.getString());
      FIX::CouponRate CouponRate_37;
      CouponRate_37.setString("79.530000");
      noQuoteEntries_0_1_1.set(CouponRate_37);
      Instrument_37.insert(CouponRate_37.getString());
      FIX::CreditRating CreditRating_37("STRING_138993463");
      noQuoteEntries_0_1_1.set(CreditRating_37);
      Instrument_37.insert(CreditRating_37.getString());
      FIX::DatedDate DatedDate_37("LOCALMKTDATE_1843338717");
      noQuoteEntries_0_1_1.set(DatedDate_37);
      Instrument_37.insert(DatedDate_37.getString());
      FIX::DetachmentPoint DetachmentPoint_37;
      DetachmentPoint_37.setString("74.870000");
      noQuoteEntries_0_1_1.set(DetachmentPoint_37);
      Instrument_37.insert(DetachmentPoint_37.getString());
      FIX::EncodedIssuer EncodedIssuer_37("DATA_863248681");
      noQuoteEntries_0_1_1.set(EncodedIssuer_37);
      Instrument_37.insert(EncodedIssuer_37.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_37(156353723);
      noQuoteEntries_0_1_1.set(EncodedIssuerLen_37);
      Instrument_37.insert(EncodedIssuerLen_37.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_37("DATA_696973817");
      noQuoteEntries_0_1_1.set(EncodedSecurityDesc_37);
      Instrument_37.insert(EncodedSecurityDesc_37.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_37(129747579);
      noQuoteEntries_0_1_1.set(EncodedSecurityDescLen_37);
      Instrument_37.insert(EncodedSecurityDescLen_37.getString());
      FIX::ExerciseStyle ExerciseStyle_37(1);
      noQuoteEntries_0_1_1.set(ExerciseStyle_37);
      Instrument_37.insert(ExerciseStyle_37.getString());
      FIX::Factor Factor_37;
      Factor_37.setString("7239293");
      noQuoteEntries_0_1_1.set(Factor_37);
      Instrument_37.insert(Factor_37.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_37(false);
      noQuoteEntries_0_1_1.set(FlexProductEligibilityIndicator_37);
      Instrument_37.insert(FlexProductEligibilityIndicator_37.getString());
      FIX::FlexibleIndicator FlexibleIndicator_37(true);
      noQuoteEntries_0_1_1.set(FlexibleIndicator_37);
      Instrument_37.insert(FlexibleIndicator_37.getString());
      FIX::FloorPrice FloorPrice_37;
      FloorPrice_37.setString("5753560");
      noQuoteEntries_0_1_1.set(FloorPrice_37);
      Instrument_37.insert(FloorPrice_37.getString());
      FIX::FlowScheduleType FlowScheduleType_37(2);
      noQuoteEntries_0_1_1.set(FlowScheduleType_37);
      Instrument_37.insert(FlowScheduleType_37.getString());
      FIX::InstrRegistry InstrRegistry_37("STRING_1741736897");
      noQuoteEntries_0_1_1.set(InstrRegistry_37);
      Instrument_37.insert(InstrRegistry_37.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_37('1');
      noQuoteEntries_0_1_1.set(InstrmtAssignmentMethod_37);
      Instrument_37.insert(InstrmtAssignmentMethod_37.getString());
      FIX::InterestAccrualDate InterestAccrualDate_37("LOCALMKTDATE_2116282436");
      noQuoteEntries_0_1_1.set(InterestAccrualDate_37);
      Instrument_37.insert(InterestAccrualDate_37.getString());
      FIX::IssueDate IssueDate_37("LOCALMKTDATE_1094949010");
      noQuoteEntries_0_1_1.set(IssueDate_37);
      Instrument_37.insert(IssueDate_37.getString());
      FIX::Issuer Issuer_37("STRING_1840731055");
      noQuoteEntries_0_1_1.set(Issuer_37);
      Instrument_37.insert(Issuer_37.getString());
      FIX::ListMethod ListMethod_37(0);
      noQuoteEntries_0_1_1.set(ListMethod_37);
      Instrument_37.insert(ListMethod_37.getString());
      FIX::LocaleOfIssue LocaleOfIssue_37("STRING_2070229401");
      noQuoteEntries_0_1_1.set(LocaleOfIssue_37);
      Instrument_37.insert(LocaleOfIssue_37.getString());
      FIX::MaturityDate MaturityDate_37("LOCALMKTDATE_2049810284");
      noQuoteEntries_0_1_1.set(MaturityDate_37);
      Instrument_37.insert(MaturityDate_37.getString());
      FIX::MaturityMonthYear MaturityMonthYear_37("MONTHYEAR_695341873");
      noQuoteEntries_0_1_1.set(MaturityMonthYear_37);
      Instrument_37.insert(MaturityMonthYear_37.getString());
      FIX::MaturityTime MaturityTime_37("TZTIMEONLY_84630578");
      noQuoteEntries_0_1_1.set(MaturityTime_37);
      Instrument_37.insert(MaturityTime_37.getString());
      FIX::MinPriceIncrement MinPriceIncrement_37;
      MinPriceIncrement_37.setString("12315319");
      noQuoteEntries_0_1_1.set(MinPriceIncrement_37);
      Instrument_37.insert(MinPriceIncrement_37.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_37;
      MinPriceIncrementAmount_37.setString("7874110");
      noQuoteEntries_0_1_1.set(MinPriceIncrementAmount_37);
      Instrument_37.insert(MinPriceIncrementAmount_37.getString());
      FIX::NTPositionLimit NTPositionLimit_37(164410568);
      noQuoteEntries_0_1_1.set(NTPositionLimit_37);
      Instrument_37.insert(NTPositionLimit_37.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_37;
      NotionalPercentageOutstanding_37.setString("99.800000");
      noQuoteEntries_0_1_1.set(NotionalPercentageOutstanding_37);
      Instrument_37.insert(NotionalPercentageOutstanding_37.getString());
      FIX::OptAttribute OptAttribute_37('1');
      noQuoteEntries_0_1_1.set(OptAttribute_37);
      Instrument_37.insert(OptAttribute_37.getString());
      FIX::OptPayoutAmount OptPayoutAmount_37;
      OptPayoutAmount_37.setString("9449911");
      noQuoteEntries_0_1_1.set(OptPayoutAmount_37);
      Instrument_37.insert(OptPayoutAmount_37.getString());
      FIX::OptPayoutType OptPayoutType_37(2);
      noQuoteEntries_0_1_1.set(OptPayoutType_37);
      Instrument_37.insert(OptPayoutType_37.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_37;
      OriginalNotionalPercentageOutstanding_37.setString("8.920000");
      noQuoteEntries_0_1_1.set(OriginalNotionalPercentageOutstanding_37);
      Instrument_37.insert(OriginalNotionalPercentageOutstanding_37.getString());
      FIX::Pool Pool_37("STRING_1083984577");
      noQuoteEntries_0_1_1.set(Pool_37);
      Instrument_37.insert(Pool_37.getString());
      FIX::PositionLimit PositionLimit_37(1941183733);
      noQuoteEntries_0_1_1.set(PositionLimit_37);
      Instrument_37.insert(PositionLimit_37.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_37("STRING_STD");
      noQuoteEntries_0_1_1.set(PriceQuoteMethod_37);
      Instrument_37.insert(PriceQuoteMethod_37.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_37("STRING_1947233258");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasure_37);
      Instrument_37.insert(PriceUnitOfMeasure_37.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_37;
      PriceUnitOfMeasureQty_37.setString("20975374");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasureQty_37);
      Instrument_37.insert(PriceUnitOfMeasureQty_37.getString());
      FIX::Product Product_39(11);
      noQuoteEntries_0_1_1.set(Product_39);
      Instrument_37.insert(Product_39.getString());
      FIX::ProductComplex ProductComplex_37("STRING_2076980837");
      noQuoteEntries_0_1_1.set(ProductComplex_37);
      Instrument_37.insert(ProductComplex_37.getString());
      FIX::PutOrCall PutOrCall_37(1);
      noQuoteEntries_0_1_1.set(PutOrCall_37);
      Instrument_37.insert(PutOrCall_37.getString());
      FIX::RedemptionDate RedemptionDate_37("LOCALMKTDATE_1464857892");
      noQuoteEntries_0_1_1.set(RedemptionDate_37);
      Instrument_37.insert(RedemptionDate_37.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_37("STRING_752779583");
      noQuoteEntries_0_1_1.set(RepoCollateralSecurityType_37);
      Instrument_37.insert(RepoCollateralSecurityType_37.getString());
      FIX::RepurchaseRate RepurchaseRate_37;
      RepurchaseRate_37.setString("21.490000");
      noQuoteEntries_0_1_1.set(RepurchaseRate_37);
      Instrument_37.insert(RepurchaseRate_37.getString());
      FIX::RepurchaseTerm RepurchaseTerm_37(2040213918);
      noQuoteEntries_0_1_1.set(RepurchaseTerm_37);
      Instrument_37.insert(RepurchaseTerm_37.getString());
      FIX::RestructuringType RestructuringType_37("STRING_MM");
      noQuoteEntries_0_1_1.set(RestructuringType_37);
      Instrument_37.insert(RestructuringType_37.getString());
      FIX::SecurityDesc SecurityDesc_37("STRING_882395399");
      noQuoteEntries_0_1_1.set(SecurityDesc_37);
      Instrument_37.insert(SecurityDesc_37.getString());
      FIX::SecurityExchange SecurityExchange_37("EXCHANGE_1555499320");
      noQuoteEntries_0_1_1.set(SecurityExchange_37);
      Instrument_37.insert(SecurityExchange_37.getString());
      FIX::SecurityGroup SecurityGroup_37("STRING_143833630");
      noQuoteEntries_0_1_1.set(SecurityGroup_37);
      Instrument_37.insert(SecurityGroup_37.getString());
      FIX::SecurityID SecurityID_37("STRING_1977344409");
      noQuoteEntries_0_1_1.set(SecurityID_37);
      Instrument_37.insert(SecurityID_37.getString());
      FIX::SecurityIDSource SecurityIDSource_37("STRING_K");
      noQuoteEntries_0_1_1.set(SecurityIDSource_37);
      Instrument_37.insert(SecurityIDSource_37.getString());
      FIX::SecurityStatus SecurityStatus_37("STRING_2");
      noQuoteEntries_0_1_1.set(SecurityStatus_37);
      Instrument_37.insert(SecurityStatus_37.getString());
      FIX::SecuritySubType SecuritySubType_38("STRING_1900090162");
      noQuoteEntries_0_1_1.set(SecuritySubType_38);
      Instrument_37.insert(SecuritySubType_38.getString());
      FIX::SecurityType SecurityType_39("STRING_USTB");
      noQuoteEntries_0_1_1.set(SecurityType_39);
      Instrument_37.insert(SecurityType_39.getString());
      FIX::Seniority Seniority_37("STRING_SD");
      noQuoteEntries_0_1_1.set(Seniority_37);
      Instrument_37.insert(Seniority_37.getString());
      FIX::SettlMethod SettlMethod_37('C');
      noQuoteEntries_0_1_1.set(SettlMethod_37);
      Instrument_37.insert(SettlMethod_37.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_37("STRING_235121701");
      noQuoteEntries_0_1_1.set(SettleOnOpenFlag_37);
      Instrument_37.insert(SettleOnOpenFlag_37.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_37("STRING_714034351");
      noQuoteEntries_0_1_1.set(StateOrProvinceOfIssue_37);
      Instrument_37.insert(StateOrProvinceOfIssue_37.getString());
      FIX::StrikeCurrency StrikeCurrency_37("CHF");
      noQuoteEntries_0_1_1.set(StrikeCurrency_37);
      Instrument_37.insert(StrikeCurrency_37.getString());
      FIX::StrikeMultiplier StrikeMultiplier_37;
      StrikeMultiplier_37.setString("17496109");
      noQuoteEntries_0_1_1.set(StrikeMultiplier_37);
      Instrument_37.insert(StrikeMultiplier_37.getString());
      FIX::StrikePrice StrikePrice_37;
      StrikePrice_37.setString("9466387");
      noQuoteEntries_0_1_1.set(StrikePrice_37);
      Instrument_37.insert(StrikePrice_37.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_37(3);
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryMethod_37);
      Instrument_37.insert(StrikePriceBoundaryMethod_37.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_37;
      StrikePriceBoundaryPrecision_37.setString("81.830000");
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryPrecision_37);
      Instrument_37.insert(StrikePriceBoundaryPrecision_37.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_37(1);
      noQuoteEntries_0_1_1.set(StrikePriceDeterminationMethod_37);
      Instrument_37.insert(StrikePriceDeterminationMethod_37.getString());
      FIX::StrikeValue StrikeValue_37;
      StrikeValue_37.setString("6152267");
      noQuoteEntries_0_1_1.set(StrikeValue_37);
      Instrument_37.insert(StrikeValue_37.getString());
      FIX::Symbol Symbol_37("STRING_508172915");
      noQuoteEntries_0_1_1.set(Symbol_37);
      Instrument_37.insert(Symbol_37.getString());
      FIX::SymbolSfx SymbolSfx_37("STRING_CD");
      noQuoteEntries_0_1_1.set(SymbolSfx_37);
      Instrument_37.insert(SymbolSfx_37.getString());
      FIX::TimeUnit TimeUnit_37("STRING_Min");
      noQuoteEntries_0_1_1.set(TimeUnit_37);
      Instrument_37.insert(TimeUnit_37.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_37(1);
      noQuoteEntries_0_1_1.set(UnderlyingPriceDeterminationMethod_37);
      Instrument_37.insert(UnderlyingPriceDeterminationMethod_37.getString());
      FIX::UnitOfMeasure UnitOfMeasure_37("STRING_MMbbl");
      noQuoteEntries_0_1_1.set(UnitOfMeasure_37);
      Instrument_37.insert(UnitOfMeasure_37.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_37;
      UnitOfMeasureQty_37.setString("11594152");
      noQuoteEntries_0_1_1.set(UnitOfMeasureQty_37);
      Instrument_37.insert(UnitOfMeasureQty_37.getString());
      FIX::ValuationMethod ValuationMethod_37("STRING_CDSD");
      noQuoteEntries_0_1_1.set(ValuationMethod_37);
      Instrument_37.insert(ValuationMethod_37.getString());
      all_values.push_back(Instrument_37);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_74;
        FIX::ComplexEventCondition ComplexEventCondition_74(1);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventCondition_74.getString());
        FIX::ComplexEventPrice ComplexEventPrice_74;
        ComplexEventPrice_74.setString("4592059");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPrice_74.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_74(5);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryMethod_74.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_74;
        ComplexEventPriceBoundaryPrecision_74.setString("91.430000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryPrecision_74.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_74(1);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceTimeType_74.getString());
        FIX::ComplexEventType ComplexEventType_74(9);
        noComplexEvents_0_1_2_0.set(ComplexEventType_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventType_74.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_74;
        ComplexOptPayoutAmount_74.setString("10123299");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexOptPayoutAmount_74.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_74);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_153;
          FIX::ComplexEventEndDate ComplexEventEndDate_153(FIX::UTCTIMESTAMP(19, 53, 38, 23, 8, 2014));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventEndDate_153.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_153(FIX::UTCTIMESTAMP(4, 13, 6, 2, 9, 2000));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventStartDate_153.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_153);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_322;
            FIX::ComplexEventEndTime ComplexEventEndTime_322(FIX::UTCTIMEONLY(13, 39, 8));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_322);
            ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventEndTime_322.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_322(FIX::UTCTIMEONLY(14, 57, 56));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_322);
            ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventStartTime_322.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_322);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
            FIX::ComplexEventEndTime ComplexEventEndTime_323(FIX::UTCTIMEONLY(9, 45, 1));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_323);
            ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventEndTime_323.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_323(FIX::UTCTIMEONLY(12, 57, 19));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_323);
            ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventStartTime_323.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_154;
          FIX::ComplexEventEndDate ComplexEventEndDate_154(FIX::UTCTIMESTAMP(16, 12, 23, 16, 8, 2005));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventEndDate_154.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_154(FIX::UTCTIMESTAMP(12, 30, 38, 18, 4, 2007));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventStartDate_154.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_154);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
            FIX::ComplexEventEndTime ComplexEventEndTime_324(FIX::UTCTIMEONLY(14, 10, 59));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_324);
            ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventEndTime_324.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_324(FIX::UTCTIMEONLY(16, 57, 43));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_324);
            ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventStartTime_324.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
            FIX::ComplexEventEndTime ComplexEventEndTime_325(FIX::UTCTIMEONLY(10, 20, 55));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventEndTime_325);
            ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventEndTime_325.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_325(FIX::UTCTIMEONLY(8, 52, 33));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventStartTime_325);
            ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventStartTime_325.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
            FIX::ComplexEventEndTime ComplexEventEndTime_326(FIX::UTCTIMEONLY(9, 46, 57));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventEndTime_326);
            ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventEndTime_326.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_326(FIX::UTCTIMEONLY(9, 14, 1));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventStartTime_326);
            ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventStartTime_326.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_69;
        FIX::EventDate EventDate_69("LOCALMKTDATE_394550917");
        noEvents_0_1_2_0.set(EventDate_69);
        EvntGrp_NoEvents_69.insert(EventDate_69.getString());
        FIX::EventPx EventPx_69;
        EventPx_69.setString("5168219");
        noEvents_0_1_2_0.set(EventPx_69);
        EvntGrp_NoEvents_69.insert(EventPx_69.getString());
        FIX::EventText EventText_69("STRING_1137389351");
        noEvents_0_1_2_0.set(EventText_69);
        EvntGrp_NoEvents_69.insert(EventText_69.getString());
        FIX::EventTime EventTime_69(FIX::UTCTIMESTAMP(20, 42, 55, 14, 5, 2010));
        noEvents_0_1_2_0.set(EventTime_69);
        EvntGrp_NoEvents_69.insert(EventTime_69.getString());
        FIX::EventType EventType_69(18);
        noEvents_0_1_2_0.set(EventType_69);
        EvntGrp_NoEvents_69.insert(EventType_69.getString());
        all_values.push_back(EvntGrp_NoEvents_69);

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_69;
        FIX::InstrumentPartyID InstrumentPartyID_69("STRING_1516668103");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_69);
        InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyID_69.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_69('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_69);
        InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyIDSource_69.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_69(397843670);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_69);
        InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyRole_69.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_69);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151;
          FIX::InstrumentPartySubID InstrumentPartySubID_151("STRING_720624504");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_151);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubID_151.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_151(419068545);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_151);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubIDType_151.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152;
          FIX::InstrumentPartySubID InstrumentPartySubID_152("STRING_1271106456");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_152);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubID_152.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_152(2122355121);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_152);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubIDType_152.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153;
          FIX::InstrumentPartySubID InstrumentPartySubID_153("STRING_732526057");
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubID_153);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubID_153.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_153(730588381);
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubIDType_153);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubIDType_153.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_70;
        FIX::InstrumentPartyID InstrumentPartyID_70("STRING_1462711494");
        noInstrumentParties_0_1_2_1.set(InstrumentPartyID_70);
        InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyID_70.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_70('2');
        noInstrumentParties_0_1_2_1.set(InstrumentPartyIDSource_70);
        InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyIDSource_70.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_70(403126359);
        noInstrumentParties_0_1_2_1.set(InstrumentPartyRole_70);
        InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyRole_70.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_70);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154;
          FIX::InstrumentPartySubID InstrumentPartySubID_154("STRING_838154467");
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubID_154);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubID_154.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_154(643400185);
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubIDType_154);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubIDType_154.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155;
          FIX::InstrumentPartySubID InstrumentPartySubID_155("STRING_483544130");
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubID_155);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubID_155.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_155(1836320048);
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubIDType_155);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubIDType_155.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_71;
        FIX::InstrumentPartyID InstrumentPartyID_71("STRING_382287686");
        noInstrumentParties_0_1_2_2.set(InstrumentPartyID_71);
        InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyID_71.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_71('8');
        noInstrumentParties_0_1_2_2.set(InstrumentPartyIDSource_71);
        InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyIDSource_71.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_71(205658372);
        noInstrumentParties_0_1_2_2.set(InstrumentPartyRole_71);
        InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyRole_71.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_71);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156;
          FIX::InstrumentPartySubID InstrumentPartySubID_156("STRING_389604863");
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubID_156);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubID_156.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_156(1674736384);
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubIDType_156);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubIDType_156.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157;
          FIX::InstrumentPartySubID InstrumentPartySubID_157("STRING_128232252");
          noInstrumentPartySubIDs_0_1_2_3_1.set(InstrumentPartySubID_157);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubID_157.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_157(148565650);
          noInstrumentPartySubIDs_0_1_2_3_1.set(InstrumentPartySubIDType_157);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubIDType_157.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158;
          FIX::InstrumentPartySubID InstrumentPartySubID_158("STRING_917592107");
          noInstrumentPartySubIDs_0_1_2_3_2.set(InstrumentPartySubID_158);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubID_158.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_158(1435832524);
          noInstrumentPartySubIDs_0_1_2_3_2.set(InstrumentPartySubIDType_158);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubIDType_158.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_77;
        FIX::SecurityAltID SecurityAltID_77("STRING_810584656");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_77);
        SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltID_77.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_77("STRING_1092354052");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_77);
        SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltIDSource_77.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_77);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_78;
        FIX::SecurityAltID SecurityAltID_78("STRING_1903755400");
        noSecurityAltID_0_1_2_1.set(SecurityAltID_78);
        SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltID_78.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_78("STRING_300271941");
        noSecurityAltID_0_1_2_1.set(SecurityAltIDSource_78);
        SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltIDSource_78.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_78);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_79;
        FIX::SecurityAltID SecurityAltID_79("STRING_1490197722");
        noSecurityAltID_0_1_2_2.set(SecurityAltID_79);
        SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltID_79.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_79("STRING_1661394241");
        noSecurityAltID_0_1_2_2.set(SecurityAltIDSource_79);
        SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltIDSource_79.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_79);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_74;
      FIX::SecurityXML SecurityXML_75("XMLDATA_1020896445");
      noQuoteEntries_0_1_1.set(SecurityXML_75);
      FIX::SecurityXMLLen SecurityXMLLen_37(1909266267);
      noQuoteEntries_0_1_1.set(SecurityXMLLen_37);
      FIX::SecurityXMLSchema SecurityXMLSchema_37("STRING_785017049");
      noQuoteEntries_0_1_1.set(SecurityXMLSchema_37);
      SecurityXML_74.insert(SecurityXMLSchema_37.getString());
      all_values.push_back(SecurityXML_74);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_2;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_2;
      BidForwardPoints_2.setString("9957679");
      noQuoteEntries_0_1_2.set(BidForwardPoints_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidForwardPoints_2.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_2;
      BidForwardPoints2_2.setString("4943086");
      noQuoteEntries_0_1_2.set(BidForwardPoints2_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidForwardPoints2_2.getString());
      FIX::BidPx BidPx_2;
      BidPx_2.setString("15156054");
      noQuoteEntries_0_1_2.set(BidPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidPx_2.getString());
      FIX::BidSize BidSize_2;
      BidSize_2.setString("3109957");
      noQuoteEntries_0_1_2.set(BidSize_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidSize_2.getString());
      FIX::BidSpotRate BidSpotRate_2;
      BidSpotRate_2.setString("4499776");
      noQuoteEntries_0_1_2.set(BidSpotRate_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidSpotRate_2.getString());
      FIX::BidYield BidYield_2;
      BidYield_2.setString("17.900000");
      noQuoteEntries_0_1_2.set(BidYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidYield_2.getString());
      FIX::BookingType BookingType_8(1);
      noQuoteEntries_0_1_2.set(BookingType_8);
      QuotEntryGrp_NoQuoteEntries_2.insert(BookingType_8.getString());
      FIX::Currency Currency_35("CHF");
      noQuoteEntries_0_1_2.set(Currency_35);
      QuotEntryGrp_NoQuoteEntries_2.insert(Currency_35.getString());
      FIX::MidPx MidPx_2;
      MidPx_2.setString("15256564");
      noQuoteEntries_0_1_2.set(MidPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(MidPx_2.getString());
      FIX::MidYield MidYield_2;
      MidYield_2.setString("85.230000");
      noQuoteEntries_0_1_2.set(MidYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(MidYield_2.getString());
      FIX::OfferForwardPoints OfferForwardPoints_2;
      OfferForwardPoints_2.setString("7969360");
      noQuoteEntries_0_1_2.set(OfferForwardPoints_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferForwardPoints_2.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_2;
      OfferForwardPoints2_2.setString("2562678");
      noQuoteEntries_0_1_2.set(OfferForwardPoints2_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferForwardPoints2_2.getString());
      FIX::OfferPx OfferPx_2;
      OfferPx_2.setString("11826268");
      noQuoteEntries_0_1_2.set(OfferPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferPx_2.getString());
      FIX::OfferSize OfferSize_2;
      OfferSize_2.setString("1691294");
      noQuoteEntries_0_1_2.set(OfferSize_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferSize_2.getString());
      FIX::OfferSpotRate OfferSpotRate_2;
      OfferSpotRate_2.setString("6458727");
      noQuoteEntries_0_1_2.set(OfferSpotRate_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferSpotRate_2.getString());
      FIX::OfferYield OfferYield_2;
      OfferYield_2.setString("96.310000");
      noQuoteEntries_0_1_2.set(OfferYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferYield_2.getString());
      FIX::OrdType OrdType_35('1');
      noQuoteEntries_0_1_2.set(OrdType_35);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrdType_35.getString());
      FIX::OrderCapacity OrderCapacity_11('R');
      noQuoteEntries_0_1_2.set(OrderCapacity_11);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderCapacity_11.getString());
      FIX::OrderQty2 OrderQty2_3;
      OrderQty2_3.setString("16274717");
      noQuoteEntries_0_1_2.set(OrderQty2_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderQty2_3.getString());
      FIX::OrderRestrictions OrderRestrictions_6("MULTIPLECHARVALUE_B");
      noQuoteEntries_0_1_2.set(OrderRestrictions_6);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderRestrictions_6.getString());
      FIX::QuoteEntryID QuoteEntryID_7("STRING_1181525707");
      noQuoteEntries_0_1_2.set(QuoteEntryID_7);
      QuotEntryGrp_NoQuoteEntries_2.insert(QuoteEntryID_7.getString());
      FIX::SettlDate SettlDate_27("LOCALMKTDATE_290572747");
      noQuoteEntries_0_1_2.set(SettlDate_27);
      QuotEntryGrp_NoQuoteEntries_2.insert(SettlDate_27.getString());
      FIX::SettlDate2 SettlDate2_3("LOCALMKTDATE_678064584");
      noQuoteEntries_0_1_2.set(SettlDate2_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(SettlDate2_3.getString());
      FIX::TradingSessionID TradingSessionID_39("STRING_4");
      noQuoteEntries_0_1_2.set(TradingSessionID_39);
      QuotEntryGrp_NoQuoteEntries_2.insert(TradingSessionID_39.getString());
      FIX::TradingSessionSubID TradingSessionSubID_39("STRING_1");
      noQuoteEntries_0_1_2.set(TradingSessionSubID_39);
      QuotEntryGrp_NoQuoteEntries_2.insert(TradingSessionSubID_39.getString());
      FIX::TransactTime TransactTime_29(FIX::UTCTIMESTAMP(20, 13, 25, 18, 5, 2001));
      noQuoteEntries_0_1_2.set(TransactTime_29);
      QuotEntryGrp_NoQuoteEntries_2.insert(TransactTime_29.getString());
      FIX::ValidUntilTime ValidUntilTime_3(FIX::UTCTIMESTAMP(1, 48, 27, 5, 8, 2007));
      noQuoteEntries_0_1_2.set(ValidUntilTime_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(ValidUntilTime_3.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_2);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_61;
        FIX::EncodedLegIssuer EncodedLegIssuer_61("DATA_844464606");
        noLegs_0_2_2_0.set(EncodedLegIssuer_61);
        InstrumentLeg_61.insert(EncodedLegIssuer_61.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_61(1587679369);
        noLegs_0_2_2_0.set(EncodedLegIssuerLen_61);
        InstrumentLeg_61.insert(EncodedLegIssuerLen_61.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_61("DATA_1447574285");
        noLegs_0_2_2_0.set(EncodedLegSecurityDesc_61);
        InstrumentLeg_61.insert(EncodedLegSecurityDesc_61.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_61(2027091501);
        noLegs_0_2_2_0.set(EncodedLegSecurityDescLen_61);
        InstrumentLeg_61.insert(EncodedLegSecurityDescLen_61.getString());
        FIX::LegCFICode LegCFICode_61("STRING_1756808773");
        noLegs_0_2_2_0.set(LegCFICode_61);
        InstrumentLeg_61.insert(LegCFICode_61.getString());
        FIX::LegContractMultiplier LegContractMultiplier_61;
        LegContractMultiplier_61.setString("20934470");
        noLegs_0_2_2_0.set(LegContractMultiplier_61);
        InstrumentLeg_61.insert(LegContractMultiplier_61.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_61(589487484);
        noLegs_0_2_2_0.set(LegContractMultiplierUnit_61);
        InstrumentLeg_61.insert(LegContractMultiplierUnit_61.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_61("MONTHYEAR_2054170429");
        noLegs_0_2_2_0.set(LegContractSettlMonth_61);
        InstrumentLeg_61.insert(LegContractSettlMonth_61.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_61("COUNTRY_740401808");
        noLegs_0_2_2_0.set(LegCountryOfIssue_61);
        InstrumentLeg_61.insert(LegCountryOfIssue_61.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_61("LOCALMKTDATE_69475575");
        noLegs_0_2_2_0.set(LegCouponPaymentDate_61);
        InstrumentLeg_61.insert(LegCouponPaymentDate_61.getString());
        FIX::LegCouponRate LegCouponRate_61;
        LegCouponRate_61.setString("9.610000");
        noLegs_0_2_2_0.set(LegCouponRate_61);
        InstrumentLeg_61.insert(LegCouponRate_61.getString());
        FIX::LegCreditRating LegCreditRating_61("STRING_1921927515");
        noLegs_0_2_2_0.set(LegCreditRating_61);
        InstrumentLeg_61.insert(LegCreditRating_61.getString());
        FIX::LegCurrency LegCurrency_61("EUR");
        noLegs_0_2_2_0.set(LegCurrency_61);
        InstrumentLeg_61.insert(LegCurrency_61.getString());
        FIX::LegDatedDate LegDatedDate_61("LOCALMKTDATE_712241326");
        noLegs_0_2_2_0.set(LegDatedDate_61);
        InstrumentLeg_61.insert(LegDatedDate_61.getString());
        FIX::LegExerciseStyle LegExerciseStyle_61(950893010);
        noLegs_0_2_2_0.set(LegExerciseStyle_61);
        InstrumentLeg_61.insert(LegExerciseStyle_61.getString());
        FIX::LegFactor LegFactor_61;
        LegFactor_61.setString("1912405");
        noLegs_0_2_2_0.set(LegFactor_61);
        InstrumentLeg_61.insert(LegFactor_61.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_61(1163949379);
        noLegs_0_2_2_0.set(LegFlowScheduleType_61);
        InstrumentLeg_61.insert(LegFlowScheduleType_61.getString());
        FIX::LegInstrRegistry LegInstrRegistry_61("STRING_415150495");
        noLegs_0_2_2_0.set(LegInstrRegistry_61);
        InstrumentLeg_61.insert(LegInstrRegistry_61.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_61("LOCALMKTDATE_2121285480");
        noLegs_0_2_2_0.set(LegInterestAccrualDate_61);
        InstrumentLeg_61.insert(LegInterestAccrualDate_61.getString());
        FIX::LegIssueDate LegIssueDate_61("LOCALMKTDATE_253190833");
        noLegs_0_2_2_0.set(LegIssueDate_61);
        InstrumentLeg_61.insert(LegIssueDate_61.getString());
        FIX::LegIssuer LegIssuer_61("STRING_875175899");
        noLegs_0_2_2_0.set(LegIssuer_61);
        InstrumentLeg_61.insert(LegIssuer_61.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_61("STRING_250671785");
        noLegs_0_2_2_0.set(LegLocaleOfIssue_61);
        InstrumentLeg_61.insert(LegLocaleOfIssue_61.getString());
        FIX::LegMaturityDate LegMaturityDate_61("LOCALMKTDATE_858037718");
        noLegs_0_2_2_0.set(LegMaturityDate_61);
        InstrumentLeg_61.insert(LegMaturityDate_61.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_61("MONTHYEAR_1646197068");
        noLegs_0_2_2_0.set(LegMaturityMonthYear_61);
        InstrumentLeg_61.insert(LegMaturityMonthYear_61.getString());
        FIX::LegMaturityTime LegMaturityTime_61("TZTIMEONLY_977519394");
        noLegs_0_2_2_0.set(LegMaturityTime_61);
        InstrumentLeg_61.insert(LegMaturityTime_61.getString());
        FIX::LegOptAttribute LegOptAttribute_61('1');
        noLegs_0_2_2_0.set(LegOptAttribute_61);
        InstrumentLeg_61.insert(LegOptAttribute_61.getString());
        FIX::LegOptionRatio LegOptionRatio_61;
        LegOptionRatio_61.setString("13118469");
        noLegs_0_2_2_0.set(LegOptionRatio_61);
        InstrumentLeg_61.insert(LegOptionRatio_61.getString());
        FIX::LegPool LegPool_61("STRING_845015477");
        noLegs_0_2_2_0.set(LegPool_61);
        InstrumentLeg_61.insert(LegPool_61.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_61("STRING_2024876100");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasure_61);
        InstrumentLeg_61.insert(LegPriceUnitOfMeasure_61.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_61;
        LegPriceUnitOfMeasureQty_61.setString("3556696");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasureQty_61);
        InstrumentLeg_61.insert(LegPriceUnitOfMeasureQty_61.getString());
        FIX::LegProduct LegProduct_61(1689480083);
        noLegs_0_2_2_0.set(LegProduct_61);
        InstrumentLeg_61.insert(LegProduct_61.getString());
        FIX::LegPutOrCall LegPutOrCall_61(1465071821);
        noLegs_0_2_2_0.set(LegPutOrCall_61);
        InstrumentLeg_61.insert(LegPutOrCall_61.getString());
        FIX::LegRatioQty LegRatioQty_61;
        LegRatioQty_61.setString("18032439");
        noLegs_0_2_2_0.set(LegRatioQty_61);
        InstrumentLeg_61.insert(LegRatioQty_61.getString());
        FIX::LegRedemptionDate LegRedemptionDate_61("LOCALMKTDATE_1569087936");
        noLegs_0_2_2_0.set(LegRedemptionDate_61);
        InstrumentLeg_61.insert(LegRedemptionDate_61.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_61("STRING_1074396946");
        noLegs_0_2_2_0.set(LegRepoCollateralSecurityType_61);
        InstrumentLeg_61.insert(LegRepoCollateralSecurityType_61.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_61;
        LegRepurchaseRate_61.setString("73.810000");
        noLegs_0_2_2_0.set(LegRepurchaseRate_61);
        InstrumentLeg_61.insert(LegRepurchaseRate_61.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_61(11091772);
        noLegs_0_2_2_0.set(LegRepurchaseTerm_61);
        InstrumentLeg_61.insert(LegRepurchaseTerm_61.getString());
        FIX::LegSecurityDesc LegSecurityDesc_61("STRING_981083727");
        noLegs_0_2_2_0.set(LegSecurityDesc_61);
        InstrumentLeg_61.insert(LegSecurityDesc_61.getString());
        FIX::LegSecurityExchange LegSecurityExchange_61("EXCHANGE_342125542");
        noLegs_0_2_2_0.set(LegSecurityExchange_61);
        InstrumentLeg_61.insert(LegSecurityExchange_61.getString());
        FIX::LegSecurityID LegSecurityID_61("STRING_80567347");
        noLegs_0_2_2_0.set(LegSecurityID_61);
        InstrumentLeg_61.insert(LegSecurityID_61.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_61("STRING_473481040");
        noLegs_0_2_2_0.set(LegSecurityIDSource_61);
        InstrumentLeg_61.insert(LegSecurityIDSource_61.getString());
        FIX::LegSecuritySubType LegSecuritySubType_61("STRING_116569409");
        noLegs_0_2_2_0.set(LegSecuritySubType_61);
        InstrumentLeg_61.insert(LegSecuritySubType_61.getString());
        FIX::LegSecurityType LegSecurityType_61("STRING_440615669");
        noLegs_0_2_2_0.set(LegSecurityType_61);
        InstrumentLeg_61.insert(LegSecurityType_61.getString());
        FIX::LegSide LegSide_61('6');
        noLegs_0_2_2_0.set(LegSide_61);
        InstrumentLeg_61.insert(LegSide_61.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_61("STRING_828810736");
        noLegs_0_2_2_0.set(LegStateOrProvinceOfIssue_61);
        InstrumentLeg_61.insert(LegStateOrProvinceOfIssue_61.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_61("JPY");
        noLegs_0_2_2_0.set(LegStrikeCurrency_61);
        InstrumentLeg_61.insert(LegStrikeCurrency_61.getString());
        FIX::LegStrikePrice LegStrikePrice_61;
        LegStrikePrice_61.setString("19927601");
        noLegs_0_2_2_0.set(LegStrikePrice_61);
        InstrumentLeg_61.insert(LegStrikePrice_61.getString());
        FIX::LegSymbol LegSymbol_61("STRING_1806659175");
        noLegs_0_2_2_0.set(LegSymbol_61);
        InstrumentLeg_61.insert(LegSymbol_61.getString());
        FIX::LegSymbolSfx LegSymbolSfx_61("STRING_808985324");
        noLegs_0_2_2_0.set(LegSymbolSfx_61);
        InstrumentLeg_61.insert(LegSymbolSfx_61.getString());
        FIX::LegTimeUnit LegTimeUnit_61("STRING_98467300");
        noLegs_0_2_2_0.set(LegTimeUnit_61);
        InstrumentLeg_61.insert(LegTimeUnit_61.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_61("STRING_534351426");
        noLegs_0_2_2_0.set(LegUnitOfMeasure_61);
        InstrumentLeg_61.insert(LegUnitOfMeasure_61.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_61;
        LegUnitOfMeasureQty_61.setString("10596571");
        noLegs_0_2_2_0.set(LegUnitOfMeasureQty_61);
        InstrumentLeg_61.insert(LegUnitOfMeasureQty_61.getString());
        all_values.push_back(InstrumentLeg_61);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_126;
          FIX::LegSecurityAltID LegSecurityAltID_126("STRING_33064847");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltID_126);
          LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltID_126.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_126("STRING_2037176504");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltIDSource_126);
          LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltIDSource_126.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_126);

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_62;
        FIX::EncodedLegIssuer EncodedLegIssuer_62("DATA_43154115");
        noLegs_0_2_2_1.set(EncodedLegIssuer_62);
        InstrumentLeg_62.insert(EncodedLegIssuer_62.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_62(1344911805);
        noLegs_0_2_2_1.set(EncodedLegIssuerLen_62);
        InstrumentLeg_62.insert(EncodedLegIssuerLen_62.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_62("DATA_734708333");
        noLegs_0_2_2_1.set(EncodedLegSecurityDesc_62);
        InstrumentLeg_62.insert(EncodedLegSecurityDesc_62.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_62(2068030216);
        noLegs_0_2_2_1.set(EncodedLegSecurityDescLen_62);
        InstrumentLeg_62.insert(EncodedLegSecurityDescLen_62.getString());
        FIX::LegCFICode LegCFICode_62("STRING_1700581503");
        noLegs_0_2_2_1.set(LegCFICode_62);
        InstrumentLeg_62.insert(LegCFICode_62.getString());
        FIX::LegContractMultiplier LegContractMultiplier_62;
        LegContractMultiplier_62.setString("2767047");
        noLegs_0_2_2_1.set(LegContractMultiplier_62);
        InstrumentLeg_62.insert(LegContractMultiplier_62.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_62(1385618389);
        noLegs_0_2_2_1.set(LegContractMultiplierUnit_62);
        InstrumentLeg_62.insert(LegContractMultiplierUnit_62.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_62("MONTHYEAR_1356341838");
        noLegs_0_2_2_1.set(LegContractSettlMonth_62);
        InstrumentLeg_62.insert(LegContractSettlMonth_62.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_62("COUNTRY_1845792704");
        noLegs_0_2_2_1.set(LegCountryOfIssue_62);
        InstrumentLeg_62.insert(LegCountryOfIssue_62.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_62("LOCALMKTDATE_312531688");
        noLegs_0_2_2_1.set(LegCouponPaymentDate_62);
        InstrumentLeg_62.insert(LegCouponPaymentDate_62.getString());
        FIX::LegCouponRate LegCouponRate_62;
        LegCouponRate_62.setString("55.720000");
        noLegs_0_2_2_1.set(LegCouponRate_62);
        InstrumentLeg_62.insert(LegCouponRate_62.getString());
        FIX::LegCreditRating LegCreditRating_62("STRING_1856884476");
        noLegs_0_2_2_1.set(LegCreditRating_62);
        InstrumentLeg_62.insert(LegCreditRating_62.getString());
        FIX::LegCurrency LegCurrency_62("USD");
        noLegs_0_2_2_1.set(LegCurrency_62);
        InstrumentLeg_62.insert(LegCurrency_62.getString());
        FIX::LegDatedDate LegDatedDate_62("LOCALMKTDATE_1937451824");
        noLegs_0_2_2_1.set(LegDatedDate_62);
        InstrumentLeg_62.insert(LegDatedDate_62.getString());
        FIX::LegExerciseStyle LegExerciseStyle_62(1767096456);
        noLegs_0_2_2_1.set(LegExerciseStyle_62);
        InstrumentLeg_62.insert(LegExerciseStyle_62.getString());
        FIX::LegFactor LegFactor_62;
        LegFactor_62.setString("14167605");
        noLegs_0_2_2_1.set(LegFactor_62);
        InstrumentLeg_62.insert(LegFactor_62.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_62(230583845);
        noLegs_0_2_2_1.set(LegFlowScheduleType_62);
        InstrumentLeg_62.insert(LegFlowScheduleType_62.getString());
        FIX::LegInstrRegistry LegInstrRegistry_62("STRING_263555745");
        noLegs_0_2_2_1.set(LegInstrRegistry_62);
        InstrumentLeg_62.insert(LegInstrRegistry_62.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_62("LOCALMKTDATE_98087611");
        noLegs_0_2_2_1.set(LegInterestAccrualDate_62);
        InstrumentLeg_62.insert(LegInterestAccrualDate_62.getString());
        FIX::LegIssueDate LegIssueDate_62("LOCALMKTDATE_1622092525");
        noLegs_0_2_2_1.set(LegIssueDate_62);
        InstrumentLeg_62.insert(LegIssueDate_62.getString());
        FIX::LegIssuer LegIssuer_62("STRING_1098739238");
        noLegs_0_2_2_1.set(LegIssuer_62);
        InstrumentLeg_62.insert(LegIssuer_62.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_62("STRING_2090847726");
        noLegs_0_2_2_1.set(LegLocaleOfIssue_62);
        InstrumentLeg_62.insert(LegLocaleOfIssue_62.getString());
        FIX::LegMaturityDate LegMaturityDate_62("LOCALMKTDATE_1281268052");
        noLegs_0_2_2_1.set(LegMaturityDate_62);
        InstrumentLeg_62.insert(LegMaturityDate_62.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_62("MONTHYEAR_1907724562");
        noLegs_0_2_2_1.set(LegMaturityMonthYear_62);
        InstrumentLeg_62.insert(LegMaturityMonthYear_62.getString());
        FIX::LegMaturityTime LegMaturityTime_62("TZTIMEONLY_41831378");
        noLegs_0_2_2_1.set(LegMaturityTime_62);
        InstrumentLeg_62.insert(LegMaturityTime_62.getString());
        FIX::LegOptAttribute LegOptAttribute_62('1');
        noLegs_0_2_2_1.set(LegOptAttribute_62);
        InstrumentLeg_62.insert(LegOptAttribute_62.getString());
        FIX::LegOptionRatio LegOptionRatio_62;
        LegOptionRatio_62.setString("8198980");
        noLegs_0_2_2_1.set(LegOptionRatio_62);
        InstrumentLeg_62.insert(LegOptionRatio_62.getString());
        FIX::LegPool LegPool_62("STRING_998336396");
        noLegs_0_2_2_1.set(LegPool_62);
        InstrumentLeg_62.insert(LegPool_62.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_62("STRING_1848684325");
        noLegs_0_2_2_1.set(LegPriceUnitOfMeasure_62);
        InstrumentLeg_62.insert(LegPriceUnitOfMeasure_62.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_62;
        LegPriceUnitOfMeasureQty_62.setString("7095908");
        noLegs_0_2_2_1.set(LegPriceUnitOfMeasureQty_62);
        InstrumentLeg_62.insert(LegPriceUnitOfMeasureQty_62.getString());
        FIX::LegProduct LegProduct_62(1041490512);
        noLegs_0_2_2_1.set(LegProduct_62);
        InstrumentLeg_62.insert(LegProduct_62.getString());
        FIX::LegPutOrCall LegPutOrCall_62(1046112482);
        noLegs_0_2_2_1.set(LegPutOrCall_62);
        InstrumentLeg_62.insert(LegPutOrCall_62.getString());
        FIX::LegRatioQty LegRatioQty_62;
        LegRatioQty_62.setString("14442992");
        noLegs_0_2_2_1.set(LegRatioQty_62);
        InstrumentLeg_62.insert(LegRatioQty_62.getString());
        FIX::LegRedemptionDate LegRedemptionDate_62("LOCALMKTDATE_962037080");
        noLegs_0_2_2_1.set(LegRedemptionDate_62);
        InstrumentLeg_62.insert(LegRedemptionDate_62.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_62("STRING_599210337");
        noLegs_0_2_2_1.set(LegRepoCollateralSecurityType_62);
        InstrumentLeg_62.insert(LegRepoCollateralSecurityType_62.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_62;
        LegRepurchaseRate_62.setString("39.810000");
        noLegs_0_2_2_1.set(LegRepurchaseRate_62);
        InstrumentLeg_62.insert(LegRepurchaseRate_62.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_62(200171821);
        noLegs_0_2_2_1.set(LegRepurchaseTerm_62);
        InstrumentLeg_62.insert(LegRepurchaseTerm_62.getString());
        FIX::LegSecurityDesc LegSecurityDesc_62("STRING_1955552176");
        noLegs_0_2_2_1.set(LegSecurityDesc_62);
        InstrumentLeg_62.insert(LegSecurityDesc_62.getString());
        FIX::LegSecurityExchange LegSecurityExchange_62("EXCHANGE_1419313037");
        noLegs_0_2_2_1.set(LegSecurityExchange_62);
        InstrumentLeg_62.insert(LegSecurityExchange_62.getString());
        FIX::LegSecurityID LegSecurityID_62("STRING_512703509");
        noLegs_0_2_2_1.set(LegSecurityID_62);
        InstrumentLeg_62.insert(LegSecurityID_62.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_62("STRING_766134100");
        noLegs_0_2_2_1.set(LegSecurityIDSource_62);
        InstrumentLeg_62.insert(LegSecurityIDSource_62.getString());
        FIX::LegSecuritySubType LegSecuritySubType_62("STRING_1128713866");
        noLegs_0_2_2_1.set(LegSecuritySubType_62);
        InstrumentLeg_62.insert(LegSecuritySubType_62.getString());
        FIX::LegSecurityType LegSecurityType_62("STRING_1806318925");
        noLegs_0_2_2_1.set(LegSecurityType_62);
        InstrumentLeg_62.insert(LegSecurityType_62.getString());
        FIX::LegSide LegSide_62('2');
        noLegs_0_2_2_1.set(LegSide_62);
        InstrumentLeg_62.insert(LegSide_62.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_62("STRING_918682042");
        noLegs_0_2_2_1.set(LegStateOrProvinceOfIssue_62);
        InstrumentLeg_62.insert(LegStateOrProvinceOfIssue_62.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_62("EUR");
        noLegs_0_2_2_1.set(LegStrikeCurrency_62);
        InstrumentLeg_62.insert(LegStrikeCurrency_62.getString());
        FIX::LegStrikePrice LegStrikePrice_62;
        LegStrikePrice_62.setString("11492658");
        noLegs_0_2_2_1.set(LegStrikePrice_62);
        InstrumentLeg_62.insert(LegStrikePrice_62.getString());
        FIX::LegSymbol LegSymbol_62("STRING_1689487478");
        noLegs_0_2_2_1.set(LegSymbol_62);
        InstrumentLeg_62.insert(LegSymbol_62.getString());
        FIX::LegSymbolSfx LegSymbolSfx_62("STRING_1433689701");
        noLegs_0_2_2_1.set(LegSymbolSfx_62);
        InstrumentLeg_62.insert(LegSymbolSfx_62.getString());
        FIX::LegTimeUnit LegTimeUnit_62("STRING_623874764");
        noLegs_0_2_2_1.set(LegTimeUnit_62);
        InstrumentLeg_62.insert(LegTimeUnit_62.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_62("STRING_640743068");
        noLegs_0_2_2_1.set(LegUnitOfMeasure_62);
        InstrumentLeg_62.insert(LegUnitOfMeasure_62.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_62;
        LegUnitOfMeasureQty_62.setString("13770537");
        noLegs_0_2_2_1.set(LegUnitOfMeasureQty_62);
        InstrumentLeg_62.insert(LegUnitOfMeasureQty_62.getString());
        all_values.push_back(InstrumentLeg_62);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_127;
          FIX::LegSecurityAltID LegSecurityAltID_127("STRING_400983983");
          noLegSecurityAltID_0_2_1_3_0.set(LegSecurityAltID_127);
          LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltID_127.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_127("STRING_1418885158");
          noLegSecurityAltID_0_2_1_3_0.set(LegSecurityAltIDSource_127);
          LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltIDSource_127.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_127);

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_128;
          FIX::LegSecurityAltID LegSecurityAltID_128("STRING_1573278647");
          noLegSecurityAltID_0_2_1_3_1.set(LegSecurityAltID_128);
          LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltID_128.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_128("STRING_1220882007");
          noLegSecurityAltID_0_2_1_3_1.set(LegSecurityAltIDSource_128);
          LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltIDSource_128.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_128);

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_1);
      }
      // Instrument
      multiset<string> Instrument_38;
      FIX::AttachmentPoint AttachmentPoint_38;
      AttachmentPoint_38.setString("79.060000");
      noQuoteEntries_0_1_2.set(AttachmentPoint_38);
      Instrument_38.insert(AttachmentPoint_38.getString());
      FIX::CFICode CFICode_38("STRING_1274479324");
      noQuoteEntries_0_1_2.set(CFICode_38);
      Instrument_38.insert(CFICode_38.getString());
      FIX::CPProgram CPProgram_38(99);
      noQuoteEntries_0_1_2.set(CPProgram_38);
      Instrument_38.insert(CPProgram_38.getString());
      FIX::CPRegType CPRegType_38("STRING_1311228418");
      noQuoteEntries_0_1_2.set(CPRegType_38);
      Instrument_38.insert(CPRegType_38.getString());
      FIX::CapPrice CapPrice_38;
      CapPrice_38.setString("1731081");
      noQuoteEntries_0_1_2.set(CapPrice_38);
      Instrument_38.insert(CapPrice_38.getString());
      FIX::ContractMultiplier ContractMultiplier_38;
      ContractMultiplier_38.setString("12272884");
      noQuoteEntries_0_1_2.set(ContractMultiplier_38);
      Instrument_38.insert(ContractMultiplier_38.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_38(1);
      noQuoteEntries_0_1_2.set(ContractMultiplierUnit_38);
      Instrument_38.insert(ContractMultiplierUnit_38.getString());
      FIX::ContractSettlMonth ContractSettlMonth_38("MONTHYEAR_772318496");
      noQuoteEntries_0_1_2.set(ContractSettlMonth_38);
      Instrument_38.insert(ContractSettlMonth_38.getString());
      FIX::CountryOfIssue CountryOfIssue_38("COUNTRY_800808787");
      noQuoteEntries_0_1_2.set(CountryOfIssue_38);
      Instrument_38.insert(CountryOfIssue_38.getString());
      FIX::CouponPaymentDate CouponPaymentDate_38("LOCALMKTDATE_325953672");
      noQuoteEntries_0_1_2.set(CouponPaymentDate_38);
      Instrument_38.insert(CouponPaymentDate_38.getString());
      FIX::CouponRate CouponRate_38;
      CouponRate_38.setString("70.240000");
      noQuoteEntries_0_1_2.set(CouponRate_38);
      Instrument_38.insert(CouponRate_38.getString());
      FIX::CreditRating CreditRating_38("STRING_72638176");
      noQuoteEntries_0_1_2.set(CreditRating_38);
      Instrument_38.insert(CreditRating_38.getString());
      FIX::DatedDate DatedDate_38("LOCALMKTDATE_838657181");
      noQuoteEntries_0_1_2.set(DatedDate_38);
      Instrument_38.insert(DatedDate_38.getString());
      FIX::DetachmentPoint DetachmentPoint_38;
      DetachmentPoint_38.setString("11.240000");
      noQuoteEntries_0_1_2.set(DetachmentPoint_38);
      Instrument_38.insert(DetachmentPoint_38.getString());
      FIX::EncodedIssuer EncodedIssuer_38("DATA_1201352042");
      noQuoteEntries_0_1_2.set(EncodedIssuer_38);
      Instrument_38.insert(EncodedIssuer_38.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_38(497492458);
      noQuoteEntries_0_1_2.set(EncodedIssuerLen_38);
      Instrument_38.insert(EncodedIssuerLen_38.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_38("DATA_1265362690");
      noQuoteEntries_0_1_2.set(EncodedSecurityDesc_38);
      Instrument_38.insert(EncodedSecurityDesc_38.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_38(2120034084);
      noQuoteEntries_0_1_2.set(EncodedSecurityDescLen_38);
      Instrument_38.insert(EncodedSecurityDescLen_38.getString());
      FIX::ExerciseStyle ExerciseStyle_38(0);
      noQuoteEntries_0_1_2.set(ExerciseStyle_38);
      Instrument_38.insert(ExerciseStyle_38.getString());
      FIX::Factor Factor_38;
      Factor_38.setString("4534811");
      noQuoteEntries_0_1_2.set(Factor_38);
      Instrument_38.insert(Factor_38.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_38(true);
      noQuoteEntries_0_1_2.set(FlexProductEligibilityIndicator_38);
      Instrument_38.insert(FlexProductEligibilityIndicator_38.getString());
      FIX::FlexibleIndicator FlexibleIndicator_38(true);
      noQuoteEntries_0_1_2.set(FlexibleIndicator_38);
      Instrument_38.insert(FlexibleIndicator_38.getString());
      FIX::FloorPrice FloorPrice_38;
      FloorPrice_38.setString("18871708");
      noQuoteEntries_0_1_2.set(FloorPrice_38);
      Instrument_38.insert(FloorPrice_38.getString());
      FIX::FlowScheduleType FlowScheduleType_38(3);
      noQuoteEntries_0_1_2.set(FlowScheduleType_38);
      Instrument_38.insert(FlowScheduleType_38.getString());
      FIX::InstrRegistry InstrRegistry_38("STRING_2106171090");
      noQuoteEntries_0_1_2.set(InstrRegistry_38);
      Instrument_38.insert(InstrRegistry_38.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_38('1');
      noQuoteEntries_0_1_2.set(InstrmtAssignmentMethod_38);
      Instrument_38.insert(InstrmtAssignmentMethod_38.getString());
      FIX::InterestAccrualDate InterestAccrualDate_38("LOCALMKTDATE_1503350257");
      noQuoteEntries_0_1_2.set(InterestAccrualDate_38);
      Instrument_38.insert(InterestAccrualDate_38.getString());
      FIX::IssueDate IssueDate_38("LOCALMKTDATE_359671425");
      noQuoteEntries_0_1_2.set(IssueDate_38);
      Instrument_38.insert(IssueDate_38.getString());
      FIX::Issuer Issuer_38("STRING_388142474");
      noQuoteEntries_0_1_2.set(Issuer_38);
      Instrument_38.insert(Issuer_38.getString());
      FIX::ListMethod ListMethod_38(0);
      noQuoteEntries_0_1_2.set(ListMethod_38);
      Instrument_38.insert(ListMethod_38.getString());
      FIX::LocaleOfIssue LocaleOfIssue_38("STRING_1580553433");
      noQuoteEntries_0_1_2.set(LocaleOfIssue_38);
      Instrument_38.insert(LocaleOfIssue_38.getString());
      FIX::MaturityDate MaturityDate_38("LOCALMKTDATE_657880381");
      noQuoteEntries_0_1_2.set(MaturityDate_38);
      Instrument_38.insert(MaturityDate_38.getString());
      FIX::MaturityMonthYear MaturityMonthYear_38("MONTHYEAR_56140932");
      noQuoteEntries_0_1_2.set(MaturityMonthYear_38);
      Instrument_38.insert(MaturityMonthYear_38.getString());
      FIX::MaturityTime MaturityTime_38("TZTIMEONLY_1363542673");
      noQuoteEntries_0_1_2.set(MaturityTime_38);
      Instrument_38.insert(MaturityTime_38.getString());
      FIX::MinPriceIncrement MinPriceIncrement_38;
      MinPriceIncrement_38.setString("19691087");
      noQuoteEntries_0_1_2.set(MinPriceIncrement_38);
      Instrument_38.insert(MinPriceIncrement_38.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_38;
      MinPriceIncrementAmount_38.setString("2292490");
      noQuoteEntries_0_1_2.set(MinPriceIncrementAmount_38);
      Instrument_38.insert(MinPriceIncrementAmount_38.getString());
      FIX::NTPositionLimit NTPositionLimit_38(443347478);
      noQuoteEntries_0_1_2.set(NTPositionLimit_38);
      Instrument_38.insert(NTPositionLimit_38.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_38;
      NotionalPercentageOutstanding_38.setString("6.500000");
      noQuoteEntries_0_1_2.set(NotionalPercentageOutstanding_38);
      Instrument_38.insert(NotionalPercentageOutstanding_38.getString());
      FIX::OptAttribute OptAttribute_38('1');
      noQuoteEntries_0_1_2.set(OptAttribute_38);
      Instrument_38.insert(OptAttribute_38.getString());
      FIX::OptPayoutAmount OptPayoutAmount_38;
      OptPayoutAmount_38.setString("12441562");
      noQuoteEntries_0_1_2.set(OptPayoutAmount_38);
      Instrument_38.insert(OptPayoutAmount_38.getString());
      FIX::OptPayoutType OptPayoutType_38(3);
      noQuoteEntries_0_1_2.set(OptPayoutType_38);
      Instrument_38.insert(OptPayoutType_38.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_38;
      OriginalNotionalPercentageOutstanding_38.setString("46.120000");
      noQuoteEntries_0_1_2.set(OriginalNotionalPercentageOutstanding_38);
      Instrument_38.insert(OriginalNotionalPercentageOutstanding_38.getString());
      FIX::Pool Pool_38("STRING_1316794442");
      noQuoteEntries_0_1_2.set(Pool_38);
      Instrument_38.insert(Pool_38.getString());
      FIX::PositionLimit PositionLimit_38(1112017855);
      noQuoteEntries_0_1_2.set(PositionLimit_38);
      Instrument_38.insert(PositionLimit_38.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_38("STRING_INX");
      noQuoteEntries_0_1_2.set(PriceQuoteMethod_38);
      Instrument_38.insert(PriceQuoteMethod_38.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_38("STRING_370662836");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasure_38);
      Instrument_38.insert(PriceUnitOfMeasure_38.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_38;
      PriceUnitOfMeasureQty_38.setString("16095103");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasureQty_38);
      Instrument_38.insert(PriceUnitOfMeasureQty_38.getString());
      FIX::Product Product_40(2);
      noQuoteEntries_0_1_2.set(Product_40);
      Instrument_38.insert(Product_40.getString());
      FIX::ProductComplex ProductComplex_38("STRING_343213273");
      noQuoteEntries_0_1_2.set(ProductComplex_38);
      Instrument_38.insert(ProductComplex_38.getString());
      FIX::PutOrCall PutOrCall_38(1);
      noQuoteEntries_0_1_2.set(PutOrCall_38);
      Instrument_38.insert(PutOrCall_38.getString());
      FIX::RedemptionDate RedemptionDate_38("LOCALMKTDATE_352352263");
      noQuoteEntries_0_1_2.set(RedemptionDate_38);
      Instrument_38.insert(RedemptionDate_38.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_38("STRING_1465029597");
      noQuoteEntries_0_1_2.set(RepoCollateralSecurityType_38);
      Instrument_38.insert(RepoCollateralSecurityType_38.getString());
      FIX::RepurchaseRate RepurchaseRate_38;
      RepurchaseRate_38.setString("52.310000");
      noQuoteEntries_0_1_2.set(RepurchaseRate_38);
      Instrument_38.insert(RepurchaseRate_38.getString());
      FIX::RepurchaseTerm RepurchaseTerm_38(92039448);
      noQuoteEntries_0_1_2.set(RepurchaseTerm_38);
      Instrument_38.insert(RepurchaseTerm_38.getString());
      FIX::RestructuringType RestructuringType_38("STRING_MR");
      noQuoteEntries_0_1_2.set(RestructuringType_38);
      Instrument_38.insert(RestructuringType_38.getString());
      FIX::SecurityDesc SecurityDesc_38("STRING_662082674");
      noQuoteEntries_0_1_2.set(SecurityDesc_38);
      Instrument_38.insert(SecurityDesc_38.getString());
      FIX::SecurityExchange SecurityExchange_38("EXCHANGE_1208780413");
      noQuoteEntries_0_1_2.set(SecurityExchange_38);
      Instrument_38.insert(SecurityExchange_38.getString());
      FIX::SecurityGroup SecurityGroup_38("STRING_419103646");
      noQuoteEntries_0_1_2.set(SecurityGroup_38);
      Instrument_38.insert(SecurityGroup_38.getString());
      FIX::SecurityID SecurityID_38("STRING_1021754099");
      noQuoteEntries_0_1_2.set(SecurityID_38);
      Instrument_38.insert(SecurityID_38.getString());
      FIX::SecurityIDSource SecurityIDSource_38("STRING_M");
      noQuoteEntries_0_1_2.set(SecurityIDSource_38);
      Instrument_38.insert(SecurityIDSource_38.getString());
      FIX::SecurityStatus SecurityStatus_38("STRING_1");
      noQuoteEntries_0_1_2.set(SecurityStatus_38);
      Instrument_38.insert(SecurityStatus_38.getString());
      FIX::SecuritySubType SecuritySubType_39("STRING_454823884");
      noQuoteEntries_0_1_2.set(SecuritySubType_39);
      Instrument_38.insert(SecuritySubType_39.getString());
      FIX::SecurityType SecurityType_40("STRING_PROV");
      noQuoteEntries_0_1_2.set(SecurityType_40);
      Instrument_38.insert(SecurityType_40.getString());
      FIX::Seniority Seniority_38("STRING_SD");
      noQuoteEntries_0_1_2.set(Seniority_38);
      Instrument_38.insert(Seniority_38.getString());
      FIX::SettlMethod SettlMethod_38('P');
      noQuoteEntries_0_1_2.set(SettlMethod_38);
      Instrument_38.insert(SettlMethod_38.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_38("STRING_2076428420");
      noQuoteEntries_0_1_2.set(SettleOnOpenFlag_38);
      Instrument_38.insert(SettleOnOpenFlag_38.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_38("STRING_1633638926");
      noQuoteEntries_0_1_2.set(StateOrProvinceOfIssue_38);
      Instrument_38.insert(StateOrProvinceOfIssue_38.getString());
      FIX::StrikeCurrency StrikeCurrency_38("JPY");
      noQuoteEntries_0_1_2.set(StrikeCurrency_38);
      Instrument_38.insert(StrikeCurrency_38.getString());
      FIX::StrikeMultiplier StrikeMultiplier_38;
      StrikeMultiplier_38.setString("4877228");
      noQuoteEntries_0_1_2.set(StrikeMultiplier_38);
      Instrument_38.insert(StrikeMultiplier_38.getString());
      FIX::StrikePrice StrikePrice_38;
      StrikePrice_38.setString("13583866");
      noQuoteEntries_0_1_2.set(StrikePrice_38);
      Instrument_38.insert(StrikePrice_38.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_38(4);
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryMethod_38);
      Instrument_38.insert(StrikePriceBoundaryMethod_38.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_38;
      StrikePriceBoundaryPrecision_38.setString("74.790000");
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryPrecision_38);
      Instrument_38.insert(StrikePriceBoundaryPrecision_38.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_38(4);
      noQuoteEntries_0_1_2.set(StrikePriceDeterminationMethod_38);
      Instrument_38.insert(StrikePriceDeterminationMethod_38.getString());
      FIX::StrikeValue StrikeValue_38;
      StrikeValue_38.setString("12617303");
      noQuoteEntries_0_1_2.set(StrikeValue_38);
      Instrument_38.insert(StrikeValue_38.getString());
      FIX::Symbol Symbol_38("STRING_703185920");
      noQuoteEntries_0_1_2.set(Symbol_38);
      Instrument_38.insert(Symbol_38.getString());
      FIX::SymbolSfx SymbolSfx_38("STRING_CD");
      noQuoteEntries_0_1_2.set(SymbolSfx_38);
      Instrument_38.insert(SymbolSfx_38.getString());
      FIX::TimeUnit TimeUnit_38("STRING_Mo");
      noQuoteEntries_0_1_2.set(TimeUnit_38);
      Instrument_38.insert(TimeUnit_38.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_38(4);
      noQuoteEntries_0_1_2.set(UnderlyingPriceDeterminationMethod_38);
      Instrument_38.insert(UnderlyingPriceDeterminationMethod_38.getString());
      FIX::UnitOfMeasure UnitOfMeasure_38("STRING_MWh");
      noQuoteEntries_0_1_2.set(UnitOfMeasure_38);
      Instrument_38.insert(UnitOfMeasure_38.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_38;
      UnitOfMeasureQty_38.setString("21092078");
      noQuoteEntries_0_1_2.set(UnitOfMeasureQty_38);
      Instrument_38.insert(UnitOfMeasureQty_38.getString());
      FIX::ValuationMethod ValuationMethod_38("STRING_EQTY");
      noQuoteEntries_0_1_2.set(ValuationMethod_38);
      Instrument_38.insert(ValuationMethod_38.getString());
      all_values.push_back(Instrument_38);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_75;
        FIX::ComplexEventCondition ComplexEventCondition_75(1);
        noComplexEvents_0_2_2_0.set(ComplexEventCondition_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventCondition_75.getString());
        FIX::ComplexEventPrice ComplexEventPrice_75;
        ComplexEventPrice_75.setString("10464487");
        noComplexEvents_0_2_2_0.set(ComplexEventPrice_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPrice_75.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_75(4);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryMethod_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryMethod_75.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_75;
        ComplexEventPriceBoundaryPrecision_75.setString("20.840000");
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryPrecision_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryPrecision_75.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_75(1);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceTimeType_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceTimeType_75.getString());
        FIX::ComplexEventType ComplexEventType_75(1);
        noComplexEvents_0_2_2_0.set(ComplexEventType_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventType_75.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_75;
        ComplexOptPayoutAmount_75.setString("2014725");
        noComplexEvents_0_2_2_0.set(ComplexOptPayoutAmount_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexOptPayoutAmount_75.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_75);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_155;
          FIX::ComplexEventEndDate ComplexEventEndDate_155(FIX::UTCTIMESTAMP(4, 36, 31, 2, 1, 2004));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventEndDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventEndDate_155.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_155(FIX::UTCTIMESTAMP(14, 16, 11, 22, 12, 2001));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventStartDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventStartDate_155.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_155);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
            FIX::ComplexEventEndTime ComplexEventEndTime_327(FIX::UTCTIMEONLY(7, 55, 19));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventEndTime_327);
            ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventEndTime_327.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_327(FIX::UTCTIMEONLY(10, 6, 50));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventStartTime_327);
            ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventStartTime_327.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
            FIX::ComplexEventEndTime ComplexEventEndTime_328(FIX::UTCTIMEONLY(1, 25, 41));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventEndTime_328);
            ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventEndTime_328.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_328(FIX::UTCTIMEONLY(11, 17, 46));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventStartTime_328);
            ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventStartTime_328.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_156;
          FIX::ComplexEventEndDate ComplexEventEndDate_156(FIX::UTCTIMESTAMP(14, 14, 43, 0, 8, 2015));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventEndDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventEndDate_156.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_156(FIX::UTCTIMESTAMP(21, 42, 21, 8, 6, 2010));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventStartDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventStartDate_156.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_156);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
            FIX::ComplexEventEndTime ComplexEventEndTime_329(FIX::UTCTIMEONLY(11, 53, 48));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventEndTime_329);
            ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventEndTime_329.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_329(FIX::UTCTIMEONLY(20, 54, 53));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventStartTime_329);
            ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventStartTime_329.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
            FIX::ComplexEventEndTime ComplexEventEndTime_330(FIX::UTCTIMEONLY(23, 19, 50));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventEndTime_330);
            ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventEndTime_330.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_330(FIX::UTCTIMEONLY(6, 0, 51));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventStartTime_330);
            ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventStartTime_330.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_76;
        FIX::ComplexEventCondition ComplexEventCondition_76(1);
        noComplexEvents_0_2_2_1.set(ComplexEventCondition_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventCondition_76.getString());
        FIX::ComplexEventPrice ComplexEventPrice_76;
        ComplexEventPrice_76.setString("4073438");
        noComplexEvents_0_2_2_1.set(ComplexEventPrice_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPrice_76.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_76(4);
        noComplexEvents_0_2_2_1.set(ComplexEventPriceBoundaryMethod_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryMethod_76.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
        ComplexEventPriceBoundaryPrecision_76.setString("65.340000");
        noComplexEvents_0_2_2_1.set(ComplexEventPriceBoundaryPrecision_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryPrecision_76.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_76(1);
        noComplexEvents_0_2_2_1.set(ComplexEventPriceTimeType_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceTimeType_76.getString());
        FIX::ComplexEventType ComplexEventType_76(6);
        noComplexEvents_0_2_2_1.set(ComplexEventType_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventType_76.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
        ComplexOptPayoutAmount_76.setString("15811161");
        noComplexEvents_0_2_2_1.set(ComplexOptPayoutAmount_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexOptPayoutAmount_76.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_76);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_157;
          FIX::ComplexEventEndDate ComplexEventEndDate_157(FIX::UTCTIMESTAMP(1, 1, 54, 19, 7, 2004));
          noComplexEventDates_0_2_1_3_0.set(ComplexEventEndDate_157);
          ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventEndDate_157.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_157(FIX::UTCTIMESTAMP(9, 38, 40, 5, 3, 2008));
          noComplexEventDates_0_2_1_3_0.set(ComplexEventStartDate_157);
          ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventStartDate_157.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_157);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
            FIX::ComplexEventEndTime ComplexEventEndTime_331(FIX::UTCTIMEONLY(1, 49, 49));
            noComplexEventTimes_0_2_1_0_4_0.set(ComplexEventEndTime_331);
            ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventEndTime_331.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_331(FIX::UTCTIMEONLY(0, 49, 50));
            noComplexEventTimes_0_2_1_0_4_0.set(ComplexEventStartTime_331);
            ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventStartTime_331.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_0);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_77;
        FIX::ComplexEventCondition ComplexEventCondition_77(1);
        noComplexEvents_0_2_2_2.set(ComplexEventCondition_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventCondition_77.getString());
        FIX::ComplexEventPrice ComplexEventPrice_77;
        ComplexEventPrice_77.setString("11679306");
        noComplexEvents_0_2_2_2.set(ComplexEventPrice_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPrice_77.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_77(1);
        noComplexEvents_0_2_2_2.set(ComplexEventPriceBoundaryMethod_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryMethod_77.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
        ComplexEventPriceBoundaryPrecision_77.setString("32.840000");
        noComplexEvents_0_2_2_2.set(ComplexEventPriceBoundaryPrecision_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryPrecision_77.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_77(1);
        noComplexEvents_0_2_2_2.set(ComplexEventPriceTimeType_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceTimeType_77.getString());
        FIX::ComplexEventType ComplexEventType_77(1);
        noComplexEvents_0_2_2_2.set(ComplexEventType_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventType_77.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
        ComplexOptPayoutAmount_77.setString("17783994");
        noComplexEvents_0_2_2_2.set(ComplexOptPayoutAmount_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexOptPayoutAmount_77.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_77);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_158;
          FIX::ComplexEventEndDate ComplexEventEndDate_158(FIX::UTCTIMESTAMP(9, 51, 2, 0, 2, 2001));
          noComplexEventDates_0_2_2_3_0.set(ComplexEventEndDate_158);
          ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventEndDate_158.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_158(FIX::UTCTIMESTAMP(22, 25, 52, 23, 4, 2016));
          noComplexEventDates_0_2_2_3_0.set(ComplexEventStartDate_158);
          ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventStartDate_158.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_158);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
            FIX::ComplexEventEndTime ComplexEventEndTime_332(FIX::UTCTIMEONLY(12, 59, 3));
            noComplexEventTimes_0_2_2_0_4_0.set(ComplexEventEndTime_332);
            ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventEndTime_332.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_332(FIX::UTCTIMEONLY(15, 53, 53));
            noComplexEventTimes_0_2_2_0_4_0.set(ComplexEventStartTime_332);
            ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventStartTime_332.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);

            noComplexEventDates_0_2_2_3_0.addGroup(noComplexEventTimes_0_2_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
            FIX::ComplexEventEndTime ComplexEventEndTime_333(FIX::UTCTIMEONLY(12, 34, 22));
            noComplexEventTimes_0_2_2_0_4_1.set(ComplexEventEndTime_333);
            ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventEndTime_333.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_333(FIX::UTCTIMEONLY(23, 18, 7));
            noComplexEventTimes_0_2_2_0_4_1.set(ComplexEventStartTime_333);
            ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventStartTime_333.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);

            noComplexEventDates_0_2_2_3_0.addGroup(noComplexEventTimes_0_2_2_0_4_1);
          }
          noComplexEvents_0_2_2_2.addGroup(noComplexEventDates_0_2_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_159;
          FIX::ComplexEventEndDate ComplexEventEndDate_159(FIX::UTCTIMESTAMP(4, 58, 10, 24, 4, 2003));
          noComplexEventDates_0_2_2_3_1.set(ComplexEventEndDate_159);
          ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventEndDate_159.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_159(FIX::UTCTIMESTAMP(2, 22, 25, 21, 6, 2006));
          noComplexEventDates_0_2_2_3_1.set(ComplexEventStartDate_159);
          ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventStartDate_159.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_159);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
            FIX::ComplexEventEndTime ComplexEventEndTime_334(FIX::UTCTIMEONLY(16, 19, 46));
            noComplexEventTimes_0_2_2_1_4_0.set(ComplexEventEndTime_334);
            ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventEndTime_334.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_334(FIX::UTCTIMEONLY(22, 31, 28));
            noComplexEventTimes_0_2_2_1_4_0.set(ComplexEventStartTime_334);
            ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventStartTime_334.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);

            noComplexEventDates_0_2_2_3_1.addGroup(noComplexEventTimes_0_2_2_1_4_0);
          }
          noComplexEvents_0_2_2_2.addGroup(noComplexEventDates_0_2_2_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_70;
        FIX::EventDate EventDate_70("LOCALMKTDATE_2138733596");
        noEvents_0_2_2_0.set(EventDate_70);
        EvntGrp_NoEvents_70.insert(EventDate_70.getString());
        FIX::EventPx EventPx_70;
        EventPx_70.setString("21202200");
        noEvents_0_2_2_0.set(EventPx_70);
        EvntGrp_NoEvents_70.insert(EventPx_70.getString());
        FIX::EventText EventText_70("STRING_1169245919");
        noEvents_0_2_2_0.set(EventText_70);
        EvntGrp_NoEvents_70.insert(EventText_70.getString());
        FIX::EventTime EventTime_70(FIX::UTCTIMESTAMP(18, 17, 21, 13, 2, 2006));
        noEvents_0_2_2_0.set(EventTime_70);
        EvntGrp_NoEvents_70.insert(EventTime_70.getString());
        FIX::EventType EventType_70(4);
        noEvents_0_2_2_0.set(EventType_70);
        EvntGrp_NoEvents_70.insert(EventType_70.getString());
        all_values.push_back(EvntGrp_NoEvents_70);

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_72;
        FIX::InstrumentPartyID InstrumentPartyID_72("STRING_447621879");
        noInstrumentParties_0_2_2_0.set(InstrumentPartyID_72);
        InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyID_72.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_72('5');
        noInstrumentParties_0_2_2_0.set(InstrumentPartyIDSource_72);
        InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyIDSource_72.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_72(1901081067);
        noInstrumentParties_0_2_2_0.set(InstrumentPartyRole_72);
        InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyRole_72.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_72);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159;
          FIX::InstrumentPartySubID InstrumentPartySubID_159("STRING_331780386");
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubID_159);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubID_159.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_159(1691431004);
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubIDType_159);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubIDType_159.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160;
          FIX::InstrumentPartySubID InstrumentPartySubID_160("STRING_1958375915");
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubID_160);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubID_160.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_160(874418975);
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubIDType_160);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubIDType_160.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161;
          FIX::InstrumentPartySubID InstrumentPartySubID_161("STRING_1688550432");
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubID_161);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubID_161.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_161(266499954);
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubIDType_161);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubIDType_161.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_80;
        FIX::SecurityAltID SecurityAltID_80("STRING_1248764264");
        noSecurityAltID_0_2_2_0.set(SecurityAltID_80);
        SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltID_80.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_80("STRING_341950993");
        noSecurityAltID_0_2_2_0.set(SecurityAltIDSource_80);
        SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltIDSource_80.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_80);

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_76;
      FIX::SecurityXML SecurityXML_77("XMLDATA_1619817357");
      noQuoteEntries_0_1_2.set(SecurityXML_77);
      FIX::SecurityXMLLen SecurityXMLLen_38(355345399);
      noQuoteEntries_0_1_2.set(SecurityXMLLen_38);
      FIX::SecurityXMLSchema SecurityXMLSchema_38("STRING_420745632");
      noQuoteEntries_0_1_2.set(SecurityXMLSchema_38);
      SecurityXML_76.insert(SecurityXMLSchema_38.getString());
      all_values.push_back(SecurityXML_76);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_55;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_55("DATA_910771220");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuer_55.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_55(837266028);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuerLen_55.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_55("DATA_946124268");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDesc_55.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_55(902021168);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDescLen_55.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_55;
    UnderlyingAdjustedQuantity_55.setString("8100023");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_55);
    UnderlyingInstrument_55.insert(UnderlyingAdjustedQuantity_55.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_55;
    UnderlyingAllocationPercent_55.setString("1.870000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_55);
    UnderlyingInstrument_55.insert(UnderlyingAllocationPercent_55.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_55;
    UnderlyingAttachmentPoint_55.setString("54.620000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingAttachmentPoint_55.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_55("STRING_1594690536");
    noQuoteSets_0_0.set(UnderlyingCFICode_55);
    UnderlyingInstrument_55.insert(UnderlyingCFICode_55.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_55("STRING_1411915557");
    noQuoteSets_0_0.set(UnderlyingCPProgram_55);
    UnderlyingInstrument_55.insert(UnderlyingCPProgram_55.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_55("STRING_2092006964");
    noQuoteSets_0_0.set(UnderlyingCPRegType_55);
    UnderlyingInstrument_55.insert(UnderlyingCPRegType_55.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_55;
    UnderlyingCapValue_55.setString("12221812");
    noQuoteSets_0_0.set(UnderlyingCapValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCapValue_55.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_55;
    UnderlyingCashAmount_55.setString("2003917");
    noQuoteSets_0_0.set(UnderlyingCashAmount_55);
    UnderlyingInstrument_55.insert(UnderlyingCashAmount_55.getString());
    FIX::UnderlyingCashType UnderlyingCashType_55("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_55);
    UnderlyingInstrument_55.insert(UnderlyingCashType_55.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_55;
    UnderlyingContractMultiplier_55.setString("4415100");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplier_55.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_55(2126948948);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplierUnit_55.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_55("COUNTRY_685241127");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingCountryOfIssue_55.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_55("LOCALMKTDATE_1019676618");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponPaymentDate_55.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_55;
    UnderlyingCouponRate_55.setString("63.670000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponRate_55.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_55("STRING_141437857");
    noQuoteSets_0_0.set(UnderlyingCreditRating_55);
    UnderlyingInstrument_55.insert(UnderlyingCreditRating_55.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_55("JPY");
    noQuoteSets_0_0.set(UnderlyingCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrency_55.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_55;
    UnderlyingCurrentValue_55.setString("20998137");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrentValue_55.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_55;
    UnderlyingDetachmentPoint_55.setString("23.320000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingDetachmentPoint_55.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_55;
    UnderlyingDirtyPrice_55.setString("9655605");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingDirtyPrice_55.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_55;
    UnderlyingEndPrice_55.setString("2188300");
    noQuoteSets_0_0.set(UnderlyingEndPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingEndPrice_55.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_55;
    UnderlyingEndValue_55.setString("19396212");
    noQuoteSets_0_0.set(UnderlyingEndValue_55);
    UnderlyingInstrument_55.insert(UnderlyingEndValue_55.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_55(66841125);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_55);
    UnderlyingInstrument_55.insert(UnderlyingExerciseStyle_55.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_55;
    UnderlyingFXRate_55.setString("5607810");
    noQuoteSets_0_0.set(UnderlyingFXRate_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRate_55.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_55('M');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRateCalc_55.getString());
    FIX::UnderlyingFactor UnderlyingFactor_55;
    UnderlyingFactor_55.setString("4221865");
    noQuoteSets_0_0.set(UnderlyingFactor_55);
    UnderlyingInstrument_55.insert(UnderlyingFactor_55.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_55(981526704);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_55);
    UnderlyingInstrument_55.insert(UnderlyingFlowScheduleType_55.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_55("STRING_175242492");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_55);
    UnderlyingInstrument_55.insert(UnderlyingInstrRegistry_55.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_55("LOCALMKTDATE_1259452552");
    noQuoteSets_0_0.set(UnderlyingIssueDate_55);
    UnderlyingInstrument_55.insert(UnderlyingIssueDate_55.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_55("STRING_1927650972");
    noQuoteSets_0_0.set(UnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(UnderlyingIssuer_55.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_55("STRING_1077263660");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingLocaleOfIssue_55.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_55("LOCALMKTDATE_2069454935");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityDate_55.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_55("MONTHYEAR_1895537512");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityMonthYear_55.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_55("TZTIMEONLY_400165475");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityTime_55.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_55;
    UnderlyingNotionalPercentageOutstanding_55.setString("18.230000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_55('1');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_55);
    UnderlyingInstrument_55.insert(UnderlyingOptAttribute_55.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_55;
    UnderlyingOriginalNotionalPercentageOutstanding_55.setString("87.910000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingOriginalNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_55("STRING_591359425");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasure_55.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_55;
    UnderlyingPriceUnitOfMeasureQty_55.setString("13603612");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasureQty_55.getString());
    FIX::UnderlyingProduct UnderlyingProduct_55(582308039);
    noQuoteSets_0_0.set(UnderlyingProduct_55);
    UnderlyingInstrument_55.insert(UnderlyingProduct_55.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_55(1032869511);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_55);
    UnderlyingInstrument_55.insert(UnderlyingPutOrCall_55.getString());
    FIX::UnderlyingPx UnderlyingPx_55;
    UnderlyingPx_55.setString("13398265");
    noQuoteSets_0_0.set(UnderlyingPx_55);
    UnderlyingInstrument_55.insert(UnderlyingPx_55.getString());
    FIX::UnderlyingQty UnderlyingQty_55;
    UnderlyingQty_55.setString("12675491");
    noQuoteSets_0_0.set(UnderlyingQty_55);
    UnderlyingInstrument_55.insert(UnderlyingQty_55.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_55("LOCALMKTDATE_2052546129");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_55);
    UnderlyingInstrument_55.insert(UnderlyingRedemptionDate_55.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_55("STRING_1072889235");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingRepoCollateralSecurityType_55.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_55;
    UnderlyingRepurchaseRate_55.setString("70.230000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseRate_55.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_55(1256519485);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseTerm_55.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_55("STRING_349899311");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_55);
    UnderlyingInstrument_55.insert(UnderlyingRestructuringType_55.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_55("STRING_1361317147");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityDesc_55.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_55("EXCHANGE_1334911817");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityExchange_55.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_55("STRING_1315459820");
    noQuoteSets_0_0.set(UnderlyingSecurityID_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityID_55.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_55("STRING_1580147226");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityIDSource_55.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_55("STRING_1127049380");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecuritySubType_55.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_55("STRING_1382300945");
    noQuoteSets_0_0.set(UnderlyingSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityType_55.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_55("STRING_2140928298");
    noQuoteSets_0_0.set(UnderlyingSeniority_55);
    UnderlyingInstrument_55.insert(UnderlyingSeniority_55.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_55("STRING_391520651");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlMethod_55.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_55(2);
    noQuoteSets_0_0.set(UnderlyingSettlementType_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlementType_55.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_55;
    UnderlyingStartValue_55.setString("9749713");
    noQuoteSets_0_0.set(UnderlyingStartValue_55);
    UnderlyingInstrument_55.insert(UnderlyingStartValue_55.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_55("STRING_566763143");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingStateOrProvinceOfIssue_55.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_55("GBP");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikeCurrency_55.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_55;
    UnderlyingStrikePrice_55.setString("16440268");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikePrice_55.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_55("STRING_838427661");
    noQuoteSets_0_0.set(UnderlyingSymbol_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbol_55.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_55("STRING_503192542");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbolSfx_55.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_55("STRING_2044192279");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingTimeUnit_55.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_55("STRING_207605836");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasure_55.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_55;
    UnderlyingUnitOfMeasureQty_55.setString("16631619");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasureQty_55.getString());
    all_values.push_back(UnderlyingInstrument_55);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_112;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_112("STRING_798965262");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltID_112.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_112("STRING_876039531");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltIDSource_112.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_113;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_113("STRING_823705461");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltID_113.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_113("STRING_1831834773");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltIDSource_113.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_106;
      FIX::UnderlyingStipType UnderlyingStipType_106("STRING_2091254627");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipType_106.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_106("STRING_1736897254");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipValue_106.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_106);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_120;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_120("STRING_1352758003");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyID_120.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_120('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyIDSource_120.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_120(1491170946);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyRole_120.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_120);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_246("STRING_33361261");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_246);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubID_246.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_246(659147118);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_246);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubIDType_246.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);

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
