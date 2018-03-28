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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MassQuoteAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> MassQuoteAcknowledgement_0;
  FIX::Account Account_14("STRING_2146738728");
  msg.set(Account_14);
  MassQuoteAcknowledgement_0.insert(Account_14.getString());
  FIX::AccountType AccountType_11(7);
  msg.set(AccountType_11);
  MassQuoteAcknowledgement_0.insert(AccountType_11.getString());
  FIX::AcctIDSource AcctIDSource_7(99);
  msg.set(AcctIDSource_7);
  MassQuoteAcknowledgement_0.insert(AcctIDSource_7.getString());
  FIX::EncodedText EncodedText_59("DATA_2140183378");
  msg.set(EncodedText_59);
  MassQuoteAcknowledgement_0.insert(EncodedText_59.getString());
  FIX::EncodedTextLen EncodedTextLen_59(1551931292);
  msg.set(EncodedTextLen_59);
  MassQuoteAcknowledgement_0.insert(EncodedTextLen_59.getString());
  FIX::QuoteCancelType QuoteCancelType_0(5);
  msg.set(QuoteCancelType_0);
  MassQuoteAcknowledgement_0.insert(QuoteCancelType_0.getString());
  FIX::QuoteID QuoteID_2("STRING_967671084");
  msg.set(QuoteID_2);
  MassQuoteAcknowledgement_0.insert(QuoteID_2.getString());
  FIX::QuoteRejectReason QuoteRejectReason_0(12);
  msg.set(QuoteRejectReason_0);
  MassQuoteAcknowledgement_0.insert(QuoteRejectReason_0.getString());
  FIX::QuoteReqID QuoteReqID_1("STRING_467424610");
  msg.set(QuoteReqID_1);
  MassQuoteAcknowledgement_0.insert(QuoteReqID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_1(3);
  msg.set(QuoteResponseLevel_1);
  MassQuoteAcknowledgement_0.insert(QuoteResponseLevel_1.getString());
  FIX::QuoteStatus QuoteStatus_0(17);
  msg.set(QuoteStatus_0);
  MassQuoteAcknowledgement_0.insert(QuoteStatus_0.getString());
  FIX::QuoteType QuoteType_3(3);
  msg.set(QuoteType_3);
  MassQuoteAcknowledgement_0.insert(QuoteType_3.getString());
  FIX::Text Text_59("STRING_78518657");
  msg.set(Text_59);
  MassQuoteAcknowledgement_0.insert(Text_59.getString());
  all_values.push_back(MassQuoteAcknowledgement_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_70;
    FIX::PartyID PartyID_70("STRING_1513458108");
    noPartyIDs_0_0.set(PartyID_70);
    Parties_NoPartyIDs_70.insert(PartyID_70.getString());
    FIX::PartyIDSource PartyIDSource_70('5');
    noPartyIDs_0_0.set(PartyIDSource_70);
    Parties_NoPartyIDs_70.insert(PartyIDSource_70.getString());
    FIX::PartyRole PartyRole_70(55);
    noPartyIDs_0_0.set(PartyRole_70);
    Parties_NoPartyIDs_70.insert(PartyRole_70.getString());
    all_values.push_back(Parties_NoPartyIDs_70);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_147;
      FIX::PartySubID PartySubID_147("STRING_470236504");
      noPartySubIDs_0_1_0.set(PartySubID_147);
      PtysSubGrp_NoPartySubIDs_147.insert(PartySubID_147.getString());
      FIX::PartySubIDType PartySubIDType_147(4);
      noPartySubIDs_0_1_0.set(PartySubIDType_147);
      PtysSubGrp_NoPartySubIDs_147.insert(PartySubIDType_147.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_147);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_148;
      FIX::PartySubID PartySubID_148("STRING_1996774495");
      noPartySubIDs_0_1_1.set(PartySubID_148);
      PtysSubGrp_NoPartySubIDs_148.insert(PartySubID_148.getString());
      FIX::PartySubIDType PartySubIDType_148(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_148);
      PtysSubGrp_NoPartySubIDs_148.insert(PartySubIDType_148.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_148);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_71;
    FIX::PartyID PartyID_71("STRING_373336437");
    noPartyIDs_0_1.set(PartyID_71);
    Parties_NoPartyIDs_71.insert(PartyID_71.getString());
    FIX::PartyIDSource PartyIDSource_71('9');
    noPartyIDs_0_1.set(PartyIDSource_71);
    Parties_NoPartyIDs_71.insert(PartyIDSource_71.getString());
    FIX::PartyRole PartyRole_71(75);
    noPartyIDs_0_1.set(PartyRole_71);
    Parties_NoPartyIDs_71.insert(PartyRole_71.getString());
    all_values.push_back(Parties_NoPartyIDs_71);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_149;
      FIX::PartySubID PartySubID_149("STRING_284637544");
      noPartySubIDs_1_1_0.set(PartySubID_149);
      PtysSubGrp_NoPartySubIDs_149.insert(PartySubID_149.getString());
      FIX::PartySubIDType PartySubIDType_149(6);
      noPartySubIDs_1_1_0.set(PartySubIDType_149);
      PtysSubGrp_NoPartySubIDs_149.insert(PartySubIDType_149.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_149);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_150;
      FIX::PartySubID PartySubID_150("STRING_145202295");
      noPartySubIDs_1_1_1.set(PartySubID_150);
      PtysSubGrp_NoPartySubIDs_150.insert(PartySubID_150.getString());
      FIX::PartySubIDType PartySubIDType_150(15);
      noPartySubIDs_1_1_1.set(PartySubIDType_150);
      PtysSubGrp_NoPartySubIDs_150.insert(PartySubIDType_150.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_150);

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
    FIX::LastFragment LastFragment_9(false);
    noQuoteSets_0_0.set(LastFragment_9);
    QuotSetAckGrp_NoQuoteSets_0.insert(LastFragment_9.getString());
    FIX::QuoteSetID QuoteSetID_1("STRING_1478409446");
    noQuoteSets_0_0.set(QuoteSetID_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetID_1.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_1(FIX::UTCTIMESTAMP(10, 51, 25, 18, 4, 2011));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_1.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_0(680154305);
    noQuoteSets_0_0.set(TotNoAccQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoAccQuotes_0.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_0(321821823);
    noQuoteSets_0_0.set(TotNoCxldQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoCxldQuotes_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_1(753450839);
    noQuoteSets_0_0.set(TotNoQuoteEntries_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_1.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_0(758672963);
    noQuoteSets_0_0.set(TotNoRejQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoRejQuotes_0.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_3;
      BidForwardPoints_3.setString("1194252");
      noQuoteEntries_0_1_0.set(BidForwardPoints_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints_3.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_3;
      BidForwardPoints2_3.setString("3528699");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints2_3.getString());
      FIX::BidPx BidPx_3;
      BidPx_3.setString("14396280");
      noQuoteEntries_0_1_0.set(BidPx_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidPx_3.getString());
      FIX::BidSize BidSize_3;
      BidSize_3.setString("2843650");
      noQuoteEntries_0_1_0.set(BidSize_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSize_3.getString());
      FIX::BidSpotRate BidSpotRate_3;
      BidSpotRate_3.setString("8231064");
      noQuoteEntries_0_1_0.set(BidSpotRate_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSpotRate_3.getString());
      FIX::BidYield BidYield_3;
      BidYield_3.setString("35.010000");
      noQuoteEntries_0_1_0.set(BidYield_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidYield_3.getString());
      FIX::BookingType BookingType_9(0);
      noQuoteEntries_0_1_0.set(BookingType_9);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BookingType_9.getString());
      FIX::Currency Currency_36("GBP");
      noQuoteEntries_0_1_0.set(Currency_36);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(Currency_36.getString());
      FIX::MidPx MidPx_3;
      MidPx_3.setString("17198439");
      noQuoteEntries_0_1_0.set(MidPx_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidPx_3.getString());
      FIX::MidYield MidYield_3;
      MidYield_3.setString("22.320000");
      noQuoteEntries_0_1_0.set(MidYield_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidYield_3.getString());
      FIX::OfferForwardPoints OfferForwardPoints_3;
      OfferForwardPoints_3.setString("18211407");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints_3.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_3;
      OfferForwardPoints2_3.setString("20044815");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_3.getString());
      FIX::OfferPx OfferPx_3;
      OfferPx_3.setString("19177100");
      noQuoteEntries_0_1_0.set(OfferPx_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferPx_3.getString());
      FIX::OfferSize OfferSize_3;
      OfferSize_3.setString("19663430");
      noQuoteEntries_0_1_0.set(OfferSize_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSize_3.getString());
      FIX::OfferSpotRate OfferSpotRate_3;
      OfferSpotRate_3.setString("1749966");
      noQuoteEntries_0_1_0.set(OfferSpotRate_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSpotRate_3.getString());
      FIX::OfferYield OfferYield_3;
      OfferYield_3.setString("13.730000");
      noQuoteEntries_0_1_0.set(OfferYield_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferYield_3.getString());
      FIX::OrdType OrdType_36('I');
      noQuoteEntries_0_1_0.set(OrdType_36);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrdType_36.getString());
      FIX::OrderCapacity OrderCapacity_12('G');
      noQuoteEntries_0_1_0.set(OrderCapacity_12);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderCapacity_12.getString());
      FIX::OrderQty2 OrderQty2_4;
      OrderQty2_4.setString("8821570");
      noQuoteEntries_0_1_0.set(OrderQty2_4);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderQty2_4.getString());
      FIX::OrderRestrictions OrderRestrictions_7("MULTIPLECHARVALUE_5");
      noQuoteEntries_0_1_0.set(OrderRestrictions_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderRestrictions_7.getString());
      FIX::QuoteEntryID QuoteEntryID_8("STRING_388779560");
      noQuoteEntries_0_1_0.set(QuoteEntryID_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryID_8.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_0(2009814699);
      noQuoteEntries_0_1_0.set(QuoteEntryRejectReason_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryRejectReason_0.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_0(0);
      noQuoteEntries_0_1_0.set(QuoteEntryStatus_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryStatus_0.getString());
      FIX::SettlDate SettlDate_28("LOCALMKTDATE_1242847439");
      noQuoteEntries_0_1_0.set(SettlDate_28);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate_28.getString());
      FIX::SettlDate2 SettlDate2_4("LOCALMKTDATE_1457413266");
      noQuoteEntries_0_1_0.set(SettlDate2_4);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate2_4.getString());
      FIX::TradingSessionID TradingSessionID_40("STRING_6");
      noQuoteEntries_0_1_0.set(TradingSessionID_40);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionID_40.getString());
      FIX::TradingSessionSubID TradingSessionSubID_40("STRING_3");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_40);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionSubID_40.getString());
      FIX::TransactTime TransactTime_30(FIX::UTCTIMESTAMP(14, 40, 36, 2, 4, 2001));
      noQuoteEntries_0_1_0.set(TransactTime_30);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TransactTime_30.getString());
      FIX::ValidUntilTime ValidUntilTime_4(FIX::UTCTIMESTAMP(20, 25, 21, 19, 3, 2014));
      noQuoteEntries_0_1_0.set(ValidUntilTime_4);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(ValidUntilTime_4.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_63;
        FIX::EncodedLegIssuer EncodedLegIssuer_63("DATA_30184832");
        noLegs_0_0_2_0.set(EncodedLegIssuer_63);
        InstrumentLeg_63.insert(EncodedLegIssuer_63.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_63(1551222394);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_63);
        InstrumentLeg_63.insert(EncodedLegIssuerLen_63.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_63("DATA_1999854308");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_63);
        InstrumentLeg_63.insert(EncodedLegSecurityDesc_63.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_63(205181503);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_63);
        InstrumentLeg_63.insert(EncodedLegSecurityDescLen_63.getString());
        FIX::LegCFICode LegCFICode_63("STRING_856690119");
        noLegs_0_0_2_0.set(LegCFICode_63);
        InstrumentLeg_63.insert(LegCFICode_63.getString());
        FIX::LegContractMultiplier LegContractMultiplier_63;
        LegContractMultiplier_63.setString("19631710");
        noLegs_0_0_2_0.set(LegContractMultiplier_63);
        InstrumentLeg_63.insert(LegContractMultiplier_63.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_63(1858587620);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_63);
        InstrumentLeg_63.insert(LegContractMultiplierUnit_63.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_63("MONTHYEAR_1738847213");
        noLegs_0_0_2_0.set(LegContractSettlMonth_63);
        InstrumentLeg_63.insert(LegContractSettlMonth_63.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_63("COUNTRY_2063644921");
        noLegs_0_0_2_0.set(LegCountryOfIssue_63);
        InstrumentLeg_63.insert(LegCountryOfIssue_63.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_63("LOCALMKTDATE_99883533");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_63);
        InstrumentLeg_63.insert(LegCouponPaymentDate_63.getString());
        FIX::LegCouponRate LegCouponRate_63;
        LegCouponRate_63.setString("82.640000");
        noLegs_0_0_2_0.set(LegCouponRate_63);
        InstrumentLeg_63.insert(LegCouponRate_63.getString());
        FIX::LegCreditRating LegCreditRating_63("STRING_1121463323");
        noLegs_0_0_2_0.set(LegCreditRating_63);
        InstrumentLeg_63.insert(LegCreditRating_63.getString());
        FIX::LegCurrency LegCurrency_63("CAN");
        noLegs_0_0_2_0.set(LegCurrency_63);
        InstrumentLeg_63.insert(LegCurrency_63.getString());
        FIX::LegDatedDate LegDatedDate_63("LOCALMKTDATE_859436030");
        noLegs_0_0_2_0.set(LegDatedDate_63);
        InstrumentLeg_63.insert(LegDatedDate_63.getString());
        FIX::LegExerciseStyle LegExerciseStyle_63(759916587);
        noLegs_0_0_2_0.set(LegExerciseStyle_63);
        InstrumentLeg_63.insert(LegExerciseStyle_63.getString());
        FIX::LegFactor LegFactor_63;
        LegFactor_63.setString("9744883");
        noLegs_0_0_2_0.set(LegFactor_63);
        InstrumentLeg_63.insert(LegFactor_63.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_63(1356081701);
        noLegs_0_0_2_0.set(LegFlowScheduleType_63);
        InstrumentLeg_63.insert(LegFlowScheduleType_63.getString());
        FIX::LegInstrRegistry LegInstrRegistry_63("STRING_2010870247");
        noLegs_0_0_2_0.set(LegInstrRegistry_63);
        InstrumentLeg_63.insert(LegInstrRegistry_63.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_63("LOCALMKTDATE_1157294097");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_63);
        InstrumentLeg_63.insert(LegInterestAccrualDate_63.getString());
        FIX::LegIssueDate LegIssueDate_63("LOCALMKTDATE_58113659");
        noLegs_0_0_2_0.set(LegIssueDate_63);
        InstrumentLeg_63.insert(LegIssueDate_63.getString());
        FIX::LegIssuer LegIssuer_63("STRING_406484655");
        noLegs_0_0_2_0.set(LegIssuer_63);
        InstrumentLeg_63.insert(LegIssuer_63.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_63("STRING_1624464874");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_63);
        InstrumentLeg_63.insert(LegLocaleOfIssue_63.getString());
        FIX::LegMaturityDate LegMaturityDate_63("LOCALMKTDATE_1730735706");
        noLegs_0_0_2_0.set(LegMaturityDate_63);
        InstrumentLeg_63.insert(LegMaturityDate_63.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_63("MONTHYEAR_671292563");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_63);
        InstrumentLeg_63.insert(LegMaturityMonthYear_63.getString());
        FIX::LegMaturityTime LegMaturityTime_63("TZTIMEONLY_77807872");
        noLegs_0_0_2_0.set(LegMaturityTime_63);
        InstrumentLeg_63.insert(LegMaturityTime_63.getString());
        FIX::LegOptAttribute LegOptAttribute_63('4');
        noLegs_0_0_2_0.set(LegOptAttribute_63);
        InstrumentLeg_63.insert(LegOptAttribute_63.getString());
        FIX::LegOptionRatio LegOptionRatio_63;
        LegOptionRatio_63.setString("10311467");
        noLegs_0_0_2_0.set(LegOptionRatio_63);
        InstrumentLeg_63.insert(LegOptionRatio_63.getString());
        FIX::LegPool LegPool_63("STRING_250994838");
        noLegs_0_0_2_0.set(LegPool_63);
        InstrumentLeg_63.insert(LegPool_63.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_63("STRING_103628125");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_63);
        InstrumentLeg_63.insert(LegPriceUnitOfMeasure_63.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_63;
        LegPriceUnitOfMeasureQty_63.setString("10646580");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_63);
        InstrumentLeg_63.insert(LegPriceUnitOfMeasureQty_63.getString());
        FIX::LegProduct LegProduct_63(281179670);
        noLegs_0_0_2_0.set(LegProduct_63);
        InstrumentLeg_63.insert(LegProduct_63.getString());
        FIX::LegPutOrCall LegPutOrCall_63(1654850519);
        noLegs_0_0_2_0.set(LegPutOrCall_63);
        InstrumentLeg_63.insert(LegPutOrCall_63.getString());
        FIX::LegRatioQty LegRatioQty_63;
        LegRatioQty_63.setString("9170287");
        noLegs_0_0_2_0.set(LegRatioQty_63);
        InstrumentLeg_63.insert(LegRatioQty_63.getString());
        FIX::LegRedemptionDate LegRedemptionDate_63("LOCALMKTDATE_486361173");
        noLegs_0_0_2_0.set(LegRedemptionDate_63);
        InstrumentLeg_63.insert(LegRedemptionDate_63.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_63("STRING_364056991");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_63);
        InstrumentLeg_63.insert(LegRepoCollateralSecurityType_63.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_63;
        LegRepurchaseRate_63.setString("61.180000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_63);
        InstrumentLeg_63.insert(LegRepurchaseRate_63.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_63(197465146);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_63);
        InstrumentLeg_63.insert(LegRepurchaseTerm_63.getString());
        FIX::LegSecurityDesc LegSecurityDesc_63("STRING_2102904204");
        noLegs_0_0_2_0.set(LegSecurityDesc_63);
        InstrumentLeg_63.insert(LegSecurityDesc_63.getString());
        FIX::LegSecurityExchange LegSecurityExchange_63("EXCHANGE_648877391");
        noLegs_0_0_2_0.set(LegSecurityExchange_63);
        InstrumentLeg_63.insert(LegSecurityExchange_63.getString());
        FIX::LegSecurityID LegSecurityID_63("STRING_297348679");
        noLegs_0_0_2_0.set(LegSecurityID_63);
        InstrumentLeg_63.insert(LegSecurityID_63.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_63("STRING_1556598821");
        noLegs_0_0_2_0.set(LegSecurityIDSource_63);
        InstrumentLeg_63.insert(LegSecurityIDSource_63.getString());
        FIX::LegSecuritySubType LegSecuritySubType_63("STRING_1770340714");
        noLegs_0_0_2_0.set(LegSecuritySubType_63);
        InstrumentLeg_63.insert(LegSecuritySubType_63.getString());
        FIX::LegSecurityType LegSecurityType_63("STRING_1640079651");
        noLegs_0_0_2_0.set(LegSecurityType_63);
        InstrumentLeg_63.insert(LegSecurityType_63.getString());
        FIX::LegSide LegSide_63('3');
        noLegs_0_0_2_0.set(LegSide_63);
        InstrumentLeg_63.insert(LegSide_63.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_63("STRING_482293096");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_63);
        InstrumentLeg_63.insert(LegStateOrProvinceOfIssue_63.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_63("JPY");
        noLegs_0_0_2_0.set(LegStrikeCurrency_63);
        InstrumentLeg_63.insert(LegStrikeCurrency_63.getString());
        FIX::LegStrikePrice LegStrikePrice_63;
        LegStrikePrice_63.setString("18383747");
        noLegs_0_0_2_0.set(LegStrikePrice_63);
        InstrumentLeg_63.insert(LegStrikePrice_63.getString());
        FIX::LegSymbol LegSymbol_63("STRING_115899190");
        noLegs_0_0_2_0.set(LegSymbol_63);
        InstrumentLeg_63.insert(LegSymbol_63.getString());
        FIX::LegSymbolSfx LegSymbolSfx_63("STRING_304521845");
        noLegs_0_0_2_0.set(LegSymbolSfx_63);
        InstrumentLeg_63.insert(LegSymbolSfx_63.getString());
        FIX::LegTimeUnit LegTimeUnit_63("STRING_1896488457");
        noLegs_0_0_2_0.set(LegTimeUnit_63);
        InstrumentLeg_63.insert(LegTimeUnit_63.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_63("STRING_522383845");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_63);
        InstrumentLeg_63.insert(LegUnitOfMeasure_63.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_63;
        LegUnitOfMeasureQty_63.setString("19289867");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_63);
        InstrumentLeg_63.insert(LegUnitOfMeasureQty_63.getString());
        all_values.push_back(InstrumentLeg_63);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_129;
          FIX::LegSecurityAltID LegSecurityAltID_129("STRING_1193676408");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_129);
          LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltID_129.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_129("STRING_2006794592");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_129);
          LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltIDSource_129.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_129);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_130;
          FIX::LegSecurityAltID LegSecurityAltID_130("STRING_1949856314");
          noLegSecurityAltID_0_0_0_3_1.set(LegSecurityAltID_130);
          LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltID_130.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_130("STRING_77339523");
          noLegSecurityAltID_0_0_0_3_1.set(LegSecurityAltIDSource_130);
          LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltIDSource_130.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_130);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_64;
        FIX::EncodedLegIssuer EncodedLegIssuer_64("DATA_110305782");
        noLegs_0_0_2_1.set(EncodedLegIssuer_64);
        InstrumentLeg_64.insert(EncodedLegIssuer_64.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_64(2053484440);
        noLegs_0_0_2_1.set(EncodedLegIssuerLen_64);
        InstrumentLeg_64.insert(EncodedLegIssuerLen_64.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_64("DATA_1141997567");
        noLegs_0_0_2_1.set(EncodedLegSecurityDesc_64);
        InstrumentLeg_64.insert(EncodedLegSecurityDesc_64.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_64(391485453);
        noLegs_0_0_2_1.set(EncodedLegSecurityDescLen_64);
        InstrumentLeg_64.insert(EncodedLegSecurityDescLen_64.getString());
        FIX::LegCFICode LegCFICode_64("STRING_1560851311");
        noLegs_0_0_2_1.set(LegCFICode_64);
        InstrumentLeg_64.insert(LegCFICode_64.getString());
        FIX::LegContractMultiplier LegContractMultiplier_64;
        LegContractMultiplier_64.setString("20590262");
        noLegs_0_0_2_1.set(LegContractMultiplier_64);
        InstrumentLeg_64.insert(LegContractMultiplier_64.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_64(877846626);
        noLegs_0_0_2_1.set(LegContractMultiplierUnit_64);
        InstrumentLeg_64.insert(LegContractMultiplierUnit_64.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_64("MONTHYEAR_1924908302");
        noLegs_0_0_2_1.set(LegContractSettlMonth_64);
        InstrumentLeg_64.insert(LegContractSettlMonth_64.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_64("COUNTRY_644258742");
        noLegs_0_0_2_1.set(LegCountryOfIssue_64);
        InstrumentLeg_64.insert(LegCountryOfIssue_64.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_64("LOCALMKTDATE_1075311772");
        noLegs_0_0_2_1.set(LegCouponPaymentDate_64);
        InstrumentLeg_64.insert(LegCouponPaymentDate_64.getString());
        FIX::LegCouponRate LegCouponRate_64;
        LegCouponRate_64.setString("88.590000");
        noLegs_0_0_2_1.set(LegCouponRate_64);
        InstrumentLeg_64.insert(LegCouponRate_64.getString());
        FIX::LegCreditRating LegCreditRating_64("STRING_1293136133");
        noLegs_0_0_2_1.set(LegCreditRating_64);
        InstrumentLeg_64.insert(LegCreditRating_64.getString());
        FIX::LegCurrency LegCurrency_64("JPY");
        noLegs_0_0_2_1.set(LegCurrency_64);
        InstrumentLeg_64.insert(LegCurrency_64.getString());
        FIX::LegDatedDate LegDatedDate_64("LOCALMKTDATE_915993199");
        noLegs_0_0_2_1.set(LegDatedDate_64);
        InstrumentLeg_64.insert(LegDatedDate_64.getString());
        FIX::LegExerciseStyle LegExerciseStyle_64(865256455);
        noLegs_0_0_2_1.set(LegExerciseStyle_64);
        InstrumentLeg_64.insert(LegExerciseStyle_64.getString());
        FIX::LegFactor LegFactor_64;
        LegFactor_64.setString("16096670");
        noLegs_0_0_2_1.set(LegFactor_64);
        InstrumentLeg_64.insert(LegFactor_64.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_64(1398286295);
        noLegs_0_0_2_1.set(LegFlowScheduleType_64);
        InstrumentLeg_64.insert(LegFlowScheduleType_64.getString());
        FIX::LegInstrRegistry LegInstrRegistry_64("STRING_1117769045");
        noLegs_0_0_2_1.set(LegInstrRegistry_64);
        InstrumentLeg_64.insert(LegInstrRegistry_64.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_64("LOCALMKTDATE_756894836");
        noLegs_0_0_2_1.set(LegInterestAccrualDate_64);
        InstrumentLeg_64.insert(LegInterestAccrualDate_64.getString());
        FIX::LegIssueDate LegIssueDate_64("LOCALMKTDATE_1089177445");
        noLegs_0_0_2_1.set(LegIssueDate_64);
        InstrumentLeg_64.insert(LegIssueDate_64.getString());
        FIX::LegIssuer LegIssuer_64("STRING_1233668235");
        noLegs_0_0_2_1.set(LegIssuer_64);
        InstrumentLeg_64.insert(LegIssuer_64.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_64("STRING_1061416682");
        noLegs_0_0_2_1.set(LegLocaleOfIssue_64);
        InstrumentLeg_64.insert(LegLocaleOfIssue_64.getString());
        FIX::LegMaturityDate LegMaturityDate_64("LOCALMKTDATE_838182254");
        noLegs_0_0_2_1.set(LegMaturityDate_64);
        InstrumentLeg_64.insert(LegMaturityDate_64.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_64("MONTHYEAR_1756052080");
        noLegs_0_0_2_1.set(LegMaturityMonthYear_64);
        InstrumentLeg_64.insert(LegMaturityMonthYear_64.getString());
        FIX::LegMaturityTime LegMaturityTime_64("TZTIMEONLY_842919754");
        noLegs_0_0_2_1.set(LegMaturityTime_64);
        InstrumentLeg_64.insert(LegMaturityTime_64.getString());
        FIX::LegOptAttribute LegOptAttribute_64('1');
        noLegs_0_0_2_1.set(LegOptAttribute_64);
        InstrumentLeg_64.insert(LegOptAttribute_64.getString());
        FIX::LegOptionRatio LegOptionRatio_64;
        LegOptionRatio_64.setString("8022448");
        noLegs_0_0_2_1.set(LegOptionRatio_64);
        InstrumentLeg_64.insert(LegOptionRatio_64.getString());
        FIX::LegPool LegPool_64("STRING_702230698");
        noLegs_0_0_2_1.set(LegPool_64);
        InstrumentLeg_64.insert(LegPool_64.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_64("STRING_2120295435");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasure_64);
        InstrumentLeg_64.insert(LegPriceUnitOfMeasure_64.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_64;
        LegPriceUnitOfMeasureQty_64.setString("8795843");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasureQty_64);
        InstrumentLeg_64.insert(LegPriceUnitOfMeasureQty_64.getString());
        FIX::LegProduct LegProduct_64(812536480);
        noLegs_0_0_2_1.set(LegProduct_64);
        InstrumentLeg_64.insert(LegProduct_64.getString());
        FIX::LegPutOrCall LegPutOrCall_64(2026296227);
        noLegs_0_0_2_1.set(LegPutOrCall_64);
        InstrumentLeg_64.insert(LegPutOrCall_64.getString());
        FIX::LegRatioQty LegRatioQty_64;
        LegRatioQty_64.setString("20215819");
        noLegs_0_0_2_1.set(LegRatioQty_64);
        InstrumentLeg_64.insert(LegRatioQty_64.getString());
        FIX::LegRedemptionDate LegRedemptionDate_64("LOCALMKTDATE_1204021933");
        noLegs_0_0_2_1.set(LegRedemptionDate_64);
        InstrumentLeg_64.insert(LegRedemptionDate_64.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_64("STRING_1439663891");
        noLegs_0_0_2_1.set(LegRepoCollateralSecurityType_64);
        InstrumentLeg_64.insert(LegRepoCollateralSecurityType_64.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_64;
        LegRepurchaseRate_64.setString("45.550000");
        noLegs_0_0_2_1.set(LegRepurchaseRate_64);
        InstrumentLeg_64.insert(LegRepurchaseRate_64.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_64(2081868560);
        noLegs_0_0_2_1.set(LegRepurchaseTerm_64);
        InstrumentLeg_64.insert(LegRepurchaseTerm_64.getString());
        FIX::LegSecurityDesc LegSecurityDesc_64("STRING_1217088545");
        noLegs_0_0_2_1.set(LegSecurityDesc_64);
        InstrumentLeg_64.insert(LegSecurityDesc_64.getString());
        FIX::LegSecurityExchange LegSecurityExchange_64("EXCHANGE_429899649");
        noLegs_0_0_2_1.set(LegSecurityExchange_64);
        InstrumentLeg_64.insert(LegSecurityExchange_64.getString());
        FIX::LegSecurityID LegSecurityID_64("STRING_1009696684");
        noLegs_0_0_2_1.set(LegSecurityID_64);
        InstrumentLeg_64.insert(LegSecurityID_64.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_64("STRING_949933756");
        noLegs_0_0_2_1.set(LegSecurityIDSource_64);
        InstrumentLeg_64.insert(LegSecurityIDSource_64.getString());
        FIX::LegSecuritySubType LegSecuritySubType_64("STRING_1723035782");
        noLegs_0_0_2_1.set(LegSecuritySubType_64);
        InstrumentLeg_64.insert(LegSecuritySubType_64.getString());
        FIX::LegSecurityType LegSecurityType_64("STRING_234873488");
        noLegs_0_0_2_1.set(LegSecurityType_64);
        InstrumentLeg_64.insert(LegSecurityType_64.getString());
        FIX::LegSide LegSide_64('9');
        noLegs_0_0_2_1.set(LegSide_64);
        InstrumentLeg_64.insert(LegSide_64.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_64("STRING_491545333");
        noLegs_0_0_2_1.set(LegStateOrProvinceOfIssue_64);
        InstrumentLeg_64.insert(LegStateOrProvinceOfIssue_64.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_64("USD");
        noLegs_0_0_2_1.set(LegStrikeCurrency_64);
        InstrumentLeg_64.insert(LegStrikeCurrency_64.getString());
        FIX::LegStrikePrice LegStrikePrice_64;
        LegStrikePrice_64.setString("18898316");
        noLegs_0_0_2_1.set(LegStrikePrice_64);
        InstrumentLeg_64.insert(LegStrikePrice_64.getString());
        FIX::LegSymbol LegSymbol_64("STRING_70415340");
        noLegs_0_0_2_1.set(LegSymbol_64);
        InstrumentLeg_64.insert(LegSymbol_64.getString());
        FIX::LegSymbolSfx LegSymbolSfx_64("STRING_310972417");
        noLegs_0_0_2_1.set(LegSymbolSfx_64);
        InstrumentLeg_64.insert(LegSymbolSfx_64.getString());
        FIX::LegTimeUnit LegTimeUnit_64("STRING_831525426");
        noLegs_0_0_2_1.set(LegTimeUnit_64);
        InstrumentLeg_64.insert(LegTimeUnit_64.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_64("STRING_1304083576");
        noLegs_0_0_2_1.set(LegUnitOfMeasure_64);
        InstrumentLeg_64.insert(LegUnitOfMeasure_64.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_64;
        LegUnitOfMeasureQty_64.setString("13723890");
        noLegs_0_0_2_1.set(LegUnitOfMeasureQty_64);
        InstrumentLeg_64.insert(LegUnitOfMeasureQty_64.getString());
        all_values.push_back(InstrumentLeg_64);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_131;
          FIX::LegSecurityAltID LegSecurityAltID_131("STRING_912652008");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltID_131);
          LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltID_131.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_131("STRING_67825205");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltIDSource_131);
          LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltIDSource_131.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_131);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_132;
          FIX::LegSecurityAltID LegSecurityAltID_132("STRING_1840146801");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltID_132);
          LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltID_132.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_132("STRING_1714896849");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltIDSource_132);
          LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltIDSource_132.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_132);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_133;
          FIX::LegSecurityAltID LegSecurityAltID_133("STRING_770055903");
          noLegSecurityAltID_0_0_1_3_2.set(LegSecurityAltID_133);
          LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltID_133.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_133("STRING_1812958588");
          noLegSecurityAltID_0_0_1_3_2.set(LegSecurityAltIDSource_133);
          LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltIDSource_133.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_133);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      // Instrument
      multiset<string> Instrument_39;
      FIX::AttachmentPoint AttachmentPoint_39;
      AttachmentPoint_39.setString("75.650000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_39);
      Instrument_39.insert(AttachmentPoint_39.getString());
      FIX::CFICode CFICode_39("STRING_1582592383");
      noQuoteEntries_0_1_0.set(CFICode_39);
      Instrument_39.insert(CFICode_39.getString());
      FIX::CPProgram CPProgram_39(99);
      noQuoteEntries_0_1_0.set(CPProgram_39);
      Instrument_39.insert(CPProgram_39.getString());
      FIX::CPRegType CPRegType_39("STRING_321095849");
      noQuoteEntries_0_1_0.set(CPRegType_39);
      Instrument_39.insert(CPRegType_39.getString());
      FIX::CapPrice CapPrice_39;
      CapPrice_39.setString("6391306");
      noQuoteEntries_0_1_0.set(CapPrice_39);
      Instrument_39.insert(CapPrice_39.getString());
      FIX::ContractMultiplier ContractMultiplier_39;
      ContractMultiplier_39.setString("9839514");
      noQuoteEntries_0_1_0.set(ContractMultiplier_39);
      Instrument_39.insert(ContractMultiplier_39.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_39(2);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_39);
      Instrument_39.insert(ContractMultiplierUnit_39.getString());
      FIX::ContractSettlMonth ContractSettlMonth_39("MONTHYEAR_573515581");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_39);
      Instrument_39.insert(ContractSettlMonth_39.getString());
      FIX::CountryOfIssue CountryOfIssue_39("COUNTRY_53556308");
      noQuoteEntries_0_1_0.set(CountryOfIssue_39);
      Instrument_39.insert(CountryOfIssue_39.getString());
      FIX::CouponPaymentDate CouponPaymentDate_39("LOCALMKTDATE_536636406");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_39);
      Instrument_39.insert(CouponPaymentDate_39.getString());
      FIX::CouponRate CouponRate_39;
      CouponRate_39.setString("22.650000");
      noQuoteEntries_0_1_0.set(CouponRate_39);
      Instrument_39.insert(CouponRate_39.getString());
      FIX::CreditRating CreditRating_39("STRING_1003490065");
      noQuoteEntries_0_1_0.set(CreditRating_39);
      Instrument_39.insert(CreditRating_39.getString());
      FIX::DatedDate DatedDate_39("LOCALMKTDATE_112188540");
      noQuoteEntries_0_1_0.set(DatedDate_39);
      Instrument_39.insert(DatedDate_39.getString());
      FIX::DetachmentPoint DetachmentPoint_39;
      DetachmentPoint_39.setString("57.530000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_39);
      Instrument_39.insert(DetachmentPoint_39.getString());
      FIX::EncodedIssuer EncodedIssuer_39("DATA_1095384205");
      noQuoteEntries_0_1_0.set(EncodedIssuer_39);
      Instrument_39.insert(EncodedIssuer_39.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_39(603733874);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_39);
      Instrument_39.insert(EncodedIssuerLen_39.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_39("DATA_770732048");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_39);
      Instrument_39.insert(EncodedSecurityDesc_39.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_39(649461786);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_39);
      Instrument_39.insert(EncodedSecurityDescLen_39.getString());
      FIX::ExerciseStyle ExerciseStyle_39(1);
      noQuoteEntries_0_1_0.set(ExerciseStyle_39);
      Instrument_39.insert(ExerciseStyle_39.getString());
      FIX::Factor Factor_39;
      Factor_39.setString("8411473");
      noQuoteEntries_0_1_0.set(Factor_39);
      Instrument_39.insert(Factor_39.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_39(false);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_39);
      Instrument_39.insert(FlexProductEligibilityIndicator_39.getString());
      FIX::FlexibleIndicator FlexibleIndicator_39(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_39);
      Instrument_39.insert(FlexibleIndicator_39.getString());
      FIX::FloorPrice FloorPrice_39;
      FloorPrice_39.setString("21452309");
      noQuoteEntries_0_1_0.set(FloorPrice_39);
      Instrument_39.insert(FloorPrice_39.getString());
      FIX::FlowScheduleType FlowScheduleType_39(4);
      noQuoteEntries_0_1_0.set(FlowScheduleType_39);
      Instrument_39.insert(FlowScheduleType_39.getString());
      FIX::InstrRegistry InstrRegistry_39("STRING_699831313");
      noQuoteEntries_0_1_0.set(InstrRegistry_39);
      Instrument_39.insert(InstrRegistry_39.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_39('9');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_39);
      Instrument_39.insert(InstrmtAssignmentMethod_39.getString());
      FIX::InterestAccrualDate InterestAccrualDate_39("LOCALMKTDATE_253164859");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_39);
      Instrument_39.insert(InterestAccrualDate_39.getString());
      FIX::IssueDate IssueDate_39("LOCALMKTDATE_392494466");
      noQuoteEntries_0_1_0.set(IssueDate_39);
      Instrument_39.insert(IssueDate_39.getString());
      FIX::Issuer Issuer_39("STRING_477812527");
      noQuoteEntries_0_1_0.set(Issuer_39);
      Instrument_39.insert(Issuer_39.getString());
      FIX::ListMethod ListMethod_39(0);
      noQuoteEntries_0_1_0.set(ListMethod_39);
      Instrument_39.insert(ListMethod_39.getString());
      FIX::LocaleOfIssue LocaleOfIssue_39("STRING_57969406");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_39);
      Instrument_39.insert(LocaleOfIssue_39.getString());
      FIX::MaturityDate MaturityDate_39("LOCALMKTDATE_924810092");
      noQuoteEntries_0_1_0.set(MaturityDate_39);
      Instrument_39.insert(MaturityDate_39.getString());
      FIX::MaturityMonthYear MaturityMonthYear_39("MONTHYEAR_458329497");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_39);
      Instrument_39.insert(MaturityMonthYear_39.getString());
      FIX::MaturityTime MaturityTime_39("TZTIMEONLY_1749740574");
      noQuoteEntries_0_1_0.set(MaturityTime_39);
      Instrument_39.insert(MaturityTime_39.getString());
      FIX::MinPriceIncrement MinPriceIncrement_39;
      MinPriceIncrement_39.setString("12459059");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_39);
      Instrument_39.insert(MinPriceIncrement_39.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_39;
      MinPriceIncrementAmount_39.setString("10974601");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_39);
      Instrument_39.insert(MinPriceIncrementAmount_39.getString());
      FIX::NTPositionLimit NTPositionLimit_39(586208337);
      noQuoteEntries_0_1_0.set(NTPositionLimit_39);
      Instrument_39.insert(NTPositionLimit_39.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_39;
      NotionalPercentageOutstanding_39.setString("26.980000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_39);
      Instrument_39.insert(NotionalPercentageOutstanding_39.getString());
      FIX::OptAttribute OptAttribute_39('1');
      noQuoteEntries_0_1_0.set(OptAttribute_39);
      Instrument_39.insert(OptAttribute_39.getString());
      FIX::OptPayoutAmount OptPayoutAmount_39;
      OptPayoutAmount_39.setString("6397646");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_39);
      Instrument_39.insert(OptPayoutAmount_39.getString());
      FIX::OptPayoutType OptPayoutType_39(2);
      noQuoteEntries_0_1_0.set(OptPayoutType_39);
      Instrument_39.insert(OptPayoutType_39.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_39;
      OriginalNotionalPercentageOutstanding_39.setString("43.650000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_39);
      Instrument_39.insert(OriginalNotionalPercentageOutstanding_39.getString());
      FIX::Pool Pool_39("STRING_1643254711");
      noQuoteEntries_0_1_0.set(Pool_39);
      Instrument_39.insert(Pool_39.getString());
      FIX::PositionLimit PositionLimit_39(2001467644);
      noQuoteEntries_0_1_0.set(PositionLimit_39);
      Instrument_39.insert(PositionLimit_39.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_39("STRING_INT");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_39);
      Instrument_39.insert(PriceQuoteMethod_39.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_39("STRING_591155268");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_39);
      Instrument_39.insert(PriceUnitOfMeasure_39.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_39;
      PriceUnitOfMeasureQty_39.setString("4577178");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_39);
      Instrument_39.insert(PriceUnitOfMeasureQty_39.getString());
      FIX::Product Product_41(2);
      noQuoteEntries_0_1_0.set(Product_41);
      Instrument_39.insert(Product_41.getString());
      FIX::ProductComplex ProductComplex_39("STRING_1240617054");
      noQuoteEntries_0_1_0.set(ProductComplex_39);
      Instrument_39.insert(ProductComplex_39.getString());
      FIX::PutOrCall PutOrCall_39(1);
      noQuoteEntries_0_1_0.set(PutOrCall_39);
      Instrument_39.insert(PutOrCall_39.getString());
      FIX::RedemptionDate RedemptionDate_39("LOCALMKTDATE_241702260");
      noQuoteEntries_0_1_0.set(RedemptionDate_39);
      Instrument_39.insert(RedemptionDate_39.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_39("STRING_53567609");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_39);
      Instrument_39.insert(RepoCollateralSecurityType_39.getString());
      FIX::RepurchaseRate RepurchaseRate_39;
      RepurchaseRate_39.setString("70.060000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_39);
      Instrument_39.insert(RepurchaseRate_39.getString());
      FIX::RepurchaseTerm RepurchaseTerm_39(239449577);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_39);
      Instrument_39.insert(RepurchaseTerm_39.getString());
      FIX::RestructuringType RestructuringType_39("STRING_XR");
      noQuoteEntries_0_1_0.set(RestructuringType_39);
      Instrument_39.insert(RestructuringType_39.getString());
      FIX::SecurityDesc SecurityDesc_39("STRING_533754671");
      noQuoteEntries_0_1_0.set(SecurityDesc_39);
      Instrument_39.insert(SecurityDesc_39.getString());
      FIX::SecurityExchange SecurityExchange_39("EXCHANGE_1149848902");
      noQuoteEntries_0_1_0.set(SecurityExchange_39);
      Instrument_39.insert(SecurityExchange_39.getString());
      FIX::SecurityGroup SecurityGroup_39("STRING_492072122");
      noQuoteEntries_0_1_0.set(SecurityGroup_39);
      Instrument_39.insert(SecurityGroup_39.getString());
      FIX::SecurityID SecurityID_39("STRING_926249137");
      noQuoteEntries_0_1_0.set(SecurityID_39);
      Instrument_39.insert(SecurityID_39.getString());
      FIX::SecurityIDSource SecurityIDSource_39("STRING_A");
      noQuoteEntries_0_1_0.set(SecurityIDSource_39);
      Instrument_39.insert(SecurityIDSource_39.getString());
      FIX::SecurityStatus SecurityStatus_39("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityStatus_39);
      Instrument_39.insert(SecurityStatus_39.getString());
      FIX::SecuritySubType SecuritySubType_40("STRING_984218544");
      noQuoteEntries_0_1_0.set(SecuritySubType_40);
      Instrument_39.insert(SecuritySubType_40.getString());
      FIX::SecurityType SecurityType_41("STRING_PZFJ");
      noQuoteEntries_0_1_0.set(SecurityType_41);
      Instrument_39.insert(SecurityType_41.getString());
      FIX::Seniority Seniority_39("STRING_SR");
      noQuoteEntries_0_1_0.set(Seniority_39);
      Instrument_39.insert(Seniority_39.getString());
      FIX::SettlMethod SettlMethod_39('C');
      noQuoteEntries_0_1_0.set(SettlMethod_39);
      Instrument_39.insert(SettlMethod_39.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_39("STRING_1650893815");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_39);
      Instrument_39.insert(SettleOnOpenFlag_39.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_39("STRING_923598900");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_39);
      Instrument_39.insert(StateOrProvinceOfIssue_39.getString());
      FIX::StrikeCurrency StrikeCurrency_39("CHF");
      noQuoteEntries_0_1_0.set(StrikeCurrency_39);
      Instrument_39.insert(StrikeCurrency_39.getString());
      FIX::StrikeMultiplier StrikeMultiplier_39;
      StrikeMultiplier_39.setString("4470910");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_39);
      Instrument_39.insert(StrikeMultiplier_39.getString());
      FIX::StrikePrice StrikePrice_39;
      StrikePrice_39.setString("18124484");
      noQuoteEntries_0_1_0.set(StrikePrice_39);
      Instrument_39.insert(StrikePrice_39.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_39(2);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_39);
      Instrument_39.insert(StrikePriceBoundaryMethod_39.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_39;
      StrikePriceBoundaryPrecision_39.setString("53.650000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_39);
      Instrument_39.insert(StrikePriceBoundaryPrecision_39.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_39(2);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_39);
      Instrument_39.insert(StrikePriceDeterminationMethod_39.getString());
      FIX::StrikeValue StrikeValue_39;
      StrikeValue_39.setString("4518323");
      noQuoteEntries_0_1_0.set(StrikeValue_39);
      Instrument_39.insert(StrikeValue_39.getString());
      FIX::Symbol Symbol_39("STRING_183618187");
      noQuoteEntries_0_1_0.set(Symbol_39);
      Instrument_39.insert(Symbol_39.getString());
      FIX::SymbolSfx SymbolSfx_39("STRING_WI");
      noQuoteEntries_0_1_0.set(SymbolSfx_39);
      Instrument_39.insert(SymbolSfx_39.getString());
      FIX::TimeUnit TimeUnit_39("STRING_Min");
      noQuoteEntries_0_1_0.set(TimeUnit_39);
      Instrument_39.insert(TimeUnit_39.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_39(3);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_39);
      Instrument_39.insert(UnderlyingPriceDeterminationMethod_39.getString());
      FIX::UnitOfMeasure UnitOfMeasure_39("STRING_Bcf");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_39);
      Instrument_39.insert(UnitOfMeasure_39.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_39;
      UnitOfMeasureQty_39.setString("17133499");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_39);
      Instrument_39.insert(UnitOfMeasureQty_39.getString());
      FIX::ValuationMethod ValuationMethod_39("STRING_FUT");
      noQuoteEntries_0_1_0.set(ValuationMethod_39);
      Instrument_39.insert(ValuationMethod_39.getString());
      all_values.push_back(Instrument_39);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_78;
        FIX::ComplexEventCondition ComplexEventCondition_78(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventCondition_78.getString());
        FIX::ComplexEventPrice ComplexEventPrice_78;
        ComplexEventPrice_78.setString("653248");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPrice_78.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_78(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryMethod_78.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
        ComplexEventPriceBoundaryPrecision_78.setString("79.440000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryPrecision_78.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_78(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceTimeType_78.getString());
        FIX::ComplexEventType ComplexEventType_78(4);
        noComplexEvents_0_0_2_0.set(ComplexEventType_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventType_78.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
        ComplexOptPayoutAmount_78.setString("8597934");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexOptPayoutAmount_78.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_78);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_160;
          FIX::ComplexEventEndDate ComplexEventEndDate_160(FIX::UTCTIMESTAMP(9, 53, 58, 16, 6, 2016));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_160);
          ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventEndDate_160.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_160(FIX::UTCTIMESTAMP(14, 30, 14, 24, 8, 2007));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_160);
          ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventStartDate_160.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_160);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
            FIX::ComplexEventEndTime ComplexEventEndTime_335(FIX::UTCTIMEONLY(12, 26, 1));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_335);
            ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventEndTime_335.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_335(FIX::UTCTIMEONLY(12, 0, 54));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_335);
            ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventStartTime_335.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_336;
            FIX::ComplexEventEndTime ComplexEventEndTime_336(FIX::UTCTIMEONLY(3, 11, 53));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_336);
            ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventEndTime_336.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_336(FIX::UTCTIMEONLY(18, 26, 45));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_336);
            ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventStartTime_336.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_336);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_337;
            FIX::ComplexEventEndTime ComplexEventEndTime_337(FIX::UTCTIMEONLY(16, 30, 4));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventEndTime_337);
            ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventEndTime_337.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_337(FIX::UTCTIMEONLY(23, 55, 16));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventStartTime_337);
            ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventStartTime_337.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_337);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_161;
          FIX::ComplexEventEndDate ComplexEventEndDate_161(FIX::UTCTIMESTAMP(13, 30, 38, 1, 2, 2002));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_161);
          ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventEndDate_161.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_161(FIX::UTCTIMESTAMP(13, 34, 9, 18, 4, 2001));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_161);
          ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventStartDate_161.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_161);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_338;
            FIX::ComplexEventEndTime ComplexEventEndTime_338(FIX::UTCTIMEONLY(21, 15, 29));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_338);
            ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventEndTime_338.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_338(FIX::UTCTIMEONLY(1, 55, 39));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_338);
            ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventStartTime_338.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_338);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_339;
            FIX::ComplexEventEndTime ComplexEventEndTime_339(FIX::UTCTIMEONLY(3, 10, 48));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_339);
            ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventEndTime_339.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_339(FIX::UTCTIMEONLY(13, 43, 35));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_339);
            ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventStartTime_339.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_339);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_162;
          FIX::ComplexEventEndDate ComplexEventEndDate_162(FIX::UTCTIMESTAMP(13, 57, 13, 6, 3, 2015));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventEndDate_162);
          ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventEndDate_162.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_162(FIX::UTCTIMESTAMP(8, 48, 23, 14, 4, 2001));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventStartDate_162);
          ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventStartDate_162.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_162);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_340;
            FIX::ComplexEventEndTime ComplexEventEndTime_340(FIX::UTCTIMEONLY(22, 37, 32));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventEndTime_340);
            ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventEndTime_340.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_340(FIX::UTCTIMEONLY(2, 19, 0));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventStartTime_340);
            ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventStartTime_340.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_340);

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_79;
        FIX::ComplexEventCondition ComplexEventCondition_79(1);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventCondition_79.getString());
        FIX::ComplexEventPrice ComplexEventPrice_79;
        ComplexEventPrice_79.setString("15013128");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPrice_79.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_79(3);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryMethod_79.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_79;
        ComplexEventPriceBoundaryPrecision_79.setString("70.590000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryPrecision_79.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_79(2);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceTimeType_79.getString());
        FIX::ComplexEventType ComplexEventType_79(7);
        noComplexEvents_0_0_2_1.set(ComplexEventType_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventType_79.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_79;
        ComplexOptPayoutAmount_79.setString("1072403");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexOptPayoutAmount_79.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_79);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_163;
          FIX::ComplexEventEndDate ComplexEventEndDate_163(FIX::UTCTIMESTAMP(15, 59, 4, 1, 3, 2002));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_163);
          ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventEndDate_163.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_163(FIX::UTCTIMESTAMP(22, 14, 15, 16, 6, 2008));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_163);
          ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventStartDate_163.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_163);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_341;
            FIX::ComplexEventEndTime ComplexEventEndTime_341(FIX::UTCTIMEONLY(18, 27, 0));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_341);
            ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventEndTime_341.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_341(FIX::UTCTIMEONLY(5, 19, 18));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_341);
            ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventStartTime_341.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_341);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_342;
            FIX::ComplexEventEndTime ComplexEventEndTime_342(FIX::UTCTIMEONLY(22, 20, 11));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventEndTime_342);
            ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventEndTime_342.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_342(FIX::UTCTIMEONLY(16, 25, 11));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventStartTime_342);
            ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventStartTime_342.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_342);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_164;
          FIX::ComplexEventEndDate ComplexEventEndDate_164(FIX::UTCTIMESTAMP(17, 2, 23, 26, 5, 2017));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventEndDate_164);
          ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventEndDate_164.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_164(FIX::UTCTIMESTAMP(6, 55, 53, 10, 5, 2007));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventStartDate_164);
          ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventStartDate_164.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_164);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_343;
            FIX::ComplexEventEndTime ComplexEventEndTime_343(FIX::UTCTIMEONLY(23, 51, 4));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventEndTime_343);
            ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventEndTime_343.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_343(FIX::UTCTIMEONLY(1, 16, 0));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventStartTime_343);
            ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventStartTime_343.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_343);

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_165;
          FIX::ComplexEventEndDate ComplexEventEndDate_165(FIX::UTCTIMESTAMP(14, 12, 0, 7, 9, 2005));
          noComplexEventDates_0_0_1_3_2.set(ComplexEventEndDate_165);
          ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventEndDate_165.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_165(FIX::UTCTIMESTAMP(15, 50, 57, 27, 6, 2013));
          noComplexEventDates_0_0_1_3_2.set(ComplexEventStartDate_165);
          ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventStartDate_165.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_165);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_344;
            FIX::ComplexEventEndTime ComplexEventEndTime_344(FIX::UTCTIMEONLY(12, 36, 24));
            noComplexEventTimes_0_0_1_2_4_0.set(ComplexEventEndTime_344);
            ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventEndTime_344.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_344(FIX::UTCTIMEONLY(20, 49, 51));
            noComplexEventTimes_0_0_1_2_4_0.set(ComplexEventStartTime_344);
            ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventStartTime_344.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_344);

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_80;
        FIX::ComplexEventCondition ComplexEventCondition_80(2);
        noComplexEvents_0_0_2_2.set(ComplexEventCondition_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventCondition_80.getString());
        FIX::ComplexEventPrice ComplexEventPrice_80;
        ComplexEventPrice_80.setString("3451171");
        noComplexEvents_0_0_2_2.set(ComplexEventPrice_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPrice_80.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_80(3);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryMethod_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryMethod_80.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_80;
        ComplexEventPriceBoundaryPrecision_80.setString("13.370000");
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryPrecision_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryPrecision_80.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_80(1);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceTimeType_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceTimeType_80.getString());
        FIX::ComplexEventType ComplexEventType_80(6);
        noComplexEvents_0_0_2_2.set(ComplexEventType_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventType_80.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_80;
        ComplexOptPayoutAmount_80.setString("8474889");
        noComplexEvents_0_0_2_2.set(ComplexOptPayoutAmount_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexOptPayoutAmount_80.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_80);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_166;
          FIX::ComplexEventEndDate ComplexEventEndDate_166(FIX::UTCTIMESTAMP(0, 50, 48, 7, 3, 2012));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventEndDate_166);
          ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventEndDate_166.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_166(FIX::UTCTIMESTAMP(22, 56, 31, 17, 6, 2012));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventStartDate_166);
          ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventStartDate_166.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_166);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_345;
            FIX::ComplexEventEndTime ComplexEventEndTime_345(FIX::UTCTIMEONLY(12, 13, 36));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventEndTime_345);
            ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventEndTime_345.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_345(FIX::UTCTIMEONLY(10, 17, 34));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventStartTime_345);
            ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventStartTime_345.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_345);

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_167;
          FIX::ComplexEventEndDate ComplexEventEndDate_167(FIX::UTCTIMESTAMP(21, 8, 52, 27, 9, 2004));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventEndDate_167);
          ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventEndDate_167.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_167(FIX::UTCTIMESTAMP(4, 46, 26, 5, 6, 2005));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventStartDate_167);
          ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventStartDate_167.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_167);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_346;
            FIX::ComplexEventEndTime ComplexEventEndTime_346(FIX::UTCTIMEONLY(15, 39, 14));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventEndTime_346);
            ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventEndTime_346.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_346(FIX::UTCTIMEONLY(21, 39, 13));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventStartTime_346);
            ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventStartTime_346.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_346);

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_0);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_71;
        FIX::EventDate EventDate_71("LOCALMKTDATE_1923346563");
        noEvents_0_0_2_0.set(EventDate_71);
        EvntGrp_NoEvents_71.insert(EventDate_71.getString());
        FIX::EventPx EventPx_71;
        EventPx_71.setString("4448277");
        noEvents_0_0_2_0.set(EventPx_71);
        EvntGrp_NoEvents_71.insert(EventPx_71.getString());
        FIX::EventText EventText_71("STRING_355498982");
        noEvents_0_0_2_0.set(EventText_71);
        EvntGrp_NoEvents_71.insert(EventText_71.getString());
        FIX::EventTime EventTime_71(FIX::UTCTIMESTAMP(13, 19, 20, 0, 6, 2015));
        noEvents_0_0_2_0.set(EventTime_71);
        EvntGrp_NoEvents_71.insert(EventTime_71.getString());
        FIX::EventType EventType_71(5);
        noEvents_0_0_2_0.set(EventType_71);
        EvntGrp_NoEvents_71.insert(EventType_71.getString());
        all_values.push_back(EvntGrp_NoEvents_71);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_73;
        FIX::InstrumentPartyID InstrumentPartyID_73("STRING_392086349");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyID_73.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_73('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyIDSource_73.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_73(1791934944);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyRole_73.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_73);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162;
          FIX::InstrumentPartySubID InstrumentPartySubID_162("STRING_1031552872");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_162);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubID_162.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_162(1139135083);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_162);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubIDType_162.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163;
          FIX::InstrumentPartySubID InstrumentPartySubID_163("STRING_289114870");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_163);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubID_163.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_163(1809844990);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_163);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubIDType_163.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_81;
        FIX::SecurityAltID SecurityAltID_81("STRING_1298048521");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_81);
        SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltID_81.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_81("STRING_1098072593");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_81);
        SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltIDSource_81.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_82;
        FIX::SecurityAltID SecurityAltID_82("STRING_581705747");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_82);
        SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltID_82.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_82("STRING_1590066761");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_82);
        SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltIDSource_82.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_78;
      FIX::SecurityXML SecurityXML_79("XMLDATA_1132568048");
      noQuoteEntries_0_1_0.set(SecurityXML_79);
      FIX::SecurityXMLLen SecurityXMLLen_39(1756367183);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_39);
      FIX::SecurityXMLSchema SecurityXMLSchema_39("STRING_509343414");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_39);
      SecurityXML_78.insert(SecurityXMLSchema_39.getString());
      all_values.push_back(SecurityXML_78);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_4;
      BidForwardPoints_4.setString("16322572");
      noQuoteEntries_0_1_1.set(BidForwardPoints_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints_4.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_4;
      BidForwardPoints2_4.setString("18629765");
      noQuoteEntries_0_1_1.set(BidForwardPoints2_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints2_4.getString());
      FIX::BidPx BidPx_4;
      BidPx_4.setString("608880");
      noQuoteEntries_0_1_1.set(BidPx_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidPx_4.getString());
      FIX::BidSize BidSize_4;
      BidSize_4.setString("14081201");
      noQuoteEntries_0_1_1.set(BidSize_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSize_4.getString());
      FIX::BidSpotRate BidSpotRate_4;
      BidSpotRate_4.setString("1603206");
      noQuoteEntries_0_1_1.set(BidSpotRate_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSpotRate_4.getString());
      FIX::BidYield BidYield_4;
      BidYield_4.setString("70.610000");
      noQuoteEntries_0_1_1.set(BidYield_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidYield_4.getString());
      FIX::BookingType BookingType_10(0);
      noQuoteEntries_0_1_1.set(BookingType_10);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BookingType_10.getString());
      FIX::Currency Currency_37("CAN");
      noQuoteEntries_0_1_1.set(Currency_37);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(Currency_37.getString());
      FIX::MidPx MidPx_4;
      MidPx_4.setString("4601316");
      noQuoteEntries_0_1_1.set(MidPx_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidPx_4.getString());
      FIX::MidYield MidYield_4;
      MidYield_4.setString("49.840000");
      noQuoteEntries_0_1_1.set(MidYield_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidYield_4.getString());
      FIX::OfferForwardPoints OfferForwardPoints_4;
      OfferForwardPoints_4.setString("15530162");
      noQuoteEntries_0_1_1.set(OfferForwardPoints_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints_4.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_4;
      OfferForwardPoints2_4.setString("4748694");
      noQuoteEntries_0_1_1.set(OfferForwardPoints2_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_4.getString());
      FIX::OfferPx OfferPx_4;
      OfferPx_4.setString("9991051");
      noQuoteEntries_0_1_1.set(OfferPx_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferPx_4.getString());
      FIX::OfferSize OfferSize_4;
      OfferSize_4.setString("15392037");
      noQuoteEntries_0_1_1.set(OfferSize_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSize_4.getString());
      FIX::OfferSpotRate OfferSpotRate_4;
      OfferSpotRate_4.setString("8669558");
      noQuoteEntries_0_1_1.set(OfferSpotRate_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSpotRate_4.getString());
      FIX::OfferYield OfferYield_4;
      OfferYield_4.setString("90.750000");
      noQuoteEntries_0_1_1.set(OfferYield_4);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferYield_4.getString());
      FIX::OrdType OrdType_37('7');
      noQuoteEntries_0_1_1.set(OrdType_37);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrdType_37.getString());
      FIX::OrderCapacity OrderCapacity_13('G');
      noQuoteEntries_0_1_1.set(OrderCapacity_13);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderCapacity_13.getString());
      FIX::OrderQty2 OrderQty2_5;
      OrderQty2_5.setString("9625583");
      noQuoteEntries_0_1_1.set(OrderQty2_5);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderQty2_5.getString());
      FIX::OrderRestrictions OrderRestrictions_8("MULTIPLECHARVALUE_9");
      noQuoteEntries_0_1_1.set(OrderRestrictions_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderRestrictions_8.getString());
      FIX::QuoteEntryID QuoteEntryID_9("STRING_1328128739");
      noQuoteEntries_0_1_1.set(QuoteEntryID_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryID_9.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_1(624919642);
      noQuoteEntries_0_1_1.set(QuoteEntryRejectReason_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryRejectReason_1.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_1(14);
      noQuoteEntries_0_1_1.set(QuoteEntryStatus_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryStatus_1.getString());
      FIX::SettlDate SettlDate_29("LOCALMKTDATE_478693613");
      noQuoteEntries_0_1_1.set(SettlDate_29);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate_29.getString());
      FIX::SettlDate2 SettlDate2_5("LOCALMKTDATE_1722992235");
      noQuoteEntries_0_1_1.set(SettlDate2_5);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate2_5.getString());
      FIX::TradingSessionID TradingSessionID_41("STRING_3");
      noQuoteEntries_0_1_1.set(TradingSessionID_41);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionID_41.getString());
      FIX::TradingSessionSubID TradingSessionSubID_41("STRING_3");
      noQuoteEntries_0_1_1.set(TradingSessionSubID_41);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionSubID_41.getString());
      FIX::TransactTime TransactTime_31(FIX::UTCTIMESTAMP(23, 20, 54, 24, 4, 2007));
      noQuoteEntries_0_1_1.set(TransactTime_31);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TransactTime_31.getString());
      FIX::ValidUntilTime ValidUntilTime_5(FIX::UTCTIMESTAMP(1, 50, 0, 22, 12, 2002));
      noQuoteEntries_0_1_1.set(ValidUntilTime_5);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(ValidUntilTime_5.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_1);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_65;
        FIX::EncodedLegIssuer EncodedLegIssuer_65("DATA_1082495658");
        noLegs_0_1_2_0.set(EncodedLegIssuer_65);
        InstrumentLeg_65.insert(EncodedLegIssuer_65.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_65(1064737157);
        noLegs_0_1_2_0.set(EncodedLegIssuerLen_65);
        InstrumentLeg_65.insert(EncodedLegIssuerLen_65.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_65("DATA_503871950");
        noLegs_0_1_2_0.set(EncodedLegSecurityDesc_65);
        InstrumentLeg_65.insert(EncodedLegSecurityDesc_65.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_65(1949451461);
        noLegs_0_1_2_0.set(EncodedLegSecurityDescLen_65);
        InstrumentLeg_65.insert(EncodedLegSecurityDescLen_65.getString());
        FIX::LegCFICode LegCFICode_65("STRING_995742585");
        noLegs_0_1_2_0.set(LegCFICode_65);
        InstrumentLeg_65.insert(LegCFICode_65.getString());
        FIX::LegContractMultiplier LegContractMultiplier_65;
        LegContractMultiplier_65.setString("16875269");
        noLegs_0_1_2_0.set(LegContractMultiplier_65);
        InstrumentLeg_65.insert(LegContractMultiplier_65.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_65(840981682);
        noLegs_0_1_2_0.set(LegContractMultiplierUnit_65);
        InstrumentLeg_65.insert(LegContractMultiplierUnit_65.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_65("MONTHYEAR_1958300885");
        noLegs_0_1_2_0.set(LegContractSettlMonth_65);
        InstrumentLeg_65.insert(LegContractSettlMonth_65.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_65("COUNTRY_1862833382");
        noLegs_0_1_2_0.set(LegCountryOfIssue_65);
        InstrumentLeg_65.insert(LegCountryOfIssue_65.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_65("LOCALMKTDATE_21626774");
        noLegs_0_1_2_0.set(LegCouponPaymentDate_65);
        InstrumentLeg_65.insert(LegCouponPaymentDate_65.getString());
        FIX::LegCouponRate LegCouponRate_65;
        LegCouponRate_65.setString("68.790000");
        noLegs_0_1_2_0.set(LegCouponRate_65);
        InstrumentLeg_65.insert(LegCouponRate_65.getString());
        FIX::LegCreditRating LegCreditRating_65("STRING_708685203");
        noLegs_0_1_2_0.set(LegCreditRating_65);
        InstrumentLeg_65.insert(LegCreditRating_65.getString());
        FIX::LegCurrency LegCurrency_65("GBP");
        noLegs_0_1_2_0.set(LegCurrency_65);
        InstrumentLeg_65.insert(LegCurrency_65.getString());
        FIX::LegDatedDate LegDatedDate_65("LOCALMKTDATE_136242772");
        noLegs_0_1_2_0.set(LegDatedDate_65);
        InstrumentLeg_65.insert(LegDatedDate_65.getString());
        FIX::LegExerciseStyle LegExerciseStyle_65(421597113);
        noLegs_0_1_2_0.set(LegExerciseStyle_65);
        InstrumentLeg_65.insert(LegExerciseStyle_65.getString());
        FIX::LegFactor LegFactor_65;
        LegFactor_65.setString("7193221");
        noLegs_0_1_2_0.set(LegFactor_65);
        InstrumentLeg_65.insert(LegFactor_65.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_65(1320167523);
        noLegs_0_1_2_0.set(LegFlowScheduleType_65);
        InstrumentLeg_65.insert(LegFlowScheduleType_65.getString());
        FIX::LegInstrRegistry LegInstrRegistry_65("STRING_852217253");
        noLegs_0_1_2_0.set(LegInstrRegistry_65);
        InstrumentLeg_65.insert(LegInstrRegistry_65.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_65("LOCALMKTDATE_912172296");
        noLegs_0_1_2_0.set(LegInterestAccrualDate_65);
        InstrumentLeg_65.insert(LegInterestAccrualDate_65.getString());
        FIX::LegIssueDate LegIssueDate_65("LOCALMKTDATE_72101495");
        noLegs_0_1_2_0.set(LegIssueDate_65);
        InstrumentLeg_65.insert(LegIssueDate_65.getString());
        FIX::LegIssuer LegIssuer_65("STRING_1343725472");
        noLegs_0_1_2_0.set(LegIssuer_65);
        InstrumentLeg_65.insert(LegIssuer_65.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_65("STRING_365658965");
        noLegs_0_1_2_0.set(LegLocaleOfIssue_65);
        InstrumentLeg_65.insert(LegLocaleOfIssue_65.getString());
        FIX::LegMaturityDate LegMaturityDate_65("LOCALMKTDATE_1131839771");
        noLegs_0_1_2_0.set(LegMaturityDate_65);
        InstrumentLeg_65.insert(LegMaturityDate_65.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_65("MONTHYEAR_104137105");
        noLegs_0_1_2_0.set(LegMaturityMonthYear_65);
        InstrumentLeg_65.insert(LegMaturityMonthYear_65.getString());
        FIX::LegMaturityTime LegMaturityTime_65("TZTIMEONLY_513153535");
        noLegs_0_1_2_0.set(LegMaturityTime_65);
        InstrumentLeg_65.insert(LegMaturityTime_65.getString());
        FIX::LegOptAttribute LegOptAttribute_65('1');
        noLegs_0_1_2_0.set(LegOptAttribute_65);
        InstrumentLeg_65.insert(LegOptAttribute_65.getString());
        FIX::LegOptionRatio LegOptionRatio_65;
        LegOptionRatio_65.setString("18107564");
        noLegs_0_1_2_0.set(LegOptionRatio_65);
        InstrumentLeg_65.insert(LegOptionRatio_65.getString());
        FIX::LegPool LegPool_65("STRING_1120779739");
        noLegs_0_1_2_0.set(LegPool_65);
        InstrumentLeg_65.insert(LegPool_65.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_65("STRING_1606922467");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasure_65);
        InstrumentLeg_65.insert(LegPriceUnitOfMeasure_65.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_65;
        LegPriceUnitOfMeasureQty_65.setString("7754246");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasureQty_65);
        InstrumentLeg_65.insert(LegPriceUnitOfMeasureQty_65.getString());
        FIX::LegProduct LegProduct_65(55791749);
        noLegs_0_1_2_0.set(LegProduct_65);
        InstrumentLeg_65.insert(LegProduct_65.getString());
        FIX::LegPutOrCall LegPutOrCall_65(524175977);
        noLegs_0_1_2_0.set(LegPutOrCall_65);
        InstrumentLeg_65.insert(LegPutOrCall_65.getString());
        FIX::LegRatioQty LegRatioQty_65;
        LegRatioQty_65.setString("12792966");
        noLegs_0_1_2_0.set(LegRatioQty_65);
        InstrumentLeg_65.insert(LegRatioQty_65.getString());
        FIX::LegRedemptionDate LegRedemptionDate_65("LOCALMKTDATE_2005243210");
        noLegs_0_1_2_0.set(LegRedemptionDate_65);
        InstrumentLeg_65.insert(LegRedemptionDate_65.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_65("STRING_1519918562");
        noLegs_0_1_2_0.set(LegRepoCollateralSecurityType_65);
        InstrumentLeg_65.insert(LegRepoCollateralSecurityType_65.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_65;
        LegRepurchaseRate_65.setString("99.460000");
        noLegs_0_1_2_0.set(LegRepurchaseRate_65);
        InstrumentLeg_65.insert(LegRepurchaseRate_65.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_65(698741245);
        noLegs_0_1_2_0.set(LegRepurchaseTerm_65);
        InstrumentLeg_65.insert(LegRepurchaseTerm_65.getString());
        FIX::LegSecurityDesc LegSecurityDesc_65("STRING_1330735799");
        noLegs_0_1_2_0.set(LegSecurityDesc_65);
        InstrumentLeg_65.insert(LegSecurityDesc_65.getString());
        FIX::LegSecurityExchange LegSecurityExchange_65("EXCHANGE_534689680");
        noLegs_0_1_2_0.set(LegSecurityExchange_65);
        InstrumentLeg_65.insert(LegSecurityExchange_65.getString());
        FIX::LegSecurityID LegSecurityID_65("STRING_720368019");
        noLegs_0_1_2_0.set(LegSecurityID_65);
        InstrumentLeg_65.insert(LegSecurityID_65.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_65("STRING_1766472678");
        noLegs_0_1_2_0.set(LegSecurityIDSource_65);
        InstrumentLeg_65.insert(LegSecurityIDSource_65.getString());
        FIX::LegSecuritySubType LegSecuritySubType_65("STRING_1243374883");
        noLegs_0_1_2_0.set(LegSecuritySubType_65);
        InstrumentLeg_65.insert(LegSecuritySubType_65.getString());
        FIX::LegSecurityType LegSecurityType_65("STRING_1220688406");
        noLegs_0_1_2_0.set(LegSecurityType_65);
        InstrumentLeg_65.insert(LegSecurityType_65.getString());
        FIX::LegSide LegSide_65('1');
        noLegs_0_1_2_0.set(LegSide_65);
        InstrumentLeg_65.insert(LegSide_65.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_65("STRING_1379617655");
        noLegs_0_1_2_0.set(LegStateOrProvinceOfIssue_65);
        InstrumentLeg_65.insert(LegStateOrProvinceOfIssue_65.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_65("USD");
        noLegs_0_1_2_0.set(LegStrikeCurrency_65);
        InstrumentLeg_65.insert(LegStrikeCurrency_65.getString());
        FIX::LegStrikePrice LegStrikePrice_65;
        LegStrikePrice_65.setString("5523015");
        noLegs_0_1_2_0.set(LegStrikePrice_65);
        InstrumentLeg_65.insert(LegStrikePrice_65.getString());
        FIX::LegSymbol LegSymbol_65("STRING_347019124");
        noLegs_0_1_2_0.set(LegSymbol_65);
        InstrumentLeg_65.insert(LegSymbol_65.getString());
        FIX::LegSymbolSfx LegSymbolSfx_65("STRING_1261728895");
        noLegs_0_1_2_0.set(LegSymbolSfx_65);
        InstrumentLeg_65.insert(LegSymbolSfx_65.getString());
        FIX::LegTimeUnit LegTimeUnit_65("STRING_624403026");
        noLegs_0_1_2_0.set(LegTimeUnit_65);
        InstrumentLeg_65.insert(LegTimeUnit_65.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_65("STRING_1690744596");
        noLegs_0_1_2_0.set(LegUnitOfMeasure_65);
        InstrumentLeg_65.insert(LegUnitOfMeasure_65.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_65;
        LegUnitOfMeasureQty_65.setString("16273878");
        noLegs_0_1_2_0.set(LegUnitOfMeasureQty_65);
        InstrumentLeg_65.insert(LegUnitOfMeasureQty_65.getString());
        all_values.push_back(InstrumentLeg_65);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_134;
          FIX::LegSecurityAltID LegSecurityAltID_134("STRING_1794881702");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltID_134);
          LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltID_134.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_134("STRING_2140541396");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltIDSource_134);
          LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltIDSource_134.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_134);

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_135;
          FIX::LegSecurityAltID LegSecurityAltID_135("STRING_1150049600");
          noLegSecurityAltID_0_1_0_3_1.set(LegSecurityAltID_135);
          LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltID_135.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_135("STRING_1458154501");
          noLegSecurityAltID_0_1_0_3_1.set(LegSecurityAltIDSource_135);
          LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltIDSource_135.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_135);

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_136;
          FIX::LegSecurityAltID LegSecurityAltID_136("STRING_1113837487");
          noLegSecurityAltID_0_1_0_3_2.set(LegSecurityAltID_136);
          LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltID_136.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_136("STRING_609488420");
          noLegSecurityAltID_0_1_0_3_2.set(LegSecurityAltIDSource_136);
          LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltIDSource_136.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_136);

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_66;
        FIX::EncodedLegIssuer EncodedLegIssuer_66("DATA_86095549");
        noLegs_0_1_2_1.set(EncodedLegIssuer_66);
        InstrumentLeg_66.insert(EncodedLegIssuer_66.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_66(1169629236);
        noLegs_0_1_2_1.set(EncodedLegIssuerLen_66);
        InstrumentLeg_66.insert(EncodedLegIssuerLen_66.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_66("DATA_1133664397");
        noLegs_0_1_2_1.set(EncodedLegSecurityDesc_66);
        InstrumentLeg_66.insert(EncodedLegSecurityDesc_66.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_66(1365392194);
        noLegs_0_1_2_1.set(EncodedLegSecurityDescLen_66);
        InstrumentLeg_66.insert(EncodedLegSecurityDescLen_66.getString());
        FIX::LegCFICode LegCFICode_66("STRING_1027388798");
        noLegs_0_1_2_1.set(LegCFICode_66);
        InstrumentLeg_66.insert(LegCFICode_66.getString());
        FIX::LegContractMultiplier LegContractMultiplier_66;
        LegContractMultiplier_66.setString("5060993");
        noLegs_0_1_2_1.set(LegContractMultiplier_66);
        InstrumentLeg_66.insert(LegContractMultiplier_66.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_66(37248492);
        noLegs_0_1_2_1.set(LegContractMultiplierUnit_66);
        InstrumentLeg_66.insert(LegContractMultiplierUnit_66.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_66("MONTHYEAR_1726130043");
        noLegs_0_1_2_1.set(LegContractSettlMonth_66);
        InstrumentLeg_66.insert(LegContractSettlMonth_66.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_66("COUNTRY_1836835110");
        noLegs_0_1_2_1.set(LegCountryOfIssue_66);
        InstrumentLeg_66.insert(LegCountryOfIssue_66.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_66("LOCALMKTDATE_571938172");
        noLegs_0_1_2_1.set(LegCouponPaymentDate_66);
        InstrumentLeg_66.insert(LegCouponPaymentDate_66.getString());
        FIX::LegCouponRate LegCouponRate_66;
        LegCouponRate_66.setString("44.140000");
        noLegs_0_1_2_1.set(LegCouponRate_66);
        InstrumentLeg_66.insert(LegCouponRate_66.getString());
        FIX::LegCreditRating LegCreditRating_66("STRING_1455824140");
        noLegs_0_1_2_1.set(LegCreditRating_66);
        InstrumentLeg_66.insert(LegCreditRating_66.getString());
        FIX::LegCurrency LegCurrency_66("GBP");
        noLegs_0_1_2_1.set(LegCurrency_66);
        InstrumentLeg_66.insert(LegCurrency_66.getString());
        FIX::LegDatedDate LegDatedDate_66("LOCALMKTDATE_1086058636");
        noLegs_0_1_2_1.set(LegDatedDate_66);
        InstrumentLeg_66.insert(LegDatedDate_66.getString());
        FIX::LegExerciseStyle LegExerciseStyle_66(1047447063);
        noLegs_0_1_2_1.set(LegExerciseStyle_66);
        InstrumentLeg_66.insert(LegExerciseStyle_66.getString());
        FIX::LegFactor LegFactor_66;
        LegFactor_66.setString("10145046");
        noLegs_0_1_2_1.set(LegFactor_66);
        InstrumentLeg_66.insert(LegFactor_66.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_66(1435615235);
        noLegs_0_1_2_1.set(LegFlowScheduleType_66);
        InstrumentLeg_66.insert(LegFlowScheduleType_66.getString());
        FIX::LegInstrRegistry LegInstrRegistry_66("STRING_1599748594");
        noLegs_0_1_2_1.set(LegInstrRegistry_66);
        InstrumentLeg_66.insert(LegInstrRegistry_66.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_66("LOCALMKTDATE_1361523815");
        noLegs_0_1_2_1.set(LegInterestAccrualDate_66);
        InstrumentLeg_66.insert(LegInterestAccrualDate_66.getString());
        FIX::LegIssueDate LegIssueDate_66("LOCALMKTDATE_549860482");
        noLegs_0_1_2_1.set(LegIssueDate_66);
        InstrumentLeg_66.insert(LegIssueDate_66.getString());
        FIX::LegIssuer LegIssuer_66("STRING_76667973");
        noLegs_0_1_2_1.set(LegIssuer_66);
        InstrumentLeg_66.insert(LegIssuer_66.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_66("STRING_904784764");
        noLegs_0_1_2_1.set(LegLocaleOfIssue_66);
        InstrumentLeg_66.insert(LegLocaleOfIssue_66.getString());
        FIX::LegMaturityDate LegMaturityDate_66("LOCALMKTDATE_29764694");
        noLegs_0_1_2_1.set(LegMaturityDate_66);
        InstrumentLeg_66.insert(LegMaturityDate_66.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_66("MONTHYEAR_1832910770");
        noLegs_0_1_2_1.set(LegMaturityMonthYear_66);
        InstrumentLeg_66.insert(LegMaturityMonthYear_66.getString());
        FIX::LegMaturityTime LegMaturityTime_66("TZTIMEONLY_552182818");
        noLegs_0_1_2_1.set(LegMaturityTime_66);
        InstrumentLeg_66.insert(LegMaturityTime_66.getString());
        FIX::LegOptAttribute LegOptAttribute_66('2');
        noLegs_0_1_2_1.set(LegOptAttribute_66);
        InstrumentLeg_66.insert(LegOptAttribute_66.getString());
        FIX::LegOptionRatio LegOptionRatio_66;
        LegOptionRatio_66.setString("8354767");
        noLegs_0_1_2_1.set(LegOptionRatio_66);
        InstrumentLeg_66.insert(LegOptionRatio_66.getString());
        FIX::LegPool LegPool_66("STRING_2010337319");
        noLegs_0_1_2_1.set(LegPool_66);
        InstrumentLeg_66.insert(LegPool_66.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_66("STRING_1136659929");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasure_66);
        InstrumentLeg_66.insert(LegPriceUnitOfMeasure_66.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_66;
        LegPriceUnitOfMeasureQty_66.setString("14449651");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasureQty_66);
        InstrumentLeg_66.insert(LegPriceUnitOfMeasureQty_66.getString());
        FIX::LegProduct LegProduct_66(2096432868);
        noLegs_0_1_2_1.set(LegProduct_66);
        InstrumentLeg_66.insert(LegProduct_66.getString());
        FIX::LegPutOrCall LegPutOrCall_66(158805517);
        noLegs_0_1_2_1.set(LegPutOrCall_66);
        InstrumentLeg_66.insert(LegPutOrCall_66.getString());
        FIX::LegRatioQty LegRatioQty_66;
        LegRatioQty_66.setString("4311458");
        noLegs_0_1_2_1.set(LegRatioQty_66);
        InstrumentLeg_66.insert(LegRatioQty_66.getString());
        FIX::LegRedemptionDate LegRedemptionDate_66("LOCALMKTDATE_1314341415");
        noLegs_0_1_2_1.set(LegRedemptionDate_66);
        InstrumentLeg_66.insert(LegRedemptionDate_66.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_66("STRING_1186194316");
        noLegs_0_1_2_1.set(LegRepoCollateralSecurityType_66);
        InstrumentLeg_66.insert(LegRepoCollateralSecurityType_66.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_66;
        LegRepurchaseRate_66.setString("52.030000");
        noLegs_0_1_2_1.set(LegRepurchaseRate_66);
        InstrumentLeg_66.insert(LegRepurchaseRate_66.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_66(1351589907);
        noLegs_0_1_2_1.set(LegRepurchaseTerm_66);
        InstrumentLeg_66.insert(LegRepurchaseTerm_66.getString());
        FIX::LegSecurityDesc LegSecurityDesc_66("STRING_764840711");
        noLegs_0_1_2_1.set(LegSecurityDesc_66);
        InstrumentLeg_66.insert(LegSecurityDesc_66.getString());
        FIX::LegSecurityExchange LegSecurityExchange_66("EXCHANGE_626596665");
        noLegs_0_1_2_1.set(LegSecurityExchange_66);
        InstrumentLeg_66.insert(LegSecurityExchange_66.getString());
        FIX::LegSecurityID LegSecurityID_66("STRING_1923528080");
        noLegs_0_1_2_1.set(LegSecurityID_66);
        InstrumentLeg_66.insert(LegSecurityID_66.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_66("STRING_1063855126");
        noLegs_0_1_2_1.set(LegSecurityIDSource_66);
        InstrumentLeg_66.insert(LegSecurityIDSource_66.getString());
        FIX::LegSecuritySubType LegSecuritySubType_66("STRING_2082420805");
        noLegs_0_1_2_1.set(LegSecuritySubType_66);
        InstrumentLeg_66.insert(LegSecuritySubType_66.getString());
        FIX::LegSecurityType LegSecurityType_66("STRING_1591357488");
        noLegs_0_1_2_1.set(LegSecurityType_66);
        InstrumentLeg_66.insert(LegSecurityType_66.getString());
        FIX::LegSide LegSide_66('4');
        noLegs_0_1_2_1.set(LegSide_66);
        InstrumentLeg_66.insert(LegSide_66.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_66("STRING_1020995793");
        noLegs_0_1_2_1.set(LegStateOrProvinceOfIssue_66);
        InstrumentLeg_66.insert(LegStateOrProvinceOfIssue_66.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_66("USD");
        noLegs_0_1_2_1.set(LegStrikeCurrency_66);
        InstrumentLeg_66.insert(LegStrikeCurrency_66.getString());
        FIX::LegStrikePrice LegStrikePrice_66;
        LegStrikePrice_66.setString("3091273");
        noLegs_0_1_2_1.set(LegStrikePrice_66);
        InstrumentLeg_66.insert(LegStrikePrice_66.getString());
        FIX::LegSymbol LegSymbol_66("STRING_2091069498");
        noLegs_0_1_2_1.set(LegSymbol_66);
        InstrumentLeg_66.insert(LegSymbol_66.getString());
        FIX::LegSymbolSfx LegSymbolSfx_66("STRING_664619157");
        noLegs_0_1_2_1.set(LegSymbolSfx_66);
        InstrumentLeg_66.insert(LegSymbolSfx_66.getString());
        FIX::LegTimeUnit LegTimeUnit_66("STRING_858987862");
        noLegs_0_1_2_1.set(LegTimeUnit_66);
        InstrumentLeg_66.insert(LegTimeUnit_66.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_66("STRING_20253823");
        noLegs_0_1_2_1.set(LegUnitOfMeasure_66);
        InstrumentLeg_66.insert(LegUnitOfMeasure_66.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_66;
        LegUnitOfMeasureQty_66.setString("15694039");
        noLegs_0_1_2_1.set(LegUnitOfMeasureQty_66);
        InstrumentLeg_66.insert(LegUnitOfMeasureQty_66.getString());
        all_values.push_back(InstrumentLeg_66);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_137;
          FIX::LegSecurityAltID LegSecurityAltID_137("STRING_1853164593");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltID_137);
          LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltID_137.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_137("STRING_2121586739");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltIDSource_137);
          LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltIDSource_137.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_137);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_138;
          FIX::LegSecurityAltID LegSecurityAltID_138("STRING_911574999");
          noLegSecurityAltID_0_1_1_3_1.set(LegSecurityAltID_138);
          LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltID_138.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_138("STRING_541157668");
          noLegSecurityAltID_0_1_1_3_1.set(LegSecurityAltIDSource_138);
          LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltIDSource_138.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_138);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_67;
        FIX::EncodedLegIssuer EncodedLegIssuer_67("DATA_1984440411");
        noLegs_0_1_2_2.set(EncodedLegIssuer_67);
        InstrumentLeg_67.insert(EncodedLegIssuer_67.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_67(2048234929);
        noLegs_0_1_2_2.set(EncodedLegIssuerLen_67);
        InstrumentLeg_67.insert(EncodedLegIssuerLen_67.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_67("DATA_1986122811");
        noLegs_0_1_2_2.set(EncodedLegSecurityDesc_67);
        InstrumentLeg_67.insert(EncodedLegSecurityDesc_67.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_67(1933389631);
        noLegs_0_1_2_2.set(EncodedLegSecurityDescLen_67);
        InstrumentLeg_67.insert(EncodedLegSecurityDescLen_67.getString());
        FIX::LegCFICode LegCFICode_67("STRING_59556798");
        noLegs_0_1_2_2.set(LegCFICode_67);
        InstrumentLeg_67.insert(LegCFICode_67.getString());
        FIX::LegContractMultiplier LegContractMultiplier_67;
        LegContractMultiplier_67.setString("2697850");
        noLegs_0_1_2_2.set(LegContractMultiplier_67);
        InstrumentLeg_67.insert(LegContractMultiplier_67.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_67(1100247398);
        noLegs_0_1_2_2.set(LegContractMultiplierUnit_67);
        InstrumentLeg_67.insert(LegContractMultiplierUnit_67.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_67("MONTHYEAR_1245751114");
        noLegs_0_1_2_2.set(LegContractSettlMonth_67);
        InstrumentLeg_67.insert(LegContractSettlMonth_67.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_67("COUNTRY_1207030258");
        noLegs_0_1_2_2.set(LegCountryOfIssue_67);
        InstrumentLeg_67.insert(LegCountryOfIssue_67.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_67("LOCALMKTDATE_304353658");
        noLegs_0_1_2_2.set(LegCouponPaymentDate_67);
        InstrumentLeg_67.insert(LegCouponPaymentDate_67.getString());
        FIX::LegCouponRate LegCouponRate_67;
        LegCouponRate_67.setString("18.260000");
        noLegs_0_1_2_2.set(LegCouponRate_67);
        InstrumentLeg_67.insert(LegCouponRate_67.getString());
        FIX::LegCreditRating LegCreditRating_67("STRING_1833626923");
        noLegs_0_1_2_2.set(LegCreditRating_67);
        InstrumentLeg_67.insert(LegCreditRating_67.getString());
        FIX::LegCurrency LegCurrency_67("USD");
        noLegs_0_1_2_2.set(LegCurrency_67);
        InstrumentLeg_67.insert(LegCurrency_67.getString());
        FIX::LegDatedDate LegDatedDate_67("LOCALMKTDATE_1768564080");
        noLegs_0_1_2_2.set(LegDatedDate_67);
        InstrumentLeg_67.insert(LegDatedDate_67.getString());
        FIX::LegExerciseStyle LegExerciseStyle_67(1671755578);
        noLegs_0_1_2_2.set(LegExerciseStyle_67);
        InstrumentLeg_67.insert(LegExerciseStyle_67.getString());
        FIX::LegFactor LegFactor_67;
        LegFactor_67.setString("13630376");
        noLegs_0_1_2_2.set(LegFactor_67);
        InstrumentLeg_67.insert(LegFactor_67.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_67(642076226);
        noLegs_0_1_2_2.set(LegFlowScheduleType_67);
        InstrumentLeg_67.insert(LegFlowScheduleType_67.getString());
        FIX::LegInstrRegistry LegInstrRegistry_67("STRING_15592833");
        noLegs_0_1_2_2.set(LegInstrRegistry_67);
        InstrumentLeg_67.insert(LegInstrRegistry_67.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_67("LOCALMKTDATE_666132944");
        noLegs_0_1_2_2.set(LegInterestAccrualDate_67);
        InstrumentLeg_67.insert(LegInterestAccrualDate_67.getString());
        FIX::LegIssueDate LegIssueDate_67("LOCALMKTDATE_951203606");
        noLegs_0_1_2_2.set(LegIssueDate_67);
        InstrumentLeg_67.insert(LegIssueDate_67.getString());
        FIX::LegIssuer LegIssuer_67("STRING_2106662331");
        noLegs_0_1_2_2.set(LegIssuer_67);
        InstrumentLeg_67.insert(LegIssuer_67.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_67("STRING_1330752102");
        noLegs_0_1_2_2.set(LegLocaleOfIssue_67);
        InstrumentLeg_67.insert(LegLocaleOfIssue_67.getString());
        FIX::LegMaturityDate LegMaturityDate_67("LOCALMKTDATE_1810191469");
        noLegs_0_1_2_2.set(LegMaturityDate_67);
        InstrumentLeg_67.insert(LegMaturityDate_67.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_67("MONTHYEAR_2126916154");
        noLegs_0_1_2_2.set(LegMaturityMonthYear_67);
        InstrumentLeg_67.insert(LegMaturityMonthYear_67.getString());
        FIX::LegMaturityTime LegMaturityTime_67("TZTIMEONLY_752672375");
        noLegs_0_1_2_2.set(LegMaturityTime_67);
        InstrumentLeg_67.insert(LegMaturityTime_67.getString());
        FIX::LegOptAttribute LegOptAttribute_67('5');
        noLegs_0_1_2_2.set(LegOptAttribute_67);
        InstrumentLeg_67.insert(LegOptAttribute_67.getString());
        FIX::LegOptionRatio LegOptionRatio_67;
        LegOptionRatio_67.setString("18325971");
        noLegs_0_1_2_2.set(LegOptionRatio_67);
        InstrumentLeg_67.insert(LegOptionRatio_67.getString());
        FIX::LegPool LegPool_67("STRING_726775467");
        noLegs_0_1_2_2.set(LegPool_67);
        InstrumentLeg_67.insert(LegPool_67.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_67("STRING_1463035377");
        noLegs_0_1_2_2.set(LegPriceUnitOfMeasure_67);
        InstrumentLeg_67.insert(LegPriceUnitOfMeasure_67.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_67;
        LegPriceUnitOfMeasureQty_67.setString("2262711");
        noLegs_0_1_2_2.set(LegPriceUnitOfMeasureQty_67);
        InstrumentLeg_67.insert(LegPriceUnitOfMeasureQty_67.getString());
        FIX::LegProduct LegProduct_67(563732230);
        noLegs_0_1_2_2.set(LegProduct_67);
        InstrumentLeg_67.insert(LegProduct_67.getString());
        FIX::LegPutOrCall LegPutOrCall_67(1363786658);
        noLegs_0_1_2_2.set(LegPutOrCall_67);
        InstrumentLeg_67.insert(LegPutOrCall_67.getString());
        FIX::LegRatioQty LegRatioQty_67;
        LegRatioQty_67.setString("649102");
        noLegs_0_1_2_2.set(LegRatioQty_67);
        InstrumentLeg_67.insert(LegRatioQty_67.getString());
        FIX::LegRedemptionDate LegRedemptionDate_67("LOCALMKTDATE_349638213");
        noLegs_0_1_2_2.set(LegRedemptionDate_67);
        InstrumentLeg_67.insert(LegRedemptionDate_67.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_67("STRING_1423343457");
        noLegs_0_1_2_2.set(LegRepoCollateralSecurityType_67);
        InstrumentLeg_67.insert(LegRepoCollateralSecurityType_67.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_67;
        LegRepurchaseRate_67.setString("53.390000");
        noLegs_0_1_2_2.set(LegRepurchaseRate_67);
        InstrumentLeg_67.insert(LegRepurchaseRate_67.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_67(1449885612);
        noLegs_0_1_2_2.set(LegRepurchaseTerm_67);
        InstrumentLeg_67.insert(LegRepurchaseTerm_67.getString());
        FIX::LegSecurityDesc LegSecurityDesc_67("STRING_521610923");
        noLegs_0_1_2_2.set(LegSecurityDesc_67);
        InstrumentLeg_67.insert(LegSecurityDesc_67.getString());
        FIX::LegSecurityExchange LegSecurityExchange_67("EXCHANGE_1541725598");
        noLegs_0_1_2_2.set(LegSecurityExchange_67);
        InstrumentLeg_67.insert(LegSecurityExchange_67.getString());
        FIX::LegSecurityID LegSecurityID_67("STRING_1754239270");
        noLegs_0_1_2_2.set(LegSecurityID_67);
        InstrumentLeg_67.insert(LegSecurityID_67.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_67("STRING_384719101");
        noLegs_0_1_2_2.set(LegSecurityIDSource_67);
        InstrumentLeg_67.insert(LegSecurityIDSource_67.getString());
        FIX::LegSecuritySubType LegSecuritySubType_67("STRING_1227868873");
        noLegs_0_1_2_2.set(LegSecuritySubType_67);
        InstrumentLeg_67.insert(LegSecuritySubType_67.getString());
        FIX::LegSecurityType LegSecurityType_67("STRING_1834637360");
        noLegs_0_1_2_2.set(LegSecurityType_67);
        InstrumentLeg_67.insert(LegSecurityType_67.getString());
        FIX::LegSide LegSide_67('1');
        noLegs_0_1_2_2.set(LegSide_67);
        InstrumentLeg_67.insert(LegSide_67.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_67("STRING_848949306");
        noLegs_0_1_2_2.set(LegStateOrProvinceOfIssue_67);
        InstrumentLeg_67.insert(LegStateOrProvinceOfIssue_67.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_67("JPY");
        noLegs_0_1_2_2.set(LegStrikeCurrency_67);
        InstrumentLeg_67.insert(LegStrikeCurrency_67.getString());
        FIX::LegStrikePrice LegStrikePrice_67;
        LegStrikePrice_67.setString("14910255");
        noLegs_0_1_2_2.set(LegStrikePrice_67);
        InstrumentLeg_67.insert(LegStrikePrice_67.getString());
        FIX::LegSymbol LegSymbol_67("STRING_1374502123");
        noLegs_0_1_2_2.set(LegSymbol_67);
        InstrumentLeg_67.insert(LegSymbol_67.getString());
        FIX::LegSymbolSfx LegSymbolSfx_67("STRING_1193369304");
        noLegs_0_1_2_2.set(LegSymbolSfx_67);
        InstrumentLeg_67.insert(LegSymbolSfx_67.getString());
        FIX::LegTimeUnit LegTimeUnit_67("STRING_294745490");
        noLegs_0_1_2_2.set(LegTimeUnit_67);
        InstrumentLeg_67.insert(LegTimeUnit_67.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_67("STRING_1333680807");
        noLegs_0_1_2_2.set(LegUnitOfMeasure_67);
        InstrumentLeg_67.insert(LegUnitOfMeasure_67.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_67;
        LegUnitOfMeasureQty_67.setString("3766377");
        noLegs_0_1_2_2.set(LegUnitOfMeasureQty_67);
        InstrumentLeg_67.insert(LegUnitOfMeasureQty_67.getString());
        all_values.push_back(InstrumentLeg_67);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_139;
          FIX::LegSecurityAltID LegSecurityAltID_139("STRING_1313113313");
          noLegSecurityAltID_0_1_2_3_0.set(LegSecurityAltID_139);
          LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltID_139.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_139("STRING_1129310134");
          noLegSecurityAltID_0_1_2_3_0.set(LegSecurityAltIDSource_139);
          LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltIDSource_139.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_139);

          noLegs_0_1_2_2.addGroup(noLegSecurityAltID_0_1_2_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_2);
      }
      // Instrument
      multiset<string> Instrument_40;
      FIX::AttachmentPoint AttachmentPoint_40;
      AttachmentPoint_40.setString("36.890000");
      noQuoteEntries_0_1_1.set(AttachmentPoint_40);
      Instrument_40.insert(AttachmentPoint_40.getString());
      FIX::CFICode CFICode_40("STRING_998226765");
      noQuoteEntries_0_1_1.set(CFICode_40);
      Instrument_40.insert(CFICode_40.getString());
      FIX::CPProgram CPProgram_40(2);
      noQuoteEntries_0_1_1.set(CPProgram_40);
      Instrument_40.insert(CPProgram_40.getString());
      FIX::CPRegType CPRegType_40("STRING_1971949067");
      noQuoteEntries_0_1_1.set(CPRegType_40);
      Instrument_40.insert(CPRegType_40.getString());
      FIX::CapPrice CapPrice_40;
      CapPrice_40.setString("12244978");
      noQuoteEntries_0_1_1.set(CapPrice_40);
      Instrument_40.insert(CapPrice_40.getString());
      FIX::ContractMultiplier ContractMultiplier_40;
      ContractMultiplier_40.setString("2723341");
      noQuoteEntries_0_1_1.set(ContractMultiplier_40);
      Instrument_40.insert(ContractMultiplier_40.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_40(2);
      noQuoteEntries_0_1_1.set(ContractMultiplierUnit_40);
      Instrument_40.insert(ContractMultiplierUnit_40.getString());
      FIX::ContractSettlMonth ContractSettlMonth_40("MONTHYEAR_1289408170");
      noQuoteEntries_0_1_1.set(ContractSettlMonth_40);
      Instrument_40.insert(ContractSettlMonth_40.getString());
      FIX::CountryOfIssue CountryOfIssue_40("COUNTRY_621972396");
      noQuoteEntries_0_1_1.set(CountryOfIssue_40);
      Instrument_40.insert(CountryOfIssue_40.getString());
      FIX::CouponPaymentDate CouponPaymentDate_40("LOCALMKTDATE_464111886");
      noQuoteEntries_0_1_1.set(CouponPaymentDate_40);
      Instrument_40.insert(CouponPaymentDate_40.getString());
      FIX::CouponRate CouponRate_40;
      CouponRate_40.setString("35.090000");
      noQuoteEntries_0_1_1.set(CouponRate_40);
      Instrument_40.insert(CouponRate_40.getString());
      FIX::CreditRating CreditRating_40("STRING_2071858008");
      noQuoteEntries_0_1_1.set(CreditRating_40);
      Instrument_40.insert(CreditRating_40.getString());
      FIX::DatedDate DatedDate_40("LOCALMKTDATE_985722810");
      noQuoteEntries_0_1_1.set(DatedDate_40);
      Instrument_40.insert(DatedDate_40.getString());
      FIX::DetachmentPoint DetachmentPoint_40;
      DetachmentPoint_40.setString("54.590000");
      noQuoteEntries_0_1_1.set(DetachmentPoint_40);
      Instrument_40.insert(DetachmentPoint_40.getString());
      FIX::EncodedIssuer EncodedIssuer_40("DATA_1678613630");
      noQuoteEntries_0_1_1.set(EncodedIssuer_40);
      Instrument_40.insert(EncodedIssuer_40.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_40(1370441911);
      noQuoteEntries_0_1_1.set(EncodedIssuerLen_40);
      Instrument_40.insert(EncodedIssuerLen_40.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_40("DATA_98730685");
      noQuoteEntries_0_1_1.set(EncodedSecurityDesc_40);
      Instrument_40.insert(EncodedSecurityDesc_40.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_40(1365767342);
      noQuoteEntries_0_1_1.set(EncodedSecurityDescLen_40);
      Instrument_40.insert(EncodedSecurityDescLen_40.getString());
      FIX::ExerciseStyle ExerciseStyle_40(1);
      noQuoteEntries_0_1_1.set(ExerciseStyle_40);
      Instrument_40.insert(ExerciseStyle_40.getString());
      FIX::Factor Factor_40;
      Factor_40.setString("9476799");
      noQuoteEntries_0_1_1.set(Factor_40);
      Instrument_40.insert(Factor_40.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_40(true);
      noQuoteEntries_0_1_1.set(FlexProductEligibilityIndicator_40);
      Instrument_40.insert(FlexProductEligibilityIndicator_40.getString());
      FIX::FlexibleIndicator FlexibleIndicator_40(false);
      noQuoteEntries_0_1_1.set(FlexibleIndicator_40);
      Instrument_40.insert(FlexibleIndicator_40.getString());
      FIX::FloorPrice FloorPrice_40;
      FloorPrice_40.setString("2912218");
      noQuoteEntries_0_1_1.set(FloorPrice_40);
      Instrument_40.insert(FloorPrice_40.getString());
      FIX::FlowScheduleType FlowScheduleType_40(3);
      noQuoteEntries_0_1_1.set(FlowScheduleType_40);
      Instrument_40.insert(FlowScheduleType_40.getString());
      FIX::InstrRegistry InstrRegistry_40("STRING_107762685");
      noQuoteEntries_0_1_1.set(InstrRegistry_40);
      Instrument_40.insert(InstrRegistry_40.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_40('5');
      noQuoteEntries_0_1_1.set(InstrmtAssignmentMethod_40);
      Instrument_40.insert(InstrmtAssignmentMethod_40.getString());
      FIX::InterestAccrualDate InterestAccrualDate_40("LOCALMKTDATE_1137892267");
      noQuoteEntries_0_1_1.set(InterestAccrualDate_40);
      Instrument_40.insert(InterestAccrualDate_40.getString());
      FIX::IssueDate IssueDate_40("LOCALMKTDATE_484400444");
      noQuoteEntries_0_1_1.set(IssueDate_40);
      Instrument_40.insert(IssueDate_40.getString());
      FIX::Issuer Issuer_40("STRING_543420677");
      noQuoteEntries_0_1_1.set(Issuer_40);
      Instrument_40.insert(Issuer_40.getString());
      FIX::ListMethod ListMethod_40(0);
      noQuoteEntries_0_1_1.set(ListMethod_40);
      Instrument_40.insert(ListMethod_40.getString());
      FIX::LocaleOfIssue LocaleOfIssue_40("STRING_1613710578");
      noQuoteEntries_0_1_1.set(LocaleOfIssue_40);
      Instrument_40.insert(LocaleOfIssue_40.getString());
      FIX::MaturityDate MaturityDate_40("LOCALMKTDATE_1052334366");
      noQuoteEntries_0_1_1.set(MaturityDate_40);
      Instrument_40.insert(MaturityDate_40.getString());
      FIX::MaturityMonthYear MaturityMonthYear_40("MONTHYEAR_1301748698");
      noQuoteEntries_0_1_1.set(MaturityMonthYear_40);
      Instrument_40.insert(MaturityMonthYear_40.getString());
      FIX::MaturityTime MaturityTime_40("TZTIMEONLY_1322312531");
      noQuoteEntries_0_1_1.set(MaturityTime_40);
      Instrument_40.insert(MaturityTime_40.getString());
      FIX::MinPriceIncrement MinPriceIncrement_40;
      MinPriceIncrement_40.setString("8767997");
      noQuoteEntries_0_1_1.set(MinPriceIncrement_40);
      Instrument_40.insert(MinPriceIncrement_40.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
      MinPriceIncrementAmount_40.setString("3787629");
      noQuoteEntries_0_1_1.set(MinPriceIncrementAmount_40);
      Instrument_40.insert(MinPriceIncrementAmount_40.getString());
      FIX::NTPositionLimit NTPositionLimit_40(1594646714);
      noQuoteEntries_0_1_1.set(NTPositionLimit_40);
      Instrument_40.insert(NTPositionLimit_40.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
      NotionalPercentageOutstanding_40.setString("18.630000");
      noQuoteEntries_0_1_1.set(NotionalPercentageOutstanding_40);
      Instrument_40.insert(NotionalPercentageOutstanding_40.getString());
      FIX::OptAttribute OptAttribute_40('1');
      noQuoteEntries_0_1_1.set(OptAttribute_40);
      Instrument_40.insert(OptAttribute_40.getString());
      FIX::OptPayoutAmount OptPayoutAmount_40;
      OptPayoutAmount_40.setString("691354");
      noQuoteEntries_0_1_1.set(OptPayoutAmount_40);
      Instrument_40.insert(OptPayoutAmount_40.getString());
      FIX::OptPayoutType OptPayoutType_40(2);
      noQuoteEntries_0_1_1.set(OptPayoutType_40);
      Instrument_40.insert(OptPayoutType_40.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
      OriginalNotionalPercentageOutstanding_40.setString("9.670000");
      noQuoteEntries_0_1_1.set(OriginalNotionalPercentageOutstanding_40);
      Instrument_40.insert(OriginalNotionalPercentageOutstanding_40.getString());
      FIX::Pool Pool_40("STRING_2140993471");
      noQuoteEntries_0_1_1.set(Pool_40);
      Instrument_40.insert(Pool_40.getString());
      FIX::PositionLimit PositionLimit_40(1367402911);
      noQuoteEntries_0_1_1.set(PositionLimit_40);
      Instrument_40.insert(PositionLimit_40.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_40("STRING_PCTPAR");
      noQuoteEntries_0_1_1.set(PriceQuoteMethod_40);
      Instrument_40.insert(PriceQuoteMethod_40.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_40("STRING_1672123453");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasure_40);
      Instrument_40.insert(PriceUnitOfMeasure_40.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
      PriceUnitOfMeasureQty_40.setString("5903611");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasureQty_40);
      Instrument_40.insert(PriceUnitOfMeasureQty_40.getString());
      FIX::Product Product_42(1);
      noQuoteEntries_0_1_1.set(Product_42);
      Instrument_40.insert(Product_42.getString());
      FIX::ProductComplex ProductComplex_40("STRING_890407148");
      noQuoteEntries_0_1_1.set(ProductComplex_40);
      Instrument_40.insert(ProductComplex_40.getString());
      FIX::PutOrCall PutOrCall_40(0);
      noQuoteEntries_0_1_1.set(PutOrCall_40);
      Instrument_40.insert(PutOrCall_40.getString());
      FIX::RedemptionDate RedemptionDate_40("LOCALMKTDATE_1062063455");
      noQuoteEntries_0_1_1.set(RedemptionDate_40);
      Instrument_40.insert(RedemptionDate_40.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_40("STRING_1467600132");
      noQuoteEntries_0_1_1.set(RepoCollateralSecurityType_40);
      Instrument_40.insert(RepoCollateralSecurityType_40.getString());
      FIX::RepurchaseRate RepurchaseRate_40;
      RepurchaseRate_40.setString("52.250000");
      noQuoteEntries_0_1_1.set(RepurchaseRate_40);
      Instrument_40.insert(RepurchaseRate_40.getString());
      FIX::RepurchaseTerm RepurchaseTerm_40(1353285330);
      noQuoteEntries_0_1_1.set(RepurchaseTerm_40);
      Instrument_40.insert(RepurchaseTerm_40.getString());
      FIX::RestructuringType RestructuringType_40("STRING_FR");
      noQuoteEntries_0_1_1.set(RestructuringType_40);
      Instrument_40.insert(RestructuringType_40.getString());
      FIX::SecurityDesc SecurityDesc_40("STRING_147157910");
      noQuoteEntries_0_1_1.set(SecurityDesc_40);
      Instrument_40.insert(SecurityDesc_40.getString());
      FIX::SecurityExchange SecurityExchange_40("EXCHANGE_1939252695");
      noQuoteEntries_0_1_1.set(SecurityExchange_40);
      Instrument_40.insert(SecurityExchange_40.getString());
      FIX::SecurityGroup SecurityGroup_40("STRING_262220211");
      noQuoteEntries_0_1_1.set(SecurityGroup_40);
      Instrument_40.insert(SecurityGroup_40.getString());
      FIX::SecurityID SecurityID_40("STRING_631558354");
      noQuoteEntries_0_1_1.set(SecurityID_40);
      Instrument_40.insert(SecurityID_40.getString());
      FIX::SecurityIDSource SecurityIDSource_40("STRING_D");
      noQuoteEntries_0_1_1.set(SecurityIDSource_40);
      Instrument_40.insert(SecurityIDSource_40.getString());
      FIX::SecurityStatus SecurityStatus_40("STRING_1");
      noQuoteEntries_0_1_1.set(SecurityStatus_40);
      Instrument_40.insert(SecurityStatus_40.getString());
      FIX::SecuritySubType SecuritySubType_41("STRING_97785284");
      noQuoteEntries_0_1_1.set(SecuritySubType_41);
      Instrument_40.insert(SecuritySubType_41.getString());
      FIX::SecurityType SecurityType_42("STRING_MPO");
      noQuoteEntries_0_1_1.set(SecurityType_42);
      Instrument_40.insert(SecurityType_42.getString());
      FIX::Seniority Seniority_40("STRING_SR");
      noQuoteEntries_0_1_1.set(Seniority_40);
      Instrument_40.insert(Seniority_40.getString());
      FIX::SettlMethod SettlMethod_40('P');
      noQuoteEntries_0_1_1.set(SettlMethod_40);
      Instrument_40.insert(SettlMethod_40.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_40("STRING_116840228");
      noQuoteEntries_0_1_1.set(SettleOnOpenFlag_40);
      Instrument_40.insert(SettleOnOpenFlag_40.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_40("STRING_98770130");
      noQuoteEntries_0_1_1.set(StateOrProvinceOfIssue_40);
      Instrument_40.insert(StateOrProvinceOfIssue_40.getString());
      FIX::StrikeCurrency StrikeCurrency_40("CHF");
      noQuoteEntries_0_1_1.set(StrikeCurrency_40);
      Instrument_40.insert(StrikeCurrency_40.getString());
      FIX::StrikeMultiplier StrikeMultiplier_40;
      StrikeMultiplier_40.setString("17669412");
      noQuoteEntries_0_1_1.set(StrikeMultiplier_40);
      Instrument_40.insert(StrikeMultiplier_40.getString());
      FIX::StrikePrice StrikePrice_40;
      StrikePrice_40.setString("9363963");
      noQuoteEntries_0_1_1.set(StrikePrice_40);
      Instrument_40.insert(StrikePrice_40.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_40(1);
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryMethod_40);
      Instrument_40.insert(StrikePriceBoundaryMethod_40.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
      StrikePriceBoundaryPrecision_40.setString("85.550000");
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryPrecision_40);
      Instrument_40.insert(StrikePriceBoundaryPrecision_40.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_40(4);
      noQuoteEntries_0_1_1.set(StrikePriceDeterminationMethod_40);
      Instrument_40.insert(StrikePriceDeterminationMethod_40.getString());
      FIX::StrikeValue StrikeValue_40;
      StrikeValue_40.setString("17834914");
      noQuoteEntries_0_1_1.set(StrikeValue_40);
      Instrument_40.insert(StrikeValue_40.getString());
      FIX::Symbol Symbol_40("STRING_779901334");
      noQuoteEntries_0_1_1.set(Symbol_40);
      Instrument_40.insert(Symbol_40.getString());
      FIX::SymbolSfx SymbolSfx_40("STRING_CD");
      noQuoteEntries_0_1_1.set(SymbolSfx_40);
      Instrument_40.insert(SymbolSfx_40.getString());
      FIX::TimeUnit TimeUnit_40("STRING_Min");
      noQuoteEntries_0_1_1.set(TimeUnit_40);
      Instrument_40.insert(TimeUnit_40.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_40(3);
      noQuoteEntries_0_1_1.set(UnderlyingPriceDeterminationMethod_40);
      Instrument_40.insert(UnderlyingPriceDeterminationMethod_40.getString());
      FIX::UnitOfMeasure UnitOfMeasure_40("STRING_Bbl");
      noQuoteEntries_0_1_1.set(UnitOfMeasure_40);
      Instrument_40.insert(UnitOfMeasure_40.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
      UnitOfMeasureQty_40.setString("13513708");
      noQuoteEntries_0_1_1.set(UnitOfMeasureQty_40);
      Instrument_40.insert(UnitOfMeasureQty_40.getString());
      FIX::ValuationMethod ValuationMethod_40("STRING_CDS");
      noQuoteEntries_0_1_1.set(ValuationMethod_40);
      Instrument_40.insert(ValuationMethod_40.getString());
      all_values.push_back(Instrument_40);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_81;
        FIX::ComplexEventCondition ComplexEventCondition_81(1);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventCondition_81.getString());
        FIX::ComplexEventPrice ComplexEventPrice_81;
        ComplexEventPrice_81.setString("11621499");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPrice_81.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_81(3);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryMethod_81.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_81;
        ComplexEventPriceBoundaryPrecision_81.setString("39.630000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryPrecision_81.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_81(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceTimeType_81.getString());
        FIX::ComplexEventType ComplexEventType_81(8);
        noComplexEvents_0_1_2_0.set(ComplexEventType_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventType_81.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_81;
        ComplexOptPayoutAmount_81.setString("219986");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexOptPayoutAmount_81.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_81);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_168;
          FIX::ComplexEventEndDate ComplexEventEndDate_168(FIX::UTCTIMESTAMP(2, 30, 59, 13, 4, 2001));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_168);
          ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventEndDate_168.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_168(FIX::UTCTIMESTAMP(6, 17, 47, 11, 1, 2000));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_168);
          ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventStartDate_168.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_168);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_347;
            FIX::ComplexEventEndTime ComplexEventEndTime_347(FIX::UTCTIMEONLY(22, 39, 17));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_347);
            ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventEndTime_347.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_347(FIX::UTCTIMEONLY(3, 23, 36));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_347);
            ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventStartTime_347.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_347);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_348;
            FIX::ComplexEventEndTime ComplexEventEndTime_348(FIX::UTCTIMEONLY(22, 45, 46));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_348);
            ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventEndTime_348.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_348(FIX::UTCTIMEONLY(10, 16, 41));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_348);
            ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventStartTime_348.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_348);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_169;
          FIX::ComplexEventEndDate ComplexEventEndDate_169(FIX::UTCTIMESTAMP(18, 11, 30, 15, 7, 2007));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_169);
          ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventEndDate_169.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_169(FIX::UTCTIMESTAMP(1, 36, 21, 12, 6, 2001));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_169);
          ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventStartDate_169.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_169);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_349;
            FIX::ComplexEventEndTime ComplexEventEndTime_349(FIX::UTCTIMEONLY(10, 0, 37));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_349);
            ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventEndTime_349.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_349(FIX::UTCTIMEONLY(3, 0, 45));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_349);
            ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventStartTime_349.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_349);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_350;
            FIX::ComplexEventEndTime ComplexEventEndTime_350(FIX::UTCTIMEONLY(11, 30, 1));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventEndTime_350);
            ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventEndTime_350.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_350(FIX::UTCTIMEONLY(17, 17, 5));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventStartTime_350);
            ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventStartTime_350.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_350);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_351;
            FIX::ComplexEventEndTime ComplexEventEndTime_351(FIX::UTCTIMEONLY(15, 9, 11));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventEndTime_351);
            ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventEndTime_351.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_351(FIX::UTCTIMEONLY(3, 30, 45));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventStartTime_351);
            ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventStartTime_351.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_351);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_82;
        FIX::ComplexEventCondition ComplexEventCondition_82(1);
        noComplexEvents_0_1_2_1.set(ComplexEventCondition_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventCondition_82.getString());
        FIX::ComplexEventPrice ComplexEventPrice_82;
        ComplexEventPrice_82.setString("10062205");
        noComplexEvents_0_1_2_1.set(ComplexEventPrice_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPrice_82.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_82(4);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryMethod_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryMethod_82.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_82;
        ComplexEventPriceBoundaryPrecision_82.setString("39.330000");
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryPrecision_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryPrecision_82.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_82(2);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceTimeType_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceTimeType_82.getString());
        FIX::ComplexEventType ComplexEventType_82(5);
        noComplexEvents_0_1_2_1.set(ComplexEventType_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventType_82.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_82;
        ComplexOptPayoutAmount_82.setString("9988079");
        noComplexEvents_0_1_2_1.set(ComplexOptPayoutAmount_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexOptPayoutAmount_82.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_82);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_170;
          FIX::ComplexEventEndDate ComplexEventEndDate_170(FIX::UTCTIMESTAMP(13, 37, 5, 12, 3, 2002));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventEndDate_170);
          ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventEndDate_170.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_170(FIX::UTCTIMESTAMP(5, 20, 20, 25, 2, 2017));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventStartDate_170);
          ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventStartDate_170.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_170);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_352;
            FIX::ComplexEventEndTime ComplexEventEndTime_352(FIX::UTCTIMEONLY(20, 8, 29));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventEndTime_352);
            ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventEndTime_352.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_352(FIX::UTCTIMEONLY(3, 59, 55));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventStartTime_352);
            ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventStartTime_352.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_352);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_353;
            FIX::ComplexEventEndTime ComplexEventEndTime_353(FIX::UTCTIMEONLY(14, 54, 13));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventEndTime_353);
            ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventEndTime_353.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_353(FIX::UTCTIMEONLY(8, 46, 22));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventStartTime_353);
            ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventStartTime_353.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_353);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_354;
            FIX::ComplexEventEndTime ComplexEventEndTime_354(FIX::UTCTIMEONLY(16, 0, 45));
            noComplexEventTimes_0_1_1_0_4_2.set(ComplexEventEndTime_354);
            ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventEndTime_354.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_354(FIX::UTCTIMEONLY(18, 27, 11));
            noComplexEventTimes_0_1_1_0_4_2.set(ComplexEventStartTime_354);
            ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventStartTime_354.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_354);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_2);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_72;
        FIX::EventDate EventDate_72("LOCALMKTDATE_1893774227");
        noEvents_0_1_2_0.set(EventDate_72);
        EvntGrp_NoEvents_72.insert(EventDate_72.getString());
        FIX::EventPx EventPx_72;
        EventPx_72.setString("1972581");
        noEvents_0_1_2_0.set(EventPx_72);
        EvntGrp_NoEvents_72.insert(EventPx_72.getString());
        FIX::EventText EventText_72("STRING_1848946972");
        noEvents_0_1_2_0.set(EventText_72);
        EvntGrp_NoEvents_72.insert(EventText_72.getString());
        FIX::EventTime EventTime_72(FIX::UTCTIMESTAMP(16, 43, 35, 0, 8, 2008));
        noEvents_0_1_2_0.set(EventTime_72);
        EvntGrp_NoEvents_72.insert(EventTime_72.getString());
        FIX::EventType EventType_72(12);
        noEvents_0_1_2_0.set(EventType_72);
        EvntGrp_NoEvents_72.insert(EventType_72.getString());
        all_values.push_back(EvntGrp_NoEvents_72);

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_73;
        FIX::EventDate EventDate_73("LOCALMKTDATE_1081728815");
        noEvents_0_1_2_1.set(EventDate_73);
        EvntGrp_NoEvents_73.insert(EventDate_73.getString());
        FIX::EventPx EventPx_73;
        EventPx_73.setString("21222523");
        noEvents_0_1_2_1.set(EventPx_73);
        EvntGrp_NoEvents_73.insert(EventPx_73.getString());
        FIX::EventText EventText_73("STRING_1428182466");
        noEvents_0_1_2_1.set(EventText_73);
        EvntGrp_NoEvents_73.insert(EventText_73.getString());
        FIX::EventTime EventTime_73(FIX::UTCTIMESTAMP(2, 52, 40, 16, 1, 2006));
        noEvents_0_1_2_1.set(EventTime_73);
        EvntGrp_NoEvents_73.insert(EventTime_73.getString());
        FIX::EventType EventType_73(4);
        noEvents_0_1_2_1.set(EventType_73);
        EvntGrp_NoEvents_73.insert(EventType_73.getString());
        all_values.push_back(EvntGrp_NoEvents_73);

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_74;
        FIX::EventDate EventDate_74("LOCALMKTDATE_1972313236");
        noEvents_0_1_2_2.set(EventDate_74);
        EvntGrp_NoEvents_74.insert(EventDate_74.getString());
        FIX::EventPx EventPx_74;
        EventPx_74.setString("13408190");
        noEvents_0_1_2_2.set(EventPx_74);
        EvntGrp_NoEvents_74.insert(EventPx_74.getString());
        FIX::EventText EventText_74("STRING_1840479855");
        noEvents_0_1_2_2.set(EventText_74);
        EvntGrp_NoEvents_74.insert(EventText_74.getString());
        FIX::EventTime EventTime_74(FIX::UTCTIMESTAMP(15, 37, 12, 2, 5, 2004));
        noEvents_0_1_2_2.set(EventTime_74);
        EvntGrp_NoEvents_74.insert(EventTime_74.getString());
        FIX::EventType EventType_74(11);
        noEvents_0_1_2_2.set(EventType_74);
        EvntGrp_NoEvents_74.insert(EventType_74.getString());
        all_values.push_back(EvntGrp_NoEvents_74);

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_74;
        FIX::InstrumentPartyID InstrumentPartyID_74("STRING_1344954249");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyID_74.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_74('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyIDSource_74.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_74(833867456);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyRole_74.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_74);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164;
          FIX::InstrumentPartySubID InstrumentPartySubID_164("STRING_1468086275");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_164);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubID_164.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_164(1165934859);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_164);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubIDType_164.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_83;
        FIX::SecurityAltID SecurityAltID_83("STRING_317300078");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_83);
        SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltID_83.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_83("STRING_100180026");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_83);
        SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltIDSource_83.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_83);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_84;
        FIX::SecurityAltID SecurityAltID_84("STRING_929533639");
        noSecurityAltID_0_1_2_1.set(SecurityAltID_84);
        SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltID_84.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_84("STRING_1745482544");
        noSecurityAltID_0_1_2_1.set(SecurityAltIDSource_84);
        SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltIDSource_84.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_84);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_85;
        FIX::SecurityAltID SecurityAltID_85("STRING_2057564321");
        noSecurityAltID_0_1_2_2.set(SecurityAltID_85);
        SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltID_85.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_85("STRING_1831492857");
        noSecurityAltID_0_1_2_2.set(SecurityAltIDSource_85);
        SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltIDSource_85.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_85);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_80;
      FIX::SecurityXML SecurityXML_81("XMLDATA_343469189");
      noQuoteEntries_0_1_1.set(SecurityXML_81);
      FIX::SecurityXMLLen SecurityXMLLen_40(791790733);
      noQuoteEntries_0_1_1.set(SecurityXMLLen_40);
      FIX::SecurityXMLSchema SecurityXMLSchema_40("STRING_627292910");
      noQuoteEntries_0_1_1.set(SecurityXMLSchema_40);
      SecurityXML_80.insert(SecurityXMLSchema_40.getString());
      all_values.push_back(SecurityXML_80);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_56;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_56("DATA_1204359785");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuer_56.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_56(1596634532);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuerLen_56.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_56("DATA_433693085");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDesc_56.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_56(1029189374);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDescLen_56.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_56;
    UnderlyingAdjustedQuantity_56.setString("7899699");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_56);
    UnderlyingInstrument_56.insert(UnderlyingAdjustedQuantity_56.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_56;
    UnderlyingAllocationPercent_56.setString("92.920000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_56);
    UnderlyingInstrument_56.insert(UnderlyingAllocationPercent_56.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_56;
    UnderlyingAttachmentPoint_56.setString("34.590000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingAttachmentPoint_56.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_56("STRING_908906041");
    noQuoteSets_0_0.set(UnderlyingCFICode_56);
    UnderlyingInstrument_56.insert(UnderlyingCFICode_56.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_56("STRING_939375469");
    noQuoteSets_0_0.set(UnderlyingCPProgram_56);
    UnderlyingInstrument_56.insert(UnderlyingCPProgram_56.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_56("STRING_992053632");
    noQuoteSets_0_0.set(UnderlyingCPRegType_56);
    UnderlyingInstrument_56.insert(UnderlyingCPRegType_56.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_56;
    UnderlyingCapValue_56.setString("15258848");
    noQuoteSets_0_0.set(UnderlyingCapValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCapValue_56.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_56;
    UnderlyingCashAmount_56.setString("13370530");
    noQuoteSets_0_0.set(UnderlyingCashAmount_56);
    UnderlyingInstrument_56.insert(UnderlyingCashAmount_56.getString());
    FIX::UnderlyingCashType UnderlyingCashType_56("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_56);
    UnderlyingInstrument_56.insert(UnderlyingCashType_56.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_56;
    UnderlyingContractMultiplier_56.setString("1926381");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplier_56.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_56(1436193929);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplierUnit_56.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_56("COUNTRY_285544985");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingCountryOfIssue_56.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_56("LOCALMKTDATE_1996077352");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponPaymentDate_56.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_56;
    UnderlyingCouponRate_56.setString("77.370000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponRate_56.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_56("STRING_1186511261");
    noQuoteSets_0_0.set(UnderlyingCreditRating_56);
    UnderlyingInstrument_56.insert(UnderlyingCreditRating_56.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_56("CHF");
    noQuoteSets_0_0.set(UnderlyingCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrency_56.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_56;
    UnderlyingCurrentValue_56.setString("21412762");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrentValue_56.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_56;
    UnderlyingDetachmentPoint_56.setString("0.570000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingDetachmentPoint_56.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_56;
    UnderlyingDirtyPrice_56.setString("13886926");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingDirtyPrice_56.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_56;
    UnderlyingEndPrice_56.setString("9233262");
    noQuoteSets_0_0.set(UnderlyingEndPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingEndPrice_56.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_56;
    UnderlyingEndValue_56.setString("12319789");
    noQuoteSets_0_0.set(UnderlyingEndValue_56);
    UnderlyingInstrument_56.insert(UnderlyingEndValue_56.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_56(1298773297);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_56);
    UnderlyingInstrument_56.insert(UnderlyingExerciseStyle_56.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_56;
    UnderlyingFXRate_56.setString("6073354");
    noQuoteSets_0_0.set(UnderlyingFXRate_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRate_56.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_56('M');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRateCalc_56.getString());
    FIX::UnderlyingFactor UnderlyingFactor_56;
    UnderlyingFactor_56.setString("20905640");
    noQuoteSets_0_0.set(UnderlyingFactor_56);
    UnderlyingInstrument_56.insert(UnderlyingFactor_56.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_56(1234628344);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_56);
    UnderlyingInstrument_56.insert(UnderlyingFlowScheduleType_56.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_56("STRING_632324280");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_56);
    UnderlyingInstrument_56.insert(UnderlyingInstrRegistry_56.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_56("LOCALMKTDATE_1539714914");
    noQuoteSets_0_0.set(UnderlyingIssueDate_56);
    UnderlyingInstrument_56.insert(UnderlyingIssueDate_56.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_56("STRING_1668321429");
    noQuoteSets_0_0.set(UnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(UnderlyingIssuer_56.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_56("STRING_1661513654");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingLocaleOfIssue_56.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_56("LOCALMKTDATE_182201213");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityDate_56.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_56("MONTHYEAR_1795010721");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityMonthYear_56.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_56("TZTIMEONLY_156353466");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityTime_56.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_56;
    UnderlyingNotionalPercentageOutstanding_56.setString("72.540000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_56('5');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_56);
    UnderlyingInstrument_56.insert(UnderlyingOptAttribute_56.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_56;
    UnderlyingOriginalNotionalPercentageOutstanding_56.setString("70.980000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingOriginalNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_56("STRING_469508474");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasure_56.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_56;
    UnderlyingPriceUnitOfMeasureQty_56.setString("19239555");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasureQty_56.getString());
    FIX::UnderlyingProduct UnderlyingProduct_56(88997834);
    noQuoteSets_0_0.set(UnderlyingProduct_56);
    UnderlyingInstrument_56.insert(UnderlyingProduct_56.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_56(662146644);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_56);
    UnderlyingInstrument_56.insert(UnderlyingPutOrCall_56.getString());
    FIX::UnderlyingPx UnderlyingPx_56;
    UnderlyingPx_56.setString("12126658");
    noQuoteSets_0_0.set(UnderlyingPx_56);
    UnderlyingInstrument_56.insert(UnderlyingPx_56.getString());
    FIX::UnderlyingQty UnderlyingQty_56;
    UnderlyingQty_56.setString("3745428");
    noQuoteSets_0_0.set(UnderlyingQty_56);
    UnderlyingInstrument_56.insert(UnderlyingQty_56.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_56("LOCALMKTDATE_510740349");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_56);
    UnderlyingInstrument_56.insert(UnderlyingRedemptionDate_56.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_56("STRING_1335243598");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingRepoCollateralSecurityType_56.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_56;
    UnderlyingRepurchaseRate_56.setString("40.800000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseRate_56.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_56(1827420328);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseTerm_56.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_56("STRING_476272547");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_56);
    UnderlyingInstrument_56.insert(UnderlyingRestructuringType_56.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_56("STRING_1554846665");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityDesc_56.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_56("EXCHANGE_1313916738");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityExchange_56.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_56("STRING_1864965170");
    noQuoteSets_0_0.set(UnderlyingSecurityID_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityID_56.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_56("STRING_330689241");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityIDSource_56.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_56("STRING_398412044");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecuritySubType_56.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_56("STRING_1016254819");
    noQuoteSets_0_0.set(UnderlyingSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityType_56.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_56("STRING_938024675");
    noQuoteSets_0_0.set(UnderlyingSeniority_56);
    UnderlyingInstrument_56.insert(UnderlyingSeniority_56.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_56("STRING_1973860187");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlMethod_56.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_56(5);
    noQuoteSets_0_0.set(UnderlyingSettlementType_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlementType_56.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_56;
    UnderlyingStartValue_56.setString("251693");
    noQuoteSets_0_0.set(UnderlyingStartValue_56);
    UnderlyingInstrument_56.insert(UnderlyingStartValue_56.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_56("STRING_458700819");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingStateOrProvinceOfIssue_56.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_56("JPY");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikeCurrency_56.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_56;
    UnderlyingStrikePrice_56.setString("21202144");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikePrice_56.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_56("STRING_533767681");
    noQuoteSets_0_0.set(UnderlyingSymbol_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbol_56.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_56("STRING_1341017873");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbolSfx_56.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_56("STRING_129084292");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingTimeUnit_56.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_56("STRING_1624874936");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasure_56.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_56;
    UnderlyingUnitOfMeasureQty_56.setString("19279204");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasureQty_56.getString());
    all_values.push_back(UnderlyingInstrument_56);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_114;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_114("STRING_2094383410");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltID_114.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_114("STRING_1704392346");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltIDSource_114.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_115;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_115("STRING_1366489224");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltID_115.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_115("STRING_609046407");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltIDSource_115.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_107;
      FIX::UnderlyingStipType UnderlyingStipType_107("STRING_1741032043");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_107);
      UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipType_107.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_107("STRING_1119786756");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_107);
      UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipValue_107.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_107);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_121("STRING_1154602475");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyID_121.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_121('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyIDSource_121.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_121(433607056);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyRole_121.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_247("STRING_2113640174");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_247);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubID_247.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_247(151088578);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_247);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubIDType_247.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_248("STRING_892654733");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_248);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubID_248.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_248(364568570);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_248);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubIDType_248.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_249("STRING_1167343398");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_249);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubID_249.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_249(1830679409);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_249);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubIDType_249.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_122("STRING_190945109");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyID_122.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_122('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyIDSource_122.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_122(1855848780);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyRole_122.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_250("STRING_330761420");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_250);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubID_250.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_250(1401855933);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_250);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubIDType_250.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);

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
    FIX::LastFragment LastFragment_10(false);
    noQuoteSets_0_1.set(LastFragment_10);
    QuotSetAckGrp_NoQuoteSets_1.insert(LastFragment_10.getString());
    FIX::QuoteSetID QuoteSetID_2("STRING_864529102");
    noQuoteSets_0_1.set(QuoteSetID_2);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetID_2.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_2(FIX::UTCTIMESTAMP(23, 10, 6, 1, 1, 2006));
    noQuoteSets_0_1.set(QuoteSetValidUntilTime_2);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetValidUntilTime_2.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_1(1247958013);
    noQuoteSets_0_1.set(TotNoAccQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoAccQuotes_1.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_1(897866559);
    noQuoteSets_0_1.set(TotNoCxldQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoCxldQuotes_1.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_2(702310183);
    noQuoteSets_0_1.set(TotNoQuoteEntries_2);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoQuoteEntries_2.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_1(841506408);
    noQuoteSets_0_1.set(TotNoRejQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoRejQuotes_1.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_1);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_5;
      BidForwardPoints_5.setString("6596446");
      noQuoteEntries_1_1_0.set(BidForwardPoints_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidForwardPoints_5.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_5;
      BidForwardPoints2_5.setString("19961088");
      noQuoteEntries_1_1_0.set(BidForwardPoints2_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidForwardPoints2_5.getString());
      FIX::BidPx BidPx_5;
      BidPx_5.setString("6698931");
      noQuoteEntries_1_1_0.set(BidPx_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidPx_5.getString());
      FIX::BidSize BidSize_5;
      BidSize_5.setString("10932517");
      noQuoteEntries_1_1_0.set(BidSize_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidSize_5.getString());
      FIX::BidSpotRate BidSpotRate_5;
      BidSpotRate_5.setString("4105907");
      noQuoteEntries_1_1_0.set(BidSpotRate_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidSpotRate_5.getString());
      FIX::BidYield BidYield_5;
      BidYield_5.setString("96.300000");
      noQuoteEntries_1_1_0.set(BidYield_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidYield_5.getString());
      FIX::BookingType BookingType_11(0);
      noQuoteEntries_1_1_0.set(BookingType_11);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BookingType_11.getString());
      FIX::Currency Currency_38("EUR");
      noQuoteEntries_1_1_0.set(Currency_38);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(Currency_38.getString());
      FIX::MidPx MidPx_5;
      MidPx_5.setString("2642000");
      noQuoteEntries_1_1_0.set(MidPx_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(MidPx_5.getString());
      FIX::MidYield MidYield_5;
      MidYield_5.setString("12.210000");
      noQuoteEntries_1_1_0.set(MidYield_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(MidYield_5.getString());
      FIX::OfferForwardPoints OfferForwardPoints_5;
      OfferForwardPoints_5.setString("11915633");
      noQuoteEntries_1_1_0.set(OfferForwardPoints_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferForwardPoints_5.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_5;
      OfferForwardPoints2_5.setString("2433950");
      noQuoteEntries_1_1_0.set(OfferForwardPoints2_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferForwardPoints2_5.getString());
      FIX::OfferPx OfferPx_5;
      OfferPx_5.setString("6948063");
      noQuoteEntries_1_1_0.set(OfferPx_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferPx_5.getString());
      FIX::OfferSize OfferSize_5;
      OfferSize_5.setString("18412092");
      noQuoteEntries_1_1_0.set(OfferSize_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferSize_5.getString());
      FIX::OfferSpotRate OfferSpotRate_5;
      OfferSpotRate_5.setString("5741564");
      noQuoteEntries_1_1_0.set(OfferSpotRate_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferSpotRate_5.getString());
      FIX::OfferYield OfferYield_5;
      OfferYield_5.setString("22.870000");
      noQuoteEntries_1_1_0.set(OfferYield_5);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferYield_5.getString());
      FIX::OrdType OrdType_38('3');
      noQuoteEntries_1_1_0.set(OrdType_38);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrdType_38.getString());
      FIX::OrderCapacity OrderCapacity_14('G');
      noQuoteEntries_1_1_0.set(OrderCapacity_14);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderCapacity_14.getString());
      FIX::OrderQty2 OrderQty2_6;
      OrderQty2_6.setString("5445687");
      noQuoteEntries_1_1_0.set(OrderQty2_6);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderQty2_6.getString());
      FIX::OrderRestrictions OrderRestrictions_9("MULTIPLECHARVALUE_E");
      noQuoteEntries_1_1_0.set(OrderRestrictions_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderRestrictions_9.getString());
      FIX::QuoteEntryID QuoteEntryID_10("STRING_1780605941");
      noQuoteEntries_1_1_0.set(QuoteEntryID_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryID_10.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_2(920395723);
      noQuoteEntries_1_1_0.set(QuoteEntryRejectReason_2);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryRejectReason_2.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_2(6);
      noQuoteEntries_1_1_0.set(QuoteEntryStatus_2);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryStatus_2.getString());
      FIX::SettlDate SettlDate_30("LOCALMKTDATE_2069426094");
      noQuoteEntries_1_1_0.set(SettlDate_30);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(SettlDate_30.getString());
      FIX::SettlDate2 SettlDate2_6("LOCALMKTDATE_853131348");
      noQuoteEntries_1_1_0.set(SettlDate2_6);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(SettlDate2_6.getString());
      FIX::TradingSessionID TradingSessionID_42("STRING_2");
      noQuoteEntries_1_1_0.set(TradingSessionID_42);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TradingSessionID_42.getString());
      FIX::TradingSessionSubID TradingSessionSubID_42("STRING_2");
      noQuoteEntries_1_1_0.set(TradingSessionSubID_42);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TradingSessionSubID_42.getString());
      FIX::TransactTime TransactTime_32(FIX::UTCTIMESTAMP(19, 33, 36, 18, 2, 2016));
      noQuoteEntries_1_1_0.set(TransactTime_32);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TransactTime_32.getString());
      FIX::ValidUntilTime ValidUntilTime_6(FIX::UTCTIMESTAMP(23, 23, 30, 4, 1, 2001));
      noQuoteEntries_1_1_0.set(ValidUntilTime_6);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(ValidUntilTime_6.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_2);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_68;
        FIX::EncodedLegIssuer EncodedLegIssuer_68("DATA_765306109");
        noLegs_1_0_2_0.set(EncodedLegIssuer_68);
        InstrumentLeg_68.insert(EncodedLegIssuer_68.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_68(1987238305);
        noLegs_1_0_2_0.set(EncodedLegIssuerLen_68);
        InstrumentLeg_68.insert(EncodedLegIssuerLen_68.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_68("DATA_1734344862");
        noLegs_1_0_2_0.set(EncodedLegSecurityDesc_68);
        InstrumentLeg_68.insert(EncodedLegSecurityDesc_68.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_68(1339462559);
        noLegs_1_0_2_0.set(EncodedLegSecurityDescLen_68);
        InstrumentLeg_68.insert(EncodedLegSecurityDescLen_68.getString());
        FIX::LegCFICode LegCFICode_68("STRING_1936416944");
        noLegs_1_0_2_0.set(LegCFICode_68);
        InstrumentLeg_68.insert(LegCFICode_68.getString());
        FIX::LegContractMultiplier LegContractMultiplier_68;
        LegContractMultiplier_68.setString("20504472");
        noLegs_1_0_2_0.set(LegContractMultiplier_68);
        InstrumentLeg_68.insert(LegContractMultiplier_68.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_68(630664462);
        noLegs_1_0_2_0.set(LegContractMultiplierUnit_68);
        InstrumentLeg_68.insert(LegContractMultiplierUnit_68.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_68("MONTHYEAR_333502094");
        noLegs_1_0_2_0.set(LegContractSettlMonth_68);
        InstrumentLeg_68.insert(LegContractSettlMonth_68.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_68("COUNTRY_970526954");
        noLegs_1_0_2_0.set(LegCountryOfIssue_68);
        InstrumentLeg_68.insert(LegCountryOfIssue_68.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_68("LOCALMKTDATE_263786756");
        noLegs_1_0_2_0.set(LegCouponPaymentDate_68);
        InstrumentLeg_68.insert(LegCouponPaymentDate_68.getString());
        FIX::LegCouponRate LegCouponRate_68;
        LegCouponRate_68.setString("78.170000");
        noLegs_1_0_2_0.set(LegCouponRate_68);
        InstrumentLeg_68.insert(LegCouponRate_68.getString());
        FIX::LegCreditRating LegCreditRating_68("STRING_1919559137");
        noLegs_1_0_2_0.set(LegCreditRating_68);
        InstrumentLeg_68.insert(LegCreditRating_68.getString());
        FIX::LegCurrency LegCurrency_68("CHF");
        noLegs_1_0_2_0.set(LegCurrency_68);
        InstrumentLeg_68.insert(LegCurrency_68.getString());
        FIX::LegDatedDate LegDatedDate_68("LOCALMKTDATE_1969065684");
        noLegs_1_0_2_0.set(LegDatedDate_68);
        InstrumentLeg_68.insert(LegDatedDate_68.getString());
        FIX::LegExerciseStyle LegExerciseStyle_68(1005538207);
        noLegs_1_0_2_0.set(LegExerciseStyle_68);
        InstrumentLeg_68.insert(LegExerciseStyle_68.getString());
        FIX::LegFactor LegFactor_68;
        LegFactor_68.setString("15149870");
        noLegs_1_0_2_0.set(LegFactor_68);
        InstrumentLeg_68.insert(LegFactor_68.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_68(712594992);
        noLegs_1_0_2_0.set(LegFlowScheduleType_68);
        InstrumentLeg_68.insert(LegFlowScheduleType_68.getString());
        FIX::LegInstrRegistry LegInstrRegistry_68("STRING_1695516880");
        noLegs_1_0_2_0.set(LegInstrRegistry_68);
        InstrumentLeg_68.insert(LegInstrRegistry_68.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_68("LOCALMKTDATE_1582589625");
        noLegs_1_0_2_0.set(LegInterestAccrualDate_68);
        InstrumentLeg_68.insert(LegInterestAccrualDate_68.getString());
        FIX::LegIssueDate LegIssueDate_68("LOCALMKTDATE_1452233182");
        noLegs_1_0_2_0.set(LegIssueDate_68);
        InstrumentLeg_68.insert(LegIssueDate_68.getString());
        FIX::LegIssuer LegIssuer_68("STRING_907905009");
        noLegs_1_0_2_0.set(LegIssuer_68);
        InstrumentLeg_68.insert(LegIssuer_68.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_68("STRING_595960301");
        noLegs_1_0_2_0.set(LegLocaleOfIssue_68);
        InstrumentLeg_68.insert(LegLocaleOfIssue_68.getString());
        FIX::LegMaturityDate LegMaturityDate_68("LOCALMKTDATE_454978452");
        noLegs_1_0_2_0.set(LegMaturityDate_68);
        InstrumentLeg_68.insert(LegMaturityDate_68.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_68("MONTHYEAR_756342769");
        noLegs_1_0_2_0.set(LegMaturityMonthYear_68);
        InstrumentLeg_68.insert(LegMaturityMonthYear_68.getString());
        FIX::LegMaturityTime LegMaturityTime_68("TZTIMEONLY_853671305");
        noLegs_1_0_2_0.set(LegMaturityTime_68);
        InstrumentLeg_68.insert(LegMaturityTime_68.getString());
        FIX::LegOptAttribute LegOptAttribute_68('7');
        noLegs_1_0_2_0.set(LegOptAttribute_68);
        InstrumentLeg_68.insert(LegOptAttribute_68.getString());
        FIX::LegOptionRatio LegOptionRatio_68;
        LegOptionRatio_68.setString("16053987");
        noLegs_1_0_2_0.set(LegOptionRatio_68);
        InstrumentLeg_68.insert(LegOptionRatio_68.getString());
        FIX::LegPool LegPool_68("STRING_1375582385");
        noLegs_1_0_2_0.set(LegPool_68);
        InstrumentLeg_68.insert(LegPool_68.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_68("STRING_2053401133");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasure_68);
        InstrumentLeg_68.insert(LegPriceUnitOfMeasure_68.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_68;
        LegPriceUnitOfMeasureQty_68.setString("14985343");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasureQty_68);
        InstrumentLeg_68.insert(LegPriceUnitOfMeasureQty_68.getString());
        FIX::LegProduct LegProduct_68(2140888495);
        noLegs_1_0_2_0.set(LegProduct_68);
        InstrumentLeg_68.insert(LegProduct_68.getString());
        FIX::LegPutOrCall LegPutOrCall_68(1893155791);
        noLegs_1_0_2_0.set(LegPutOrCall_68);
        InstrumentLeg_68.insert(LegPutOrCall_68.getString());
        FIX::LegRatioQty LegRatioQty_68;
        LegRatioQty_68.setString("10853955");
        noLegs_1_0_2_0.set(LegRatioQty_68);
        InstrumentLeg_68.insert(LegRatioQty_68.getString());
        FIX::LegRedemptionDate LegRedemptionDate_68("LOCALMKTDATE_1332867406");
        noLegs_1_0_2_0.set(LegRedemptionDate_68);
        InstrumentLeg_68.insert(LegRedemptionDate_68.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_68("STRING_1682089087");
        noLegs_1_0_2_0.set(LegRepoCollateralSecurityType_68);
        InstrumentLeg_68.insert(LegRepoCollateralSecurityType_68.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_68;
        LegRepurchaseRate_68.setString("91.280000");
        noLegs_1_0_2_0.set(LegRepurchaseRate_68);
        InstrumentLeg_68.insert(LegRepurchaseRate_68.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_68(1963531868);
        noLegs_1_0_2_0.set(LegRepurchaseTerm_68);
        InstrumentLeg_68.insert(LegRepurchaseTerm_68.getString());
        FIX::LegSecurityDesc LegSecurityDesc_68("STRING_2015591181");
        noLegs_1_0_2_0.set(LegSecurityDesc_68);
        InstrumentLeg_68.insert(LegSecurityDesc_68.getString());
        FIX::LegSecurityExchange LegSecurityExchange_68("EXCHANGE_1958886082");
        noLegs_1_0_2_0.set(LegSecurityExchange_68);
        InstrumentLeg_68.insert(LegSecurityExchange_68.getString());
        FIX::LegSecurityID LegSecurityID_68("STRING_79834976");
        noLegs_1_0_2_0.set(LegSecurityID_68);
        InstrumentLeg_68.insert(LegSecurityID_68.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_68("STRING_1122005351");
        noLegs_1_0_2_0.set(LegSecurityIDSource_68);
        InstrumentLeg_68.insert(LegSecurityIDSource_68.getString());
        FIX::LegSecuritySubType LegSecuritySubType_68("STRING_1730961571");
        noLegs_1_0_2_0.set(LegSecuritySubType_68);
        InstrumentLeg_68.insert(LegSecuritySubType_68.getString());
        FIX::LegSecurityType LegSecurityType_68("STRING_265564178");
        noLegs_1_0_2_0.set(LegSecurityType_68);
        InstrumentLeg_68.insert(LegSecurityType_68.getString());
        FIX::LegSide LegSide_68('1');
        noLegs_1_0_2_0.set(LegSide_68);
        InstrumentLeg_68.insert(LegSide_68.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_68("STRING_1552543608");
        noLegs_1_0_2_0.set(LegStateOrProvinceOfIssue_68);
        InstrumentLeg_68.insert(LegStateOrProvinceOfIssue_68.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_68("EUR");
        noLegs_1_0_2_0.set(LegStrikeCurrency_68);
        InstrumentLeg_68.insert(LegStrikeCurrency_68.getString());
        FIX::LegStrikePrice LegStrikePrice_68;
        LegStrikePrice_68.setString("1176549");
        noLegs_1_0_2_0.set(LegStrikePrice_68);
        InstrumentLeg_68.insert(LegStrikePrice_68.getString());
        FIX::LegSymbol LegSymbol_68("STRING_819135618");
        noLegs_1_0_2_0.set(LegSymbol_68);
        InstrumentLeg_68.insert(LegSymbol_68.getString());
        FIX::LegSymbolSfx LegSymbolSfx_68("STRING_2031643894");
        noLegs_1_0_2_0.set(LegSymbolSfx_68);
        InstrumentLeg_68.insert(LegSymbolSfx_68.getString());
        FIX::LegTimeUnit LegTimeUnit_68("STRING_1569888134");
        noLegs_1_0_2_0.set(LegTimeUnit_68);
        InstrumentLeg_68.insert(LegTimeUnit_68.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_68("STRING_1727040628");
        noLegs_1_0_2_0.set(LegUnitOfMeasure_68);
        InstrumentLeg_68.insert(LegUnitOfMeasure_68.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_68;
        LegUnitOfMeasureQty_68.setString("4801205");
        noLegs_1_0_2_0.set(LegUnitOfMeasureQty_68);
        InstrumentLeg_68.insert(LegUnitOfMeasureQty_68.getString());
        all_values.push_back(InstrumentLeg_68);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_140;
          FIX::LegSecurityAltID LegSecurityAltID_140("STRING_335899749");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltID_140);
          LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltID_140.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_140("STRING_1333791853");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltIDSource_140);
          LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltIDSource_140.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_140);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_141;
          FIX::LegSecurityAltID LegSecurityAltID_141("STRING_638352120");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltID_141);
          LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltID_141.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_141("STRING_1941298478");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltIDSource_141);
          LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltIDSource_141.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_141);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_142;
          FIX::LegSecurityAltID LegSecurityAltID_142("STRING_561890590");
          noLegSecurityAltID_1_0_0_3_2.set(LegSecurityAltID_142);
          LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltID_142.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_142("STRING_544269606");
          noLegSecurityAltID_1_0_0_3_2.set(LegSecurityAltIDSource_142);
          LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltIDSource_142.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_142);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_69;
        FIX::EncodedLegIssuer EncodedLegIssuer_69("DATA_1292349183");
        noLegs_1_0_2_1.set(EncodedLegIssuer_69);
        InstrumentLeg_69.insert(EncodedLegIssuer_69.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_69(555295437);
        noLegs_1_0_2_1.set(EncodedLegIssuerLen_69);
        InstrumentLeg_69.insert(EncodedLegIssuerLen_69.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_69("DATA_289941749");
        noLegs_1_0_2_1.set(EncodedLegSecurityDesc_69);
        InstrumentLeg_69.insert(EncodedLegSecurityDesc_69.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_69(230261102);
        noLegs_1_0_2_1.set(EncodedLegSecurityDescLen_69);
        InstrumentLeg_69.insert(EncodedLegSecurityDescLen_69.getString());
        FIX::LegCFICode LegCFICode_69("STRING_1888162843");
        noLegs_1_0_2_1.set(LegCFICode_69);
        InstrumentLeg_69.insert(LegCFICode_69.getString());
        FIX::LegContractMultiplier LegContractMultiplier_69;
        LegContractMultiplier_69.setString("19720308");
        noLegs_1_0_2_1.set(LegContractMultiplier_69);
        InstrumentLeg_69.insert(LegContractMultiplier_69.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_69(1218620230);
        noLegs_1_0_2_1.set(LegContractMultiplierUnit_69);
        InstrumentLeg_69.insert(LegContractMultiplierUnit_69.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_69("MONTHYEAR_1704211064");
        noLegs_1_0_2_1.set(LegContractSettlMonth_69);
        InstrumentLeg_69.insert(LegContractSettlMonth_69.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_69("COUNTRY_1840138370");
        noLegs_1_0_2_1.set(LegCountryOfIssue_69);
        InstrumentLeg_69.insert(LegCountryOfIssue_69.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_69("LOCALMKTDATE_1030022664");
        noLegs_1_0_2_1.set(LegCouponPaymentDate_69);
        InstrumentLeg_69.insert(LegCouponPaymentDate_69.getString());
        FIX::LegCouponRate LegCouponRate_69;
        LegCouponRate_69.setString("60.400000");
        noLegs_1_0_2_1.set(LegCouponRate_69);
        InstrumentLeg_69.insert(LegCouponRate_69.getString());
        FIX::LegCreditRating LegCreditRating_69("STRING_814660073");
        noLegs_1_0_2_1.set(LegCreditRating_69);
        InstrumentLeg_69.insert(LegCreditRating_69.getString());
        FIX::LegCurrency LegCurrency_69("EUR");
        noLegs_1_0_2_1.set(LegCurrency_69);
        InstrumentLeg_69.insert(LegCurrency_69.getString());
        FIX::LegDatedDate LegDatedDate_69("LOCALMKTDATE_1896210941");
        noLegs_1_0_2_1.set(LegDatedDate_69);
        InstrumentLeg_69.insert(LegDatedDate_69.getString());
        FIX::LegExerciseStyle LegExerciseStyle_69(18560548);
        noLegs_1_0_2_1.set(LegExerciseStyle_69);
        InstrumentLeg_69.insert(LegExerciseStyle_69.getString());
        FIX::LegFactor LegFactor_69;
        LegFactor_69.setString("11732289");
        noLegs_1_0_2_1.set(LegFactor_69);
        InstrumentLeg_69.insert(LegFactor_69.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_69(197781563);
        noLegs_1_0_2_1.set(LegFlowScheduleType_69);
        InstrumentLeg_69.insert(LegFlowScheduleType_69.getString());
        FIX::LegInstrRegistry LegInstrRegistry_69("STRING_136215500");
        noLegs_1_0_2_1.set(LegInstrRegistry_69);
        InstrumentLeg_69.insert(LegInstrRegistry_69.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_69("LOCALMKTDATE_1992364575");
        noLegs_1_0_2_1.set(LegInterestAccrualDate_69);
        InstrumentLeg_69.insert(LegInterestAccrualDate_69.getString());
        FIX::LegIssueDate LegIssueDate_69("LOCALMKTDATE_81941809");
        noLegs_1_0_2_1.set(LegIssueDate_69);
        InstrumentLeg_69.insert(LegIssueDate_69.getString());
        FIX::LegIssuer LegIssuer_69("STRING_1706103634");
        noLegs_1_0_2_1.set(LegIssuer_69);
        InstrumentLeg_69.insert(LegIssuer_69.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_69("STRING_1571921555");
        noLegs_1_0_2_1.set(LegLocaleOfIssue_69);
        InstrumentLeg_69.insert(LegLocaleOfIssue_69.getString());
        FIX::LegMaturityDate LegMaturityDate_69("LOCALMKTDATE_562062357");
        noLegs_1_0_2_1.set(LegMaturityDate_69);
        InstrumentLeg_69.insert(LegMaturityDate_69.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_69("MONTHYEAR_1583486573");
        noLegs_1_0_2_1.set(LegMaturityMonthYear_69);
        InstrumentLeg_69.insert(LegMaturityMonthYear_69.getString());
        FIX::LegMaturityTime LegMaturityTime_69("TZTIMEONLY_1907821304");
        noLegs_1_0_2_1.set(LegMaturityTime_69);
        InstrumentLeg_69.insert(LegMaturityTime_69.getString());
        FIX::LegOptAttribute LegOptAttribute_69('1');
        noLegs_1_0_2_1.set(LegOptAttribute_69);
        InstrumentLeg_69.insert(LegOptAttribute_69.getString());
        FIX::LegOptionRatio LegOptionRatio_69;
        LegOptionRatio_69.setString("743550");
        noLegs_1_0_2_1.set(LegOptionRatio_69);
        InstrumentLeg_69.insert(LegOptionRatio_69.getString());
        FIX::LegPool LegPool_69("STRING_1701636135");
        noLegs_1_0_2_1.set(LegPool_69);
        InstrumentLeg_69.insert(LegPool_69.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_69("STRING_310261153");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasure_69);
        InstrumentLeg_69.insert(LegPriceUnitOfMeasure_69.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_69;
        LegPriceUnitOfMeasureQty_69.setString("6186246");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasureQty_69);
        InstrumentLeg_69.insert(LegPriceUnitOfMeasureQty_69.getString());
        FIX::LegProduct LegProduct_69(846501670);
        noLegs_1_0_2_1.set(LegProduct_69);
        InstrumentLeg_69.insert(LegProduct_69.getString());
        FIX::LegPutOrCall LegPutOrCall_69(865556590);
        noLegs_1_0_2_1.set(LegPutOrCall_69);
        InstrumentLeg_69.insert(LegPutOrCall_69.getString());
        FIX::LegRatioQty LegRatioQty_69;
        LegRatioQty_69.setString("9085664");
        noLegs_1_0_2_1.set(LegRatioQty_69);
        InstrumentLeg_69.insert(LegRatioQty_69.getString());
        FIX::LegRedemptionDate LegRedemptionDate_69("LOCALMKTDATE_1076762772");
        noLegs_1_0_2_1.set(LegRedemptionDate_69);
        InstrumentLeg_69.insert(LegRedemptionDate_69.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_69("STRING_606235786");
        noLegs_1_0_2_1.set(LegRepoCollateralSecurityType_69);
        InstrumentLeg_69.insert(LegRepoCollateralSecurityType_69.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_69;
        LegRepurchaseRate_69.setString("35.890000");
        noLegs_1_0_2_1.set(LegRepurchaseRate_69);
        InstrumentLeg_69.insert(LegRepurchaseRate_69.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_69(147899354);
        noLegs_1_0_2_1.set(LegRepurchaseTerm_69);
        InstrumentLeg_69.insert(LegRepurchaseTerm_69.getString());
        FIX::LegSecurityDesc LegSecurityDesc_69("STRING_162963202");
        noLegs_1_0_2_1.set(LegSecurityDesc_69);
        InstrumentLeg_69.insert(LegSecurityDesc_69.getString());
        FIX::LegSecurityExchange LegSecurityExchange_69("EXCHANGE_425768311");
        noLegs_1_0_2_1.set(LegSecurityExchange_69);
        InstrumentLeg_69.insert(LegSecurityExchange_69.getString());
        FIX::LegSecurityID LegSecurityID_69("STRING_1177922018");
        noLegs_1_0_2_1.set(LegSecurityID_69);
        InstrumentLeg_69.insert(LegSecurityID_69.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_69("STRING_1947009242");
        noLegs_1_0_2_1.set(LegSecurityIDSource_69);
        InstrumentLeg_69.insert(LegSecurityIDSource_69.getString());
        FIX::LegSecuritySubType LegSecuritySubType_69("STRING_1240428384");
        noLegs_1_0_2_1.set(LegSecuritySubType_69);
        InstrumentLeg_69.insert(LegSecuritySubType_69.getString());
        FIX::LegSecurityType LegSecurityType_69("STRING_1791422606");
        noLegs_1_0_2_1.set(LegSecurityType_69);
        InstrumentLeg_69.insert(LegSecurityType_69.getString());
        FIX::LegSide LegSide_69('1');
        noLegs_1_0_2_1.set(LegSide_69);
        InstrumentLeg_69.insert(LegSide_69.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_69("STRING_989155677");
        noLegs_1_0_2_1.set(LegStateOrProvinceOfIssue_69);
        InstrumentLeg_69.insert(LegStateOrProvinceOfIssue_69.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_69("GBP");
        noLegs_1_0_2_1.set(LegStrikeCurrency_69);
        InstrumentLeg_69.insert(LegStrikeCurrency_69.getString());
        FIX::LegStrikePrice LegStrikePrice_69;
        LegStrikePrice_69.setString("11869372");
        noLegs_1_0_2_1.set(LegStrikePrice_69);
        InstrumentLeg_69.insert(LegStrikePrice_69.getString());
        FIX::LegSymbol LegSymbol_69("STRING_1946198654");
        noLegs_1_0_2_1.set(LegSymbol_69);
        InstrumentLeg_69.insert(LegSymbol_69.getString());
        FIX::LegSymbolSfx LegSymbolSfx_69("STRING_719762050");
        noLegs_1_0_2_1.set(LegSymbolSfx_69);
        InstrumentLeg_69.insert(LegSymbolSfx_69.getString());
        FIX::LegTimeUnit LegTimeUnit_69("STRING_1268879050");
        noLegs_1_0_2_1.set(LegTimeUnit_69);
        InstrumentLeg_69.insert(LegTimeUnit_69.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_69("STRING_1504818641");
        noLegs_1_0_2_1.set(LegUnitOfMeasure_69);
        InstrumentLeg_69.insert(LegUnitOfMeasure_69.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_69;
        LegUnitOfMeasureQty_69.setString("1441999");
        noLegs_1_0_2_1.set(LegUnitOfMeasureQty_69);
        InstrumentLeg_69.insert(LegUnitOfMeasureQty_69.getString());
        all_values.push_back(InstrumentLeg_69);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_143;
          FIX::LegSecurityAltID LegSecurityAltID_143("STRING_940821566");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltID_143);
          LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltID_143.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_143("STRING_2052021262");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltIDSource_143);
          LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltIDSource_143.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_143);

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_144;
          FIX::LegSecurityAltID LegSecurityAltID_144("STRING_1579311970");
          noLegSecurityAltID_1_0_1_3_1.set(LegSecurityAltID_144);
          LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltID_144.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_144("STRING_1015176611");
          noLegSecurityAltID_1_0_1_3_1.set(LegSecurityAltIDSource_144);
          LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltIDSource_144.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_144);

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_70;
        FIX::EncodedLegIssuer EncodedLegIssuer_70("DATA_1606173749");
        noLegs_1_0_2_2.set(EncodedLegIssuer_70);
        InstrumentLeg_70.insert(EncodedLegIssuer_70.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_70(1889573123);
        noLegs_1_0_2_2.set(EncodedLegIssuerLen_70);
        InstrumentLeg_70.insert(EncodedLegIssuerLen_70.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_70("DATA_1633801263");
        noLegs_1_0_2_2.set(EncodedLegSecurityDesc_70);
        InstrumentLeg_70.insert(EncodedLegSecurityDesc_70.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_70(305191771);
        noLegs_1_0_2_2.set(EncodedLegSecurityDescLen_70);
        InstrumentLeg_70.insert(EncodedLegSecurityDescLen_70.getString());
        FIX::LegCFICode LegCFICode_70("STRING_607646065");
        noLegs_1_0_2_2.set(LegCFICode_70);
        InstrumentLeg_70.insert(LegCFICode_70.getString());
        FIX::LegContractMultiplier LegContractMultiplier_70;
        LegContractMultiplier_70.setString("3948840");
        noLegs_1_0_2_2.set(LegContractMultiplier_70);
        InstrumentLeg_70.insert(LegContractMultiplier_70.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_70(1381954543);
        noLegs_1_0_2_2.set(LegContractMultiplierUnit_70);
        InstrumentLeg_70.insert(LegContractMultiplierUnit_70.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_70("MONTHYEAR_1213881851");
        noLegs_1_0_2_2.set(LegContractSettlMonth_70);
        InstrumentLeg_70.insert(LegContractSettlMonth_70.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_70("COUNTRY_1127997604");
        noLegs_1_0_2_2.set(LegCountryOfIssue_70);
        InstrumentLeg_70.insert(LegCountryOfIssue_70.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_70("LOCALMKTDATE_1529853897");
        noLegs_1_0_2_2.set(LegCouponPaymentDate_70);
        InstrumentLeg_70.insert(LegCouponPaymentDate_70.getString());
        FIX::LegCouponRate LegCouponRate_70;
        LegCouponRate_70.setString("50.530000");
        noLegs_1_0_2_2.set(LegCouponRate_70);
        InstrumentLeg_70.insert(LegCouponRate_70.getString());
        FIX::LegCreditRating LegCreditRating_70("STRING_1553765915");
        noLegs_1_0_2_2.set(LegCreditRating_70);
        InstrumentLeg_70.insert(LegCreditRating_70.getString());
        FIX::LegCurrency LegCurrency_70("JPY");
        noLegs_1_0_2_2.set(LegCurrency_70);
        InstrumentLeg_70.insert(LegCurrency_70.getString());
        FIX::LegDatedDate LegDatedDate_70("LOCALMKTDATE_646710651");
        noLegs_1_0_2_2.set(LegDatedDate_70);
        InstrumentLeg_70.insert(LegDatedDate_70.getString());
        FIX::LegExerciseStyle LegExerciseStyle_70(204231226);
        noLegs_1_0_2_2.set(LegExerciseStyle_70);
        InstrumentLeg_70.insert(LegExerciseStyle_70.getString());
        FIX::LegFactor LegFactor_70;
        LegFactor_70.setString("8780228");
        noLegs_1_0_2_2.set(LegFactor_70);
        InstrumentLeg_70.insert(LegFactor_70.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_70(1635866329);
        noLegs_1_0_2_2.set(LegFlowScheduleType_70);
        InstrumentLeg_70.insert(LegFlowScheduleType_70.getString());
        FIX::LegInstrRegistry LegInstrRegistry_70("STRING_2014214380");
        noLegs_1_0_2_2.set(LegInstrRegistry_70);
        InstrumentLeg_70.insert(LegInstrRegistry_70.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_70("LOCALMKTDATE_1752903936");
        noLegs_1_0_2_2.set(LegInterestAccrualDate_70);
        InstrumentLeg_70.insert(LegInterestAccrualDate_70.getString());
        FIX::LegIssueDate LegIssueDate_70("LOCALMKTDATE_675319921");
        noLegs_1_0_2_2.set(LegIssueDate_70);
        InstrumentLeg_70.insert(LegIssueDate_70.getString());
        FIX::LegIssuer LegIssuer_70("STRING_1812929387");
        noLegs_1_0_2_2.set(LegIssuer_70);
        InstrumentLeg_70.insert(LegIssuer_70.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_70("STRING_325182338");
        noLegs_1_0_2_2.set(LegLocaleOfIssue_70);
        InstrumentLeg_70.insert(LegLocaleOfIssue_70.getString());
        FIX::LegMaturityDate LegMaturityDate_70("LOCALMKTDATE_1944198971");
        noLegs_1_0_2_2.set(LegMaturityDate_70);
        InstrumentLeg_70.insert(LegMaturityDate_70.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_70("MONTHYEAR_1170264380");
        noLegs_1_0_2_2.set(LegMaturityMonthYear_70);
        InstrumentLeg_70.insert(LegMaturityMonthYear_70.getString());
        FIX::LegMaturityTime LegMaturityTime_70("TZTIMEONLY_469382295");
        noLegs_1_0_2_2.set(LegMaturityTime_70);
        InstrumentLeg_70.insert(LegMaturityTime_70.getString());
        FIX::LegOptAttribute LegOptAttribute_70('1');
        noLegs_1_0_2_2.set(LegOptAttribute_70);
        InstrumentLeg_70.insert(LegOptAttribute_70.getString());
        FIX::LegOptionRatio LegOptionRatio_70;
        LegOptionRatio_70.setString("21110859");
        noLegs_1_0_2_2.set(LegOptionRatio_70);
        InstrumentLeg_70.insert(LegOptionRatio_70.getString());
        FIX::LegPool LegPool_70("STRING_373919909");
        noLegs_1_0_2_2.set(LegPool_70);
        InstrumentLeg_70.insert(LegPool_70.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_70("STRING_1059485053");
        noLegs_1_0_2_2.set(LegPriceUnitOfMeasure_70);
        InstrumentLeg_70.insert(LegPriceUnitOfMeasure_70.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_70;
        LegPriceUnitOfMeasureQty_70.setString("9787789");
        noLegs_1_0_2_2.set(LegPriceUnitOfMeasureQty_70);
        InstrumentLeg_70.insert(LegPriceUnitOfMeasureQty_70.getString());
        FIX::LegProduct LegProduct_70(1980093658);
        noLegs_1_0_2_2.set(LegProduct_70);
        InstrumentLeg_70.insert(LegProduct_70.getString());
        FIX::LegPutOrCall LegPutOrCall_70(801574528);
        noLegs_1_0_2_2.set(LegPutOrCall_70);
        InstrumentLeg_70.insert(LegPutOrCall_70.getString());
        FIX::LegRatioQty LegRatioQty_70;
        LegRatioQty_70.setString("4650965");
        noLegs_1_0_2_2.set(LegRatioQty_70);
        InstrumentLeg_70.insert(LegRatioQty_70.getString());
        FIX::LegRedemptionDate LegRedemptionDate_70("LOCALMKTDATE_137801781");
        noLegs_1_0_2_2.set(LegRedemptionDate_70);
        InstrumentLeg_70.insert(LegRedemptionDate_70.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_70("STRING_1409220593");
        noLegs_1_0_2_2.set(LegRepoCollateralSecurityType_70);
        InstrumentLeg_70.insert(LegRepoCollateralSecurityType_70.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_70;
        LegRepurchaseRate_70.setString("5.400000");
        noLegs_1_0_2_2.set(LegRepurchaseRate_70);
        InstrumentLeg_70.insert(LegRepurchaseRate_70.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_70(1519756324);
        noLegs_1_0_2_2.set(LegRepurchaseTerm_70);
        InstrumentLeg_70.insert(LegRepurchaseTerm_70.getString());
        FIX::LegSecurityDesc LegSecurityDesc_70("STRING_475618797");
        noLegs_1_0_2_2.set(LegSecurityDesc_70);
        InstrumentLeg_70.insert(LegSecurityDesc_70.getString());
        FIX::LegSecurityExchange LegSecurityExchange_70("EXCHANGE_1987978144");
        noLegs_1_0_2_2.set(LegSecurityExchange_70);
        InstrumentLeg_70.insert(LegSecurityExchange_70.getString());
        FIX::LegSecurityID LegSecurityID_70("STRING_902126573");
        noLegs_1_0_2_2.set(LegSecurityID_70);
        InstrumentLeg_70.insert(LegSecurityID_70.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_70("STRING_1852463850");
        noLegs_1_0_2_2.set(LegSecurityIDSource_70);
        InstrumentLeg_70.insert(LegSecurityIDSource_70.getString());
        FIX::LegSecuritySubType LegSecuritySubType_70("STRING_1394260412");
        noLegs_1_0_2_2.set(LegSecuritySubType_70);
        InstrumentLeg_70.insert(LegSecuritySubType_70.getString());
        FIX::LegSecurityType LegSecurityType_70("STRING_1462418841");
        noLegs_1_0_2_2.set(LegSecurityType_70);
        InstrumentLeg_70.insert(LegSecurityType_70.getString());
        FIX::LegSide LegSide_70('8');
        noLegs_1_0_2_2.set(LegSide_70);
        InstrumentLeg_70.insert(LegSide_70.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_70("STRING_2040971063");
        noLegs_1_0_2_2.set(LegStateOrProvinceOfIssue_70);
        InstrumentLeg_70.insert(LegStateOrProvinceOfIssue_70.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_70("USD");
        noLegs_1_0_2_2.set(LegStrikeCurrency_70);
        InstrumentLeg_70.insert(LegStrikeCurrency_70.getString());
        FIX::LegStrikePrice LegStrikePrice_70;
        LegStrikePrice_70.setString("15293537");
        noLegs_1_0_2_2.set(LegStrikePrice_70);
        InstrumentLeg_70.insert(LegStrikePrice_70.getString());
        FIX::LegSymbol LegSymbol_70("STRING_1533380799");
        noLegs_1_0_2_2.set(LegSymbol_70);
        InstrumentLeg_70.insert(LegSymbol_70.getString());
        FIX::LegSymbolSfx LegSymbolSfx_70("STRING_1364793952");
        noLegs_1_0_2_2.set(LegSymbolSfx_70);
        InstrumentLeg_70.insert(LegSymbolSfx_70.getString());
        FIX::LegTimeUnit LegTimeUnit_70("STRING_57190018");
        noLegs_1_0_2_2.set(LegTimeUnit_70);
        InstrumentLeg_70.insert(LegTimeUnit_70.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_70("STRING_1198826538");
        noLegs_1_0_2_2.set(LegUnitOfMeasure_70);
        InstrumentLeg_70.insert(LegUnitOfMeasure_70.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_70;
        LegUnitOfMeasureQty_70.setString("16899762");
        noLegs_1_0_2_2.set(LegUnitOfMeasureQty_70);
        InstrumentLeg_70.insert(LegUnitOfMeasureQty_70.getString());
        all_values.push_back(InstrumentLeg_70);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_145;
          FIX::LegSecurityAltID LegSecurityAltID_145("STRING_221607270");
          noLegSecurityAltID_1_0_2_3_0.set(LegSecurityAltID_145);
          LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltID_145.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_145("STRING_11874937");
          noLegSecurityAltID_1_0_2_3_0.set(LegSecurityAltIDSource_145);
          LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltIDSource_145.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_145);

          noLegs_1_0_2_2.addGroup(noLegSecurityAltID_1_0_2_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_41;
      FIX::AttachmentPoint AttachmentPoint_41;
      AttachmentPoint_41.setString("20.720000");
      noQuoteEntries_1_1_0.set(AttachmentPoint_41);
      Instrument_41.insert(AttachmentPoint_41.getString());
      FIX::CFICode CFICode_41("STRING_185209568");
      noQuoteEntries_1_1_0.set(CFICode_41);
      Instrument_41.insert(CFICode_41.getString());
      FIX::CPProgram CPProgram_41(2);
      noQuoteEntries_1_1_0.set(CPProgram_41);
      Instrument_41.insert(CPProgram_41.getString());
      FIX::CPRegType CPRegType_41("STRING_393563477");
      noQuoteEntries_1_1_0.set(CPRegType_41);
      Instrument_41.insert(CPRegType_41.getString());
      FIX::CapPrice CapPrice_41;
      CapPrice_41.setString("11639884");
      noQuoteEntries_1_1_0.set(CapPrice_41);
      Instrument_41.insert(CapPrice_41.getString());
      FIX::ContractMultiplier ContractMultiplier_41;
      ContractMultiplier_41.setString("2184048");
      noQuoteEntries_1_1_0.set(ContractMultiplier_41);
      Instrument_41.insert(ContractMultiplier_41.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_41(0);
      noQuoteEntries_1_1_0.set(ContractMultiplierUnit_41);
      Instrument_41.insert(ContractMultiplierUnit_41.getString());
      FIX::ContractSettlMonth ContractSettlMonth_41("MONTHYEAR_1629085002");
      noQuoteEntries_1_1_0.set(ContractSettlMonth_41);
      Instrument_41.insert(ContractSettlMonth_41.getString());
      FIX::CountryOfIssue CountryOfIssue_41("COUNTRY_356206639");
      noQuoteEntries_1_1_0.set(CountryOfIssue_41);
      Instrument_41.insert(CountryOfIssue_41.getString());
      FIX::CouponPaymentDate CouponPaymentDate_41("LOCALMKTDATE_456874951");
      noQuoteEntries_1_1_0.set(CouponPaymentDate_41);
      Instrument_41.insert(CouponPaymentDate_41.getString());
      FIX::CouponRate CouponRate_41;
      CouponRate_41.setString("18.940000");
      noQuoteEntries_1_1_0.set(CouponRate_41);
      Instrument_41.insert(CouponRate_41.getString());
      FIX::CreditRating CreditRating_41("STRING_1875962963");
      noQuoteEntries_1_1_0.set(CreditRating_41);
      Instrument_41.insert(CreditRating_41.getString());
      FIX::DatedDate DatedDate_41("LOCALMKTDATE_932493748");
      noQuoteEntries_1_1_0.set(DatedDate_41);
      Instrument_41.insert(DatedDate_41.getString());
      FIX::DetachmentPoint DetachmentPoint_41;
      DetachmentPoint_41.setString("63.910000");
      noQuoteEntries_1_1_0.set(DetachmentPoint_41);
      Instrument_41.insert(DetachmentPoint_41.getString());
      FIX::EncodedIssuer EncodedIssuer_41("DATA_630605889");
      noQuoteEntries_1_1_0.set(EncodedIssuer_41);
      Instrument_41.insert(EncodedIssuer_41.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_41(637473950);
      noQuoteEntries_1_1_0.set(EncodedIssuerLen_41);
      Instrument_41.insert(EncodedIssuerLen_41.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_41("DATA_1576336803");
      noQuoteEntries_1_1_0.set(EncodedSecurityDesc_41);
      Instrument_41.insert(EncodedSecurityDesc_41.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_41(2093024730);
      noQuoteEntries_1_1_0.set(EncodedSecurityDescLen_41);
      Instrument_41.insert(EncodedSecurityDescLen_41.getString());
      FIX::ExerciseStyle ExerciseStyle_41(2);
      noQuoteEntries_1_1_0.set(ExerciseStyle_41);
      Instrument_41.insert(ExerciseStyle_41.getString());
      FIX::Factor Factor_41;
      Factor_41.setString("14698242");
      noQuoteEntries_1_1_0.set(Factor_41);
      Instrument_41.insert(Factor_41.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_41(false);
      noQuoteEntries_1_1_0.set(FlexProductEligibilityIndicator_41);
      Instrument_41.insert(FlexProductEligibilityIndicator_41.getString());
      FIX::FlexibleIndicator FlexibleIndicator_41(false);
      noQuoteEntries_1_1_0.set(FlexibleIndicator_41);
      Instrument_41.insert(FlexibleIndicator_41.getString());
      FIX::FloorPrice FloorPrice_41;
      FloorPrice_41.setString("8516943");
      noQuoteEntries_1_1_0.set(FloorPrice_41);
      Instrument_41.insert(FloorPrice_41.getString());
      FIX::FlowScheduleType FlowScheduleType_41(0);
      noQuoteEntries_1_1_0.set(FlowScheduleType_41);
      Instrument_41.insert(FlowScheduleType_41.getString());
      FIX::InstrRegistry InstrRegistry_41("STRING_348025121");
      noQuoteEntries_1_1_0.set(InstrRegistry_41);
      Instrument_41.insert(InstrRegistry_41.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_41('9');
      noQuoteEntries_1_1_0.set(InstrmtAssignmentMethod_41);
      Instrument_41.insert(InstrmtAssignmentMethod_41.getString());
      FIX::InterestAccrualDate InterestAccrualDate_41("LOCALMKTDATE_49431191");
      noQuoteEntries_1_1_0.set(InterestAccrualDate_41);
      Instrument_41.insert(InterestAccrualDate_41.getString());
      FIX::IssueDate IssueDate_41("LOCALMKTDATE_2038001411");
      noQuoteEntries_1_1_0.set(IssueDate_41);
      Instrument_41.insert(IssueDate_41.getString());
      FIX::Issuer Issuer_41("STRING_762789674");
      noQuoteEntries_1_1_0.set(Issuer_41);
      Instrument_41.insert(Issuer_41.getString());
      FIX::ListMethod ListMethod_41(1);
      noQuoteEntries_1_1_0.set(ListMethod_41);
      Instrument_41.insert(ListMethod_41.getString());
      FIX::LocaleOfIssue LocaleOfIssue_41("STRING_2049876348");
      noQuoteEntries_1_1_0.set(LocaleOfIssue_41);
      Instrument_41.insert(LocaleOfIssue_41.getString());
      FIX::MaturityDate MaturityDate_41("LOCALMKTDATE_96868099");
      noQuoteEntries_1_1_0.set(MaturityDate_41);
      Instrument_41.insert(MaturityDate_41.getString());
      FIX::MaturityMonthYear MaturityMonthYear_41("MONTHYEAR_456248030");
      noQuoteEntries_1_1_0.set(MaturityMonthYear_41);
      Instrument_41.insert(MaturityMonthYear_41.getString());
      FIX::MaturityTime MaturityTime_41("TZTIMEONLY_288187547");
      noQuoteEntries_1_1_0.set(MaturityTime_41);
      Instrument_41.insert(MaturityTime_41.getString());
      FIX::MinPriceIncrement MinPriceIncrement_41;
      MinPriceIncrement_41.setString("4904315");
      noQuoteEntries_1_1_0.set(MinPriceIncrement_41);
      Instrument_41.insert(MinPriceIncrement_41.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_41;
      MinPriceIncrementAmount_41.setString("16202365");
      noQuoteEntries_1_1_0.set(MinPriceIncrementAmount_41);
      Instrument_41.insert(MinPriceIncrementAmount_41.getString());
      FIX::NTPositionLimit NTPositionLimit_41(506592405);
      noQuoteEntries_1_1_0.set(NTPositionLimit_41);
      Instrument_41.insert(NTPositionLimit_41.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_41;
      NotionalPercentageOutstanding_41.setString("95.820000");
      noQuoteEntries_1_1_0.set(NotionalPercentageOutstanding_41);
      Instrument_41.insert(NotionalPercentageOutstanding_41.getString());
      FIX::OptAttribute OptAttribute_41('1');
      noQuoteEntries_1_1_0.set(OptAttribute_41);
      Instrument_41.insert(OptAttribute_41.getString());
      FIX::OptPayoutAmount OptPayoutAmount_41;
      OptPayoutAmount_41.setString("8627990");
      noQuoteEntries_1_1_0.set(OptPayoutAmount_41);
      Instrument_41.insert(OptPayoutAmount_41.getString());
      FIX::OptPayoutType OptPayoutType_41(3);
      noQuoteEntries_1_1_0.set(OptPayoutType_41);
      Instrument_41.insert(OptPayoutType_41.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_41;
      OriginalNotionalPercentageOutstanding_41.setString("97.570000");
      noQuoteEntries_1_1_0.set(OriginalNotionalPercentageOutstanding_41);
      Instrument_41.insert(OriginalNotionalPercentageOutstanding_41.getString());
      FIX::Pool Pool_41("STRING_591278359");
      noQuoteEntries_1_1_0.set(Pool_41);
      Instrument_41.insert(Pool_41.getString());
      FIX::PositionLimit PositionLimit_41(927454633);
      noQuoteEntries_1_1_0.set(PositionLimit_41);
      Instrument_41.insert(PositionLimit_41.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_41("STRING_STD");
      noQuoteEntries_1_1_0.set(PriceQuoteMethod_41);
      Instrument_41.insert(PriceQuoteMethod_41.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_41("STRING_1221884248");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasure_41);
      Instrument_41.insert(PriceUnitOfMeasure_41.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_41;
      PriceUnitOfMeasureQty_41.setString("15649285");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasureQty_41);
      Instrument_41.insert(PriceUnitOfMeasureQty_41.getString());
      FIX::Product Product_43(8);
      noQuoteEntries_1_1_0.set(Product_43);
      Instrument_41.insert(Product_43.getString());
      FIX::ProductComplex ProductComplex_41("STRING_1167425330");
      noQuoteEntries_1_1_0.set(ProductComplex_41);
      Instrument_41.insert(ProductComplex_41.getString());
      FIX::PutOrCall PutOrCall_41(0);
      noQuoteEntries_1_1_0.set(PutOrCall_41);
      Instrument_41.insert(PutOrCall_41.getString());
      FIX::RedemptionDate RedemptionDate_41("LOCALMKTDATE_376689873");
      noQuoteEntries_1_1_0.set(RedemptionDate_41);
      Instrument_41.insert(RedemptionDate_41.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_41("STRING_632132831");
      noQuoteEntries_1_1_0.set(RepoCollateralSecurityType_41);
      Instrument_41.insert(RepoCollateralSecurityType_41.getString());
      FIX::RepurchaseRate RepurchaseRate_41;
      RepurchaseRate_41.setString("45.530000");
      noQuoteEntries_1_1_0.set(RepurchaseRate_41);
      Instrument_41.insert(RepurchaseRate_41.getString());
      FIX::RepurchaseTerm RepurchaseTerm_41(1228384188);
      noQuoteEntries_1_1_0.set(RepurchaseTerm_41);
      Instrument_41.insert(RepurchaseTerm_41.getString());
      FIX::RestructuringType RestructuringType_41("STRING_FR");
      noQuoteEntries_1_1_0.set(RestructuringType_41);
      Instrument_41.insert(RestructuringType_41.getString());
      FIX::SecurityDesc SecurityDesc_41("STRING_267526026");
      noQuoteEntries_1_1_0.set(SecurityDesc_41);
      Instrument_41.insert(SecurityDesc_41.getString());
      FIX::SecurityExchange SecurityExchange_41("EXCHANGE_2137268521");
      noQuoteEntries_1_1_0.set(SecurityExchange_41);
      Instrument_41.insert(SecurityExchange_41.getString());
      FIX::SecurityGroup SecurityGroup_41("STRING_1679652323");
      noQuoteEntries_1_1_0.set(SecurityGroup_41);
      Instrument_41.insert(SecurityGroup_41.getString());
      FIX::SecurityID SecurityID_41("STRING_158043789");
      noQuoteEntries_1_1_0.set(SecurityID_41);
      Instrument_41.insert(SecurityID_41.getString());
      FIX::SecurityIDSource SecurityIDSource_41("STRING_1");
      noQuoteEntries_1_1_0.set(SecurityIDSource_41);
      Instrument_41.insert(SecurityIDSource_41.getString());
      FIX::SecurityStatus SecurityStatus_41("STRING_1");
      noQuoteEntries_1_1_0.set(SecurityStatus_41);
      Instrument_41.insert(SecurityStatus_41.getString());
      FIX::SecuritySubType SecuritySubType_42("STRING_60436490");
      noQuoteEntries_1_1_0.set(SecuritySubType_42);
      Instrument_41.insert(SecuritySubType_42.getString());
      FIX::SecurityType SecurityType_43("STRING_BDN");
      noQuoteEntries_1_1_0.set(SecurityType_43);
      Instrument_41.insert(SecurityType_43.getString());
      FIX::Seniority Seniority_41("STRING_SR");
      noQuoteEntries_1_1_0.set(Seniority_41);
      Instrument_41.insert(Seniority_41.getString());
      FIX::SettlMethod SettlMethod_41('P');
      noQuoteEntries_1_1_0.set(SettlMethod_41);
      Instrument_41.insert(SettlMethod_41.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_41("STRING_1339874223");
      noQuoteEntries_1_1_0.set(SettleOnOpenFlag_41);
      Instrument_41.insert(SettleOnOpenFlag_41.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_41("STRING_1879691674");
      noQuoteEntries_1_1_0.set(StateOrProvinceOfIssue_41);
      Instrument_41.insert(StateOrProvinceOfIssue_41.getString());
      FIX::StrikeCurrency StrikeCurrency_41("CAN");
      noQuoteEntries_1_1_0.set(StrikeCurrency_41);
      Instrument_41.insert(StrikeCurrency_41.getString());
      FIX::StrikeMultiplier StrikeMultiplier_41;
      StrikeMultiplier_41.setString("8340458");
      noQuoteEntries_1_1_0.set(StrikeMultiplier_41);
      Instrument_41.insert(StrikeMultiplier_41.getString());
      FIX::StrikePrice StrikePrice_41;
      StrikePrice_41.setString("17180154");
      noQuoteEntries_1_1_0.set(StrikePrice_41);
      Instrument_41.insert(StrikePrice_41.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_41(3);
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryMethod_41);
      Instrument_41.insert(StrikePriceBoundaryMethod_41.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_41;
      StrikePriceBoundaryPrecision_41.setString("19.980000");
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryPrecision_41);
      Instrument_41.insert(StrikePriceBoundaryPrecision_41.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_41(3);
      noQuoteEntries_1_1_0.set(StrikePriceDeterminationMethod_41);
      Instrument_41.insert(StrikePriceDeterminationMethod_41.getString());
      FIX::StrikeValue StrikeValue_41;
      StrikeValue_41.setString("18003756");
      noQuoteEntries_1_1_0.set(StrikeValue_41);
      Instrument_41.insert(StrikeValue_41.getString());
      FIX::Symbol Symbol_41("STRING_1755478146");
      noQuoteEntries_1_1_0.set(Symbol_41);
      Instrument_41.insert(Symbol_41.getString());
      FIX::SymbolSfx SymbolSfx_41("STRING_CD");
      noQuoteEntries_1_1_0.set(SymbolSfx_41);
      Instrument_41.insert(SymbolSfx_41.getString());
      FIX::TimeUnit TimeUnit_41("STRING_H");
      noQuoteEntries_1_1_0.set(TimeUnit_41);
      Instrument_41.insert(TimeUnit_41.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_41(2);
      noQuoteEntries_1_1_0.set(UnderlyingPriceDeterminationMethod_41);
      Instrument_41.insert(UnderlyingPriceDeterminationMethod_41.getString());
      FIX::UnitOfMeasure UnitOfMeasure_41("STRING_Bcf");
      noQuoteEntries_1_1_0.set(UnitOfMeasure_41);
      Instrument_41.insert(UnitOfMeasure_41.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_41;
      UnitOfMeasureQty_41.setString("66066");
      noQuoteEntries_1_1_0.set(UnitOfMeasureQty_41);
      Instrument_41.insert(UnitOfMeasureQty_41.getString());
      FIX::ValuationMethod ValuationMethod_41("STRING_CDSD");
      noQuoteEntries_1_1_0.set(ValuationMethod_41);
      Instrument_41.insert(ValuationMethod_41.getString());
      all_values.push_back(Instrument_41);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_83;
        FIX::ComplexEventCondition ComplexEventCondition_83(2);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventCondition_83.getString());
        FIX::ComplexEventPrice ComplexEventPrice_83;
        ComplexEventPrice_83.setString("1199342");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPrice_83.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_83(5);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryMethod_83.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_83;
        ComplexEventPriceBoundaryPrecision_83.setString("36.310000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryPrecision_83.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_83(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceTimeType_83.getString());
        FIX::ComplexEventType ComplexEventType_83(8);
        noComplexEvents_1_0_2_0.set(ComplexEventType_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventType_83.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_83;
        ComplexOptPayoutAmount_83.setString("3516774");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexOptPayoutAmount_83.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_83);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_171;
          FIX::ComplexEventEndDate ComplexEventEndDate_171(FIX::UTCTIMESTAMP(23, 3, 2, 12, 12, 2013));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_171);
          ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventEndDate_171.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_171(FIX::UTCTIMESTAMP(16, 18, 29, 23, 9, 2001));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_171);
          ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventStartDate_171.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_171);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_355;
            FIX::ComplexEventEndTime ComplexEventEndTime_355(FIX::UTCTIMEONLY(18, 29, 15));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_355);
            ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventEndTime_355.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_355(FIX::UTCTIMEONLY(21, 9, 55));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_355);
            ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventStartTime_355.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_355);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
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
        multiset<string> EvntGrp_NoEvents_75;
        FIX::EventDate EventDate_75("LOCALMKTDATE_91395876");
        noEvents_1_0_2_0.set(EventDate_75);
        EvntGrp_NoEvents_75.insert(EventDate_75.getString());
        FIX::EventPx EventPx_75;
        EventPx_75.setString("3949351");
        noEvents_1_0_2_0.set(EventPx_75);
        EvntGrp_NoEvents_75.insert(EventPx_75.getString());
        FIX::EventText EventText_75("STRING_1504584985");
        noEvents_1_0_2_0.set(EventText_75);
        EvntGrp_NoEvents_75.insert(EventText_75.getString());
        FIX::EventTime EventTime_75(FIX::UTCTIMESTAMP(23, 46, 41, 7, 2, 2013));
        noEvents_1_0_2_0.set(EventTime_75);
        EvntGrp_NoEvents_75.insert(EventTime_75.getString());
        FIX::EventType EventType_75(11);
        noEvents_1_0_2_0.set(EventType_75);
        EvntGrp_NoEvents_75.insert(EventType_75.getString());
        all_values.push_back(EvntGrp_NoEvents_75);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_76;
        FIX::EventDate EventDate_76("LOCALMKTDATE_881630618");
        noEvents_1_0_2_1.set(EventDate_76);
        EvntGrp_NoEvents_76.insert(EventDate_76.getString());
        FIX::EventPx EventPx_76;
        EventPx_76.setString("15317880");
        noEvents_1_0_2_1.set(EventPx_76);
        EvntGrp_NoEvents_76.insert(EventPx_76.getString());
        FIX::EventText EventText_76("STRING_258375359");
        noEvents_1_0_2_1.set(EventText_76);
        EvntGrp_NoEvents_76.insert(EventText_76.getString());
        FIX::EventTime EventTime_76(FIX::UTCTIMESTAMP(8, 17, 10, 23, 2, 2004));
        noEvents_1_0_2_1.set(EventTime_76);
        EvntGrp_NoEvents_76.insert(EventTime_76.getString());
        FIX::EventType EventType_76(15);
        noEvents_1_0_2_1.set(EventType_76);
        EvntGrp_NoEvents_76.insert(EventType_76.getString());
        all_values.push_back(EvntGrp_NoEvents_76);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_77;
        FIX::EventDate EventDate_77("LOCALMKTDATE_17624219");
        noEvents_1_0_2_2.set(EventDate_77);
        EvntGrp_NoEvents_77.insert(EventDate_77.getString());
        FIX::EventPx EventPx_77;
        EventPx_77.setString("13219075");
        noEvents_1_0_2_2.set(EventPx_77);
        EvntGrp_NoEvents_77.insert(EventPx_77.getString());
        FIX::EventText EventText_77("STRING_1065085715");
        noEvents_1_0_2_2.set(EventText_77);
        EvntGrp_NoEvents_77.insert(EventText_77.getString());
        FIX::EventTime EventTime_77(FIX::UTCTIMESTAMP(15, 36, 15, 6, 3, 2010));
        noEvents_1_0_2_2.set(EventTime_77);
        EvntGrp_NoEvents_77.insert(EventTime_77.getString());
        FIX::EventType EventType_77(3);
        noEvents_1_0_2_2.set(EventType_77);
        EvntGrp_NoEvents_77.insert(EventType_77.getString());
        all_values.push_back(EvntGrp_NoEvents_77);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_75;
        FIX::InstrumentPartyID InstrumentPartyID_75("STRING_1361508357");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyID_75.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_75('8');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyIDSource_75.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_75(679277266);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyRole_75.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_75);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165;
          FIX::InstrumentPartySubID InstrumentPartySubID_165("STRING_1179033801");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_165);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubID_165.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_165(800169936);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_165);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubIDType_165.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_76;
        FIX::InstrumentPartyID InstrumentPartyID_76("STRING_905094547");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyID_76.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_76('1');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyIDSource_76.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_76(1681800554);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyRole_76.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_76);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166;
          FIX::InstrumentPartySubID InstrumentPartySubID_166("STRING_1850239070");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_166);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubID_166.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_166(2031901915);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_166);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubIDType_166.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167;
          FIX::InstrumentPartySubID InstrumentPartySubID_167("STRING_1455790460");
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubID_167);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubID_167.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_167(640722119);
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubIDType_167);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubIDType_167.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168;
          FIX::InstrumentPartySubID InstrumentPartySubID_168("STRING_1421005857");
          noInstrumentPartySubIDs_1_0_1_3_2.set(InstrumentPartySubID_168);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubID_168.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_168(982222687);
          noInstrumentPartySubIDs_1_0_1_3_2.set(InstrumentPartySubIDType_168);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubIDType_168.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_77;
        FIX::InstrumentPartyID InstrumentPartyID_77("STRING_240778504");
        noInstrumentParties_1_0_2_2.set(InstrumentPartyID_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyID_77.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_77('1');
        noInstrumentParties_1_0_2_2.set(InstrumentPartyIDSource_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyIDSource_77.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_77(669071353);
        noInstrumentParties_1_0_2_2.set(InstrumentPartyRole_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyRole_77.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_77);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169;
          FIX::InstrumentPartySubID InstrumentPartySubID_169("STRING_1332830175");
          noInstrumentPartySubIDs_1_0_2_3_0.set(InstrumentPartySubID_169);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubID_169.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_169(1734157069);
          noInstrumentPartySubIDs_1_0_2_3_0.set(InstrumentPartySubIDType_169);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubIDType_169.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_86;
        FIX::SecurityAltID SecurityAltID_86("STRING_1495397478");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_86);
        SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltID_86.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_86("STRING_2036602885");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_86);
        SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltIDSource_86.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_86);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_87;
        FIX::SecurityAltID SecurityAltID_87("STRING_277452445");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_87);
        SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltID_87.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_87("STRING_1534393449");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_87);
        SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltIDSource_87.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_87);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_88;
        FIX::SecurityAltID SecurityAltID_88("STRING_1502516408");
        noSecurityAltID_1_0_2_2.set(SecurityAltID_88);
        SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltID_88.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_88("STRING_1437845837");
        noSecurityAltID_1_0_2_2.set(SecurityAltIDSource_88);
        SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltIDSource_88.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_88);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_82;
      FIX::SecurityXML SecurityXML_83("XMLDATA_1968324531");
      noQuoteEntries_1_1_0.set(SecurityXML_83);
      FIX::SecurityXMLLen SecurityXMLLen_41(325531268);
      noQuoteEntries_1_1_0.set(SecurityXMLLen_41);
      FIX::SecurityXMLSchema SecurityXMLSchema_41("STRING_651870546");
      noQuoteEntries_1_1_0.set(SecurityXMLSchema_41);
      SecurityXML_82.insert(SecurityXMLSchema_41.getString());
      all_values.push_back(SecurityXML_82);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_57;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_57("DATA_700382197");
    noQuoteSets_0_1.set(EncodedUnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuer_57.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_57(1004808534);
    noQuoteSets_0_1.set(EncodedUnderlyingIssuerLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuerLen_57.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_57("DATA_929303856");
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDesc_57.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_57(1879415999);
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDescLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDescLen_57.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_57;
    UnderlyingAdjustedQuantity_57.setString("18049784");
    noQuoteSets_0_1.set(UnderlyingAdjustedQuantity_57);
    UnderlyingInstrument_57.insert(UnderlyingAdjustedQuantity_57.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_57;
    UnderlyingAllocationPercent_57.setString("84.040000");
    noQuoteSets_0_1.set(UnderlyingAllocationPercent_57);
    UnderlyingInstrument_57.insert(UnderlyingAllocationPercent_57.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_57;
    UnderlyingAttachmentPoint_57.setString("60.620000");
    noQuoteSets_0_1.set(UnderlyingAttachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingAttachmentPoint_57.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_57("STRING_1339295376");
    noQuoteSets_0_1.set(UnderlyingCFICode_57);
    UnderlyingInstrument_57.insert(UnderlyingCFICode_57.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_57("STRING_2123797399");
    noQuoteSets_0_1.set(UnderlyingCPProgram_57);
    UnderlyingInstrument_57.insert(UnderlyingCPProgram_57.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_57("STRING_1026551485");
    noQuoteSets_0_1.set(UnderlyingCPRegType_57);
    UnderlyingInstrument_57.insert(UnderlyingCPRegType_57.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_57;
    UnderlyingCapValue_57.setString("12237136");
    noQuoteSets_0_1.set(UnderlyingCapValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCapValue_57.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_57;
    UnderlyingCashAmount_57.setString("14321042");
    noQuoteSets_0_1.set(UnderlyingCashAmount_57);
    UnderlyingInstrument_57.insert(UnderlyingCashAmount_57.getString());
    FIX::UnderlyingCashType UnderlyingCashType_57("STRING_FIXED");
    noQuoteSets_0_1.set(UnderlyingCashType_57);
    UnderlyingInstrument_57.insert(UnderlyingCashType_57.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_57;
    UnderlyingContractMultiplier_57.setString("4972358");
    noQuoteSets_0_1.set(UnderlyingContractMultiplier_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplier_57.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_57(266843251);
    noQuoteSets_0_1.set(UnderlyingContractMultiplierUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplierUnit_57.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_57("COUNTRY_1908052109");
    noQuoteSets_0_1.set(UnderlyingCountryOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingCountryOfIssue_57.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_57("LOCALMKTDATE_508158432");
    noQuoteSets_0_1.set(UnderlyingCouponPaymentDate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponPaymentDate_57.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_57;
    UnderlyingCouponRate_57.setString("46.040000");
    noQuoteSets_0_1.set(UnderlyingCouponRate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponRate_57.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_57("STRING_18971184");
    noQuoteSets_0_1.set(UnderlyingCreditRating_57);
    UnderlyingInstrument_57.insert(UnderlyingCreditRating_57.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_57("EUR");
    noQuoteSets_0_1.set(UnderlyingCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrency_57.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_57;
    UnderlyingCurrentValue_57.setString("13749097");
    noQuoteSets_0_1.set(UnderlyingCurrentValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrentValue_57.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_57;
    UnderlyingDetachmentPoint_57.setString("24.380000");
    noQuoteSets_0_1.set(UnderlyingDetachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingDetachmentPoint_57.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_57;
    UnderlyingDirtyPrice_57.setString("4117072");
    noQuoteSets_0_1.set(UnderlyingDirtyPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingDirtyPrice_57.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_57;
    UnderlyingEndPrice_57.setString("16523622");
    noQuoteSets_0_1.set(UnderlyingEndPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingEndPrice_57.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_57;
    UnderlyingEndValue_57.setString("5758122");
    noQuoteSets_0_1.set(UnderlyingEndValue_57);
    UnderlyingInstrument_57.insert(UnderlyingEndValue_57.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_57(1914223671);
    noQuoteSets_0_1.set(UnderlyingExerciseStyle_57);
    UnderlyingInstrument_57.insert(UnderlyingExerciseStyle_57.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_57;
    UnderlyingFXRate_57.setString("9427243");
    noQuoteSets_0_1.set(UnderlyingFXRate_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRate_57.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_57('M');
    noQuoteSets_0_1.set(UnderlyingFXRateCalc_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRateCalc_57.getString());
    FIX::UnderlyingFactor UnderlyingFactor_57;
    UnderlyingFactor_57.setString("922712");
    noQuoteSets_0_1.set(UnderlyingFactor_57);
    UnderlyingInstrument_57.insert(UnderlyingFactor_57.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_57(1594594942);
    noQuoteSets_0_1.set(UnderlyingFlowScheduleType_57);
    UnderlyingInstrument_57.insert(UnderlyingFlowScheduleType_57.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_57("STRING_1097035320");
    noQuoteSets_0_1.set(UnderlyingInstrRegistry_57);
    UnderlyingInstrument_57.insert(UnderlyingInstrRegistry_57.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_57("LOCALMKTDATE_1097079825");
    noQuoteSets_0_1.set(UnderlyingIssueDate_57);
    UnderlyingInstrument_57.insert(UnderlyingIssueDate_57.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_57("STRING_376415150");
    noQuoteSets_0_1.set(UnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(UnderlyingIssuer_57.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_57("STRING_828967671");
    noQuoteSets_0_1.set(UnderlyingLocaleOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingLocaleOfIssue_57.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_57("LOCALMKTDATE_754574648");
    noQuoteSets_0_1.set(UnderlyingMaturityDate_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityDate_57.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_57("MONTHYEAR_63329906");
    noQuoteSets_0_1.set(UnderlyingMaturityMonthYear_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityMonthYear_57.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_57("TZTIMEONLY_5280086");
    noQuoteSets_0_1.set(UnderlyingMaturityTime_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityTime_57.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_57;
    UnderlyingNotionalPercentageOutstanding_57.setString("0.240000");
    noQuoteSets_0_1.set(UnderlyingNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_57('3');
    noQuoteSets_0_1.set(UnderlyingOptAttribute_57);
    UnderlyingInstrument_57.insert(UnderlyingOptAttribute_57.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_57;
    UnderlyingOriginalNotionalPercentageOutstanding_57.setString("15.710000");
    noQuoteSets_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingOriginalNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_57("STRING_1170100020");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasure_57.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_57;
    UnderlyingPriceUnitOfMeasureQty_57.setString("14717478");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasureQty_57.getString());
    FIX::UnderlyingProduct UnderlyingProduct_57(551621527);
    noQuoteSets_0_1.set(UnderlyingProduct_57);
    UnderlyingInstrument_57.insert(UnderlyingProduct_57.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_57(1667335873);
    noQuoteSets_0_1.set(UnderlyingPutOrCall_57);
    UnderlyingInstrument_57.insert(UnderlyingPutOrCall_57.getString());
    FIX::UnderlyingPx UnderlyingPx_57;
    UnderlyingPx_57.setString("17385911");
    noQuoteSets_0_1.set(UnderlyingPx_57);
    UnderlyingInstrument_57.insert(UnderlyingPx_57.getString());
    FIX::UnderlyingQty UnderlyingQty_57;
    UnderlyingQty_57.setString("3121899");
    noQuoteSets_0_1.set(UnderlyingQty_57);
    UnderlyingInstrument_57.insert(UnderlyingQty_57.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_57("LOCALMKTDATE_28010657");
    noQuoteSets_0_1.set(UnderlyingRedemptionDate_57);
    UnderlyingInstrument_57.insert(UnderlyingRedemptionDate_57.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_57("STRING_527022077");
    noQuoteSets_0_1.set(UnderlyingRepoCollateralSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingRepoCollateralSecurityType_57.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_57;
    UnderlyingRepurchaseRate_57.setString("11.730000");
    noQuoteSets_0_1.set(UnderlyingRepurchaseRate_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseRate_57.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_57(1868999265);
    noQuoteSets_0_1.set(UnderlyingRepurchaseTerm_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseTerm_57.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_57("STRING_1049610102");
    noQuoteSets_0_1.set(UnderlyingRestructuringType_57);
    UnderlyingInstrument_57.insert(UnderlyingRestructuringType_57.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_57("STRING_1706070935");
    noQuoteSets_0_1.set(UnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityDesc_57.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_57("EXCHANGE_910418056");
    noQuoteSets_0_1.set(UnderlyingSecurityExchange_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityExchange_57.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_57("STRING_1461317365");
    noQuoteSets_0_1.set(UnderlyingSecurityID_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityID_57.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_57("STRING_1210949494");
    noQuoteSets_0_1.set(UnderlyingSecurityIDSource_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityIDSource_57.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_57("STRING_1486230295");
    noQuoteSets_0_1.set(UnderlyingSecuritySubType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecuritySubType_57.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_57("STRING_1228057388");
    noQuoteSets_0_1.set(UnderlyingSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityType_57.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_57("STRING_6190242");
    noQuoteSets_0_1.set(UnderlyingSeniority_57);
    UnderlyingInstrument_57.insert(UnderlyingSeniority_57.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_57("STRING_1882883418");
    noQuoteSets_0_1.set(UnderlyingSettlMethod_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlMethod_57.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_57(5);
    noQuoteSets_0_1.set(UnderlyingSettlementType_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlementType_57.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_57;
    UnderlyingStartValue_57.setString("16007851");
    noQuoteSets_0_1.set(UnderlyingStartValue_57);
    UnderlyingInstrument_57.insert(UnderlyingStartValue_57.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_57("STRING_832435091");
    noQuoteSets_0_1.set(UnderlyingStateOrProvinceOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingStateOrProvinceOfIssue_57.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_57("USD");
    noQuoteSets_0_1.set(UnderlyingStrikeCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikeCurrency_57.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_57;
    UnderlyingStrikePrice_57.setString("16614027");
    noQuoteSets_0_1.set(UnderlyingStrikePrice_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikePrice_57.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_57("STRING_1024499505");
    noQuoteSets_0_1.set(UnderlyingSymbol_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbol_57.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_57("STRING_2040530241");
    noQuoteSets_0_1.set(UnderlyingSymbolSfx_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbolSfx_57.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_57("STRING_1666682848");
    noQuoteSets_0_1.set(UnderlyingTimeUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingTimeUnit_57.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_57("STRING_970885881");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasure_57.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_57;
    UnderlyingUnitOfMeasureQty_57.setString("20801738");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasureQty_57.getString());
    all_values.push_back(UnderlyingInstrument_57);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_116;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_116("STRING_2140985901");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltID_116.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_116("STRING_1404438120");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltIDSource_116.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_117;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_117("STRING_1102652299");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_117);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltID_117.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_117("STRING_1660838126");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_117);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltIDSource_117.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_118;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_118("STRING_995545593");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_118);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltID_118.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_118("STRING_1414842287");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_118);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltIDSource_118.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_108;
      FIX::UnderlyingStipType UnderlyingStipType_108("STRING_1522567670");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_108);
      UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipType_108.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_108("STRING_1746003460");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_108);
      UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipValue_108.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_108);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_109;
      FIX::UnderlyingStipType UnderlyingStipType_109("STRING_1410364401");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_109);
      UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipType_109.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_109("STRING_424694124");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_109);
      UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipValue_109.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_109);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_110;
      FIX::UnderlyingStipType UnderlyingStipType_110("STRING_1304590747");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_110);
      UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipType_110.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_110("STRING_173298809");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_110);
      UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipValue_110.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_110);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_123("STRING_368056593");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyID_123.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_123('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyIDSource_123.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_123(966585230);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyRole_123.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_251("STRING_1394928875");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_251);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubID_251.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_251(139430262);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_251);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubIDType_251.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_124("STRING_1975032019");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyID_124.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_124('7');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyIDSource_124.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_124(409355119);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyRole_124.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_252("STRING_1741283081");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_252);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubID_252.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_252(1433854624);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_252);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubIDType_252.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_125("STRING_1697795299");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyID_125.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_125('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyIDSource_125.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_125(257256857);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyRole_125.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_253("STRING_1811513053");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_253);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubID_253.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_253(250759111);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_253);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubIDType_253.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_254("STRING_887440022");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_254);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubID_254.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_254(766681704);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_254);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubIDType_254.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noQuoteSets_0_1);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_2;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_2;
    FIX::LastFragment LastFragment_11(false);
    noQuoteSets_0_2.set(LastFragment_11);
    QuotSetAckGrp_NoQuoteSets_2.insert(LastFragment_11.getString());
    FIX::QuoteSetID QuoteSetID_3("STRING_1882985615");
    noQuoteSets_0_2.set(QuoteSetID_3);
    QuotSetAckGrp_NoQuoteSets_2.insert(QuoteSetID_3.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_3(FIX::UTCTIMESTAMP(21, 17, 44, 27, 7, 2001));
    noQuoteSets_0_2.set(QuoteSetValidUntilTime_3);
    QuotSetAckGrp_NoQuoteSets_2.insert(QuoteSetValidUntilTime_3.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_2(889141936);
    noQuoteSets_0_2.set(TotNoAccQuotes_2);
    QuotSetAckGrp_NoQuoteSets_2.insert(TotNoAccQuotes_2.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_2(1421291604);
    noQuoteSets_0_2.set(TotNoCxldQuotes_2);
    QuotSetAckGrp_NoQuoteSets_2.insert(TotNoCxldQuotes_2.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_3(1305207497);
    noQuoteSets_0_2.set(TotNoQuoteEntries_3);
    QuotSetAckGrp_NoQuoteSets_2.insert(TotNoQuoteEntries_3.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_2(401187393);
    noQuoteSets_0_2.set(TotNoRejQuotes_2);
    QuotSetAckGrp_NoQuoteSets_2.insert(TotNoRejQuotes_2.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_2);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_6;
      BidForwardPoints_6.setString("16794543");
      noQuoteEntries_2_1_0.set(BidForwardPoints_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidForwardPoints_6.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_6;
      BidForwardPoints2_6.setString("17961162");
      noQuoteEntries_2_1_0.set(BidForwardPoints2_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidForwardPoints2_6.getString());
      FIX::BidPx BidPx_6;
      BidPx_6.setString("3798234");
      noQuoteEntries_2_1_0.set(BidPx_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidPx_6.getString());
      FIX::BidSize BidSize_6;
      BidSize_6.setString("15070027");
      noQuoteEntries_2_1_0.set(BidSize_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidSize_6.getString());
      FIX::BidSpotRate BidSpotRate_6;
      BidSpotRate_6.setString("18759965");
      noQuoteEntries_2_1_0.set(BidSpotRate_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidSpotRate_6.getString());
      FIX::BidYield BidYield_6;
      BidYield_6.setString("85.670000");
      noQuoteEntries_2_1_0.set(BidYield_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidYield_6.getString());
      FIX::BookingType BookingType_12(0);
      noQuoteEntries_2_1_0.set(BookingType_12);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BookingType_12.getString());
      FIX::Currency Currency_39("CHF");
      noQuoteEntries_2_1_0.set(Currency_39);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(Currency_39.getString());
      FIX::MidPx MidPx_6;
      MidPx_6.setString("7145794");
      noQuoteEntries_2_1_0.set(MidPx_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(MidPx_6.getString());
      FIX::MidYield MidYield_6;
      MidYield_6.setString("46.540000");
      noQuoteEntries_2_1_0.set(MidYield_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(MidYield_6.getString());
      FIX::OfferForwardPoints OfferForwardPoints_6;
      OfferForwardPoints_6.setString("3328064");
      noQuoteEntries_2_1_0.set(OfferForwardPoints_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferForwardPoints_6.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_6;
      OfferForwardPoints2_6.setString("1975813");
      noQuoteEntries_2_1_0.set(OfferForwardPoints2_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferForwardPoints2_6.getString());
      FIX::OfferPx OfferPx_6;
      OfferPx_6.setString("2468240");
      noQuoteEntries_2_1_0.set(OfferPx_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferPx_6.getString());
      FIX::OfferSize OfferSize_6;
      OfferSize_6.setString("5835655");
      noQuoteEntries_2_1_0.set(OfferSize_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferSize_6.getString());
      FIX::OfferSpotRate OfferSpotRate_6;
      OfferSpotRate_6.setString("10850213");
      noQuoteEntries_2_1_0.set(OfferSpotRate_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferSpotRate_6.getString());
      FIX::OfferYield OfferYield_6;
      OfferYield_6.setString("57.630000");
      noQuoteEntries_2_1_0.set(OfferYield_6);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferYield_6.getString());
      FIX::OrdType OrdType_39('6');
      noQuoteEntries_2_1_0.set(OrdType_39);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrdType_39.getString());
      FIX::OrderCapacity OrderCapacity_15('G');
      noQuoteEntries_2_1_0.set(OrderCapacity_15);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderCapacity_15.getString());
      FIX::OrderQty2 OrderQty2_7;
      OrderQty2_7.setString("10475461");
      noQuoteEntries_2_1_0.set(OrderQty2_7);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderQty2_7.getString());
      FIX::OrderRestrictions OrderRestrictions_10("MULTIPLECHARVALUE_1");
      noQuoteEntries_2_1_0.set(OrderRestrictions_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderRestrictions_10.getString());
      FIX::QuoteEntryID QuoteEntryID_11("STRING_2078592942");
      noQuoteEntries_2_1_0.set(QuoteEntryID_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryID_11.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_3(680106262);
      noQuoteEntries_2_1_0.set(QuoteEntryRejectReason_3);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryRejectReason_3.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_3(0);
      noQuoteEntries_2_1_0.set(QuoteEntryStatus_3);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryStatus_3.getString());
      FIX::SettlDate SettlDate_31("LOCALMKTDATE_1613873056");
      noQuoteEntries_2_1_0.set(SettlDate_31);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(SettlDate_31.getString());
      FIX::SettlDate2 SettlDate2_7("LOCALMKTDATE_1617257166");
      noQuoteEntries_2_1_0.set(SettlDate2_7);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(SettlDate2_7.getString());
      FIX::TradingSessionID TradingSessionID_43("STRING_5");
      noQuoteEntries_2_1_0.set(TradingSessionID_43);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TradingSessionID_43.getString());
      FIX::TradingSessionSubID TradingSessionSubID_43("STRING_2");
      noQuoteEntries_2_1_0.set(TradingSessionSubID_43);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TradingSessionSubID_43.getString());
      FIX::TransactTime TransactTime_33(FIX::UTCTIMESTAMP(20, 39, 39, 25, 4, 2011));
      noQuoteEntries_2_1_0.set(TransactTime_33);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TransactTime_33.getString());
      FIX::ValidUntilTime ValidUntilTime_7(FIX::UTCTIMESTAMP(15, 57, 37, 18, 3, 2009));
      noQuoteEntries_2_1_0.set(ValidUntilTime_7);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(ValidUntilTime_7.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_3);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_71;
        FIX::EncodedLegIssuer EncodedLegIssuer_71("DATA_1742899245");
        noLegs_2_0_2_0.set(EncodedLegIssuer_71);
        InstrumentLeg_71.insert(EncodedLegIssuer_71.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_71(1188406930);
        noLegs_2_0_2_0.set(EncodedLegIssuerLen_71);
        InstrumentLeg_71.insert(EncodedLegIssuerLen_71.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_71("DATA_1141514023");
        noLegs_2_0_2_0.set(EncodedLegSecurityDesc_71);
        InstrumentLeg_71.insert(EncodedLegSecurityDesc_71.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_71(680436935);
        noLegs_2_0_2_0.set(EncodedLegSecurityDescLen_71);
        InstrumentLeg_71.insert(EncodedLegSecurityDescLen_71.getString());
        FIX::LegCFICode LegCFICode_71("STRING_54429045");
        noLegs_2_0_2_0.set(LegCFICode_71);
        InstrumentLeg_71.insert(LegCFICode_71.getString());
        FIX::LegContractMultiplier LegContractMultiplier_71;
        LegContractMultiplier_71.setString("14891931");
        noLegs_2_0_2_0.set(LegContractMultiplier_71);
        InstrumentLeg_71.insert(LegContractMultiplier_71.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_71(1500960240);
        noLegs_2_0_2_0.set(LegContractMultiplierUnit_71);
        InstrumentLeg_71.insert(LegContractMultiplierUnit_71.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_71("MONTHYEAR_1101975151");
        noLegs_2_0_2_0.set(LegContractSettlMonth_71);
        InstrumentLeg_71.insert(LegContractSettlMonth_71.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_71("COUNTRY_1142350952");
        noLegs_2_0_2_0.set(LegCountryOfIssue_71);
        InstrumentLeg_71.insert(LegCountryOfIssue_71.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_71("LOCALMKTDATE_1432069534");
        noLegs_2_0_2_0.set(LegCouponPaymentDate_71);
        InstrumentLeg_71.insert(LegCouponPaymentDate_71.getString());
        FIX::LegCouponRate LegCouponRate_71;
        LegCouponRate_71.setString("14.140000");
        noLegs_2_0_2_0.set(LegCouponRate_71);
        InstrumentLeg_71.insert(LegCouponRate_71.getString());
        FIX::LegCreditRating LegCreditRating_71("STRING_1511351906");
        noLegs_2_0_2_0.set(LegCreditRating_71);
        InstrumentLeg_71.insert(LegCreditRating_71.getString());
        FIX::LegCurrency LegCurrency_71("JPY");
        noLegs_2_0_2_0.set(LegCurrency_71);
        InstrumentLeg_71.insert(LegCurrency_71.getString());
        FIX::LegDatedDate LegDatedDate_71("LOCALMKTDATE_622011148");
        noLegs_2_0_2_0.set(LegDatedDate_71);
        InstrumentLeg_71.insert(LegDatedDate_71.getString());
        FIX::LegExerciseStyle LegExerciseStyle_71(1786139955);
        noLegs_2_0_2_0.set(LegExerciseStyle_71);
        InstrumentLeg_71.insert(LegExerciseStyle_71.getString());
        FIX::LegFactor LegFactor_71;
        LegFactor_71.setString("20268359");
        noLegs_2_0_2_0.set(LegFactor_71);
        InstrumentLeg_71.insert(LegFactor_71.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_71(133857784);
        noLegs_2_0_2_0.set(LegFlowScheduleType_71);
        InstrumentLeg_71.insert(LegFlowScheduleType_71.getString());
        FIX::LegInstrRegistry LegInstrRegistry_71("STRING_766730506");
        noLegs_2_0_2_0.set(LegInstrRegistry_71);
        InstrumentLeg_71.insert(LegInstrRegistry_71.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_71("LOCALMKTDATE_186303998");
        noLegs_2_0_2_0.set(LegInterestAccrualDate_71);
        InstrumentLeg_71.insert(LegInterestAccrualDate_71.getString());
        FIX::LegIssueDate LegIssueDate_71("LOCALMKTDATE_1441820689");
        noLegs_2_0_2_0.set(LegIssueDate_71);
        InstrumentLeg_71.insert(LegIssueDate_71.getString());
        FIX::LegIssuer LegIssuer_71("STRING_127144506");
        noLegs_2_0_2_0.set(LegIssuer_71);
        InstrumentLeg_71.insert(LegIssuer_71.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_71("STRING_2000258402");
        noLegs_2_0_2_0.set(LegLocaleOfIssue_71);
        InstrumentLeg_71.insert(LegLocaleOfIssue_71.getString());
        FIX::LegMaturityDate LegMaturityDate_71("LOCALMKTDATE_330812886");
        noLegs_2_0_2_0.set(LegMaturityDate_71);
        InstrumentLeg_71.insert(LegMaturityDate_71.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_71("MONTHYEAR_276737073");
        noLegs_2_0_2_0.set(LegMaturityMonthYear_71);
        InstrumentLeg_71.insert(LegMaturityMonthYear_71.getString());
        FIX::LegMaturityTime LegMaturityTime_71("TZTIMEONLY_683513271");
        noLegs_2_0_2_0.set(LegMaturityTime_71);
        InstrumentLeg_71.insert(LegMaturityTime_71.getString());
        FIX::LegOptAttribute LegOptAttribute_71('6');
        noLegs_2_0_2_0.set(LegOptAttribute_71);
        InstrumentLeg_71.insert(LegOptAttribute_71.getString());
        FIX::LegOptionRatio LegOptionRatio_71;
        LegOptionRatio_71.setString("5018791");
        noLegs_2_0_2_0.set(LegOptionRatio_71);
        InstrumentLeg_71.insert(LegOptionRatio_71.getString());
        FIX::LegPool LegPool_71("STRING_81347554");
        noLegs_2_0_2_0.set(LegPool_71);
        InstrumentLeg_71.insert(LegPool_71.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_71("STRING_1631183974");
        noLegs_2_0_2_0.set(LegPriceUnitOfMeasure_71);
        InstrumentLeg_71.insert(LegPriceUnitOfMeasure_71.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_71;
        LegPriceUnitOfMeasureQty_71.setString("10598276");
        noLegs_2_0_2_0.set(LegPriceUnitOfMeasureQty_71);
        InstrumentLeg_71.insert(LegPriceUnitOfMeasureQty_71.getString());
        FIX::LegProduct LegProduct_71(1824246799);
        noLegs_2_0_2_0.set(LegProduct_71);
        InstrumentLeg_71.insert(LegProduct_71.getString());
        FIX::LegPutOrCall LegPutOrCall_71(672107256);
        noLegs_2_0_2_0.set(LegPutOrCall_71);
        InstrumentLeg_71.insert(LegPutOrCall_71.getString());
        FIX::LegRatioQty LegRatioQty_71;
        LegRatioQty_71.setString("538580");
        noLegs_2_0_2_0.set(LegRatioQty_71);
        InstrumentLeg_71.insert(LegRatioQty_71.getString());
        FIX::LegRedemptionDate LegRedemptionDate_71("LOCALMKTDATE_357200086");
        noLegs_2_0_2_0.set(LegRedemptionDate_71);
        InstrumentLeg_71.insert(LegRedemptionDate_71.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_71("STRING_726536301");
        noLegs_2_0_2_0.set(LegRepoCollateralSecurityType_71);
        InstrumentLeg_71.insert(LegRepoCollateralSecurityType_71.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_71;
        LegRepurchaseRate_71.setString("11.950000");
        noLegs_2_0_2_0.set(LegRepurchaseRate_71);
        InstrumentLeg_71.insert(LegRepurchaseRate_71.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_71(1858160326);
        noLegs_2_0_2_0.set(LegRepurchaseTerm_71);
        InstrumentLeg_71.insert(LegRepurchaseTerm_71.getString());
        FIX::LegSecurityDesc LegSecurityDesc_71("STRING_1828511452");
        noLegs_2_0_2_0.set(LegSecurityDesc_71);
        InstrumentLeg_71.insert(LegSecurityDesc_71.getString());
        FIX::LegSecurityExchange LegSecurityExchange_71("EXCHANGE_537918499");
        noLegs_2_0_2_0.set(LegSecurityExchange_71);
        InstrumentLeg_71.insert(LegSecurityExchange_71.getString());
        FIX::LegSecurityID LegSecurityID_71("STRING_1142746213");
        noLegs_2_0_2_0.set(LegSecurityID_71);
        InstrumentLeg_71.insert(LegSecurityID_71.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_71("STRING_1463109218");
        noLegs_2_0_2_0.set(LegSecurityIDSource_71);
        InstrumentLeg_71.insert(LegSecurityIDSource_71.getString());
        FIX::LegSecuritySubType LegSecuritySubType_71("STRING_2049270405");
        noLegs_2_0_2_0.set(LegSecuritySubType_71);
        InstrumentLeg_71.insert(LegSecuritySubType_71.getString());
        FIX::LegSecurityType LegSecurityType_71("STRING_2041205156");
        noLegs_2_0_2_0.set(LegSecurityType_71);
        InstrumentLeg_71.insert(LegSecurityType_71.getString());
        FIX::LegSide LegSide_71('5');
        noLegs_2_0_2_0.set(LegSide_71);
        InstrumentLeg_71.insert(LegSide_71.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_71("STRING_523797906");
        noLegs_2_0_2_0.set(LegStateOrProvinceOfIssue_71);
        InstrumentLeg_71.insert(LegStateOrProvinceOfIssue_71.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_71("CHF");
        noLegs_2_0_2_0.set(LegStrikeCurrency_71);
        InstrumentLeg_71.insert(LegStrikeCurrency_71.getString());
        FIX::LegStrikePrice LegStrikePrice_71;
        LegStrikePrice_71.setString("6576556");
        noLegs_2_0_2_0.set(LegStrikePrice_71);
        InstrumentLeg_71.insert(LegStrikePrice_71.getString());
        FIX::LegSymbol LegSymbol_71("STRING_299108322");
        noLegs_2_0_2_0.set(LegSymbol_71);
        InstrumentLeg_71.insert(LegSymbol_71.getString());
        FIX::LegSymbolSfx LegSymbolSfx_71("STRING_633136800");
        noLegs_2_0_2_0.set(LegSymbolSfx_71);
        InstrumentLeg_71.insert(LegSymbolSfx_71.getString());
        FIX::LegTimeUnit LegTimeUnit_71("STRING_2099476380");
        noLegs_2_0_2_0.set(LegTimeUnit_71);
        InstrumentLeg_71.insert(LegTimeUnit_71.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_71("STRING_426252828");
        noLegs_2_0_2_0.set(LegUnitOfMeasure_71);
        InstrumentLeg_71.insert(LegUnitOfMeasure_71.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_71;
        LegUnitOfMeasureQty_71.setString("4859115");
        noLegs_2_0_2_0.set(LegUnitOfMeasureQty_71);
        InstrumentLeg_71.insert(LegUnitOfMeasureQty_71.getString());
        all_values.push_back(InstrumentLeg_71);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_146;
          FIX::LegSecurityAltID LegSecurityAltID_146("STRING_702989901");
          noLegSecurityAltID_2_0_0_3_0.set(LegSecurityAltID_146);
          LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltID_146.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_146("STRING_1169424825");
          noLegSecurityAltID_2_0_0_3_0.set(LegSecurityAltIDSource_146);
          LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltIDSource_146.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_146);

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_147;
          FIX::LegSecurityAltID LegSecurityAltID_147("STRING_972406721");
          noLegSecurityAltID_2_0_0_3_1.set(LegSecurityAltID_147);
          LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltID_147.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_147("STRING_1204869084");
          noLegSecurityAltID_2_0_0_3_1.set(LegSecurityAltIDSource_147);
          LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltIDSource_147.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_147);

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_42;
      FIX::AttachmentPoint AttachmentPoint_42;
      AttachmentPoint_42.setString("23.790000");
      noQuoteEntries_2_1_0.set(AttachmentPoint_42);
      Instrument_42.insert(AttachmentPoint_42.getString());
      FIX::CFICode CFICode_42("STRING_456107047");
      noQuoteEntries_2_1_0.set(CFICode_42);
      Instrument_42.insert(CFICode_42.getString());
      FIX::CPProgram CPProgram_42(99);
      noQuoteEntries_2_1_0.set(CPProgram_42);
      Instrument_42.insert(CPProgram_42.getString());
      FIX::CPRegType CPRegType_42("STRING_927535531");
      noQuoteEntries_2_1_0.set(CPRegType_42);
      Instrument_42.insert(CPRegType_42.getString());
      FIX::CapPrice CapPrice_42;
      CapPrice_42.setString("11282143");
      noQuoteEntries_2_1_0.set(CapPrice_42);
      Instrument_42.insert(CapPrice_42.getString());
      FIX::ContractMultiplier ContractMultiplier_42;
      ContractMultiplier_42.setString("1710712");
      noQuoteEntries_2_1_0.set(ContractMultiplier_42);
      Instrument_42.insert(ContractMultiplier_42.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_42(2);
      noQuoteEntries_2_1_0.set(ContractMultiplierUnit_42);
      Instrument_42.insert(ContractMultiplierUnit_42.getString());
      FIX::ContractSettlMonth ContractSettlMonth_42("MONTHYEAR_1854750604");
      noQuoteEntries_2_1_0.set(ContractSettlMonth_42);
      Instrument_42.insert(ContractSettlMonth_42.getString());
      FIX::CountryOfIssue CountryOfIssue_42("COUNTRY_1714122397");
      noQuoteEntries_2_1_0.set(CountryOfIssue_42);
      Instrument_42.insert(CountryOfIssue_42.getString());
      FIX::CouponPaymentDate CouponPaymentDate_42("LOCALMKTDATE_995412296");
      noQuoteEntries_2_1_0.set(CouponPaymentDate_42);
      Instrument_42.insert(CouponPaymentDate_42.getString());
      FIX::CouponRate CouponRate_42;
      CouponRate_42.setString("84.080000");
      noQuoteEntries_2_1_0.set(CouponRate_42);
      Instrument_42.insert(CouponRate_42.getString());
      FIX::CreditRating CreditRating_42("STRING_104557249");
      noQuoteEntries_2_1_0.set(CreditRating_42);
      Instrument_42.insert(CreditRating_42.getString());
      FIX::DatedDate DatedDate_42("LOCALMKTDATE_2138158509");
      noQuoteEntries_2_1_0.set(DatedDate_42);
      Instrument_42.insert(DatedDate_42.getString());
      FIX::DetachmentPoint DetachmentPoint_42;
      DetachmentPoint_42.setString("39.790000");
      noQuoteEntries_2_1_0.set(DetachmentPoint_42);
      Instrument_42.insert(DetachmentPoint_42.getString());
      FIX::EncodedIssuer EncodedIssuer_42("DATA_6344006");
      noQuoteEntries_2_1_0.set(EncodedIssuer_42);
      Instrument_42.insert(EncodedIssuer_42.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_42(2031880017);
      noQuoteEntries_2_1_0.set(EncodedIssuerLen_42);
      Instrument_42.insert(EncodedIssuerLen_42.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_42("DATA_1418884481");
      noQuoteEntries_2_1_0.set(EncodedSecurityDesc_42);
      Instrument_42.insert(EncodedSecurityDesc_42.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_42(530141912);
      noQuoteEntries_2_1_0.set(EncodedSecurityDescLen_42);
      Instrument_42.insert(EncodedSecurityDescLen_42.getString());
      FIX::ExerciseStyle ExerciseStyle_42(1);
      noQuoteEntries_2_1_0.set(ExerciseStyle_42);
      Instrument_42.insert(ExerciseStyle_42.getString());
      FIX::Factor Factor_42;
      Factor_42.setString("18657172");
      noQuoteEntries_2_1_0.set(Factor_42);
      Instrument_42.insert(Factor_42.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_42(false);
      noQuoteEntries_2_1_0.set(FlexProductEligibilityIndicator_42);
      Instrument_42.insert(FlexProductEligibilityIndicator_42.getString());
      FIX::FlexibleIndicator FlexibleIndicator_42(true);
      noQuoteEntries_2_1_0.set(FlexibleIndicator_42);
      Instrument_42.insert(FlexibleIndicator_42.getString());
      FIX::FloorPrice FloorPrice_42;
      FloorPrice_42.setString("3513704");
      noQuoteEntries_2_1_0.set(FloorPrice_42);
      Instrument_42.insert(FloorPrice_42.getString());
      FIX::FlowScheduleType FlowScheduleType_42(0);
      noQuoteEntries_2_1_0.set(FlowScheduleType_42);
      Instrument_42.insert(FlowScheduleType_42.getString());
      FIX::InstrRegistry InstrRegistry_42("STRING_142135334");
      noQuoteEntries_2_1_0.set(InstrRegistry_42);
      Instrument_42.insert(InstrRegistry_42.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_42('8');
      noQuoteEntries_2_1_0.set(InstrmtAssignmentMethod_42);
      Instrument_42.insert(InstrmtAssignmentMethod_42.getString());
      FIX::InterestAccrualDate InterestAccrualDate_42("LOCALMKTDATE_1422595953");
      noQuoteEntries_2_1_0.set(InterestAccrualDate_42);
      Instrument_42.insert(InterestAccrualDate_42.getString());
      FIX::IssueDate IssueDate_42("LOCALMKTDATE_845125235");
      noQuoteEntries_2_1_0.set(IssueDate_42);
      Instrument_42.insert(IssueDate_42.getString());
      FIX::Issuer Issuer_42("STRING_2006706814");
      noQuoteEntries_2_1_0.set(Issuer_42);
      Instrument_42.insert(Issuer_42.getString());
      FIX::ListMethod ListMethod_42(0);
      noQuoteEntries_2_1_0.set(ListMethod_42);
      Instrument_42.insert(ListMethod_42.getString());
      FIX::LocaleOfIssue LocaleOfIssue_42("STRING_2049994320");
      noQuoteEntries_2_1_0.set(LocaleOfIssue_42);
      Instrument_42.insert(LocaleOfIssue_42.getString());
      FIX::MaturityDate MaturityDate_42("LOCALMKTDATE_1109995546");
      noQuoteEntries_2_1_0.set(MaturityDate_42);
      Instrument_42.insert(MaturityDate_42.getString());
      FIX::MaturityMonthYear MaturityMonthYear_42("MONTHYEAR_703626073");
      noQuoteEntries_2_1_0.set(MaturityMonthYear_42);
      Instrument_42.insert(MaturityMonthYear_42.getString());
      FIX::MaturityTime MaturityTime_42("TZTIMEONLY_19723803");
      noQuoteEntries_2_1_0.set(MaturityTime_42);
      Instrument_42.insert(MaturityTime_42.getString());
      FIX::MinPriceIncrement MinPriceIncrement_42;
      MinPriceIncrement_42.setString("20375310");
      noQuoteEntries_2_1_0.set(MinPriceIncrement_42);
      Instrument_42.insert(MinPriceIncrement_42.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_42;
      MinPriceIncrementAmount_42.setString("18318403");
      noQuoteEntries_2_1_0.set(MinPriceIncrementAmount_42);
      Instrument_42.insert(MinPriceIncrementAmount_42.getString());
      FIX::NTPositionLimit NTPositionLimit_42(190795005);
      noQuoteEntries_2_1_0.set(NTPositionLimit_42);
      Instrument_42.insert(NTPositionLimit_42.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_42;
      NotionalPercentageOutstanding_42.setString("30.460000");
      noQuoteEntries_2_1_0.set(NotionalPercentageOutstanding_42);
      Instrument_42.insert(NotionalPercentageOutstanding_42.getString());
      FIX::OptAttribute OptAttribute_42('1');
      noQuoteEntries_2_1_0.set(OptAttribute_42);
      Instrument_42.insert(OptAttribute_42.getString());
      FIX::OptPayoutAmount OptPayoutAmount_42;
      OptPayoutAmount_42.setString("19049174");
      noQuoteEntries_2_1_0.set(OptPayoutAmount_42);
      Instrument_42.insert(OptPayoutAmount_42.getString());
      FIX::OptPayoutType OptPayoutType_42(3);
      noQuoteEntries_2_1_0.set(OptPayoutType_42);
      Instrument_42.insert(OptPayoutType_42.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_42;
      OriginalNotionalPercentageOutstanding_42.setString("20.920000");
      noQuoteEntries_2_1_0.set(OriginalNotionalPercentageOutstanding_42);
      Instrument_42.insert(OriginalNotionalPercentageOutstanding_42.getString());
      FIX::Pool Pool_42("STRING_2009474652");
      noQuoteEntries_2_1_0.set(Pool_42);
      Instrument_42.insert(Pool_42.getString());
      FIX::PositionLimit PositionLimit_42(13386555);
      noQuoteEntries_2_1_0.set(PositionLimit_42);
      Instrument_42.insert(PositionLimit_42.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_42("STRING_PCTPAR");
      noQuoteEntries_2_1_0.set(PriceQuoteMethod_42);
      Instrument_42.insert(PriceQuoteMethod_42.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_42("STRING_2015818658");
      noQuoteEntries_2_1_0.set(PriceUnitOfMeasure_42);
      Instrument_42.insert(PriceUnitOfMeasure_42.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_42;
      PriceUnitOfMeasureQty_42.setString("20452665");
      noQuoteEntries_2_1_0.set(PriceUnitOfMeasureQty_42);
      Instrument_42.insert(PriceUnitOfMeasureQty_42.getString());
      FIX::Product Product_44(8);
      noQuoteEntries_2_1_0.set(Product_44);
      Instrument_42.insert(Product_44.getString());
      FIX::ProductComplex ProductComplex_42("STRING_398476923");
      noQuoteEntries_2_1_0.set(ProductComplex_42);
      Instrument_42.insert(ProductComplex_42.getString());
      FIX::PutOrCall PutOrCall_42(1);
      noQuoteEntries_2_1_0.set(PutOrCall_42);
      Instrument_42.insert(PutOrCall_42.getString());
      FIX::RedemptionDate RedemptionDate_42("LOCALMKTDATE_768440540");
      noQuoteEntries_2_1_0.set(RedemptionDate_42);
      Instrument_42.insert(RedemptionDate_42.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_42("STRING_1586274526");
      noQuoteEntries_2_1_0.set(RepoCollateralSecurityType_42);
      Instrument_42.insert(RepoCollateralSecurityType_42.getString());
      FIX::RepurchaseRate RepurchaseRate_42;
      RepurchaseRate_42.setString("32.630000");
      noQuoteEntries_2_1_0.set(RepurchaseRate_42);
      Instrument_42.insert(RepurchaseRate_42.getString());
      FIX::RepurchaseTerm RepurchaseTerm_42(1119810975);
      noQuoteEntries_2_1_0.set(RepurchaseTerm_42);
      Instrument_42.insert(RepurchaseTerm_42.getString());
      FIX::RestructuringType RestructuringType_42("STRING_MR");
      noQuoteEntries_2_1_0.set(RestructuringType_42);
      Instrument_42.insert(RestructuringType_42.getString());
      FIX::SecurityDesc SecurityDesc_42("STRING_1320058598");
      noQuoteEntries_2_1_0.set(SecurityDesc_42);
      Instrument_42.insert(SecurityDesc_42.getString());
      FIX::SecurityExchange SecurityExchange_42("EXCHANGE_1957092964");
      noQuoteEntries_2_1_0.set(SecurityExchange_42);
      Instrument_42.insert(SecurityExchange_42.getString());
      FIX::SecurityGroup SecurityGroup_42("STRING_2001177166");
      noQuoteEntries_2_1_0.set(SecurityGroup_42);
      Instrument_42.insert(SecurityGroup_42.getString());
      FIX::SecurityID SecurityID_42("STRING_17700185");
      noQuoteEntries_2_1_0.set(SecurityID_42);
      Instrument_42.insert(SecurityID_42.getString());
      FIX::SecurityIDSource SecurityIDSource_42("STRING_3");
      noQuoteEntries_2_1_0.set(SecurityIDSource_42);
      Instrument_42.insert(SecurityIDSource_42.getString());
      FIX::SecurityStatus SecurityStatus_42("STRING_1");
      noQuoteEntries_2_1_0.set(SecurityStatus_42);
      Instrument_42.insert(SecurityStatus_42.getString());
      FIX::SecuritySubType SecuritySubType_43("STRING_2067694505");
      noQuoteEntries_2_1_0.set(SecuritySubType_43);
      Instrument_42.insert(SecuritySubType_43.getString());
      FIX::SecurityType SecurityType_44("STRING_CAMM");
      noQuoteEntries_2_1_0.set(SecurityType_44);
      Instrument_42.insert(SecurityType_44.getString());
      FIX::Seniority Seniority_42("STRING_SD");
      noQuoteEntries_2_1_0.set(Seniority_42);
      Instrument_42.insert(Seniority_42.getString());
      FIX::SettlMethod SettlMethod_42('P');
      noQuoteEntries_2_1_0.set(SettlMethod_42);
      Instrument_42.insert(SettlMethod_42.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_42("STRING_668875457");
      noQuoteEntries_2_1_0.set(SettleOnOpenFlag_42);
      Instrument_42.insert(SettleOnOpenFlag_42.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_42("STRING_489195345");
      noQuoteEntries_2_1_0.set(StateOrProvinceOfIssue_42);
      Instrument_42.insert(StateOrProvinceOfIssue_42.getString());
      FIX::StrikeCurrency StrikeCurrency_42("GBP");
      noQuoteEntries_2_1_0.set(StrikeCurrency_42);
      Instrument_42.insert(StrikeCurrency_42.getString());
      FIX::StrikeMultiplier StrikeMultiplier_42;
      StrikeMultiplier_42.setString("20283026");
      noQuoteEntries_2_1_0.set(StrikeMultiplier_42);
      Instrument_42.insert(StrikeMultiplier_42.getString());
      FIX::StrikePrice StrikePrice_42;
      StrikePrice_42.setString("20356470");
      noQuoteEntries_2_1_0.set(StrikePrice_42);
      Instrument_42.insert(StrikePrice_42.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_42(4);
      noQuoteEntries_2_1_0.set(StrikePriceBoundaryMethod_42);
      Instrument_42.insert(StrikePriceBoundaryMethod_42.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_42;
      StrikePriceBoundaryPrecision_42.setString("11.210000");
      noQuoteEntries_2_1_0.set(StrikePriceBoundaryPrecision_42);
      Instrument_42.insert(StrikePriceBoundaryPrecision_42.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_42(2);
      noQuoteEntries_2_1_0.set(StrikePriceDeterminationMethod_42);
      Instrument_42.insert(StrikePriceDeterminationMethod_42.getString());
      FIX::StrikeValue StrikeValue_42;
      StrikeValue_42.setString("18797567");
      noQuoteEntries_2_1_0.set(StrikeValue_42);
      Instrument_42.insert(StrikeValue_42.getString());
      FIX::Symbol Symbol_42("STRING_439543545");
      noQuoteEntries_2_1_0.set(Symbol_42);
      Instrument_42.insert(Symbol_42.getString());
      FIX::SymbolSfx SymbolSfx_42("STRING_CD");
      noQuoteEntries_2_1_0.set(SymbolSfx_42);
      Instrument_42.insert(SymbolSfx_42.getString());
      FIX::TimeUnit TimeUnit_42("STRING_Mo");
      noQuoteEntries_2_1_0.set(TimeUnit_42);
      Instrument_42.insert(TimeUnit_42.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_42(3);
      noQuoteEntries_2_1_0.set(UnderlyingPriceDeterminationMethod_42);
      Instrument_42.insert(UnderlyingPriceDeterminationMethod_42.getString());
      FIX::UnitOfMeasure UnitOfMeasure_42("STRING_Gal");
      noQuoteEntries_2_1_0.set(UnitOfMeasure_42);
      Instrument_42.insert(UnitOfMeasure_42.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_42;
      UnitOfMeasureQty_42.setString("10920967");
      noQuoteEntries_2_1_0.set(UnitOfMeasureQty_42);
      Instrument_42.insert(UnitOfMeasureQty_42.getString());
      FIX::ValuationMethod ValuationMethod_42("STRING_FUTDA");
      noQuoteEntries_2_1_0.set(ValuationMethod_42);
      Instrument_42.insert(ValuationMethod_42.getString());
      all_values.push_back(Instrument_42);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_84;
        FIX::ComplexEventCondition ComplexEventCondition_84(2);
        noComplexEvents_2_0_2_0.set(ComplexEventCondition_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventCondition_84.getString());
        FIX::ComplexEventPrice ComplexEventPrice_84;
        ComplexEventPrice_84.setString("12305183");
        noComplexEvents_2_0_2_0.set(ComplexEventPrice_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPrice_84.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_84(1);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryMethod_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryMethod_84.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_84;
        ComplexEventPriceBoundaryPrecision_84.setString("50.010000");
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryPrecision_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryPrecision_84.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_84(1);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceTimeType_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceTimeType_84.getString());
        FIX::ComplexEventType ComplexEventType_84(8);
        noComplexEvents_2_0_2_0.set(ComplexEventType_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventType_84.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_84;
        ComplexOptPayoutAmount_84.setString("14602951");
        noComplexEvents_2_0_2_0.set(ComplexOptPayoutAmount_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexOptPayoutAmount_84.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_84);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_172;
          FIX::ComplexEventEndDate ComplexEventEndDate_172(FIX::UTCTIMESTAMP(4, 4, 49, 17, 2, 2010));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventEndDate_172);
          ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventEndDate_172.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_172(FIX::UTCTIMESTAMP(9, 3, 53, 0, 5, 2004));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventStartDate_172);
          ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventStartDate_172.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_172);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_356;
            FIX::ComplexEventEndTime ComplexEventEndTime_356(FIX::UTCTIMEONLY(22, 4, 51));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventEndTime_356);
            ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventEndTime_356.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_356(FIX::UTCTIMEONLY(12, 13, 30));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventStartTime_356);
            ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventStartTime_356.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_356);

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_0);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_173;
          FIX::ComplexEventEndDate ComplexEventEndDate_173(FIX::UTCTIMESTAMP(6, 0, 28, 15, 9, 2008));
          noComplexEventDates_2_0_0_3_1.set(ComplexEventEndDate_173);
          ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventEndDate_173.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_173(FIX::UTCTIMESTAMP(12, 30, 7, 5, 4, 2014));
          noComplexEventDates_2_0_0_3_1.set(ComplexEventStartDate_173);
          ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventStartDate_173.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_173);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_357;
            FIX::ComplexEventEndTime ComplexEventEndTime_357(FIX::UTCTIMEONLY(22, 18, 4));
            noComplexEventTimes_2_0_0_1_4_0.set(ComplexEventEndTime_357);
            ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventEndTime_357.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_357(FIX::UTCTIMEONLY(15, 54, 36));
            noComplexEventTimes_2_0_0_1_4_0.set(ComplexEventStartTime_357);
            ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventStartTime_357.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_357);

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_0);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_85;
        FIX::ComplexEventCondition ComplexEventCondition_85(1);
        noComplexEvents_2_0_2_1.set(ComplexEventCondition_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventCondition_85.getString());
        FIX::ComplexEventPrice ComplexEventPrice_85;
        ComplexEventPrice_85.setString("16030760");
        noComplexEvents_2_0_2_1.set(ComplexEventPrice_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPrice_85.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_85(1);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryMethod_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryMethod_85.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_85;
        ComplexEventPriceBoundaryPrecision_85.setString("4.600000");
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryPrecision_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryPrecision_85.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_85(2);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceTimeType_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceTimeType_85.getString());
        FIX::ComplexEventType ComplexEventType_85(9);
        noComplexEvents_2_0_2_1.set(ComplexEventType_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventType_85.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_85;
        ComplexOptPayoutAmount_85.setString("5995031");
        noComplexEvents_2_0_2_1.set(ComplexOptPayoutAmount_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexOptPayoutAmount_85.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_85);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_174;
          FIX::ComplexEventEndDate ComplexEventEndDate_174(FIX::UTCTIMESTAMP(4, 5, 31, 27, 3, 2010));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventEndDate_174);
          ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventEndDate_174.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_174(FIX::UTCTIMESTAMP(2, 20, 37, 24, 5, 2002));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventStartDate_174);
          ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventStartDate_174.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_174);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_358;
            FIX::ComplexEventEndTime ComplexEventEndTime_358(FIX::UTCTIMEONLY(4, 30, 47));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventEndTime_358);
            ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventEndTime_358.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_358(FIX::UTCTIMEONLY(21, 41, 10));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventStartTime_358);
            ComplexEventTimes_NoComplexEventTimes_358.insert(ComplexEventStartTime_358.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_358);

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_359;
            FIX::ComplexEventEndTime ComplexEventEndTime_359(FIX::UTCTIMEONLY(14, 50, 13));
            noComplexEventTimes_2_0_1_0_4_1.set(ComplexEventEndTime_359);
            ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventEndTime_359.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_359(FIX::UTCTIMEONLY(15, 51, 42));
            noComplexEventTimes_2_0_1_0_4_1.set(ComplexEventStartTime_359);
            ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventStartTime_359.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_359);

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_1);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_175;
          FIX::ComplexEventEndDate ComplexEventEndDate_175(FIX::UTCTIMESTAMP(19, 39, 2, 26, 6, 2012));
          noComplexEventDates_2_0_1_3_1.set(ComplexEventEndDate_175);
          ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventEndDate_175.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_175(FIX::UTCTIMESTAMP(8, 12, 46, 8, 5, 2010));
          noComplexEventDates_2_0_1_3_1.set(ComplexEventStartDate_175);
          ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventStartDate_175.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_175);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_360;
            FIX::ComplexEventEndTime ComplexEventEndTime_360(FIX::UTCTIMEONLY(8, 45, 22));
            noComplexEventTimes_2_0_1_1_4_0.set(ComplexEventEndTime_360);
            ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventEndTime_360.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_360(FIX::UTCTIMEONLY(10, 56, 56));
            noComplexEventTimes_2_0_1_1_4_0.set(ComplexEventStartTime_360);
            ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventStartTime_360.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_360);

            noComplexEventDates_2_0_1_3_1.addGroup(noComplexEventTimes_2_0_1_1_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_176;
          FIX::ComplexEventEndDate ComplexEventEndDate_176(FIX::UTCTIMESTAMP(22, 39, 1, 27, 7, 2016));
          noComplexEventDates_2_0_1_3_2.set(ComplexEventEndDate_176);
          ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventEndDate_176.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_176(FIX::UTCTIMESTAMP(0, 3, 49, 22, 3, 2016));
          noComplexEventDates_2_0_1_3_2.set(ComplexEventStartDate_176);
          ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventStartDate_176.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_176);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_361;
            FIX::ComplexEventEndTime ComplexEventEndTime_361(FIX::UTCTIMEONLY(10, 43, 45));
            noComplexEventTimes_2_0_1_2_4_0.set(ComplexEventEndTime_361);
            ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventEndTime_361.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_361(FIX::UTCTIMEONLY(15, 14, 54));
            noComplexEventTimes_2_0_1_2_4_0.set(ComplexEventStartTime_361);
            ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventStartTime_361.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_361);

            noComplexEventDates_2_0_1_3_2.addGroup(noComplexEventTimes_2_0_1_2_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_78;
        FIX::EventDate EventDate_78("LOCALMKTDATE_416171306");
        noEvents_2_0_2_0.set(EventDate_78);
        EvntGrp_NoEvents_78.insert(EventDate_78.getString());
        FIX::EventPx EventPx_78;
        EventPx_78.setString("9485479");
        noEvents_2_0_2_0.set(EventPx_78);
        EvntGrp_NoEvents_78.insert(EventPx_78.getString());
        FIX::EventText EventText_78("STRING_699503065");
        noEvents_2_0_2_0.set(EventText_78);
        EvntGrp_NoEvents_78.insert(EventText_78.getString());
        FIX::EventTime EventTime_78(FIX::UTCTIMESTAMP(18, 21, 9, 18, 9, 2006));
        noEvents_2_0_2_0.set(EventTime_78);
        EvntGrp_NoEvents_78.insert(EventTime_78.getString());
        FIX::EventType EventType_78(16);
        noEvents_2_0_2_0.set(EventType_78);
        EvntGrp_NoEvents_78.insert(EventType_78.getString());
        all_values.push_back(EvntGrp_NoEvents_78);

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_78;
        FIX::InstrumentPartyID InstrumentPartyID_78("STRING_1348909254");
        noInstrumentParties_2_0_2_0.set(InstrumentPartyID_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyID_78.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_78('1');
        noInstrumentParties_2_0_2_0.set(InstrumentPartyIDSource_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyIDSource_78.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_78(133784861);
        noInstrumentParties_2_0_2_0.set(InstrumentPartyRole_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyRole_78.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_78);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170;
          FIX::InstrumentPartySubID InstrumentPartySubID_170("STRING_1136655263");
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubID_170);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubID_170.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_170(116257282);
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubIDType_170);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubIDType_170.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171;
          FIX::InstrumentPartySubID InstrumentPartySubID_171("STRING_1565659501");
          noInstrumentPartySubIDs_2_0_0_3_1.set(InstrumentPartySubID_171);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubID_171.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_171(1093494065);
          noInstrumentPartySubIDs_2_0_0_3_1.set(InstrumentPartySubIDType_171);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubIDType_171.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172;
          FIX::InstrumentPartySubID InstrumentPartySubID_172("STRING_870334196");
          noInstrumentPartySubIDs_2_0_0_3_2.set(InstrumentPartySubID_172);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubID_172.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_172(248787264);
          noInstrumentPartySubIDs_2_0_0_3_2.set(InstrumentPartySubIDType_172);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubIDType_172.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_89;
        FIX::SecurityAltID SecurityAltID_89("STRING_1020197191");
        noSecurityAltID_2_0_2_0.set(SecurityAltID_89);
        SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltID_89.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_89("STRING_1718071987");
        noSecurityAltID_2_0_2_0.set(SecurityAltIDSource_89);
        SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltIDSource_89.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_89);

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_90;
        FIX::SecurityAltID SecurityAltID_90("STRING_849482382");
        noSecurityAltID_2_0_2_1.set(SecurityAltID_90);
        SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltID_90.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_90("STRING_76427161");
        noSecurityAltID_2_0_2_1.set(SecurityAltIDSource_90);
        SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltIDSource_90.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_90);

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_84;
      FIX::SecurityXML SecurityXML_85("XMLDATA_2030172874");
      noQuoteEntries_2_1_0.set(SecurityXML_85);
      FIX::SecurityXMLLen SecurityXMLLen_42(2054395256);
      noQuoteEntries_2_1_0.set(SecurityXMLLen_42);
      FIX::SecurityXMLSchema SecurityXMLSchema_42("STRING_1866766435");
      noQuoteEntries_2_1_0.set(SecurityXMLSchema_42);
      SecurityXML_84.insert(SecurityXMLSchema_42.getString());
      all_values.push_back(SecurityXML_84);

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_58;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_58("DATA_2992829");
    noQuoteSets_0_2.set(EncodedUnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuer_58.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_58(323082914);
    noQuoteSets_0_2.set(EncodedUnderlyingIssuerLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuerLen_58.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_58("DATA_667830739");
    noQuoteSets_0_2.set(EncodedUnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDesc_58.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_58(702495895);
    noQuoteSets_0_2.set(EncodedUnderlyingSecurityDescLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDescLen_58.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_58;
    UnderlyingAdjustedQuantity_58.setString("3094859");
    noQuoteSets_0_2.set(UnderlyingAdjustedQuantity_58);
    UnderlyingInstrument_58.insert(UnderlyingAdjustedQuantity_58.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_58;
    UnderlyingAllocationPercent_58.setString("70.050000");
    noQuoteSets_0_2.set(UnderlyingAllocationPercent_58);
    UnderlyingInstrument_58.insert(UnderlyingAllocationPercent_58.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_58;
    UnderlyingAttachmentPoint_58.setString("99.360000");
    noQuoteSets_0_2.set(UnderlyingAttachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingAttachmentPoint_58.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_58("STRING_557647897");
    noQuoteSets_0_2.set(UnderlyingCFICode_58);
    UnderlyingInstrument_58.insert(UnderlyingCFICode_58.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_58("STRING_1793380007");
    noQuoteSets_0_2.set(UnderlyingCPProgram_58);
    UnderlyingInstrument_58.insert(UnderlyingCPProgram_58.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_58("STRING_1369138888");
    noQuoteSets_0_2.set(UnderlyingCPRegType_58);
    UnderlyingInstrument_58.insert(UnderlyingCPRegType_58.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_58;
    UnderlyingCapValue_58.setString("8782201");
    noQuoteSets_0_2.set(UnderlyingCapValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCapValue_58.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_58;
    UnderlyingCashAmount_58.setString("2739940");
    noQuoteSets_0_2.set(UnderlyingCashAmount_58);
    UnderlyingInstrument_58.insert(UnderlyingCashAmount_58.getString());
    FIX::UnderlyingCashType UnderlyingCashType_58("STRING_FIXED");
    noQuoteSets_0_2.set(UnderlyingCashType_58);
    UnderlyingInstrument_58.insert(UnderlyingCashType_58.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_58;
    UnderlyingContractMultiplier_58.setString("796457");
    noQuoteSets_0_2.set(UnderlyingContractMultiplier_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplier_58.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_58(286491094);
    noQuoteSets_0_2.set(UnderlyingContractMultiplierUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplierUnit_58.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_58("COUNTRY_1746491629");
    noQuoteSets_0_2.set(UnderlyingCountryOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingCountryOfIssue_58.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_58("LOCALMKTDATE_264330335");
    noQuoteSets_0_2.set(UnderlyingCouponPaymentDate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponPaymentDate_58.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_58;
    UnderlyingCouponRate_58.setString("63.580000");
    noQuoteSets_0_2.set(UnderlyingCouponRate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponRate_58.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_58("STRING_1862748911");
    noQuoteSets_0_2.set(UnderlyingCreditRating_58);
    UnderlyingInstrument_58.insert(UnderlyingCreditRating_58.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_58("EUR");
    noQuoteSets_0_2.set(UnderlyingCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrency_58.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_58;
    UnderlyingCurrentValue_58.setString("5855994");
    noQuoteSets_0_2.set(UnderlyingCurrentValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrentValue_58.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_58;
    UnderlyingDetachmentPoint_58.setString("71.000000");
    noQuoteSets_0_2.set(UnderlyingDetachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingDetachmentPoint_58.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_58;
    UnderlyingDirtyPrice_58.setString("420507");
    noQuoteSets_0_2.set(UnderlyingDirtyPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingDirtyPrice_58.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_58;
    UnderlyingEndPrice_58.setString("16057966");
    noQuoteSets_0_2.set(UnderlyingEndPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingEndPrice_58.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_58;
    UnderlyingEndValue_58.setString("16493654");
    noQuoteSets_0_2.set(UnderlyingEndValue_58);
    UnderlyingInstrument_58.insert(UnderlyingEndValue_58.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_58(891533134);
    noQuoteSets_0_2.set(UnderlyingExerciseStyle_58);
    UnderlyingInstrument_58.insert(UnderlyingExerciseStyle_58.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_58;
    UnderlyingFXRate_58.setString("16822238");
    noQuoteSets_0_2.set(UnderlyingFXRate_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRate_58.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_58('D');
    noQuoteSets_0_2.set(UnderlyingFXRateCalc_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRateCalc_58.getString());
    FIX::UnderlyingFactor UnderlyingFactor_58;
    UnderlyingFactor_58.setString("7984447");
    noQuoteSets_0_2.set(UnderlyingFactor_58);
    UnderlyingInstrument_58.insert(UnderlyingFactor_58.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_58(1401506599);
    noQuoteSets_0_2.set(UnderlyingFlowScheduleType_58);
    UnderlyingInstrument_58.insert(UnderlyingFlowScheduleType_58.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_58("STRING_1535047495");
    noQuoteSets_0_2.set(UnderlyingInstrRegistry_58);
    UnderlyingInstrument_58.insert(UnderlyingInstrRegistry_58.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_58("LOCALMKTDATE_1121527656");
    noQuoteSets_0_2.set(UnderlyingIssueDate_58);
    UnderlyingInstrument_58.insert(UnderlyingIssueDate_58.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_58("STRING_2069337338");
    noQuoteSets_0_2.set(UnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(UnderlyingIssuer_58.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_58("STRING_90059742");
    noQuoteSets_0_2.set(UnderlyingLocaleOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingLocaleOfIssue_58.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_58("LOCALMKTDATE_1431013624");
    noQuoteSets_0_2.set(UnderlyingMaturityDate_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityDate_58.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_58("MONTHYEAR_279150695");
    noQuoteSets_0_2.set(UnderlyingMaturityMonthYear_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityMonthYear_58.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_58("TZTIMEONLY_1589869679");
    noQuoteSets_0_2.set(UnderlyingMaturityTime_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityTime_58.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_58;
    UnderlyingNotionalPercentageOutstanding_58.setString("15.210000");
    noQuoteSets_0_2.set(UnderlyingNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_58('2');
    noQuoteSets_0_2.set(UnderlyingOptAttribute_58);
    UnderlyingInstrument_58.insert(UnderlyingOptAttribute_58.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_58;
    UnderlyingOriginalNotionalPercentageOutstanding_58.setString("49.190000");
    noQuoteSets_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingOriginalNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_58("STRING_719398018");
    noQuoteSets_0_2.set(UnderlyingPriceUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasure_58.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_58;
    UnderlyingPriceUnitOfMeasureQty_58.setString("1990410");
    noQuoteSets_0_2.set(UnderlyingPriceUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasureQty_58.getString());
    FIX::UnderlyingProduct UnderlyingProduct_58(276748039);
    noQuoteSets_0_2.set(UnderlyingProduct_58);
    UnderlyingInstrument_58.insert(UnderlyingProduct_58.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_58(799043770);
    noQuoteSets_0_2.set(UnderlyingPutOrCall_58);
    UnderlyingInstrument_58.insert(UnderlyingPutOrCall_58.getString());
    FIX::UnderlyingPx UnderlyingPx_58;
    UnderlyingPx_58.setString("4855321");
    noQuoteSets_0_2.set(UnderlyingPx_58);
    UnderlyingInstrument_58.insert(UnderlyingPx_58.getString());
    FIX::UnderlyingQty UnderlyingQty_58;
    UnderlyingQty_58.setString("20232396");
    noQuoteSets_0_2.set(UnderlyingQty_58);
    UnderlyingInstrument_58.insert(UnderlyingQty_58.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_58("LOCALMKTDATE_1063374105");
    noQuoteSets_0_2.set(UnderlyingRedemptionDate_58);
    UnderlyingInstrument_58.insert(UnderlyingRedemptionDate_58.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_58("STRING_1908678541");
    noQuoteSets_0_2.set(UnderlyingRepoCollateralSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingRepoCollateralSecurityType_58.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_58;
    UnderlyingRepurchaseRate_58.setString("49.310000");
    noQuoteSets_0_2.set(UnderlyingRepurchaseRate_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseRate_58.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_58(745880294);
    noQuoteSets_0_2.set(UnderlyingRepurchaseTerm_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseTerm_58.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_58("STRING_130351669");
    noQuoteSets_0_2.set(UnderlyingRestructuringType_58);
    UnderlyingInstrument_58.insert(UnderlyingRestructuringType_58.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_58("STRING_176620743");
    noQuoteSets_0_2.set(UnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityDesc_58.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_58("EXCHANGE_677173746");
    noQuoteSets_0_2.set(UnderlyingSecurityExchange_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityExchange_58.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_58("STRING_172402421");
    noQuoteSets_0_2.set(UnderlyingSecurityID_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityID_58.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_58("STRING_1782417393");
    noQuoteSets_0_2.set(UnderlyingSecurityIDSource_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityIDSource_58.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_58("STRING_179055538");
    noQuoteSets_0_2.set(UnderlyingSecuritySubType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecuritySubType_58.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_58("STRING_1063935555");
    noQuoteSets_0_2.set(UnderlyingSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityType_58.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_58("STRING_1317157557");
    noQuoteSets_0_2.set(UnderlyingSeniority_58);
    UnderlyingInstrument_58.insert(UnderlyingSeniority_58.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_58("STRING_1711110204");
    noQuoteSets_0_2.set(UnderlyingSettlMethod_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlMethod_58.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_58(4);
    noQuoteSets_0_2.set(UnderlyingSettlementType_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlementType_58.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_58;
    UnderlyingStartValue_58.setString("5711805");
    noQuoteSets_0_2.set(UnderlyingStartValue_58);
    UnderlyingInstrument_58.insert(UnderlyingStartValue_58.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_58("STRING_1098674051");
    noQuoteSets_0_2.set(UnderlyingStateOrProvinceOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingStateOrProvinceOfIssue_58.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_58("CHF");
    noQuoteSets_0_2.set(UnderlyingStrikeCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikeCurrency_58.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_58;
    UnderlyingStrikePrice_58.setString("11887337");
    noQuoteSets_0_2.set(UnderlyingStrikePrice_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikePrice_58.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_58("STRING_119954281");
    noQuoteSets_0_2.set(UnderlyingSymbol_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbol_58.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_58("STRING_772184895");
    noQuoteSets_0_2.set(UnderlyingSymbolSfx_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbolSfx_58.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_58("STRING_631119825");
    noQuoteSets_0_2.set(UnderlyingTimeUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingTimeUnit_58.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_58("STRING_2108615802");
    noQuoteSets_0_2.set(UnderlyingUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasure_58.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_58;
    UnderlyingUnitOfMeasureQty_58.setString("6972319");
    noQuoteSets_0_2.set(UnderlyingUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasureQty_58.getString());
    all_values.push_back(UnderlyingInstrument_58);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_119;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_119("STRING_680530173");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_119);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltID_119.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_119("STRING_896273038");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_119);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltIDSource_119.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_120;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_120("STRING_1719392784");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_120);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltID_120.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_120("STRING_1479573943");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_120);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltIDSource_120.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_111;
      FIX::UnderlyingStipType UnderlyingStipType_111("STRING_1595148804");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_111);
      UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipType_111.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_111("STRING_395464401");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_111);
      UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipValue_111.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_111);

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_112;
      FIX::UnderlyingStipType UnderlyingStipType_112("STRING_1143000115");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_112);
      UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipType_112.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_112("STRING_1186170088");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_112);
      UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipValue_112.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_112);

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_113;
      FIX::UnderlyingStipType UnderlyingStipType_113("STRING_1141344695");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_113);
      UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipType_113.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_113("STRING_1273351784");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_113);
      UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipValue_113.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_113);

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_126;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_126("STRING_1818518441");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_126);
      UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyID_126.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_126('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_126);
      UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyIDSource_126.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_126(997724576);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_126);
      UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyRole_126.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_126);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_255("STRING_362206112");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_255);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubID_255.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_255(167398486);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_255);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubIDType_255.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_127;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_127("STRING_1561200535");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_127);
      UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyID_127.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_127('7');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_127);
      UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyIDSource_127.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_127(738578995);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_127);
      UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyRole_127.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_127);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_256("STRING_913527067");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_256);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubID_256.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_256(1231613194);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_256);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubIDType_256.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_257("STRING_1701124733");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_257);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubID_257.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_257(1033481348);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_257);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubIDType_257.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_258("STRING_2003798089");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_258);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubID_258.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_258(184760910);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_258);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubIDType_258.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noQuoteSets_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_0;
    FIX::TargetPartyID TargetPartyID_0("STRING_553546391");
    noTargetPartyIDs_0_0.set(TargetPartyID_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyID_0.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_0('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyIDSource_0.getString());
    FIX::TargetPartyRole TargetPartyRole_0(1675143676);
    noTargetPartyIDs_0_0.set(TargetPartyRole_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyRole_0.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_1;
    FIX::TargetPartyID TargetPartyID_1("STRING_1449819429");
    noTargetPartyIDs_0_1.set(TargetPartyID_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyID_1.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_1('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyIDSource_1.getString());
    FIX::TargetPartyRole TargetPartyRole_1(1007233971);
    noTargetPartyIDs_0_1.set(TargetPartyRole_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyRole_1.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_1);

    msg.addGroup(noTargetPartyIDs_0_1);
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
