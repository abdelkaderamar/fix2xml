#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  FIX50SP2::MassQuoteAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuoteAcknowledgement_0;
  FIX::Account Account_15("STRING_215301777");
  msg.set(Account_15);
  MassQuoteAcknowledgement_0.insert(Account_15.getString());
  FIX::AccountType AccountType_12(2);
  msg.set(AccountType_12);
  MassQuoteAcknowledgement_0.insert(AccountType_12.getString());
  FIX::AcctIDSource AcctIDSource_8(4);
  msg.set(AcctIDSource_8);
  MassQuoteAcknowledgement_0.insert(AcctIDSource_8.getString());
  FIX::EncodedText EncodedText_52("DATA_443233613");
  msg.set(EncodedText_52);
  MassQuoteAcknowledgement_0.insert(EncodedText_52.getString());
  FIX::EncodedTextLen EncodedTextLen_52(1607608068);
  msg.set(EncodedTextLen_52);
  MassQuoteAcknowledgement_0.insert(EncodedTextLen_52.getString());
  FIX::QuoteCancelType QuoteCancelType_0(8);
  msg.set(QuoteCancelType_0);
  MassQuoteAcknowledgement_0.insert(QuoteCancelType_0.getString());
  FIX::QuoteID QuoteID_2("STRING_1410034388");
  msg.set(QuoteID_2);
  MassQuoteAcknowledgement_0.insert(QuoteID_2.getString());
  FIX::QuoteRejectReason QuoteRejectReason_0(8);
  msg.set(QuoteRejectReason_0);
  MassQuoteAcknowledgement_0.insert(QuoteRejectReason_0.getString());
  FIX::QuoteReqID QuoteReqID_1("STRING_347499812");
  msg.set(QuoteReqID_1);
  MassQuoteAcknowledgement_0.insert(QuoteReqID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_1(3);
  msg.set(QuoteResponseLevel_1);
  MassQuoteAcknowledgement_0.insert(QuoteResponseLevel_1.getString());
  FIX::QuoteStatus QuoteStatus_0(13);
  msg.set(QuoteStatus_0);
  MassQuoteAcknowledgement_0.insert(QuoteStatus_0.getString());
  FIX::QuoteType QuoteType_3(3);
  msg.set(QuoteType_3);
  MassQuoteAcknowledgement_0.insert(QuoteType_3.getString());
  FIX::Text Text_52("STRING_1227565970");
  msg.set(Text_52);
  MassQuoteAcknowledgement_0.insert(Text_52.getString());
  all_values.push_back(MassQuoteAcknowledgement_0);

  all_compo_names.insert("MassQuoteAcknowledgement");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_54;
    FIX::PartyID PartyID_54("STRING_781397119");
    noPartyIDs_0_0.set(PartyID_54);
    Parties_NoPartyIDs_54.insert(PartyID_54.getString());
    FIX::PartyIDSource PartyIDSource_54('6');
    noPartyIDs_0_0.set(PartyIDSource_54);
    Parties_NoPartyIDs_54.insert(PartyIDSource_54.getString());
    FIX::PartyRole PartyRole_54(32);
    noPartyIDs_0_0.set(PartyRole_54);
    Parties_NoPartyIDs_54.insert(PartyRole_54.getString());
    all_values.push_back(Parties_NoPartyIDs_54);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_119;
      FIX::PartySubID PartySubID_119("STRING_1348513401");
      noPartySubIDs_0_1_0.set(PartySubID_119);
      PtysSubGrp_NoPartySubIDs_119.insert(PartySubID_119.getString());
      FIX::PartySubIDType PartySubIDType_119(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_119);
      PtysSubGrp_NoPartySubIDs_119.insert(PartySubIDType_119.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_119);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_120;
      FIX::PartySubID PartySubID_120("STRING_1923750536");
      noPartySubIDs_0_1_1.set(PartySubID_120);
      PtysSubGrp_NoPartySubIDs_120.insert(PartySubID_120.getString());
      FIX::PartySubIDType PartySubIDType_120(18);
      noPartySubIDs_0_1_1.set(PartySubIDType_120);
      PtysSubGrp_NoPartySubIDs_120.insert(PartySubIDType_120.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_120);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_55;
    FIX::PartyID PartyID_55("STRING_1213743580");
    noPartyIDs_0_1.set(PartyID_55);
    Parties_NoPartyIDs_55.insert(PartyID_55.getString());
    FIX::PartyIDSource PartyIDSource_55('C');
    noPartyIDs_0_1.set(PartyIDSource_55);
    Parties_NoPartyIDs_55.insert(PartyIDSource_55.getString());
    FIX::PartyRole PartyRole_55(17);
    noPartyIDs_0_1.set(PartyRole_55);
    Parties_NoPartyIDs_55.insert(PartyRole_55.getString());
    all_values.push_back(Parties_NoPartyIDs_55);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_121;
      FIX::PartySubID PartySubID_121("STRING_1900075145");
      noPartySubIDs_1_1_0.set(PartySubID_121);
      PtysSubGrp_NoPartySubIDs_121.insert(PartySubID_121.getString());
      FIX::PartySubIDType PartySubIDType_121(30);
      noPartySubIDs_1_1_0.set(PartySubIDType_121);
      PtysSubGrp_NoPartySubIDs_121.insert(PartySubIDType_121.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_121);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_122;
      FIX::PartySubID PartySubID_122("STRING_2048682406");
      noPartySubIDs_1_1_1.set(PartySubID_122);
      PtysSubGrp_NoPartySubIDs_122.insert(PartySubID_122.getString());
      FIX::PartySubIDType PartySubIDType_122(19);
      noPartySubIDs_1_1_1.set(PartySubIDType_122);
      PtysSubGrp_NoPartySubIDs_122.insert(PartySubIDType_122.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_122);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotSetAckGrp
  // Group QuotSetAckGrp.NoQuoteSets
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_0;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_0;
    FIX::LastFragment LastFragment_11(true);
    noQuoteSets_0_0.set(LastFragment_11);
    QuotSetAckGrp_NoQuoteSets_0.insert(LastFragment_11.getString());
    FIX::QuoteSetID QuoteSetID_3("STRING_1803401341");
    noQuoteSets_0_0.set(QuoteSetID_3);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetID_3.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_3(FIX::UTCTIMESTAMP(5, 41, 18, 9, 10, 2012));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_3);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_3.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_0(1689988272);
    noQuoteSets_0_0.set(TotNoAccQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoAccQuotes_0.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_0(510168749);
    noQuoteSets_0_0.set(TotNoCxldQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoCxldQuotes_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_3(496225169);
    noQuoteSets_0_0.set(TotNoQuoteEntries_3);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_3.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_0(770070594);
    noQuoteSets_0_0.set(TotNoRejQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoRejQuotes_0.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);
    all_compo_names.insert("QuotSetAckGrp.NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_8;
      BidForwardPoints_8.setString("12776222");
      noQuoteEntries_0_1_0.set(BidForwardPoints_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints_8.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_8;
      BidForwardPoints2_8.setString("18713697");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints2_8.getString());
      FIX::BidPx BidPx_8;
      BidPx_8.setString("882016");
      noQuoteEntries_0_1_0.set(BidPx_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidPx_8.getString());
      FIX::BidSize BidSize_8;
      BidSize_8.setString("20342233");
      noQuoteEntries_0_1_0.set(BidSize_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSize_8.getString());
      FIX::BidSpotRate BidSpotRate_8;
      BidSpotRate_8.setString("10723994");
      noQuoteEntries_0_1_0.set(BidSpotRate_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSpotRate_8.getString());
      FIX::BidYield BidYield_8;
      BidYield_8.setString("34.180000");
      noQuoteEntries_0_1_0.set(BidYield_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidYield_8.getString());
      FIX::BookingType BookingType_15(2);
      noQuoteEntries_0_1_0.set(BookingType_15);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BookingType_15.getString());
      FIX::Currency Currency_38("CHF");
      noQuoteEntries_0_1_0.set(Currency_38);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(Currency_38.getString());
      FIX::MidPx MidPx_8;
      MidPx_8.setString("14079192");
      noQuoteEntries_0_1_0.set(MidPx_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidPx_8.getString());
      FIX::MidYield MidYield_8;
      MidYield_8.setString("60.260000");
      noQuoteEntries_0_1_0.set(MidYield_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidYield_8.getString());
      FIX::OfferForwardPoints OfferForwardPoints_8;
      OfferForwardPoints_8.setString("16773866");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints_8.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_8;
      OfferForwardPoints2_8.setString("11605107");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_8.getString());
      FIX::OfferPx OfferPx_8;
      OfferPx_8.setString("7524570");
      noQuoteEntries_0_1_0.set(OfferPx_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferPx_8.getString());
      FIX::OfferSize OfferSize_8;
      OfferSize_8.setString("15785853");
      noQuoteEntries_0_1_0.set(OfferSize_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSize_8.getString());
      FIX::OfferSpotRate OfferSpotRate_8;
      OfferSpotRate_8.setString("13726382");
      noQuoteEntries_0_1_0.set(OfferSpotRate_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSpotRate_8.getString());
      FIX::OfferYield OfferYield_8;
      OfferYield_8.setString("35.060000");
      noQuoteEntries_0_1_0.set(OfferYield_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferYield_8.getString());
      FIX::OrdType OrdType_41('6');
      noQuoteEntries_0_1_0.set(OrdType_41);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrdType_41.getString());
      FIX::OrderCapacity OrderCapacity_16('R');
      noQuoteEntries_0_1_0.set(OrderCapacity_16);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderCapacity_16.getString());
      FIX::OrderQty2 OrderQty2_9;
      OrderQty2_9.setString("12228106");
      noQuoteEntries_0_1_0.set(OrderQty2_9);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderQty2_9.getString());
      FIX::OrderRestrictions OrderRestrictions_13("MULTIPLECHARVALUE_3");
      noQuoteEntries_0_1_0.set(OrderRestrictions_13);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderRestrictions_13.getString());
      FIX::QuoteEntryID QuoteEntryID_11("STRING_144598069");
      noQuoteEntries_0_1_0.set(QuoteEntryID_11);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryID_11.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_0(1190604358);
      noQuoteEntries_0_1_0.set(QuoteEntryRejectReason_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryRejectReason_0.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_0(15);
      noQuoteEntries_0_1_0.set(QuoteEntryStatus_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryStatus_0.getString());
      FIX::SettlDate SettlDate_31("LOCALMKTDATE_1538600338");
      noQuoteEntries_0_1_0.set(SettlDate_31);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate_31.getString());
      FIX::SettlDate2 SettlDate2_9("LOCALMKTDATE_1505897860");
      noQuoteEntries_0_1_0.set(SettlDate2_9);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate2_9.getString());
      FIX::TradingSessionID TradingSessionID_44("STRING_3");
      noQuoteEntries_0_1_0.set(TradingSessionID_44);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionID_44.getString());
      FIX::TradingSessionSubID TradingSessionSubID_44("STRING_3");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_44);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionSubID_44.getString());
      FIX::TransactTime TransactTime_34(FIX::UTCTIMESTAMP(7, 46, 50, 2, 11, 2014));
      noQuoteEntries_0_1_0.set(TransactTime_34);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TransactTime_34.getString());
      FIX::ValidUntilTime ValidUntilTime_9(FIX::UTCTIMESTAMP(8, 50, 19, 23, 3, 2013));
      noQuoteEntries_0_1_0.set(ValidUntilTime_9);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(ValidUntilTime_9.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);
      all_compo_names.insert("QuotEntryAckGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_75;
        FIX::EncodedLegIssuer EncodedLegIssuer_75("DATA_1102954396");
        noLegs_0_0_2_0.set(EncodedLegIssuer_75);
        InstrumentLeg_75.insert(EncodedLegIssuer_75.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_75(2141420810);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_75);
        InstrumentLeg_75.insert(EncodedLegIssuerLen_75.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_75("DATA_1683662163");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_75);
        InstrumentLeg_75.insert(EncodedLegSecurityDesc_75.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_75(328109011);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_75);
        InstrumentLeg_75.insert(EncodedLegSecurityDescLen_75.getString());
        FIX::LegCFICode LegCFICode_75("STRING_958230668");
        noLegs_0_0_2_0.set(LegCFICode_75);
        InstrumentLeg_75.insert(LegCFICode_75.getString());
        FIX::LegContractMultiplier LegContractMultiplier_75;
        LegContractMultiplier_75.setString("12312644");
        noLegs_0_0_2_0.set(LegContractMultiplier_75);
        InstrumentLeg_75.insert(LegContractMultiplier_75.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_75(1356664967);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_75);
        InstrumentLeg_75.insert(LegContractMultiplierUnit_75.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_75("MONTHYEAR_33557688");
        noLegs_0_0_2_0.set(LegContractSettlMonth_75);
        InstrumentLeg_75.insert(LegContractSettlMonth_75.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_75("COUNTRY_1338600818");
        noLegs_0_0_2_0.set(LegCountryOfIssue_75);
        InstrumentLeg_75.insert(LegCountryOfIssue_75.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_75("LOCALMKTDATE_1501263036");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_75);
        InstrumentLeg_75.insert(LegCouponPaymentDate_75.getString());
        FIX::LegCouponRate LegCouponRate_75;
        LegCouponRate_75.setString("20.470000");
        noLegs_0_0_2_0.set(LegCouponRate_75);
        InstrumentLeg_75.insert(LegCouponRate_75.getString());
        FIX::LegCreditRating LegCreditRating_75("STRING_1268222110");
        noLegs_0_0_2_0.set(LegCreditRating_75);
        InstrumentLeg_75.insert(LegCreditRating_75.getString());
        FIX::LegCurrency LegCurrency_75("EUR");
        noLegs_0_0_2_0.set(LegCurrency_75);
        InstrumentLeg_75.insert(LegCurrency_75.getString());
        FIX::LegDatedDate LegDatedDate_75("LOCALMKTDATE_740348027");
        noLegs_0_0_2_0.set(LegDatedDate_75);
        InstrumentLeg_75.insert(LegDatedDate_75.getString());
        FIX::LegExerciseStyle LegExerciseStyle_75(793665167);
        noLegs_0_0_2_0.set(LegExerciseStyle_75);
        InstrumentLeg_75.insert(LegExerciseStyle_75.getString());
        FIX::LegFactor LegFactor_75;
        LegFactor_75.setString("4372156");
        noLegs_0_0_2_0.set(LegFactor_75);
        InstrumentLeg_75.insert(LegFactor_75.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_75(982544538);
        noLegs_0_0_2_0.set(LegFlowScheduleType_75);
        InstrumentLeg_75.insert(LegFlowScheduleType_75.getString());
        FIX::LegInstrRegistry LegInstrRegistry_75("STRING_843610593");
        noLegs_0_0_2_0.set(LegInstrRegistry_75);
        InstrumentLeg_75.insert(LegInstrRegistry_75.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_75("LOCALMKTDATE_1569477312");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_75);
        InstrumentLeg_75.insert(LegInterestAccrualDate_75.getString());
        FIX::LegIssueDate LegIssueDate_75("LOCALMKTDATE_948627144");
        noLegs_0_0_2_0.set(LegIssueDate_75);
        InstrumentLeg_75.insert(LegIssueDate_75.getString());
        FIX::LegIssuer LegIssuer_75("STRING_981757663");
        noLegs_0_0_2_0.set(LegIssuer_75);
        InstrumentLeg_75.insert(LegIssuer_75.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_75("STRING_440995080");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_75);
        InstrumentLeg_75.insert(LegLocaleOfIssue_75.getString());
        FIX::LegMaturityDate LegMaturityDate_75("LOCALMKTDATE_1987109246");
        noLegs_0_0_2_0.set(LegMaturityDate_75);
        InstrumentLeg_75.insert(LegMaturityDate_75.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_75("MONTHYEAR_1805288151");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_75);
        InstrumentLeg_75.insert(LegMaturityMonthYear_75.getString());
        FIX::LegMaturityTime LegMaturityTime_75("TZTIMEONLY_1123003130");
        noLegs_0_0_2_0.set(LegMaturityTime_75);
        InstrumentLeg_75.insert(LegMaturityTime_75.getString());
        FIX::LegOptAttribute LegOptAttribute_75('2');
        noLegs_0_0_2_0.set(LegOptAttribute_75);
        InstrumentLeg_75.insert(LegOptAttribute_75.getString());
        FIX::LegOptionRatio LegOptionRatio_75;
        LegOptionRatio_75.setString("2329783");
        noLegs_0_0_2_0.set(LegOptionRatio_75);
        InstrumentLeg_75.insert(LegOptionRatio_75.getString());
        FIX::LegPool LegPool_75("STRING_1065446780");
        noLegs_0_0_2_0.set(LegPool_75);
        InstrumentLeg_75.insert(LegPool_75.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_75("STRING_1345867143");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_75);
        InstrumentLeg_75.insert(LegPriceUnitOfMeasure_75.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_75;
        LegPriceUnitOfMeasureQty_75.setString("3380551");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_75);
        InstrumentLeg_75.insert(LegPriceUnitOfMeasureQty_75.getString());
        FIX::LegProduct LegProduct_75(20917529);
        noLegs_0_0_2_0.set(LegProduct_75);
        InstrumentLeg_75.insert(LegProduct_75.getString());
        FIX::LegPutOrCall LegPutOrCall_75(1339804305);
        noLegs_0_0_2_0.set(LegPutOrCall_75);
        InstrumentLeg_75.insert(LegPutOrCall_75.getString());
        FIX::LegRatioQty LegRatioQty_75;
        LegRatioQty_75.setString("20217173");
        noLegs_0_0_2_0.set(LegRatioQty_75);
        InstrumentLeg_75.insert(LegRatioQty_75.getString());
        FIX::LegRedemptionDate LegRedemptionDate_75("LOCALMKTDATE_349026540");
        noLegs_0_0_2_0.set(LegRedemptionDate_75);
        InstrumentLeg_75.insert(LegRedemptionDate_75.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_75("STRING_150551325");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_75);
        InstrumentLeg_75.insert(LegRepoCollateralSecurityType_75.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_75;
        LegRepurchaseRate_75.setString("80.720000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_75);
        InstrumentLeg_75.insert(LegRepurchaseRate_75.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_75(1705691507);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_75);
        InstrumentLeg_75.insert(LegRepurchaseTerm_75.getString());
        FIX::LegSecurityDesc LegSecurityDesc_75("STRING_184109013");
        noLegs_0_0_2_0.set(LegSecurityDesc_75);
        InstrumentLeg_75.insert(LegSecurityDesc_75.getString());
        FIX::LegSecurityExchange LegSecurityExchange_75("EXCHANGE_296615242");
        noLegs_0_0_2_0.set(LegSecurityExchange_75);
        InstrumentLeg_75.insert(LegSecurityExchange_75.getString());
        FIX::LegSecurityID LegSecurityID_75("STRING_1059470895");
        noLegs_0_0_2_0.set(LegSecurityID_75);
        InstrumentLeg_75.insert(LegSecurityID_75.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_75("STRING_1408271060");
        noLegs_0_0_2_0.set(LegSecurityIDSource_75);
        InstrumentLeg_75.insert(LegSecurityIDSource_75.getString());
        FIX::LegSecuritySubType LegSecuritySubType_75("STRING_1564837353");
        noLegs_0_0_2_0.set(LegSecuritySubType_75);
        InstrumentLeg_75.insert(LegSecuritySubType_75.getString());
        FIX::LegSecurityType LegSecurityType_75("STRING_1951850622");
        noLegs_0_0_2_0.set(LegSecurityType_75);
        InstrumentLeg_75.insert(LegSecurityType_75.getString());
        FIX::LegSide LegSide_75('1');
        noLegs_0_0_2_0.set(LegSide_75);
        InstrumentLeg_75.insert(LegSide_75.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_75("STRING_157701732");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_75);
        InstrumentLeg_75.insert(LegStateOrProvinceOfIssue_75.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_75("CAN");
        noLegs_0_0_2_0.set(LegStrikeCurrency_75);
        InstrumentLeg_75.insert(LegStrikeCurrency_75.getString());
        FIX::LegStrikePrice LegStrikePrice_75;
        LegStrikePrice_75.setString("11402462");
        noLegs_0_0_2_0.set(LegStrikePrice_75);
        InstrumentLeg_75.insert(LegStrikePrice_75.getString());
        FIX::LegSymbol LegSymbol_75("STRING_1441642734");
        noLegs_0_0_2_0.set(LegSymbol_75);
        InstrumentLeg_75.insert(LegSymbol_75.getString());
        FIX::LegSymbolSfx LegSymbolSfx_75("STRING_1850056625");
        noLegs_0_0_2_0.set(LegSymbolSfx_75);
        InstrumentLeg_75.insert(LegSymbolSfx_75.getString());
        FIX::LegTimeUnit LegTimeUnit_75("STRING_2088873414");
        noLegs_0_0_2_0.set(LegTimeUnit_75);
        InstrumentLeg_75.insert(LegTimeUnit_75.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_75("STRING_275916749");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_75);
        InstrumentLeg_75.insert(LegUnitOfMeasure_75.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_75;
        LegUnitOfMeasureQty_75.setString("1435680");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_75);
        InstrumentLeg_75.insert(LegUnitOfMeasureQty_75.getString());
        all_values.push_back(InstrumentLeg_75);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_149;
          FIX::LegSecurityAltID LegSecurityAltID_149("STRING_2081204901");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_149);
          LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltID_149.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_149("STRING_1266571187");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_149);
          LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltIDSource_149.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_149);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_76;
        FIX::EncodedLegIssuer EncodedLegIssuer_76("DATA_1885402369");
        noLegs_0_0_2_1.set(EncodedLegIssuer_76);
        InstrumentLeg_76.insert(EncodedLegIssuer_76.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_76(166699596);
        noLegs_0_0_2_1.set(EncodedLegIssuerLen_76);
        InstrumentLeg_76.insert(EncodedLegIssuerLen_76.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_76("DATA_184534320");
        noLegs_0_0_2_1.set(EncodedLegSecurityDesc_76);
        InstrumentLeg_76.insert(EncodedLegSecurityDesc_76.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_76(1083785864);
        noLegs_0_0_2_1.set(EncodedLegSecurityDescLen_76);
        InstrumentLeg_76.insert(EncodedLegSecurityDescLen_76.getString());
        FIX::LegCFICode LegCFICode_76("STRING_504754737");
        noLegs_0_0_2_1.set(LegCFICode_76);
        InstrumentLeg_76.insert(LegCFICode_76.getString());
        FIX::LegContractMultiplier LegContractMultiplier_76;
        LegContractMultiplier_76.setString("2054518");
        noLegs_0_0_2_1.set(LegContractMultiplier_76);
        InstrumentLeg_76.insert(LegContractMultiplier_76.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_76(276106521);
        noLegs_0_0_2_1.set(LegContractMultiplierUnit_76);
        InstrumentLeg_76.insert(LegContractMultiplierUnit_76.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_76("MONTHYEAR_378988393");
        noLegs_0_0_2_1.set(LegContractSettlMonth_76);
        InstrumentLeg_76.insert(LegContractSettlMonth_76.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_76("COUNTRY_554478389");
        noLegs_0_0_2_1.set(LegCountryOfIssue_76);
        InstrumentLeg_76.insert(LegCountryOfIssue_76.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_76("LOCALMKTDATE_426657846");
        noLegs_0_0_2_1.set(LegCouponPaymentDate_76);
        InstrumentLeg_76.insert(LegCouponPaymentDate_76.getString());
        FIX::LegCouponRate LegCouponRate_76;
        LegCouponRate_76.setString("64.650000");
        noLegs_0_0_2_1.set(LegCouponRate_76);
        InstrumentLeg_76.insert(LegCouponRate_76.getString());
        FIX::LegCreditRating LegCreditRating_76("STRING_112686248");
        noLegs_0_0_2_1.set(LegCreditRating_76);
        InstrumentLeg_76.insert(LegCreditRating_76.getString());
        FIX::LegCurrency LegCurrency_76("CHF");
        noLegs_0_0_2_1.set(LegCurrency_76);
        InstrumentLeg_76.insert(LegCurrency_76.getString());
        FIX::LegDatedDate LegDatedDate_76("LOCALMKTDATE_1172157143");
        noLegs_0_0_2_1.set(LegDatedDate_76);
        InstrumentLeg_76.insert(LegDatedDate_76.getString());
        FIX::LegExerciseStyle LegExerciseStyle_76(2019037920);
        noLegs_0_0_2_1.set(LegExerciseStyle_76);
        InstrumentLeg_76.insert(LegExerciseStyle_76.getString());
        FIX::LegFactor LegFactor_76;
        LegFactor_76.setString("11984554");
        noLegs_0_0_2_1.set(LegFactor_76);
        InstrumentLeg_76.insert(LegFactor_76.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_76(976524118);
        noLegs_0_0_2_1.set(LegFlowScheduleType_76);
        InstrumentLeg_76.insert(LegFlowScheduleType_76.getString());
        FIX::LegInstrRegistry LegInstrRegistry_76("STRING_1862401592");
        noLegs_0_0_2_1.set(LegInstrRegistry_76);
        InstrumentLeg_76.insert(LegInstrRegistry_76.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_76("LOCALMKTDATE_1356157144");
        noLegs_0_0_2_1.set(LegInterestAccrualDate_76);
        InstrumentLeg_76.insert(LegInterestAccrualDate_76.getString());
        FIX::LegIssueDate LegIssueDate_76("LOCALMKTDATE_1574556259");
        noLegs_0_0_2_1.set(LegIssueDate_76);
        InstrumentLeg_76.insert(LegIssueDate_76.getString());
        FIX::LegIssuer LegIssuer_76("STRING_2142980906");
        noLegs_0_0_2_1.set(LegIssuer_76);
        InstrumentLeg_76.insert(LegIssuer_76.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_76("STRING_348919766");
        noLegs_0_0_2_1.set(LegLocaleOfIssue_76);
        InstrumentLeg_76.insert(LegLocaleOfIssue_76.getString());
        FIX::LegMaturityDate LegMaturityDate_76("LOCALMKTDATE_868715346");
        noLegs_0_0_2_1.set(LegMaturityDate_76);
        InstrumentLeg_76.insert(LegMaturityDate_76.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_76("MONTHYEAR_1845553883");
        noLegs_0_0_2_1.set(LegMaturityMonthYear_76);
        InstrumentLeg_76.insert(LegMaturityMonthYear_76.getString());
        FIX::LegMaturityTime LegMaturityTime_76("TZTIMEONLY_290309532");
        noLegs_0_0_2_1.set(LegMaturityTime_76);
        InstrumentLeg_76.insert(LegMaturityTime_76.getString());
        FIX::LegOptAttribute LegOptAttribute_76('1');
        noLegs_0_0_2_1.set(LegOptAttribute_76);
        InstrumentLeg_76.insert(LegOptAttribute_76.getString());
        FIX::LegOptionRatio LegOptionRatio_76;
        LegOptionRatio_76.setString("19891219");
        noLegs_0_0_2_1.set(LegOptionRatio_76);
        InstrumentLeg_76.insert(LegOptionRatio_76.getString());
        FIX::LegPool LegPool_76("STRING_71324896");
        noLegs_0_0_2_1.set(LegPool_76);
        InstrumentLeg_76.insert(LegPool_76.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_76("STRING_1078353348");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasure_76);
        InstrumentLeg_76.insert(LegPriceUnitOfMeasure_76.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_76;
        LegPriceUnitOfMeasureQty_76.setString("11082094");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasureQty_76);
        InstrumentLeg_76.insert(LegPriceUnitOfMeasureQty_76.getString());
        FIX::LegProduct LegProduct_76(1956727266);
        noLegs_0_0_2_1.set(LegProduct_76);
        InstrumentLeg_76.insert(LegProduct_76.getString());
        FIX::LegPutOrCall LegPutOrCall_76(1245052944);
        noLegs_0_0_2_1.set(LegPutOrCall_76);
        InstrumentLeg_76.insert(LegPutOrCall_76.getString());
        FIX::LegRatioQty LegRatioQty_76;
        LegRatioQty_76.setString("12927438");
        noLegs_0_0_2_1.set(LegRatioQty_76);
        InstrumentLeg_76.insert(LegRatioQty_76.getString());
        FIX::LegRedemptionDate LegRedemptionDate_76("LOCALMKTDATE_893029482");
        noLegs_0_0_2_1.set(LegRedemptionDate_76);
        InstrumentLeg_76.insert(LegRedemptionDate_76.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_76("STRING_1749807681");
        noLegs_0_0_2_1.set(LegRepoCollateralSecurityType_76);
        InstrumentLeg_76.insert(LegRepoCollateralSecurityType_76.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_76;
        LegRepurchaseRate_76.setString("56.490000");
        noLegs_0_0_2_1.set(LegRepurchaseRate_76);
        InstrumentLeg_76.insert(LegRepurchaseRate_76.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_76(1169136004);
        noLegs_0_0_2_1.set(LegRepurchaseTerm_76);
        InstrumentLeg_76.insert(LegRepurchaseTerm_76.getString());
        FIX::LegSecurityDesc LegSecurityDesc_76("STRING_2128796074");
        noLegs_0_0_2_1.set(LegSecurityDesc_76);
        InstrumentLeg_76.insert(LegSecurityDesc_76.getString());
        FIX::LegSecurityExchange LegSecurityExchange_76("EXCHANGE_2052674038");
        noLegs_0_0_2_1.set(LegSecurityExchange_76);
        InstrumentLeg_76.insert(LegSecurityExchange_76.getString());
        FIX::LegSecurityID LegSecurityID_76("STRING_1595793850");
        noLegs_0_0_2_1.set(LegSecurityID_76);
        InstrumentLeg_76.insert(LegSecurityID_76.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_76("STRING_1465798891");
        noLegs_0_0_2_1.set(LegSecurityIDSource_76);
        InstrumentLeg_76.insert(LegSecurityIDSource_76.getString());
        FIX::LegSecuritySubType LegSecuritySubType_76("STRING_17876638");
        noLegs_0_0_2_1.set(LegSecuritySubType_76);
        InstrumentLeg_76.insert(LegSecuritySubType_76.getString());
        FIX::LegSecurityType LegSecurityType_76("STRING_59077062");
        noLegs_0_0_2_1.set(LegSecurityType_76);
        InstrumentLeg_76.insert(LegSecurityType_76.getString());
        FIX::LegSide LegSide_76('1');
        noLegs_0_0_2_1.set(LegSide_76);
        InstrumentLeg_76.insert(LegSide_76.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_76("STRING_1190033782");
        noLegs_0_0_2_1.set(LegStateOrProvinceOfIssue_76);
        InstrumentLeg_76.insert(LegStateOrProvinceOfIssue_76.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_76("CAN");
        noLegs_0_0_2_1.set(LegStrikeCurrency_76);
        InstrumentLeg_76.insert(LegStrikeCurrency_76.getString());
        FIX::LegStrikePrice LegStrikePrice_76;
        LegStrikePrice_76.setString("190742");
        noLegs_0_0_2_1.set(LegStrikePrice_76);
        InstrumentLeg_76.insert(LegStrikePrice_76.getString());
        FIX::LegSymbol LegSymbol_76("STRING_1793032927");
        noLegs_0_0_2_1.set(LegSymbol_76);
        InstrumentLeg_76.insert(LegSymbol_76.getString());
        FIX::LegSymbolSfx LegSymbolSfx_76("STRING_1506545860");
        noLegs_0_0_2_1.set(LegSymbolSfx_76);
        InstrumentLeg_76.insert(LegSymbolSfx_76.getString());
        FIX::LegTimeUnit LegTimeUnit_76("STRING_1593630511");
        noLegs_0_0_2_1.set(LegTimeUnit_76);
        InstrumentLeg_76.insert(LegTimeUnit_76.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_76("STRING_1788530185");
        noLegs_0_0_2_1.set(LegUnitOfMeasure_76);
        InstrumentLeg_76.insert(LegUnitOfMeasure_76.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_76;
        LegUnitOfMeasureQty_76.setString("18554656");
        noLegs_0_0_2_1.set(LegUnitOfMeasureQty_76);
        InstrumentLeg_76.insert(LegUnitOfMeasureQty_76.getString());
        all_values.push_back(InstrumentLeg_76);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_150;
          FIX::LegSecurityAltID LegSecurityAltID_150("STRING_1486600421");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltID_150);
          LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltID_150.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_150("STRING_2145775159");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltIDSource_150);
          LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltIDSource_150.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_150);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_151;
          FIX::LegSecurityAltID LegSecurityAltID_151("STRING_1459494305");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltID_151);
          LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltID_151.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_151("STRING_1328238714");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltIDSource_151);
          LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltIDSource_151.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_151);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_152;
          FIX::LegSecurityAltID LegSecurityAltID_152("STRING_69616407");
          noLegSecurityAltID_0_0_1_3_2.set(LegSecurityAltID_152);
          LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltID_152.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_152("STRING_390364005");
          noLegSecurityAltID_0_0_1_3_2.set(LegSecurityAltIDSource_152);
          LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltIDSource_152.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_152);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      // Instrument
      multiset<string> Instrument_40;
      FIX::AttachmentPoint AttachmentPoint_40;
      AttachmentPoint_40.setString("45.460000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_40);
      Instrument_40.insert(AttachmentPoint_40.getString());
      FIX::CFICode CFICode_40("STRING_2026343673");
      noQuoteEntries_0_1_0.set(CFICode_40);
      Instrument_40.insert(CFICode_40.getString());
      FIX::CPProgram CPProgram_40(2);
      noQuoteEntries_0_1_0.set(CPProgram_40);
      Instrument_40.insert(CPProgram_40.getString());
      FIX::CPRegType CPRegType_40("STRING_1581708347");
      noQuoteEntries_0_1_0.set(CPRegType_40);
      Instrument_40.insert(CPRegType_40.getString());
      FIX::CapPrice CapPrice_40;
      CapPrice_40.setString("7718895");
      noQuoteEntries_0_1_0.set(CapPrice_40);
      Instrument_40.insert(CapPrice_40.getString());
      FIX::ContractMultiplier ContractMultiplier_40;
      ContractMultiplier_40.setString("12377409");
      noQuoteEntries_0_1_0.set(ContractMultiplier_40);
      Instrument_40.insert(ContractMultiplier_40.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_40(2);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_40);
      Instrument_40.insert(ContractMultiplierUnit_40.getString());
      FIX::ContractSettlMonth ContractSettlMonth_40("MONTHYEAR_1941025512");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_40);
      Instrument_40.insert(ContractSettlMonth_40.getString());
      FIX::CountryOfIssue CountryOfIssue_40("COUNTRY_1219053410");
      noQuoteEntries_0_1_0.set(CountryOfIssue_40);
      Instrument_40.insert(CountryOfIssue_40.getString());
      FIX::CouponPaymentDate CouponPaymentDate_40("LOCALMKTDATE_837610739");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_40);
      Instrument_40.insert(CouponPaymentDate_40.getString());
      FIX::CouponRate CouponRate_40;
      CouponRate_40.setString("57.140000");
      noQuoteEntries_0_1_0.set(CouponRate_40);
      Instrument_40.insert(CouponRate_40.getString());
      FIX::CreditRating CreditRating_40("STRING_537368653");
      noQuoteEntries_0_1_0.set(CreditRating_40);
      Instrument_40.insert(CreditRating_40.getString());
      FIX::DatedDate DatedDate_40("LOCALMKTDATE_855487377");
      noQuoteEntries_0_1_0.set(DatedDate_40);
      Instrument_40.insert(DatedDate_40.getString());
      FIX::DetachmentPoint DetachmentPoint_40;
      DetachmentPoint_40.setString("27.770000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_40);
      Instrument_40.insert(DetachmentPoint_40.getString());
      FIX::EncodedIssuer EncodedIssuer_40("DATA_1636785604");
      noQuoteEntries_0_1_0.set(EncodedIssuer_40);
      Instrument_40.insert(EncodedIssuer_40.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_40(2045521159);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_40);
      Instrument_40.insert(EncodedIssuerLen_40.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_40("DATA_1379044112");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_40);
      Instrument_40.insert(EncodedSecurityDesc_40.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_40(1787174320);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_40);
      Instrument_40.insert(EncodedSecurityDescLen_40.getString());
      FIX::ExerciseStyle ExerciseStyle_40(1);
      noQuoteEntries_0_1_0.set(ExerciseStyle_40);
      Instrument_40.insert(ExerciseStyle_40.getString());
      FIX::Factor Factor_40;
      Factor_40.setString("10245933");
      noQuoteEntries_0_1_0.set(Factor_40);
      Instrument_40.insert(Factor_40.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_40(true);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_40);
      Instrument_40.insert(FlexProductEligibilityIndicator_40.getString());
      FIX::FlexibleIndicator FlexibleIndicator_40(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_40);
      Instrument_40.insert(FlexibleIndicator_40.getString());
      FIX::FloorPrice FloorPrice_40;
      FloorPrice_40.setString("6656399");
      noQuoteEntries_0_1_0.set(FloorPrice_40);
      Instrument_40.insert(FloorPrice_40.getString());
      FIX::FlowScheduleType FlowScheduleType_40(0);
      noQuoteEntries_0_1_0.set(FlowScheduleType_40);
      Instrument_40.insert(FlowScheduleType_40.getString());
      FIX::InstrRegistry InstrRegistry_40("STRING_1825604484");
      noQuoteEntries_0_1_0.set(InstrRegistry_40);
      Instrument_40.insert(InstrRegistry_40.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_40('4');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_40);
      Instrument_40.insert(InstrmtAssignmentMethod_40.getString());
      FIX::InterestAccrualDate InterestAccrualDate_40("LOCALMKTDATE_852510021");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_40);
      Instrument_40.insert(InterestAccrualDate_40.getString());
      FIX::IssueDate IssueDate_40("LOCALMKTDATE_1137615141");
      noQuoteEntries_0_1_0.set(IssueDate_40);
      Instrument_40.insert(IssueDate_40.getString());
      FIX::Issuer Issuer_40("STRING_1332995416");
      noQuoteEntries_0_1_0.set(Issuer_40);
      Instrument_40.insert(Issuer_40.getString());
      FIX::ListMethod ListMethod_40(1);
      noQuoteEntries_0_1_0.set(ListMethod_40);
      Instrument_40.insert(ListMethod_40.getString());
      FIX::LocaleOfIssue LocaleOfIssue_40("STRING_1527979147");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_40);
      Instrument_40.insert(LocaleOfIssue_40.getString());
      FIX::MaturityDate MaturityDate_40("LOCALMKTDATE_1621959962");
      noQuoteEntries_0_1_0.set(MaturityDate_40);
      Instrument_40.insert(MaturityDate_40.getString());
      FIX::MaturityMonthYear MaturityMonthYear_40("MONTHYEAR_800986454");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_40);
      Instrument_40.insert(MaturityMonthYear_40.getString());
      FIX::MaturityTime MaturityTime_40("TZTIMEONLY_1015912449");
      noQuoteEntries_0_1_0.set(MaturityTime_40);
      Instrument_40.insert(MaturityTime_40.getString());
      FIX::MinPriceIncrement MinPriceIncrement_40;
      MinPriceIncrement_40.setString("10561846");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_40);
      Instrument_40.insert(MinPriceIncrement_40.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
      MinPriceIncrementAmount_40.setString("15728759");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_40);
      Instrument_40.insert(MinPriceIncrementAmount_40.getString());
      FIX::NTPositionLimit NTPositionLimit_40(106169784);
      noQuoteEntries_0_1_0.set(NTPositionLimit_40);
      Instrument_40.insert(NTPositionLimit_40.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
      NotionalPercentageOutstanding_40.setString("50.100000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_40);
      Instrument_40.insert(NotionalPercentageOutstanding_40.getString());
      FIX::OptAttribute OptAttribute_40('1');
      noQuoteEntries_0_1_0.set(OptAttribute_40);
      Instrument_40.insert(OptAttribute_40.getString());
      FIX::OptPayoutAmount OptPayoutAmount_40;
      OptPayoutAmount_40.setString("13252231");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_40);
      Instrument_40.insert(OptPayoutAmount_40.getString());
      FIX::OptPayoutType OptPayoutType_40(3);
      noQuoteEntries_0_1_0.set(OptPayoutType_40);
      Instrument_40.insert(OptPayoutType_40.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
      OriginalNotionalPercentageOutstanding_40.setString("98.930000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_40);
      Instrument_40.insert(OriginalNotionalPercentageOutstanding_40.getString());
      FIX::Pool Pool_40("STRING_1862591848");
      noQuoteEntries_0_1_0.set(Pool_40);
      Instrument_40.insert(Pool_40.getString());
      FIX::PositionLimit PositionLimit_40(1534219478);
      noQuoteEntries_0_1_0.set(PositionLimit_40);
      Instrument_40.insert(PositionLimit_40.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_40("STRING_INT");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_40);
      Instrument_40.insert(PriceQuoteMethod_40.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_40("STRING_1351893804");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_40);
      Instrument_40.insert(PriceUnitOfMeasure_40.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
      PriceUnitOfMeasureQty_40.setString("14322569");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_40);
      Instrument_40.insert(PriceUnitOfMeasureQty_40.getString());
      FIX::Product Product_42(10);
      noQuoteEntries_0_1_0.set(Product_42);
      Instrument_40.insert(Product_42.getString());
      FIX::ProductComplex ProductComplex_40("STRING_991584476");
      noQuoteEntries_0_1_0.set(ProductComplex_40);
      Instrument_40.insert(ProductComplex_40.getString());
      FIX::PutOrCall PutOrCall_40(1);
      noQuoteEntries_0_1_0.set(PutOrCall_40);
      Instrument_40.insert(PutOrCall_40.getString());
      FIX::RedemptionDate RedemptionDate_40("LOCALMKTDATE_165352877");
      noQuoteEntries_0_1_0.set(RedemptionDate_40);
      Instrument_40.insert(RedemptionDate_40.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_40("STRING_2137821008");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_40);
      Instrument_40.insert(RepoCollateralSecurityType_40.getString());
      FIX::RepurchaseRate RepurchaseRate_40;
      RepurchaseRate_40.setString("73.800000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_40);
      Instrument_40.insert(RepurchaseRate_40.getString());
      FIX::RepurchaseTerm RepurchaseTerm_40(830992806);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_40);
      Instrument_40.insert(RepurchaseTerm_40.getString());
      FIX::RestructuringType RestructuringType_40("STRING_XR");
      noQuoteEntries_0_1_0.set(RestructuringType_40);
      Instrument_40.insert(RestructuringType_40.getString());
      FIX::SecurityDesc SecurityDesc_40("STRING_390748217");
      noQuoteEntries_0_1_0.set(SecurityDesc_40);
      Instrument_40.insert(SecurityDesc_40.getString());
      FIX::SecurityExchange SecurityExchange_40("EXCHANGE_835749508");
      noQuoteEntries_0_1_0.set(SecurityExchange_40);
      Instrument_40.insert(SecurityExchange_40.getString());
      FIX::SecurityGroup SecurityGroup_40("STRING_1697065892");
      noQuoteEntries_0_1_0.set(SecurityGroup_40);
      Instrument_40.insert(SecurityGroup_40.getString());
      FIX::SecurityID SecurityID_40("STRING_1528363358");
      noQuoteEntries_0_1_0.set(SecurityID_40);
      Instrument_40.insert(SecurityID_40.getString());
      FIX::SecurityIDSource SecurityIDSource_40("STRING_F");
      noQuoteEntries_0_1_0.set(SecurityIDSource_40);
      Instrument_40.insert(SecurityIDSource_40.getString());
      FIX::SecurityStatus SecurityStatus_40("STRING_2");
      noQuoteEntries_0_1_0.set(SecurityStatus_40);
      Instrument_40.insert(SecurityStatus_40.getString());
      FIX::SecuritySubType SecuritySubType_41("STRING_908858857");
      noQuoteEntries_0_1_0.set(SecuritySubType_41);
      Instrument_40.insert(SecuritySubType_41.getString());
      FIX::SecurityType SecurityType_42("STRING_MBS");
      noQuoteEntries_0_1_0.set(SecurityType_42);
      Instrument_40.insert(SecurityType_42.getString());
      FIX::Seniority Seniority_40("STRING_SR");
      noQuoteEntries_0_1_0.set(Seniority_40);
      Instrument_40.insert(Seniority_40.getString());
      FIX::SettlMethod SettlMethod_40('C');
      noQuoteEntries_0_1_0.set(SettlMethod_40);
      Instrument_40.insert(SettlMethod_40.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_40("STRING_551922252");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_40);
      Instrument_40.insert(SettleOnOpenFlag_40.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_40("STRING_698087442");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_40);
      Instrument_40.insert(StateOrProvinceOfIssue_40.getString());
      FIX::StrikeCurrency StrikeCurrency_40("USD");
      noQuoteEntries_0_1_0.set(StrikeCurrency_40);
      Instrument_40.insert(StrikeCurrency_40.getString());
      FIX::StrikeMultiplier StrikeMultiplier_40;
      StrikeMultiplier_40.setString("20645052");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_40);
      Instrument_40.insert(StrikeMultiplier_40.getString());
      FIX::StrikePrice StrikePrice_40;
      StrikePrice_40.setString("12086806");
      noQuoteEntries_0_1_0.set(StrikePrice_40);
      Instrument_40.insert(StrikePrice_40.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_40(1);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_40);
      Instrument_40.insert(StrikePriceBoundaryMethod_40.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
      StrikePriceBoundaryPrecision_40.setString("15.140000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_40);
      Instrument_40.insert(StrikePriceBoundaryPrecision_40.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_40(2);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_40);
      Instrument_40.insert(StrikePriceDeterminationMethod_40.getString());
      FIX::StrikeValue StrikeValue_40;
      StrikeValue_40.setString("4585115");
      noQuoteEntries_0_1_0.set(StrikeValue_40);
      Instrument_40.insert(StrikeValue_40.getString());
      FIX::Symbol Symbol_40("STRING_434490536");
      noQuoteEntries_0_1_0.set(Symbol_40);
      Instrument_40.insert(Symbol_40.getString());
      FIX::SymbolSfx SymbolSfx_40("STRING_CD");
      noQuoteEntries_0_1_0.set(SymbolSfx_40);
      Instrument_40.insert(SymbolSfx_40.getString());
      FIX::TimeUnit TimeUnit_40("STRING_Yr");
      noQuoteEntries_0_1_0.set(TimeUnit_40);
      Instrument_40.insert(TimeUnit_40.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_40(3);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_40);
      Instrument_40.insert(UnderlyingPriceDeterminationMethod_40.getString());
      FIX::UnitOfMeasure UnitOfMeasure_40("STRING_Bcf");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_40);
      Instrument_40.insert(UnitOfMeasure_40.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
      UnitOfMeasureQty_40.setString("10926536");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_40);
      Instrument_40.insert(UnitOfMeasureQty_40.getString());
      FIX::ValuationMethod ValuationMethod_40("STRING_FUTDA");
      noQuoteEntries_0_1_0.set(ValuationMethod_40);
      Instrument_40.insert(ValuationMethod_40.getString());
      all_values.push_back(Instrument_40);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_81;
        FIX::ComplexEventCondition ComplexEventCondition_81(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventCondition_81.getString());
        FIX::ComplexEventPrice ComplexEventPrice_81;
        ComplexEventPrice_81.setString("5715957");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPrice_81.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_81(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryMethod_81.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_81;
        ComplexEventPriceBoundaryPrecision_81.setString("55.910000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryPrecision_81.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_81(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceTimeType_81.getString());
        FIX::ComplexEventType ComplexEventType_81(9);
        noComplexEvents_0_0_2_0.set(ComplexEventType_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventType_81.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_81;
        ComplexOptPayoutAmount_81.setString("15769089");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexOptPayoutAmount_81.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_81);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_169;
          FIX::ComplexEventEndDate ComplexEventEndDate_169(FIX::UTCTIMESTAMP(7, 42, 0, 25, 7, 2006));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_169);
          ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventEndDate_169.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_169(FIX::UTCTIMESTAMP(13, 43, 18, 4, 10, 2007));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_169);
          ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventStartDate_169.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_169);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_337;
            FIX::ComplexEventEndTime ComplexEventEndTime_337(FIX::UTCTIMEONLY(17, 10, 47));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_337);
            ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventEndTime_337.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_337(FIX::UTCTIMEONLY(12, 55, 15));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_337);
            ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventStartTime_337.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_337);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_338;
            FIX::ComplexEventEndTime ComplexEventEndTime_338(FIX::UTCTIMEONLY(17, 9, 17));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_338);
            ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventEndTime_338.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_338(FIX::UTCTIMEONLY(23, 58, 30));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_338);
            ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventStartTime_338.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_338);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_170;
          FIX::ComplexEventEndDate ComplexEventEndDate_170(FIX::UTCTIMESTAMP(5, 12, 59, 27, 12, 2000));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_170);
          ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventEndDate_170.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_170(FIX::UTCTIMESTAMP(16, 17, 25, 16, 4, 2007));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_170);
          ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventStartDate_170.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_170);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_339;
            FIX::ComplexEventEndTime ComplexEventEndTime_339(FIX::UTCTIMEONLY(6, 21, 12));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_339);
            ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventEndTime_339.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_339(FIX::UTCTIMEONLY(1, 59, 33));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_339);
            ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventStartTime_339.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_339);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_340;
            FIX::ComplexEventEndTime ComplexEventEndTime_340(FIX::UTCTIMEONLY(16, 42, 32));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_340);
            ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventEndTime_340.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_340(FIX::UTCTIMEONLY(18, 23, 42));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_340);
            ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventStartTime_340.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_340);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_341;
            FIX::ComplexEventEndTime ComplexEventEndTime_341(FIX::UTCTIMEONLY(16, 46, 17));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventEndTime_341);
            ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventEndTime_341.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_341(FIX::UTCTIMEONLY(1, 51, 55));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventStartTime_341);
            ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventStartTime_341.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_341);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_171;
          FIX::ComplexEventEndDate ComplexEventEndDate_171(FIX::UTCTIMESTAMP(12, 20, 6, 15, 2, 2015));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventEndDate_171);
          ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventEndDate_171.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_171(FIX::UTCTIMESTAMP(20, 30, 56, 14, 1, 2007));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventStartDate_171);
          ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventStartDate_171.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_171);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_342;
            FIX::ComplexEventEndTime ComplexEventEndTime_342(FIX::UTCTIMEONLY(23, 54, 28));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventEndTime_342);
            ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventEndTime_342.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_342(FIX::UTCTIMEONLY(4, 51, 32));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventStartTime_342);
            ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventStartTime_342.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_342);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_73;
        FIX::EventDate EventDate_73("LOCALMKTDATE_3396383");
        noEvents_0_0_2_0.set(EventDate_73);
        EvntGrp_NoEvents_73.insert(EventDate_73.getString());
        FIX::EventPx EventPx_73;
        EventPx_73.setString("15481173");
        noEvents_0_0_2_0.set(EventPx_73);
        EvntGrp_NoEvents_73.insert(EventPx_73.getString());
        FIX::EventText EventText_73("STRING_372611911");
        noEvents_0_0_2_0.set(EventText_73);
        EvntGrp_NoEvents_73.insert(EventText_73.getString());
        FIX::EventTime EventTime_73(FIX::UTCTIMESTAMP(8, 22, 58, 22, 11, 2006));
        noEvents_0_0_2_0.set(EventTime_73);
        EvntGrp_NoEvents_73.insert(EventTime_73.getString());
        FIX::EventType EventType_73(5);
        noEvents_0_0_2_0.set(EventType_73);
        EvntGrp_NoEvents_73.insert(EventType_73.getString());
        all_values.push_back(EvntGrp_NoEvents_73);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_74;
        FIX::EventDate EventDate_74("LOCALMKTDATE_2100148002");
        noEvents_0_0_2_1.set(EventDate_74);
        EvntGrp_NoEvents_74.insert(EventDate_74.getString());
        FIX::EventPx EventPx_74;
        EventPx_74.setString("18011707");
        noEvents_0_0_2_1.set(EventPx_74);
        EvntGrp_NoEvents_74.insert(EventPx_74.getString());
        FIX::EventText EventText_74("STRING_243902953");
        noEvents_0_0_2_1.set(EventText_74);
        EvntGrp_NoEvents_74.insert(EventText_74.getString());
        FIX::EventTime EventTime_74(FIX::UTCTIMESTAMP(20, 35, 14, 2, 12, 2009));
        noEvents_0_0_2_1.set(EventTime_74);
        EvntGrp_NoEvents_74.insert(EventTime_74.getString());
        FIX::EventType EventType_74(19);
        noEvents_0_0_2_1.set(EventType_74);
        EvntGrp_NoEvents_74.insert(EventType_74.getString());
        all_values.push_back(EvntGrp_NoEvents_74);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_78;
        FIX::InstrumentPartyID InstrumentPartyID_78("STRING_282634008");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyID_78.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_78('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyIDSource_78.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_78(892292747);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyRole_78.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_78);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153;
          FIX::InstrumentPartySubID InstrumentPartySubID_153("STRING_69085709");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_153);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubID_153.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_153(1245799178);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_153);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153.insert(InstrumentPartySubIDType_153.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154;
          FIX::InstrumentPartySubID InstrumentPartySubID_154("STRING_1934882599");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_154);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubID_154.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_154(1493603871);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_154);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154.insert(InstrumentPartySubIDType_154.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_79;
        FIX::InstrumentPartyID InstrumentPartyID_79("STRING_1249195561");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_79);
        InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyID_79.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_79('1');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_79);
        InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyIDSource_79.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_79(1866215782);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_79);
        InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyRole_79.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_79);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155;
          FIX::InstrumentPartySubID InstrumentPartySubID_155("STRING_1103907438");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_155);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubID_155.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_155(1126970496);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_155);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155.insert(InstrumentPartySubIDType_155.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156;
          FIX::InstrumentPartySubID InstrumentPartySubID_156("STRING_472941842");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_156);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubID_156.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_156(172028776);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_156);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156.insert(InstrumentPartySubIDType_156.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_71;
        FIX::SecurityAltID SecurityAltID_71("STRING_2106929181");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_71);
        SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltID_71.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_71("STRING_412938620");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_71);
        SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltIDSource_71.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_71);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_80;
      FIX::SecurityXML SecurityXML_81("XMLDATA_884869585");
      noQuoteEntries_0_1_0.set(SecurityXML_81);
      FIX::SecurityXMLLen SecurityXMLLen_40(1760616237);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_40);
      FIX::SecurityXMLSchema SecurityXMLSchema_40("STRING_656841573");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_40);
      SecurityXML_80.insert(SecurityXMLSchema_40.getString());
      all_values.push_back(SecurityXML_80);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_9;
      BidForwardPoints_9.setString("11164997");
      noQuoteEntries_0_1_1.set(BidForwardPoints_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints_9.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_9;
      BidForwardPoints2_9.setString("2671640");
      noQuoteEntries_0_1_1.set(BidForwardPoints2_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints2_9.getString());
      FIX::BidPx BidPx_9;
      BidPx_9.setString("7293406");
      noQuoteEntries_0_1_1.set(BidPx_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidPx_9.getString());
      FIX::BidSize BidSize_9;
      BidSize_9.setString("18624683");
      noQuoteEntries_0_1_1.set(BidSize_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSize_9.getString());
      FIX::BidSpotRate BidSpotRate_9;
      BidSpotRate_9.setString("18392147");
      noQuoteEntries_0_1_1.set(BidSpotRate_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSpotRate_9.getString());
      FIX::BidYield BidYield_9;
      BidYield_9.setString("74.640000");
      noQuoteEntries_0_1_1.set(BidYield_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidYield_9.getString());
      FIX::BookingType BookingType_16(1);
      noQuoteEntries_0_1_1.set(BookingType_16);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BookingType_16.getString());
      FIX::Currency Currency_39("EUR");
      noQuoteEntries_0_1_1.set(Currency_39);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(Currency_39.getString());
      FIX::MidPx MidPx_9;
      MidPx_9.setString("13377382");
      noQuoteEntries_0_1_1.set(MidPx_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidPx_9.getString());
      FIX::MidYield MidYield_9;
      MidYield_9.setString("95.830000");
      noQuoteEntries_0_1_1.set(MidYield_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidYield_9.getString());
      FIX::OfferForwardPoints OfferForwardPoints_9;
      OfferForwardPoints_9.setString("20629556");
      noQuoteEntries_0_1_1.set(OfferForwardPoints_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints_9.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_9;
      OfferForwardPoints2_9.setString("7346309");
      noQuoteEntries_0_1_1.set(OfferForwardPoints2_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_9.getString());
      FIX::OfferPx OfferPx_9;
      OfferPx_9.setString("18150752");
      noQuoteEntries_0_1_1.set(OfferPx_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferPx_9.getString());
      FIX::OfferSize OfferSize_9;
      OfferSize_9.setString("11612711");
      noQuoteEntries_0_1_1.set(OfferSize_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSize_9.getString());
      FIX::OfferSpotRate OfferSpotRate_9;
      OfferSpotRate_9.setString("5220299");
      noQuoteEntries_0_1_1.set(OfferSpotRate_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSpotRate_9.getString());
      FIX::OfferYield OfferYield_9;
      OfferYield_9.setString("55.160000");
      noQuoteEntries_0_1_1.set(OfferYield_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferYield_9.getString());
      FIX::OrdType OrdType_42('7');
      noQuoteEntries_0_1_1.set(OrdType_42);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrdType_42.getString());
      FIX::OrderCapacity OrderCapacity_17('W');
      noQuoteEntries_0_1_1.set(OrderCapacity_17);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderCapacity_17.getString());
      FIX::OrderQty2 OrderQty2_10;
      OrderQty2_10.setString("8799276");
      noQuoteEntries_0_1_1.set(OrderQty2_10);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderQty2_10.getString());
      FIX::OrderRestrictions OrderRestrictions_14("MULTIPLECHARVALUE_E");
      noQuoteEntries_0_1_1.set(OrderRestrictions_14);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderRestrictions_14.getString());
      FIX::QuoteEntryID QuoteEntryID_12("STRING_813969976");
      noQuoteEntries_0_1_1.set(QuoteEntryID_12);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryID_12.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_1(2006898147);
      noQuoteEntries_0_1_1.set(QuoteEntryRejectReason_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryRejectReason_1.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_1(15);
      noQuoteEntries_0_1_1.set(QuoteEntryStatus_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryStatus_1.getString());
      FIX::SettlDate SettlDate_32("LOCALMKTDATE_985998752");
      noQuoteEntries_0_1_1.set(SettlDate_32);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate_32.getString());
      FIX::SettlDate2 SettlDate2_10("LOCALMKTDATE_791619730");
      noQuoteEntries_0_1_1.set(SettlDate2_10);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate2_10.getString());
      FIX::TradingSessionID TradingSessionID_45("STRING_3");
      noQuoteEntries_0_1_1.set(TradingSessionID_45);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionID_45.getString());
      FIX::TradingSessionSubID TradingSessionSubID_45("STRING_2");
      noQuoteEntries_0_1_1.set(TradingSessionSubID_45);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionSubID_45.getString());
      FIX::TransactTime TransactTime_35(FIX::UTCTIMESTAMP(3, 26, 10, 0, 4, 2017));
      noQuoteEntries_0_1_1.set(TransactTime_35);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TransactTime_35.getString());
      FIX::ValidUntilTime ValidUntilTime_10(FIX::UTCTIMESTAMP(4, 57, 49, 15, 12, 2016));
      noQuoteEntries_0_1_1.set(ValidUntilTime_10);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(ValidUntilTime_10.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_1);
      all_compo_names.insert("QuotEntryAckGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_77;
        FIX::EncodedLegIssuer EncodedLegIssuer_77("DATA_1340479859");
        noLegs_0_1_2_0.set(EncodedLegIssuer_77);
        InstrumentLeg_77.insert(EncodedLegIssuer_77.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_77(112797469);
        noLegs_0_1_2_0.set(EncodedLegIssuerLen_77);
        InstrumentLeg_77.insert(EncodedLegIssuerLen_77.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_77("DATA_1134165770");
        noLegs_0_1_2_0.set(EncodedLegSecurityDesc_77);
        InstrumentLeg_77.insert(EncodedLegSecurityDesc_77.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_77(1862509775);
        noLegs_0_1_2_0.set(EncodedLegSecurityDescLen_77);
        InstrumentLeg_77.insert(EncodedLegSecurityDescLen_77.getString());
        FIX::LegCFICode LegCFICode_77("STRING_1273992985");
        noLegs_0_1_2_0.set(LegCFICode_77);
        InstrumentLeg_77.insert(LegCFICode_77.getString());
        FIX::LegContractMultiplier LegContractMultiplier_77;
        LegContractMultiplier_77.setString("13971488");
        noLegs_0_1_2_0.set(LegContractMultiplier_77);
        InstrumentLeg_77.insert(LegContractMultiplier_77.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_77(1572572312);
        noLegs_0_1_2_0.set(LegContractMultiplierUnit_77);
        InstrumentLeg_77.insert(LegContractMultiplierUnit_77.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_77("MONTHYEAR_6436987");
        noLegs_0_1_2_0.set(LegContractSettlMonth_77);
        InstrumentLeg_77.insert(LegContractSettlMonth_77.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_77("COUNTRY_2092806463");
        noLegs_0_1_2_0.set(LegCountryOfIssue_77);
        InstrumentLeg_77.insert(LegCountryOfIssue_77.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_77("LOCALMKTDATE_239058640");
        noLegs_0_1_2_0.set(LegCouponPaymentDate_77);
        InstrumentLeg_77.insert(LegCouponPaymentDate_77.getString());
        FIX::LegCouponRate LegCouponRate_77;
        LegCouponRate_77.setString("51.340000");
        noLegs_0_1_2_0.set(LegCouponRate_77);
        InstrumentLeg_77.insert(LegCouponRate_77.getString());
        FIX::LegCreditRating LegCreditRating_77("STRING_1113922296");
        noLegs_0_1_2_0.set(LegCreditRating_77);
        InstrumentLeg_77.insert(LegCreditRating_77.getString());
        FIX::LegCurrency LegCurrency_77("USD");
        noLegs_0_1_2_0.set(LegCurrency_77);
        InstrumentLeg_77.insert(LegCurrency_77.getString());
        FIX::LegDatedDate LegDatedDate_77("LOCALMKTDATE_94483662");
        noLegs_0_1_2_0.set(LegDatedDate_77);
        InstrumentLeg_77.insert(LegDatedDate_77.getString());
        FIX::LegExerciseStyle LegExerciseStyle_77(476511118);
        noLegs_0_1_2_0.set(LegExerciseStyle_77);
        InstrumentLeg_77.insert(LegExerciseStyle_77.getString());
        FIX::LegFactor LegFactor_77;
        LegFactor_77.setString("1864768");
        noLegs_0_1_2_0.set(LegFactor_77);
        InstrumentLeg_77.insert(LegFactor_77.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_77(835661265);
        noLegs_0_1_2_0.set(LegFlowScheduleType_77);
        InstrumentLeg_77.insert(LegFlowScheduleType_77.getString());
        FIX::LegInstrRegistry LegInstrRegistry_77("STRING_384806416");
        noLegs_0_1_2_0.set(LegInstrRegistry_77);
        InstrumentLeg_77.insert(LegInstrRegistry_77.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_77("LOCALMKTDATE_831982273");
        noLegs_0_1_2_0.set(LegInterestAccrualDate_77);
        InstrumentLeg_77.insert(LegInterestAccrualDate_77.getString());
        FIX::LegIssueDate LegIssueDate_77("LOCALMKTDATE_1844002893");
        noLegs_0_1_2_0.set(LegIssueDate_77);
        InstrumentLeg_77.insert(LegIssueDate_77.getString());
        FIX::LegIssuer LegIssuer_77("STRING_1022442404");
        noLegs_0_1_2_0.set(LegIssuer_77);
        InstrumentLeg_77.insert(LegIssuer_77.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_77("STRING_1192472412");
        noLegs_0_1_2_0.set(LegLocaleOfIssue_77);
        InstrumentLeg_77.insert(LegLocaleOfIssue_77.getString());
        FIX::LegMaturityDate LegMaturityDate_77("LOCALMKTDATE_396591984");
        noLegs_0_1_2_0.set(LegMaturityDate_77);
        InstrumentLeg_77.insert(LegMaturityDate_77.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_77("MONTHYEAR_2056685856");
        noLegs_0_1_2_0.set(LegMaturityMonthYear_77);
        InstrumentLeg_77.insert(LegMaturityMonthYear_77.getString());
        FIX::LegMaturityTime LegMaturityTime_77("TZTIMEONLY_460583101");
        noLegs_0_1_2_0.set(LegMaturityTime_77);
        InstrumentLeg_77.insert(LegMaturityTime_77.getString());
        FIX::LegOptAttribute LegOptAttribute_77('1');
        noLegs_0_1_2_0.set(LegOptAttribute_77);
        InstrumentLeg_77.insert(LegOptAttribute_77.getString());
        FIX::LegOptionRatio LegOptionRatio_77;
        LegOptionRatio_77.setString("21141085");
        noLegs_0_1_2_0.set(LegOptionRatio_77);
        InstrumentLeg_77.insert(LegOptionRatio_77.getString());
        FIX::LegPool LegPool_77("STRING_1066431996");
        noLegs_0_1_2_0.set(LegPool_77);
        InstrumentLeg_77.insert(LegPool_77.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_77("STRING_1688497698");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasure_77);
        InstrumentLeg_77.insert(LegPriceUnitOfMeasure_77.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_77;
        LegPriceUnitOfMeasureQty_77.setString("20870031");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasureQty_77);
        InstrumentLeg_77.insert(LegPriceUnitOfMeasureQty_77.getString());
        FIX::LegProduct LegProduct_77(259428208);
        noLegs_0_1_2_0.set(LegProduct_77);
        InstrumentLeg_77.insert(LegProduct_77.getString());
        FIX::LegPutOrCall LegPutOrCall_77(1801295167);
        noLegs_0_1_2_0.set(LegPutOrCall_77);
        InstrumentLeg_77.insert(LegPutOrCall_77.getString());
        FIX::LegRatioQty LegRatioQty_77;
        LegRatioQty_77.setString("10736852");
        noLegs_0_1_2_0.set(LegRatioQty_77);
        InstrumentLeg_77.insert(LegRatioQty_77.getString());
        FIX::LegRedemptionDate LegRedemptionDate_77("LOCALMKTDATE_2121937983");
        noLegs_0_1_2_0.set(LegRedemptionDate_77);
        InstrumentLeg_77.insert(LegRedemptionDate_77.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_77("STRING_927804504");
        noLegs_0_1_2_0.set(LegRepoCollateralSecurityType_77);
        InstrumentLeg_77.insert(LegRepoCollateralSecurityType_77.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_77;
        LegRepurchaseRate_77.setString("4.520000");
        noLegs_0_1_2_0.set(LegRepurchaseRate_77);
        InstrumentLeg_77.insert(LegRepurchaseRate_77.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_77(1547026647);
        noLegs_0_1_2_0.set(LegRepurchaseTerm_77);
        InstrumentLeg_77.insert(LegRepurchaseTerm_77.getString());
        FIX::LegSecurityDesc LegSecurityDesc_77("STRING_934241492");
        noLegs_0_1_2_0.set(LegSecurityDesc_77);
        InstrumentLeg_77.insert(LegSecurityDesc_77.getString());
        FIX::LegSecurityExchange LegSecurityExchange_77("EXCHANGE_268673267");
        noLegs_0_1_2_0.set(LegSecurityExchange_77);
        InstrumentLeg_77.insert(LegSecurityExchange_77.getString());
        FIX::LegSecurityID LegSecurityID_77("STRING_1786085288");
        noLegs_0_1_2_0.set(LegSecurityID_77);
        InstrumentLeg_77.insert(LegSecurityID_77.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_77("STRING_800092978");
        noLegs_0_1_2_0.set(LegSecurityIDSource_77);
        InstrumentLeg_77.insert(LegSecurityIDSource_77.getString());
        FIX::LegSecuritySubType LegSecuritySubType_77("STRING_1382595563");
        noLegs_0_1_2_0.set(LegSecuritySubType_77);
        InstrumentLeg_77.insert(LegSecuritySubType_77.getString());
        FIX::LegSecurityType LegSecurityType_77("STRING_863659033");
        noLegs_0_1_2_0.set(LegSecurityType_77);
        InstrumentLeg_77.insert(LegSecurityType_77.getString());
        FIX::LegSide LegSide_77('1');
        noLegs_0_1_2_0.set(LegSide_77);
        InstrumentLeg_77.insert(LegSide_77.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_77("STRING_1477079225");
        noLegs_0_1_2_0.set(LegStateOrProvinceOfIssue_77);
        InstrumentLeg_77.insert(LegStateOrProvinceOfIssue_77.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_77("GBP");
        noLegs_0_1_2_0.set(LegStrikeCurrency_77);
        InstrumentLeg_77.insert(LegStrikeCurrency_77.getString());
        FIX::LegStrikePrice LegStrikePrice_77;
        LegStrikePrice_77.setString("1652568");
        noLegs_0_1_2_0.set(LegStrikePrice_77);
        InstrumentLeg_77.insert(LegStrikePrice_77.getString());
        FIX::LegSymbol LegSymbol_77("STRING_1724976567");
        noLegs_0_1_2_0.set(LegSymbol_77);
        InstrumentLeg_77.insert(LegSymbol_77.getString());
        FIX::LegSymbolSfx LegSymbolSfx_77("STRING_328539704");
        noLegs_0_1_2_0.set(LegSymbolSfx_77);
        InstrumentLeg_77.insert(LegSymbolSfx_77.getString());
        FIX::LegTimeUnit LegTimeUnit_77("STRING_2009259735");
        noLegs_0_1_2_0.set(LegTimeUnit_77);
        InstrumentLeg_77.insert(LegTimeUnit_77.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_77("STRING_599935323");
        noLegs_0_1_2_0.set(LegUnitOfMeasure_77);
        InstrumentLeg_77.insert(LegUnitOfMeasure_77.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_77;
        LegUnitOfMeasureQty_77.setString("15210121");
        noLegs_0_1_2_0.set(LegUnitOfMeasureQty_77);
        InstrumentLeg_77.insert(LegUnitOfMeasureQty_77.getString());
        all_values.push_back(InstrumentLeg_77);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_153;
          FIX::LegSecurityAltID LegSecurityAltID_153("STRING_509137531");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltID_153);
          LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltID_153.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_153("STRING_1981595218");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltIDSource_153);
          LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltIDSource_153.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_153);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_154;
          FIX::LegSecurityAltID LegSecurityAltID_154("STRING_1501659946");
          noLegSecurityAltID_0_1_0_3_1.set(LegSecurityAltID_154);
          LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltID_154.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_154("STRING_475762407");
          noLegSecurityAltID_0_1_0_3_1.set(LegSecurityAltIDSource_154);
          LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltIDSource_154.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_154);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_155;
          FIX::LegSecurityAltID LegSecurityAltID_155("STRING_900543566");
          noLegSecurityAltID_0_1_0_3_2.set(LegSecurityAltID_155);
          LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltID_155.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_155("STRING_1042673996");
          noLegSecurityAltID_0_1_0_3_2.set(LegSecurityAltIDSource_155);
          LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltIDSource_155.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_155);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_78;
        FIX::EncodedLegIssuer EncodedLegIssuer_78("DATA_415281912");
        noLegs_0_1_2_1.set(EncodedLegIssuer_78);
        InstrumentLeg_78.insert(EncodedLegIssuer_78.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_78(1159971774);
        noLegs_0_1_2_1.set(EncodedLegIssuerLen_78);
        InstrumentLeg_78.insert(EncodedLegIssuerLen_78.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_78("DATA_696485516");
        noLegs_0_1_2_1.set(EncodedLegSecurityDesc_78);
        InstrumentLeg_78.insert(EncodedLegSecurityDesc_78.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_78(1488967188);
        noLegs_0_1_2_1.set(EncodedLegSecurityDescLen_78);
        InstrumentLeg_78.insert(EncodedLegSecurityDescLen_78.getString());
        FIX::LegCFICode LegCFICode_78("STRING_1134426109");
        noLegs_0_1_2_1.set(LegCFICode_78);
        InstrumentLeg_78.insert(LegCFICode_78.getString());
        FIX::LegContractMultiplier LegContractMultiplier_78;
        LegContractMultiplier_78.setString("16242900");
        noLegs_0_1_2_1.set(LegContractMultiplier_78);
        InstrumentLeg_78.insert(LegContractMultiplier_78.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_78(1812317641);
        noLegs_0_1_2_1.set(LegContractMultiplierUnit_78);
        InstrumentLeg_78.insert(LegContractMultiplierUnit_78.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_78("MONTHYEAR_533969109");
        noLegs_0_1_2_1.set(LegContractSettlMonth_78);
        InstrumentLeg_78.insert(LegContractSettlMonth_78.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_78("COUNTRY_411047864");
        noLegs_0_1_2_1.set(LegCountryOfIssue_78);
        InstrumentLeg_78.insert(LegCountryOfIssue_78.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_78("LOCALMKTDATE_2080990908");
        noLegs_0_1_2_1.set(LegCouponPaymentDate_78);
        InstrumentLeg_78.insert(LegCouponPaymentDate_78.getString());
        FIX::LegCouponRate LegCouponRate_78;
        LegCouponRate_78.setString("7.490000");
        noLegs_0_1_2_1.set(LegCouponRate_78);
        InstrumentLeg_78.insert(LegCouponRate_78.getString());
        FIX::LegCreditRating LegCreditRating_78("STRING_1211140843");
        noLegs_0_1_2_1.set(LegCreditRating_78);
        InstrumentLeg_78.insert(LegCreditRating_78.getString());
        FIX::LegCurrency LegCurrency_78("JPY");
        noLegs_0_1_2_1.set(LegCurrency_78);
        InstrumentLeg_78.insert(LegCurrency_78.getString());
        FIX::LegDatedDate LegDatedDate_78("LOCALMKTDATE_521221390");
        noLegs_0_1_2_1.set(LegDatedDate_78);
        InstrumentLeg_78.insert(LegDatedDate_78.getString());
        FIX::LegExerciseStyle LegExerciseStyle_78(645698401);
        noLegs_0_1_2_1.set(LegExerciseStyle_78);
        InstrumentLeg_78.insert(LegExerciseStyle_78.getString());
        FIX::LegFactor LegFactor_78;
        LegFactor_78.setString("2289162");
        noLegs_0_1_2_1.set(LegFactor_78);
        InstrumentLeg_78.insert(LegFactor_78.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_78(17778820);
        noLegs_0_1_2_1.set(LegFlowScheduleType_78);
        InstrumentLeg_78.insert(LegFlowScheduleType_78.getString());
        FIX::LegInstrRegistry LegInstrRegistry_78("STRING_810955244");
        noLegs_0_1_2_1.set(LegInstrRegistry_78);
        InstrumentLeg_78.insert(LegInstrRegistry_78.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_78("LOCALMKTDATE_1953892852");
        noLegs_0_1_2_1.set(LegInterestAccrualDate_78);
        InstrumentLeg_78.insert(LegInterestAccrualDate_78.getString());
        FIX::LegIssueDate LegIssueDate_78("LOCALMKTDATE_346318524");
        noLegs_0_1_2_1.set(LegIssueDate_78);
        InstrumentLeg_78.insert(LegIssueDate_78.getString());
        FIX::LegIssuer LegIssuer_78("STRING_672731331");
        noLegs_0_1_2_1.set(LegIssuer_78);
        InstrumentLeg_78.insert(LegIssuer_78.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_78("STRING_406344528");
        noLegs_0_1_2_1.set(LegLocaleOfIssue_78);
        InstrumentLeg_78.insert(LegLocaleOfIssue_78.getString());
        FIX::LegMaturityDate LegMaturityDate_78("LOCALMKTDATE_1867330641");
        noLegs_0_1_2_1.set(LegMaturityDate_78);
        InstrumentLeg_78.insert(LegMaturityDate_78.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_78("MONTHYEAR_931099403");
        noLegs_0_1_2_1.set(LegMaturityMonthYear_78);
        InstrumentLeg_78.insert(LegMaturityMonthYear_78.getString());
        FIX::LegMaturityTime LegMaturityTime_78("TZTIMEONLY_915482059");
        noLegs_0_1_2_1.set(LegMaturityTime_78);
        InstrumentLeg_78.insert(LegMaturityTime_78.getString());
        FIX::LegOptAttribute LegOptAttribute_78('1');
        noLegs_0_1_2_1.set(LegOptAttribute_78);
        InstrumentLeg_78.insert(LegOptAttribute_78.getString());
        FIX::LegOptionRatio LegOptionRatio_78;
        LegOptionRatio_78.setString("2852757");
        noLegs_0_1_2_1.set(LegOptionRatio_78);
        InstrumentLeg_78.insert(LegOptionRatio_78.getString());
        FIX::LegPool LegPool_78("STRING_1391244466");
        noLegs_0_1_2_1.set(LegPool_78);
        InstrumentLeg_78.insert(LegPool_78.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_78("STRING_454502129");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasure_78);
        InstrumentLeg_78.insert(LegPriceUnitOfMeasure_78.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_78;
        LegPriceUnitOfMeasureQty_78.setString("13279496");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasureQty_78);
        InstrumentLeg_78.insert(LegPriceUnitOfMeasureQty_78.getString());
        FIX::LegProduct LegProduct_78(1806526379);
        noLegs_0_1_2_1.set(LegProduct_78);
        InstrumentLeg_78.insert(LegProduct_78.getString());
        FIX::LegPutOrCall LegPutOrCall_78(1614473904);
        noLegs_0_1_2_1.set(LegPutOrCall_78);
        InstrumentLeg_78.insert(LegPutOrCall_78.getString());
        FIX::LegRatioQty LegRatioQty_78;
        LegRatioQty_78.setString("20244352");
        noLegs_0_1_2_1.set(LegRatioQty_78);
        InstrumentLeg_78.insert(LegRatioQty_78.getString());
        FIX::LegRedemptionDate LegRedemptionDate_78("LOCALMKTDATE_1148009919");
        noLegs_0_1_2_1.set(LegRedemptionDate_78);
        InstrumentLeg_78.insert(LegRedemptionDate_78.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_78("STRING_601416365");
        noLegs_0_1_2_1.set(LegRepoCollateralSecurityType_78);
        InstrumentLeg_78.insert(LegRepoCollateralSecurityType_78.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_78;
        LegRepurchaseRate_78.setString("15.860000");
        noLegs_0_1_2_1.set(LegRepurchaseRate_78);
        InstrumentLeg_78.insert(LegRepurchaseRate_78.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_78(812843912);
        noLegs_0_1_2_1.set(LegRepurchaseTerm_78);
        InstrumentLeg_78.insert(LegRepurchaseTerm_78.getString());
        FIX::LegSecurityDesc LegSecurityDesc_78("STRING_1135385474");
        noLegs_0_1_2_1.set(LegSecurityDesc_78);
        InstrumentLeg_78.insert(LegSecurityDesc_78.getString());
        FIX::LegSecurityExchange LegSecurityExchange_78("EXCHANGE_1912289451");
        noLegs_0_1_2_1.set(LegSecurityExchange_78);
        InstrumentLeg_78.insert(LegSecurityExchange_78.getString());
        FIX::LegSecurityID LegSecurityID_78("STRING_746351173");
        noLegs_0_1_2_1.set(LegSecurityID_78);
        InstrumentLeg_78.insert(LegSecurityID_78.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_78("STRING_1307956223");
        noLegs_0_1_2_1.set(LegSecurityIDSource_78);
        InstrumentLeg_78.insert(LegSecurityIDSource_78.getString());
        FIX::LegSecuritySubType LegSecuritySubType_78("STRING_975946646");
        noLegs_0_1_2_1.set(LegSecuritySubType_78);
        InstrumentLeg_78.insert(LegSecuritySubType_78.getString());
        FIX::LegSecurityType LegSecurityType_78("STRING_2062453997");
        noLegs_0_1_2_1.set(LegSecurityType_78);
        InstrumentLeg_78.insert(LegSecurityType_78.getString());
        FIX::LegSide LegSide_78('1');
        noLegs_0_1_2_1.set(LegSide_78);
        InstrumentLeg_78.insert(LegSide_78.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_78("STRING_1497168036");
        noLegs_0_1_2_1.set(LegStateOrProvinceOfIssue_78);
        InstrumentLeg_78.insert(LegStateOrProvinceOfIssue_78.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_78("GBP");
        noLegs_0_1_2_1.set(LegStrikeCurrency_78);
        InstrumentLeg_78.insert(LegStrikeCurrency_78.getString());
        FIX::LegStrikePrice LegStrikePrice_78;
        LegStrikePrice_78.setString("15149468");
        noLegs_0_1_2_1.set(LegStrikePrice_78);
        InstrumentLeg_78.insert(LegStrikePrice_78.getString());
        FIX::LegSymbol LegSymbol_78("STRING_1371623994");
        noLegs_0_1_2_1.set(LegSymbol_78);
        InstrumentLeg_78.insert(LegSymbol_78.getString());
        FIX::LegSymbolSfx LegSymbolSfx_78("STRING_232027847");
        noLegs_0_1_2_1.set(LegSymbolSfx_78);
        InstrumentLeg_78.insert(LegSymbolSfx_78.getString());
        FIX::LegTimeUnit LegTimeUnit_78("STRING_1861265381");
        noLegs_0_1_2_1.set(LegTimeUnit_78);
        InstrumentLeg_78.insert(LegTimeUnit_78.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_78("STRING_2044355326");
        noLegs_0_1_2_1.set(LegUnitOfMeasure_78);
        InstrumentLeg_78.insert(LegUnitOfMeasure_78.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_78;
        LegUnitOfMeasureQty_78.setString("6383723");
        noLegs_0_1_2_1.set(LegUnitOfMeasureQty_78);
        InstrumentLeg_78.insert(LegUnitOfMeasureQty_78.getString());
        all_values.push_back(InstrumentLeg_78);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_156;
          FIX::LegSecurityAltID LegSecurityAltID_156("STRING_827971081");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltID_156);
          LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltID_156.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_156("STRING_1553854434");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltIDSource_156);
          LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltIDSource_156.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_156);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_1);
      }
      // Instrument
      multiset<string> Instrument_41;
      FIX::AttachmentPoint AttachmentPoint_41;
      AttachmentPoint_41.setString("9.370000");
      noQuoteEntries_0_1_1.set(AttachmentPoint_41);
      Instrument_41.insert(AttachmentPoint_41.getString());
      FIX::CFICode CFICode_41("STRING_1113246783");
      noQuoteEntries_0_1_1.set(CFICode_41);
      Instrument_41.insert(CFICode_41.getString());
      FIX::CPProgram CPProgram_41(1);
      noQuoteEntries_0_1_1.set(CPProgram_41);
      Instrument_41.insert(CPProgram_41.getString());
      FIX::CPRegType CPRegType_41("STRING_1589573066");
      noQuoteEntries_0_1_1.set(CPRegType_41);
      Instrument_41.insert(CPRegType_41.getString());
      FIX::CapPrice CapPrice_41;
      CapPrice_41.setString("2937128");
      noQuoteEntries_0_1_1.set(CapPrice_41);
      Instrument_41.insert(CapPrice_41.getString());
      FIX::ContractMultiplier ContractMultiplier_41;
      ContractMultiplier_41.setString("4566579");
      noQuoteEntries_0_1_1.set(ContractMultiplier_41);
      Instrument_41.insert(ContractMultiplier_41.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_41(0);
      noQuoteEntries_0_1_1.set(ContractMultiplierUnit_41);
      Instrument_41.insert(ContractMultiplierUnit_41.getString());
      FIX::ContractSettlMonth ContractSettlMonth_41("MONTHYEAR_170664399");
      noQuoteEntries_0_1_1.set(ContractSettlMonth_41);
      Instrument_41.insert(ContractSettlMonth_41.getString());
      FIX::CountryOfIssue CountryOfIssue_41("COUNTRY_1604667903");
      noQuoteEntries_0_1_1.set(CountryOfIssue_41);
      Instrument_41.insert(CountryOfIssue_41.getString());
      FIX::CouponPaymentDate CouponPaymentDate_41("LOCALMKTDATE_1657979688");
      noQuoteEntries_0_1_1.set(CouponPaymentDate_41);
      Instrument_41.insert(CouponPaymentDate_41.getString());
      FIX::CouponRate CouponRate_41;
      CouponRate_41.setString("59.850000");
      noQuoteEntries_0_1_1.set(CouponRate_41);
      Instrument_41.insert(CouponRate_41.getString());
      FIX::CreditRating CreditRating_41("STRING_270028168");
      noQuoteEntries_0_1_1.set(CreditRating_41);
      Instrument_41.insert(CreditRating_41.getString());
      FIX::DatedDate DatedDate_41("LOCALMKTDATE_645881514");
      noQuoteEntries_0_1_1.set(DatedDate_41);
      Instrument_41.insert(DatedDate_41.getString());
      FIX::DetachmentPoint DetachmentPoint_41;
      DetachmentPoint_41.setString("17.880000");
      noQuoteEntries_0_1_1.set(DetachmentPoint_41);
      Instrument_41.insert(DetachmentPoint_41.getString());
      FIX::EncodedIssuer EncodedIssuer_41("DATA_1016379341");
      noQuoteEntries_0_1_1.set(EncodedIssuer_41);
      Instrument_41.insert(EncodedIssuer_41.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_41(1953837738);
      noQuoteEntries_0_1_1.set(EncodedIssuerLen_41);
      Instrument_41.insert(EncodedIssuerLen_41.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_41("DATA_265174786");
      noQuoteEntries_0_1_1.set(EncodedSecurityDesc_41);
      Instrument_41.insert(EncodedSecurityDesc_41.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_41(931349690);
      noQuoteEntries_0_1_1.set(EncodedSecurityDescLen_41);
      Instrument_41.insert(EncodedSecurityDescLen_41.getString());
      FIX::ExerciseStyle ExerciseStyle_41(2);
      noQuoteEntries_0_1_1.set(ExerciseStyle_41);
      Instrument_41.insert(ExerciseStyle_41.getString());
      FIX::Factor Factor_41;
      Factor_41.setString("17623428");
      noQuoteEntries_0_1_1.set(Factor_41);
      Instrument_41.insert(Factor_41.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_41(true);
      noQuoteEntries_0_1_1.set(FlexProductEligibilityIndicator_41);
      Instrument_41.insert(FlexProductEligibilityIndicator_41.getString());
      FIX::FlexibleIndicator FlexibleIndicator_41(true);
      noQuoteEntries_0_1_1.set(FlexibleIndicator_41);
      Instrument_41.insert(FlexibleIndicator_41.getString());
      FIX::FloorPrice FloorPrice_41;
      FloorPrice_41.setString("11298060");
      noQuoteEntries_0_1_1.set(FloorPrice_41);
      Instrument_41.insert(FloorPrice_41.getString());
      FIX::FlowScheduleType FlowScheduleType_41(2);
      noQuoteEntries_0_1_1.set(FlowScheduleType_41);
      Instrument_41.insert(FlowScheduleType_41.getString());
      FIX::InstrRegistry InstrRegistry_41("STRING_660702937");
      noQuoteEntries_0_1_1.set(InstrRegistry_41);
      Instrument_41.insert(InstrRegistry_41.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_41('8');
      noQuoteEntries_0_1_1.set(InstrmtAssignmentMethod_41);
      Instrument_41.insert(InstrmtAssignmentMethod_41.getString());
      FIX::InterestAccrualDate InterestAccrualDate_41("LOCALMKTDATE_613030465");
      noQuoteEntries_0_1_1.set(InterestAccrualDate_41);
      Instrument_41.insert(InterestAccrualDate_41.getString());
      FIX::IssueDate IssueDate_41("LOCALMKTDATE_1299075312");
      noQuoteEntries_0_1_1.set(IssueDate_41);
      Instrument_41.insert(IssueDate_41.getString());
      FIX::Issuer Issuer_41("STRING_277216490");
      noQuoteEntries_0_1_1.set(Issuer_41);
      Instrument_41.insert(Issuer_41.getString());
      FIX::ListMethod ListMethod_41(0);
      noQuoteEntries_0_1_1.set(ListMethod_41);
      Instrument_41.insert(ListMethod_41.getString());
      FIX::LocaleOfIssue LocaleOfIssue_41("STRING_705446098");
      noQuoteEntries_0_1_1.set(LocaleOfIssue_41);
      Instrument_41.insert(LocaleOfIssue_41.getString());
      FIX::MaturityDate MaturityDate_41("LOCALMKTDATE_1412287427");
      noQuoteEntries_0_1_1.set(MaturityDate_41);
      Instrument_41.insert(MaturityDate_41.getString());
      FIX::MaturityMonthYear MaturityMonthYear_41("MONTHYEAR_406764681");
      noQuoteEntries_0_1_1.set(MaturityMonthYear_41);
      Instrument_41.insert(MaturityMonthYear_41.getString());
      FIX::MaturityTime MaturityTime_41("TZTIMEONLY_1503061351");
      noQuoteEntries_0_1_1.set(MaturityTime_41);
      Instrument_41.insert(MaturityTime_41.getString());
      FIX::MinPriceIncrement MinPriceIncrement_41;
      MinPriceIncrement_41.setString("8543768");
      noQuoteEntries_0_1_1.set(MinPriceIncrement_41);
      Instrument_41.insert(MinPriceIncrement_41.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_41;
      MinPriceIncrementAmount_41.setString("7004775");
      noQuoteEntries_0_1_1.set(MinPriceIncrementAmount_41);
      Instrument_41.insert(MinPriceIncrementAmount_41.getString());
      FIX::NTPositionLimit NTPositionLimit_41(1959719335);
      noQuoteEntries_0_1_1.set(NTPositionLimit_41);
      Instrument_41.insert(NTPositionLimit_41.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_41;
      NotionalPercentageOutstanding_41.setString("1.680000");
      noQuoteEntries_0_1_1.set(NotionalPercentageOutstanding_41);
      Instrument_41.insert(NotionalPercentageOutstanding_41.getString());
      FIX::OptAttribute OptAttribute_41('8');
      noQuoteEntries_0_1_1.set(OptAttribute_41);
      Instrument_41.insert(OptAttribute_41.getString());
      FIX::OptPayoutAmount OptPayoutAmount_41;
      OptPayoutAmount_41.setString("14169035");
      noQuoteEntries_0_1_1.set(OptPayoutAmount_41);
      Instrument_41.insert(OptPayoutAmount_41.getString());
      FIX::OptPayoutType OptPayoutType_41(2);
      noQuoteEntries_0_1_1.set(OptPayoutType_41);
      Instrument_41.insert(OptPayoutType_41.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_41;
      OriginalNotionalPercentageOutstanding_41.setString("42.510000");
      noQuoteEntries_0_1_1.set(OriginalNotionalPercentageOutstanding_41);
      Instrument_41.insert(OriginalNotionalPercentageOutstanding_41.getString());
      FIX::Pool Pool_41("STRING_1686931759");
      noQuoteEntries_0_1_1.set(Pool_41);
      Instrument_41.insert(Pool_41.getString());
      FIX::PositionLimit PositionLimit_41(2067317722);
      noQuoteEntries_0_1_1.set(PositionLimit_41);
      Instrument_41.insert(PositionLimit_41.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_41("STRING_PCTPAR");
      noQuoteEntries_0_1_1.set(PriceQuoteMethod_41);
      Instrument_41.insert(PriceQuoteMethod_41.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_41("STRING_555827452");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasure_41);
      Instrument_41.insert(PriceUnitOfMeasure_41.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_41;
      PriceUnitOfMeasureQty_41.setString("18736718");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasureQty_41);
      Instrument_41.insert(PriceUnitOfMeasureQty_41.getString());
      FIX::Product Product_43(4);
      noQuoteEntries_0_1_1.set(Product_43);
      Instrument_41.insert(Product_43.getString());
      FIX::ProductComplex ProductComplex_41("STRING_1487177142");
      noQuoteEntries_0_1_1.set(ProductComplex_41);
      Instrument_41.insert(ProductComplex_41.getString());
      FIX::PutOrCall PutOrCall_41(0);
      noQuoteEntries_0_1_1.set(PutOrCall_41);
      Instrument_41.insert(PutOrCall_41.getString());
      FIX::RedemptionDate RedemptionDate_41("LOCALMKTDATE_1712310000");
      noQuoteEntries_0_1_1.set(RedemptionDate_41);
      Instrument_41.insert(RedemptionDate_41.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_41("STRING_831711934");
      noQuoteEntries_0_1_1.set(RepoCollateralSecurityType_41);
      Instrument_41.insert(RepoCollateralSecurityType_41.getString());
      FIX::RepurchaseRate RepurchaseRate_41;
      RepurchaseRate_41.setString("97.020000");
      noQuoteEntries_0_1_1.set(RepurchaseRate_41);
      Instrument_41.insert(RepurchaseRate_41.getString());
      FIX::RepurchaseTerm RepurchaseTerm_41(694632383);
      noQuoteEntries_0_1_1.set(RepurchaseTerm_41);
      Instrument_41.insert(RepurchaseTerm_41.getString());
      FIX::RestructuringType RestructuringType_41("STRING_MR");
      noQuoteEntries_0_1_1.set(RestructuringType_41);
      Instrument_41.insert(RestructuringType_41.getString());
      FIX::SecurityDesc SecurityDesc_41("STRING_818622639");
      noQuoteEntries_0_1_1.set(SecurityDesc_41);
      Instrument_41.insert(SecurityDesc_41.getString());
      FIX::SecurityExchange SecurityExchange_41("EXCHANGE_1538220147");
      noQuoteEntries_0_1_1.set(SecurityExchange_41);
      Instrument_41.insert(SecurityExchange_41.getString());
      FIX::SecurityGroup SecurityGroup_41("STRING_13417538");
      noQuoteEntries_0_1_1.set(SecurityGroup_41);
      Instrument_41.insert(SecurityGroup_41.getString());
      FIX::SecurityID SecurityID_41("STRING_2117697951");
      noQuoteEntries_0_1_1.set(SecurityID_41);
      Instrument_41.insert(SecurityID_41.getString());
      FIX::SecurityIDSource SecurityIDSource_41("STRING_4");
      noQuoteEntries_0_1_1.set(SecurityIDSource_41);
      Instrument_41.insert(SecurityIDSource_41.getString());
      FIX::SecurityStatus SecurityStatus_41("STRING_2");
      noQuoteEntries_0_1_1.set(SecurityStatus_41);
      Instrument_41.insert(SecurityStatus_41.getString());
      FIX::SecuritySubType SecuritySubType_42("STRING_675660401");
      noQuoteEntries_0_1_1.set(SecuritySubType_42);
      Instrument_41.insert(SecuritySubType_42.getString());
      FIX::SecurityType SecurityType_43("STRING_COFP");
      noQuoteEntries_0_1_1.set(SecurityType_43);
      Instrument_41.insert(SecurityType_43.getString());
      FIX::Seniority Seniority_41("STRING_SB");
      noQuoteEntries_0_1_1.set(Seniority_41);
      Instrument_41.insert(Seniority_41.getString());
      FIX::SettlMethod SettlMethod_41('P');
      noQuoteEntries_0_1_1.set(SettlMethod_41);
      Instrument_41.insert(SettlMethod_41.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_41("STRING_1934617262");
      noQuoteEntries_0_1_1.set(SettleOnOpenFlag_41);
      Instrument_41.insert(SettleOnOpenFlag_41.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_41("STRING_414177633");
      noQuoteEntries_0_1_1.set(StateOrProvinceOfIssue_41);
      Instrument_41.insert(StateOrProvinceOfIssue_41.getString());
      FIX::StrikeCurrency StrikeCurrency_41("USD");
      noQuoteEntries_0_1_1.set(StrikeCurrency_41);
      Instrument_41.insert(StrikeCurrency_41.getString());
      FIX::StrikeMultiplier StrikeMultiplier_41;
      StrikeMultiplier_41.setString("12853195");
      noQuoteEntries_0_1_1.set(StrikeMultiplier_41);
      Instrument_41.insert(StrikeMultiplier_41.getString());
      FIX::StrikePrice StrikePrice_41;
      StrikePrice_41.setString("12603773");
      noQuoteEntries_0_1_1.set(StrikePrice_41);
      Instrument_41.insert(StrikePrice_41.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_41(3);
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryMethod_41);
      Instrument_41.insert(StrikePriceBoundaryMethod_41.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_41;
      StrikePriceBoundaryPrecision_41.setString("37.970000");
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryPrecision_41);
      Instrument_41.insert(StrikePriceBoundaryPrecision_41.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_41(3);
      noQuoteEntries_0_1_1.set(StrikePriceDeterminationMethod_41);
      Instrument_41.insert(StrikePriceDeterminationMethod_41.getString());
      FIX::StrikeValue StrikeValue_41;
      StrikeValue_41.setString("8918604");
      noQuoteEntries_0_1_1.set(StrikeValue_41);
      Instrument_41.insert(StrikeValue_41.getString());
      FIX::Symbol Symbol_41("STRING_1365676189");
      noQuoteEntries_0_1_1.set(Symbol_41);
      Instrument_41.insert(Symbol_41.getString());
      FIX::SymbolSfx SymbolSfx_41("STRING_CD");
      noQuoteEntries_0_1_1.set(SymbolSfx_41);
      Instrument_41.insert(SymbolSfx_41.getString());
      FIX::TimeUnit TimeUnit_41("STRING_D");
      noQuoteEntries_0_1_1.set(TimeUnit_41);
      Instrument_41.insert(TimeUnit_41.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_41(4);
      noQuoteEntries_0_1_1.set(UnderlyingPriceDeterminationMethod_41);
      Instrument_41.insert(UnderlyingPriceDeterminationMethod_41.getString());
      FIX::UnitOfMeasure UnitOfMeasure_41("STRING_t");
      noQuoteEntries_0_1_1.set(UnitOfMeasure_41);
      Instrument_41.insert(UnitOfMeasure_41.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_41;
      UnitOfMeasureQty_41.setString("3472931");
      noQuoteEntries_0_1_1.set(UnitOfMeasureQty_41);
      Instrument_41.insert(UnitOfMeasureQty_41.getString());
      FIX::ValuationMethod ValuationMethod_41("STRING_CDSD");
      noQuoteEntries_0_1_1.set(ValuationMethod_41);
      Instrument_41.insert(ValuationMethod_41.getString());
      all_values.push_back(Instrument_41);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_82;
        FIX::ComplexEventCondition ComplexEventCondition_82(2);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventCondition_82.getString());
        FIX::ComplexEventPrice ComplexEventPrice_82;
        ComplexEventPrice_82.setString("15751021");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPrice_82.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_82(4);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryMethod_82.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_82;
        ComplexEventPriceBoundaryPrecision_82.setString("55.340000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryPrecision_82.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_82(3);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceTimeType_82.getString());
        FIX::ComplexEventType ComplexEventType_82(9);
        noComplexEvents_0_1_2_0.set(ComplexEventType_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventType_82.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_82;
        ComplexOptPayoutAmount_82.setString("12940498");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexOptPayoutAmount_82.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_82);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_172;
          FIX::ComplexEventEndDate ComplexEventEndDate_172(FIX::UTCTIMESTAMP(22, 8, 10, 23, 3, 2011));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_172);
          ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventEndDate_172.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_172(FIX::UTCTIMESTAMP(12, 2, 31, 2, 4, 2014));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_172);
          ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventStartDate_172.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_172);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_343;
            FIX::ComplexEventEndTime ComplexEventEndTime_343(FIX::UTCTIMEONLY(16, 28, 59));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_343);
            ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventEndTime_343.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_343(FIX::UTCTIMEONLY(9, 11, 12));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_343);
            ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventStartTime_343.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_343);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_344;
            FIX::ComplexEventEndTime ComplexEventEndTime_344(FIX::UTCTIMEONLY(18, 20, 42));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_344);
            ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventEndTime_344.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_344(FIX::UTCTIMEONLY(11, 51, 0));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_344);
            ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventStartTime_344.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_344);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_345;
            FIX::ComplexEventEndTime ComplexEventEndTime_345(FIX::UTCTIMEONLY(17, 1, 46));
            noComplexEventTimes_0_1_0_0_4_2.set(ComplexEventEndTime_345);
            ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventEndTime_345.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_345(FIX::UTCTIMEONLY(19, 21, 33));
            noComplexEventTimes_0_1_0_0_4_2.set(ComplexEventStartTime_345);
            ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventStartTime_345.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_345);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_83;
        FIX::ComplexEventCondition ComplexEventCondition_83(1);
        noComplexEvents_0_1_2_1.set(ComplexEventCondition_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventCondition_83.getString());
        FIX::ComplexEventPrice ComplexEventPrice_83;
        ComplexEventPrice_83.setString("8595418");
        noComplexEvents_0_1_2_1.set(ComplexEventPrice_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPrice_83.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_83(2);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryMethod_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryMethod_83.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_83;
        ComplexEventPriceBoundaryPrecision_83.setString("10.420000");
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryPrecision_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryPrecision_83.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_83(2);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceTimeType_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceTimeType_83.getString());
        FIX::ComplexEventType ComplexEventType_83(9);
        noComplexEvents_0_1_2_1.set(ComplexEventType_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventType_83.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_83;
        ComplexOptPayoutAmount_83.setString("21049099");
        noComplexEvents_0_1_2_1.set(ComplexOptPayoutAmount_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexOptPayoutAmount_83.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_83);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_173;
          FIX::ComplexEventEndDate ComplexEventEndDate_173(FIX::UTCTIMESTAMP(21, 31, 36, 22, 11, 2000));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventEndDate_173);
          ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventEndDate_173.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_173(FIX::UTCTIMESTAMP(8, 0, 4, 0, 5, 2001));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventStartDate_173);
          ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventStartDate_173.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_173);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_346;
            FIX::ComplexEventEndTime ComplexEventEndTime_346(FIX::UTCTIMEONLY(1, 2, 13));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventEndTime_346);
            ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventEndTime_346.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_346(FIX::UTCTIMEONLY(9, 35, 39));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventStartTime_346);
            ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventStartTime_346.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_346);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_347;
            FIX::ComplexEventEndTime ComplexEventEndTime_347(FIX::UTCTIMEONLY(6, 27, 16));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventEndTime_347);
            ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventEndTime_347.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_347(FIX::UTCTIMEONLY(18, 57, 13));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventStartTime_347);
            ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventStartTime_347.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_347);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_174;
          FIX::ComplexEventEndDate ComplexEventEndDate_174(FIX::UTCTIMESTAMP(7, 36, 29, 13, 11, 2003));
          noComplexEventDates_0_1_1_3_1.set(ComplexEventEndDate_174);
          ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventEndDate_174.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_174(FIX::UTCTIMESTAMP(18, 1, 56, 6, 6, 2002));
          noComplexEventDates_0_1_1_3_1.set(ComplexEventStartDate_174);
          ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventStartDate_174.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_174);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_348;
            FIX::ComplexEventEndTime ComplexEventEndTime_348(FIX::UTCTIMEONLY(9, 33, 34));
            noComplexEventTimes_0_1_1_1_4_0.set(ComplexEventEndTime_348);
            ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventEndTime_348.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_348(FIX::UTCTIMEONLY(23, 1, 58));
            noComplexEventTimes_0_1_1_1_4_0.set(ComplexEventStartTime_348);
            ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventStartTime_348.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_348);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_349;
            FIX::ComplexEventEndTime ComplexEventEndTime_349(FIX::UTCTIMEONLY(8, 25, 52));
            noComplexEventTimes_0_1_1_1_4_1.set(ComplexEventEndTime_349);
            ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventEndTime_349.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_349(FIX::UTCTIMEONLY(19, 50, 38));
            noComplexEventTimes_0_1_1_1_4_1.set(ComplexEventStartTime_349);
            ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventStartTime_349.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_349);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_75;
        FIX::EventDate EventDate_75("LOCALMKTDATE_1164511069");
        noEvents_0_1_2_0.set(EventDate_75);
        EvntGrp_NoEvents_75.insert(EventDate_75.getString());
        FIX::EventPx EventPx_75;
        EventPx_75.setString("16843714");
        noEvents_0_1_2_0.set(EventPx_75);
        EvntGrp_NoEvents_75.insert(EventPx_75.getString());
        FIX::EventText EventText_75("STRING_2042495549");
        noEvents_0_1_2_0.set(EventText_75);
        EvntGrp_NoEvents_75.insert(EventText_75.getString());
        FIX::EventTime EventTime_75(FIX::UTCTIMESTAMP(16, 30, 54, 18, 9, 2007));
        noEvents_0_1_2_0.set(EventTime_75);
        EvntGrp_NoEvents_75.insert(EventTime_75.getString());
        FIX::EventType EventType_75(18);
        noEvents_0_1_2_0.set(EventType_75);
        EvntGrp_NoEvents_75.insert(EventType_75.getString());
        all_values.push_back(EvntGrp_NoEvents_75);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_80;
        FIX::InstrumentPartyID InstrumentPartyID_80("STRING_1190430927");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_80);
        InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyID_80.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_80('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_80);
        InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyIDSource_80.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_80(336488618);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_80);
        InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyRole_80.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_80);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157;
          FIX::InstrumentPartySubID InstrumentPartySubID_157("STRING_1800543974");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_157);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubID_157.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_157(905511913);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_157);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157.insert(InstrumentPartySubIDType_157.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158;
          FIX::InstrumentPartySubID InstrumentPartySubID_158("STRING_1847904787");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_158);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubID_158.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_158(1397517629);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_158);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubIDType_158.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_81;
        FIX::InstrumentPartyID InstrumentPartyID_81("STRING_958523834");
        noInstrumentParties_0_1_2_1.set(InstrumentPartyID_81);
        InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyID_81.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_81('2');
        noInstrumentParties_0_1_2_1.set(InstrumentPartyIDSource_81);
        InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyIDSource_81.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_81(69190797);
        noInstrumentParties_0_1_2_1.set(InstrumentPartyRole_81);
        InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyRole_81.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_81);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159;
          FIX::InstrumentPartySubID InstrumentPartySubID_159("STRING_494905762");
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubID_159);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubID_159.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_159(1299798170);
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubIDType_159);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubIDType_159.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160;
          FIX::InstrumentPartySubID InstrumentPartySubID_160("STRING_2001593124");
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubID_160);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubID_160.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_160(1617828150);
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubIDType_160);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubIDType_160.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_82;
        FIX::InstrumentPartyID InstrumentPartyID_82("STRING_751798712");
        noInstrumentParties_0_1_2_2.set(InstrumentPartyID_82);
        InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyID_82.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_82('1');
        noInstrumentParties_0_1_2_2.set(InstrumentPartyIDSource_82);
        InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyIDSource_82.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_82(563193922);
        noInstrumentParties_0_1_2_2.set(InstrumentPartyRole_82);
        InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyRole_82.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_82);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161;
          FIX::InstrumentPartySubID InstrumentPartySubID_161("STRING_606551221");
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubID_161);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubID_161.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_161(458205824);
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubIDType_161);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubIDType_161.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_72;
        FIX::SecurityAltID SecurityAltID_72("STRING_973265117");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_72);
        SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltID_72.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_72("STRING_1175331134");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_72);
        SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltIDSource_72.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_72);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_73;
        FIX::SecurityAltID SecurityAltID_73("STRING_307794310");
        noSecurityAltID_0_1_2_1.set(SecurityAltID_73);
        SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltID_73.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_73("STRING_272166176");
        noSecurityAltID_0_1_2_1.set(SecurityAltIDSource_73);
        SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltIDSource_73.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_73);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_74;
        FIX::SecurityAltID SecurityAltID_74("STRING_259747118");
        noSecurityAltID_0_1_2_2.set(SecurityAltID_74);
        SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltID_74.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_74("STRING_991594373");
        noSecurityAltID_0_1_2_2.set(SecurityAltIDSource_74);
        SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltIDSource_74.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_74);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_82;
      FIX::SecurityXML SecurityXML_83("XMLDATA_1755257713");
      noQuoteEntries_0_1_1.set(SecurityXML_83);
      FIX::SecurityXMLLen SecurityXMLLen_41(312654956);
      noQuoteEntries_0_1_1.set(SecurityXMLLen_41);
      FIX::SecurityXMLSchema SecurityXMLSchema_41("STRING_34541652");
      noQuoteEntries_0_1_1.set(SecurityXMLSchema_41);
      SecurityXML_82.insert(SecurityXMLSchema_41.getString());
      all_values.push_back(SecurityXML_82);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_2;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_10;
      BidForwardPoints_10.setString("15730749");
      noQuoteEntries_0_1_2.set(BidForwardPoints_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidForwardPoints_10.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_10;
      BidForwardPoints2_10.setString("6491435");
      noQuoteEntries_0_1_2.set(BidForwardPoints2_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidForwardPoints2_10.getString());
      FIX::BidPx BidPx_10;
      BidPx_10.setString("8180719");
      noQuoteEntries_0_1_2.set(BidPx_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidPx_10.getString());
      FIX::BidSize BidSize_10;
      BidSize_10.setString("12261352");
      noQuoteEntries_0_1_2.set(BidSize_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidSize_10.getString());
      FIX::BidSpotRate BidSpotRate_10;
      BidSpotRate_10.setString("15546554");
      noQuoteEntries_0_1_2.set(BidSpotRate_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidSpotRate_10.getString());
      FIX::BidYield BidYield_10;
      BidYield_10.setString("31.110000");
      noQuoteEntries_0_1_2.set(BidYield_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidYield_10.getString());
      FIX::BookingType BookingType_17(2);
      noQuoteEntries_0_1_2.set(BookingType_17);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BookingType_17.getString());
      FIX::Currency Currency_40("USD");
      noQuoteEntries_0_1_2.set(Currency_40);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(Currency_40.getString());
      FIX::MidPx MidPx_10;
      MidPx_10.setString("5453600");
      noQuoteEntries_0_1_2.set(MidPx_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(MidPx_10.getString());
      FIX::MidYield MidYield_10;
      MidYield_10.setString("18.920000");
      noQuoteEntries_0_1_2.set(MidYield_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(MidYield_10.getString());
      FIX::OfferForwardPoints OfferForwardPoints_10;
      OfferForwardPoints_10.setString("10362472");
      noQuoteEntries_0_1_2.set(OfferForwardPoints_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferForwardPoints_10.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_10;
      OfferForwardPoints2_10.setString("18451582");
      noQuoteEntries_0_1_2.set(OfferForwardPoints2_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferForwardPoints2_10.getString());
      FIX::OfferPx OfferPx_10;
      OfferPx_10.setString("15748713");
      noQuoteEntries_0_1_2.set(OfferPx_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferPx_10.getString());
      FIX::OfferSize OfferSize_10;
      OfferSize_10.setString("5065917");
      noQuoteEntries_0_1_2.set(OfferSize_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferSize_10.getString());
      FIX::OfferSpotRate OfferSpotRate_10;
      OfferSpotRate_10.setString("4494732");
      noQuoteEntries_0_1_2.set(OfferSpotRate_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferSpotRate_10.getString());
      FIX::OfferYield OfferYield_10;
      OfferYield_10.setString("10.950000");
      noQuoteEntries_0_1_2.set(OfferYield_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferYield_10.getString());
      FIX::OrdType OrdType_43('K');
      noQuoteEntries_0_1_2.set(OrdType_43);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrdType_43.getString());
      FIX::OrderCapacity OrderCapacity_18('P');
      noQuoteEntries_0_1_2.set(OrderCapacity_18);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderCapacity_18.getString());
      FIX::OrderQty2 OrderQty2_11;
      OrderQty2_11.setString("11036023");
      noQuoteEntries_0_1_2.set(OrderQty2_11);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderQty2_11.getString());
      FIX::OrderRestrictions OrderRestrictions_15("MULTIPLECHARVALUE_A");
      noQuoteEntries_0_1_2.set(OrderRestrictions_15);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderRestrictions_15.getString());
      FIX::QuoteEntryID QuoteEntryID_13("STRING_1646314208");
      noQuoteEntries_0_1_2.set(QuoteEntryID_13);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryID_13.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_2(2076867433);
      noQuoteEntries_0_1_2.set(QuoteEntryRejectReason_2);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryRejectReason_2.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_2(14);
      noQuoteEntries_0_1_2.set(QuoteEntryStatus_2);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryStatus_2.getString());
      FIX::SettlDate SettlDate_33("LOCALMKTDATE_1954108518");
      noQuoteEntries_0_1_2.set(SettlDate_33);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(SettlDate_33.getString());
      FIX::SettlDate2 SettlDate2_11("LOCALMKTDATE_201549961");
      noQuoteEntries_0_1_2.set(SettlDate2_11);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(SettlDate2_11.getString());
      FIX::TradingSessionID TradingSessionID_46("STRING_1");
      noQuoteEntries_0_1_2.set(TradingSessionID_46);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TradingSessionID_46.getString());
      FIX::TradingSessionSubID TradingSessionSubID_46("STRING_4");
      noQuoteEntries_0_1_2.set(TradingSessionSubID_46);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TradingSessionSubID_46.getString());
      FIX::TransactTime TransactTime_36(FIX::UTCTIMESTAMP(20, 15, 0, 2, 8, 2015));
      noQuoteEntries_0_1_2.set(TransactTime_36);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TransactTime_36.getString());
      FIX::ValidUntilTime ValidUntilTime_11(FIX::UTCTIMESTAMP(2, 12, 28, 6, 7, 2006));
      noQuoteEntries_0_1_2.set(ValidUntilTime_11);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(ValidUntilTime_11.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_2);
      all_compo_names.insert("QuotEntryAckGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_79;
        FIX::EncodedLegIssuer EncodedLegIssuer_79("DATA_1180254510");
        noLegs_0_2_2_0.set(EncodedLegIssuer_79);
        InstrumentLeg_79.insert(EncodedLegIssuer_79.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_79(550918153);
        noLegs_0_2_2_0.set(EncodedLegIssuerLen_79);
        InstrumentLeg_79.insert(EncodedLegIssuerLen_79.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_79("DATA_2106022941");
        noLegs_0_2_2_0.set(EncodedLegSecurityDesc_79);
        InstrumentLeg_79.insert(EncodedLegSecurityDesc_79.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_79(1629727802);
        noLegs_0_2_2_0.set(EncodedLegSecurityDescLen_79);
        InstrumentLeg_79.insert(EncodedLegSecurityDescLen_79.getString());
        FIX::LegCFICode LegCFICode_79("STRING_1047969248");
        noLegs_0_2_2_0.set(LegCFICode_79);
        InstrumentLeg_79.insert(LegCFICode_79.getString());
        FIX::LegContractMultiplier LegContractMultiplier_79;
        LegContractMultiplier_79.setString("10283250");
        noLegs_0_2_2_0.set(LegContractMultiplier_79);
        InstrumentLeg_79.insert(LegContractMultiplier_79.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_79(1848027227);
        noLegs_0_2_2_0.set(LegContractMultiplierUnit_79);
        InstrumentLeg_79.insert(LegContractMultiplierUnit_79.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_79("MONTHYEAR_4087916");
        noLegs_0_2_2_0.set(LegContractSettlMonth_79);
        InstrumentLeg_79.insert(LegContractSettlMonth_79.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_79("COUNTRY_408832899");
        noLegs_0_2_2_0.set(LegCountryOfIssue_79);
        InstrumentLeg_79.insert(LegCountryOfIssue_79.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_79("LOCALMKTDATE_1346857787");
        noLegs_0_2_2_0.set(LegCouponPaymentDate_79);
        InstrumentLeg_79.insert(LegCouponPaymentDate_79.getString());
        FIX::LegCouponRate LegCouponRate_79;
        LegCouponRate_79.setString("53.490000");
        noLegs_0_2_2_0.set(LegCouponRate_79);
        InstrumentLeg_79.insert(LegCouponRate_79.getString());
        FIX::LegCreditRating LegCreditRating_79("STRING_964671925");
        noLegs_0_2_2_0.set(LegCreditRating_79);
        InstrumentLeg_79.insert(LegCreditRating_79.getString());
        FIX::LegCurrency LegCurrency_79("CHF");
        noLegs_0_2_2_0.set(LegCurrency_79);
        InstrumentLeg_79.insert(LegCurrency_79.getString());
        FIX::LegDatedDate LegDatedDate_79("LOCALMKTDATE_1780258069");
        noLegs_0_2_2_0.set(LegDatedDate_79);
        InstrumentLeg_79.insert(LegDatedDate_79.getString());
        FIX::LegExerciseStyle LegExerciseStyle_79(1951701901);
        noLegs_0_2_2_0.set(LegExerciseStyle_79);
        InstrumentLeg_79.insert(LegExerciseStyle_79.getString());
        FIX::LegFactor LegFactor_79;
        LegFactor_79.setString("20918293");
        noLegs_0_2_2_0.set(LegFactor_79);
        InstrumentLeg_79.insert(LegFactor_79.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_79(761015521);
        noLegs_0_2_2_0.set(LegFlowScheduleType_79);
        InstrumentLeg_79.insert(LegFlowScheduleType_79.getString());
        FIX::LegInstrRegistry LegInstrRegistry_79("STRING_636979149");
        noLegs_0_2_2_0.set(LegInstrRegistry_79);
        InstrumentLeg_79.insert(LegInstrRegistry_79.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_79("LOCALMKTDATE_1326744669");
        noLegs_0_2_2_0.set(LegInterestAccrualDate_79);
        InstrumentLeg_79.insert(LegInterestAccrualDate_79.getString());
        FIX::LegIssueDate LegIssueDate_79("LOCALMKTDATE_390916547");
        noLegs_0_2_2_0.set(LegIssueDate_79);
        InstrumentLeg_79.insert(LegIssueDate_79.getString());
        FIX::LegIssuer LegIssuer_79("STRING_140328368");
        noLegs_0_2_2_0.set(LegIssuer_79);
        InstrumentLeg_79.insert(LegIssuer_79.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_79("STRING_1787795281");
        noLegs_0_2_2_0.set(LegLocaleOfIssue_79);
        InstrumentLeg_79.insert(LegLocaleOfIssue_79.getString());
        FIX::LegMaturityDate LegMaturityDate_79("LOCALMKTDATE_1575473061");
        noLegs_0_2_2_0.set(LegMaturityDate_79);
        InstrumentLeg_79.insert(LegMaturityDate_79.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_79("MONTHYEAR_162170699");
        noLegs_0_2_2_0.set(LegMaturityMonthYear_79);
        InstrumentLeg_79.insert(LegMaturityMonthYear_79.getString());
        FIX::LegMaturityTime LegMaturityTime_79("TZTIMEONLY_577531505");
        noLegs_0_2_2_0.set(LegMaturityTime_79);
        InstrumentLeg_79.insert(LegMaturityTime_79.getString());
        FIX::LegOptAttribute LegOptAttribute_79('9');
        noLegs_0_2_2_0.set(LegOptAttribute_79);
        InstrumentLeg_79.insert(LegOptAttribute_79.getString());
        FIX::LegOptionRatio LegOptionRatio_79;
        LegOptionRatio_79.setString("7253545");
        noLegs_0_2_2_0.set(LegOptionRatio_79);
        InstrumentLeg_79.insert(LegOptionRatio_79.getString());
        FIX::LegPool LegPool_79("STRING_2060111435");
        noLegs_0_2_2_0.set(LegPool_79);
        InstrumentLeg_79.insert(LegPool_79.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_79("STRING_2101772034");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasure_79);
        InstrumentLeg_79.insert(LegPriceUnitOfMeasure_79.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_79;
        LegPriceUnitOfMeasureQty_79.setString("1773020");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasureQty_79);
        InstrumentLeg_79.insert(LegPriceUnitOfMeasureQty_79.getString());
        FIX::LegProduct LegProduct_79(1092882297);
        noLegs_0_2_2_0.set(LegProduct_79);
        InstrumentLeg_79.insert(LegProduct_79.getString());
        FIX::LegPutOrCall LegPutOrCall_79(505206539);
        noLegs_0_2_2_0.set(LegPutOrCall_79);
        InstrumentLeg_79.insert(LegPutOrCall_79.getString());
        FIX::LegRatioQty LegRatioQty_79;
        LegRatioQty_79.setString("1358413");
        noLegs_0_2_2_0.set(LegRatioQty_79);
        InstrumentLeg_79.insert(LegRatioQty_79.getString());
        FIX::LegRedemptionDate LegRedemptionDate_79("LOCALMKTDATE_575126451");
        noLegs_0_2_2_0.set(LegRedemptionDate_79);
        InstrumentLeg_79.insert(LegRedemptionDate_79.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_79("STRING_1553175787");
        noLegs_0_2_2_0.set(LegRepoCollateralSecurityType_79);
        InstrumentLeg_79.insert(LegRepoCollateralSecurityType_79.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_79;
        LegRepurchaseRate_79.setString("63.600000");
        noLegs_0_2_2_0.set(LegRepurchaseRate_79);
        InstrumentLeg_79.insert(LegRepurchaseRate_79.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_79(275670030);
        noLegs_0_2_2_0.set(LegRepurchaseTerm_79);
        InstrumentLeg_79.insert(LegRepurchaseTerm_79.getString());
        FIX::LegSecurityDesc LegSecurityDesc_79("STRING_1557263703");
        noLegs_0_2_2_0.set(LegSecurityDesc_79);
        InstrumentLeg_79.insert(LegSecurityDesc_79.getString());
        FIX::LegSecurityExchange LegSecurityExchange_79("EXCHANGE_1572999260");
        noLegs_0_2_2_0.set(LegSecurityExchange_79);
        InstrumentLeg_79.insert(LegSecurityExchange_79.getString());
        FIX::LegSecurityID LegSecurityID_79("STRING_1622527817");
        noLegs_0_2_2_0.set(LegSecurityID_79);
        InstrumentLeg_79.insert(LegSecurityID_79.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_79("STRING_1490735404");
        noLegs_0_2_2_0.set(LegSecurityIDSource_79);
        InstrumentLeg_79.insert(LegSecurityIDSource_79.getString());
        FIX::LegSecuritySubType LegSecuritySubType_79("STRING_390187537");
        noLegs_0_2_2_0.set(LegSecuritySubType_79);
        InstrumentLeg_79.insert(LegSecuritySubType_79.getString());
        FIX::LegSecurityType LegSecurityType_79("STRING_628526827");
        noLegs_0_2_2_0.set(LegSecurityType_79);
        InstrumentLeg_79.insert(LegSecurityType_79.getString());
        FIX::LegSide LegSide_79('1');
        noLegs_0_2_2_0.set(LegSide_79);
        InstrumentLeg_79.insert(LegSide_79.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_79("STRING_22961958");
        noLegs_0_2_2_0.set(LegStateOrProvinceOfIssue_79);
        InstrumentLeg_79.insert(LegStateOrProvinceOfIssue_79.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_79("CAN");
        noLegs_0_2_2_0.set(LegStrikeCurrency_79);
        InstrumentLeg_79.insert(LegStrikeCurrency_79.getString());
        FIX::LegStrikePrice LegStrikePrice_79;
        LegStrikePrice_79.setString("7839774");
        noLegs_0_2_2_0.set(LegStrikePrice_79);
        InstrumentLeg_79.insert(LegStrikePrice_79.getString());
        FIX::LegSymbol LegSymbol_79("STRING_1069724230");
        noLegs_0_2_2_0.set(LegSymbol_79);
        InstrumentLeg_79.insert(LegSymbol_79.getString());
        FIX::LegSymbolSfx LegSymbolSfx_79("STRING_749363778");
        noLegs_0_2_2_0.set(LegSymbolSfx_79);
        InstrumentLeg_79.insert(LegSymbolSfx_79.getString());
        FIX::LegTimeUnit LegTimeUnit_79("STRING_1174894026");
        noLegs_0_2_2_0.set(LegTimeUnit_79);
        InstrumentLeg_79.insert(LegTimeUnit_79.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_79("STRING_1210052598");
        noLegs_0_2_2_0.set(LegUnitOfMeasure_79);
        InstrumentLeg_79.insert(LegUnitOfMeasure_79.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_79;
        LegUnitOfMeasureQty_79.setString("3896754");
        noLegs_0_2_2_0.set(LegUnitOfMeasureQty_79);
        InstrumentLeg_79.insert(LegUnitOfMeasureQty_79.getString());
        all_values.push_back(InstrumentLeg_79);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_157;
          FIX::LegSecurityAltID LegSecurityAltID_157("STRING_1372223297");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltID_157);
          LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltID_157.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_157("STRING_967206916");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltIDSource_157);
          LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltIDSource_157.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_157);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_158;
          FIX::LegSecurityAltID LegSecurityAltID_158("STRING_1581125041");
          noLegSecurityAltID_0_2_0_3_1.set(LegSecurityAltID_158);
          LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltID_158.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_158("STRING_2097577855");
          noLegSecurityAltID_0_2_0_3_1.set(LegSecurityAltIDSource_158);
          LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltIDSource_158.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_158);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_159;
          FIX::LegSecurityAltID LegSecurityAltID_159("STRING_879834703");
          noLegSecurityAltID_0_2_0_3_2.set(LegSecurityAltID_159);
          LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltID_159.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_159("STRING_1535413427");
          noLegSecurityAltID_0_2_0_3_2.set(LegSecurityAltIDSource_159);
          LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltIDSource_159.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_159);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_80;
        FIX::EncodedLegIssuer EncodedLegIssuer_80("DATA_127396265");
        noLegs_0_2_2_1.set(EncodedLegIssuer_80);
        InstrumentLeg_80.insert(EncodedLegIssuer_80.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_80(1972717000);
        noLegs_0_2_2_1.set(EncodedLegIssuerLen_80);
        InstrumentLeg_80.insert(EncodedLegIssuerLen_80.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_80("DATA_2040619966");
        noLegs_0_2_2_1.set(EncodedLegSecurityDesc_80);
        InstrumentLeg_80.insert(EncodedLegSecurityDesc_80.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_80(263237617);
        noLegs_0_2_2_1.set(EncodedLegSecurityDescLen_80);
        InstrumentLeg_80.insert(EncodedLegSecurityDescLen_80.getString());
        FIX::LegCFICode LegCFICode_80("STRING_400359803");
        noLegs_0_2_2_1.set(LegCFICode_80);
        InstrumentLeg_80.insert(LegCFICode_80.getString());
        FIX::LegContractMultiplier LegContractMultiplier_80;
        LegContractMultiplier_80.setString("14463121");
        noLegs_0_2_2_1.set(LegContractMultiplier_80);
        InstrumentLeg_80.insert(LegContractMultiplier_80.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_80(1427403978);
        noLegs_0_2_2_1.set(LegContractMultiplierUnit_80);
        InstrumentLeg_80.insert(LegContractMultiplierUnit_80.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_80("MONTHYEAR_676029833");
        noLegs_0_2_2_1.set(LegContractSettlMonth_80);
        InstrumentLeg_80.insert(LegContractSettlMonth_80.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_80("COUNTRY_856092160");
        noLegs_0_2_2_1.set(LegCountryOfIssue_80);
        InstrumentLeg_80.insert(LegCountryOfIssue_80.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_80("LOCALMKTDATE_852919590");
        noLegs_0_2_2_1.set(LegCouponPaymentDate_80);
        InstrumentLeg_80.insert(LegCouponPaymentDate_80.getString());
        FIX::LegCouponRate LegCouponRate_80;
        LegCouponRate_80.setString("40.030000");
        noLegs_0_2_2_1.set(LegCouponRate_80);
        InstrumentLeg_80.insert(LegCouponRate_80.getString());
        FIX::LegCreditRating LegCreditRating_80("STRING_199343917");
        noLegs_0_2_2_1.set(LegCreditRating_80);
        InstrumentLeg_80.insert(LegCreditRating_80.getString());
        FIX::LegCurrency LegCurrency_80("JPY");
        noLegs_0_2_2_1.set(LegCurrency_80);
        InstrumentLeg_80.insert(LegCurrency_80.getString());
        FIX::LegDatedDate LegDatedDate_80("LOCALMKTDATE_1825100984");
        noLegs_0_2_2_1.set(LegDatedDate_80);
        InstrumentLeg_80.insert(LegDatedDate_80.getString());
        FIX::LegExerciseStyle LegExerciseStyle_80(1266069085);
        noLegs_0_2_2_1.set(LegExerciseStyle_80);
        InstrumentLeg_80.insert(LegExerciseStyle_80.getString());
        FIX::LegFactor LegFactor_80;
        LegFactor_80.setString("12123459");
        noLegs_0_2_2_1.set(LegFactor_80);
        InstrumentLeg_80.insert(LegFactor_80.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_80(1247720093);
        noLegs_0_2_2_1.set(LegFlowScheduleType_80);
        InstrumentLeg_80.insert(LegFlowScheduleType_80.getString());
        FIX::LegInstrRegistry LegInstrRegistry_80("STRING_2050046564");
        noLegs_0_2_2_1.set(LegInstrRegistry_80);
        InstrumentLeg_80.insert(LegInstrRegistry_80.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_80("LOCALMKTDATE_134586493");
        noLegs_0_2_2_1.set(LegInterestAccrualDate_80);
        InstrumentLeg_80.insert(LegInterestAccrualDate_80.getString());
        FIX::LegIssueDate LegIssueDate_80("LOCALMKTDATE_1997083872");
        noLegs_0_2_2_1.set(LegIssueDate_80);
        InstrumentLeg_80.insert(LegIssueDate_80.getString());
        FIX::LegIssuer LegIssuer_80("STRING_1077456942");
        noLegs_0_2_2_1.set(LegIssuer_80);
        InstrumentLeg_80.insert(LegIssuer_80.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_80("STRING_1344639092");
        noLegs_0_2_2_1.set(LegLocaleOfIssue_80);
        InstrumentLeg_80.insert(LegLocaleOfIssue_80.getString());
        FIX::LegMaturityDate LegMaturityDate_80("LOCALMKTDATE_239275635");
        noLegs_0_2_2_1.set(LegMaturityDate_80);
        InstrumentLeg_80.insert(LegMaturityDate_80.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_80("MONTHYEAR_1680340382");
        noLegs_0_2_2_1.set(LegMaturityMonthYear_80);
        InstrumentLeg_80.insert(LegMaturityMonthYear_80.getString());
        FIX::LegMaturityTime LegMaturityTime_80("TZTIMEONLY_569378741");
        noLegs_0_2_2_1.set(LegMaturityTime_80);
        InstrumentLeg_80.insert(LegMaturityTime_80.getString());
        FIX::LegOptAttribute LegOptAttribute_80('1');
        noLegs_0_2_2_1.set(LegOptAttribute_80);
        InstrumentLeg_80.insert(LegOptAttribute_80.getString());
        FIX::LegOptionRatio LegOptionRatio_80;
        LegOptionRatio_80.setString("11139817");
        noLegs_0_2_2_1.set(LegOptionRatio_80);
        InstrumentLeg_80.insert(LegOptionRatio_80.getString());
        FIX::LegPool LegPool_80("STRING_519472948");
        noLegs_0_2_2_1.set(LegPool_80);
        InstrumentLeg_80.insert(LegPool_80.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_80("STRING_2086317255");
        noLegs_0_2_2_1.set(LegPriceUnitOfMeasure_80);
        InstrumentLeg_80.insert(LegPriceUnitOfMeasure_80.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_80;
        LegPriceUnitOfMeasureQty_80.setString("5019115");
        noLegs_0_2_2_1.set(LegPriceUnitOfMeasureQty_80);
        InstrumentLeg_80.insert(LegPriceUnitOfMeasureQty_80.getString());
        FIX::LegProduct LegProduct_80(646869214);
        noLegs_0_2_2_1.set(LegProduct_80);
        InstrumentLeg_80.insert(LegProduct_80.getString());
        FIX::LegPutOrCall LegPutOrCall_80(1911550608);
        noLegs_0_2_2_1.set(LegPutOrCall_80);
        InstrumentLeg_80.insert(LegPutOrCall_80.getString());
        FIX::LegRatioQty LegRatioQty_80;
        LegRatioQty_80.setString("3950478");
        noLegs_0_2_2_1.set(LegRatioQty_80);
        InstrumentLeg_80.insert(LegRatioQty_80.getString());
        FIX::LegRedemptionDate LegRedemptionDate_80("LOCALMKTDATE_910106831");
        noLegs_0_2_2_1.set(LegRedemptionDate_80);
        InstrumentLeg_80.insert(LegRedemptionDate_80.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_80("STRING_164426763");
        noLegs_0_2_2_1.set(LegRepoCollateralSecurityType_80);
        InstrumentLeg_80.insert(LegRepoCollateralSecurityType_80.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_80;
        LegRepurchaseRate_80.setString("99.790000");
        noLegs_0_2_2_1.set(LegRepurchaseRate_80);
        InstrumentLeg_80.insert(LegRepurchaseRate_80.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_80(190027161);
        noLegs_0_2_2_1.set(LegRepurchaseTerm_80);
        InstrumentLeg_80.insert(LegRepurchaseTerm_80.getString());
        FIX::LegSecurityDesc LegSecurityDesc_80("STRING_840456597");
        noLegs_0_2_2_1.set(LegSecurityDesc_80);
        InstrumentLeg_80.insert(LegSecurityDesc_80.getString());
        FIX::LegSecurityExchange LegSecurityExchange_80("EXCHANGE_549968492");
        noLegs_0_2_2_1.set(LegSecurityExchange_80);
        InstrumentLeg_80.insert(LegSecurityExchange_80.getString());
        FIX::LegSecurityID LegSecurityID_80("STRING_1042946751");
        noLegs_0_2_2_1.set(LegSecurityID_80);
        InstrumentLeg_80.insert(LegSecurityID_80.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_80("STRING_991530600");
        noLegs_0_2_2_1.set(LegSecurityIDSource_80);
        InstrumentLeg_80.insert(LegSecurityIDSource_80.getString());
        FIX::LegSecuritySubType LegSecuritySubType_80("STRING_749312409");
        noLegs_0_2_2_1.set(LegSecuritySubType_80);
        InstrumentLeg_80.insert(LegSecuritySubType_80.getString());
        FIX::LegSecurityType LegSecurityType_80("STRING_138570230");
        noLegs_0_2_2_1.set(LegSecurityType_80);
        InstrumentLeg_80.insert(LegSecurityType_80.getString());
        FIX::LegSide LegSide_80('1');
        noLegs_0_2_2_1.set(LegSide_80);
        InstrumentLeg_80.insert(LegSide_80.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_80("STRING_426929745");
        noLegs_0_2_2_1.set(LegStateOrProvinceOfIssue_80);
        InstrumentLeg_80.insert(LegStateOrProvinceOfIssue_80.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_80("GBP");
        noLegs_0_2_2_1.set(LegStrikeCurrency_80);
        InstrumentLeg_80.insert(LegStrikeCurrency_80.getString());
        FIX::LegStrikePrice LegStrikePrice_80;
        LegStrikePrice_80.setString("16746498");
        noLegs_0_2_2_1.set(LegStrikePrice_80);
        InstrumentLeg_80.insert(LegStrikePrice_80.getString());
        FIX::LegSymbol LegSymbol_80("STRING_1307202231");
        noLegs_0_2_2_1.set(LegSymbol_80);
        InstrumentLeg_80.insert(LegSymbol_80.getString());
        FIX::LegSymbolSfx LegSymbolSfx_80("STRING_970580187");
        noLegs_0_2_2_1.set(LegSymbolSfx_80);
        InstrumentLeg_80.insert(LegSymbolSfx_80.getString());
        FIX::LegTimeUnit LegTimeUnit_80("STRING_1524250063");
        noLegs_0_2_2_1.set(LegTimeUnit_80);
        InstrumentLeg_80.insert(LegTimeUnit_80.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_80("STRING_237175526");
        noLegs_0_2_2_1.set(LegUnitOfMeasure_80);
        InstrumentLeg_80.insert(LegUnitOfMeasure_80.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_80;
        LegUnitOfMeasureQty_80.setString("1677356");
        noLegs_0_2_2_1.set(LegUnitOfMeasureQty_80);
        InstrumentLeg_80.insert(LegUnitOfMeasureQty_80.getString());
        all_values.push_back(InstrumentLeg_80);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_160;
          FIX::LegSecurityAltID LegSecurityAltID_160("STRING_1917515908");
          noLegSecurityAltID_0_2_1_3_0.set(LegSecurityAltID_160);
          LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltID_160.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_160("STRING_737114373");
          noLegSecurityAltID_0_2_1_3_0.set(LegSecurityAltIDSource_160);
          LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltIDSource_160.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_160);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_161;
          FIX::LegSecurityAltID LegSecurityAltID_161("STRING_822524602");
          noLegSecurityAltID_0_2_1_3_1.set(LegSecurityAltID_161);
          LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltID_161.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_161("STRING_884014036");
          noLegSecurityAltID_0_2_1_3_1.set(LegSecurityAltIDSource_161);
          LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltIDSource_161.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_161);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_1);
      }
      // Instrument
      multiset<string> Instrument_42;
      FIX::AttachmentPoint AttachmentPoint_42;
      AttachmentPoint_42.setString("73.210000");
      noQuoteEntries_0_1_2.set(AttachmentPoint_42);
      Instrument_42.insert(AttachmentPoint_42.getString());
      FIX::CFICode CFICode_42("STRING_761358210");
      noQuoteEntries_0_1_2.set(CFICode_42);
      Instrument_42.insert(CFICode_42.getString());
      FIX::CPProgram CPProgram_42(2);
      noQuoteEntries_0_1_2.set(CPProgram_42);
      Instrument_42.insert(CPProgram_42.getString());
      FIX::CPRegType CPRegType_42("STRING_1903456535");
      noQuoteEntries_0_1_2.set(CPRegType_42);
      Instrument_42.insert(CPRegType_42.getString());
      FIX::CapPrice CapPrice_42;
      CapPrice_42.setString("5254251");
      noQuoteEntries_0_1_2.set(CapPrice_42);
      Instrument_42.insert(CapPrice_42.getString());
      FIX::ContractMultiplier ContractMultiplier_42;
      ContractMultiplier_42.setString("17809734");
      noQuoteEntries_0_1_2.set(ContractMultiplier_42);
      Instrument_42.insert(ContractMultiplier_42.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_42(0);
      noQuoteEntries_0_1_2.set(ContractMultiplierUnit_42);
      Instrument_42.insert(ContractMultiplierUnit_42.getString());
      FIX::ContractSettlMonth ContractSettlMonth_42("MONTHYEAR_689851933");
      noQuoteEntries_0_1_2.set(ContractSettlMonth_42);
      Instrument_42.insert(ContractSettlMonth_42.getString());
      FIX::CountryOfIssue CountryOfIssue_42("COUNTRY_1474849797");
      noQuoteEntries_0_1_2.set(CountryOfIssue_42);
      Instrument_42.insert(CountryOfIssue_42.getString());
      FIX::CouponPaymentDate CouponPaymentDate_42("LOCALMKTDATE_856106880");
      noQuoteEntries_0_1_2.set(CouponPaymentDate_42);
      Instrument_42.insert(CouponPaymentDate_42.getString());
      FIX::CouponRate CouponRate_42;
      CouponRate_42.setString("85.300000");
      noQuoteEntries_0_1_2.set(CouponRate_42);
      Instrument_42.insert(CouponRate_42.getString());
      FIX::CreditRating CreditRating_42("STRING_2024818289");
      noQuoteEntries_0_1_2.set(CreditRating_42);
      Instrument_42.insert(CreditRating_42.getString());
      FIX::DatedDate DatedDate_42("LOCALMKTDATE_1899053632");
      noQuoteEntries_0_1_2.set(DatedDate_42);
      Instrument_42.insert(DatedDate_42.getString());
      FIX::DetachmentPoint DetachmentPoint_42;
      DetachmentPoint_42.setString("54.820000");
      noQuoteEntries_0_1_2.set(DetachmentPoint_42);
      Instrument_42.insert(DetachmentPoint_42.getString());
      FIX::EncodedIssuer EncodedIssuer_42("DATA_626647050");
      noQuoteEntries_0_1_2.set(EncodedIssuer_42);
      Instrument_42.insert(EncodedIssuer_42.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_42(2037623862);
      noQuoteEntries_0_1_2.set(EncodedIssuerLen_42);
      Instrument_42.insert(EncodedIssuerLen_42.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_42("DATA_2145486913");
      noQuoteEntries_0_1_2.set(EncodedSecurityDesc_42);
      Instrument_42.insert(EncodedSecurityDesc_42.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_42(1053576796);
      noQuoteEntries_0_1_2.set(EncodedSecurityDescLen_42);
      Instrument_42.insert(EncodedSecurityDescLen_42.getString());
      FIX::ExerciseStyle ExerciseStyle_42(2);
      noQuoteEntries_0_1_2.set(ExerciseStyle_42);
      Instrument_42.insert(ExerciseStyle_42.getString());
      FIX::Factor Factor_42;
      Factor_42.setString("8339969");
      noQuoteEntries_0_1_2.set(Factor_42);
      Instrument_42.insert(Factor_42.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_42(false);
      noQuoteEntries_0_1_2.set(FlexProductEligibilityIndicator_42);
      Instrument_42.insert(FlexProductEligibilityIndicator_42.getString());
      FIX::FlexibleIndicator FlexibleIndicator_42(false);
      noQuoteEntries_0_1_2.set(FlexibleIndicator_42);
      Instrument_42.insert(FlexibleIndicator_42.getString());
      FIX::FloorPrice FloorPrice_42;
      FloorPrice_42.setString("18045771");
      noQuoteEntries_0_1_2.set(FloorPrice_42);
      Instrument_42.insert(FloorPrice_42.getString());
      FIX::FlowScheduleType FlowScheduleType_42(0);
      noQuoteEntries_0_1_2.set(FlowScheduleType_42);
      Instrument_42.insert(FlowScheduleType_42.getString());
      FIX::InstrRegistry InstrRegistry_42("STRING_691673639");
      noQuoteEntries_0_1_2.set(InstrRegistry_42);
      Instrument_42.insert(InstrRegistry_42.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_42('1');
      noQuoteEntries_0_1_2.set(InstrmtAssignmentMethod_42);
      Instrument_42.insert(InstrmtAssignmentMethod_42.getString());
      FIX::InterestAccrualDate InterestAccrualDate_42("LOCALMKTDATE_1721035100");
      noQuoteEntries_0_1_2.set(InterestAccrualDate_42);
      Instrument_42.insert(InterestAccrualDate_42.getString());
      FIX::IssueDate IssueDate_42("LOCALMKTDATE_461705900");
      noQuoteEntries_0_1_2.set(IssueDate_42);
      Instrument_42.insert(IssueDate_42.getString());
      FIX::Issuer Issuer_42("STRING_561943503");
      noQuoteEntries_0_1_2.set(Issuer_42);
      Instrument_42.insert(Issuer_42.getString());
      FIX::ListMethod ListMethod_42(1);
      noQuoteEntries_0_1_2.set(ListMethod_42);
      Instrument_42.insert(ListMethod_42.getString());
      FIX::LocaleOfIssue LocaleOfIssue_42("STRING_1345719936");
      noQuoteEntries_0_1_2.set(LocaleOfIssue_42);
      Instrument_42.insert(LocaleOfIssue_42.getString());
      FIX::MaturityDate MaturityDate_42("LOCALMKTDATE_1818530824");
      noQuoteEntries_0_1_2.set(MaturityDate_42);
      Instrument_42.insert(MaturityDate_42.getString());
      FIX::MaturityMonthYear MaturityMonthYear_42("MONTHYEAR_1157434265");
      noQuoteEntries_0_1_2.set(MaturityMonthYear_42);
      Instrument_42.insert(MaturityMonthYear_42.getString());
      FIX::MaturityTime MaturityTime_42("TZTIMEONLY_584161880");
      noQuoteEntries_0_1_2.set(MaturityTime_42);
      Instrument_42.insert(MaturityTime_42.getString());
      FIX::MinPriceIncrement MinPriceIncrement_42;
      MinPriceIncrement_42.setString("15745037");
      noQuoteEntries_0_1_2.set(MinPriceIncrement_42);
      Instrument_42.insert(MinPriceIncrement_42.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_42;
      MinPriceIncrementAmount_42.setString("16828594");
      noQuoteEntries_0_1_2.set(MinPriceIncrementAmount_42);
      Instrument_42.insert(MinPriceIncrementAmount_42.getString());
      FIX::NTPositionLimit NTPositionLimit_42(217651698);
      noQuoteEntries_0_1_2.set(NTPositionLimit_42);
      Instrument_42.insert(NTPositionLimit_42.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_42;
      NotionalPercentageOutstanding_42.setString("97.830000");
      noQuoteEntries_0_1_2.set(NotionalPercentageOutstanding_42);
      Instrument_42.insert(NotionalPercentageOutstanding_42.getString());
      FIX::OptAttribute OptAttribute_42('2');
      noQuoteEntries_0_1_2.set(OptAttribute_42);
      Instrument_42.insert(OptAttribute_42.getString());
      FIX::OptPayoutAmount OptPayoutAmount_42;
      OptPayoutAmount_42.setString("16925014");
      noQuoteEntries_0_1_2.set(OptPayoutAmount_42);
      Instrument_42.insert(OptPayoutAmount_42.getString());
      FIX::OptPayoutType OptPayoutType_42(1);
      noQuoteEntries_0_1_2.set(OptPayoutType_42);
      Instrument_42.insert(OptPayoutType_42.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_42;
      OriginalNotionalPercentageOutstanding_42.setString("62.510000");
      noQuoteEntries_0_1_2.set(OriginalNotionalPercentageOutstanding_42);
      Instrument_42.insert(OriginalNotionalPercentageOutstanding_42.getString());
      FIX::Pool Pool_42("STRING_1569836137");
      noQuoteEntries_0_1_2.set(Pool_42);
      Instrument_42.insert(Pool_42.getString());
      FIX::PositionLimit PositionLimit_42(700776647);
      noQuoteEntries_0_1_2.set(PositionLimit_42);
      Instrument_42.insert(PositionLimit_42.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_42("STRING_INX");
      noQuoteEntries_0_1_2.set(PriceQuoteMethod_42);
      Instrument_42.insert(PriceQuoteMethod_42.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_42("STRING_48999540");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasure_42);
      Instrument_42.insert(PriceUnitOfMeasure_42.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_42;
      PriceUnitOfMeasureQty_42.setString("5909168");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasureQty_42);
      Instrument_42.insert(PriceUnitOfMeasureQty_42.getString());
      FIX::Product Product_44(9);
      noQuoteEntries_0_1_2.set(Product_44);
      Instrument_42.insert(Product_44.getString());
      FIX::ProductComplex ProductComplex_42("STRING_1102576336");
      noQuoteEntries_0_1_2.set(ProductComplex_42);
      Instrument_42.insert(ProductComplex_42.getString());
      FIX::PutOrCall PutOrCall_42(0);
      noQuoteEntries_0_1_2.set(PutOrCall_42);
      Instrument_42.insert(PutOrCall_42.getString());
      FIX::RedemptionDate RedemptionDate_42("LOCALMKTDATE_814408309");
      noQuoteEntries_0_1_2.set(RedemptionDate_42);
      Instrument_42.insert(RedemptionDate_42.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_42("STRING_1683319323");
      noQuoteEntries_0_1_2.set(RepoCollateralSecurityType_42);
      Instrument_42.insert(RepoCollateralSecurityType_42.getString());
      FIX::RepurchaseRate RepurchaseRate_42;
      RepurchaseRate_42.setString("8.570000");
      noQuoteEntries_0_1_2.set(RepurchaseRate_42);
      Instrument_42.insert(RepurchaseRate_42.getString());
      FIX::RepurchaseTerm RepurchaseTerm_42(471501808);
      noQuoteEntries_0_1_2.set(RepurchaseTerm_42);
      Instrument_42.insert(RepurchaseTerm_42.getString());
      FIX::RestructuringType RestructuringType_42("STRING_MR");
      noQuoteEntries_0_1_2.set(RestructuringType_42);
      Instrument_42.insert(RestructuringType_42.getString());
      FIX::SecurityDesc SecurityDesc_42("STRING_884384497");
      noQuoteEntries_0_1_2.set(SecurityDesc_42);
      Instrument_42.insert(SecurityDesc_42.getString());
      FIX::SecurityExchange SecurityExchange_42("EXCHANGE_296330938");
      noQuoteEntries_0_1_2.set(SecurityExchange_42);
      Instrument_42.insert(SecurityExchange_42.getString());
      FIX::SecurityGroup SecurityGroup_42("STRING_1214380177");
      noQuoteEntries_0_1_2.set(SecurityGroup_42);
      Instrument_42.insert(SecurityGroup_42.getString());
      FIX::SecurityID SecurityID_42("STRING_1346090397");
      noQuoteEntries_0_1_2.set(SecurityID_42);
      Instrument_42.insert(SecurityID_42.getString());
      FIX::SecurityIDSource SecurityIDSource_42("STRING_E");
      noQuoteEntries_0_1_2.set(SecurityIDSource_42);
      Instrument_42.insert(SecurityIDSource_42.getString());
      FIX::SecurityStatus SecurityStatus_42("STRING_1");
      noQuoteEntries_0_1_2.set(SecurityStatus_42);
      Instrument_42.insert(SecurityStatus_42.getString());
      FIX::SecuritySubType SecuritySubType_43("STRING_544326685");
      noQuoteEntries_0_1_2.set(SecuritySubType_43);
      Instrument_42.insert(SecuritySubType_43.getString());
      FIX::SecurityType SecurityType_44("STRING_LOFC");
      noQuoteEntries_0_1_2.set(SecurityType_44);
      Instrument_42.insert(SecurityType_44.getString());
      FIX::Seniority Seniority_42("STRING_SD");
      noQuoteEntries_0_1_2.set(Seniority_42);
      Instrument_42.insert(Seniority_42.getString());
      FIX::SettlMethod SettlMethod_42('C');
      noQuoteEntries_0_1_2.set(SettlMethod_42);
      Instrument_42.insert(SettlMethod_42.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_42("STRING_2103825329");
      noQuoteEntries_0_1_2.set(SettleOnOpenFlag_42);
      Instrument_42.insert(SettleOnOpenFlag_42.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_42("STRING_155782636");
      noQuoteEntries_0_1_2.set(StateOrProvinceOfIssue_42);
      Instrument_42.insert(StateOrProvinceOfIssue_42.getString());
      FIX::StrikeCurrency StrikeCurrency_42("USD");
      noQuoteEntries_0_1_2.set(StrikeCurrency_42);
      Instrument_42.insert(StrikeCurrency_42.getString());
      FIX::StrikeMultiplier StrikeMultiplier_42;
      StrikeMultiplier_42.setString("3810103");
      noQuoteEntries_0_1_2.set(StrikeMultiplier_42);
      Instrument_42.insert(StrikeMultiplier_42.getString());
      FIX::StrikePrice StrikePrice_42;
      StrikePrice_42.setString("8911581");
      noQuoteEntries_0_1_2.set(StrikePrice_42);
      Instrument_42.insert(StrikePrice_42.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_42(4);
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryMethod_42);
      Instrument_42.insert(StrikePriceBoundaryMethod_42.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_42;
      StrikePriceBoundaryPrecision_42.setString("66.080000");
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryPrecision_42);
      Instrument_42.insert(StrikePriceBoundaryPrecision_42.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_42(3);
      noQuoteEntries_0_1_2.set(StrikePriceDeterminationMethod_42);
      Instrument_42.insert(StrikePriceDeterminationMethod_42.getString());
      FIX::StrikeValue StrikeValue_42;
      StrikeValue_42.setString("16994247");
      noQuoteEntries_0_1_2.set(StrikeValue_42);
      Instrument_42.insert(StrikeValue_42.getString());
      FIX::Symbol Symbol_42("STRING_2118954693");
      noQuoteEntries_0_1_2.set(Symbol_42);
      Instrument_42.insert(Symbol_42.getString());
      FIX::SymbolSfx SymbolSfx_42("STRING_CD");
      noQuoteEntries_0_1_2.set(SymbolSfx_42);
      Instrument_42.insert(SymbolSfx_42.getString());
      FIX::TimeUnit TimeUnit_42("STRING_Min");
      noQuoteEntries_0_1_2.set(TimeUnit_42);
      Instrument_42.insert(TimeUnit_42.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_42(1);
      noQuoteEntries_0_1_2.set(UnderlyingPriceDeterminationMethod_42);
      Instrument_42.insert(UnderlyingPriceDeterminationMethod_42.getString());
      FIX::UnitOfMeasure UnitOfMeasure_42("STRING_USD");
      noQuoteEntries_0_1_2.set(UnitOfMeasure_42);
      Instrument_42.insert(UnitOfMeasure_42.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_42;
      UnitOfMeasureQty_42.setString("20285543");
      noQuoteEntries_0_1_2.set(UnitOfMeasureQty_42);
      Instrument_42.insert(UnitOfMeasureQty_42.getString());
      FIX::ValuationMethod ValuationMethod_42("STRING_EQTY");
      noQuoteEntries_0_1_2.set(ValuationMethod_42);
      Instrument_42.insert(ValuationMethod_42.getString());
      all_values.push_back(Instrument_42);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_84;
        FIX::ComplexEventCondition ComplexEventCondition_84(2);
        noComplexEvents_0_2_2_0.set(ComplexEventCondition_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventCondition_84.getString());
        FIX::ComplexEventPrice ComplexEventPrice_84;
        ComplexEventPrice_84.setString("12377925");
        noComplexEvents_0_2_2_0.set(ComplexEventPrice_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPrice_84.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_84(1);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryMethod_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryMethod_84.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_84;
        ComplexEventPriceBoundaryPrecision_84.setString("60.880000");
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryPrecision_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryPrecision_84.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_84(3);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceTimeType_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceTimeType_84.getString());
        FIX::ComplexEventType ComplexEventType_84(9);
        noComplexEvents_0_2_2_0.set(ComplexEventType_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventType_84.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_84;
        ComplexOptPayoutAmount_84.setString("1567728");
        noComplexEvents_0_2_2_0.set(ComplexOptPayoutAmount_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexOptPayoutAmount_84.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_84);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_175;
          FIX::ComplexEventEndDate ComplexEventEndDate_175(FIX::UTCTIMESTAMP(2, 2, 1, 20, 12, 2012));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventEndDate_175);
          ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventEndDate_175.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_175(FIX::UTCTIMESTAMP(0, 47, 57, 8, 12, 2007));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventStartDate_175);
          ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventStartDate_175.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_175);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_350;
            FIX::ComplexEventEndTime ComplexEventEndTime_350(FIX::UTCTIMEONLY(1, 53, 8));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventEndTime_350);
            ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventEndTime_350.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_350(FIX::UTCTIMEONLY(2, 54, 56));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventStartTime_350);
            ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventStartTime_350.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_350);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_351;
            FIX::ComplexEventEndTime ComplexEventEndTime_351(FIX::UTCTIMEONLY(7, 6, 17));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventEndTime_351);
            ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventEndTime_351.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_351(FIX::UTCTIMEONLY(22, 54, 15));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventStartTime_351);
            ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventStartTime_351.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_351);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_352;
            FIX::ComplexEventEndTime ComplexEventEndTime_352(FIX::UTCTIMEONLY(9, 9, 31));
            noComplexEventTimes_0_2_0_0_4_2.set(ComplexEventEndTime_352);
            ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventEndTime_352.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_352(FIX::UTCTIMEONLY(21, 41, 22));
            noComplexEventTimes_0_2_0_0_4_2.set(ComplexEventStartTime_352);
            ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventStartTime_352.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_352);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_2);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_176;
          FIX::ComplexEventEndDate ComplexEventEndDate_176(FIX::UTCTIMESTAMP(16, 12, 29, 15, 8, 2002));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventEndDate_176);
          ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventEndDate_176.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_176(FIX::UTCTIMESTAMP(9, 29, 36, 12, 9, 2010));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventStartDate_176);
          ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventStartDate_176.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_176);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_353;
            FIX::ComplexEventEndTime ComplexEventEndTime_353(FIX::UTCTIMEONLY(22, 55, 43));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventEndTime_353);
            ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventEndTime_353.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_353(FIX::UTCTIMEONLY(21, 37, 40));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventStartTime_353);
            ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventStartTime_353.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_353);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_354;
            FIX::ComplexEventEndTime ComplexEventEndTime_354(FIX::UTCTIMEONLY(14, 50, 35));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventEndTime_354);
            ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventEndTime_354.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_354(FIX::UTCTIMEONLY(3, 8, 18));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventStartTime_354);
            ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventStartTime_354.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_354);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_85;
        FIX::ComplexEventCondition ComplexEventCondition_85(1);
        noComplexEvents_0_2_2_1.set(ComplexEventCondition_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventCondition_85.getString());
        FIX::ComplexEventPrice ComplexEventPrice_85;
        ComplexEventPrice_85.setString("6794097");
        noComplexEvents_0_2_2_1.set(ComplexEventPrice_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPrice_85.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_85(3);
        noComplexEvents_0_2_2_1.set(ComplexEventPriceBoundaryMethod_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryMethod_85.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_85;
        ComplexEventPriceBoundaryPrecision_85.setString("81.090000");
        noComplexEvents_0_2_2_1.set(ComplexEventPriceBoundaryPrecision_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryPrecision_85.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_85(1);
        noComplexEvents_0_2_2_1.set(ComplexEventPriceTimeType_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceTimeType_85.getString());
        FIX::ComplexEventType ComplexEventType_85(7);
        noComplexEvents_0_2_2_1.set(ComplexEventType_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventType_85.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_85;
        ComplexOptPayoutAmount_85.setString("8011548");
        noComplexEvents_0_2_2_1.set(ComplexOptPayoutAmount_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexOptPayoutAmount_85.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_85);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_177;
          FIX::ComplexEventEndDate ComplexEventEndDate_177(FIX::UTCTIMESTAMP(3, 33, 47, 27, 12, 2006));
          noComplexEventDates_0_2_1_3_0.set(ComplexEventEndDate_177);
          ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventEndDate_177.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_177(FIX::UTCTIMESTAMP(21, 24, 59, 26, 10, 2005));
          noComplexEventDates_0_2_1_3_0.set(ComplexEventStartDate_177);
          ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventStartDate_177.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_177);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_355;
            FIX::ComplexEventEndTime ComplexEventEndTime_355(FIX::UTCTIMEONLY(7, 49, 28));
            noComplexEventTimes_0_2_1_0_4_0.set(ComplexEventEndTime_355);
            ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventEndTime_355.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_355(FIX::UTCTIMEONLY(16, 28, 10));
            noComplexEventTimes_0_2_1_0_4_0.set(ComplexEventStartTime_355);
            ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventStartTime_355.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_355);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_356;
            FIX::ComplexEventEndTime ComplexEventEndTime_356(FIX::UTCTIMEONLY(21, 32, 13));
            noComplexEventTimes_0_2_1_0_4_1.set(ComplexEventEndTime_356);
            ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventEndTime_356.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_356(FIX::UTCTIMEONLY(6, 46, 22));
            noComplexEventTimes_0_2_1_0_4_1.set(ComplexEventStartTime_356);
            ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventStartTime_356.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_356);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_1);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_178;
          FIX::ComplexEventEndDate ComplexEventEndDate_178(FIX::UTCTIMESTAMP(17, 47, 5, 24, 12, 2009));
          noComplexEventDates_0_2_1_3_1.set(ComplexEventEndDate_178);
          ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventEndDate_178.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_178(FIX::UTCTIMESTAMP(0, 49, 40, 15, 4, 2003));
          noComplexEventDates_0_2_1_3_1.set(ComplexEventStartDate_178);
          ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventStartDate_178.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_178);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_357;
            FIX::ComplexEventEndTime ComplexEventEndTime_357(FIX::UTCTIMEONLY(17, 59, 52));
            noComplexEventTimes_0_2_1_1_4_0.set(ComplexEventEndTime_357);
            ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventEndTime_357.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_357(FIX::UTCTIMEONLY(19, 20, 6));
            noComplexEventTimes_0_2_1_1_4_0.set(ComplexEventStartTime_357);
            ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventStartTime_357.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_357);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_1.addGroup(noComplexEventTimes_0_2_1_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_358;
            FIX::ComplexEventEndTime ComplexEventEndTime_358(FIX::UTCTIMEONLY(10, 31, 24));
            noComplexEventTimes_0_2_1_1_4_1.set(ComplexEventEndTime_358);
            ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventEndTime_358.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_358(FIX::UTCTIMEONLY(1, 2, 58));
            noComplexEventTimes_0_2_1_1_4_1.set(ComplexEventStartTime_358);
            ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventStartTime_358.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_358);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_1.addGroup(noComplexEventTimes_0_2_1_1_4_1);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_179;
          FIX::ComplexEventEndDate ComplexEventEndDate_179(FIX::UTCTIMESTAMP(8, 46, 24, 20, 10, 2013));
          noComplexEventDates_0_2_1_3_2.set(ComplexEventEndDate_179);
          ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventEndDate_179.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_179(FIX::UTCTIMESTAMP(21, 39, 46, 8, 7, 2011));
          noComplexEventDates_0_2_1_3_2.set(ComplexEventStartDate_179);
          ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventStartDate_179.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_179);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_359;
            FIX::ComplexEventEndTime ComplexEventEndTime_359(FIX::UTCTIMEONLY(8, 1, 42));
            noComplexEventTimes_0_2_1_2_4_0.set(ComplexEventEndTime_359);
            ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventEndTime_359.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_359(FIX::UTCTIMEONLY(8, 54, 31));
            noComplexEventTimes_0_2_1_2_4_0.set(ComplexEventStartTime_359);
            ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventStartTime_359.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_359);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_2.addGroup(noComplexEventTimes_0_2_1_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_360;
            FIX::ComplexEventEndTime ComplexEventEndTime_360(FIX::UTCTIMEONLY(4, 2, 23));
            noComplexEventTimes_0_2_1_2_4_1.set(ComplexEventEndTime_360);
            ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventEndTime_360.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_360(FIX::UTCTIMEONLY(16, 26, 31));
            noComplexEventTimes_0_2_1_2_4_1.set(ComplexEventStartTime_360);
            ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventStartTime_360.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_360);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_2.addGroup(noComplexEventTimes_0_2_1_2_4_1);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_86;
        FIX::ComplexEventCondition ComplexEventCondition_86(2);
        noComplexEvents_0_2_2_2.set(ComplexEventCondition_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventCondition_86.getString());
        FIX::ComplexEventPrice ComplexEventPrice_86;
        ComplexEventPrice_86.setString("8351493");
        noComplexEvents_0_2_2_2.set(ComplexEventPrice_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPrice_86.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_86(5);
        noComplexEvents_0_2_2_2.set(ComplexEventPriceBoundaryMethod_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryMethod_86.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_86;
        ComplexEventPriceBoundaryPrecision_86.setString("85.790000");
        noComplexEvents_0_2_2_2.set(ComplexEventPriceBoundaryPrecision_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryPrecision_86.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_86(3);
        noComplexEvents_0_2_2_2.set(ComplexEventPriceTimeType_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceTimeType_86.getString());
        FIX::ComplexEventType ComplexEventType_86(8);
        noComplexEvents_0_2_2_2.set(ComplexEventType_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventType_86.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_86;
        ComplexOptPayoutAmount_86.setString("12545065");
        noComplexEvents_0_2_2_2.set(ComplexOptPayoutAmount_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexOptPayoutAmount_86.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_86);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_180;
          FIX::ComplexEventEndDate ComplexEventEndDate_180(FIX::UTCTIMESTAMP(19, 2, 12, 5, 2, 2008));
          noComplexEventDates_0_2_2_3_0.set(ComplexEventEndDate_180);
          ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventEndDate_180.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_180(FIX::UTCTIMESTAMP(22, 16, 41, 3, 5, 2016));
          noComplexEventDates_0_2_2_3_0.set(ComplexEventStartDate_180);
          ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventStartDate_180.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_180);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_361;
            FIX::ComplexEventEndTime ComplexEventEndTime_361(FIX::UTCTIMEONLY(0, 33, 27));
            noComplexEventTimes_0_2_2_0_4_0.set(ComplexEventEndTime_361);
            ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventEndTime_361.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_361(FIX::UTCTIMEONLY(1, 45, 20));
            noComplexEventTimes_0_2_2_0_4_0.set(ComplexEventStartTime_361);
            ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventStartTime_361.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_361);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_2_3_0.addGroup(noComplexEventTimes_0_2_2_0_4_0);
          }
          noComplexEvents_0_2_2_2.addGroup(noComplexEventDates_0_2_2_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_76;
        FIX::EventDate EventDate_76("LOCALMKTDATE_863480755");
        noEvents_0_2_2_0.set(EventDate_76);
        EvntGrp_NoEvents_76.insert(EventDate_76.getString());
        FIX::EventPx EventPx_76;
        EventPx_76.setString("9728072");
        noEvents_0_2_2_0.set(EventPx_76);
        EvntGrp_NoEvents_76.insert(EventPx_76.getString());
        FIX::EventText EventText_76("STRING_79369163");
        noEvents_0_2_2_0.set(EventText_76);
        EvntGrp_NoEvents_76.insert(EventText_76.getString());
        FIX::EventTime EventTime_76(FIX::UTCTIMESTAMP(15, 51, 38, 26, 4, 2016));
        noEvents_0_2_2_0.set(EventTime_76);
        EvntGrp_NoEvents_76.insert(EventTime_76.getString());
        FIX::EventType EventType_76(7);
        noEvents_0_2_2_0.set(EventType_76);
        EvntGrp_NoEvents_76.insert(EventType_76.getString());
        all_values.push_back(EvntGrp_NoEvents_76);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_77;
        FIX::EventDate EventDate_77("LOCALMKTDATE_2018178368");
        noEvents_0_2_2_1.set(EventDate_77);
        EvntGrp_NoEvents_77.insert(EventDate_77.getString());
        FIX::EventPx EventPx_77;
        EventPx_77.setString("10972050");
        noEvents_0_2_2_1.set(EventPx_77);
        EvntGrp_NoEvents_77.insert(EventPx_77.getString());
        FIX::EventText EventText_77("STRING_1248610221");
        noEvents_0_2_2_1.set(EventText_77);
        EvntGrp_NoEvents_77.insert(EventText_77.getString());
        FIX::EventTime EventTime_77(FIX::UTCTIMESTAMP(23, 29, 41, 2, 10, 2003));
        noEvents_0_2_2_1.set(EventTime_77);
        EvntGrp_NoEvents_77.insert(EventTime_77.getString());
        FIX::EventType EventType_77(18);
        noEvents_0_2_2_1.set(EventType_77);
        EvntGrp_NoEvents_77.insert(EventType_77.getString());
        all_values.push_back(EvntGrp_NoEvents_77);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_83;
        FIX::InstrumentPartyID InstrumentPartyID_83("STRING_2077019434");
        noInstrumentParties_0_2_2_0.set(InstrumentPartyID_83);
        InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyID_83.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_83('1');
        noInstrumentParties_0_2_2_0.set(InstrumentPartyIDSource_83);
        InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyIDSource_83.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_83(796665169);
        noInstrumentParties_0_2_2_0.set(InstrumentPartyRole_83);
        InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyRole_83.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_83);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162;
          FIX::InstrumentPartySubID InstrumentPartySubID_162("STRING_1700968339");
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubID_162);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubID_162.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_162(824996554);
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubIDType_162);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubIDType_162.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163;
          FIX::InstrumentPartySubID InstrumentPartySubID_163("STRING_1041337843");
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubID_163);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubID_163.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_163(870988923);
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubIDType_163);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubIDType_163.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164;
          FIX::InstrumentPartySubID InstrumentPartySubID_164("STRING_1688477310");
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubID_164);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubID_164.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_164(2014145052);
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubIDType_164);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubIDType_164.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_84;
        FIX::InstrumentPartyID InstrumentPartyID_84("STRING_950358086");
        noInstrumentParties_0_2_2_1.set(InstrumentPartyID_84);
        InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyID_84.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_84('1');
        noInstrumentParties_0_2_2_1.set(InstrumentPartyIDSource_84);
        InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyIDSource_84.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_84(1178006275);
        noInstrumentParties_0_2_2_1.set(InstrumentPartyRole_84);
        InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyRole_84.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_84);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165;
          FIX::InstrumentPartySubID InstrumentPartySubID_165("STRING_801615434");
          noInstrumentPartySubIDs_0_2_1_3_0.set(InstrumentPartySubID_165);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubID_165.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_165(417958549);
          noInstrumentPartySubIDs_0_2_1_3_0.set(InstrumentPartySubIDType_165);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubIDType_165.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_85;
        FIX::InstrumentPartyID InstrumentPartyID_85("STRING_1319221080");
        noInstrumentParties_0_2_2_2.set(InstrumentPartyID_85);
        InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyID_85.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_85('4');
        noInstrumentParties_0_2_2_2.set(InstrumentPartyIDSource_85);
        InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyIDSource_85.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_85(945008576);
        noInstrumentParties_0_2_2_2.set(InstrumentPartyRole_85);
        InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyRole_85.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_85);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166;
          FIX::InstrumentPartySubID InstrumentPartySubID_166("STRING_1510322047");
          noInstrumentPartySubIDs_0_2_2_3_0.set(InstrumentPartySubID_166);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubID_166.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_166(46135149);
          noInstrumentPartySubIDs_0_2_2_3_0.set(InstrumentPartySubIDType_166);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubIDType_166.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_2.addGroup(noInstrumentPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167;
          FIX::InstrumentPartySubID InstrumentPartySubID_167("STRING_1108823941");
          noInstrumentPartySubIDs_0_2_2_3_1.set(InstrumentPartySubID_167);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubID_167.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_167(383690567);
          noInstrumentPartySubIDs_0_2_2_3_1.set(InstrumentPartySubIDType_167);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubIDType_167.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_2.addGroup(noInstrumentPartySubIDs_0_2_2_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_75;
        FIX::SecurityAltID SecurityAltID_75("STRING_557453794");
        noSecurityAltID_0_2_2_0.set(SecurityAltID_75);
        SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltID_75.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_75("STRING_1453364013");
        noSecurityAltID_0_2_2_0.set(SecurityAltIDSource_75);
        SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltIDSource_75.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_75);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_76;
        FIX::SecurityAltID SecurityAltID_76("STRING_665568063");
        noSecurityAltID_0_2_2_1.set(SecurityAltID_76);
        SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltID_76.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_76("STRING_389613156");
        noSecurityAltID_0_2_2_1.set(SecurityAltIDSource_76);
        SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltIDSource_76.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_76);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_77;
        FIX::SecurityAltID SecurityAltID_77("STRING_514967502");
        noSecurityAltID_0_2_2_2.set(SecurityAltID_77);
        SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltID_77.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_77("STRING_1924422153");
        noSecurityAltID_0_2_2_2.set(SecurityAltIDSource_77);
        SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltIDSource_77.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_77);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_84;
      FIX::SecurityXML SecurityXML_85("XMLDATA_319148942");
      noQuoteEntries_0_1_2.set(SecurityXML_85);
      FIX::SecurityXMLLen SecurityXMLLen_42(294607104);
      noQuoteEntries_0_1_2.set(SecurityXMLLen_42);
      FIX::SecurityXMLSchema SecurityXMLSchema_42("STRING_573603674");
      noQuoteEntries_0_1_2.set(SecurityXMLSchema_42);
      SecurityXML_84.insert(SecurityXMLSchema_42.getString());
      all_values.push_back(SecurityXML_84);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_57;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_57("DATA_1024700425");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuer_57.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_57(1995575443);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuerLen_57.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_57("DATA_1398600228");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDesc_57.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_57(2066038268);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDescLen_57.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_57;
    UnderlyingAdjustedQuantity_57.setString("7190807");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_57);
    UnderlyingInstrument_57.insert(UnderlyingAdjustedQuantity_57.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_57;
    UnderlyingAllocationPercent_57.setString("38.900000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_57);
    UnderlyingInstrument_57.insert(UnderlyingAllocationPercent_57.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_57;
    UnderlyingAttachmentPoint_57.setString("96.720000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingAttachmentPoint_57.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_57("STRING_1669438804");
    noQuoteSets_0_0.set(UnderlyingCFICode_57);
    UnderlyingInstrument_57.insert(UnderlyingCFICode_57.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_57("STRING_661858846");
    noQuoteSets_0_0.set(UnderlyingCPProgram_57);
    UnderlyingInstrument_57.insert(UnderlyingCPProgram_57.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_57("STRING_963222299");
    noQuoteSets_0_0.set(UnderlyingCPRegType_57);
    UnderlyingInstrument_57.insert(UnderlyingCPRegType_57.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_57;
    UnderlyingCapValue_57.setString("18061889");
    noQuoteSets_0_0.set(UnderlyingCapValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCapValue_57.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_57;
    UnderlyingCashAmount_57.setString("14634742");
    noQuoteSets_0_0.set(UnderlyingCashAmount_57);
    UnderlyingInstrument_57.insert(UnderlyingCashAmount_57.getString());
    FIX::UnderlyingCashType UnderlyingCashType_57("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_57);
    UnderlyingInstrument_57.insert(UnderlyingCashType_57.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_57;
    UnderlyingContractMultiplier_57.setString("9779263");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplier_57.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_57(1876591246);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplierUnit_57.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_57("COUNTRY_178705776");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingCountryOfIssue_57.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_57("LOCALMKTDATE_20358539");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponPaymentDate_57.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_57;
    UnderlyingCouponRate_57.setString("96.460000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponRate_57.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_57("STRING_224840925");
    noQuoteSets_0_0.set(UnderlyingCreditRating_57);
    UnderlyingInstrument_57.insert(UnderlyingCreditRating_57.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_57("CHF");
    noQuoteSets_0_0.set(UnderlyingCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrency_57.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_57;
    UnderlyingCurrentValue_57.setString("9077294");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrentValue_57.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_57;
    UnderlyingDetachmentPoint_57.setString("62.750000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingDetachmentPoint_57.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_57;
    UnderlyingDirtyPrice_57.setString("9290005");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingDirtyPrice_57.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_57;
    UnderlyingEndPrice_57.setString("15732975");
    noQuoteSets_0_0.set(UnderlyingEndPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingEndPrice_57.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_57;
    UnderlyingEndValue_57.setString("20762494");
    noQuoteSets_0_0.set(UnderlyingEndValue_57);
    UnderlyingInstrument_57.insert(UnderlyingEndValue_57.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_57(1443968081);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_57);
    UnderlyingInstrument_57.insert(UnderlyingExerciseStyle_57.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_57;
    UnderlyingFXRate_57.setString("13502360");
    noQuoteSets_0_0.set(UnderlyingFXRate_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRate_57.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_57('M');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRateCalc_57.getString());
    FIX::UnderlyingFactor UnderlyingFactor_57;
    UnderlyingFactor_57.setString("17385751");
    noQuoteSets_0_0.set(UnderlyingFactor_57);
    UnderlyingInstrument_57.insert(UnderlyingFactor_57.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_57(1923839706);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_57);
    UnderlyingInstrument_57.insert(UnderlyingFlowScheduleType_57.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_57("STRING_1272615150");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_57);
    UnderlyingInstrument_57.insert(UnderlyingInstrRegistry_57.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_57("LOCALMKTDATE_1586666981");
    noQuoteSets_0_0.set(UnderlyingIssueDate_57);
    UnderlyingInstrument_57.insert(UnderlyingIssueDate_57.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_57("STRING_1174956286");
    noQuoteSets_0_0.set(UnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(UnderlyingIssuer_57.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_57("STRING_1191169770");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingLocaleOfIssue_57.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_57("LOCALMKTDATE_158264051");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityDate_57.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_57("MONTHYEAR_2114550177");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityMonthYear_57.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_57("TZTIMEONLY_976385794");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityTime_57.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_57;
    UnderlyingNotionalPercentageOutstanding_57.setString("28.560000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_57('6');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_57);
    UnderlyingInstrument_57.insert(UnderlyingOptAttribute_57.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_57;
    UnderlyingOriginalNotionalPercentageOutstanding_57.setString("80.930000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingOriginalNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_57("STRING_1486408162");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasure_57.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_57;
    UnderlyingPriceUnitOfMeasureQty_57.setString("20923996");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasureQty_57.getString());
    FIX::UnderlyingProduct UnderlyingProduct_57(1173305293);
    noQuoteSets_0_0.set(UnderlyingProduct_57);
    UnderlyingInstrument_57.insert(UnderlyingProduct_57.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_57(316850900);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_57);
    UnderlyingInstrument_57.insert(UnderlyingPutOrCall_57.getString());
    FIX::UnderlyingPx UnderlyingPx_57;
    UnderlyingPx_57.setString("18215072");
    noQuoteSets_0_0.set(UnderlyingPx_57);
    UnderlyingInstrument_57.insert(UnderlyingPx_57.getString());
    FIX::UnderlyingQty UnderlyingQty_57;
    UnderlyingQty_57.setString("13520110");
    noQuoteSets_0_0.set(UnderlyingQty_57);
    UnderlyingInstrument_57.insert(UnderlyingQty_57.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_57("LOCALMKTDATE_337209440");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_57);
    UnderlyingInstrument_57.insert(UnderlyingRedemptionDate_57.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_57("STRING_913453252");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingRepoCollateralSecurityType_57.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_57;
    UnderlyingRepurchaseRate_57.setString("19.950000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseRate_57.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_57(1466391920);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseTerm_57.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_57("STRING_389089817");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_57);
    UnderlyingInstrument_57.insert(UnderlyingRestructuringType_57.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_57("STRING_337097811");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityDesc_57.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_57("EXCHANGE_1005544547");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityExchange_57.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_57("STRING_1318090396");
    noQuoteSets_0_0.set(UnderlyingSecurityID_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityID_57.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_57("STRING_1910395338");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityIDSource_57.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_57("STRING_934310330");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecuritySubType_57.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_57("STRING_614574829");
    noQuoteSets_0_0.set(UnderlyingSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityType_57.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_57("STRING_1113147722");
    noQuoteSets_0_0.set(UnderlyingSeniority_57);
    UnderlyingInstrument_57.insert(UnderlyingSeniority_57.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_57("STRING_1182225055");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlMethod_57.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_57(4);
    noQuoteSets_0_0.set(UnderlyingSettlementType_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlementType_57.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_57;
    UnderlyingStartValue_57.setString("8895037");
    noQuoteSets_0_0.set(UnderlyingStartValue_57);
    UnderlyingInstrument_57.insert(UnderlyingStartValue_57.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_57("STRING_307356557");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingStateOrProvinceOfIssue_57.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_57("JPY");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikeCurrency_57.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_57;
    UnderlyingStrikePrice_57.setString("14985263");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikePrice_57.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_57("STRING_1950597399");
    noQuoteSets_0_0.set(UnderlyingSymbol_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbol_57.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_57("STRING_2031526595");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbolSfx_57.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_57("STRING_327428473");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingTimeUnit_57.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_57("STRING_1630816607");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasure_57.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_57;
    UnderlyingUnitOfMeasureQty_57.setString("5129683");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasureQty_57.getString());
    all_values.push_back(UnderlyingInstrument_57);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_117;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_117("STRING_969741121");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_117);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltID_117.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_117("STRING_457884331");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_117);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltIDSource_117.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_118;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_118("STRING_1292858212");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_118);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltID_118.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_118("STRING_1286592021");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_118);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltIDSource_118.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_119;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_119("STRING_131907937");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_119);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltID_119.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_119("STRING_497385634");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_119);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltIDSource_119.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_112;
      FIX::UnderlyingStipType UnderlyingStipType_112("STRING_1045361190");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_112);
      UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipType_112.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_112("STRING_2074237629");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_112);
      UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipValue_112.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_112);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_113;
      FIX::UnderlyingStipType UnderlyingStipType_113("STRING_942709734");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_113);
      UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipType_113.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_113("STRING_1434451007");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_113);
      UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipValue_113.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_113);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_114;
      FIX::UnderlyingStipType UnderlyingStipType_114("STRING_263851792");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipType_114.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_114("STRING_1948254281");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipValue_114.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_114);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_108;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_108("STRING_26763482");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyID_108.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_108('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyIDSource_108.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_108(1219632584);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyRole_108.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_108);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_214("STRING_1917306019");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_214);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214.insert(UnderlyingInstrumentPartySubID_214.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_214(1425298951);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_214);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214.insert(UnderlyingInstrumentPartySubIDType_214.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_215("STRING_2029414984");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_215);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215.insert(UnderlyingInstrumentPartySubID_215.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_215(77178929);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_215);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215.insert(UnderlyingInstrumentPartySubIDType_215.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_109;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_109("STRING_1070148650");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyID_109.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_109('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyIDSource_109.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_109(1575705256);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyRole_109.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_109);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_216("STRING_1830434350");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_216);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubID_216.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_216(1903133730);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_216);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubIDType_216.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
    FIX::LastFragment LastFragment_12(true);
    noQuoteSets_0_1.set(LastFragment_12);
    QuotSetAckGrp_NoQuoteSets_1.insert(LastFragment_12.getString());
    FIX::QuoteSetID QuoteSetID_4("STRING_195919025");
    noQuoteSets_0_1.set(QuoteSetID_4);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetID_4.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_4(FIX::UTCTIMESTAMP(1, 36, 52, 15, 3, 2014));
    noQuoteSets_0_1.set(QuoteSetValidUntilTime_4);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetValidUntilTime_4.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_1(2089246316);
    noQuoteSets_0_1.set(TotNoAccQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoAccQuotes_1.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_1(1831072484);
    noQuoteSets_0_1.set(TotNoCxldQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoCxldQuotes_1.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_4(1592200828);
    noQuoteSets_0_1.set(TotNoQuoteEntries_4);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoQuoteEntries_4.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_1(884472402);
    noQuoteSets_0_1.set(TotNoRejQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoRejQuotes_1.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_1);
    all_compo_names.insert("QuotSetAckGrp.NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_11;
      BidForwardPoints_11.setString("18560526");
      noQuoteEntries_1_1_0.set(BidForwardPoints_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidForwardPoints_11.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_11;
      BidForwardPoints2_11.setString("6852430");
      noQuoteEntries_1_1_0.set(BidForwardPoints2_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidForwardPoints2_11.getString());
      FIX::BidPx BidPx_11;
      BidPx_11.setString("17230975");
      noQuoteEntries_1_1_0.set(BidPx_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidPx_11.getString());
      FIX::BidSize BidSize_11;
      BidSize_11.setString("18828161");
      noQuoteEntries_1_1_0.set(BidSize_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidSize_11.getString());
      FIX::BidSpotRate BidSpotRate_11;
      BidSpotRate_11.setString("14203240");
      noQuoteEntries_1_1_0.set(BidSpotRate_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidSpotRate_11.getString());
      FIX::BidYield BidYield_11;
      BidYield_11.setString("65.350000");
      noQuoteEntries_1_1_0.set(BidYield_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidYield_11.getString());
      FIX::BookingType BookingType_18(1);
      noQuoteEntries_1_1_0.set(BookingType_18);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BookingType_18.getString());
      FIX::Currency Currency_41("USD");
      noQuoteEntries_1_1_0.set(Currency_41);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(Currency_41.getString());
      FIX::MidPx MidPx_11;
      MidPx_11.setString("7571749");
      noQuoteEntries_1_1_0.set(MidPx_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(MidPx_11.getString());
      FIX::MidYield MidYield_11;
      MidYield_11.setString("53.000000");
      noQuoteEntries_1_1_0.set(MidYield_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(MidYield_11.getString());
      FIX::OfferForwardPoints OfferForwardPoints_11;
      OfferForwardPoints_11.setString("11432104");
      noQuoteEntries_1_1_0.set(OfferForwardPoints_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferForwardPoints_11.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_11;
      OfferForwardPoints2_11.setString("5560827");
      noQuoteEntries_1_1_0.set(OfferForwardPoints2_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferForwardPoints2_11.getString());
      FIX::OfferPx OfferPx_11;
      OfferPx_11.setString("6955469");
      noQuoteEntries_1_1_0.set(OfferPx_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferPx_11.getString());
      FIX::OfferSize OfferSize_11;
      OfferSize_11.setString("20164728");
      noQuoteEntries_1_1_0.set(OfferSize_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferSize_11.getString());
      FIX::OfferSpotRate OfferSpotRate_11;
      OfferSpotRate_11.setString("2390334");
      noQuoteEntries_1_1_0.set(OfferSpotRate_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferSpotRate_11.getString());
      FIX::OfferYield OfferYield_11;
      OfferYield_11.setString("69.910000");
      noQuoteEntries_1_1_0.set(OfferYield_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferYield_11.getString());
      FIX::OrdType OrdType_44('C');
      noQuoteEntries_1_1_0.set(OrdType_44);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrdType_44.getString());
      FIX::OrderCapacity OrderCapacity_19('W');
      noQuoteEntries_1_1_0.set(OrderCapacity_19);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderCapacity_19.getString());
      FIX::OrderQty2 OrderQty2_12;
      OrderQty2_12.setString("3263999");
      noQuoteEntries_1_1_0.set(OrderQty2_12);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderQty2_12.getString());
      FIX::OrderRestrictions OrderRestrictions_16("MULTIPLECHARVALUE_A");
      noQuoteEntries_1_1_0.set(OrderRestrictions_16);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderRestrictions_16.getString());
      FIX::QuoteEntryID QuoteEntryID_14("STRING_1088755835");
      noQuoteEntries_1_1_0.set(QuoteEntryID_14);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryID_14.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_3(1494461204);
      noQuoteEntries_1_1_0.set(QuoteEntryRejectReason_3);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryRejectReason_3.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_3(0);
      noQuoteEntries_1_1_0.set(QuoteEntryStatus_3);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryStatus_3.getString());
      FIX::SettlDate SettlDate_34("LOCALMKTDATE_1874467129");
      noQuoteEntries_1_1_0.set(SettlDate_34);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(SettlDate_34.getString());
      FIX::SettlDate2 SettlDate2_12("LOCALMKTDATE_1012424402");
      noQuoteEntries_1_1_0.set(SettlDate2_12);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(SettlDate2_12.getString());
      FIX::TradingSessionID TradingSessionID_47("STRING_5");
      noQuoteEntries_1_1_0.set(TradingSessionID_47);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TradingSessionID_47.getString());
      FIX::TradingSessionSubID TradingSessionSubID_47("STRING_5");
      noQuoteEntries_1_1_0.set(TradingSessionSubID_47);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TradingSessionSubID_47.getString());
      FIX::TransactTime TransactTime_37(FIX::UTCTIMESTAMP(2, 41, 35, 26, 5, 2010));
      noQuoteEntries_1_1_0.set(TransactTime_37);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TransactTime_37.getString());
      FIX::ValidUntilTime ValidUntilTime_12(FIX::UTCTIMESTAMP(23, 9, 42, 14, 2, 2000));
      noQuoteEntries_1_1_0.set(ValidUntilTime_12);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(ValidUntilTime_12.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_3);
      all_compo_names.insert("QuotEntryAckGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_81;
        FIX::EncodedLegIssuer EncodedLegIssuer_81("DATA_2089544416");
        noLegs_1_0_2_0.set(EncodedLegIssuer_81);
        InstrumentLeg_81.insert(EncodedLegIssuer_81.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_81(1659735683);
        noLegs_1_0_2_0.set(EncodedLegIssuerLen_81);
        InstrumentLeg_81.insert(EncodedLegIssuerLen_81.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_81("DATA_1984734217");
        noLegs_1_0_2_0.set(EncodedLegSecurityDesc_81);
        InstrumentLeg_81.insert(EncodedLegSecurityDesc_81.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_81(181094222);
        noLegs_1_0_2_0.set(EncodedLegSecurityDescLen_81);
        InstrumentLeg_81.insert(EncodedLegSecurityDescLen_81.getString());
        FIX::LegCFICode LegCFICode_81("STRING_2110932674");
        noLegs_1_0_2_0.set(LegCFICode_81);
        InstrumentLeg_81.insert(LegCFICode_81.getString());
        FIX::LegContractMultiplier LegContractMultiplier_81;
        LegContractMultiplier_81.setString("628351");
        noLegs_1_0_2_0.set(LegContractMultiplier_81);
        InstrumentLeg_81.insert(LegContractMultiplier_81.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_81(616046701);
        noLegs_1_0_2_0.set(LegContractMultiplierUnit_81);
        InstrumentLeg_81.insert(LegContractMultiplierUnit_81.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_81("MONTHYEAR_289849018");
        noLegs_1_0_2_0.set(LegContractSettlMonth_81);
        InstrumentLeg_81.insert(LegContractSettlMonth_81.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_81("COUNTRY_1614756257");
        noLegs_1_0_2_0.set(LegCountryOfIssue_81);
        InstrumentLeg_81.insert(LegCountryOfIssue_81.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_81("LOCALMKTDATE_1704802536");
        noLegs_1_0_2_0.set(LegCouponPaymentDate_81);
        InstrumentLeg_81.insert(LegCouponPaymentDate_81.getString());
        FIX::LegCouponRate LegCouponRate_81;
        LegCouponRate_81.setString("2.220000");
        noLegs_1_0_2_0.set(LegCouponRate_81);
        InstrumentLeg_81.insert(LegCouponRate_81.getString());
        FIX::LegCreditRating LegCreditRating_81("STRING_1484638548");
        noLegs_1_0_2_0.set(LegCreditRating_81);
        InstrumentLeg_81.insert(LegCreditRating_81.getString());
        FIX::LegCurrency LegCurrency_81("USD");
        noLegs_1_0_2_0.set(LegCurrency_81);
        InstrumentLeg_81.insert(LegCurrency_81.getString());
        FIX::LegDatedDate LegDatedDate_81("LOCALMKTDATE_1296283508");
        noLegs_1_0_2_0.set(LegDatedDate_81);
        InstrumentLeg_81.insert(LegDatedDate_81.getString());
        FIX::LegExerciseStyle LegExerciseStyle_81(842358335);
        noLegs_1_0_2_0.set(LegExerciseStyle_81);
        InstrumentLeg_81.insert(LegExerciseStyle_81.getString());
        FIX::LegFactor LegFactor_81;
        LegFactor_81.setString("11063925");
        noLegs_1_0_2_0.set(LegFactor_81);
        InstrumentLeg_81.insert(LegFactor_81.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_81(1992400871);
        noLegs_1_0_2_0.set(LegFlowScheduleType_81);
        InstrumentLeg_81.insert(LegFlowScheduleType_81.getString());
        FIX::LegInstrRegistry LegInstrRegistry_81("STRING_1370970496");
        noLegs_1_0_2_0.set(LegInstrRegistry_81);
        InstrumentLeg_81.insert(LegInstrRegistry_81.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_81("LOCALMKTDATE_1272103114");
        noLegs_1_0_2_0.set(LegInterestAccrualDate_81);
        InstrumentLeg_81.insert(LegInterestAccrualDate_81.getString());
        FIX::LegIssueDate LegIssueDate_81("LOCALMKTDATE_1226277621");
        noLegs_1_0_2_0.set(LegIssueDate_81);
        InstrumentLeg_81.insert(LegIssueDate_81.getString());
        FIX::LegIssuer LegIssuer_81("STRING_1475196608");
        noLegs_1_0_2_0.set(LegIssuer_81);
        InstrumentLeg_81.insert(LegIssuer_81.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_81("STRING_1173146124");
        noLegs_1_0_2_0.set(LegLocaleOfIssue_81);
        InstrumentLeg_81.insert(LegLocaleOfIssue_81.getString());
        FIX::LegMaturityDate LegMaturityDate_81("LOCALMKTDATE_1880478372");
        noLegs_1_0_2_0.set(LegMaturityDate_81);
        InstrumentLeg_81.insert(LegMaturityDate_81.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_81("MONTHYEAR_227185608");
        noLegs_1_0_2_0.set(LegMaturityMonthYear_81);
        InstrumentLeg_81.insert(LegMaturityMonthYear_81.getString());
        FIX::LegMaturityTime LegMaturityTime_81("TZTIMEONLY_1949432793");
        noLegs_1_0_2_0.set(LegMaturityTime_81);
        InstrumentLeg_81.insert(LegMaturityTime_81.getString());
        FIX::LegOptAttribute LegOptAttribute_81('1');
        noLegs_1_0_2_0.set(LegOptAttribute_81);
        InstrumentLeg_81.insert(LegOptAttribute_81.getString());
        FIX::LegOptionRatio LegOptionRatio_81;
        LegOptionRatio_81.setString("11997200");
        noLegs_1_0_2_0.set(LegOptionRatio_81);
        InstrumentLeg_81.insert(LegOptionRatio_81.getString());
        FIX::LegPool LegPool_81("STRING_1335410811");
        noLegs_1_0_2_0.set(LegPool_81);
        InstrumentLeg_81.insert(LegPool_81.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_81("STRING_394046972");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasure_81);
        InstrumentLeg_81.insert(LegPriceUnitOfMeasure_81.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_81;
        LegPriceUnitOfMeasureQty_81.setString("11679814");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasureQty_81);
        InstrumentLeg_81.insert(LegPriceUnitOfMeasureQty_81.getString());
        FIX::LegProduct LegProduct_81(1277471579);
        noLegs_1_0_2_0.set(LegProduct_81);
        InstrumentLeg_81.insert(LegProduct_81.getString());
        FIX::LegPutOrCall LegPutOrCall_81(2053782656);
        noLegs_1_0_2_0.set(LegPutOrCall_81);
        InstrumentLeg_81.insert(LegPutOrCall_81.getString());
        FIX::LegRatioQty LegRatioQty_81;
        LegRatioQty_81.setString("10052319");
        noLegs_1_0_2_0.set(LegRatioQty_81);
        InstrumentLeg_81.insert(LegRatioQty_81.getString());
        FIX::LegRedemptionDate LegRedemptionDate_81("LOCALMKTDATE_1458565801");
        noLegs_1_0_2_0.set(LegRedemptionDate_81);
        InstrumentLeg_81.insert(LegRedemptionDate_81.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_81("STRING_2017231682");
        noLegs_1_0_2_0.set(LegRepoCollateralSecurityType_81);
        InstrumentLeg_81.insert(LegRepoCollateralSecurityType_81.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_81;
        LegRepurchaseRate_81.setString("71.630000");
        noLegs_1_0_2_0.set(LegRepurchaseRate_81);
        InstrumentLeg_81.insert(LegRepurchaseRate_81.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_81(2074612502);
        noLegs_1_0_2_0.set(LegRepurchaseTerm_81);
        InstrumentLeg_81.insert(LegRepurchaseTerm_81.getString());
        FIX::LegSecurityDesc LegSecurityDesc_81("STRING_159597052");
        noLegs_1_0_2_0.set(LegSecurityDesc_81);
        InstrumentLeg_81.insert(LegSecurityDesc_81.getString());
        FIX::LegSecurityExchange LegSecurityExchange_81("EXCHANGE_535339772");
        noLegs_1_0_2_0.set(LegSecurityExchange_81);
        InstrumentLeg_81.insert(LegSecurityExchange_81.getString());
        FIX::LegSecurityID LegSecurityID_81("STRING_1631931391");
        noLegs_1_0_2_0.set(LegSecurityID_81);
        InstrumentLeg_81.insert(LegSecurityID_81.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_81("STRING_1943907274");
        noLegs_1_0_2_0.set(LegSecurityIDSource_81);
        InstrumentLeg_81.insert(LegSecurityIDSource_81.getString());
        FIX::LegSecuritySubType LegSecuritySubType_81("STRING_2019978320");
        noLegs_1_0_2_0.set(LegSecuritySubType_81);
        InstrumentLeg_81.insert(LegSecuritySubType_81.getString());
        FIX::LegSecurityType LegSecurityType_81("STRING_916233761");
        noLegs_1_0_2_0.set(LegSecurityType_81);
        InstrumentLeg_81.insert(LegSecurityType_81.getString());
        FIX::LegSide LegSide_81('4');
        noLegs_1_0_2_0.set(LegSide_81);
        InstrumentLeg_81.insert(LegSide_81.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_81("STRING_1168778181");
        noLegs_1_0_2_0.set(LegStateOrProvinceOfIssue_81);
        InstrumentLeg_81.insert(LegStateOrProvinceOfIssue_81.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_81("GBP");
        noLegs_1_0_2_0.set(LegStrikeCurrency_81);
        InstrumentLeg_81.insert(LegStrikeCurrency_81.getString());
        FIX::LegStrikePrice LegStrikePrice_81;
        LegStrikePrice_81.setString("10136954");
        noLegs_1_0_2_0.set(LegStrikePrice_81);
        InstrumentLeg_81.insert(LegStrikePrice_81.getString());
        FIX::LegSymbol LegSymbol_81("STRING_982078945");
        noLegs_1_0_2_0.set(LegSymbol_81);
        InstrumentLeg_81.insert(LegSymbol_81.getString());
        FIX::LegSymbolSfx LegSymbolSfx_81("STRING_676686628");
        noLegs_1_0_2_0.set(LegSymbolSfx_81);
        InstrumentLeg_81.insert(LegSymbolSfx_81.getString());
        FIX::LegTimeUnit LegTimeUnit_81("STRING_92489377");
        noLegs_1_0_2_0.set(LegTimeUnit_81);
        InstrumentLeg_81.insert(LegTimeUnit_81.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_81("STRING_309791905");
        noLegs_1_0_2_0.set(LegUnitOfMeasure_81);
        InstrumentLeg_81.insert(LegUnitOfMeasure_81.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_81;
        LegUnitOfMeasureQty_81.setString("18498327");
        noLegs_1_0_2_0.set(LegUnitOfMeasureQty_81);
        InstrumentLeg_81.insert(LegUnitOfMeasureQty_81.getString());
        all_values.push_back(InstrumentLeg_81);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_162;
          FIX::LegSecurityAltID LegSecurityAltID_162("STRING_536977513");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltID_162);
          LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltID_162.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_162("STRING_1651781897");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltIDSource_162);
          LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltIDSource_162.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_162);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_163;
          FIX::LegSecurityAltID LegSecurityAltID_163("STRING_1402825947");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltID_163);
          LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltID_163.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_163("STRING_1736697607");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltIDSource_163);
          LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltIDSource_163.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_163);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_43;
      FIX::AttachmentPoint AttachmentPoint_43;
      AttachmentPoint_43.setString("90.600000");
      noQuoteEntries_1_1_0.set(AttachmentPoint_43);
      Instrument_43.insert(AttachmentPoint_43.getString());
      FIX::CFICode CFICode_43("STRING_1796872920");
      noQuoteEntries_1_1_0.set(CFICode_43);
      Instrument_43.insert(CFICode_43.getString());
      FIX::CPProgram CPProgram_43(1);
      noQuoteEntries_1_1_0.set(CPProgram_43);
      Instrument_43.insert(CPProgram_43.getString());
      FIX::CPRegType CPRegType_43("STRING_2117180640");
      noQuoteEntries_1_1_0.set(CPRegType_43);
      Instrument_43.insert(CPRegType_43.getString());
      FIX::CapPrice CapPrice_43;
      CapPrice_43.setString("17031719");
      noQuoteEntries_1_1_0.set(CapPrice_43);
      Instrument_43.insert(CapPrice_43.getString());
      FIX::ContractMultiplier ContractMultiplier_43;
      ContractMultiplier_43.setString("17624273");
      noQuoteEntries_1_1_0.set(ContractMultiplier_43);
      Instrument_43.insert(ContractMultiplier_43.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_43(2);
      noQuoteEntries_1_1_0.set(ContractMultiplierUnit_43);
      Instrument_43.insert(ContractMultiplierUnit_43.getString());
      FIX::ContractSettlMonth ContractSettlMonth_43("MONTHYEAR_1572919962");
      noQuoteEntries_1_1_0.set(ContractSettlMonth_43);
      Instrument_43.insert(ContractSettlMonth_43.getString());
      FIX::CountryOfIssue CountryOfIssue_43("COUNTRY_683010886");
      noQuoteEntries_1_1_0.set(CountryOfIssue_43);
      Instrument_43.insert(CountryOfIssue_43.getString());
      FIX::CouponPaymentDate CouponPaymentDate_43("LOCALMKTDATE_1355391648");
      noQuoteEntries_1_1_0.set(CouponPaymentDate_43);
      Instrument_43.insert(CouponPaymentDate_43.getString());
      FIX::CouponRate CouponRate_43;
      CouponRate_43.setString("70.150000");
      noQuoteEntries_1_1_0.set(CouponRate_43);
      Instrument_43.insert(CouponRate_43.getString());
      FIX::CreditRating CreditRating_43("STRING_1218350658");
      noQuoteEntries_1_1_0.set(CreditRating_43);
      Instrument_43.insert(CreditRating_43.getString());
      FIX::DatedDate DatedDate_43("LOCALMKTDATE_839839391");
      noQuoteEntries_1_1_0.set(DatedDate_43);
      Instrument_43.insert(DatedDate_43.getString());
      FIX::DetachmentPoint DetachmentPoint_43;
      DetachmentPoint_43.setString("6.410000");
      noQuoteEntries_1_1_0.set(DetachmentPoint_43);
      Instrument_43.insert(DetachmentPoint_43.getString());
      FIX::EncodedIssuer EncodedIssuer_43("DATA_1090845330");
      noQuoteEntries_1_1_0.set(EncodedIssuer_43);
      Instrument_43.insert(EncodedIssuer_43.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_43(1756073152);
      noQuoteEntries_1_1_0.set(EncodedIssuerLen_43);
      Instrument_43.insert(EncodedIssuerLen_43.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_43("DATA_1974615244");
      noQuoteEntries_1_1_0.set(EncodedSecurityDesc_43);
      Instrument_43.insert(EncodedSecurityDesc_43.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_43(112139863);
      noQuoteEntries_1_1_0.set(EncodedSecurityDescLen_43);
      Instrument_43.insert(EncodedSecurityDescLen_43.getString());
      FIX::ExerciseStyle ExerciseStyle_43(0);
      noQuoteEntries_1_1_0.set(ExerciseStyle_43);
      Instrument_43.insert(ExerciseStyle_43.getString());
      FIX::Factor Factor_43;
      Factor_43.setString("13791987");
      noQuoteEntries_1_1_0.set(Factor_43);
      Instrument_43.insert(Factor_43.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_43(false);
      noQuoteEntries_1_1_0.set(FlexProductEligibilityIndicator_43);
      Instrument_43.insert(FlexProductEligibilityIndicator_43.getString());
      FIX::FlexibleIndicator FlexibleIndicator_43(false);
      noQuoteEntries_1_1_0.set(FlexibleIndicator_43);
      Instrument_43.insert(FlexibleIndicator_43.getString());
      FIX::FloorPrice FloorPrice_43;
      FloorPrice_43.setString("20558853");
      noQuoteEntries_1_1_0.set(FloorPrice_43);
      Instrument_43.insert(FloorPrice_43.getString());
      FIX::FlowScheduleType FlowScheduleType_43(0);
      noQuoteEntries_1_1_0.set(FlowScheduleType_43);
      Instrument_43.insert(FlowScheduleType_43.getString());
      FIX::InstrRegistry InstrRegistry_43("STRING_511568803");
      noQuoteEntries_1_1_0.set(InstrRegistry_43);
      Instrument_43.insert(InstrRegistry_43.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_43('1');
      noQuoteEntries_1_1_0.set(InstrmtAssignmentMethod_43);
      Instrument_43.insert(InstrmtAssignmentMethod_43.getString());
      FIX::InterestAccrualDate InterestAccrualDate_43("LOCALMKTDATE_1043808746");
      noQuoteEntries_1_1_0.set(InterestAccrualDate_43);
      Instrument_43.insert(InterestAccrualDate_43.getString());
      FIX::IssueDate IssueDate_43("LOCALMKTDATE_1048546316");
      noQuoteEntries_1_1_0.set(IssueDate_43);
      Instrument_43.insert(IssueDate_43.getString());
      FIX::Issuer Issuer_43("STRING_1262532740");
      noQuoteEntries_1_1_0.set(Issuer_43);
      Instrument_43.insert(Issuer_43.getString());
      FIX::ListMethod ListMethod_43(0);
      noQuoteEntries_1_1_0.set(ListMethod_43);
      Instrument_43.insert(ListMethod_43.getString());
      FIX::LocaleOfIssue LocaleOfIssue_43("STRING_637760276");
      noQuoteEntries_1_1_0.set(LocaleOfIssue_43);
      Instrument_43.insert(LocaleOfIssue_43.getString());
      FIX::MaturityDate MaturityDate_43("LOCALMKTDATE_2102241800");
      noQuoteEntries_1_1_0.set(MaturityDate_43);
      Instrument_43.insert(MaturityDate_43.getString());
      FIX::MaturityMonthYear MaturityMonthYear_43("MONTHYEAR_2096023966");
      noQuoteEntries_1_1_0.set(MaturityMonthYear_43);
      Instrument_43.insert(MaturityMonthYear_43.getString());
      FIX::MaturityTime MaturityTime_43("TZTIMEONLY_1394955656");
      noQuoteEntries_1_1_0.set(MaturityTime_43);
      Instrument_43.insert(MaturityTime_43.getString());
      FIX::MinPriceIncrement MinPriceIncrement_43;
      MinPriceIncrement_43.setString("20719387");
      noQuoteEntries_1_1_0.set(MinPriceIncrement_43);
      Instrument_43.insert(MinPriceIncrement_43.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_43;
      MinPriceIncrementAmount_43.setString("16517122");
      noQuoteEntries_1_1_0.set(MinPriceIncrementAmount_43);
      Instrument_43.insert(MinPriceIncrementAmount_43.getString());
      FIX::NTPositionLimit NTPositionLimit_43(1009899379);
      noQuoteEntries_1_1_0.set(NTPositionLimit_43);
      Instrument_43.insert(NTPositionLimit_43.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_43;
      NotionalPercentageOutstanding_43.setString("79.380000");
      noQuoteEntries_1_1_0.set(NotionalPercentageOutstanding_43);
      Instrument_43.insert(NotionalPercentageOutstanding_43.getString());
      FIX::OptAttribute OptAttribute_43('1');
      noQuoteEntries_1_1_0.set(OptAttribute_43);
      Instrument_43.insert(OptAttribute_43.getString());
      FIX::OptPayoutAmount OptPayoutAmount_43;
      OptPayoutAmount_43.setString("16929102");
      noQuoteEntries_1_1_0.set(OptPayoutAmount_43);
      Instrument_43.insert(OptPayoutAmount_43.getString());
      FIX::OptPayoutType OptPayoutType_43(3);
      noQuoteEntries_1_1_0.set(OptPayoutType_43);
      Instrument_43.insert(OptPayoutType_43.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_43;
      OriginalNotionalPercentageOutstanding_43.setString("19.270000");
      noQuoteEntries_1_1_0.set(OriginalNotionalPercentageOutstanding_43);
      Instrument_43.insert(OriginalNotionalPercentageOutstanding_43.getString());
      FIX::Pool Pool_43("STRING_763777275");
      noQuoteEntries_1_1_0.set(Pool_43);
      Instrument_43.insert(Pool_43.getString());
      FIX::PositionLimit PositionLimit_43(1400465329);
      noQuoteEntries_1_1_0.set(PositionLimit_43);
      Instrument_43.insert(PositionLimit_43.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_43("STRING_INX");
      noQuoteEntries_1_1_0.set(PriceQuoteMethod_43);
      Instrument_43.insert(PriceQuoteMethod_43.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_43("STRING_1854622606");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasure_43);
      Instrument_43.insert(PriceUnitOfMeasure_43.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_43;
      PriceUnitOfMeasureQty_43.setString("10090548");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasureQty_43);
      Instrument_43.insert(PriceUnitOfMeasureQty_43.getString());
      FIX::Product Product_45(6);
      noQuoteEntries_1_1_0.set(Product_45);
      Instrument_43.insert(Product_45.getString());
      FIX::ProductComplex ProductComplex_43("STRING_1966762469");
      noQuoteEntries_1_1_0.set(ProductComplex_43);
      Instrument_43.insert(ProductComplex_43.getString());
      FIX::PutOrCall PutOrCall_43(1);
      noQuoteEntries_1_1_0.set(PutOrCall_43);
      Instrument_43.insert(PutOrCall_43.getString());
      FIX::RedemptionDate RedemptionDate_43("LOCALMKTDATE_1249969276");
      noQuoteEntries_1_1_0.set(RedemptionDate_43);
      Instrument_43.insert(RedemptionDate_43.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_43("STRING_945114089");
      noQuoteEntries_1_1_0.set(RepoCollateralSecurityType_43);
      Instrument_43.insert(RepoCollateralSecurityType_43.getString());
      FIX::RepurchaseRate RepurchaseRate_43;
      RepurchaseRate_43.setString("96.830000");
      noQuoteEntries_1_1_0.set(RepurchaseRate_43);
      Instrument_43.insert(RepurchaseRate_43.getString());
      FIX::RepurchaseTerm RepurchaseTerm_43(1158371014);
      noQuoteEntries_1_1_0.set(RepurchaseTerm_43);
      Instrument_43.insert(RepurchaseTerm_43.getString());
      FIX::RestructuringType RestructuringType_43("STRING_MM");
      noQuoteEntries_1_1_0.set(RestructuringType_43);
      Instrument_43.insert(RestructuringType_43.getString());
      FIX::SecurityDesc SecurityDesc_43("STRING_942098486");
      noQuoteEntries_1_1_0.set(SecurityDesc_43);
      Instrument_43.insert(SecurityDesc_43.getString());
      FIX::SecurityExchange SecurityExchange_43("EXCHANGE_769121857");
      noQuoteEntries_1_1_0.set(SecurityExchange_43);
      Instrument_43.insert(SecurityExchange_43.getString());
      FIX::SecurityGroup SecurityGroup_43("STRING_1059763832");
      noQuoteEntries_1_1_0.set(SecurityGroup_43);
      Instrument_43.insert(SecurityGroup_43.getString());
      FIX::SecurityID SecurityID_43("STRING_1990644802");
      noQuoteEntries_1_1_0.set(SecurityID_43);
      Instrument_43.insert(SecurityID_43.getString());
      FIX::SecurityIDSource SecurityIDSource_43("STRING_6");
      noQuoteEntries_1_1_0.set(SecurityIDSource_43);
      Instrument_43.insert(SecurityIDSource_43.getString());
      FIX::SecurityStatus SecurityStatus_43("STRING_1");
      noQuoteEntries_1_1_0.set(SecurityStatus_43);
      Instrument_43.insert(SecurityStatus_43.getString());
      FIX::SecuritySubType SecuritySubType_44("STRING_480921430");
      noQuoteEntries_1_1_0.set(SecuritySubType_44);
      Instrument_43.insert(SecuritySubType_44.getString());
      FIX::SecurityType SecurityType_45("STRING_TIPS");
      noQuoteEntries_1_1_0.set(SecurityType_45);
      Instrument_43.insert(SecurityType_45.getString());
      FIX::Seniority Seniority_43("STRING_SB");
      noQuoteEntries_1_1_0.set(Seniority_43);
      Instrument_43.insert(Seniority_43.getString());
      FIX::SettlMethod SettlMethod_43('P');
      noQuoteEntries_1_1_0.set(SettlMethod_43);
      Instrument_43.insert(SettlMethod_43.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_43("STRING_1910867894");
      noQuoteEntries_1_1_0.set(SettleOnOpenFlag_43);
      Instrument_43.insert(SettleOnOpenFlag_43.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_43("STRING_811683794");
      noQuoteEntries_1_1_0.set(StateOrProvinceOfIssue_43);
      Instrument_43.insert(StateOrProvinceOfIssue_43.getString());
      FIX::StrikeCurrency StrikeCurrency_43("JPY");
      noQuoteEntries_1_1_0.set(StrikeCurrency_43);
      Instrument_43.insert(StrikeCurrency_43.getString());
      FIX::StrikeMultiplier StrikeMultiplier_43;
      StrikeMultiplier_43.setString("18888323");
      noQuoteEntries_1_1_0.set(StrikeMultiplier_43);
      Instrument_43.insert(StrikeMultiplier_43.getString());
      FIX::StrikePrice StrikePrice_43;
      StrikePrice_43.setString("2837194");
      noQuoteEntries_1_1_0.set(StrikePrice_43);
      Instrument_43.insert(StrikePrice_43.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_43(3);
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryMethod_43);
      Instrument_43.insert(StrikePriceBoundaryMethod_43.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_43;
      StrikePriceBoundaryPrecision_43.setString("6.340000");
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryPrecision_43);
      Instrument_43.insert(StrikePriceBoundaryPrecision_43.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_43(4);
      noQuoteEntries_1_1_0.set(StrikePriceDeterminationMethod_43);
      Instrument_43.insert(StrikePriceDeterminationMethod_43.getString());
      FIX::StrikeValue StrikeValue_43;
      StrikeValue_43.setString("9297098");
      noQuoteEntries_1_1_0.set(StrikeValue_43);
      Instrument_43.insert(StrikeValue_43.getString());
      FIX::Symbol Symbol_43("STRING_447169555");
      noQuoteEntries_1_1_0.set(Symbol_43);
      Instrument_43.insert(Symbol_43.getString());
      FIX::SymbolSfx SymbolSfx_43("STRING_WI");
      noQuoteEntries_1_1_0.set(SymbolSfx_43);
      Instrument_43.insert(SymbolSfx_43.getString());
      FIX::TimeUnit TimeUnit_43("STRING_Wk");
      noQuoteEntries_1_1_0.set(TimeUnit_43);
      Instrument_43.insert(TimeUnit_43.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_43(2);
      noQuoteEntries_1_1_0.set(UnderlyingPriceDeterminationMethod_43);
      Instrument_43.insert(UnderlyingPriceDeterminationMethod_43.getString());
      FIX::UnitOfMeasure UnitOfMeasure_43("STRING_Gal");
      noQuoteEntries_1_1_0.set(UnitOfMeasure_43);
      Instrument_43.insert(UnitOfMeasure_43.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_43;
      UnitOfMeasureQty_43.setString("200337");
      noQuoteEntries_1_1_0.set(UnitOfMeasureQty_43);
      Instrument_43.insert(UnitOfMeasureQty_43.getString());
      FIX::ValuationMethod ValuationMethod_43("STRING_CDSD");
      noQuoteEntries_1_1_0.set(ValuationMethod_43);
      Instrument_43.insert(ValuationMethod_43.getString());
      all_values.push_back(Instrument_43);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_87;
        FIX::ComplexEventCondition ComplexEventCondition_87(1);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexEventCondition_87.getString());
        FIX::ComplexEventPrice ComplexEventPrice_87;
        ComplexEventPrice_87.setString("5787967");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexEventPrice_87.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_87(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryMethod_87.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_87;
        ComplexEventPriceBoundaryPrecision_87.setString("19.420000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryPrecision_87.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_87(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceTimeType_87.getString());
        FIX::ComplexEventType ComplexEventType_87(4);
        noComplexEvents_1_0_2_0.set(ComplexEventType_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexEventType_87.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_87;
        ComplexOptPayoutAmount_87.setString("12358230");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_87);
        ComplexEvents_NoComplexEvents_87.insert(ComplexOptPayoutAmount_87.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_87);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_181;
          FIX::ComplexEventEndDate ComplexEventEndDate_181(FIX::UTCTIMESTAMP(23, 23, 37, 6, 6, 2010));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_181);
          ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventEndDate_181.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_181(FIX::UTCTIMESTAMP(21, 59, 13, 11, 10, 2014));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_181);
          ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventStartDate_181.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_181);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_362;
            FIX::ComplexEventEndTime ComplexEventEndTime_362(FIX::UTCTIMEONLY(18, 10, 34));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_362);
            ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventEndTime_362.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_362(FIX::UTCTIMEONLY(11, 3, 17));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_362);
            ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventStartTime_362.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_362);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_363;
            FIX::ComplexEventEndTime ComplexEventEndTime_363(FIX::UTCTIMEONLY(2, 15, 42));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventEndTime_363);
            ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventEndTime_363.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_363(FIX::UTCTIMEONLY(21, 11, 36));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventStartTime_363);
            ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventStartTime_363.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_363);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_1);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_78;
        FIX::EventDate EventDate_78("LOCALMKTDATE_574116171");
        noEvents_1_0_2_0.set(EventDate_78);
        EvntGrp_NoEvents_78.insert(EventDate_78.getString());
        FIX::EventPx EventPx_78;
        EventPx_78.setString("20431048");
        noEvents_1_0_2_0.set(EventPx_78);
        EvntGrp_NoEvents_78.insert(EventPx_78.getString());
        FIX::EventText EventText_78("STRING_379383956");
        noEvents_1_0_2_0.set(EventText_78);
        EvntGrp_NoEvents_78.insert(EventText_78.getString());
        FIX::EventTime EventTime_78(FIX::UTCTIMESTAMP(20, 40, 34, 13, 4, 2009));
        noEvents_1_0_2_0.set(EventTime_78);
        EvntGrp_NoEvents_78.insert(EventTime_78.getString());
        FIX::EventType EventType_78(13);
        noEvents_1_0_2_0.set(EventType_78);
        EvntGrp_NoEvents_78.insert(EventType_78.getString());
        all_values.push_back(EvntGrp_NoEvents_78);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_79;
        FIX::EventDate EventDate_79("LOCALMKTDATE_1304146924");
        noEvents_1_0_2_1.set(EventDate_79);
        EvntGrp_NoEvents_79.insert(EventDate_79.getString());
        FIX::EventPx EventPx_79;
        EventPx_79.setString("15945474");
        noEvents_1_0_2_1.set(EventPx_79);
        EvntGrp_NoEvents_79.insert(EventPx_79.getString());
        FIX::EventText EventText_79("STRING_127287066");
        noEvents_1_0_2_1.set(EventText_79);
        EvntGrp_NoEvents_79.insert(EventText_79.getString());
        FIX::EventTime EventTime_79(FIX::UTCTIMESTAMP(22, 16, 59, 15, 5, 2000));
        noEvents_1_0_2_1.set(EventTime_79);
        EvntGrp_NoEvents_79.insert(EventTime_79.getString());
        FIX::EventType EventType_79(17);
        noEvents_1_0_2_1.set(EventType_79);
        EvntGrp_NoEvents_79.insert(EventType_79.getString());
        all_values.push_back(EvntGrp_NoEvents_79);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_80;
        FIX::EventDate EventDate_80("LOCALMKTDATE_777688080");
        noEvents_1_0_2_2.set(EventDate_80);
        EvntGrp_NoEvents_80.insert(EventDate_80.getString());
        FIX::EventPx EventPx_80;
        EventPx_80.setString("4197288");
        noEvents_1_0_2_2.set(EventPx_80);
        EvntGrp_NoEvents_80.insert(EventPx_80.getString());
        FIX::EventText EventText_80("STRING_1344142063");
        noEvents_1_0_2_2.set(EventText_80);
        EvntGrp_NoEvents_80.insert(EventText_80.getString());
        FIX::EventTime EventTime_80(FIX::UTCTIMESTAMP(16, 20, 46, 4, 4, 2007));
        noEvents_1_0_2_2.set(EventTime_80);
        EvntGrp_NoEvents_80.insert(EventTime_80.getString());
        FIX::EventType EventType_80(1);
        noEvents_1_0_2_2.set(EventType_80);
        EvntGrp_NoEvents_80.insert(EventType_80.getString());
        all_values.push_back(EvntGrp_NoEvents_80);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_86;
        FIX::InstrumentPartyID InstrumentPartyID_86("STRING_1997462226");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_86);
        InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyID_86.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_86('1');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_86);
        InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyIDSource_86.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_86(901032675);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_86);
        InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyRole_86.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_86);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168;
          FIX::InstrumentPartySubID InstrumentPartySubID_168("STRING_143019078");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_168);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubID_168.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_168(282466186);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_168);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubIDType_168.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_87;
        FIX::InstrumentPartyID InstrumentPartyID_87("STRING_2132564052");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_87);
        InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyID_87.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_87('8');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_87);
        InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyIDSource_87.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_87(1586613110);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_87);
        InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyRole_87.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_87);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169;
          FIX::InstrumentPartySubID InstrumentPartySubID_169("STRING_135617529");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_169);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubID_169.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_169(965675708);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_169);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubIDType_169.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170;
          FIX::InstrumentPartySubID InstrumentPartySubID_170("STRING_1001007030");
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubID_170);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubID_170.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_170(316161265);
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubIDType_170);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubIDType_170.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_88;
        FIX::InstrumentPartyID InstrumentPartyID_88("STRING_885077699");
        noInstrumentParties_1_0_2_2.set(InstrumentPartyID_88);
        InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyID_88.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_88('9');
        noInstrumentParties_1_0_2_2.set(InstrumentPartyIDSource_88);
        InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyIDSource_88.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_88(569995445);
        noInstrumentParties_1_0_2_2.set(InstrumentPartyRole_88);
        InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyRole_88.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_88);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171;
          FIX::InstrumentPartySubID InstrumentPartySubID_171("STRING_859999637");
          noInstrumentPartySubIDs_1_0_2_3_0.set(InstrumentPartySubID_171);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubID_171.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_171(1347683525);
          noInstrumentPartySubIDs_1_0_2_3_0.set(InstrumentPartySubIDType_171);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubIDType_171.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172;
          FIX::InstrumentPartySubID InstrumentPartySubID_172("STRING_1184973683");
          noInstrumentPartySubIDs_1_0_2_3_1.set(InstrumentPartySubID_172);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubID_172.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_172(56658052);
          noInstrumentPartySubIDs_1_0_2_3_1.set(InstrumentPartySubIDType_172);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubIDType_172.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_78;
        FIX::SecurityAltID SecurityAltID_78("STRING_1344699315");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_78);
        SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltID_78.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_78("STRING_1155338713");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_78);
        SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltIDSource_78.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_78);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_79;
        FIX::SecurityAltID SecurityAltID_79("STRING_1298495718");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_79);
        SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltID_79.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_79("STRING_329027555");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_79);
        SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltIDSource_79.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_79);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_86;
      FIX::SecurityXML SecurityXML_87("XMLDATA_1667253052");
      noQuoteEntries_1_1_0.set(SecurityXML_87);
      FIX::SecurityXMLLen SecurityXMLLen_43(1276703807);
      noQuoteEntries_1_1_0.set(SecurityXMLLen_43);
      FIX::SecurityXMLSchema SecurityXMLSchema_43("STRING_1356460675");
      noQuoteEntries_1_1_0.set(SecurityXMLSchema_43);
      SecurityXML_86.insert(SecurityXMLSchema_43.getString());
      all_values.push_back(SecurityXML_86);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_4;
      FIX::BidForwardPoints BidForwardPoints_12;
      BidForwardPoints_12.setString("4110676");
      noQuoteEntries_1_1_1.set(BidForwardPoints_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BidForwardPoints_12.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_12;
      BidForwardPoints2_12.setString("11266823");
      noQuoteEntries_1_1_1.set(BidForwardPoints2_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BidForwardPoints2_12.getString());
      FIX::BidPx BidPx_12;
      BidPx_12.setString("9664342");
      noQuoteEntries_1_1_1.set(BidPx_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BidPx_12.getString());
      FIX::BidSize BidSize_12;
      BidSize_12.setString("13121003");
      noQuoteEntries_1_1_1.set(BidSize_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BidSize_12.getString());
      FIX::BidSpotRate BidSpotRate_12;
      BidSpotRate_12.setString("8843785");
      noQuoteEntries_1_1_1.set(BidSpotRate_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BidSpotRate_12.getString());
      FIX::BidYield BidYield_12;
      BidYield_12.setString("33.260000");
      noQuoteEntries_1_1_1.set(BidYield_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BidYield_12.getString());
      FIX::BookingType BookingType_19(2);
      noQuoteEntries_1_1_1.set(BookingType_19);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(BookingType_19.getString());
      FIX::Currency Currency_42("USD");
      noQuoteEntries_1_1_1.set(Currency_42);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(Currency_42.getString());
      FIX::MidPx MidPx_12;
      MidPx_12.setString("10336960");
      noQuoteEntries_1_1_1.set(MidPx_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(MidPx_12.getString());
      FIX::MidYield MidYield_12;
      MidYield_12.setString("32.350000");
      noQuoteEntries_1_1_1.set(MidYield_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(MidYield_12.getString());
      FIX::OfferForwardPoints OfferForwardPoints_12;
      OfferForwardPoints_12.setString("12534013");
      noQuoteEntries_1_1_1.set(OfferForwardPoints_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OfferForwardPoints_12.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_12;
      OfferForwardPoints2_12.setString("19993717");
      noQuoteEntries_1_1_1.set(OfferForwardPoints2_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OfferForwardPoints2_12.getString());
      FIX::OfferPx OfferPx_12;
      OfferPx_12.setString("13026102");
      noQuoteEntries_1_1_1.set(OfferPx_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OfferPx_12.getString());
      FIX::OfferSize OfferSize_12;
      OfferSize_12.setString("15695625");
      noQuoteEntries_1_1_1.set(OfferSize_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OfferSize_12.getString());
      FIX::OfferSpotRate OfferSpotRate_12;
      OfferSpotRate_12.setString("7369657");
      noQuoteEntries_1_1_1.set(OfferSpotRate_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OfferSpotRate_12.getString());
      FIX::OfferYield OfferYield_12;
      OfferYield_12.setString("25.870000");
      noQuoteEntries_1_1_1.set(OfferYield_12);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OfferYield_12.getString());
      FIX::OrdType OrdType_45('5');
      noQuoteEntries_1_1_1.set(OrdType_45);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OrdType_45.getString());
      FIX::OrderCapacity OrderCapacity_20('A');
      noQuoteEntries_1_1_1.set(OrderCapacity_20);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OrderCapacity_20.getString());
      FIX::OrderQty2 OrderQty2_13;
      OrderQty2_13.setString("9857422");
      noQuoteEntries_1_1_1.set(OrderQty2_13);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OrderQty2_13.getString());
      FIX::OrderRestrictions OrderRestrictions_17("MULTIPLECHARVALUE_C");
      noQuoteEntries_1_1_1.set(OrderRestrictions_17);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(OrderRestrictions_17.getString());
      FIX::QuoteEntryID QuoteEntryID_15("STRING_539700603");
      noQuoteEntries_1_1_1.set(QuoteEntryID_15);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(QuoteEntryID_15.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_4(1042400277);
      noQuoteEntries_1_1_1.set(QuoteEntryRejectReason_4);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(QuoteEntryRejectReason_4.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_4(12);
      noQuoteEntries_1_1_1.set(QuoteEntryStatus_4);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(QuoteEntryStatus_4.getString());
      FIX::SettlDate SettlDate_35("LOCALMKTDATE_1884399918");
      noQuoteEntries_1_1_1.set(SettlDate_35);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(SettlDate_35.getString());
      FIX::SettlDate2 SettlDate2_13("LOCALMKTDATE_50255342");
      noQuoteEntries_1_1_1.set(SettlDate2_13);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(SettlDate2_13.getString());
      FIX::TradingSessionID TradingSessionID_48("STRING_3");
      noQuoteEntries_1_1_1.set(TradingSessionID_48);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(TradingSessionID_48.getString());
      FIX::TradingSessionSubID TradingSessionSubID_48("STRING_4");
      noQuoteEntries_1_1_1.set(TradingSessionSubID_48);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(TradingSessionSubID_48.getString());
      FIX::TransactTime TransactTime_38(FIX::UTCTIMESTAMP(7, 41, 13, 20, 2, 2009));
      noQuoteEntries_1_1_1.set(TransactTime_38);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(TransactTime_38.getString());
      FIX::ValidUntilTime ValidUntilTime_13(FIX::UTCTIMESTAMP(11, 51, 50, 3, 7, 2013));
      noQuoteEntries_1_1_1.set(ValidUntilTime_13);
      QuotEntryAckGrp_NoQuoteEntries_4.insert(ValidUntilTime_13.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_4);
      all_compo_names.insert("QuotEntryAckGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_82;
        FIX::EncodedLegIssuer EncodedLegIssuer_82("DATA_1625859836");
        noLegs_1_1_2_0.set(EncodedLegIssuer_82);
        InstrumentLeg_82.insert(EncodedLegIssuer_82.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_82(1704160111);
        noLegs_1_1_2_0.set(EncodedLegIssuerLen_82);
        InstrumentLeg_82.insert(EncodedLegIssuerLen_82.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_82("DATA_996588820");
        noLegs_1_1_2_0.set(EncodedLegSecurityDesc_82);
        InstrumentLeg_82.insert(EncodedLegSecurityDesc_82.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_82(215341970);
        noLegs_1_1_2_0.set(EncodedLegSecurityDescLen_82);
        InstrumentLeg_82.insert(EncodedLegSecurityDescLen_82.getString());
        FIX::LegCFICode LegCFICode_82("STRING_1829902699");
        noLegs_1_1_2_0.set(LegCFICode_82);
        InstrumentLeg_82.insert(LegCFICode_82.getString());
        FIX::LegContractMultiplier LegContractMultiplier_82;
        LegContractMultiplier_82.setString("9886632");
        noLegs_1_1_2_0.set(LegContractMultiplier_82);
        InstrumentLeg_82.insert(LegContractMultiplier_82.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_82(1717552538);
        noLegs_1_1_2_0.set(LegContractMultiplierUnit_82);
        InstrumentLeg_82.insert(LegContractMultiplierUnit_82.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_82("MONTHYEAR_668161276");
        noLegs_1_1_2_0.set(LegContractSettlMonth_82);
        InstrumentLeg_82.insert(LegContractSettlMonth_82.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_82("COUNTRY_180937458");
        noLegs_1_1_2_0.set(LegCountryOfIssue_82);
        InstrumentLeg_82.insert(LegCountryOfIssue_82.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_82("LOCALMKTDATE_109769493");
        noLegs_1_1_2_0.set(LegCouponPaymentDate_82);
        InstrumentLeg_82.insert(LegCouponPaymentDate_82.getString());
        FIX::LegCouponRate LegCouponRate_82;
        LegCouponRate_82.setString("15.530000");
        noLegs_1_1_2_0.set(LegCouponRate_82);
        InstrumentLeg_82.insert(LegCouponRate_82.getString());
        FIX::LegCreditRating LegCreditRating_82("STRING_1267615516");
        noLegs_1_1_2_0.set(LegCreditRating_82);
        InstrumentLeg_82.insert(LegCreditRating_82.getString());
        FIX::LegCurrency LegCurrency_82("JPY");
        noLegs_1_1_2_0.set(LegCurrency_82);
        InstrumentLeg_82.insert(LegCurrency_82.getString());
        FIX::LegDatedDate LegDatedDate_82("LOCALMKTDATE_1505305644");
        noLegs_1_1_2_0.set(LegDatedDate_82);
        InstrumentLeg_82.insert(LegDatedDate_82.getString());
        FIX::LegExerciseStyle LegExerciseStyle_82(2060113237);
        noLegs_1_1_2_0.set(LegExerciseStyle_82);
        InstrumentLeg_82.insert(LegExerciseStyle_82.getString());
        FIX::LegFactor LegFactor_82;
        LegFactor_82.setString("13308416");
        noLegs_1_1_2_0.set(LegFactor_82);
        InstrumentLeg_82.insert(LegFactor_82.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_82(872215931);
        noLegs_1_1_2_0.set(LegFlowScheduleType_82);
        InstrumentLeg_82.insert(LegFlowScheduleType_82.getString());
        FIX::LegInstrRegistry LegInstrRegistry_82("STRING_1335034090");
        noLegs_1_1_2_0.set(LegInstrRegistry_82);
        InstrumentLeg_82.insert(LegInstrRegistry_82.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_82("LOCALMKTDATE_1311934088");
        noLegs_1_1_2_0.set(LegInterestAccrualDate_82);
        InstrumentLeg_82.insert(LegInterestAccrualDate_82.getString());
        FIX::LegIssueDate LegIssueDate_82("LOCALMKTDATE_1365808604");
        noLegs_1_1_2_0.set(LegIssueDate_82);
        InstrumentLeg_82.insert(LegIssueDate_82.getString());
        FIX::LegIssuer LegIssuer_82("STRING_1576389191");
        noLegs_1_1_2_0.set(LegIssuer_82);
        InstrumentLeg_82.insert(LegIssuer_82.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_82("STRING_457643259");
        noLegs_1_1_2_0.set(LegLocaleOfIssue_82);
        InstrumentLeg_82.insert(LegLocaleOfIssue_82.getString());
        FIX::LegMaturityDate LegMaturityDate_82("LOCALMKTDATE_596296219");
        noLegs_1_1_2_0.set(LegMaturityDate_82);
        InstrumentLeg_82.insert(LegMaturityDate_82.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_82("MONTHYEAR_779713970");
        noLegs_1_1_2_0.set(LegMaturityMonthYear_82);
        InstrumentLeg_82.insert(LegMaturityMonthYear_82.getString());
        FIX::LegMaturityTime LegMaturityTime_82("TZTIMEONLY_1197918991");
        noLegs_1_1_2_0.set(LegMaturityTime_82);
        InstrumentLeg_82.insert(LegMaturityTime_82.getString());
        FIX::LegOptAttribute LegOptAttribute_82('6');
        noLegs_1_1_2_0.set(LegOptAttribute_82);
        InstrumentLeg_82.insert(LegOptAttribute_82.getString());
        FIX::LegOptionRatio LegOptionRatio_82;
        LegOptionRatio_82.setString("11008225");
        noLegs_1_1_2_0.set(LegOptionRatio_82);
        InstrumentLeg_82.insert(LegOptionRatio_82.getString());
        FIX::LegPool LegPool_82("STRING_824407097");
        noLegs_1_1_2_0.set(LegPool_82);
        InstrumentLeg_82.insert(LegPool_82.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_82("STRING_1097792674");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasure_82);
        InstrumentLeg_82.insert(LegPriceUnitOfMeasure_82.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_82;
        LegPriceUnitOfMeasureQty_82.setString("5278487");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasureQty_82);
        InstrumentLeg_82.insert(LegPriceUnitOfMeasureQty_82.getString());
        FIX::LegProduct LegProduct_82(302783285);
        noLegs_1_1_2_0.set(LegProduct_82);
        InstrumentLeg_82.insert(LegProduct_82.getString());
        FIX::LegPutOrCall LegPutOrCall_82(654469138);
        noLegs_1_1_2_0.set(LegPutOrCall_82);
        InstrumentLeg_82.insert(LegPutOrCall_82.getString());
        FIX::LegRatioQty LegRatioQty_82;
        LegRatioQty_82.setString("15244375");
        noLegs_1_1_2_0.set(LegRatioQty_82);
        InstrumentLeg_82.insert(LegRatioQty_82.getString());
        FIX::LegRedemptionDate LegRedemptionDate_82("LOCALMKTDATE_518125256");
        noLegs_1_1_2_0.set(LegRedemptionDate_82);
        InstrumentLeg_82.insert(LegRedemptionDate_82.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_82("STRING_336888189");
        noLegs_1_1_2_0.set(LegRepoCollateralSecurityType_82);
        InstrumentLeg_82.insert(LegRepoCollateralSecurityType_82.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_82;
        LegRepurchaseRate_82.setString("71.470000");
        noLegs_1_1_2_0.set(LegRepurchaseRate_82);
        InstrumentLeg_82.insert(LegRepurchaseRate_82.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_82(88194146);
        noLegs_1_1_2_0.set(LegRepurchaseTerm_82);
        InstrumentLeg_82.insert(LegRepurchaseTerm_82.getString());
        FIX::LegSecurityDesc LegSecurityDesc_82("STRING_1005049465");
        noLegs_1_1_2_0.set(LegSecurityDesc_82);
        InstrumentLeg_82.insert(LegSecurityDesc_82.getString());
        FIX::LegSecurityExchange LegSecurityExchange_82("EXCHANGE_546554605");
        noLegs_1_1_2_0.set(LegSecurityExchange_82);
        InstrumentLeg_82.insert(LegSecurityExchange_82.getString());
        FIX::LegSecurityID LegSecurityID_82("STRING_197963640");
        noLegs_1_1_2_0.set(LegSecurityID_82);
        InstrumentLeg_82.insert(LegSecurityID_82.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_82("STRING_568127370");
        noLegs_1_1_2_0.set(LegSecurityIDSource_82);
        InstrumentLeg_82.insert(LegSecurityIDSource_82.getString());
        FIX::LegSecuritySubType LegSecuritySubType_82("STRING_1814170122");
        noLegs_1_1_2_0.set(LegSecuritySubType_82);
        InstrumentLeg_82.insert(LegSecuritySubType_82.getString());
        FIX::LegSecurityType LegSecurityType_82("STRING_44649403");
        noLegs_1_1_2_0.set(LegSecurityType_82);
        InstrumentLeg_82.insert(LegSecurityType_82.getString());
        FIX::LegSide LegSide_82('1');
        noLegs_1_1_2_0.set(LegSide_82);
        InstrumentLeg_82.insert(LegSide_82.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_82("STRING_1171992118");
        noLegs_1_1_2_0.set(LegStateOrProvinceOfIssue_82);
        InstrumentLeg_82.insert(LegStateOrProvinceOfIssue_82.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_82("CAN");
        noLegs_1_1_2_0.set(LegStrikeCurrency_82);
        InstrumentLeg_82.insert(LegStrikeCurrency_82.getString());
        FIX::LegStrikePrice LegStrikePrice_82;
        LegStrikePrice_82.setString("20442080");
        noLegs_1_1_2_0.set(LegStrikePrice_82);
        InstrumentLeg_82.insert(LegStrikePrice_82.getString());
        FIX::LegSymbol LegSymbol_82("STRING_1292313082");
        noLegs_1_1_2_0.set(LegSymbol_82);
        InstrumentLeg_82.insert(LegSymbol_82.getString());
        FIX::LegSymbolSfx LegSymbolSfx_82("STRING_676752701");
        noLegs_1_1_2_0.set(LegSymbolSfx_82);
        InstrumentLeg_82.insert(LegSymbolSfx_82.getString());
        FIX::LegTimeUnit LegTimeUnit_82("STRING_1262533006");
        noLegs_1_1_2_0.set(LegTimeUnit_82);
        InstrumentLeg_82.insert(LegTimeUnit_82.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_82("STRING_721218625");
        noLegs_1_1_2_0.set(LegUnitOfMeasure_82);
        InstrumentLeg_82.insert(LegUnitOfMeasure_82.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_82;
        LegUnitOfMeasureQty_82.setString("11343959");
        noLegs_1_1_2_0.set(LegUnitOfMeasureQty_82);
        InstrumentLeg_82.insert(LegUnitOfMeasureQty_82.getString());
        all_values.push_back(InstrumentLeg_82);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_164;
          FIX::LegSecurityAltID LegSecurityAltID_164("STRING_1500932595");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltID_164);
          LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltID_164.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_164("STRING_184831303");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltIDSource_164);
          LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltIDSource_164.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_164);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_165;
          FIX::LegSecurityAltID LegSecurityAltID_165("STRING_407588406");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltID_165);
          LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltID_165.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_165("STRING_454271485");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltIDSource_165);
          LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltIDSource_165.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_165);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_166;
          FIX::LegSecurityAltID LegSecurityAltID_166("STRING_1009238400");
          noLegSecurityAltID_1_1_0_3_2.set(LegSecurityAltID_166);
          LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltID_166.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_166("STRING_1505381080");
          noLegSecurityAltID_1_1_0_3_2.set(LegSecurityAltIDSource_166);
          LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltIDSource_166.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_166);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_83;
        FIX::EncodedLegIssuer EncodedLegIssuer_83("DATA_982120259");
        noLegs_1_1_2_1.set(EncodedLegIssuer_83);
        InstrumentLeg_83.insert(EncodedLegIssuer_83.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_83(1312021686);
        noLegs_1_1_2_1.set(EncodedLegIssuerLen_83);
        InstrumentLeg_83.insert(EncodedLegIssuerLen_83.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_83("DATA_12366570");
        noLegs_1_1_2_1.set(EncodedLegSecurityDesc_83);
        InstrumentLeg_83.insert(EncodedLegSecurityDesc_83.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_83(359074206);
        noLegs_1_1_2_1.set(EncodedLegSecurityDescLen_83);
        InstrumentLeg_83.insert(EncodedLegSecurityDescLen_83.getString());
        FIX::LegCFICode LegCFICode_83("STRING_1830146942");
        noLegs_1_1_2_1.set(LegCFICode_83);
        InstrumentLeg_83.insert(LegCFICode_83.getString());
        FIX::LegContractMultiplier LegContractMultiplier_83;
        LegContractMultiplier_83.setString("3492547");
        noLegs_1_1_2_1.set(LegContractMultiplier_83);
        InstrumentLeg_83.insert(LegContractMultiplier_83.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_83(724691353);
        noLegs_1_1_2_1.set(LegContractMultiplierUnit_83);
        InstrumentLeg_83.insert(LegContractMultiplierUnit_83.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_83("MONTHYEAR_1918341088");
        noLegs_1_1_2_1.set(LegContractSettlMonth_83);
        InstrumentLeg_83.insert(LegContractSettlMonth_83.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_83("COUNTRY_1354304224");
        noLegs_1_1_2_1.set(LegCountryOfIssue_83);
        InstrumentLeg_83.insert(LegCountryOfIssue_83.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_83("LOCALMKTDATE_1271245958");
        noLegs_1_1_2_1.set(LegCouponPaymentDate_83);
        InstrumentLeg_83.insert(LegCouponPaymentDate_83.getString());
        FIX::LegCouponRate LegCouponRate_83;
        LegCouponRate_83.setString("47.280000");
        noLegs_1_1_2_1.set(LegCouponRate_83);
        InstrumentLeg_83.insert(LegCouponRate_83.getString());
        FIX::LegCreditRating LegCreditRating_83("STRING_1922431595");
        noLegs_1_1_2_1.set(LegCreditRating_83);
        InstrumentLeg_83.insert(LegCreditRating_83.getString());
        FIX::LegCurrency LegCurrency_83("JPY");
        noLegs_1_1_2_1.set(LegCurrency_83);
        InstrumentLeg_83.insert(LegCurrency_83.getString());
        FIX::LegDatedDate LegDatedDate_83("LOCALMKTDATE_2103892213");
        noLegs_1_1_2_1.set(LegDatedDate_83);
        InstrumentLeg_83.insert(LegDatedDate_83.getString());
        FIX::LegExerciseStyle LegExerciseStyle_83(2109924551);
        noLegs_1_1_2_1.set(LegExerciseStyle_83);
        InstrumentLeg_83.insert(LegExerciseStyle_83.getString());
        FIX::LegFactor LegFactor_83;
        LegFactor_83.setString("21182331");
        noLegs_1_1_2_1.set(LegFactor_83);
        InstrumentLeg_83.insert(LegFactor_83.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_83(1468710826);
        noLegs_1_1_2_1.set(LegFlowScheduleType_83);
        InstrumentLeg_83.insert(LegFlowScheduleType_83.getString());
        FIX::LegInstrRegistry LegInstrRegistry_83("STRING_2006648953");
        noLegs_1_1_2_1.set(LegInstrRegistry_83);
        InstrumentLeg_83.insert(LegInstrRegistry_83.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_83("LOCALMKTDATE_1263062559");
        noLegs_1_1_2_1.set(LegInterestAccrualDate_83);
        InstrumentLeg_83.insert(LegInterestAccrualDate_83.getString());
        FIX::LegIssueDate LegIssueDate_83("LOCALMKTDATE_2145463527");
        noLegs_1_1_2_1.set(LegIssueDate_83);
        InstrumentLeg_83.insert(LegIssueDate_83.getString());
        FIX::LegIssuer LegIssuer_83("STRING_1121698311");
        noLegs_1_1_2_1.set(LegIssuer_83);
        InstrumentLeg_83.insert(LegIssuer_83.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_83("STRING_1984281184");
        noLegs_1_1_2_1.set(LegLocaleOfIssue_83);
        InstrumentLeg_83.insert(LegLocaleOfIssue_83.getString());
        FIX::LegMaturityDate LegMaturityDate_83("LOCALMKTDATE_1132375840");
        noLegs_1_1_2_1.set(LegMaturityDate_83);
        InstrumentLeg_83.insert(LegMaturityDate_83.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_83("MONTHYEAR_833043888");
        noLegs_1_1_2_1.set(LegMaturityMonthYear_83);
        InstrumentLeg_83.insert(LegMaturityMonthYear_83.getString());
        FIX::LegMaturityTime LegMaturityTime_83("TZTIMEONLY_1337730132");
        noLegs_1_1_2_1.set(LegMaturityTime_83);
        InstrumentLeg_83.insert(LegMaturityTime_83.getString());
        FIX::LegOptAttribute LegOptAttribute_83('1');
        noLegs_1_1_2_1.set(LegOptAttribute_83);
        InstrumentLeg_83.insert(LegOptAttribute_83.getString());
        FIX::LegOptionRatio LegOptionRatio_83;
        LegOptionRatio_83.setString("12406322");
        noLegs_1_1_2_1.set(LegOptionRatio_83);
        InstrumentLeg_83.insert(LegOptionRatio_83.getString());
        FIX::LegPool LegPool_83("STRING_1792001617");
        noLegs_1_1_2_1.set(LegPool_83);
        InstrumentLeg_83.insert(LegPool_83.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_83("STRING_178961896");
        noLegs_1_1_2_1.set(LegPriceUnitOfMeasure_83);
        InstrumentLeg_83.insert(LegPriceUnitOfMeasure_83.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_83;
        LegPriceUnitOfMeasureQty_83.setString("5985297");
        noLegs_1_1_2_1.set(LegPriceUnitOfMeasureQty_83);
        InstrumentLeg_83.insert(LegPriceUnitOfMeasureQty_83.getString());
        FIX::LegProduct LegProduct_83(626638228);
        noLegs_1_1_2_1.set(LegProduct_83);
        InstrumentLeg_83.insert(LegProduct_83.getString());
        FIX::LegPutOrCall LegPutOrCall_83(1490983582);
        noLegs_1_1_2_1.set(LegPutOrCall_83);
        InstrumentLeg_83.insert(LegPutOrCall_83.getString());
        FIX::LegRatioQty LegRatioQty_83;
        LegRatioQty_83.setString("6108962");
        noLegs_1_1_2_1.set(LegRatioQty_83);
        InstrumentLeg_83.insert(LegRatioQty_83.getString());
        FIX::LegRedemptionDate LegRedemptionDate_83("LOCALMKTDATE_985712434");
        noLegs_1_1_2_1.set(LegRedemptionDate_83);
        InstrumentLeg_83.insert(LegRedemptionDate_83.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_83("STRING_1173646876");
        noLegs_1_1_2_1.set(LegRepoCollateralSecurityType_83);
        InstrumentLeg_83.insert(LegRepoCollateralSecurityType_83.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_83;
        LegRepurchaseRate_83.setString("10.560000");
        noLegs_1_1_2_1.set(LegRepurchaseRate_83);
        InstrumentLeg_83.insert(LegRepurchaseRate_83.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_83(1710403787);
        noLegs_1_1_2_1.set(LegRepurchaseTerm_83);
        InstrumentLeg_83.insert(LegRepurchaseTerm_83.getString());
        FIX::LegSecurityDesc LegSecurityDesc_83("STRING_944504316");
        noLegs_1_1_2_1.set(LegSecurityDesc_83);
        InstrumentLeg_83.insert(LegSecurityDesc_83.getString());
        FIX::LegSecurityExchange LegSecurityExchange_83("EXCHANGE_166971633");
        noLegs_1_1_2_1.set(LegSecurityExchange_83);
        InstrumentLeg_83.insert(LegSecurityExchange_83.getString());
        FIX::LegSecurityID LegSecurityID_83("STRING_834166098");
        noLegs_1_1_2_1.set(LegSecurityID_83);
        InstrumentLeg_83.insert(LegSecurityID_83.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_83("STRING_913325397");
        noLegs_1_1_2_1.set(LegSecurityIDSource_83);
        InstrumentLeg_83.insert(LegSecurityIDSource_83.getString());
        FIX::LegSecuritySubType LegSecuritySubType_83("STRING_2089403228");
        noLegs_1_1_2_1.set(LegSecuritySubType_83);
        InstrumentLeg_83.insert(LegSecuritySubType_83.getString());
        FIX::LegSecurityType LegSecurityType_83("STRING_1772098530");
        noLegs_1_1_2_1.set(LegSecurityType_83);
        InstrumentLeg_83.insert(LegSecurityType_83.getString());
        FIX::LegSide LegSide_83('9');
        noLegs_1_1_2_1.set(LegSide_83);
        InstrumentLeg_83.insert(LegSide_83.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_83("STRING_2045811793");
        noLegs_1_1_2_1.set(LegStateOrProvinceOfIssue_83);
        InstrumentLeg_83.insert(LegStateOrProvinceOfIssue_83.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_83("CAN");
        noLegs_1_1_2_1.set(LegStrikeCurrency_83);
        InstrumentLeg_83.insert(LegStrikeCurrency_83.getString());
        FIX::LegStrikePrice LegStrikePrice_83;
        LegStrikePrice_83.setString("13670389");
        noLegs_1_1_2_1.set(LegStrikePrice_83);
        InstrumentLeg_83.insert(LegStrikePrice_83.getString());
        FIX::LegSymbol LegSymbol_83("STRING_1593704738");
        noLegs_1_1_2_1.set(LegSymbol_83);
        InstrumentLeg_83.insert(LegSymbol_83.getString());
        FIX::LegSymbolSfx LegSymbolSfx_83("STRING_13124268");
        noLegs_1_1_2_1.set(LegSymbolSfx_83);
        InstrumentLeg_83.insert(LegSymbolSfx_83.getString());
        FIX::LegTimeUnit LegTimeUnit_83("STRING_1365018851");
        noLegs_1_1_2_1.set(LegTimeUnit_83);
        InstrumentLeg_83.insert(LegTimeUnit_83.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_83("STRING_567919401");
        noLegs_1_1_2_1.set(LegUnitOfMeasure_83);
        InstrumentLeg_83.insert(LegUnitOfMeasure_83.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_83;
        LegUnitOfMeasureQty_83.setString("19974054");
        noLegs_1_1_2_1.set(LegUnitOfMeasureQty_83);
        InstrumentLeg_83.insert(LegUnitOfMeasureQty_83.getString());
        all_values.push_back(InstrumentLeg_83);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_167;
          FIX::LegSecurityAltID LegSecurityAltID_167("STRING_1400963289");
          noLegSecurityAltID_1_1_1_3_0.set(LegSecurityAltID_167);
          LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltID_167.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_167("STRING_1187651937");
          noLegSecurityAltID_1_1_1_3_0.set(LegSecurityAltIDSource_167);
          LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltIDSource_167.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_167);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_1.addGroup(noLegSecurityAltID_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_168;
          FIX::LegSecurityAltID LegSecurityAltID_168("STRING_1667118187");
          noLegSecurityAltID_1_1_1_3_1.set(LegSecurityAltID_168);
          LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltID_168.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_168("STRING_494111935");
          noLegSecurityAltID_1_1_1_3_1.set(LegSecurityAltIDSource_168);
          LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltIDSource_168.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_168);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_1.addGroup(noLegSecurityAltID_1_1_1_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_1);
      }
      // Instrument
      multiset<string> Instrument_44;
      FIX::AttachmentPoint AttachmentPoint_44;
      AttachmentPoint_44.setString("99.060000");
      noQuoteEntries_1_1_1.set(AttachmentPoint_44);
      Instrument_44.insert(AttachmentPoint_44.getString());
      FIX::CFICode CFICode_44("STRING_1846080083");
      noQuoteEntries_1_1_1.set(CFICode_44);
      Instrument_44.insert(CFICode_44.getString());
      FIX::CPProgram CPProgram_44(2);
      noQuoteEntries_1_1_1.set(CPProgram_44);
      Instrument_44.insert(CPProgram_44.getString());
      FIX::CPRegType CPRegType_44("STRING_1458808134");
      noQuoteEntries_1_1_1.set(CPRegType_44);
      Instrument_44.insert(CPRegType_44.getString());
      FIX::CapPrice CapPrice_44;
      CapPrice_44.setString("11895800");
      noQuoteEntries_1_1_1.set(CapPrice_44);
      Instrument_44.insert(CapPrice_44.getString());
      FIX::ContractMultiplier ContractMultiplier_44;
      ContractMultiplier_44.setString("17035379");
      noQuoteEntries_1_1_1.set(ContractMultiplier_44);
      Instrument_44.insert(ContractMultiplier_44.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_44(0);
      noQuoteEntries_1_1_1.set(ContractMultiplierUnit_44);
      Instrument_44.insert(ContractMultiplierUnit_44.getString());
      FIX::ContractSettlMonth ContractSettlMonth_44("MONTHYEAR_215743245");
      noQuoteEntries_1_1_1.set(ContractSettlMonth_44);
      Instrument_44.insert(ContractSettlMonth_44.getString());
      FIX::CountryOfIssue CountryOfIssue_44("COUNTRY_516205367");
      noQuoteEntries_1_1_1.set(CountryOfIssue_44);
      Instrument_44.insert(CountryOfIssue_44.getString());
      FIX::CouponPaymentDate CouponPaymentDate_44("LOCALMKTDATE_2007440708");
      noQuoteEntries_1_1_1.set(CouponPaymentDate_44);
      Instrument_44.insert(CouponPaymentDate_44.getString());
      FIX::CouponRate CouponRate_44;
      CouponRate_44.setString("75.610000");
      noQuoteEntries_1_1_1.set(CouponRate_44);
      Instrument_44.insert(CouponRate_44.getString());
      FIX::CreditRating CreditRating_44("STRING_683177000");
      noQuoteEntries_1_1_1.set(CreditRating_44);
      Instrument_44.insert(CreditRating_44.getString());
      FIX::DatedDate DatedDate_44("LOCALMKTDATE_694123158");
      noQuoteEntries_1_1_1.set(DatedDate_44);
      Instrument_44.insert(DatedDate_44.getString());
      FIX::DetachmentPoint DetachmentPoint_44;
      DetachmentPoint_44.setString("29.580000");
      noQuoteEntries_1_1_1.set(DetachmentPoint_44);
      Instrument_44.insert(DetachmentPoint_44.getString());
      FIX::EncodedIssuer EncodedIssuer_44("DATA_625096580");
      noQuoteEntries_1_1_1.set(EncodedIssuer_44);
      Instrument_44.insert(EncodedIssuer_44.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_44(318738041);
      noQuoteEntries_1_1_1.set(EncodedIssuerLen_44);
      Instrument_44.insert(EncodedIssuerLen_44.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_44("DATA_852885191");
      noQuoteEntries_1_1_1.set(EncodedSecurityDesc_44);
      Instrument_44.insert(EncodedSecurityDesc_44.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_44(523424726);
      noQuoteEntries_1_1_1.set(EncodedSecurityDescLen_44);
      Instrument_44.insert(EncodedSecurityDescLen_44.getString());
      FIX::ExerciseStyle ExerciseStyle_44(2);
      noQuoteEntries_1_1_1.set(ExerciseStyle_44);
      Instrument_44.insert(ExerciseStyle_44.getString());
      FIX::Factor Factor_44;
      Factor_44.setString("17504305");
      noQuoteEntries_1_1_1.set(Factor_44);
      Instrument_44.insert(Factor_44.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_44(true);
      noQuoteEntries_1_1_1.set(FlexProductEligibilityIndicator_44);
      Instrument_44.insert(FlexProductEligibilityIndicator_44.getString());
      FIX::FlexibleIndicator FlexibleIndicator_44(false);
      noQuoteEntries_1_1_1.set(FlexibleIndicator_44);
      Instrument_44.insert(FlexibleIndicator_44.getString());
      FIX::FloorPrice FloorPrice_44;
      FloorPrice_44.setString("17635548");
      noQuoteEntries_1_1_1.set(FloorPrice_44);
      Instrument_44.insert(FloorPrice_44.getString());
      FIX::FlowScheduleType FlowScheduleType_44(1);
      noQuoteEntries_1_1_1.set(FlowScheduleType_44);
      Instrument_44.insert(FlowScheduleType_44.getString());
      FIX::InstrRegistry InstrRegistry_44("STRING_2067417966");
      noQuoteEntries_1_1_1.set(InstrRegistry_44);
      Instrument_44.insert(InstrRegistry_44.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_44('1');
      noQuoteEntries_1_1_1.set(InstrmtAssignmentMethod_44);
      Instrument_44.insert(InstrmtAssignmentMethod_44.getString());
      FIX::InterestAccrualDate InterestAccrualDate_44("LOCALMKTDATE_1457909945");
      noQuoteEntries_1_1_1.set(InterestAccrualDate_44);
      Instrument_44.insert(InterestAccrualDate_44.getString());
      FIX::IssueDate IssueDate_44("LOCALMKTDATE_1320897608");
      noQuoteEntries_1_1_1.set(IssueDate_44);
      Instrument_44.insert(IssueDate_44.getString());
      FIX::Issuer Issuer_44("STRING_653644911");
      noQuoteEntries_1_1_1.set(Issuer_44);
      Instrument_44.insert(Issuer_44.getString());
      FIX::ListMethod ListMethod_44(0);
      noQuoteEntries_1_1_1.set(ListMethod_44);
      Instrument_44.insert(ListMethod_44.getString());
      FIX::LocaleOfIssue LocaleOfIssue_44("STRING_1815009543");
      noQuoteEntries_1_1_1.set(LocaleOfIssue_44);
      Instrument_44.insert(LocaleOfIssue_44.getString());
      FIX::MaturityDate MaturityDate_44("LOCALMKTDATE_1485814817");
      noQuoteEntries_1_1_1.set(MaturityDate_44);
      Instrument_44.insert(MaturityDate_44.getString());
      FIX::MaturityMonthYear MaturityMonthYear_44("MONTHYEAR_676140919");
      noQuoteEntries_1_1_1.set(MaturityMonthYear_44);
      Instrument_44.insert(MaturityMonthYear_44.getString());
      FIX::MaturityTime MaturityTime_44("TZTIMEONLY_760167557");
      noQuoteEntries_1_1_1.set(MaturityTime_44);
      Instrument_44.insert(MaturityTime_44.getString());
      FIX::MinPriceIncrement MinPriceIncrement_44;
      MinPriceIncrement_44.setString("7971393");
      noQuoteEntries_1_1_1.set(MinPriceIncrement_44);
      Instrument_44.insert(MinPriceIncrement_44.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_44;
      MinPriceIncrementAmount_44.setString("18657209");
      noQuoteEntries_1_1_1.set(MinPriceIncrementAmount_44);
      Instrument_44.insert(MinPriceIncrementAmount_44.getString());
      FIX::NTPositionLimit NTPositionLimit_44(316221868);
      noQuoteEntries_1_1_1.set(NTPositionLimit_44);
      Instrument_44.insert(NTPositionLimit_44.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_44;
      NotionalPercentageOutstanding_44.setString("62.250000");
      noQuoteEntries_1_1_1.set(NotionalPercentageOutstanding_44);
      Instrument_44.insert(NotionalPercentageOutstanding_44.getString());
      FIX::OptAttribute OptAttribute_44('2');
      noQuoteEntries_1_1_1.set(OptAttribute_44);
      Instrument_44.insert(OptAttribute_44.getString());
      FIX::OptPayoutAmount OptPayoutAmount_44;
      OptPayoutAmount_44.setString("8324272");
      noQuoteEntries_1_1_1.set(OptPayoutAmount_44);
      Instrument_44.insert(OptPayoutAmount_44.getString());
      FIX::OptPayoutType OptPayoutType_44(2);
      noQuoteEntries_1_1_1.set(OptPayoutType_44);
      Instrument_44.insert(OptPayoutType_44.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_44;
      OriginalNotionalPercentageOutstanding_44.setString("80.940000");
      noQuoteEntries_1_1_1.set(OriginalNotionalPercentageOutstanding_44);
      Instrument_44.insert(OriginalNotionalPercentageOutstanding_44.getString());
      FIX::Pool Pool_44("STRING_1515604236");
      noQuoteEntries_1_1_1.set(Pool_44);
      Instrument_44.insert(Pool_44.getString());
      FIX::PositionLimit PositionLimit_44(1648256444);
      noQuoteEntries_1_1_1.set(PositionLimit_44);
      Instrument_44.insert(PositionLimit_44.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_44("STRING_INX");
      noQuoteEntries_1_1_1.set(PriceQuoteMethod_44);
      Instrument_44.insert(PriceQuoteMethod_44.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_44("STRING_2140700817");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasure_44);
      Instrument_44.insert(PriceUnitOfMeasure_44.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_44;
      PriceUnitOfMeasureQty_44.setString("19669944");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasureQty_44);
      Instrument_44.insert(PriceUnitOfMeasureQty_44.getString());
      FIX::Product Product_46(6);
      noQuoteEntries_1_1_1.set(Product_46);
      Instrument_44.insert(Product_46.getString());
      FIX::ProductComplex ProductComplex_44("STRING_516641895");
      noQuoteEntries_1_1_1.set(ProductComplex_44);
      Instrument_44.insert(ProductComplex_44.getString());
      FIX::PutOrCall PutOrCall_44(1);
      noQuoteEntries_1_1_1.set(PutOrCall_44);
      Instrument_44.insert(PutOrCall_44.getString());
      FIX::RedemptionDate RedemptionDate_44("LOCALMKTDATE_1476149497");
      noQuoteEntries_1_1_1.set(RedemptionDate_44);
      Instrument_44.insert(RedemptionDate_44.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_44("STRING_259621945");
      noQuoteEntries_1_1_1.set(RepoCollateralSecurityType_44);
      Instrument_44.insert(RepoCollateralSecurityType_44.getString());
      FIX::RepurchaseRate RepurchaseRate_44;
      RepurchaseRate_44.setString("32.280000");
      noQuoteEntries_1_1_1.set(RepurchaseRate_44);
      Instrument_44.insert(RepurchaseRate_44.getString());
      FIX::RepurchaseTerm RepurchaseTerm_44(1092220667);
      noQuoteEntries_1_1_1.set(RepurchaseTerm_44);
      Instrument_44.insert(RepurchaseTerm_44.getString());
      FIX::RestructuringType RestructuringType_44("STRING_MM");
      noQuoteEntries_1_1_1.set(RestructuringType_44);
      Instrument_44.insert(RestructuringType_44.getString());
      FIX::SecurityDesc SecurityDesc_44("STRING_1144737547");
      noQuoteEntries_1_1_1.set(SecurityDesc_44);
      Instrument_44.insert(SecurityDesc_44.getString());
      FIX::SecurityExchange SecurityExchange_44("EXCHANGE_558213641");
      noQuoteEntries_1_1_1.set(SecurityExchange_44);
      Instrument_44.insert(SecurityExchange_44.getString());
      FIX::SecurityGroup SecurityGroup_44("STRING_678047143");
      noQuoteEntries_1_1_1.set(SecurityGroup_44);
      Instrument_44.insert(SecurityGroup_44.getString());
      FIX::SecurityID SecurityID_44("STRING_318151507");
      noQuoteEntries_1_1_1.set(SecurityID_44);
      Instrument_44.insert(SecurityID_44.getString());
      FIX::SecurityIDSource SecurityIDSource_44("STRING_G");
      noQuoteEntries_1_1_1.set(SecurityIDSource_44);
      Instrument_44.insert(SecurityIDSource_44.getString());
      FIX::SecurityStatus SecurityStatus_44("STRING_2");
      noQuoteEntries_1_1_1.set(SecurityStatus_44);
      Instrument_44.insert(SecurityStatus_44.getString());
      FIX::SecuritySubType SecuritySubType_45("STRING_2133161050");
      noQuoteEntries_1_1_1.set(SecuritySubType_45);
      Instrument_44.insert(SecuritySubType_45.getString());
      FIX::SecurityType SecurityType_46("STRING_PFAND");
      noQuoteEntries_1_1_1.set(SecurityType_46);
      Instrument_44.insert(SecurityType_46.getString());
      FIX::Seniority Seniority_44("STRING_SR");
      noQuoteEntries_1_1_1.set(Seniority_44);
      Instrument_44.insert(Seniority_44.getString());
      FIX::SettlMethod SettlMethod_44('C');
      noQuoteEntries_1_1_1.set(SettlMethod_44);
      Instrument_44.insert(SettlMethod_44.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_44("STRING_1347329026");
      noQuoteEntries_1_1_1.set(SettleOnOpenFlag_44);
      Instrument_44.insert(SettleOnOpenFlag_44.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_44("STRING_2049969834");
      noQuoteEntries_1_1_1.set(StateOrProvinceOfIssue_44);
      Instrument_44.insert(StateOrProvinceOfIssue_44.getString());
      FIX::StrikeCurrency StrikeCurrency_44("CHF");
      noQuoteEntries_1_1_1.set(StrikeCurrency_44);
      Instrument_44.insert(StrikeCurrency_44.getString());
      FIX::StrikeMultiplier StrikeMultiplier_44;
      StrikeMultiplier_44.setString("19839503");
      noQuoteEntries_1_1_1.set(StrikeMultiplier_44);
      Instrument_44.insert(StrikeMultiplier_44.getString());
      FIX::StrikePrice StrikePrice_44;
      StrikePrice_44.setString("18944940");
      noQuoteEntries_1_1_1.set(StrikePrice_44);
      Instrument_44.insert(StrikePrice_44.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_44(5);
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryMethod_44);
      Instrument_44.insert(StrikePriceBoundaryMethod_44.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_44;
      StrikePriceBoundaryPrecision_44.setString("48.140000");
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryPrecision_44);
      Instrument_44.insert(StrikePriceBoundaryPrecision_44.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_44(2);
      noQuoteEntries_1_1_1.set(StrikePriceDeterminationMethod_44);
      Instrument_44.insert(StrikePriceDeterminationMethod_44.getString());
      FIX::StrikeValue StrikeValue_44;
      StrikeValue_44.setString("7489276");
      noQuoteEntries_1_1_1.set(StrikeValue_44);
      Instrument_44.insert(StrikeValue_44.getString());
      FIX::Symbol Symbol_44("STRING_1951012219");
      noQuoteEntries_1_1_1.set(Symbol_44);
      Instrument_44.insert(Symbol_44.getString());
      FIX::SymbolSfx SymbolSfx_44("STRING_CD");
      noQuoteEntries_1_1_1.set(SymbolSfx_44);
      Instrument_44.insert(SymbolSfx_44.getString());
      FIX::TimeUnit TimeUnit_44("STRING_Min");
      noQuoteEntries_1_1_1.set(TimeUnit_44);
      Instrument_44.insert(TimeUnit_44.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_44(4);
      noQuoteEntries_1_1_1.set(UnderlyingPriceDeterminationMethod_44);
      Instrument_44.insert(UnderlyingPriceDeterminationMethod_44.getString());
      FIX::UnitOfMeasure UnitOfMeasure_44("STRING_MMbbl");
      noQuoteEntries_1_1_1.set(UnitOfMeasure_44);
      Instrument_44.insert(UnitOfMeasure_44.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_44;
      UnitOfMeasureQty_44.setString("2937431");
      noQuoteEntries_1_1_1.set(UnitOfMeasureQty_44);
      Instrument_44.insert(UnitOfMeasureQty_44.getString());
      FIX::ValuationMethod ValuationMethod_44("STRING_FUTDA");
      noQuoteEntries_1_1_1.set(ValuationMethod_44);
      Instrument_44.insert(ValuationMethod_44.getString());
      all_values.push_back(Instrument_44);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_88;
        FIX::ComplexEventCondition ComplexEventCondition_88(1);
        noComplexEvents_1_1_2_0.set(ComplexEventCondition_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexEventCondition_88.getString());
        FIX::ComplexEventPrice ComplexEventPrice_88;
        ComplexEventPrice_88.setString("20976176");
        noComplexEvents_1_1_2_0.set(ComplexEventPrice_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexEventPrice_88.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_88(1);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryMethod_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryMethod_88.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_88;
        ComplexEventPriceBoundaryPrecision_88.setString("3.130000");
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryPrecision_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceBoundaryPrecision_88.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_88(3);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceTimeType_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexEventPriceTimeType_88.getString());
        FIX::ComplexEventType ComplexEventType_88(1);
        noComplexEvents_1_1_2_0.set(ComplexEventType_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexEventType_88.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_88;
        ComplexOptPayoutAmount_88.setString("8339518");
        noComplexEvents_1_1_2_0.set(ComplexOptPayoutAmount_88);
        ComplexEvents_NoComplexEvents_88.insert(ComplexOptPayoutAmount_88.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_88);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_182;
          FIX::ComplexEventEndDate ComplexEventEndDate_182(FIX::UTCTIMESTAMP(14, 25, 2, 6, 12, 2006));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventEndDate_182);
          ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventEndDate_182.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_182(FIX::UTCTIMESTAMP(15, 8, 59, 8, 3, 2002));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventStartDate_182);
          ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventStartDate_182.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_182);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_364;
            FIX::ComplexEventEndTime ComplexEventEndTime_364(FIX::UTCTIMEONLY(22, 55, 52));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventEndTime_364);
            ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventEndTime_364.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_364(FIX::UTCTIMEONLY(16, 41, 9));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventStartTime_364);
            ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventStartTime_364.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_364);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_365;
            FIX::ComplexEventEndTime ComplexEventEndTime_365(FIX::UTCTIMEONLY(17, 50, 19));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventEndTime_365);
            ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventEndTime_365.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_365(FIX::UTCTIMEONLY(18, 19, 17));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventStartTime_365);
            ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventStartTime_365.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_365);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_366;
            FIX::ComplexEventEndTime ComplexEventEndTime_366(FIX::UTCTIMEONLY(10, 42, 3));
            noComplexEventTimes_1_1_0_0_4_2.set(ComplexEventEndTime_366);
            ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventEndTime_366.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_366(FIX::UTCTIMEONLY(18, 44, 39));
            noComplexEventTimes_1_1_0_0_4_2.set(ComplexEventStartTime_366);
            ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventStartTime_366.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_366);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_2);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_183;
          FIX::ComplexEventEndDate ComplexEventEndDate_183(FIX::UTCTIMESTAMP(20, 39, 29, 2, 4, 2016));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventEndDate_183);
          ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventEndDate_183.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_183(FIX::UTCTIMESTAMP(14, 5, 7, 9, 2, 2007));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventStartDate_183);
          ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventStartDate_183.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_183);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_367;
            FIX::ComplexEventEndTime ComplexEventEndTime_367(FIX::UTCTIMEONLY(6, 57, 23));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventEndTime_367);
            ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventEndTime_367.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_367(FIX::UTCTIMEONLY(19, 43, 51));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventStartTime_367);
            ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventStartTime_367.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_367);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_368;
            FIX::ComplexEventEndTime ComplexEventEndTime_368(FIX::UTCTIMEONLY(9, 33, 52));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventEndTime_368);
            ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventEndTime_368.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_368(FIX::UTCTIMEONLY(19, 28, 5));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventStartTime_368);
            ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventStartTime_368.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_368);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_184;
          FIX::ComplexEventEndDate ComplexEventEndDate_184(FIX::UTCTIMESTAMP(12, 36, 41, 2, 8, 2013));
          noComplexEventDates_1_1_0_3_2.set(ComplexEventEndDate_184);
          ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventEndDate_184.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_184(FIX::UTCTIMESTAMP(1, 40, 32, 15, 7, 2009));
          noComplexEventDates_1_1_0_3_2.set(ComplexEventStartDate_184);
          ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventStartDate_184.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_184);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_369;
            FIX::ComplexEventEndTime ComplexEventEndTime_369(FIX::UTCTIMEONLY(8, 7, 45));
            noComplexEventTimes_1_1_0_2_4_0.set(ComplexEventEndTime_369);
            ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventEndTime_369.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_369(FIX::UTCTIMEONLY(2, 20, 44));
            noComplexEventTimes_1_1_0_2_4_0.set(ComplexEventStartTime_369);
            ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventStartTime_369.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_369);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_2.addGroup(noComplexEventTimes_1_1_0_2_4_0);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_89;
        FIX::ComplexEventCondition ComplexEventCondition_89(1);
        noComplexEvents_1_1_2_1.set(ComplexEventCondition_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexEventCondition_89.getString());
        FIX::ComplexEventPrice ComplexEventPrice_89;
        ComplexEventPrice_89.setString("13828435");
        noComplexEvents_1_1_2_1.set(ComplexEventPrice_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexEventPrice_89.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_89(4);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryMethod_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryMethod_89.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_89;
        ComplexEventPriceBoundaryPrecision_89.setString("87.420000");
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryPrecision_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryPrecision_89.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_89(2);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceTimeType_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceTimeType_89.getString());
        FIX::ComplexEventType ComplexEventType_89(9);
        noComplexEvents_1_1_2_1.set(ComplexEventType_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexEventType_89.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_89;
        ComplexOptPayoutAmount_89.setString("2907259");
        noComplexEvents_1_1_2_1.set(ComplexOptPayoutAmount_89);
        ComplexEvents_NoComplexEvents_89.insert(ComplexOptPayoutAmount_89.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_89);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_185;
          FIX::ComplexEventEndDate ComplexEventEndDate_185(FIX::UTCTIMESTAMP(10, 8, 23, 16, 4, 2017));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventEndDate_185);
          ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventEndDate_185.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_185(FIX::UTCTIMESTAMP(21, 39, 22, 0, 2, 2001));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventStartDate_185);
          ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventStartDate_185.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_185);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_370;
            FIX::ComplexEventEndTime ComplexEventEndTime_370(FIX::UTCTIMEONLY(15, 21, 49));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventEndTime_370);
            ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventEndTime_370.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_370(FIX::UTCTIMEONLY(15, 9, 33));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventStartTime_370);
            ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventStartTime_370.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_370);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_371;
            FIX::ComplexEventEndTime ComplexEventEndTime_371(FIX::UTCTIMEONLY(19, 51, 56));
            noComplexEventTimes_1_1_1_0_4_1.set(ComplexEventEndTime_371);
            ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventEndTime_371.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_371(FIX::UTCTIMEONLY(21, 58, 34));
            noComplexEventTimes_1_1_1_0_4_1.set(ComplexEventStartTime_371);
            ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventStartTime_371.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_371);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_372;
            FIX::ComplexEventEndTime ComplexEventEndTime_372(FIX::UTCTIMEONLY(21, 42, 10));
            noComplexEventTimes_1_1_1_0_4_2.set(ComplexEventEndTime_372);
            ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventEndTime_372.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_372(FIX::UTCTIMEONLY(1, 9, 27));
            noComplexEventTimes_1_1_1_0_4_2.set(ComplexEventStartTime_372);
            ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventStartTime_372.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_372);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_2);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_186;
          FIX::ComplexEventEndDate ComplexEventEndDate_186(FIX::UTCTIMESTAMP(5, 49, 46, 18, 1, 2010));
          noComplexEventDates_1_1_1_3_1.set(ComplexEventEndDate_186);
          ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventEndDate_186.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_186(FIX::UTCTIMESTAMP(8, 13, 15, 1, 9, 2016));
          noComplexEventDates_1_1_1_3_1.set(ComplexEventStartDate_186);
          ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventStartDate_186.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_186);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_373;
            FIX::ComplexEventEndTime ComplexEventEndTime_373(FIX::UTCTIMEONLY(11, 26, 22));
            noComplexEventTimes_1_1_1_1_4_0.set(ComplexEventEndTime_373);
            ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventEndTime_373.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_373(FIX::UTCTIMEONLY(15, 20, 55));
            noComplexEventTimes_1_1_1_1_4_0.set(ComplexEventStartTime_373);
            ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventStartTime_373.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_373);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_0);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_90;
        FIX::ComplexEventCondition ComplexEventCondition_90(1);
        noComplexEvents_1_1_2_2.set(ComplexEventCondition_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexEventCondition_90.getString());
        FIX::ComplexEventPrice ComplexEventPrice_90;
        ComplexEventPrice_90.setString("11055233");
        noComplexEvents_1_1_2_2.set(ComplexEventPrice_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexEventPrice_90.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_90(5);
        noComplexEvents_1_1_2_2.set(ComplexEventPriceBoundaryMethod_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryMethod_90.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_90;
        ComplexEventPriceBoundaryPrecision_90.setString("78.760000");
        noComplexEvents_1_1_2_2.set(ComplexEventPriceBoundaryPrecision_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryPrecision_90.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_90(3);
        noComplexEvents_1_1_2_2.set(ComplexEventPriceTimeType_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceTimeType_90.getString());
        FIX::ComplexEventType ComplexEventType_90(6);
        noComplexEvents_1_1_2_2.set(ComplexEventType_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexEventType_90.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_90;
        ComplexOptPayoutAmount_90.setString("19728806");
        noComplexEvents_1_1_2_2.set(ComplexOptPayoutAmount_90);
        ComplexEvents_NoComplexEvents_90.insert(ComplexOptPayoutAmount_90.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_90);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_187;
          FIX::ComplexEventEndDate ComplexEventEndDate_187(FIX::UTCTIMESTAMP(19, 27, 12, 9, 8, 2010));
          noComplexEventDates_1_1_2_3_0.set(ComplexEventEndDate_187);
          ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventEndDate_187.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_187(FIX::UTCTIMESTAMP(15, 10, 14, 12, 7, 2007));
          noComplexEventDates_1_1_2_3_0.set(ComplexEventStartDate_187);
          ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventStartDate_187.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_187);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_374;
            FIX::ComplexEventEndTime ComplexEventEndTime_374(FIX::UTCTIMEONLY(18, 13, 10));
            noComplexEventTimes_1_1_2_0_4_0.set(ComplexEventEndTime_374);
            ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventEndTime_374.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_374(FIX::UTCTIMEONLY(16, 31, 15));
            noComplexEventTimes_1_1_2_0_4_0.set(ComplexEventStartTime_374);
            ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventStartTime_374.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_374);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_375;
            FIX::ComplexEventEndTime ComplexEventEndTime_375(FIX::UTCTIMEONLY(20, 45, 54));
            noComplexEventTimes_1_1_2_0_4_1.set(ComplexEventEndTime_375);
            ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventEndTime_375.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_375(FIX::UTCTIMEONLY(8, 32, 37));
            noComplexEventTimes_1_1_2_0_4_1.set(ComplexEventStartTime_375);
            ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventStartTime_375.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_375);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_376;
            FIX::ComplexEventEndTime ComplexEventEndTime_376(FIX::UTCTIMEONLY(3, 4, 57));
            noComplexEventTimes_1_1_2_0_4_2.set(ComplexEventEndTime_376);
            ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventEndTime_376.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_376(FIX::UTCTIMEONLY(4, 2, 32));
            noComplexEventTimes_1_1_2_0_4_2.set(ComplexEventStartTime_376);
            ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventStartTime_376.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_376);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_2);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_188;
          FIX::ComplexEventEndDate ComplexEventEndDate_188(FIX::UTCTIMESTAMP(12, 39, 48, 6, 11, 2011));
          noComplexEventDates_1_1_2_3_1.set(ComplexEventEndDate_188);
          ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventEndDate_188.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_188(FIX::UTCTIMESTAMP(8, 48, 41, 8, 9, 2004));
          noComplexEventDates_1_1_2_3_1.set(ComplexEventStartDate_188);
          ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventStartDate_188.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_188);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_377;
            FIX::ComplexEventEndTime ComplexEventEndTime_377(FIX::UTCTIMEONLY(13, 29, 44));
            noComplexEventTimes_1_1_2_1_4_0.set(ComplexEventEndTime_377);
            ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventEndTime_377.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_377(FIX::UTCTIMEONLY(1, 17, 38));
            noComplexEventTimes_1_1_2_1_4_0.set(ComplexEventStartTime_377);
            ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventStartTime_377.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_377);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_378;
            FIX::ComplexEventEndTime ComplexEventEndTime_378(FIX::UTCTIMEONLY(12, 34, 24));
            noComplexEventTimes_1_1_2_1_4_1.set(ComplexEventEndTime_378);
            ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventEndTime_378.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_378(FIX::UTCTIMEONLY(2, 18, 50));
            noComplexEventTimes_1_1_2_1_4_1.set(ComplexEventStartTime_378);
            ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventStartTime_378.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_378);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_379;
            FIX::ComplexEventEndTime ComplexEventEndTime_379(FIX::UTCTIMEONLY(22, 21, 38));
            noComplexEventTimes_1_1_2_1_4_2.set(ComplexEventEndTime_379);
            ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventEndTime_379.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_379(FIX::UTCTIMEONLY(7, 13, 27));
            noComplexEventTimes_1_1_2_1_4_2.set(ComplexEventStartTime_379);
            ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventStartTime_379.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_379);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_2);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_189;
          FIX::ComplexEventEndDate ComplexEventEndDate_189(FIX::UTCTIMESTAMP(5, 1, 0, 25, 6, 2014));
          noComplexEventDates_1_1_2_3_2.set(ComplexEventEndDate_189);
          ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventEndDate_189.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_189(FIX::UTCTIMESTAMP(10, 13, 51, 19, 7, 2000));
          noComplexEventDates_1_1_2_3_2.set(ComplexEventStartDate_189);
          ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventStartDate_189.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_189);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_380;
            FIX::ComplexEventEndTime ComplexEventEndTime_380(FIX::UTCTIMEONLY(1, 3, 28));
            noComplexEventTimes_1_1_2_2_4_0.set(ComplexEventEndTime_380);
            ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventEndTime_380.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_380(FIX::UTCTIMEONLY(10, 46, 0));
            noComplexEventTimes_1_1_2_2_4_0.set(ComplexEventStartTime_380);
            ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventStartTime_380.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_380);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_2.addGroup(noComplexEventTimes_1_1_2_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_381;
            FIX::ComplexEventEndTime ComplexEventEndTime_381(FIX::UTCTIMEONLY(12, 21, 38));
            noComplexEventTimes_1_1_2_2_4_1.set(ComplexEventEndTime_381);
            ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventEndTime_381.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_381(FIX::UTCTIMEONLY(20, 51, 16));
            noComplexEventTimes_1_1_2_2_4_1.set(ComplexEventStartTime_381);
            ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventStartTime_381.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_381);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_2.addGroup(noComplexEventTimes_1_1_2_2_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_382;
            FIX::ComplexEventEndTime ComplexEventEndTime_382(FIX::UTCTIMEONLY(8, 17, 16));
            noComplexEventTimes_1_1_2_2_4_2.set(ComplexEventEndTime_382);
            ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventEndTime_382.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_382(FIX::UTCTIMEONLY(15, 0, 8));
            noComplexEventTimes_1_1_2_2_4_2.set(ComplexEventStartTime_382);
            ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventStartTime_382.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_382);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_2.addGroup(noComplexEventTimes_1_1_2_2_4_2);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_81;
        FIX::EventDate EventDate_81("LOCALMKTDATE_1544770325");
        noEvents_1_1_2_0.set(EventDate_81);
        EvntGrp_NoEvents_81.insert(EventDate_81.getString());
        FIX::EventPx EventPx_81;
        EventPx_81.setString("12690206");
        noEvents_1_1_2_0.set(EventPx_81);
        EvntGrp_NoEvents_81.insert(EventPx_81.getString());
        FIX::EventText EventText_81("STRING_291637144");
        noEvents_1_1_2_0.set(EventText_81);
        EvntGrp_NoEvents_81.insert(EventText_81.getString());
        FIX::EventTime EventTime_81(FIX::UTCTIMESTAMP(0, 33, 3, 25, 2, 2002));
        noEvents_1_1_2_0.set(EventTime_81);
        EvntGrp_NoEvents_81.insert(EventTime_81.getString());
        FIX::EventType EventType_81(4);
        noEvents_1_1_2_0.set(EventType_81);
        EvntGrp_NoEvents_81.insert(EventType_81.getString());
        all_values.push_back(EvntGrp_NoEvents_81);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_82;
        FIX::EventDate EventDate_82("LOCALMKTDATE_101632059");
        noEvents_1_1_2_1.set(EventDate_82);
        EvntGrp_NoEvents_82.insert(EventDate_82.getString());
        FIX::EventPx EventPx_82;
        EventPx_82.setString("14276695");
        noEvents_1_1_2_1.set(EventPx_82);
        EvntGrp_NoEvents_82.insert(EventPx_82.getString());
        FIX::EventText EventText_82("STRING_1735091464");
        noEvents_1_1_2_1.set(EventText_82);
        EvntGrp_NoEvents_82.insert(EventText_82.getString());
        FIX::EventTime EventTime_82(FIX::UTCTIMESTAMP(11, 17, 17, 20, 3, 2008));
        noEvents_1_1_2_1.set(EventTime_82);
        EvntGrp_NoEvents_82.insert(EventTime_82.getString());
        FIX::EventType EventType_82(9);
        noEvents_1_1_2_1.set(EventType_82);
        EvntGrp_NoEvents_82.insert(EventType_82.getString());
        all_values.push_back(EvntGrp_NoEvents_82);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_89;
        FIX::InstrumentPartyID InstrumentPartyID_89("STRING_1945601444");
        noInstrumentParties_1_1_2_0.set(InstrumentPartyID_89);
        InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyID_89.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_89('4');
        noInstrumentParties_1_1_2_0.set(InstrumentPartyIDSource_89);
        InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyIDSource_89.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_89(512512226);
        noInstrumentParties_1_1_2_0.set(InstrumentPartyRole_89);
        InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyRole_89.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_89);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173;
          FIX::InstrumentPartySubID InstrumentPartySubID_173("STRING_1153678773");
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubID_173);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubID_173.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_173(15843138);
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubIDType_173);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubIDType_173.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174;
          FIX::InstrumentPartySubID InstrumentPartySubID_174("STRING_1028001825");
          noInstrumentPartySubIDs_1_1_0_3_1.set(InstrumentPartySubID_174);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubID_174.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_174(43298918);
          noInstrumentPartySubIDs_1_1_0_3_1.set(InstrumentPartySubIDType_174);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubIDType_174.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_80;
        FIX::SecurityAltID SecurityAltID_80("STRING_149538876");
        noSecurityAltID_1_1_2_0.set(SecurityAltID_80);
        SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltID_80.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_80("STRING_334936063");
        noSecurityAltID_1_1_2_0.set(SecurityAltIDSource_80);
        SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltIDSource_80.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_80);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_81;
        FIX::SecurityAltID SecurityAltID_81("STRING_811062906");
        noSecurityAltID_1_1_2_1.set(SecurityAltID_81);
        SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltID_81.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_81("STRING_1835358036");
        noSecurityAltID_1_1_2_1.set(SecurityAltIDSource_81);
        SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltIDSource_81.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_82;
        FIX::SecurityAltID SecurityAltID_82("STRING_1091498416");
        noSecurityAltID_1_1_2_2.set(SecurityAltID_82);
        SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltID_82.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_82("STRING_599720461");
        noSecurityAltID_1_1_2_2.set(SecurityAltIDSource_82);
        SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltIDSource_82.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_88;
      FIX::SecurityXML SecurityXML_89("XMLDATA_809469741");
      noQuoteEntries_1_1_1.set(SecurityXML_89);
      FIX::SecurityXMLLen SecurityXMLLen_44(1058623305);
      noQuoteEntries_1_1_1.set(SecurityXMLLen_44);
      FIX::SecurityXMLSchema SecurityXMLSchema_44("STRING_574896445");
      noQuoteEntries_1_1_1.set(SecurityXMLSchema_44);
      SecurityXML_88.insert(SecurityXMLSchema_44.getString());
      all_values.push_back(SecurityXML_88);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_2;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_5;
      FIX::BidForwardPoints BidForwardPoints_13;
      BidForwardPoints_13.setString("12320365");
      noQuoteEntries_1_1_2.set(BidForwardPoints_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BidForwardPoints_13.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_13;
      BidForwardPoints2_13.setString("11602553");
      noQuoteEntries_1_1_2.set(BidForwardPoints2_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BidForwardPoints2_13.getString());
      FIX::BidPx BidPx_13;
      BidPx_13.setString("20025660");
      noQuoteEntries_1_1_2.set(BidPx_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BidPx_13.getString());
      FIX::BidSize BidSize_13;
      BidSize_13.setString("8196443");
      noQuoteEntries_1_1_2.set(BidSize_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BidSize_13.getString());
      FIX::BidSpotRate BidSpotRate_13;
      BidSpotRate_13.setString("12532278");
      noQuoteEntries_1_1_2.set(BidSpotRate_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BidSpotRate_13.getString());
      FIX::BidYield BidYield_13;
      BidYield_13.setString("5.190000");
      noQuoteEntries_1_1_2.set(BidYield_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BidYield_13.getString());
      FIX::BookingType BookingType_20(2);
      noQuoteEntries_1_1_2.set(BookingType_20);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(BookingType_20.getString());
      FIX::Currency Currency_43("EUR");
      noQuoteEntries_1_1_2.set(Currency_43);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(Currency_43.getString());
      FIX::MidPx MidPx_13;
      MidPx_13.setString("11061825");
      noQuoteEntries_1_1_2.set(MidPx_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(MidPx_13.getString());
      FIX::MidYield MidYield_13;
      MidYield_13.setString("45.800000");
      noQuoteEntries_1_1_2.set(MidYield_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(MidYield_13.getString());
      FIX::OfferForwardPoints OfferForwardPoints_13;
      OfferForwardPoints_13.setString("15964017");
      noQuoteEntries_1_1_2.set(OfferForwardPoints_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OfferForwardPoints_13.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_13;
      OfferForwardPoints2_13.setString("8065556");
      noQuoteEntries_1_1_2.set(OfferForwardPoints2_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OfferForwardPoints2_13.getString());
      FIX::OfferPx OfferPx_13;
      OfferPx_13.setString("14067223");
      noQuoteEntries_1_1_2.set(OfferPx_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OfferPx_13.getString());
      FIX::OfferSize OfferSize_13;
      OfferSize_13.setString("20653820");
      noQuoteEntries_1_1_2.set(OfferSize_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OfferSize_13.getString());
      FIX::OfferSpotRate OfferSpotRate_13;
      OfferSpotRate_13.setString("13190678");
      noQuoteEntries_1_1_2.set(OfferSpotRate_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OfferSpotRate_13.getString());
      FIX::OfferYield OfferYield_13;
      OfferYield_13.setString("52.330000");
      noQuoteEntries_1_1_2.set(OfferYield_13);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OfferYield_13.getString());
      FIX::OrdType OrdType_46('P');
      noQuoteEntries_1_1_2.set(OrdType_46);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OrdType_46.getString());
      FIX::OrderCapacity OrderCapacity_21('I');
      noQuoteEntries_1_1_2.set(OrderCapacity_21);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OrderCapacity_21.getString());
      FIX::OrderQty2 OrderQty2_14;
      OrderQty2_14.setString("9227034");
      noQuoteEntries_1_1_2.set(OrderQty2_14);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OrderQty2_14.getString());
      FIX::OrderRestrictions OrderRestrictions_18("MULTIPLECHARVALUE_2");
      noQuoteEntries_1_1_2.set(OrderRestrictions_18);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(OrderRestrictions_18.getString());
      FIX::QuoteEntryID QuoteEntryID_16("STRING_748040801");
      noQuoteEntries_1_1_2.set(QuoteEntryID_16);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(QuoteEntryID_16.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_5(1072242287);
      noQuoteEntries_1_1_2.set(QuoteEntryRejectReason_5);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(QuoteEntryRejectReason_5.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_5(16);
      noQuoteEntries_1_1_2.set(QuoteEntryStatus_5);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(QuoteEntryStatus_5.getString());
      FIX::SettlDate SettlDate_36("LOCALMKTDATE_1559103707");
      noQuoteEntries_1_1_2.set(SettlDate_36);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(SettlDate_36.getString());
      FIX::SettlDate2 SettlDate2_14("LOCALMKTDATE_760116675");
      noQuoteEntries_1_1_2.set(SettlDate2_14);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(SettlDate2_14.getString());
      FIX::TradingSessionID TradingSessionID_49("STRING_5");
      noQuoteEntries_1_1_2.set(TradingSessionID_49);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(TradingSessionID_49.getString());
      FIX::TradingSessionSubID TradingSessionSubID_49("STRING_4");
      noQuoteEntries_1_1_2.set(TradingSessionSubID_49);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(TradingSessionSubID_49.getString());
      FIX::TransactTime TransactTime_39(FIX::UTCTIMESTAMP(14, 6, 54, 6, 11, 2015));
      noQuoteEntries_1_1_2.set(TransactTime_39);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(TransactTime_39.getString());
      FIX::ValidUntilTime ValidUntilTime_14(FIX::UTCTIMESTAMP(1, 45, 10, 20, 11, 2005));
      noQuoteEntries_1_1_2.set(ValidUntilTime_14);
      QuotEntryAckGrp_NoQuoteEntries_5.insert(ValidUntilTime_14.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_5);
      all_compo_names.insert("QuotEntryAckGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_84;
        FIX::EncodedLegIssuer EncodedLegIssuer_84("DATA_921507952");
        noLegs_1_2_2_0.set(EncodedLegIssuer_84);
        InstrumentLeg_84.insert(EncodedLegIssuer_84.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_84(16652471);
        noLegs_1_2_2_0.set(EncodedLegIssuerLen_84);
        InstrumentLeg_84.insert(EncodedLegIssuerLen_84.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_84("DATA_192577917");
        noLegs_1_2_2_0.set(EncodedLegSecurityDesc_84);
        InstrumentLeg_84.insert(EncodedLegSecurityDesc_84.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_84(93092153);
        noLegs_1_2_2_0.set(EncodedLegSecurityDescLen_84);
        InstrumentLeg_84.insert(EncodedLegSecurityDescLen_84.getString());
        FIX::LegCFICode LegCFICode_84("STRING_2058837705");
        noLegs_1_2_2_0.set(LegCFICode_84);
        InstrumentLeg_84.insert(LegCFICode_84.getString());
        FIX::LegContractMultiplier LegContractMultiplier_84;
        LegContractMultiplier_84.setString("12641551");
        noLegs_1_2_2_0.set(LegContractMultiplier_84);
        InstrumentLeg_84.insert(LegContractMultiplier_84.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_84(1428003139);
        noLegs_1_2_2_0.set(LegContractMultiplierUnit_84);
        InstrumentLeg_84.insert(LegContractMultiplierUnit_84.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_84("MONTHYEAR_834057467");
        noLegs_1_2_2_0.set(LegContractSettlMonth_84);
        InstrumentLeg_84.insert(LegContractSettlMonth_84.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_84("COUNTRY_231547633");
        noLegs_1_2_2_0.set(LegCountryOfIssue_84);
        InstrumentLeg_84.insert(LegCountryOfIssue_84.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_84("LOCALMKTDATE_28560293");
        noLegs_1_2_2_0.set(LegCouponPaymentDate_84);
        InstrumentLeg_84.insert(LegCouponPaymentDate_84.getString());
        FIX::LegCouponRate LegCouponRate_84;
        LegCouponRate_84.setString("97.540000");
        noLegs_1_2_2_0.set(LegCouponRate_84);
        InstrumentLeg_84.insert(LegCouponRate_84.getString());
        FIX::LegCreditRating LegCreditRating_84("STRING_1681359837");
        noLegs_1_2_2_0.set(LegCreditRating_84);
        InstrumentLeg_84.insert(LegCreditRating_84.getString());
        FIX::LegCurrency LegCurrency_84("USD");
        noLegs_1_2_2_0.set(LegCurrency_84);
        InstrumentLeg_84.insert(LegCurrency_84.getString());
        FIX::LegDatedDate LegDatedDate_84("LOCALMKTDATE_2075186809");
        noLegs_1_2_2_0.set(LegDatedDate_84);
        InstrumentLeg_84.insert(LegDatedDate_84.getString());
        FIX::LegExerciseStyle LegExerciseStyle_84(1599004521);
        noLegs_1_2_2_0.set(LegExerciseStyle_84);
        InstrumentLeg_84.insert(LegExerciseStyle_84.getString());
        FIX::LegFactor LegFactor_84;
        LegFactor_84.setString("20885191");
        noLegs_1_2_2_0.set(LegFactor_84);
        InstrumentLeg_84.insert(LegFactor_84.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_84(1380153439);
        noLegs_1_2_2_0.set(LegFlowScheduleType_84);
        InstrumentLeg_84.insert(LegFlowScheduleType_84.getString());
        FIX::LegInstrRegistry LegInstrRegistry_84("STRING_37757840");
        noLegs_1_2_2_0.set(LegInstrRegistry_84);
        InstrumentLeg_84.insert(LegInstrRegistry_84.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_84("LOCALMKTDATE_595174865");
        noLegs_1_2_2_0.set(LegInterestAccrualDate_84);
        InstrumentLeg_84.insert(LegInterestAccrualDate_84.getString());
        FIX::LegIssueDate LegIssueDate_84("LOCALMKTDATE_1845375434");
        noLegs_1_2_2_0.set(LegIssueDate_84);
        InstrumentLeg_84.insert(LegIssueDate_84.getString());
        FIX::LegIssuer LegIssuer_84("STRING_479077194");
        noLegs_1_2_2_0.set(LegIssuer_84);
        InstrumentLeg_84.insert(LegIssuer_84.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_84("STRING_2068958540");
        noLegs_1_2_2_0.set(LegLocaleOfIssue_84);
        InstrumentLeg_84.insert(LegLocaleOfIssue_84.getString());
        FIX::LegMaturityDate LegMaturityDate_84("LOCALMKTDATE_1416341644");
        noLegs_1_2_2_0.set(LegMaturityDate_84);
        InstrumentLeg_84.insert(LegMaturityDate_84.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_84("MONTHYEAR_428223420");
        noLegs_1_2_2_0.set(LegMaturityMonthYear_84);
        InstrumentLeg_84.insert(LegMaturityMonthYear_84.getString());
        FIX::LegMaturityTime LegMaturityTime_84("TZTIMEONLY_1077728277");
        noLegs_1_2_2_0.set(LegMaturityTime_84);
        InstrumentLeg_84.insert(LegMaturityTime_84.getString());
        FIX::LegOptAttribute LegOptAttribute_84('5');
        noLegs_1_2_2_0.set(LegOptAttribute_84);
        InstrumentLeg_84.insert(LegOptAttribute_84.getString());
        FIX::LegOptionRatio LegOptionRatio_84;
        LegOptionRatio_84.setString("12539847");
        noLegs_1_2_2_0.set(LegOptionRatio_84);
        InstrumentLeg_84.insert(LegOptionRatio_84.getString());
        FIX::LegPool LegPool_84("STRING_1192680607");
        noLegs_1_2_2_0.set(LegPool_84);
        InstrumentLeg_84.insert(LegPool_84.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_84("STRING_1322564549");
        noLegs_1_2_2_0.set(LegPriceUnitOfMeasure_84);
        InstrumentLeg_84.insert(LegPriceUnitOfMeasure_84.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_84;
        LegPriceUnitOfMeasureQty_84.setString("15286642");
        noLegs_1_2_2_0.set(LegPriceUnitOfMeasureQty_84);
        InstrumentLeg_84.insert(LegPriceUnitOfMeasureQty_84.getString());
        FIX::LegProduct LegProduct_84(2114188560);
        noLegs_1_2_2_0.set(LegProduct_84);
        InstrumentLeg_84.insert(LegProduct_84.getString());
        FIX::LegPutOrCall LegPutOrCall_84(1339217021);
        noLegs_1_2_2_0.set(LegPutOrCall_84);
        InstrumentLeg_84.insert(LegPutOrCall_84.getString());
        FIX::LegRatioQty LegRatioQty_84;
        LegRatioQty_84.setString("17212421");
        noLegs_1_2_2_0.set(LegRatioQty_84);
        InstrumentLeg_84.insert(LegRatioQty_84.getString());
        FIX::LegRedemptionDate LegRedemptionDate_84("LOCALMKTDATE_59797065");
        noLegs_1_2_2_0.set(LegRedemptionDate_84);
        InstrumentLeg_84.insert(LegRedemptionDate_84.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_84("STRING_1250571078");
        noLegs_1_2_2_0.set(LegRepoCollateralSecurityType_84);
        InstrumentLeg_84.insert(LegRepoCollateralSecurityType_84.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_84;
        LegRepurchaseRate_84.setString("36.740000");
        noLegs_1_2_2_0.set(LegRepurchaseRate_84);
        InstrumentLeg_84.insert(LegRepurchaseRate_84.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_84(1487800204);
        noLegs_1_2_2_0.set(LegRepurchaseTerm_84);
        InstrumentLeg_84.insert(LegRepurchaseTerm_84.getString());
        FIX::LegSecurityDesc LegSecurityDesc_84("STRING_2084628545");
        noLegs_1_2_2_0.set(LegSecurityDesc_84);
        InstrumentLeg_84.insert(LegSecurityDesc_84.getString());
        FIX::LegSecurityExchange LegSecurityExchange_84("EXCHANGE_1069461307");
        noLegs_1_2_2_0.set(LegSecurityExchange_84);
        InstrumentLeg_84.insert(LegSecurityExchange_84.getString());
        FIX::LegSecurityID LegSecurityID_84("STRING_1516360497");
        noLegs_1_2_2_0.set(LegSecurityID_84);
        InstrumentLeg_84.insert(LegSecurityID_84.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_84("STRING_1843444652");
        noLegs_1_2_2_0.set(LegSecurityIDSource_84);
        InstrumentLeg_84.insert(LegSecurityIDSource_84.getString());
        FIX::LegSecuritySubType LegSecuritySubType_84("STRING_603337496");
        noLegs_1_2_2_0.set(LegSecuritySubType_84);
        InstrumentLeg_84.insert(LegSecuritySubType_84.getString());
        FIX::LegSecurityType LegSecurityType_84("STRING_956540850");
        noLegs_1_2_2_0.set(LegSecurityType_84);
        InstrumentLeg_84.insert(LegSecurityType_84.getString());
        FIX::LegSide LegSide_84('2');
        noLegs_1_2_2_0.set(LegSide_84);
        InstrumentLeg_84.insert(LegSide_84.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_84("STRING_531040657");
        noLegs_1_2_2_0.set(LegStateOrProvinceOfIssue_84);
        InstrumentLeg_84.insert(LegStateOrProvinceOfIssue_84.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_84("CAN");
        noLegs_1_2_2_0.set(LegStrikeCurrency_84);
        InstrumentLeg_84.insert(LegStrikeCurrency_84.getString());
        FIX::LegStrikePrice LegStrikePrice_84;
        LegStrikePrice_84.setString("19111940");
        noLegs_1_2_2_0.set(LegStrikePrice_84);
        InstrumentLeg_84.insert(LegStrikePrice_84.getString());
        FIX::LegSymbol LegSymbol_84("STRING_445819563");
        noLegs_1_2_2_0.set(LegSymbol_84);
        InstrumentLeg_84.insert(LegSymbol_84.getString());
        FIX::LegSymbolSfx LegSymbolSfx_84("STRING_751104202");
        noLegs_1_2_2_0.set(LegSymbolSfx_84);
        InstrumentLeg_84.insert(LegSymbolSfx_84.getString());
        FIX::LegTimeUnit LegTimeUnit_84("STRING_1609085883");
        noLegs_1_2_2_0.set(LegTimeUnit_84);
        InstrumentLeg_84.insert(LegTimeUnit_84.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_84("STRING_924896758");
        noLegs_1_2_2_0.set(LegUnitOfMeasure_84);
        InstrumentLeg_84.insert(LegUnitOfMeasure_84.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_84;
        LegUnitOfMeasureQty_84.setString("6725790");
        noLegs_1_2_2_0.set(LegUnitOfMeasureQty_84);
        InstrumentLeg_84.insert(LegUnitOfMeasureQty_84.getString());
        all_values.push_back(InstrumentLeg_84);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_169;
          FIX::LegSecurityAltID LegSecurityAltID_169("STRING_1353120178");
          noLegSecurityAltID_1_2_0_3_0.set(LegSecurityAltID_169);
          LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltID_169.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_169("STRING_1750307371");
          noLegSecurityAltID_1_2_0_3_0.set(LegSecurityAltIDSource_169);
          LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltIDSource_169.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_169);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_170;
          FIX::LegSecurityAltID LegSecurityAltID_170("STRING_1443094685");
          noLegSecurityAltID_1_2_0_3_1.set(LegSecurityAltID_170);
          LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltID_170.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_170("STRING_459621326");
          noLegSecurityAltID_1_2_0_3_1.set(LegSecurityAltIDSource_170);
          LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltIDSource_170.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_170);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_171;
          FIX::LegSecurityAltID LegSecurityAltID_171("STRING_795504331");
          noLegSecurityAltID_1_2_0_3_2.set(LegSecurityAltID_171);
          LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltID_171.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_171("STRING_618175587");
          noLegSecurityAltID_1_2_0_3_2.set(LegSecurityAltIDSource_171);
          LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltIDSource_171.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_171);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_85;
        FIX::EncodedLegIssuer EncodedLegIssuer_85("DATA_1988285591");
        noLegs_1_2_2_1.set(EncodedLegIssuer_85);
        InstrumentLeg_85.insert(EncodedLegIssuer_85.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_85(762209243);
        noLegs_1_2_2_1.set(EncodedLegIssuerLen_85);
        InstrumentLeg_85.insert(EncodedLegIssuerLen_85.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_85("DATA_1957392608");
        noLegs_1_2_2_1.set(EncodedLegSecurityDesc_85);
        InstrumentLeg_85.insert(EncodedLegSecurityDesc_85.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_85(1562044125);
        noLegs_1_2_2_1.set(EncodedLegSecurityDescLen_85);
        InstrumentLeg_85.insert(EncodedLegSecurityDescLen_85.getString());
        FIX::LegCFICode LegCFICode_85("STRING_822006308");
        noLegs_1_2_2_1.set(LegCFICode_85);
        InstrumentLeg_85.insert(LegCFICode_85.getString());
        FIX::LegContractMultiplier LegContractMultiplier_85;
        LegContractMultiplier_85.setString("10604800");
        noLegs_1_2_2_1.set(LegContractMultiplier_85);
        InstrumentLeg_85.insert(LegContractMultiplier_85.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_85(252474151);
        noLegs_1_2_2_1.set(LegContractMultiplierUnit_85);
        InstrumentLeg_85.insert(LegContractMultiplierUnit_85.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_85("MONTHYEAR_162322864");
        noLegs_1_2_2_1.set(LegContractSettlMonth_85);
        InstrumentLeg_85.insert(LegContractSettlMonth_85.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_85("COUNTRY_997624935");
        noLegs_1_2_2_1.set(LegCountryOfIssue_85);
        InstrumentLeg_85.insert(LegCountryOfIssue_85.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_85("LOCALMKTDATE_1321935458");
        noLegs_1_2_2_1.set(LegCouponPaymentDate_85);
        InstrumentLeg_85.insert(LegCouponPaymentDate_85.getString());
        FIX::LegCouponRate LegCouponRate_85;
        LegCouponRate_85.setString("33.620000");
        noLegs_1_2_2_1.set(LegCouponRate_85);
        InstrumentLeg_85.insert(LegCouponRate_85.getString());
        FIX::LegCreditRating LegCreditRating_85("STRING_693585939");
        noLegs_1_2_2_1.set(LegCreditRating_85);
        InstrumentLeg_85.insert(LegCreditRating_85.getString());
        FIX::LegCurrency LegCurrency_85("USD");
        noLegs_1_2_2_1.set(LegCurrency_85);
        InstrumentLeg_85.insert(LegCurrency_85.getString());
        FIX::LegDatedDate LegDatedDate_85("LOCALMKTDATE_908479725");
        noLegs_1_2_2_1.set(LegDatedDate_85);
        InstrumentLeg_85.insert(LegDatedDate_85.getString());
        FIX::LegExerciseStyle LegExerciseStyle_85(308829963);
        noLegs_1_2_2_1.set(LegExerciseStyle_85);
        InstrumentLeg_85.insert(LegExerciseStyle_85.getString());
        FIX::LegFactor LegFactor_85;
        LegFactor_85.setString("8958022");
        noLegs_1_2_2_1.set(LegFactor_85);
        InstrumentLeg_85.insert(LegFactor_85.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_85(1064409062);
        noLegs_1_2_2_1.set(LegFlowScheduleType_85);
        InstrumentLeg_85.insert(LegFlowScheduleType_85.getString());
        FIX::LegInstrRegistry LegInstrRegistry_85("STRING_72540412");
        noLegs_1_2_2_1.set(LegInstrRegistry_85);
        InstrumentLeg_85.insert(LegInstrRegistry_85.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_85("LOCALMKTDATE_1341621851");
        noLegs_1_2_2_1.set(LegInterestAccrualDate_85);
        InstrumentLeg_85.insert(LegInterestAccrualDate_85.getString());
        FIX::LegIssueDate LegIssueDate_85("LOCALMKTDATE_1815513264");
        noLegs_1_2_2_1.set(LegIssueDate_85);
        InstrumentLeg_85.insert(LegIssueDate_85.getString());
        FIX::LegIssuer LegIssuer_85("STRING_1681626295");
        noLegs_1_2_2_1.set(LegIssuer_85);
        InstrumentLeg_85.insert(LegIssuer_85.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_85("STRING_119034961");
        noLegs_1_2_2_1.set(LegLocaleOfIssue_85);
        InstrumentLeg_85.insert(LegLocaleOfIssue_85.getString());
        FIX::LegMaturityDate LegMaturityDate_85("LOCALMKTDATE_340608710");
        noLegs_1_2_2_1.set(LegMaturityDate_85);
        InstrumentLeg_85.insert(LegMaturityDate_85.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_85("MONTHYEAR_412086526");
        noLegs_1_2_2_1.set(LegMaturityMonthYear_85);
        InstrumentLeg_85.insert(LegMaturityMonthYear_85.getString());
        FIX::LegMaturityTime LegMaturityTime_85("TZTIMEONLY_1472155139");
        noLegs_1_2_2_1.set(LegMaturityTime_85);
        InstrumentLeg_85.insert(LegMaturityTime_85.getString());
        FIX::LegOptAttribute LegOptAttribute_85('2');
        noLegs_1_2_2_1.set(LegOptAttribute_85);
        InstrumentLeg_85.insert(LegOptAttribute_85.getString());
        FIX::LegOptionRatio LegOptionRatio_85;
        LegOptionRatio_85.setString("18551812");
        noLegs_1_2_2_1.set(LegOptionRatio_85);
        InstrumentLeg_85.insert(LegOptionRatio_85.getString());
        FIX::LegPool LegPool_85("STRING_1931776465");
        noLegs_1_2_2_1.set(LegPool_85);
        InstrumentLeg_85.insert(LegPool_85.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_85("STRING_738936765");
        noLegs_1_2_2_1.set(LegPriceUnitOfMeasure_85);
        InstrumentLeg_85.insert(LegPriceUnitOfMeasure_85.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_85;
        LegPriceUnitOfMeasureQty_85.setString("3258731");
        noLegs_1_2_2_1.set(LegPriceUnitOfMeasureQty_85);
        InstrumentLeg_85.insert(LegPriceUnitOfMeasureQty_85.getString());
        FIX::LegProduct LegProduct_85(1772578408);
        noLegs_1_2_2_1.set(LegProduct_85);
        InstrumentLeg_85.insert(LegProduct_85.getString());
        FIX::LegPutOrCall LegPutOrCall_85(1501146008);
        noLegs_1_2_2_1.set(LegPutOrCall_85);
        InstrumentLeg_85.insert(LegPutOrCall_85.getString());
        FIX::LegRatioQty LegRatioQty_85;
        LegRatioQty_85.setString("1357821");
        noLegs_1_2_2_1.set(LegRatioQty_85);
        InstrumentLeg_85.insert(LegRatioQty_85.getString());
        FIX::LegRedemptionDate LegRedemptionDate_85("LOCALMKTDATE_1187138885");
        noLegs_1_2_2_1.set(LegRedemptionDate_85);
        InstrumentLeg_85.insert(LegRedemptionDate_85.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_85("STRING_175668668");
        noLegs_1_2_2_1.set(LegRepoCollateralSecurityType_85);
        InstrumentLeg_85.insert(LegRepoCollateralSecurityType_85.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_85;
        LegRepurchaseRate_85.setString("21.490000");
        noLegs_1_2_2_1.set(LegRepurchaseRate_85);
        InstrumentLeg_85.insert(LegRepurchaseRate_85.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_85(1439613036);
        noLegs_1_2_2_1.set(LegRepurchaseTerm_85);
        InstrumentLeg_85.insert(LegRepurchaseTerm_85.getString());
        FIX::LegSecurityDesc LegSecurityDesc_85("STRING_337991532");
        noLegs_1_2_2_1.set(LegSecurityDesc_85);
        InstrumentLeg_85.insert(LegSecurityDesc_85.getString());
        FIX::LegSecurityExchange LegSecurityExchange_85("EXCHANGE_46403436");
        noLegs_1_2_2_1.set(LegSecurityExchange_85);
        InstrumentLeg_85.insert(LegSecurityExchange_85.getString());
        FIX::LegSecurityID LegSecurityID_85("STRING_614064846");
        noLegs_1_2_2_1.set(LegSecurityID_85);
        InstrumentLeg_85.insert(LegSecurityID_85.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_85("STRING_2016674894");
        noLegs_1_2_2_1.set(LegSecurityIDSource_85);
        InstrumentLeg_85.insert(LegSecurityIDSource_85.getString());
        FIX::LegSecuritySubType LegSecuritySubType_85("STRING_739989376");
        noLegs_1_2_2_1.set(LegSecuritySubType_85);
        InstrumentLeg_85.insert(LegSecuritySubType_85.getString());
        FIX::LegSecurityType LegSecurityType_85("STRING_391854152");
        noLegs_1_2_2_1.set(LegSecurityType_85);
        InstrumentLeg_85.insert(LegSecurityType_85.getString());
        FIX::LegSide LegSide_85('3');
        noLegs_1_2_2_1.set(LegSide_85);
        InstrumentLeg_85.insert(LegSide_85.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_85("STRING_1648469101");
        noLegs_1_2_2_1.set(LegStateOrProvinceOfIssue_85);
        InstrumentLeg_85.insert(LegStateOrProvinceOfIssue_85.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_85("GBP");
        noLegs_1_2_2_1.set(LegStrikeCurrency_85);
        InstrumentLeg_85.insert(LegStrikeCurrency_85.getString());
        FIX::LegStrikePrice LegStrikePrice_85;
        LegStrikePrice_85.setString("5653945");
        noLegs_1_2_2_1.set(LegStrikePrice_85);
        InstrumentLeg_85.insert(LegStrikePrice_85.getString());
        FIX::LegSymbol LegSymbol_85("STRING_773224528");
        noLegs_1_2_2_1.set(LegSymbol_85);
        InstrumentLeg_85.insert(LegSymbol_85.getString());
        FIX::LegSymbolSfx LegSymbolSfx_85("STRING_446872301");
        noLegs_1_2_2_1.set(LegSymbolSfx_85);
        InstrumentLeg_85.insert(LegSymbolSfx_85.getString());
        FIX::LegTimeUnit LegTimeUnit_85("STRING_233424132");
        noLegs_1_2_2_1.set(LegTimeUnit_85);
        InstrumentLeg_85.insert(LegTimeUnit_85.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_85("STRING_307367176");
        noLegs_1_2_2_1.set(LegUnitOfMeasure_85);
        InstrumentLeg_85.insert(LegUnitOfMeasure_85.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_85;
        LegUnitOfMeasureQty_85.setString("5659072");
        noLegs_1_2_2_1.set(LegUnitOfMeasureQty_85);
        InstrumentLeg_85.insert(LegUnitOfMeasureQty_85.getString());
        all_values.push_back(InstrumentLeg_85);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_172;
          FIX::LegSecurityAltID LegSecurityAltID_172("STRING_719453702");
          noLegSecurityAltID_1_2_1_3_0.set(LegSecurityAltID_172);
          LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltID_172.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_172("STRING_2038062401");
          noLegSecurityAltID_1_2_1_3_0.set(LegSecurityAltIDSource_172);
          LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltIDSource_172.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_172);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_1.addGroup(noLegSecurityAltID_1_2_1_3_0);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_86;
        FIX::EncodedLegIssuer EncodedLegIssuer_86("DATA_517465277");
        noLegs_1_2_2_2.set(EncodedLegIssuer_86);
        InstrumentLeg_86.insert(EncodedLegIssuer_86.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_86(427151266);
        noLegs_1_2_2_2.set(EncodedLegIssuerLen_86);
        InstrumentLeg_86.insert(EncodedLegIssuerLen_86.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_86("DATA_1822355218");
        noLegs_1_2_2_2.set(EncodedLegSecurityDesc_86);
        InstrumentLeg_86.insert(EncodedLegSecurityDesc_86.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_86(1256402042);
        noLegs_1_2_2_2.set(EncodedLegSecurityDescLen_86);
        InstrumentLeg_86.insert(EncodedLegSecurityDescLen_86.getString());
        FIX::LegCFICode LegCFICode_86("STRING_753024417");
        noLegs_1_2_2_2.set(LegCFICode_86);
        InstrumentLeg_86.insert(LegCFICode_86.getString());
        FIX::LegContractMultiplier LegContractMultiplier_86;
        LegContractMultiplier_86.setString("14474499");
        noLegs_1_2_2_2.set(LegContractMultiplier_86);
        InstrumentLeg_86.insert(LegContractMultiplier_86.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_86(610064402);
        noLegs_1_2_2_2.set(LegContractMultiplierUnit_86);
        InstrumentLeg_86.insert(LegContractMultiplierUnit_86.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_86("MONTHYEAR_888806528");
        noLegs_1_2_2_2.set(LegContractSettlMonth_86);
        InstrumentLeg_86.insert(LegContractSettlMonth_86.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_86("COUNTRY_487105216");
        noLegs_1_2_2_2.set(LegCountryOfIssue_86);
        InstrumentLeg_86.insert(LegCountryOfIssue_86.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_86("LOCALMKTDATE_785733070");
        noLegs_1_2_2_2.set(LegCouponPaymentDate_86);
        InstrumentLeg_86.insert(LegCouponPaymentDate_86.getString());
        FIX::LegCouponRate LegCouponRate_86;
        LegCouponRate_86.setString("86.770000");
        noLegs_1_2_2_2.set(LegCouponRate_86);
        InstrumentLeg_86.insert(LegCouponRate_86.getString());
        FIX::LegCreditRating LegCreditRating_86("STRING_1926718253");
        noLegs_1_2_2_2.set(LegCreditRating_86);
        InstrumentLeg_86.insert(LegCreditRating_86.getString());
        FIX::LegCurrency LegCurrency_86("GBP");
        noLegs_1_2_2_2.set(LegCurrency_86);
        InstrumentLeg_86.insert(LegCurrency_86.getString());
        FIX::LegDatedDate LegDatedDate_86("LOCALMKTDATE_393299451");
        noLegs_1_2_2_2.set(LegDatedDate_86);
        InstrumentLeg_86.insert(LegDatedDate_86.getString());
        FIX::LegExerciseStyle LegExerciseStyle_86(992915849);
        noLegs_1_2_2_2.set(LegExerciseStyle_86);
        InstrumentLeg_86.insert(LegExerciseStyle_86.getString());
        FIX::LegFactor LegFactor_86;
        LegFactor_86.setString("7239778");
        noLegs_1_2_2_2.set(LegFactor_86);
        InstrumentLeg_86.insert(LegFactor_86.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_86(785153604);
        noLegs_1_2_2_2.set(LegFlowScheduleType_86);
        InstrumentLeg_86.insert(LegFlowScheduleType_86.getString());
        FIX::LegInstrRegistry LegInstrRegistry_86("STRING_1349847659");
        noLegs_1_2_2_2.set(LegInstrRegistry_86);
        InstrumentLeg_86.insert(LegInstrRegistry_86.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_86("LOCALMKTDATE_224963295");
        noLegs_1_2_2_2.set(LegInterestAccrualDate_86);
        InstrumentLeg_86.insert(LegInterestAccrualDate_86.getString());
        FIX::LegIssueDate LegIssueDate_86("LOCALMKTDATE_1485837720");
        noLegs_1_2_2_2.set(LegIssueDate_86);
        InstrumentLeg_86.insert(LegIssueDate_86.getString());
        FIX::LegIssuer LegIssuer_86("STRING_455098109");
        noLegs_1_2_2_2.set(LegIssuer_86);
        InstrumentLeg_86.insert(LegIssuer_86.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_86("STRING_790357811");
        noLegs_1_2_2_2.set(LegLocaleOfIssue_86);
        InstrumentLeg_86.insert(LegLocaleOfIssue_86.getString());
        FIX::LegMaturityDate LegMaturityDate_86("LOCALMKTDATE_111578600");
        noLegs_1_2_2_2.set(LegMaturityDate_86);
        InstrumentLeg_86.insert(LegMaturityDate_86.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_86("MONTHYEAR_901970410");
        noLegs_1_2_2_2.set(LegMaturityMonthYear_86);
        InstrumentLeg_86.insert(LegMaturityMonthYear_86.getString());
        FIX::LegMaturityTime LegMaturityTime_86("TZTIMEONLY_1023781944");
        noLegs_1_2_2_2.set(LegMaturityTime_86);
        InstrumentLeg_86.insert(LegMaturityTime_86.getString());
        FIX::LegOptAttribute LegOptAttribute_86('4');
        noLegs_1_2_2_2.set(LegOptAttribute_86);
        InstrumentLeg_86.insert(LegOptAttribute_86.getString());
        FIX::LegOptionRatio LegOptionRatio_86;
        LegOptionRatio_86.setString("14678776");
        noLegs_1_2_2_2.set(LegOptionRatio_86);
        InstrumentLeg_86.insert(LegOptionRatio_86.getString());
        FIX::LegPool LegPool_86("STRING_1597814787");
        noLegs_1_2_2_2.set(LegPool_86);
        InstrumentLeg_86.insert(LegPool_86.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_86("STRING_1138399479");
        noLegs_1_2_2_2.set(LegPriceUnitOfMeasure_86);
        InstrumentLeg_86.insert(LegPriceUnitOfMeasure_86.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_86;
        LegPriceUnitOfMeasureQty_86.setString("13584564");
        noLegs_1_2_2_2.set(LegPriceUnitOfMeasureQty_86);
        InstrumentLeg_86.insert(LegPriceUnitOfMeasureQty_86.getString());
        FIX::LegProduct LegProduct_86(2115280064);
        noLegs_1_2_2_2.set(LegProduct_86);
        InstrumentLeg_86.insert(LegProduct_86.getString());
        FIX::LegPutOrCall LegPutOrCall_86(1565550745);
        noLegs_1_2_2_2.set(LegPutOrCall_86);
        InstrumentLeg_86.insert(LegPutOrCall_86.getString());
        FIX::LegRatioQty LegRatioQty_86;
        LegRatioQty_86.setString("10333279");
        noLegs_1_2_2_2.set(LegRatioQty_86);
        InstrumentLeg_86.insert(LegRatioQty_86.getString());
        FIX::LegRedemptionDate LegRedemptionDate_86("LOCALMKTDATE_1224198458");
        noLegs_1_2_2_2.set(LegRedemptionDate_86);
        InstrumentLeg_86.insert(LegRedemptionDate_86.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_86("STRING_171091515");
        noLegs_1_2_2_2.set(LegRepoCollateralSecurityType_86);
        InstrumentLeg_86.insert(LegRepoCollateralSecurityType_86.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_86;
        LegRepurchaseRate_86.setString("43.270000");
        noLegs_1_2_2_2.set(LegRepurchaseRate_86);
        InstrumentLeg_86.insert(LegRepurchaseRate_86.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_86(1834262860);
        noLegs_1_2_2_2.set(LegRepurchaseTerm_86);
        InstrumentLeg_86.insert(LegRepurchaseTerm_86.getString());
        FIX::LegSecurityDesc LegSecurityDesc_86("STRING_1059898043");
        noLegs_1_2_2_2.set(LegSecurityDesc_86);
        InstrumentLeg_86.insert(LegSecurityDesc_86.getString());
        FIX::LegSecurityExchange LegSecurityExchange_86("EXCHANGE_820399543");
        noLegs_1_2_2_2.set(LegSecurityExchange_86);
        InstrumentLeg_86.insert(LegSecurityExchange_86.getString());
        FIX::LegSecurityID LegSecurityID_86("STRING_472512282");
        noLegs_1_2_2_2.set(LegSecurityID_86);
        InstrumentLeg_86.insert(LegSecurityID_86.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_86("STRING_997483073");
        noLegs_1_2_2_2.set(LegSecurityIDSource_86);
        InstrumentLeg_86.insert(LegSecurityIDSource_86.getString());
        FIX::LegSecuritySubType LegSecuritySubType_86("STRING_599634148");
        noLegs_1_2_2_2.set(LegSecuritySubType_86);
        InstrumentLeg_86.insert(LegSecuritySubType_86.getString());
        FIX::LegSecurityType LegSecurityType_86("STRING_1596236884");
        noLegs_1_2_2_2.set(LegSecurityType_86);
        InstrumentLeg_86.insert(LegSecurityType_86.getString());
        FIX::LegSide LegSide_86('9');
        noLegs_1_2_2_2.set(LegSide_86);
        InstrumentLeg_86.insert(LegSide_86.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_86("STRING_992933600");
        noLegs_1_2_2_2.set(LegStateOrProvinceOfIssue_86);
        InstrumentLeg_86.insert(LegStateOrProvinceOfIssue_86.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_86("CHF");
        noLegs_1_2_2_2.set(LegStrikeCurrency_86);
        InstrumentLeg_86.insert(LegStrikeCurrency_86.getString());
        FIX::LegStrikePrice LegStrikePrice_86;
        LegStrikePrice_86.setString("17780872");
        noLegs_1_2_2_2.set(LegStrikePrice_86);
        InstrumentLeg_86.insert(LegStrikePrice_86.getString());
        FIX::LegSymbol LegSymbol_86("STRING_1791516745");
        noLegs_1_2_2_2.set(LegSymbol_86);
        InstrumentLeg_86.insert(LegSymbol_86.getString());
        FIX::LegSymbolSfx LegSymbolSfx_86("STRING_1930412676");
        noLegs_1_2_2_2.set(LegSymbolSfx_86);
        InstrumentLeg_86.insert(LegSymbolSfx_86.getString());
        FIX::LegTimeUnit LegTimeUnit_86("STRING_1116441276");
        noLegs_1_2_2_2.set(LegTimeUnit_86);
        InstrumentLeg_86.insert(LegTimeUnit_86.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_86("STRING_99131206");
        noLegs_1_2_2_2.set(LegUnitOfMeasure_86);
        InstrumentLeg_86.insert(LegUnitOfMeasure_86.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_86;
        LegUnitOfMeasureQty_86.setString("5732868");
        noLegs_1_2_2_2.set(LegUnitOfMeasureQty_86);
        InstrumentLeg_86.insert(LegUnitOfMeasureQty_86.getString());
        all_values.push_back(InstrumentLeg_86);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_173;
          FIX::LegSecurityAltID LegSecurityAltID_173("STRING_1001101617");
          noLegSecurityAltID_1_2_2_3_0.set(LegSecurityAltID_173);
          LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltID_173.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_173("STRING_1597068784");
          noLegSecurityAltID_1_2_2_3_0.set(LegSecurityAltIDSource_173);
          LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltIDSource_173.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_173);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_2.addGroup(noLegSecurityAltID_1_2_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_174;
          FIX::LegSecurityAltID LegSecurityAltID_174("STRING_1646965653");
          noLegSecurityAltID_1_2_2_3_1.set(LegSecurityAltID_174);
          LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltID_174.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_174("STRING_321495641");
          noLegSecurityAltID_1_2_2_3_1.set(LegSecurityAltIDSource_174);
          LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltIDSource_174.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_174);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_2.addGroup(noLegSecurityAltID_1_2_2_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_175;
          FIX::LegSecurityAltID LegSecurityAltID_175("STRING_1047399923");
          noLegSecurityAltID_1_2_2_3_2.set(LegSecurityAltID_175);
          LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltID_175.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_175("STRING_637881484");
          noLegSecurityAltID_1_2_2_3_2.set(LegSecurityAltIDSource_175);
          LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltIDSource_175.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_175);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_2_2_2.addGroup(noLegSecurityAltID_1_2_2_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_2);
      }
      // Instrument
      multiset<string> Instrument_45;
      FIX::AttachmentPoint AttachmentPoint_45;
      AttachmentPoint_45.setString("20.670000");
      noQuoteEntries_1_1_2.set(AttachmentPoint_45);
      Instrument_45.insert(AttachmentPoint_45.getString());
      FIX::CFICode CFICode_45("STRING_1015196339");
      noQuoteEntries_1_1_2.set(CFICode_45);
      Instrument_45.insert(CFICode_45.getString());
      FIX::CPProgram CPProgram_45(1);
      noQuoteEntries_1_1_2.set(CPProgram_45);
      Instrument_45.insert(CPProgram_45.getString());
      FIX::CPRegType CPRegType_45("STRING_565796415");
      noQuoteEntries_1_1_2.set(CPRegType_45);
      Instrument_45.insert(CPRegType_45.getString());
      FIX::CapPrice CapPrice_45;
      CapPrice_45.setString("919111");
      noQuoteEntries_1_1_2.set(CapPrice_45);
      Instrument_45.insert(CapPrice_45.getString());
      FIX::ContractMultiplier ContractMultiplier_45;
      ContractMultiplier_45.setString("2270400");
      noQuoteEntries_1_1_2.set(ContractMultiplier_45);
      Instrument_45.insert(ContractMultiplier_45.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_45(0);
      noQuoteEntries_1_1_2.set(ContractMultiplierUnit_45);
      Instrument_45.insert(ContractMultiplierUnit_45.getString());
      FIX::ContractSettlMonth ContractSettlMonth_45("MONTHYEAR_1926174009");
      noQuoteEntries_1_1_2.set(ContractSettlMonth_45);
      Instrument_45.insert(ContractSettlMonth_45.getString());
      FIX::CountryOfIssue CountryOfIssue_45("COUNTRY_1286938140");
      noQuoteEntries_1_1_2.set(CountryOfIssue_45);
      Instrument_45.insert(CountryOfIssue_45.getString());
      FIX::CouponPaymentDate CouponPaymentDate_45("LOCALMKTDATE_1719490285");
      noQuoteEntries_1_1_2.set(CouponPaymentDate_45);
      Instrument_45.insert(CouponPaymentDate_45.getString());
      FIX::CouponRate CouponRate_45;
      CouponRate_45.setString("26.430000");
      noQuoteEntries_1_1_2.set(CouponRate_45);
      Instrument_45.insert(CouponRate_45.getString());
      FIX::CreditRating CreditRating_45("STRING_136937565");
      noQuoteEntries_1_1_2.set(CreditRating_45);
      Instrument_45.insert(CreditRating_45.getString());
      FIX::DatedDate DatedDate_45("LOCALMKTDATE_171640786");
      noQuoteEntries_1_1_2.set(DatedDate_45);
      Instrument_45.insert(DatedDate_45.getString());
      FIX::DetachmentPoint DetachmentPoint_45;
      DetachmentPoint_45.setString("95.270000");
      noQuoteEntries_1_1_2.set(DetachmentPoint_45);
      Instrument_45.insert(DetachmentPoint_45.getString());
      FIX::EncodedIssuer EncodedIssuer_45("DATA_1118409104");
      noQuoteEntries_1_1_2.set(EncodedIssuer_45);
      Instrument_45.insert(EncodedIssuer_45.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_45(1164574386);
      noQuoteEntries_1_1_2.set(EncodedIssuerLen_45);
      Instrument_45.insert(EncodedIssuerLen_45.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_45("DATA_141624965");
      noQuoteEntries_1_1_2.set(EncodedSecurityDesc_45);
      Instrument_45.insert(EncodedSecurityDesc_45.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_45(676374837);
      noQuoteEntries_1_1_2.set(EncodedSecurityDescLen_45);
      Instrument_45.insert(EncodedSecurityDescLen_45.getString());
      FIX::ExerciseStyle ExerciseStyle_45(0);
      noQuoteEntries_1_1_2.set(ExerciseStyle_45);
      Instrument_45.insert(ExerciseStyle_45.getString());
      FIX::Factor Factor_45;
      Factor_45.setString("19331417");
      noQuoteEntries_1_1_2.set(Factor_45);
      Instrument_45.insert(Factor_45.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_45(false);
      noQuoteEntries_1_1_2.set(FlexProductEligibilityIndicator_45);
      Instrument_45.insert(FlexProductEligibilityIndicator_45.getString());
      FIX::FlexibleIndicator FlexibleIndicator_45(true);
      noQuoteEntries_1_1_2.set(FlexibleIndicator_45);
      Instrument_45.insert(FlexibleIndicator_45.getString());
      FIX::FloorPrice FloorPrice_45;
      FloorPrice_45.setString("20322729");
      noQuoteEntries_1_1_2.set(FloorPrice_45);
      Instrument_45.insert(FloorPrice_45.getString());
      FIX::FlowScheduleType FlowScheduleType_45(0);
      noQuoteEntries_1_1_2.set(FlowScheduleType_45);
      Instrument_45.insert(FlowScheduleType_45.getString());
      FIX::InstrRegistry InstrRegistry_45("STRING_992155446");
      noQuoteEntries_1_1_2.set(InstrRegistry_45);
      Instrument_45.insert(InstrRegistry_45.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_45('8');
      noQuoteEntries_1_1_2.set(InstrmtAssignmentMethod_45);
      Instrument_45.insert(InstrmtAssignmentMethod_45.getString());
      FIX::InterestAccrualDate InterestAccrualDate_45("LOCALMKTDATE_482175841");
      noQuoteEntries_1_1_2.set(InterestAccrualDate_45);
      Instrument_45.insert(InterestAccrualDate_45.getString());
      FIX::IssueDate IssueDate_45("LOCALMKTDATE_491637451");
      noQuoteEntries_1_1_2.set(IssueDate_45);
      Instrument_45.insert(IssueDate_45.getString());
      FIX::Issuer Issuer_45("STRING_1207386527");
      noQuoteEntries_1_1_2.set(Issuer_45);
      Instrument_45.insert(Issuer_45.getString());
      FIX::ListMethod ListMethod_45(0);
      noQuoteEntries_1_1_2.set(ListMethod_45);
      Instrument_45.insert(ListMethod_45.getString());
      FIX::LocaleOfIssue LocaleOfIssue_45("STRING_1129518935");
      noQuoteEntries_1_1_2.set(LocaleOfIssue_45);
      Instrument_45.insert(LocaleOfIssue_45.getString());
      FIX::MaturityDate MaturityDate_45("LOCALMKTDATE_739854946");
      noQuoteEntries_1_1_2.set(MaturityDate_45);
      Instrument_45.insert(MaturityDate_45.getString());
      FIX::MaturityMonthYear MaturityMonthYear_45("MONTHYEAR_397288455");
      noQuoteEntries_1_1_2.set(MaturityMonthYear_45);
      Instrument_45.insert(MaturityMonthYear_45.getString());
      FIX::MaturityTime MaturityTime_45("TZTIMEONLY_1185467517");
      noQuoteEntries_1_1_2.set(MaturityTime_45);
      Instrument_45.insert(MaturityTime_45.getString());
      FIX::MinPriceIncrement MinPriceIncrement_45;
      MinPriceIncrement_45.setString("13056513");
      noQuoteEntries_1_1_2.set(MinPriceIncrement_45);
      Instrument_45.insert(MinPriceIncrement_45.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_45;
      MinPriceIncrementAmount_45.setString("4891996");
      noQuoteEntries_1_1_2.set(MinPriceIncrementAmount_45);
      Instrument_45.insert(MinPriceIncrementAmount_45.getString());
      FIX::NTPositionLimit NTPositionLimit_45(1412507613);
      noQuoteEntries_1_1_2.set(NTPositionLimit_45);
      Instrument_45.insert(NTPositionLimit_45.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_45;
      NotionalPercentageOutstanding_45.setString("84.550000");
      noQuoteEntries_1_1_2.set(NotionalPercentageOutstanding_45);
      Instrument_45.insert(NotionalPercentageOutstanding_45.getString());
      FIX::OptAttribute OptAttribute_45('2');
      noQuoteEntries_1_1_2.set(OptAttribute_45);
      Instrument_45.insert(OptAttribute_45.getString());
      FIX::OptPayoutAmount OptPayoutAmount_45;
      OptPayoutAmount_45.setString("5519621");
      noQuoteEntries_1_1_2.set(OptPayoutAmount_45);
      Instrument_45.insert(OptPayoutAmount_45.getString());
      FIX::OptPayoutType OptPayoutType_45(1);
      noQuoteEntries_1_1_2.set(OptPayoutType_45);
      Instrument_45.insert(OptPayoutType_45.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_45;
      OriginalNotionalPercentageOutstanding_45.setString("26.080000");
      noQuoteEntries_1_1_2.set(OriginalNotionalPercentageOutstanding_45);
      Instrument_45.insert(OriginalNotionalPercentageOutstanding_45.getString());
      FIX::Pool Pool_45("STRING_688899670");
      noQuoteEntries_1_1_2.set(Pool_45);
      Instrument_45.insert(Pool_45.getString());
      FIX::PositionLimit PositionLimit_45(1948389526);
      noQuoteEntries_1_1_2.set(PositionLimit_45);
      Instrument_45.insert(PositionLimit_45.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_45("STRING_STD");
      noQuoteEntries_1_1_2.set(PriceQuoteMethod_45);
      Instrument_45.insert(PriceQuoteMethod_45.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_45("STRING_1807308774");
      noQuoteEntries_1_1_2.set(PriceUnitOfMeasure_45);
      Instrument_45.insert(PriceUnitOfMeasure_45.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_45;
      PriceUnitOfMeasureQty_45.setString("9654802");
      noQuoteEntries_1_1_2.set(PriceUnitOfMeasureQty_45);
      Instrument_45.insert(PriceUnitOfMeasureQty_45.getString());
      FIX::Product Product_47(11);
      noQuoteEntries_1_1_2.set(Product_47);
      Instrument_45.insert(Product_47.getString());
      FIX::ProductComplex ProductComplex_45("STRING_336199963");
      noQuoteEntries_1_1_2.set(ProductComplex_45);
      Instrument_45.insert(ProductComplex_45.getString());
      FIX::PutOrCall PutOrCall_45(0);
      noQuoteEntries_1_1_2.set(PutOrCall_45);
      Instrument_45.insert(PutOrCall_45.getString());
      FIX::RedemptionDate RedemptionDate_45("LOCALMKTDATE_146331515");
      noQuoteEntries_1_1_2.set(RedemptionDate_45);
      Instrument_45.insert(RedemptionDate_45.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_45("STRING_795503829");
      noQuoteEntries_1_1_2.set(RepoCollateralSecurityType_45);
      Instrument_45.insert(RepoCollateralSecurityType_45.getString());
      FIX::RepurchaseRate RepurchaseRate_45;
      RepurchaseRate_45.setString("37.760000");
      noQuoteEntries_1_1_2.set(RepurchaseRate_45);
      Instrument_45.insert(RepurchaseRate_45.getString());
      FIX::RepurchaseTerm RepurchaseTerm_45(31120783);
      noQuoteEntries_1_1_2.set(RepurchaseTerm_45);
      Instrument_45.insert(RepurchaseTerm_45.getString());
      FIX::RestructuringType RestructuringType_45("STRING_MM");
      noQuoteEntries_1_1_2.set(RestructuringType_45);
      Instrument_45.insert(RestructuringType_45.getString());
      FIX::SecurityDesc SecurityDesc_45("STRING_369465575");
      noQuoteEntries_1_1_2.set(SecurityDesc_45);
      Instrument_45.insert(SecurityDesc_45.getString());
      FIX::SecurityExchange SecurityExchange_45("EXCHANGE_917011669");
      noQuoteEntries_1_1_2.set(SecurityExchange_45);
      Instrument_45.insert(SecurityExchange_45.getString());
      FIX::SecurityGroup SecurityGroup_45("STRING_162786728");
      noQuoteEntries_1_1_2.set(SecurityGroup_45);
      Instrument_45.insert(SecurityGroup_45.getString());
      FIX::SecurityID SecurityID_45("STRING_861103026");
      noQuoteEntries_1_1_2.set(SecurityID_45);
      Instrument_45.insert(SecurityID_45.getString());
      FIX::SecurityIDSource SecurityIDSource_45("STRING_9");
      noQuoteEntries_1_1_2.set(SecurityIDSource_45);
      Instrument_45.insert(SecurityIDSource_45.getString());
      FIX::SecurityStatus SecurityStatus_45("STRING_1");
      noQuoteEntries_1_1_2.set(SecurityStatus_45);
      Instrument_45.insert(SecurityStatus_45.getString());
      FIX::SecuritySubType SecuritySubType_46("STRING_1990621962");
      noQuoteEntries_1_1_2.set(SecuritySubType_46);
      Instrument_45.insert(SecuritySubType_46.getString());
      FIX::SecurityType SecurityType_47("STRING_MPP");
      noQuoteEntries_1_1_2.set(SecurityType_47);
      Instrument_45.insert(SecurityType_47.getString());
      FIX::Seniority Seniority_45("STRING_SD");
      noQuoteEntries_1_1_2.set(Seniority_45);
      Instrument_45.insert(Seniority_45.getString());
      FIX::SettlMethod SettlMethod_45('P');
      noQuoteEntries_1_1_2.set(SettlMethod_45);
      Instrument_45.insert(SettlMethod_45.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_45("STRING_2022420855");
      noQuoteEntries_1_1_2.set(SettleOnOpenFlag_45);
      Instrument_45.insert(SettleOnOpenFlag_45.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_45("STRING_431366904");
      noQuoteEntries_1_1_2.set(StateOrProvinceOfIssue_45);
      Instrument_45.insert(StateOrProvinceOfIssue_45.getString());
      FIX::StrikeCurrency StrikeCurrency_45("GBP");
      noQuoteEntries_1_1_2.set(StrikeCurrency_45);
      Instrument_45.insert(StrikeCurrency_45.getString());
      FIX::StrikeMultiplier StrikeMultiplier_45;
      StrikeMultiplier_45.setString("6992568");
      noQuoteEntries_1_1_2.set(StrikeMultiplier_45);
      Instrument_45.insert(StrikeMultiplier_45.getString());
      FIX::StrikePrice StrikePrice_45;
      StrikePrice_45.setString("8455919");
      noQuoteEntries_1_1_2.set(StrikePrice_45);
      Instrument_45.insert(StrikePrice_45.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_45(3);
      noQuoteEntries_1_1_2.set(StrikePriceBoundaryMethod_45);
      Instrument_45.insert(StrikePriceBoundaryMethod_45.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_45;
      StrikePriceBoundaryPrecision_45.setString("94.780000");
      noQuoteEntries_1_1_2.set(StrikePriceBoundaryPrecision_45);
      Instrument_45.insert(StrikePriceBoundaryPrecision_45.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_45(1);
      noQuoteEntries_1_1_2.set(StrikePriceDeterminationMethod_45);
      Instrument_45.insert(StrikePriceDeterminationMethod_45.getString());
      FIX::StrikeValue StrikeValue_45;
      StrikeValue_45.setString("15098502");
      noQuoteEntries_1_1_2.set(StrikeValue_45);
      Instrument_45.insert(StrikeValue_45.getString());
      FIX::Symbol Symbol_45("STRING_1437397966");
      noQuoteEntries_1_1_2.set(Symbol_45);
      Instrument_45.insert(Symbol_45.getString());
      FIX::SymbolSfx SymbolSfx_45("STRING_WI");
      noQuoteEntries_1_1_2.set(SymbolSfx_45);
      Instrument_45.insert(SymbolSfx_45.getString());
      FIX::TimeUnit TimeUnit_45("STRING_H");
      noQuoteEntries_1_1_2.set(TimeUnit_45);
      Instrument_45.insert(TimeUnit_45.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_45(4);
      noQuoteEntries_1_1_2.set(UnderlyingPriceDeterminationMethod_45);
      Instrument_45.insert(UnderlyingPriceDeterminationMethod_45.getString());
      FIX::UnitOfMeasure UnitOfMeasure_45("STRING_Alw");
      noQuoteEntries_1_1_2.set(UnitOfMeasure_45);
      Instrument_45.insert(UnitOfMeasure_45.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_45;
      UnitOfMeasureQty_45.setString("20885051");
      noQuoteEntries_1_1_2.set(UnitOfMeasureQty_45);
      Instrument_45.insert(UnitOfMeasureQty_45.getString());
      FIX::ValuationMethod ValuationMethod_45("STRING_CDSD");
      noQuoteEntries_1_1_2.set(ValuationMethod_45);
      Instrument_45.insert(ValuationMethod_45.getString());
      all_values.push_back(Instrument_45);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_91;
        FIX::ComplexEventCondition ComplexEventCondition_91(1);
        noComplexEvents_1_2_2_0.set(ComplexEventCondition_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexEventCondition_91.getString());
        FIX::ComplexEventPrice ComplexEventPrice_91;
        ComplexEventPrice_91.setString("19755237");
        noComplexEvents_1_2_2_0.set(ComplexEventPrice_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexEventPrice_91.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_91(4);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryMethod_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryMethod_91.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_91;
        ComplexEventPriceBoundaryPrecision_91.setString("8.070000");
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryPrecision_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryPrecision_91.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_91(3);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceTimeType_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceTimeType_91.getString());
        FIX::ComplexEventType ComplexEventType_91(1);
        noComplexEvents_1_2_2_0.set(ComplexEventType_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexEventType_91.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_91;
        ComplexOptPayoutAmount_91.setString("5489001");
        noComplexEvents_1_2_2_0.set(ComplexOptPayoutAmount_91);
        ComplexEvents_NoComplexEvents_91.insert(ComplexOptPayoutAmount_91.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_91);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_190;
          FIX::ComplexEventEndDate ComplexEventEndDate_190(FIX::UTCTIMESTAMP(12, 41, 30, 15, 1, 2013));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventEndDate_190);
          ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventEndDate_190.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_190(FIX::UTCTIMESTAMP(18, 57, 41, 0, 12, 2002));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventStartDate_190);
          ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventStartDate_190.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_190);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_383;
            FIX::ComplexEventEndTime ComplexEventEndTime_383(FIX::UTCTIMEONLY(13, 15, 5));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventEndTime_383);
            ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventEndTime_383.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_383(FIX::UTCTIMEONLY(7, 32, 23));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventStartTime_383);
            ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventStartTime_383.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_383);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_384;
            FIX::ComplexEventEndTime ComplexEventEndTime_384(FIX::UTCTIMEONLY(6, 33, 43));
            noComplexEventTimes_1_2_0_0_4_1.set(ComplexEventEndTime_384);
            ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventEndTime_384.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_384(FIX::UTCTIMEONLY(3, 9, 8));
            noComplexEventTimes_1_2_0_0_4_1.set(ComplexEventStartTime_384);
            ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventStartTime_384.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_384);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_385;
            FIX::ComplexEventEndTime ComplexEventEndTime_385(FIX::UTCTIMEONLY(13, 41, 4));
            noComplexEventTimes_1_2_0_0_4_2.set(ComplexEventEndTime_385);
            ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventEndTime_385.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_385(FIX::UTCTIMEONLY(9, 51, 51));
            noComplexEventTimes_1_2_0_0_4_2.set(ComplexEventStartTime_385);
            ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventStartTime_385.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_385);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_2);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_0);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_83;
        FIX::EventDate EventDate_83("LOCALMKTDATE_92104840");
        noEvents_1_2_2_0.set(EventDate_83);
        EvntGrp_NoEvents_83.insert(EventDate_83.getString());
        FIX::EventPx EventPx_83;
        EventPx_83.setString("17854490");
        noEvents_1_2_2_0.set(EventPx_83);
        EvntGrp_NoEvents_83.insert(EventPx_83.getString());
        FIX::EventText EventText_83("STRING_253589207");
        noEvents_1_2_2_0.set(EventText_83);
        EvntGrp_NoEvents_83.insert(EventText_83.getString());
        FIX::EventTime EventTime_83(FIX::UTCTIMESTAMP(15, 5, 21, 16, 9, 2015));
        noEvents_1_2_2_0.set(EventTime_83);
        EvntGrp_NoEvents_83.insert(EventTime_83.getString());
        FIX::EventType EventType_83(16);
        noEvents_1_2_2_0.set(EventType_83);
        EvntGrp_NoEvents_83.insert(EventType_83.getString());
        all_values.push_back(EvntGrp_NoEvents_83);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_90;
        FIX::InstrumentPartyID InstrumentPartyID_90("STRING_196790751");
        noInstrumentParties_1_2_2_0.set(InstrumentPartyID_90);
        InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyID_90.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_90('1');
        noInstrumentParties_1_2_2_0.set(InstrumentPartyIDSource_90);
        InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyIDSource_90.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_90(1116288546);
        noInstrumentParties_1_2_2_0.set(InstrumentPartyRole_90);
        InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyRole_90.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_90);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175;
          FIX::InstrumentPartySubID InstrumentPartySubID_175("STRING_1777504151");
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubID_175);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubID_175.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_175(560981681);
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubIDType_175);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubIDType_175.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_0);
        }
        noQuoteEntries_1_1_2.addGroup(noInstrumentParties_1_2_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_83;
        FIX::SecurityAltID SecurityAltID_83("STRING_66379554");
        noSecurityAltID_1_2_2_0.set(SecurityAltID_83);
        SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltID_83.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_83("STRING_554575002");
        noSecurityAltID_1_2_2_0.set(SecurityAltIDSource_83);
        SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltIDSource_83.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_83);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_84;
        FIX::SecurityAltID SecurityAltID_84("STRING_1531622774");
        noSecurityAltID_1_2_2_1.set(SecurityAltID_84);
        SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltID_84.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_84("STRING_69551908");
        noSecurityAltID_1_2_2_1.set(SecurityAltIDSource_84);
        SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltIDSource_84.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_84);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_85;
        FIX::SecurityAltID SecurityAltID_85("STRING_940206823");
        noSecurityAltID_1_2_2_2.set(SecurityAltID_85);
        SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltID_85.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_85("STRING_565824587");
        noSecurityAltID_1_2_2_2.set(SecurityAltIDSource_85);
        SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltIDSource_85.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_85);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_90;
      FIX::SecurityXML SecurityXML_91("XMLDATA_1729188512");
      noQuoteEntries_1_1_2.set(SecurityXML_91);
      FIX::SecurityXMLLen SecurityXMLLen_45(598999327);
      noQuoteEntries_1_1_2.set(SecurityXMLLen_45);
      FIX::SecurityXMLSchema SecurityXMLSchema_45("STRING_913699388");
      noQuoteEntries_1_1_2.set(SecurityXMLSchema_45);
      SecurityXML_90.insert(SecurityXMLSchema_45.getString());
      all_values.push_back(SecurityXML_90);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_58;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_58("DATA_1181688975");
    noQuoteSets_0_1.set(EncodedUnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuer_58.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_58(1972065959);
    noQuoteSets_0_1.set(EncodedUnderlyingIssuerLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuerLen_58.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_58("DATA_359959191");
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDesc_58.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_58(1273793815);
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDescLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDescLen_58.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_58;
    UnderlyingAdjustedQuantity_58.setString("16100313");
    noQuoteSets_0_1.set(UnderlyingAdjustedQuantity_58);
    UnderlyingInstrument_58.insert(UnderlyingAdjustedQuantity_58.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_58;
    UnderlyingAllocationPercent_58.setString("83.980000");
    noQuoteSets_0_1.set(UnderlyingAllocationPercent_58);
    UnderlyingInstrument_58.insert(UnderlyingAllocationPercent_58.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_58;
    UnderlyingAttachmentPoint_58.setString("88.620000");
    noQuoteSets_0_1.set(UnderlyingAttachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingAttachmentPoint_58.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_58("STRING_1047386995");
    noQuoteSets_0_1.set(UnderlyingCFICode_58);
    UnderlyingInstrument_58.insert(UnderlyingCFICode_58.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_58("STRING_1036833643");
    noQuoteSets_0_1.set(UnderlyingCPProgram_58);
    UnderlyingInstrument_58.insert(UnderlyingCPProgram_58.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_58("STRING_2026812084");
    noQuoteSets_0_1.set(UnderlyingCPRegType_58);
    UnderlyingInstrument_58.insert(UnderlyingCPRegType_58.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_58;
    UnderlyingCapValue_58.setString("14784496");
    noQuoteSets_0_1.set(UnderlyingCapValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCapValue_58.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_58;
    UnderlyingCashAmount_58.setString("19576618");
    noQuoteSets_0_1.set(UnderlyingCashAmount_58);
    UnderlyingInstrument_58.insert(UnderlyingCashAmount_58.getString());
    FIX::UnderlyingCashType UnderlyingCashType_58("STRING_DIFF");
    noQuoteSets_0_1.set(UnderlyingCashType_58);
    UnderlyingInstrument_58.insert(UnderlyingCashType_58.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_58;
    UnderlyingContractMultiplier_58.setString("1387687");
    noQuoteSets_0_1.set(UnderlyingContractMultiplier_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplier_58.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_58(1169570746);
    noQuoteSets_0_1.set(UnderlyingContractMultiplierUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplierUnit_58.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_58("COUNTRY_1825018354");
    noQuoteSets_0_1.set(UnderlyingCountryOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingCountryOfIssue_58.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_58("LOCALMKTDATE_1501848277");
    noQuoteSets_0_1.set(UnderlyingCouponPaymentDate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponPaymentDate_58.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_58;
    UnderlyingCouponRate_58.setString("56.450000");
    noQuoteSets_0_1.set(UnderlyingCouponRate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponRate_58.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_58("STRING_297740759");
    noQuoteSets_0_1.set(UnderlyingCreditRating_58);
    UnderlyingInstrument_58.insert(UnderlyingCreditRating_58.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_58("GBP");
    noQuoteSets_0_1.set(UnderlyingCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrency_58.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_58;
    UnderlyingCurrentValue_58.setString("20864138");
    noQuoteSets_0_1.set(UnderlyingCurrentValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrentValue_58.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_58;
    UnderlyingDetachmentPoint_58.setString("83.350000");
    noQuoteSets_0_1.set(UnderlyingDetachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingDetachmentPoint_58.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_58;
    UnderlyingDirtyPrice_58.setString("12539323");
    noQuoteSets_0_1.set(UnderlyingDirtyPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingDirtyPrice_58.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_58;
    UnderlyingEndPrice_58.setString("14705529");
    noQuoteSets_0_1.set(UnderlyingEndPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingEndPrice_58.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_58;
    UnderlyingEndValue_58.setString("12678002");
    noQuoteSets_0_1.set(UnderlyingEndValue_58);
    UnderlyingInstrument_58.insert(UnderlyingEndValue_58.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_58(46655504);
    noQuoteSets_0_1.set(UnderlyingExerciseStyle_58);
    UnderlyingInstrument_58.insert(UnderlyingExerciseStyle_58.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_58;
    UnderlyingFXRate_58.setString("20363775");
    noQuoteSets_0_1.set(UnderlyingFXRate_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRate_58.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_58('M');
    noQuoteSets_0_1.set(UnderlyingFXRateCalc_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRateCalc_58.getString());
    FIX::UnderlyingFactor UnderlyingFactor_58;
    UnderlyingFactor_58.setString("6456548");
    noQuoteSets_0_1.set(UnderlyingFactor_58);
    UnderlyingInstrument_58.insert(UnderlyingFactor_58.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_58(802593306);
    noQuoteSets_0_1.set(UnderlyingFlowScheduleType_58);
    UnderlyingInstrument_58.insert(UnderlyingFlowScheduleType_58.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_58("STRING_2031194082");
    noQuoteSets_0_1.set(UnderlyingInstrRegistry_58);
    UnderlyingInstrument_58.insert(UnderlyingInstrRegistry_58.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_58("LOCALMKTDATE_470237143");
    noQuoteSets_0_1.set(UnderlyingIssueDate_58);
    UnderlyingInstrument_58.insert(UnderlyingIssueDate_58.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_58("STRING_1162552497");
    noQuoteSets_0_1.set(UnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(UnderlyingIssuer_58.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_58("STRING_1157504249");
    noQuoteSets_0_1.set(UnderlyingLocaleOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingLocaleOfIssue_58.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_58("LOCALMKTDATE_2080268467");
    noQuoteSets_0_1.set(UnderlyingMaturityDate_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityDate_58.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_58("MONTHYEAR_1776100895");
    noQuoteSets_0_1.set(UnderlyingMaturityMonthYear_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityMonthYear_58.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_58("TZTIMEONLY_86389463");
    noQuoteSets_0_1.set(UnderlyingMaturityTime_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityTime_58.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_58;
    UnderlyingNotionalPercentageOutstanding_58.setString("18.140000");
    noQuoteSets_0_1.set(UnderlyingNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_58('6');
    noQuoteSets_0_1.set(UnderlyingOptAttribute_58);
    UnderlyingInstrument_58.insert(UnderlyingOptAttribute_58.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_58;
    UnderlyingOriginalNotionalPercentageOutstanding_58.setString("15.470000");
    noQuoteSets_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingOriginalNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_58("STRING_311137837");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasure_58.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_58;
    UnderlyingPriceUnitOfMeasureQty_58.setString("4756290");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasureQty_58.getString());
    FIX::UnderlyingProduct UnderlyingProduct_58(1593945502);
    noQuoteSets_0_1.set(UnderlyingProduct_58);
    UnderlyingInstrument_58.insert(UnderlyingProduct_58.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_58(449906555);
    noQuoteSets_0_1.set(UnderlyingPutOrCall_58);
    UnderlyingInstrument_58.insert(UnderlyingPutOrCall_58.getString());
    FIX::UnderlyingPx UnderlyingPx_58;
    UnderlyingPx_58.setString("16451998");
    noQuoteSets_0_1.set(UnderlyingPx_58);
    UnderlyingInstrument_58.insert(UnderlyingPx_58.getString());
    FIX::UnderlyingQty UnderlyingQty_58;
    UnderlyingQty_58.setString("12714802");
    noQuoteSets_0_1.set(UnderlyingQty_58);
    UnderlyingInstrument_58.insert(UnderlyingQty_58.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_58("LOCALMKTDATE_1951754832");
    noQuoteSets_0_1.set(UnderlyingRedemptionDate_58);
    UnderlyingInstrument_58.insert(UnderlyingRedemptionDate_58.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_58("STRING_1783575458");
    noQuoteSets_0_1.set(UnderlyingRepoCollateralSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingRepoCollateralSecurityType_58.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_58;
    UnderlyingRepurchaseRate_58.setString("9.670000");
    noQuoteSets_0_1.set(UnderlyingRepurchaseRate_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseRate_58.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_58(936139965);
    noQuoteSets_0_1.set(UnderlyingRepurchaseTerm_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseTerm_58.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_58("STRING_335449136");
    noQuoteSets_0_1.set(UnderlyingRestructuringType_58);
    UnderlyingInstrument_58.insert(UnderlyingRestructuringType_58.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_58("STRING_1508151172");
    noQuoteSets_0_1.set(UnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityDesc_58.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_58("EXCHANGE_2134388300");
    noQuoteSets_0_1.set(UnderlyingSecurityExchange_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityExchange_58.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_58("STRING_1589381465");
    noQuoteSets_0_1.set(UnderlyingSecurityID_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityID_58.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_58("STRING_831220503");
    noQuoteSets_0_1.set(UnderlyingSecurityIDSource_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityIDSource_58.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_58("STRING_1254704895");
    noQuoteSets_0_1.set(UnderlyingSecuritySubType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecuritySubType_58.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_58("STRING_1636036970");
    noQuoteSets_0_1.set(UnderlyingSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityType_58.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_58("STRING_720114421");
    noQuoteSets_0_1.set(UnderlyingSeniority_58);
    UnderlyingInstrument_58.insert(UnderlyingSeniority_58.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_58("STRING_2104210002");
    noQuoteSets_0_1.set(UnderlyingSettlMethod_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlMethod_58.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_58(4);
    noQuoteSets_0_1.set(UnderlyingSettlementType_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlementType_58.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_58;
    UnderlyingStartValue_58.setString("15227077");
    noQuoteSets_0_1.set(UnderlyingStartValue_58);
    UnderlyingInstrument_58.insert(UnderlyingStartValue_58.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_58("STRING_1987920436");
    noQuoteSets_0_1.set(UnderlyingStateOrProvinceOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingStateOrProvinceOfIssue_58.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_58("GBP");
    noQuoteSets_0_1.set(UnderlyingStrikeCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikeCurrency_58.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_58;
    UnderlyingStrikePrice_58.setString("9979410");
    noQuoteSets_0_1.set(UnderlyingStrikePrice_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikePrice_58.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_58("STRING_537230116");
    noQuoteSets_0_1.set(UnderlyingSymbol_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbol_58.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_58("STRING_166393824");
    noQuoteSets_0_1.set(UnderlyingSymbolSfx_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbolSfx_58.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_58("STRING_1084330500");
    noQuoteSets_0_1.set(UnderlyingTimeUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingTimeUnit_58.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_58("STRING_1517401930");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasure_58.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_58;
    UnderlyingUnitOfMeasureQty_58.setString("8318447");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasureQty_58.getString());
    all_values.push_back(UnderlyingInstrument_58);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_120;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_120("STRING_1828539767");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_120);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltID_120.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_120("STRING_1307473781");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_120);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltIDSource_120.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_121("STRING_496510254");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltID_121.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_121("STRING_130962674");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltIDSource_121.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_115;
      FIX::UnderlyingStipType UnderlyingStipType_115("STRING_1767990463");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_115);
      UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipType_115.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_115("STRING_2082717507");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_115);
      UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipValue_115.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_115);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_116;
      FIX::UnderlyingStipType UnderlyingStipType_116("STRING_441281756");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_116);
      UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipType_116.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_116("STRING_1189727782");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_116);
      UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipValue_116.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_116);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_117;
      FIX::UnderlyingStipType UnderlyingStipType_117("STRING_871373824");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_117);
      UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipType_117.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_117("STRING_776730893");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_117);
      UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipValue_117.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_117);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_110;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_110("STRING_858278476");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyID_110.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_110('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyIDSource_110.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_110(1381615810);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyRole_110.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_110);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_217("STRING_1854665680");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_217);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubID_217.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_217(2101730232);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_217);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubIDType_217.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_218("STRING_2069709725");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_218);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubID_218.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_218(1988873834);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_218);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubIDType_218.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_111;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_111("STRING_1476954311");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyID_111.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_111('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyIDSource_111.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_111(445835483);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyRole_111.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_111);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_219("STRING_760603902");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_219);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubID_219.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_219(983065599);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_219);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubIDType_219.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_220("STRING_33641064");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_220);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubID_220.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_220(1844934402);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_220);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubIDType_220.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_221("STRING_352983881");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_221);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubID_221.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_221(865485779);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_221);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubIDType_221.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noQuoteSets_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_0;
    FIX::TargetPartyID TargetPartyID_0("STRING_34040000");
    noTargetPartyIDs_0_0.set(TargetPartyID_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyID_0.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_0('2');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyIDSource_0.getString());
    FIX::TargetPartyRole TargetPartyRole_0(1244009409);
    noTargetPartyIDs_0_0.set(TargetPartyRole_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyRole_0.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_1;
    FIX::TargetPartyID TargetPartyID_1("STRING_165002675");
    noTargetPartyIDs_0_1.set(TargetPartyID_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyID_1.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_1('8');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyIDSource_1.getString());
    FIX::TargetPartyRole TargetPartyRole_1(864516224);
    noTargetPartyIDs_0_1.set(TargetPartyRole_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyRole_1.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_1);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_2;
    FIX::TargetPartyID TargetPartyID_2("STRING_100236534");
    noTargetPartyIDs_0_2.set(TargetPartyID_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyID_2.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_2('1');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyIDSource_2.getString());
    FIX::TargetPartyRole TargetPartyRole_2(2054244006);
    noTargetPartyIDs_0_2.set(TargetPartyRole_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyRole_2.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_2);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
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
