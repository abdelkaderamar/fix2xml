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
  FIX::Account Account_14("STRING_1154082849");
  msg.set(Account_14);
  MassQuoteAcknowledgement_0.insert(Account_14.getString());
  FIX::AccountType AccountType_12(7);
  msg.set(AccountType_12);
  MassQuoteAcknowledgement_0.insert(AccountType_12.getString());
  FIX::AcctIDSource AcctIDSource_7(1);
  msg.set(AcctIDSource_7);
  MassQuoteAcknowledgement_0.insert(AcctIDSource_7.getString());
  FIX::EncodedText EncodedText_50("DATA_2088640815");
  msg.set(EncodedText_50);
  MassQuoteAcknowledgement_0.insert(EncodedText_50.getString());
  FIX::EncodedTextLen EncodedTextLen_50(1094464570);
  msg.set(EncodedTextLen_50);
  MassQuoteAcknowledgement_0.insert(EncodedTextLen_50.getString());
  FIX::QuoteCancelType QuoteCancelType_0(6);
  msg.set(QuoteCancelType_0);
  MassQuoteAcknowledgement_0.insert(QuoteCancelType_0.getString());
  FIX::QuoteID QuoteID_2("STRING_307436468");
  msg.set(QuoteID_2);
  MassQuoteAcknowledgement_0.insert(QuoteID_2.getString());
  FIX::QuoteRejectReason QuoteRejectReason_0(7);
  msg.set(QuoteRejectReason_0);
  MassQuoteAcknowledgement_0.insert(QuoteRejectReason_0.getString());
  FIX::QuoteReqID QuoteReqID_1("STRING_824511436");
  msg.set(QuoteReqID_1);
  MassQuoteAcknowledgement_0.insert(QuoteReqID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_1(0);
  msg.set(QuoteResponseLevel_1);
  MassQuoteAcknowledgement_0.insert(QuoteResponseLevel_1.getString());
  FIX::QuoteStatus QuoteStatus_0(12);
  msg.set(QuoteStatus_0);
  MassQuoteAcknowledgement_0.insert(QuoteStatus_0.getString());
  FIX::QuoteType QuoteType_3(1);
  msg.set(QuoteType_3);
  MassQuoteAcknowledgement_0.insert(QuoteType_3.getString());
  FIX::Text Text_50("STRING_1011341638");
  msg.set(Text_50);
  MassQuoteAcknowledgement_0.insert(Text_50.getString());
  all_values.push_back(MassQuoteAcknowledgement_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_65;
    FIX::PartyID PartyID_65("STRING_1970125256");
    noPartyIDs_0_0.set(PartyID_65);
    Parties_NoPartyIDs_65.insert(PartyID_65.getString());
    FIX::PartyIDSource PartyIDSource_65('4');
    noPartyIDs_0_0.set(PartyIDSource_65);
    Parties_NoPartyIDs_65.insert(PartyIDSource_65.getString());
    FIX::PartyRole PartyRole_65(21);
    noPartyIDs_0_0.set(PartyRole_65);
    Parties_NoPartyIDs_65.insert(PartyRole_65.getString());
    all_values.push_back(Parties_NoPartyIDs_65);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_131;
      FIX::PartySubID PartySubID_131("STRING_2110702974");
      noPartySubIDs_0_1_0.set(PartySubID_131);
      PtysSubGrp_NoPartySubIDs_131.insert(PartySubID_131.getString());
      FIX::PartySubIDType PartySubIDType_131(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_131);
      PtysSubGrp_NoPartySubIDs_131.insert(PartySubIDType_131.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_131);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotSetAckGrp
  // Group QuotSetAckGrp.NoQuoteSets
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_0;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_0;
    FIX::LastFragment LastFragment_9(true);
    noQuoteSets_0_0.set(LastFragment_9);
    QuotSetAckGrp_NoQuoteSets_0.insert(LastFragment_9.getString());
    FIX::QuoteSetID QuoteSetID_1("STRING_1672694310");
    noQuoteSets_0_0.set(QuoteSetID_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetID_1.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_1(FIX::UTCTIMESTAMP(17, 15, 29, 10, 52010));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_1.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_0(1633240260);
    noQuoteSets_0_0.set(TotNoAccQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoAccQuotes_0.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_0(1035569609);
    noQuoteSets_0_0.set(TotNoCxldQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoCxldQuotes_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_1(1352189932);
    noQuoteSets_0_0.set(TotNoQuoteEntries_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_1.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_0(2062790292);
    noQuoteSets_0_0.set(TotNoRejQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoRejQuotes_0.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("2991708");
      noQuoteEntries_0_1_0.set(BidForwardPoints_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints_1.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("279326");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints2_1.getString());
      FIX::BidPx BidPx_1;
      BidPx_1.setString("12841632");
      noQuoteEntries_0_1_0.set(BidPx_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidPx_1.getString());
      FIX::BidSize BidSize_1;
      BidSize_1.setString("7075717");
      noQuoteEntries_0_1_0.set(BidSize_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSize_1.getString());
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("8524440");
      noQuoteEntries_0_1_0.set(BidSpotRate_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSpotRate_1.getString());
      FIX::BidYield BidYield_1;
      BidYield_1.setString("56.320000");
      noQuoteEntries_0_1_0.set(BidYield_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidYield_1.getString());
      FIX::BookingType BookingType_8(2);
      noQuoteEntries_0_1_0.set(BookingType_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BookingType_8.getString());
      FIX::Currency Currency_31("JPY");
      noQuoteEntries_0_1_0.set(Currency_31);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(Currency_31.getString());
      FIX::MidPx MidPx_1;
      MidPx_1.setString("2067649");
      noQuoteEntries_0_1_0.set(MidPx_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidPx_1.getString());
      FIX::MidYield MidYield_1;
      MidYield_1.setString("59.750000");
      noQuoteEntries_0_1_0.set(MidYield_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidYield_1.getString());
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("2730359");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints_1.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("3772813");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_1.getString());
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("5252808");
      noQuoteEntries_0_1_0.set(OfferPx_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferPx_1.getString());
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("2362552");
      noQuoteEntries_0_1_0.set(OfferSize_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSize_1.getString());
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("13714364");
      noQuoteEntries_0_1_0.set(OfferSpotRate_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSpotRate_1.getString());
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("42.410000");
      noQuoteEntries_0_1_0.set(OfferYield_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferYield_1.getString());
      FIX::OrdType OrdType_36('E');
      noQuoteEntries_0_1_0.set(OrdType_36);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrdType_36.getString());
      FIX::OrderCapacity OrderCapacity_11('P');
      noQuoteEntries_0_1_0.set(OrderCapacity_11);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderCapacity_11.getString());
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("17879070");
      noQuoteEntries_0_1_0.set(OrderQty2_2);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderQty2_2.getString());
      FIX::OrderRestrictions OrderRestrictions_8("MULTIPLECHARVALUE_B");
      noQuoteEntries_0_1_0.set(OrderRestrictions_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderRestrictions_8.getString());
      FIX::QuoteEntryID QuoteEntryID_4("STRING_1338674040");
      noQuoteEntries_0_1_0.set(QuoteEntryID_4);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryID_4.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_0(1928118665);
      noQuoteEntries_0_1_0.set(QuoteEntryRejectReason_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryRejectReason_0.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_0(13);
      noQuoteEntries_0_1_0.set(QuoteEntryStatus_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryStatus_0.getString());
      FIX::SettlDate SettlDate_21("LOCALMKTDATE_1220160800");
      noQuoteEntries_0_1_0.set(SettlDate_21);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate_21.getString());
      FIX::SettlDate2 SettlDate2_2("LOCALMKTDATE_265943467");
      noQuoteEntries_0_1_0.set(SettlDate2_2);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate2_2.getString());
      FIX::TradingSessionID TradingSessionID_32("STRING_1");
      noQuoteEntries_0_1_0.set(TradingSessionID_32);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionID_32.getString());
      FIX::TradingSessionSubID TradingSessionSubID_32("STRING_1");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_32);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionSubID_32.getString());
      FIX::TransactTime TransactTime_27(FIX::UTCTIMESTAMP(17, 17, 55, 19, 62010));
      noQuoteEntries_0_1_0.set(TransactTime_27);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TransactTime_27.getString());
      FIX::ValidUntilTime ValidUntilTime_2(FIX::UTCTIMESTAMP(14, 49, 21, 4, 32002));
      noQuoteEntries_0_1_0.set(ValidUntilTime_2);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(ValidUntilTime_2.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_57;
        FIX::EncodedLegIssuer EncodedLegIssuer_57("DATA_163964607");
        noLegs_0_0_2_0.set(EncodedLegIssuer_57);
        InstrumentLeg_57.insert(EncodedLegIssuer_57.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_57(2145497985);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_57);
        InstrumentLeg_57.insert(EncodedLegIssuerLen_57.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_57("DATA_341329955");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_57);
        InstrumentLeg_57.insert(EncodedLegSecurityDesc_57.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_57(1535401070);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_57);
        InstrumentLeg_57.insert(EncodedLegSecurityDescLen_57.getString());
        FIX::LegCFICode LegCFICode_57("STRING_475238578");
        noLegs_0_0_2_0.set(LegCFICode_57);
        InstrumentLeg_57.insert(LegCFICode_57.getString());
        FIX::LegContractMultiplier LegContractMultiplier_57;
        LegContractMultiplier_57.setString("16986255");
        noLegs_0_0_2_0.set(LegContractMultiplier_57);
        InstrumentLeg_57.insert(LegContractMultiplier_57.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_57(284564547);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_57);
        InstrumentLeg_57.insert(LegContractMultiplierUnit_57.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_57("MONTHYEAR_115662027");
        noLegs_0_0_2_0.set(LegContractSettlMonth_57);
        InstrumentLeg_57.insert(LegContractSettlMonth_57.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_57("COUNTRY_1803217751");
        noLegs_0_0_2_0.set(LegCountryOfIssue_57);
        InstrumentLeg_57.insert(LegCountryOfIssue_57.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_57("LOCALMKTDATE_1623238587");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_57);
        InstrumentLeg_57.insert(LegCouponPaymentDate_57.getString());
        FIX::LegCouponRate LegCouponRate_57;
        LegCouponRate_57.setString("6.920000");
        noLegs_0_0_2_0.set(LegCouponRate_57);
        InstrumentLeg_57.insert(LegCouponRate_57.getString());
        FIX::LegCreditRating LegCreditRating_57("STRING_837984647");
        noLegs_0_0_2_0.set(LegCreditRating_57);
        InstrumentLeg_57.insert(LegCreditRating_57.getString());
        FIX::LegCurrency LegCurrency_57("GBP");
        noLegs_0_0_2_0.set(LegCurrency_57);
        InstrumentLeg_57.insert(LegCurrency_57.getString());
        FIX::LegDatedDate LegDatedDate_57("LOCALMKTDATE_1505991804");
        noLegs_0_0_2_0.set(LegDatedDate_57);
        InstrumentLeg_57.insert(LegDatedDate_57.getString());
        FIX::LegExerciseStyle LegExerciseStyle_57(804162501);
        noLegs_0_0_2_0.set(LegExerciseStyle_57);
        InstrumentLeg_57.insert(LegExerciseStyle_57.getString());
        FIX::LegFactor LegFactor_57;
        LegFactor_57.setString("17803739");
        noLegs_0_0_2_0.set(LegFactor_57);
        InstrumentLeg_57.insert(LegFactor_57.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_57(2089305605);
        noLegs_0_0_2_0.set(LegFlowScheduleType_57);
        InstrumentLeg_57.insert(LegFlowScheduleType_57.getString());
        FIX::LegInstrRegistry LegInstrRegistry_57("STRING_1889136039");
        noLegs_0_0_2_0.set(LegInstrRegistry_57);
        InstrumentLeg_57.insert(LegInstrRegistry_57.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_57("LOCALMKTDATE_1550194519");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_57);
        InstrumentLeg_57.insert(LegInterestAccrualDate_57.getString());
        FIX::LegIssueDate LegIssueDate_57("LOCALMKTDATE_553068360");
        noLegs_0_0_2_0.set(LegIssueDate_57);
        InstrumentLeg_57.insert(LegIssueDate_57.getString());
        FIX::LegIssuer LegIssuer_57("STRING_2110789172");
        noLegs_0_0_2_0.set(LegIssuer_57);
        InstrumentLeg_57.insert(LegIssuer_57.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_57("STRING_2027586875");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_57);
        InstrumentLeg_57.insert(LegLocaleOfIssue_57.getString());
        FIX::LegMaturityDate LegMaturityDate_57("LOCALMKTDATE_2016758801");
        noLegs_0_0_2_0.set(LegMaturityDate_57);
        InstrumentLeg_57.insert(LegMaturityDate_57.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_57("MONTHYEAR_1631964290");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_57);
        InstrumentLeg_57.insert(LegMaturityMonthYear_57.getString());
        FIX::LegMaturityTime LegMaturityTime_57("TZTIMEONLY_1607505136");
        noLegs_0_0_2_0.set(LegMaturityTime_57);
        InstrumentLeg_57.insert(LegMaturityTime_57.getString());
        FIX::LegOptAttribute LegOptAttribute_57('4');
        noLegs_0_0_2_0.set(LegOptAttribute_57);
        InstrumentLeg_57.insert(LegOptAttribute_57.getString());
        FIX::LegOptionRatio LegOptionRatio_57;
        LegOptionRatio_57.setString("14640030");
        noLegs_0_0_2_0.set(LegOptionRatio_57);
        InstrumentLeg_57.insert(LegOptionRatio_57.getString());
        FIX::LegPool LegPool_57("STRING_1394188366");
        noLegs_0_0_2_0.set(LegPool_57);
        InstrumentLeg_57.insert(LegPool_57.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_57("STRING_2046383451");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_57);
        InstrumentLeg_57.insert(LegPriceUnitOfMeasure_57.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_57;
        LegPriceUnitOfMeasureQty_57.setString("15690777");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_57);
        InstrumentLeg_57.insert(LegPriceUnitOfMeasureQty_57.getString());
        FIX::LegProduct LegProduct_57(1558152974);
        noLegs_0_0_2_0.set(LegProduct_57);
        InstrumentLeg_57.insert(LegProduct_57.getString());
        FIX::LegPutOrCall LegPutOrCall_57(2044397788);
        noLegs_0_0_2_0.set(LegPutOrCall_57);
        InstrumentLeg_57.insert(LegPutOrCall_57.getString());
        FIX::LegRatioQty LegRatioQty_57;
        LegRatioQty_57.setString("19104076");
        noLegs_0_0_2_0.set(LegRatioQty_57);
        InstrumentLeg_57.insert(LegRatioQty_57.getString());
        FIX::LegRedemptionDate LegRedemptionDate_57("LOCALMKTDATE_946070396");
        noLegs_0_0_2_0.set(LegRedemptionDate_57);
        InstrumentLeg_57.insert(LegRedemptionDate_57.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_57("STRING_372152719");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_57);
        InstrumentLeg_57.insert(LegRepoCollateralSecurityType_57.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_57;
        LegRepurchaseRate_57.setString("95.840000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_57);
        InstrumentLeg_57.insert(LegRepurchaseRate_57.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_57(1230634943);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_57);
        InstrumentLeg_57.insert(LegRepurchaseTerm_57.getString());
        FIX::LegSecurityDesc LegSecurityDesc_57("STRING_487814746");
        noLegs_0_0_2_0.set(LegSecurityDesc_57);
        InstrumentLeg_57.insert(LegSecurityDesc_57.getString());
        FIX::LegSecurityExchange LegSecurityExchange_57("EXCHANGE_1117283687");
        noLegs_0_0_2_0.set(LegSecurityExchange_57);
        InstrumentLeg_57.insert(LegSecurityExchange_57.getString());
        FIX::LegSecurityID LegSecurityID_57("STRING_706389882");
        noLegs_0_0_2_0.set(LegSecurityID_57);
        InstrumentLeg_57.insert(LegSecurityID_57.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_57("STRING_384111790");
        noLegs_0_0_2_0.set(LegSecurityIDSource_57);
        InstrumentLeg_57.insert(LegSecurityIDSource_57.getString());
        FIX::LegSecuritySubType LegSecuritySubType_57("STRING_1955268334");
        noLegs_0_0_2_0.set(LegSecuritySubType_57);
        InstrumentLeg_57.insert(LegSecuritySubType_57.getString());
        FIX::LegSecurityType LegSecurityType_57("STRING_1402305622");
        noLegs_0_0_2_0.set(LegSecurityType_57);
        InstrumentLeg_57.insert(LegSecurityType_57.getString());
        FIX::LegSide LegSide_57('5');
        noLegs_0_0_2_0.set(LegSide_57);
        InstrumentLeg_57.insert(LegSide_57.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_57("STRING_1313776490");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_57);
        InstrumentLeg_57.insert(LegStateOrProvinceOfIssue_57.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_57("USD");
        noLegs_0_0_2_0.set(LegStrikeCurrency_57);
        InstrumentLeg_57.insert(LegStrikeCurrency_57.getString());
        FIX::LegStrikePrice LegStrikePrice_57;
        LegStrikePrice_57.setString("12555984");
        noLegs_0_0_2_0.set(LegStrikePrice_57);
        InstrumentLeg_57.insert(LegStrikePrice_57.getString());
        FIX::LegSymbol LegSymbol_57("STRING_1948120515");
        noLegs_0_0_2_0.set(LegSymbol_57);
        InstrumentLeg_57.insert(LegSymbol_57.getString());
        FIX::LegSymbolSfx LegSymbolSfx_57("STRING_1729437085");
        noLegs_0_0_2_0.set(LegSymbolSfx_57);
        InstrumentLeg_57.insert(LegSymbolSfx_57.getString());
        FIX::LegTimeUnit LegTimeUnit_57("STRING_1808666807");
        noLegs_0_0_2_0.set(LegTimeUnit_57);
        InstrumentLeg_57.insert(LegTimeUnit_57.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_57("STRING_1911426039");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_57);
        InstrumentLeg_57.insert(LegUnitOfMeasure_57.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_57;
        LegUnitOfMeasureQty_57.setString("16095403");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_57);
        InstrumentLeg_57.insert(LegUnitOfMeasureQty_57.getString());
        all_values.push_back(InstrumentLeg_57);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_104;
          FIX::LegSecurityAltID LegSecurityAltID_104("STRING_1395906682");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_104);
          LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltID_104.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_104("STRING_1069561801");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_104);
          LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltIDSource_104.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_104);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_33;
      FIX::AttachmentPoint AttachmentPoint_33;
      AttachmentPoint_33.setString("82.750000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_33);
      Instrument_33.insert(AttachmentPoint_33.getString());
      FIX::CFICode CFICode_33("STRING_712426065");
      noQuoteEntries_0_1_0.set(CFICode_33);
      Instrument_33.insert(CFICode_33.getString());
      FIX::CPProgram CPProgram_33(2);
      noQuoteEntries_0_1_0.set(CPProgram_33);
      Instrument_33.insert(CPProgram_33.getString());
      FIX::CPRegType CPRegType_33("STRING_2003008078");
      noQuoteEntries_0_1_0.set(CPRegType_33);
      Instrument_33.insert(CPRegType_33.getString());
      FIX::CapPrice CapPrice_33;
      CapPrice_33.setString("1340201");
      noQuoteEntries_0_1_0.set(CapPrice_33);
      Instrument_33.insert(CapPrice_33.getString());
      FIX::ContractMultiplier ContractMultiplier_33;
      ContractMultiplier_33.setString("18744194");
      noQuoteEntries_0_1_0.set(ContractMultiplier_33);
      Instrument_33.insert(ContractMultiplier_33.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_33(1);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_33);
      Instrument_33.insert(ContractMultiplierUnit_33.getString());
      FIX::ContractSettlMonth ContractSettlMonth_33("MONTHYEAR_2044427804");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_33);
      Instrument_33.insert(ContractSettlMonth_33.getString());
      FIX::CountryOfIssue CountryOfIssue_33("COUNTRY_673006242");
      noQuoteEntries_0_1_0.set(CountryOfIssue_33);
      Instrument_33.insert(CountryOfIssue_33.getString());
      FIX::CouponPaymentDate CouponPaymentDate_33("LOCALMKTDATE_124591290");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_33);
      Instrument_33.insert(CouponPaymentDate_33.getString());
      FIX::CouponRate CouponRate_33;
      CouponRate_33.setString("37.400000");
      noQuoteEntries_0_1_0.set(CouponRate_33);
      Instrument_33.insert(CouponRate_33.getString());
      FIX::CreditRating CreditRating_33("STRING_1903641185");
      noQuoteEntries_0_1_0.set(CreditRating_33);
      Instrument_33.insert(CreditRating_33.getString());
      FIX::DatedDate DatedDate_33("LOCALMKTDATE_612406036");
      noQuoteEntries_0_1_0.set(DatedDate_33);
      Instrument_33.insert(DatedDate_33.getString());
      FIX::DetachmentPoint DetachmentPoint_33;
      DetachmentPoint_33.setString("37.790000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_33);
      Instrument_33.insert(DetachmentPoint_33.getString());
      FIX::EncodedIssuer EncodedIssuer_33("DATA_462547419");
      noQuoteEntries_0_1_0.set(EncodedIssuer_33);
      Instrument_33.insert(EncodedIssuer_33.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_33(996517826);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_33);
      Instrument_33.insert(EncodedIssuerLen_33.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_33("DATA_136078466");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_33);
      Instrument_33.insert(EncodedSecurityDesc_33.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_33(1864853042);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_33);
      Instrument_33.insert(EncodedSecurityDescLen_33.getString());
      FIX::ExerciseStyle ExerciseStyle_33(0);
      noQuoteEntries_0_1_0.set(ExerciseStyle_33);
      Instrument_33.insert(ExerciseStyle_33.getString());
      FIX::Factor Factor_33;
      Factor_33.setString("14498549");
      noQuoteEntries_0_1_0.set(Factor_33);
      Instrument_33.insert(Factor_33.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_33(true);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_33);
      Instrument_33.insert(FlexProductEligibilityIndicator_33.getString());
      FIX::FlexibleIndicator FlexibleIndicator_33(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_33);
      Instrument_33.insert(FlexibleIndicator_33.getString());
      FIX::FloorPrice FloorPrice_33;
      FloorPrice_33.setString("5579697");
      noQuoteEntries_0_1_0.set(FloorPrice_33);
      Instrument_33.insert(FloorPrice_33.getString());
      FIX::FlowScheduleType FlowScheduleType_33(0);
      noQuoteEntries_0_1_0.set(FlowScheduleType_33);
      Instrument_33.insert(FlowScheduleType_33.getString());
      FIX::InstrRegistry InstrRegistry_33("STRING_1304066133");
      noQuoteEntries_0_1_0.set(InstrRegistry_33);
      Instrument_33.insert(InstrRegistry_33.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_33('2');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_33);
      Instrument_33.insert(InstrmtAssignmentMethod_33.getString());
      FIX::InterestAccrualDate InterestAccrualDate_33("LOCALMKTDATE_1488416776");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_33);
      Instrument_33.insert(InterestAccrualDate_33.getString());
      FIX::IssueDate IssueDate_33("LOCALMKTDATE_766122798");
      noQuoteEntries_0_1_0.set(IssueDate_33);
      Instrument_33.insert(IssueDate_33.getString());
      FIX::Issuer Issuer_33("STRING_1897094876");
      noQuoteEntries_0_1_0.set(Issuer_33);
      Instrument_33.insert(Issuer_33.getString());
      FIX::ListMethod ListMethod_33(0);
      noQuoteEntries_0_1_0.set(ListMethod_33);
      Instrument_33.insert(ListMethod_33.getString());
      FIX::LocaleOfIssue LocaleOfIssue_33("STRING_1835684599");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_33);
      Instrument_33.insert(LocaleOfIssue_33.getString());
      FIX::MaturityDate MaturityDate_33("LOCALMKTDATE_1853719504");
      noQuoteEntries_0_1_0.set(MaturityDate_33);
      Instrument_33.insert(MaturityDate_33.getString());
      FIX::MaturityMonthYear MaturityMonthYear_33("MONTHYEAR_1449265875");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_33);
      Instrument_33.insert(MaturityMonthYear_33.getString());
      FIX::MaturityTime MaturityTime_33("TZTIMEONLY_4467471");
      noQuoteEntries_0_1_0.set(MaturityTime_33);
      Instrument_33.insert(MaturityTime_33.getString());
      FIX::MinPriceIncrement MinPriceIncrement_33;
      MinPriceIncrement_33.setString("17092439");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_33);
      Instrument_33.insert(MinPriceIncrement_33.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_33;
      MinPriceIncrementAmount_33.setString("15832860");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_33);
      Instrument_33.insert(MinPriceIncrementAmount_33.getString());
      FIX::NTPositionLimit NTPositionLimit_33(1878886965);
      noQuoteEntries_0_1_0.set(NTPositionLimit_33);
      Instrument_33.insert(NTPositionLimit_33.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_33;
      NotionalPercentageOutstanding_33.setString("25.050000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_33);
      Instrument_33.insert(NotionalPercentageOutstanding_33.getString());
      FIX::OptAttribute OptAttribute_33('1');
      noQuoteEntries_0_1_0.set(OptAttribute_33);
      Instrument_33.insert(OptAttribute_33.getString());
      FIX::OptPayoutAmount OptPayoutAmount_33;
      OptPayoutAmount_33.setString("4044095");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_33);
      Instrument_33.insert(OptPayoutAmount_33.getString());
      FIX::OptPayoutType OptPayoutType_33(3);
      noQuoteEntries_0_1_0.set(OptPayoutType_33);
      Instrument_33.insert(OptPayoutType_33.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_33;
      OriginalNotionalPercentageOutstanding_33.setString("2.570000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_33);
      Instrument_33.insert(OriginalNotionalPercentageOutstanding_33.getString());
      FIX::Pool Pool_33("STRING_160567096");
      noQuoteEntries_0_1_0.set(Pool_33);
      Instrument_33.insert(Pool_33.getString());
      FIX::PositionLimit PositionLimit_33(51196183);
      noQuoteEntries_0_1_0.set(PositionLimit_33);
      Instrument_33.insert(PositionLimit_33.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_33("STRING_INX");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_33);
      Instrument_33.insert(PriceQuoteMethod_33.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_33("STRING_623114516");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_33);
      Instrument_33.insert(PriceUnitOfMeasure_33.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_33;
      PriceUnitOfMeasureQty_33.setString("10477140");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_33);
      Instrument_33.insert(PriceUnitOfMeasureQty_33.getString());
      FIX::Product Product_35(7);
      noQuoteEntries_0_1_0.set(Product_35);
      Instrument_33.insert(Product_35.getString());
      FIX::ProductComplex ProductComplex_33("STRING_340483910");
      noQuoteEntries_0_1_0.set(ProductComplex_33);
      Instrument_33.insert(ProductComplex_33.getString());
      FIX::PutOrCall PutOrCall_33(1);
      noQuoteEntries_0_1_0.set(PutOrCall_33);
      Instrument_33.insert(PutOrCall_33.getString());
      FIX::RedemptionDate RedemptionDate_33("LOCALMKTDATE_457983811");
      noQuoteEntries_0_1_0.set(RedemptionDate_33);
      Instrument_33.insert(RedemptionDate_33.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_33("STRING_116837780");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_33);
      Instrument_33.insert(RepoCollateralSecurityType_33.getString());
      FIX::RepurchaseRate RepurchaseRate_33;
      RepurchaseRate_33.setString("95.380000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_33);
      Instrument_33.insert(RepurchaseRate_33.getString());
      FIX::RepurchaseTerm RepurchaseTerm_33(1015953567);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_33);
      Instrument_33.insert(RepurchaseTerm_33.getString());
      FIX::RestructuringType RestructuringType_33("STRING_MR");
      noQuoteEntries_0_1_0.set(RestructuringType_33);
      Instrument_33.insert(RestructuringType_33.getString());
      FIX::SecurityDesc SecurityDesc_33("STRING_1321795671");
      noQuoteEntries_0_1_0.set(SecurityDesc_33);
      Instrument_33.insert(SecurityDesc_33.getString());
      FIX::SecurityExchange SecurityExchange_33("EXCHANGE_1235106483");
      noQuoteEntries_0_1_0.set(SecurityExchange_33);
      Instrument_33.insert(SecurityExchange_33.getString());
      FIX::SecurityGroup SecurityGroup_33("STRING_1182245293");
      noQuoteEntries_0_1_0.set(SecurityGroup_33);
      Instrument_33.insert(SecurityGroup_33.getString());
      FIX::SecurityID SecurityID_33("STRING_2087918469");
      noQuoteEntries_0_1_0.set(SecurityID_33);
      Instrument_33.insert(SecurityID_33.getString());
      FIX::SecurityIDSource SecurityIDSource_33("STRING_M");
      noQuoteEntries_0_1_0.set(SecurityIDSource_33);
      Instrument_33.insert(SecurityIDSource_33.getString());
      FIX::SecurityStatus SecurityStatus_33("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityStatus_33);
      Instrument_33.insert(SecurityStatus_33.getString());
      FIX::SecuritySubType SecuritySubType_34("STRING_1776119421");
      noQuoteEntries_0_1_0.set(SecuritySubType_34);
      Instrument_33.insert(SecuritySubType_34.getString());
      FIX::SecurityType SecurityType_35("STRING_CMO");
      noQuoteEntries_0_1_0.set(SecurityType_35);
      Instrument_33.insert(SecurityType_35.getString());
      FIX::Seniority Seniority_33("STRING_SD");
      noQuoteEntries_0_1_0.set(Seniority_33);
      Instrument_33.insert(Seniority_33.getString());
      FIX::SettlMethod SettlMethod_33('C');
      noQuoteEntries_0_1_0.set(SettlMethod_33);
      Instrument_33.insert(SettlMethod_33.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_33("STRING_252713854");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_33);
      Instrument_33.insert(SettleOnOpenFlag_33.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_33("STRING_656669692");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_33);
      Instrument_33.insert(StateOrProvinceOfIssue_33.getString());
      FIX::StrikeCurrency StrikeCurrency_33("CHF");
      noQuoteEntries_0_1_0.set(StrikeCurrency_33);
      Instrument_33.insert(StrikeCurrency_33.getString());
      FIX::StrikeMultiplier StrikeMultiplier_33;
      StrikeMultiplier_33.setString("21368998");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_33);
      Instrument_33.insert(StrikeMultiplier_33.getString());
      FIX::StrikePrice StrikePrice_33;
      StrikePrice_33.setString("19163997");
      noQuoteEntries_0_1_0.set(StrikePrice_33);
      Instrument_33.insert(StrikePrice_33.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_33(3);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_33);
      Instrument_33.insert(StrikePriceBoundaryMethod_33.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_33;
      StrikePriceBoundaryPrecision_33.setString("64.660000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_33);
      Instrument_33.insert(StrikePriceBoundaryPrecision_33.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_33(3);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_33);
      Instrument_33.insert(StrikePriceDeterminationMethod_33.getString());
      FIX::StrikeValue StrikeValue_33;
      StrikeValue_33.setString("12043826");
      noQuoteEntries_0_1_0.set(StrikeValue_33);
      Instrument_33.insert(StrikeValue_33.getString());
      FIX::Symbol Symbol_33("STRING_1700190503");
      noQuoteEntries_0_1_0.set(Symbol_33);
      Instrument_33.insert(Symbol_33.getString());
      FIX::SymbolSfx SymbolSfx_33("STRING_CD");
      noQuoteEntries_0_1_0.set(SymbolSfx_33);
      Instrument_33.insert(SymbolSfx_33.getString());
      FIX::TimeUnit TimeUnit_33("STRING_Mo");
      noQuoteEntries_0_1_0.set(TimeUnit_33);
      Instrument_33.insert(TimeUnit_33.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_33(3);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_33);
      Instrument_33.insert(UnderlyingPriceDeterminationMethod_33.getString());
      FIX::UnitOfMeasure UnitOfMeasure_33("STRING_Bcf");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_33);
      Instrument_33.insert(UnitOfMeasure_33.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_33;
      UnitOfMeasureQty_33.setString("5477135");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_33);
      Instrument_33.insert(UnitOfMeasureQty_33.getString());
      FIX::ValuationMethod ValuationMethod_33("STRING_EQTY");
      noQuoteEntries_0_1_0.set(ValuationMethod_33);
      Instrument_33.insert(ValuationMethod_33.getString());
      all_values.push_back(Instrument_33);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_69;
        FIX::ComplexEventCondition ComplexEventCondition_69(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventCondition_69.getString());
        FIX::ComplexEventPrice ComplexEventPrice_69;
        ComplexEventPrice_69.setString("347730");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPrice_69.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_69(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryMethod_69.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_69;
        ComplexEventPriceBoundaryPrecision_69.setString("87.530000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryPrecision_69.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_69(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceTimeType_69.getString());
        FIX::ComplexEventType ComplexEventType_69(8);
        noComplexEvents_0_0_2_0.set(ComplexEventType_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventType_69.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_69;
        ComplexOptPayoutAmount_69.setString("18276735");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexOptPayoutAmount_69.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_69);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_149;
          FIX::ComplexEventEndDate ComplexEventEndDate_149(FIX::UTCTIMESTAMP(4, 3, 54, 16, 22004));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_149);
          ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventEndDate_149.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_149(FIX::UTCTIMESTAMP(9, 15, 16, 4, 62010));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_149);
          ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventStartDate_149.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_149);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_301;
            FIX::ComplexEventEndTime ComplexEventEndTime_301(FIX::UTCTIMEONLY(12, 51, 27));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_301);
            ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventEndTime_301.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_301(FIX::UTCTIMEONLY(18, 37, 8));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_301);
            ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventStartTime_301.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_301);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_302;
            FIX::ComplexEventEndTime ComplexEventEndTime_302(FIX::UTCTIMEONLY(7, 29, 22));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_302);
            ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventEndTime_302.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_302(FIX::UTCTIMEONLY(7, 29, 47));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_302);
            ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventStartTime_302.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_302);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_150;
          FIX::ComplexEventEndDate ComplexEventEndDate_150(FIX::UTCTIMESTAMP(1, 51, 52, 17, 92006));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_150);
          ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventEndDate_150.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_150(FIX::UTCTIMESTAMP(5, 45, 44, 13, 72006));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_150);
          ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventStartDate_150.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_150);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_303;
            FIX::ComplexEventEndTime ComplexEventEndTime_303(FIX::UTCTIMEONLY(18, 19, 35));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_303);
            ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventEndTime_303.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_303(FIX::UTCTIMEONLY(13, 4, 58));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_303);
            ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventStartTime_303.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_303);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_73;
        FIX::EventDate EventDate_73("LOCALMKTDATE_1867876031");
        noEvents_0_0_2_0.set(EventDate_73);
        EvntGrp_NoEvents_73.insert(EventDate_73.getString());
        FIX::EventPx EventPx_73;
        EventPx_73.setString("1778836");
        noEvents_0_0_2_0.set(EventPx_73);
        EvntGrp_NoEvents_73.insert(EventPx_73.getString());
        FIX::EventText EventText_73("STRING_1172983896");
        noEvents_0_0_2_0.set(EventText_73);
        EvntGrp_NoEvents_73.insert(EventText_73.getString());
        FIX::EventTime EventTime_73(FIX::UTCTIMESTAMP(14, 57, 22, 0, 112011));
        noEvents_0_0_2_0.set(EventTime_73);
        EvntGrp_NoEvents_73.insert(EventTime_73.getString());
        FIX::EventType EventType_73(17);
        noEvents_0_0_2_0.set(EventType_73);
        EvntGrp_NoEvents_73.insert(EventType_73.getString());
        all_values.push_back(EvntGrp_NoEvents_73);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_74;
        FIX::EventDate EventDate_74("LOCALMKTDATE_981562679");
        noEvents_0_0_2_1.set(EventDate_74);
        EvntGrp_NoEvents_74.insert(EventDate_74.getString());
        FIX::EventPx EventPx_74;
        EventPx_74.setString("3726234");
        noEvents_0_0_2_1.set(EventPx_74);
        EvntGrp_NoEvents_74.insert(EventPx_74.getString());
        FIX::EventText EventText_74("STRING_873618986");
        noEvents_0_0_2_1.set(EventText_74);
        EvntGrp_NoEvents_74.insert(EventText_74.getString());
        FIX::EventTime EventTime_74(FIX::UTCTIMESTAMP(7, 3, 11, 25, 32005));
        noEvents_0_0_2_1.set(EventTime_74);
        EvntGrp_NoEvents_74.insert(EventTime_74.getString());
        FIX::EventType EventType_74(2);
        noEvents_0_0_2_1.set(EventType_74);
        EvntGrp_NoEvents_74.insert(EventType_74.getString());
        all_values.push_back(EvntGrp_NoEvents_74);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_62;
        FIX::InstrumentPartyID InstrumentPartyID_62("STRING_1192809387");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_62);
        InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyID_62.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_62('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_62);
        InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyIDSource_62.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_62(303067668);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_62);
        InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyRole_62.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_62);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123;
          FIX::InstrumentPartySubID InstrumentPartySubID_123("STRING_709041505");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_123);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123.insert(InstrumentPartySubID_123.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_123(798604133);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_123);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123.insert(InstrumentPartySubIDType_123.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124;
          FIX::InstrumentPartySubID InstrumentPartySubID_124("STRING_907263487");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_124);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124.insert(InstrumentPartySubID_124.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_124(96721299);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_124);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124.insert(InstrumentPartySubIDType_124.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125;
          FIX::InstrumentPartySubID InstrumentPartySubID_125("STRING_518996516");
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubID_125);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125.insert(InstrumentPartySubID_125.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_125(1085147126);
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubIDType_125);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125.insert(InstrumentPartySubIDType_125.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_67;
        FIX::SecurityAltID SecurityAltID_67("STRING_734124391");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_67);
        SecAltIDGrp_NoSecurityAltID_67.insert(SecurityAltID_67.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_67("STRING_18238293");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_67);
        SecAltIDGrp_NoSecurityAltID_67.insert(SecurityAltIDSource_67.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_67);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_66;
      FIX::SecurityXML SecurityXML_67("XMLDATA_1760699472");
      noQuoteEntries_0_1_0.set(SecurityXML_67);
      FIX::SecurityXMLLen SecurityXMLLen_33(1551101394);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_33);
      FIX::SecurityXMLSchema SecurityXMLSchema_33("STRING_1511615325");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_33);
      SecurityXML_66.insert(SecurityXMLSchema_33.getString());
      all_values.push_back(SecurityXML_66);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_54;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_54("DATA_878529830");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuer_54.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_54(1620511079);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuerLen_54.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_54("DATA_2001289302");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDesc_54.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_54(1860092510);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDescLen_54.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_54;
    UnderlyingAdjustedQuantity_54.setString("19931345");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_54);
    UnderlyingInstrument_54.insert(UnderlyingAdjustedQuantity_54.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_54;
    UnderlyingAllocationPercent_54.setString("46.400000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_54);
    UnderlyingInstrument_54.insert(UnderlyingAllocationPercent_54.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_54;
    UnderlyingAttachmentPoint_54.setString("93.690000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingAttachmentPoint_54.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_54("STRING_1139181793");
    noQuoteSets_0_0.set(UnderlyingCFICode_54);
    UnderlyingInstrument_54.insert(UnderlyingCFICode_54.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_54("STRING_1214569264");
    noQuoteSets_0_0.set(UnderlyingCPProgram_54);
    UnderlyingInstrument_54.insert(UnderlyingCPProgram_54.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_54("STRING_261589333");
    noQuoteSets_0_0.set(UnderlyingCPRegType_54);
    UnderlyingInstrument_54.insert(UnderlyingCPRegType_54.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_54;
    UnderlyingCapValue_54.setString("8295332");
    noQuoteSets_0_0.set(UnderlyingCapValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCapValue_54.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_54;
    UnderlyingCashAmount_54.setString("12254766");
    noQuoteSets_0_0.set(UnderlyingCashAmount_54);
    UnderlyingInstrument_54.insert(UnderlyingCashAmount_54.getString());
    FIX::UnderlyingCashType UnderlyingCashType_54("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_54);
    UnderlyingInstrument_54.insert(UnderlyingCashType_54.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_54;
    UnderlyingContractMultiplier_54.setString("18919680");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplier_54.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_54(223090651);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplierUnit_54.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_54("COUNTRY_1396970282");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingCountryOfIssue_54.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_54("LOCALMKTDATE_963911511");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponPaymentDate_54.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_54;
    UnderlyingCouponRate_54.setString("83.200000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponRate_54.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_54("STRING_1143048071");
    noQuoteSets_0_0.set(UnderlyingCreditRating_54);
    UnderlyingInstrument_54.insert(UnderlyingCreditRating_54.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_54("EUR");
    noQuoteSets_0_0.set(UnderlyingCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrency_54.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_54;
    UnderlyingCurrentValue_54.setString("20503115");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrentValue_54.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_54;
    UnderlyingDetachmentPoint_54.setString("43.160000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingDetachmentPoint_54.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_54;
    UnderlyingDirtyPrice_54.setString("18437589");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingDirtyPrice_54.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_54;
    UnderlyingEndPrice_54.setString("9879750");
    noQuoteSets_0_0.set(UnderlyingEndPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingEndPrice_54.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_54;
    UnderlyingEndValue_54.setString("8918958");
    noQuoteSets_0_0.set(UnderlyingEndValue_54);
    UnderlyingInstrument_54.insert(UnderlyingEndValue_54.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_54(430399713);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_54);
    UnderlyingInstrument_54.insert(UnderlyingExerciseStyle_54.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_54;
    UnderlyingFXRate_54.setString("10062133");
    noQuoteSets_0_0.set(UnderlyingFXRate_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRate_54.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_54('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRateCalc_54.getString());
    FIX::UnderlyingFactor UnderlyingFactor_54;
    UnderlyingFactor_54.setString("19815011");
    noQuoteSets_0_0.set(UnderlyingFactor_54);
    UnderlyingInstrument_54.insert(UnderlyingFactor_54.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_54(370345008);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_54);
    UnderlyingInstrument_54.insert(UnderlyingFlowScheduleType_54.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_54("STRING_1383641518");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_54);
    UnderlyingInstrument_54.insert(UnderlyingInstrRegistry_54.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_54("LOCALMKTDATE_1454528538");
    noQuoteSets_0_0.set(UnderlyingIssueDate_54);
    UnderlyingInstrument_54.insert(UnderlyingIssueDate_54.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_54("STRING_224150662");
    noQuoteSets_0_0.set(UnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(UnderlyingIssuer_54.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_54("STRING_1096250380");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingLocaleOfIssue_54.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_54("LOCALMKTDATE_1300179396");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityDate_54.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_54("MONTHYEAR_951575302");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityMonthYear_54.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_54("TZTIMEONLY_1960589750");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityTime_54.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_54;
    UnderlyingNotionalPercentageOutstanding_54.setString("75.410000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_54('1');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_54);
    UnderlyingInstrument_54.insert(UnderlyingOptAttribute_54.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_54;
    UnderlyingOriginalNotionalPercentageOutstanding_54.setString("54.350000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingOriginalNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_54("STRING_1121410759");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasure_54.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_54;
    UnderlyingPriceUnitOfMeasureQty_54.setString("12441375");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasureQty_54.getString());
    FIX::UnderlyingProduct UnderlyingProduct_54(278856329);
    noQuoteSets_0_0.set(UnderlyingProduct_54);
    UnderlyingInstrument_54.insert(UnderlyingProduct_54.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_54(865895210);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_54);
    UnderlyingInstrument_54.insert(UnderlyingPutOrCall_54.getString());
    FIX::UnderlyingPx UnderlyingPx_54;
    UnderlyingPx_54.setString("14672281");
    noQuoteSets_0_0.set(UnderlyingPx_54);
    UnderlyingInstrument_54.insert(UnderlyingPx_54.getString());
    FIX::UnderlyingQty UnderlyingQty_54;
    UnderlyingQty_54.setString("16758266");
    noQuoteSets_0_0.set(UnderlyingQty_54);
    UnderlyingInstrument_54.insert(UnderlyingQty_54.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_54("LOCALMKTDATE_1829806721");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_54);
    UnderlyingInstrument_54.insert(UnderlyingRedemptionDate_54.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_54("STRING_1993386508");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingRepoCollateralSecurityType_54.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_54;
    UnderlyingRepurchaseRate_54.setString("10.350000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseRate_54.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_54(1355276089);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseTerm_54.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_54("STRING_1170665313");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_54);
    UnderlyingInstrument_54.insert(UnderlyingRestructuringType_54.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_54("STRING_574218946");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityDesc_54.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_54("EXCHANGE_977466757");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityExchange_54.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_54("STRING_866940634");
    noQuoteSets_0_0.set(UnderlyingSecurityID_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityID_54.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_54("STRING_1562193983");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityIDSource_54.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_54("STRING_1869362621");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecuritySubType_54.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_54("STRING_1297340347");
    noQuoteSets_0_0.set(UnderlyingSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityType_54.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_54("STRING_420923666");
    noQuoteSets_0_0.set(UnderlyingSeniority_54);
    UnderlyingInstrument_54.insert(UnderlyingSeniority_54.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_54("STRING_226990661");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlMethod_54.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_54(5);
    noQuoteSets_0_0.set(UnderlyingSettlementType_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlementType_54.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_54;
    UnderlyingStartValue_54.setString("7912686");
    noQuoteSets_0_0.set(UnderlyingStartValue_54);
    UnderlyingInstrument_54.insert(UnderlyingStartValue_54.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_54("STRING_1610632179");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingStateOrProvinceOfIssue_54.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_54("USD");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikeCurrency_54.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_54;
    UnderlyingStrikePrice_54.setString("5593989");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikePrice_54.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_54("STRING_1738582093");
    noQuoteSets_0_0.set(UnderlyingSymbol_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbol_54.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_54("STRING_1966994638");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbolSfx_54.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_54("STRING_372505014");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingTimeUnit_54.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_54("STRING_2030459634");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasure_54.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_54;
    UnderlyingUnitOfMeasureQty_54.setString("19856555");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasureQty_54.getString());
    all_values.push_back(UnderlyingInstrument_54);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_107;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_107("STRING_1004386745");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_107);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltID_107.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_107("STRING_1082309445");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_107);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltIDSource_107.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_108;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_108("STRING_726056778");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_108);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltID_108.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_108("STRING_1870281955");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_108);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltIDSource_108.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_106;
      FIX::UnderlyingStipType UnderlyingStipType_106("STRING_254399742");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipType_106.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_106("STRING_1552605028");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipValue_106.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_106);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_106;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_106("STRING_925790777");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyID_106.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_106('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyIDSource_106.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_106(1418622158);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyRole_106.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_106);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_203("STRING_1737864227");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_203);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203.insert(UnderlyingInstrumentPartySubID_203.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_203(138079145);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_203);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203.insert(UnderlyingInstrumentPartySubIDType_203.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_107;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_107("STRING_914720058");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyID_107.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_107('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyIDSource_107.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_107(1435419492);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyRole_107.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_107);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_204("STRING_1686733861");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_204);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204.insert(UnderlyingInstrumentPartySubID_204.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_204(419293651);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_204);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204.insert(UnderlyingInstrumentPartySubIDType_204.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_205("STRING_2126912398");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_205);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205.insert(UnderlyingInstrumentPartySubID_205.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_205(1149882392);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_205);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205.insert(UnderlyingInstrumentPartySubIDType_205.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_206("STRING_857696348");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_206);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206.insert(UnderlyingInstrumentPartySubID_206.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_206(994848086);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_206);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206.insert(UnderlyingInstrumentPartySubIDType_206.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_108;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_108("STRING_1709281304");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyID_108.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_108('4');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyIDSource_108.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_108(814359077);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_108);
      UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyRole_108.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_108);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_207("STRING_331770779");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_207);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207.insert(UnderlyingInstrumentPartySubID_207.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_207(652530986);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_207);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207.insert(UnderlyingInstrumentPartySubIDType_207.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_208("STRING_381503119");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_208);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208.insert(UnderlyingInstrumentPartySubID_208.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_208(1336157524);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_208);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208.insert(UnderlyingInstrumentPartySubIDType_208.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_209("STRING_1734840431");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_209);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209.insert(UnderlyingInstrumentPartySubID_209.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_209(1107559898);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_209);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209.insert(UnderlyingInstrumentPartySubIDType_209.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
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
    FIX::QuoteSetID QuoteSetID_2("STRING_2136894417");
    noQuoteSets_0_1.set(QuoteSetID_2);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetID_2.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_2(FIX::UTCTIMESTAMP(11, 54, 29, 16, 102014));
    noQuoteSets_0_1.set(QuoteSetValidUntilTime_2);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetValidUntilTime_2.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_1(814855259);
    noQuoteSets_0_1.set(TotNoAccQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoAccQuotes_1.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_1(1794068918);
    noQuoteSets_0_1.set(TotNoCxldQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoCxldQuotes_1.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_2(407512902);
    noQuoteSets_0_1.set(TotNoQuoteEntries_2);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoQuoteEntries_2.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_1(127114811);
    noQuoteSets_0_1.set(TotNoRejQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoRejQuotes_1.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_1);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_2;
      BidForwardPoints_2.setString("17431566");
      noQuoteEntries_1_1_0.set(BidForwardPoints_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints_2.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_2;
      BidForwardPoints2_2.setString("18138486");
      noQuoteEntries_1_1_0.set(BidForwardPoints2_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints2_2.getString());
      FIX::BidPx BidPx_2;
      BidPx_2.setString("15012984");
      noQuoteEntries_1_1_0.set(BidPx_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidPx_2.getString());
      FIX::BidSize BidSize_2;
      BidSize_2.setString("17225853");
      noQuoteEntries_1_1_0.set(BidSize_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSize_2.getString());
      FIX::BidSpotRate BidSpotRate_2;
      BidSpotRate_2.setString("8162474");
      noQuoteEntries_1_1_0.set(BidSpotRate_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSpotRate_2.getString());
      FIX::BidYield BidYield_2;
      BidYield_2.setString("11.130000");
      noQuoteEntries_1_1_0.set(BidYield_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidYield_2.getString());
      FIX::BookingType BookingType_9(0);
      noQuoteEntries_1_1_0.set(BookingType_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BookingType_9.getString());
      FIX::Currency Currency_32("GBP");
      noQuoteEntries_1_1_0.set(Currency_32);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(Currency_32.getString());
      FIX::MidPx MidPx_2;
      MidPx_2.setString("13843088");
      noQuoteEntries_1_1_0.set(MidPx_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidPx_2.getString());
      FIX::MidYield MidYield_2;
      MidYield_2.setString("77.440000");
      noQuoteEntries_1_1_0.set(MidYield_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidYield_2.getString());
      FIX::OfferForwardPoints OfferForwardPoints_2;
      OfferForwardPoints_2.setString("9920766");
      noQuoteEntries_1_1_0.set(OfferForwardPoints_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints_2.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_2;
      OfferForwardPoints2_2.setString("20368398");
      noQuoteEntries_1_1_0.set(OfferForwardPoints2_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_2.getString());
      FIX::OfferPx OfferPx_2;
      OfferPx_2.setString("6938508");
      noQuoteEntries_1_1_0.set(OfferPx_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferPx_2.getString());
      FIX::OfferSize OfferSize_2;
      OfferSize_2.setString("1807505");
      noQuoteEntries_1_1_0.set(OfferSize_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSize_2.getString());
      FIX::OfferSpotRate OfferSpotRate_2;
      OfferSpotRate_2.setString("16241966");
      noQuoteEntries_1_1_0.set(OfferSpotRate_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSpotRate_2.getString());
      FIX::OfferYield OfferYield_2;
      OfferYield_2.setString("7.610000");
      noQuoteEntries_1_1_0.set(OfferYield_2);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferYield_2.getString());
      FIX::OrdType OrdType_37('1');
      noQuoteEntries_1_1_0.set(OrdType_37);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrdType_37.getString());
      FIX::OrderCapacity OrderCapacity_12('W');
      noQuoteEntries_1_1_0.set(OrderCapacity_12);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderCapacity_12.getString());
      FIX::OrderQty2 OrderQty2_3;
      OrderQty2_3.setString("10158867");
      noQuoteEntries_1_1_0.set(OrderQty2_3);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderQty2_3.getString());
      FIX::OrderRestrictions OrderRestrictions_9("MULTIPLECHARVALUE_9");
      noQuoteEntries_1_1_0.set(OrderRestrictions_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderRestrictions_9.getString());
      FIX::QuoteEntryID QuoteEntryID_5("STRING_1850975046");
      noQuoteEntries_1_1_0.set(QuoteEntryID_5);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryID_5.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_1(1156153522);
      noQuoteEntries_1_1_0.set(QuoteEntryRejectReason_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryRejectReason_1.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_1(7);
      noQuoteEntries_1_1_0.set(QuoteEntryStatus_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryStatus_1.getString());
      FIX::SettlDate SettlDate_22("LOCALMKTDATE_1359481171");
      noQuoteEntries_1_1_0.set(SettlDate_22);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate_22.getString());
      FIX::SettlDate2 SettlDate2_3("LOCALMKTDATE_648946366");
      noQuoteEntries_1_1_0.set(SettlDate2_3);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate2_3.getString());
      FIX::TradingSessionID TradingSessionID_33("STRING_6");
      noQuoteEntries_1_1_0.set(TradingSessionID_33);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionID_33.getString());
      FIX::TradingSessionSubID TradingSessionSubID_33("STRING_3");
      noQuoteEntries_1_1_0.set(TradingSessionSubID_33);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionSubID_33.getString());
      FIX::TransactTime TransactTime_28(FIX::UTCTIMESTAMP(11, 43, 48, 23, 22015));
      noQuoteEntries_1_1_0.set(TransactTime_28);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TransactTime_28.getString());
      FIX::ValidUntilTime ValidUntilTime_3(FIX::UTCTIMESTAMP(2, 33, 34, 1, 72000));
      noQuoteEntries_1_1_0.set(ValidUntilTime_3);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(ValidUntilTime_3.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_1);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_58;
        FIX::EncodedLegIssuer EncodedLegIssuer_58("DATA_2070848917");
        noLegs_1_0_2_0.set(EncodedLegIssuer_58);
        InstrumentLeg_58.insert(EncodedLegIssuer_58.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_58(1442117181);
        noLegs_1_0_2_0.set(EncodedLegIssuerLen_58);
        InstrumentLeg_58.insert(EncodedLegIssuerLen_58.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_58("DATA_1339046588");
        noLegs_1_0_2_0.set(EncodedLegSecurityDesc_58);
        InstrumentLeg_58.insert(EncodedLegSecurityDesc_58.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_58(1547561932);
        noLegs_1_0_2_0.set(EncodedLegSecurityDescLen_58);
        InstrumentLeg_58.insert(EncodedLegSecurityDescLen_58.getString());
        FIX::LegCFICode LegCFICode_58("STRING_1096044295");
        noLegs_1_0_2_0.set(LegCFICode_58);
        InstrumentLeg_58.insert(LegCFICode_58.getString());
        FIX::LegContractMultiplier LegContractMultiplier_58;
        LegContractMultiplier_58.setString("4312693");
        noLegs_1_0_2_0.set(LegContractMultiplier_58);
        InstrumentLeg_58.insert(LegContractMultiplier_58.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_58(1013685715);
        noLegs_1_0_2_0.set(LegContractMultiplierUnit_58);
        InstrumentLeg_58.insert(LegContractMultiplierUnit_58.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_58("MONTHYEAR_2111931048");
        noLegs_1_0_2_0.set(LegContractSettlMonth_58);
        InstrumentLeg_58.insert(LegContractSettlMonth_58.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_58("COUNTRY_2135052936");
        noLegs_1_0_2_0.set(LegCountryOfIssue_58);
        InstrumentLeg_58.insert(LegCountryOfIssue_58.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_58("LOCALMKTDATE_717177113");
        noLegs_1_0_2_0.set(LegCouponPaymentDate_58);
        InstrumentLeg_58.insert(LegCouponPaymentDate_58.getString());
        FIX::LegCouponRate LegCouponRate_58;
        LegCouponRate_58.setString("9.230000");
        noLegs_1_0_2_0.set(LegCouponRate_58);
        InstrumentLeg_58.insert(LegCouponRate_58.getString());
        FIX::LegCreditRating LegCreditRating_58("STRING_768343924");
        noLegs_1_0_2_0.set(LegCreditRating_58);
        InstrumentLeg_58.insert(LegCreditRating_58.getString());
        FIX::LegCurrency LegCurrency_58("EUR");
        noLegs_1_0_2_0.set(LegCurrency_58);
        InstrumentLeg_58.insert(LegCurrency_58.getString());
        FIX::LegDatedDate LegDatedDate_58("LOCALMKTDATE_216490171");
        noLegs_1_0_2_0.set(LegDatedDate_58);
        InstrumentLeg_58.insert(LegDatedDate_58.getString());
        FIX::LegExerciseStyle LegExerciseStyle_58(935241077);
        noLegs_1_0_2_0.set(LegExerciseStyle_58);
        InstrumentLeg_58.insert(LegExerciseStyle_58.getString());
        FIX::LegFactor LegFactor_58;
        LegFactor_58.setString("6785229");
        noLegs_1_0_2_0.set(LegFactor_58);
        InstrumentLeg_58.insert(LegFactor_58.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_58(1939234878);
        noLegs_1_0_2_0.set(LegFlowScheduleType_58);
        InstrumentLeg_58.insert(LegFlowScheduleType_58.getString());
        FIX::LegInstrRegistry LegInstrRegistry_58("STRING_875828633");
        noLegs_1_0_2_0.set(LegInstrRegistry_58);
        InstrumentLeg_58.insert(LegInstrRegistry_58.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_58("LOCALMKTDATE_1330655158");
        noLegs_1_0_2_0.set(LegInterestAccrualDate_58);
        InstrumentLeg_58.insert(LegInterestAccrualDate_58.getString());
        FIX::LegIssueDate LegIssueDate_58("LOCALMKTDATE_1180860962");
        noLegs_1_0_2_0.set(LegIssueDate_58);
        InstrumentLeg_58.insert(LegIssueDate_58.getString());
        FIX::LegIssuer LegIssuer_58("STRING_170230954");
        noLegs_1_0_2_0.set(LegIssuer_58);
        InstrumentLeg_58.insert(LegIssuer_58.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_58("STRING_1557889136");
        noLegs_1_0_2_0.set(LegLocaleOfIssue_58);
        InstrumentLeg_58.insert(LegLocaleOfIssue_58.getString());
        FIX::LegMaturityDate LegMaturityDate_58("LOCALMKTDATE_1238734462");
        noLegs_1_0_2_0.set(LegMaturityDate_58);
        InstrumentLeg_58.insert(LegMaturityDate_58.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_58("MONTHYEAR_1823628036");
        noLegs_1_0_2_0.set(LegMaturityMonthYear_58);
        InstrumentLeg_58.insert(LegMaturityMonthYear_58.getString());
        FIX::LegMaturityTime LegMaturityTime_58("TZTIMEONLY_207589281");
        noLegs_1_0_2_0.set(LegMaturityTime_58);
        InstrumentLeg_58.insert(LegMaturityTime_58.getString());
        FIX::LegOptAttribute LegOptAttribute_58('1');
        noLegs_1_0_2_0.set(LegOptAttribute_58);
        InstrumentLeg_58.insert(LegOptAttribute_58.getString());
        FIX::LegOptionRatio LegOptionRatio_58;
        LegOptionRatio_58.setString("19898473");
        noLegs_1_0_2_0.set(LegOptionRatio_58);
        InstrumentLeg_58.insert(LegOptionRatio_58.getString());
        FIX::LegPool LegPool_58("STRING_241598320");
        noLegs_1_0_2_0.set(LegPool_58);
        InstrumentLeg_58.insert(LegPool_58.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_58("STRING_275435706");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasure_58);
        InstrumentLeg_58.insert(LegPriceUnitOfMeasure_58.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_58;
        LegPriceUnitOfMeasureQty_58.setString("10006597");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasureQty_58);
        InstrumentLeg_58.insert(LegPriceUnitOfMeasureQty_58.getString());
        FIX::LegProduct LegProduct_58(164963589);
        noLegs_1_0_2_0.set(LegProduct_58);
        InstrumentLeg_58.insert(LegProduct_58.getString());
        FIX::LegPutOrCall LegPutOrCall_58(1717552888);
        noLegs_1_0_2_0.set(LegPutOrCall_58);
        InstrumentLeg_58.insert(LegPutOrCall_58.getString());
        FIX::LegRatioQty LegRatioQty_58;
        LegRatioQty_58.setString("1922226");
        noLegs_1_0_2_0.set(LegRatioQty_58);
        InstrumentLeg_58.insert(LegRatioQty_58.getString());
        FIX::LegRedemptionDate LegRedemptionDate_58("LOCALMKTDATE_1712525521");
        noLegs_1_0_2_0.set(LegRedemptionDate_58);
        InstrumentLeg_58.insert(LegRedemptionDate_58.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_58("STRING_666113535");
        noLegs_1_0_2_0.set(LegRepoCollateralSecurityType_58);
        InstrumentLeg_58.insert(LegRepoCollateralSecurityType_58.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_58;
        LegRepurchaseRate_58.setString("20.280000");
        noLegs_1_0_2_0.set(LegRepurchaseRate_58);
        InstrumentLeg_58.insert(LegRepurchaseRate_58.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_58(578727589);
        noLegs_1_0_2_0.set(LegRepurchaseTerm_58);
        InstrumentLeg_58.insert(LegRepurchaseTerm_58.getString());
        FIX::LegSecurityDesc LegSecurityDesc_58("STRING_630560935");
        noLegs_1_0_2_0.set(LegSecurityDesc_58);
        InstrumentLeg_58.insert(LegSecurityDesc_58.getString());
        FIX::LegSecurityExchange LegSecurityExchange_58("EXCHANGE_611061316");
        noLegs_1_0_2_0.set(LegSecurityExchange_58);
        InstrumentLeg_58.insert(LegSecurityExchange_58.getString());
        FIX::LegSecurityID LegSecurityID_58("STRING_1295904702");
        noLegs_1_0_2_0.set(LegSecurityID_58);
        InstrumentLeg_58.insert(LegSecurityID_58.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_58("STRING_1751161858");
        noLegs_1_0_2_0.set(LegSecurityIDSource_58);
        InstrumentLeg_58.insert(LegSecurityIDSource_58.getString());
        FIX::LegSecuritySubType LegSecuritySubType_58("STRING_1379405240");
        noLegs_1_0_2_0.set(LegSecuritySubType_58);
        InstrumentLeg_58.insert(LegSecuritySubType_58.getString());
        FIX::LegSecurityType LegSecurityType_58("STRING_1225079339");
        noLegs_1_0_2_0.set(LegSecurityType_58);
        InstrumentLeg_58.insert(LegSecurityType_58.getString());
        FIX::LegSide LegSide_58('1');
        noLegs_1_0_2_0.set(LegSide_58);
        InstrumentLeg_58.insert(LegSide_58.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_58("STRING_1595895412");
        noLegs_1_0_2_0.set(LegStateOrProvinceOfIssue_58);
        InstrumentLeg_58.insert(LegStateOrProvinceOfIssue_58.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_58("GBP");
        noLegs_1_0_2_0.set(LegStrikeCurrency_58);
        InstrumentLeg_58.insert(LegStrikeCurrency_58.getString());
        FIX::LegStrikePrice LegStrikePrice_58;
        LegStrikePrice_58.setString("13876466");
        noLegs_1_0_2_0.set(LegStrikePrice_58);
        InstrumentLeg_58.insert(LegStrikePrice_58.getString());
        FIX::LegSymbol LegSymbol_58("STRING_888665401");
        noLegs_1_0_2_0.set(LegSymbol_58);
        InstrumentLeg_58.insert(LegSymbol_58.getString());
        FIX::LegSymbolSfx LegSymbolSfx_58("STRING_1234919921");
        noLegs_1_0_2_0.set(LegSymbolSfx_58);
        InstrumentLeg_58.insert(LegSymbolSfx_58.getString());
        FIX::LegTimeUnit LegTimeUnit_58("STRING_421023956");
        noLegs_1_0_2_0.set(LegTimeUnit_58);
        InstrumentLeg_58.insert(LegTimeUnit_58.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_58("STRING_1058896355");
        noLegs_1_0_2_0.set(LegUnitOfMeasure_58);
        InstrumentLeg_58.insert(LegUnitOfMeasure_58.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_58;
        LegUnitOfMeasureQty_58.setString("6453254");
        noLegs_1_0_2_0.set(LegUnitOfMeasureQty_58);
        InstrumentLeg_58.insert(LegUnitOfMeasureQty_58.getString());
        all_values.push_back(InstrumentLeg_58);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_105;
          FIX::LegSecurityAltID LegSecurityAltID_105("STRING_735040744");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltID_105);
          LegSecAltIDGrp_NoLegSecurityAltID_105.insert(LegSecurityAltID_105.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_105("STRING_852914690");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltIDSource_105);
          LegSecAltIDGrp_NoLegSecurityAltID_105.insert(LegSecurityAltIDSource_105.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_105);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_106;
          FIX::LegSecurityAltID LegSecurityAltID_106("STRING_1186927807");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltID_106);
          LegSecAltIDGrp_NoLegSecurityAltID_106.insert(LegSecurityAltID_106.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_106("STRING_577404473");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltIDSource_106);
          LegSecAltIDGrp_NoLegSecurityAltID_106.insert(LegSecurityAltIDSource_106.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_106);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_59;
        FIX::EncodedLegIssuer EncodedLegIssuer_59("DATA_1094513010");
        noLegs_1_0_2_1.set(EncodedLegIssuer_59);
        InstrumentLeg_59.insert(EncodedLegIssuer_59.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_59(1462363514);
        noLegs_1_0_2_1.set(EncodedLegIssuerLen_59);
        InstrumentLeg_59.insert(EncodedLegIssuerLen_59.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_59("DATA_1578064229");
        noLegs_1_0_2_1.set(EncodedLegSecurityDesc_59);
        InstrumentLeg_59.insert(EncodedLegSecurityDesc_59.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_59(1259476600);
        noLegs_1_0_2_1.set(EncodedLegSecurityDescLen_59);
        InstrumentLeg_59.insert(EncodedLegSecurityDescLen_59.getString());
        FIX::LegCFICode LegCFICode_59("STRING_1032432754");
        noLegs_1_0_2_1.set(LegCFICode_59);
        InstrumentLeg_59.insert(LegCFICode_59.getString());
        FIX::LegContractMultiplier LegContractMultiplier_59;
        LegContractMultiplier_59.setString("17702869");
        noLegs_1_0_2_1.set(LegContractMultiplier_59);
        InstrumentLeg_59.insert(LegContractMultiplier_59.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_59(824518473);
        noLegs_1_0_2_1.set(LegContractMultiplierUnit_59);
        InstrumentLeg_59.insert(LegContractMultiplierUnit_59.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_59("MONTHYEAR_1698546289");
        noLegs_1_0_2_1.set(LegContractSettlMonth_59);
        InstrumentLeg_59.insert(LegContractSettlMonth_59.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_59("COUNTRY_246295306");
        noLegs_1_0_2_1.set(LegCountryOfIssue_59);
        InstrumentLeg_59.insert(LegCountryOfIssue_59.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_59("LOCALMKTDATE_1403246062");
        noLegs_1_0_2_1.set(LegCouponPaymentDate_59);
        InstrumentLeg_59.insert(LegCouponPaymentDate_59.getString());
        FIX::LegCouponRate LegCouponRate_59;
        LegCouponRate_59.setString("35.760000");
        noLegs_1_0_2_1.set(LegCouponRate_59);
        InstrumentLeg_59.insert(LegCouponRate_59.getString());
        FIX::LegCreditRating LegCreditRating_59("STRING_857356622");
        noLegs_1_0_2_1.set(LegCreditRating_59);
        InstrumentLeg_59.insert(LegCreditRating_59.getString());
        FIX::LegCurrency LegCurrency_59("CAN");
        noLegs_1_0_2_1.set(LegCurrency_59);
        InstrumentLeg_59.insert(LegCurrency_59.getString());
        FIX::LegDatedDate LegDatedDate_59("LOCALMKTDATE_89278215");
        noLegs_1_0_2_1.set(LegDatedDate_59);
        InstrumentLeg_59.insert(LegDatedDate_59.getString());
        FIX::LegExerciseStyle LegExerciseStyle_59(1776746456);
        noLegs_1_0_2_1.set(LegExerciseStyle_59);
        InstrumentLeg_59.insert(LegExerciseStyle_59.getString());
        FIX::LegFactor LegFactor_59;
        LegFactor_59.setString("11585272");
        noLegs_1_0_2_1.set(LegFactor_59);
        InstrumentLeg_59.insert(LegFactor_59.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_59(1685173627);
        noLegs_1_0_2_1.set(LegFlowScheduleType_59);
        InstrumentLeg_59.insert(LegFlowScheduleType_59.getString());
        FIX::LegInstrRegistry LegInstrRegistry_59("STRING_1789583224");
        noLegs_1_0_2_1.set(LegInstrRegistry_59);
        InstrumentLeg_59.insert(LegInstrRegistry_59.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_59("LOCALMKTDATE_1062792049");
        noLegs_1_0_2_1.set(LegInterestAccrualDate_59);
        InstrumentLeg_59.insert(LegInterestAccrualDate_59.getString());
        FIX::LegIssueDate LegIssueDate_59("LOCALMKTDATE_925336621");
        noLegs_1_0_2_1.set(LegIssueDate_59);
        InstrumentLeg_59.insert(LegIssueDate_59.getString());
        FIX::LegIssuer LegIssuer_59("STRING_530764978");
        noLegs_1_0_2_1.set(LegIssuer_59);
        InstrumentLeg_59.insert(LegIssuer_59.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_59("STRING_150228322");
        noLegs_1_0_2_1.set(LegLocaleOfIssue_59);
        InstrumentLeg_59.insert(LegLocaleOfIssue_59.getString());
        FIX::LegMaturityDate LegMaturityDate_59("LOCALMKTDATE_1346360578");
        noLegs_1_0_2_1.set(LegMaturityDate_59);
        InstrumentLeg_59.insert(LegMaturityDate_59.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_59("MONTHYEAR_1589661333");
        noLegs_1_0_2_1.set(LegMaturityMonthYear_59);
        InstrumentLeg_59.insert(LegMaturityMonthYear_59.getString());
        FIX::LegMaturityTime LegMaturityTime_59("TZTIMEONLY_795553731");
        noLegs_1_0_2_1.set(LegMaturityTime_59);
        InstrumentLeg_59.insert(LegMaturityTime_59.getString());
        FIX::LegOptAttribute LegOptAttribute_59('8');
        noLegs_1_0_2_1.set(LegOptAttribute_59);
        InstrumentLeg_59.insert(LegOptAttribute_59.getString());
        FIX::LegOptionRatio LegOptionRatio_59;
        LegOptionRatio_59.setString("1772184");
        noLegs_1_0_2_1.set(LegOptionRatio_59);
        InstrumentLeg_59.insert(LegOptionRatio_59.getString());
        FIX::LegPool LegPool_59("STRING_1648468422");
        noLegs_1_0_2_1.set(LegPool_59);
        InstrumentLeg_59.insert(LegPool_59.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_59("STRING_2045563156");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasure_59);
        InstrumentLeg_59.insert(LegPriceUnitOfMeasure_59.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_59;
        LegPriceUnitOfMeasureQty_59.setString("7546229");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasureQty_59);
        InstrumentLeg_59.insert(LegPriceUnitOfMeasureQty_59.getString());
        FIX::LegProduct LegProduct_59(595497784);
        noLegs_1_0_2_1.set(LegProduct_59);
        InstrumentLeg_59.insert(LegProduct_59.getString());
        FIX::LegPutOrCall LegPutOrCall_59(1360443022);
        noLegs_1_0_2_1.set(LegPutOrCall_59);
        InstrumentLeg_59.insert(LegPutOrCall_59.getString());
        FIX::LegRatioQty LegRatioQty_59;
        LegRatioQty_59.setString("1852034");
        noLegs_1_0_2_1.set(LegRatioQty_59);
        InstrumentLeg_59.insert(LegRatioQty_59.getString());
        FIX::LegRedemptionDate LegRedemptionDate_59("LOCALMKTDATE_1854974384");
        noLegs_1_0_2_1.set(LegRedemptionDate_59);
        InstrumentLeg_59.insert(LegRedemptionDate_59.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_59("STRING_245392128");
        noLegs_1_0_2_1.set(LegRepoCollateralSecurityType_59);
        InstrumentLeg_59.insert(LegRepoCollateralSecurityType_59.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_59;
        LegRepurchaseRate_59.setString("4.100000");
        noLegs_1_0_2_1.set(LegRepurchaseRate_59);
        InstrumentLeg_59.insert(LegRepurchaseRate_59.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_59(532009210);
        noLegs_1_0_2_1.set(LegRepurchaseTerm_59);
        InstrumentLeg_59.insert(LegRepurchaseTerm_59.getString());
        FIX::LegSecurityDesc LegSecurityDesc_59("STRING_1943938417");
        noLegs_1_0_2_1.set(LegSecurityDesc_59);
        InstrumentLeg_59.insert(LegSecurityDesc_59.getString());
        FIX::LegSecurityExchange LegSecurityExchange_59("EXCHANGE_54302068");
        noLegs_1_0_2_1.set(LegSecurityExchange_59);
        InstrumentLeg_59.insert(LegSecurityExchange_59.getString());
        FIX::LegSecurityID LegSecurityID_59("STRING_1935255272");
        noLegs_1_0_2_1.set(LegSecurityID_59);
        InstrumentLeg_59.insert(LegSecurityID_59.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_59("STRING_2125561994");
        noLegs_1_0_2_1.set(LegSecurityIDSource_59);
        InstrumentLeg_59.insert(LegSecurityIDSource_59.getString());
        FIX::LegSecuritySubType LegSecuritySubType_59("STRING_911658690");
        noLegs_1_0_2_1.set(LegSecuritySubType_59);
        InstrumentLeg_59.insert(LegSecuritySubType_59.getString());
        FIX::LegSecurityType LegSecurityType_59("STRING_339438741");
        noLegs_1_0_2_1.set(LegSecurityType_59);
        InstrumentLeg_59.insert(LegSecurityType_59.getString());
        FIX::LegSide LegSide_59('1');
        noLegs_1_0_2_1.set(LegSide_59);
        InstrumentLeg_59.insert(LegSide_59.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_59("STRING_1000936905");
        noLegs_1_0_2_1.set(LegStateOrProvinceOfIssue_59);
        InstrumentLeg_59.insert(LegStateOrProvinceOfIssue_59.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_59("JPY");
        noLegs_1_0_2_1.set(LegStrikeCurrency_59);
        InstrumentLeg_59.insert(LegStrikeCurrency_59.getString());
        FIX::LegStrikePrice LegStrikePrice_59;
        LegStrikePrice_59.setString("5386268");
        noLegs_1_0_2_1.set(LegStrikePrice_59);
        InstrumentLeg_59.insert(LegStrikePrice_59.getString());
        FIX::LegSymbol LegSymbol_59("STRING_1758284774");
        noLegs_1_0_2_1.set(LegSymbol_59);
        InstrumentLeg_59.insert(LegSymbol_59.getString());
        FIX::LegSymbolSfx LegSymbolSfx_59("STRING_1984699469");
        noLegs_1_0_2_1.set(LegSymbolSfx_59);
        InstrumentLeg_59.insert(LegSymbolSfx_59.getString());
        FIX::LegTimeUnit LegTimeUnit_59("STRING_1463963506");
        noLegs_1_0_2_1.set(LegTimeUnit_59);
        InstrumentLeg_59.insert(LegTimeUnit_59.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_59("STRING_141566104");
        noLegs_1_0_2_1.set(LegUnitOfMeasure_59);
        InstrumentLeg_59.insert(LegUnitOfMeasure_59.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_59;
        LegUnitOfMeasureQty_59.setString("21349277");
        noLegs_1_0_2_1.set(LegUnitOfMeasureQty_59);
        InstrumentLeg_59.insert(LegUnitOfMeasureQty_59.getString());
        all_values.push_back(InstrumentLeg_59);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_107;
          FIX::LegSecurityAltID LegSecurityAltID_107("STRING_1731227437");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltID_107);
          LegSecAltIDGrp_NoLegSecurityAltID_107.insert(LegSecurityAltID_107.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_107("STRING_782997875");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltIDSource_107);
          LegSecAltIDGrp_NoLegSecurityAltID_107.insert(LegSecurityAltIDSource_107.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_107);

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_1);
      }
      // Instrument
      multiset<string> Instrument_34;
      FIX::AttachmentPoint AttachmentPoint_34;
      AttachmentPoint_34.setString("57.850000");
      noQuoteEntries_1_1_0.set(AttachmentPoint_34);
      Instrument_34.insert(AttachmentPoint_34.getString());
      FIX::CFICode CFICode_34("STRING_1908445867");
      noQuoteEntries_1_1_0.set(CFICode_34);
      Instrument_34.insert(CFICode_34.getString());
      FIX::CPProgram CPProgram_34(1);
      noQuoteEntries_1_1_0.set(CPProgram_34);
      Instrument_34.insert(CPProgram_34.getString());
      FIX::CPRegType CPRegType_34("STRING_1419555293");
      noQuoteEntries_1_1_0.set(CPRegType_34);
      Instrument_34.insert(CPRegType_34.getString());
      FIX::CapPrice CapPrice_34;
      CapPrice_34.setString("5155851");
      noQuoteEntries_1_1_0.set(CapPrice_34);
      Instrument_34.insert(CapPrice_34.getString());
      FIX::ContractMultiplier ContractMultiplier_34;
      ContractMultiplier_34.setString("8794804");
      noQuoteEntries_1_1_0.set(ContractMultiplier_34);
      Instrument_34.insert(ContractMultiplier_34.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_34(2);
      noQuoteEntries_1_1_0.set(ContractMultiplierUnit_34);
      Instrument_34.insert(ContractMultiplierUnit_34.getString());
      FIX::ContractSettlMonth ContractSettlMonth_34("MONTHYEAR_700788606");
      noQuoteEntries_1_1_0.set(ContractSettlMonth_34);
      Instrument_34.insert(ContractSettlMonth_34.getString());
      FIX::CountryOfIssue CountryOfIssue_34("COUNTRY_586971170");
      noQuoteEntries_1_1_0.set(CountryOfIssue_34);
      Instrument_34.insert(CountryOfIssue_34.getString());
      FIX::CouponPaymentDate CouponPaymentDate_34("LOCALMKTDATE_877906796");
      noQuoteEntries_1_1_0.set(CouponPaymentDate_34);
      Instrument_34.insert(CouponPaymentDate_34.getString());
      FIX::CouponRate CouponRate_34;
      CouponRate_34.setString("53.680000");
      noQuoteEntries_1_1_0.set(CouponRate_34);
      Instrument_34.insert(CouponRate_34.getString());
      FIX::CreditRating CreditRating_34("STRING_1118980380");
      noQuoteEntries_1_1_0.set(CreditRating_34);
      Instrument_34.insert(CreditRating_34.getString());
      FIX::DatedDate DatedDate_34("LOCALMKTDATE_674361566");
      noQuoteEntries_1_1_0.set(DatedDate_34);
      Instrument_34.insert(DatedDate_34.getString());
      FIX::DetachmentPoint DetachmentPoint_34;
      DetachmentPoint_34.setString("74.360000");
      noQuoteEntries_1_1_0.set(DetachmentPoint_34);
      Instrument_34.insert(DetachmentPoint_34.getString());
      FIX::EncodedIssuer EncodedIssuer_34("DATA_906752005");
      noQuoteEntries_1_1_0.set(EncodedIssuer_34);
      Instrument_34.insert(EncodedIssuer_34.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_34(652439912);
      noQuoteEntries_1_1_0.set(EncodedIssuerLen_34);
      Instrument_34.insert(EncodedIssuerLen_34.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_34("DATA_1474756127");
      noQuoteEntries_1_1_0.set(EncodedSecurityDesc_34);
      Instrument_34.insert(EncodedSecurityDesc_34.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_34(1246190746);
      noQuoteEntries_1_1_0.set(EncodedSecurityDescLen_34);
      Instrument_34.insert(EncodedSecurityDescLen_34.getString());
      FIX::ExerciseStyle ExerciseStyle_34(2);
      noQuoteEntries_1_1_0.set(ExerciseStyle_34);
      Instrument_34.insert(ExerciseStyle_34.getString());
      FIX::Factor Factor_34;
      Factor_34.setString("3282093");
      noQuoteEntries_1_1_0.set(Factor_34);
      Instrument_34.insert(Factor_34.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_34(true);
      noQuoteEntries_1_1_0.set(FlexProductEligibilityIndicator_34);
      Instrument_34.insert(FlexProductEligibilityIndicator_34.getString());
      FIX::FlexibleIndicator FlexibleIndicator_34(false);
      noQuoteEntries_1_1_0.set(FlexibleIndicator_34);
      Instrument_34.insert(FlexibleIndicator_34.getString());
      FIX::FloorPrice FloorPrice_34;
      FloorPrice_34.setString("8668362");
      noQuoteEntries_1_1_0.set(FloorPrice_34);
      Instrument_34.insert(FloorPrice_34.getString());
      FIX::FlowScheduleType FlowScheduleType_34(2);
      noQuoteEntries_1_1_0.set(FlowScheduleType_34);
      Instrument_34.insert(FlowScheduleType_34.getString());
      FIX::InstrRegistry InstrRegistry_34("STRING_1174943286");
      noQuoteEntries_1_1_0.set(InstrRegistry_34);
      Instrument_34.insert(InstrRegistry_34.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_34('1');
      noQuoteEntries_1_1_0.set(InstrmtAssignmentMethod_34);
      Instrument_34.insert(InstrmtAssignmentMethod_34.getString());
      FIX::InterestAccrualDate InterestAccrualDate_34("LOCALMKTDATE_967259526");
      noQuoteEntries_1_1_0.set(InterestAccrualDate_34);
      Instrument_34.insert(InterestAccrualDate_34.getString());
      FIX::IssueDate IssueDate_34("LOCALMKTDATE_1162387430");
      noQuoteEntries_1_1_0.set(IssueDate_34);
      Instrument_34.insert(IssueDate_34.getString());
      FIX::Issuer Issuer_34("STRING_846156563");
      noQuoteEntries_1_1_0.set(Issuer_34);
      Instrument_34.insert(Issuer_34.getString());
      FIX::ListMethod ListMethod_34(1);
      noQuoteEntries_1_1_0.set(ListMethod_34);
      Instrument_34.insert(ListMethod_34.getString());
      FIX::LocaleOfIssue LocaleOfIssue_34("STRING_1945385306");
      noQuoteEntries_1_1_0.set(LocaleOfIssue_34);
      Instrument_34.insert(LocaleOfIssue_34.getString());
      FIX::MaturityDate MaturityDate_34("LOCALMKTDATE_220148700");
      noQuoteEntries_1_1_0.set(MaturityDate_34);
      Instrument_34.insert(MaturityDate_34.getString());
      FIX::MaturityMonthYear MaturityMonthYear_34("MONTHYEAR_311965534");
      noQuoteEntries_1_1_0.set(MaturityMonthYear_34);
      Instrument_34.insert(MaturityMonthYear_34.getString());
      FIX::MaturityTime MaturityTime_34("TZTIMEONLY_81884307");
      noQuoteEntries_1_1_0.set(MaturityTime_34);
      Instrument_34.insert(MaturityTime_34.getString());
      FIX::MinPriceIncrement MinPriceIncrement_34;
      MinPriceIncrement_34.setString("16397039");
      noQuoteEntries_1_1_0.set(MinPriceIncrement_34);
      Instrument_34.insert(MinPriceIncrement_34.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_34;
      MinPriceIncrementAmount_34.setString("8275506");
      noQuoteEntries_1_1_0.set(MinPriceIncrementAmount_34);
      Instrument_34.insert(MinPriceIncrementAmount_34.getString());
      FIX::NTPositionLimit NTPositionLimit_34(961364741);
      noQuoteEntries_1_1_0.set(NTPositionLimit_34);
      Instrument_34.insert(NTPositionLimit_34.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_34;
      NotionalPercentageOutstanding_34.setString("50.130000");
      noQuoteEntries_1_1_0.set(NotionalPercentageOutstanding_34);
      Instrument_34.insert(NotionalPercentageOutstanding_34.getString());
      FIX::OptAttribute OptAttribute_34('1');
      noQuoteEntries_1_1_0.set(OptAttribute_34);
      Instrument_34.insert(OptAttribute_34.getString());
      FIX::OptPayoutAmount OptPayoutAmount_34;
      OptPayoutAmount_34.setString("15483359");
      noQuoteEntries_1_1_0.set(OptPayoutAmount_34);
      Instrument_34.insert(OptPayoutAmount_34.getString());
      FIX::OptPayoutType OptPayoutType_34(3);
      noQuoteEntries_1_1_0.set(OptPayoutType_34);
      Instrument_34.insert(OptPayoutType_34.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_34;
      OriginalNotionalPercentageOutstanding_34.setString("46.310000");
      noQuoteEntries_1_1_0.set(OriginalNotionalPercentageOutstanding_34);
      Instrument_34.insert(OriginalNotionalPercentageOutstanding_34.getString());
      FIX::Pool Pool_34("STRING_519832644");
      noQuoteEntries_1_1_0.set(Pool_34);
      Instrument_34.insert(Pool_34.getString());
      FIX::PositionLimit PositionLimit_34(1677003376);
      noQuoteEntries_1_1_0.set(PositionLimit_34);
      Instrument_34.insert(PositionLimit_34.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_34("STRING_STD");
      noQuoteEntries_1_1_0.set(PriceQuoteMethod_34);
      Instrument_34.insert(PriceQuoteMethod_34.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_34("STRING_1426584649");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasure_34);
      Instrument_34.insert(PriceUnitOfMeasure_34.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_34;
      PriceUnitOfMeasureQty_34.setString("1819596");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasureQty_34);
      Instrument_34.insert(PriceUnitOfMeasureQty_34.getString());
      FIX::Product Product_36(8);
      noQuoteEntries_1_1_0.set(Product_36);
      Instrument_34.insert(Product_36.getString());
      FIX::ProductComplex ProductComplex_34("STRING_525291748");
      noQuoteEntries_1_1_0.set(ProductComplex_34);
      Instrument_34.insert(ProductComplex_34.getString());
      FIX::PutOrCall PutOrCall_34(1);
      noQuoteEntries_1_1_0.set(PutOrCall_34);
      Instrument_34.insert(PutOrCall_34.getString());
      FIX::RedemptionDate RedemptionDate_34("LOCALMKTDATE_108230283");
      noQuoteEntries_1_1_0.set(RedemptionDate_34);
      Instrument_34.insert(RedemptionDate_34.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_34("STRING_1740184044");
      noQuoteEntries_1_1_0.set(RepoCollateralSecurityType_34);
      Instrument_34.insert(RepoCollateralSecurityType_34.getString());
      FIX::RepurchaseRate RepurchaseRate_34;
      RepurchaseRate_34.setString("71.500000");
      noQuoteEntries_1_1_0.set(RepurchaseRate_34);
      Instrument_34.insert(RepurchaseRate_34.getString());
      FIX::RepurchaseTerm RepurchaseTerm_34(975066552);
      noQuoteEntries_1_1_0.set(RepurchaseTerm_34);
      Instrument_34.insert(RepurchaseTerm_34.getString());
      FIX::RestructuringType RestructuringType_34("STRING_MM");
      noQuoteEntries_1_1_0.set(RestructuringType_34);
      Instrument_34.insert(RestructuringType_34.getString());
      FIX::SecurityDesc SecurityDesc_34("STRING_962966788");
      noQuoteEntries_1_1_0.set(SecurityDesc_34);
      Instrument_34.insert(SecurityDesc_34.getString());
      FIX::SecurityExchange SecurityExchange_34("EXCHANGE_1158382679");
      noQuoteEntries_1_1_0.set(SecurityExchange_34);
      Instrument_34.insert(SecurityExchange_34.getString());
      FIX::SecurityGroup SecurityGroup_34("STRING_1385653344");
      noQuoteEntries_1_1_0.set(SecurityGroup_34);
      Instrument_34.insert(SecurityGroup_34.getString());
      FIX::SecurityID SecurityID_34("STRING_2125354219");
      noQuoteEntries_1_1_0.set(SecurityID_34);
      Instrument_34.insert(SecurityID_34.getString());
      FIX::SecurityIDSource SecurityIDSource_34("STRING_3");
      noQuoteEntries_1_1_0.set(SecurityIDSource_34);
      Instrument_34.insert(SecurityIDSource_34.getString());
      FIX::SecurityStatus SecurityStatus_34("STRING_2");
      noQuoteEntries_1_1_0.set(SecurityStatus_34);
      Instrument_34.insert(SecurityStatus_34.getString());
      FIX::SecuritySubType SecuritySubType_35("STRING_1923255877");
      noQuoteEntries_1_1_0.set(SecuritySubType_35);
      Instrument_34.insert(SecuritySubType_35.getString());
      FIX::SecurityType SecurityType_36("STRING_ABS");
      noQuoteEntries_1_1_0.set(SecurityType_36);
      Instrument_34.insert(SecurityType_36.getString());
      FIX::Seniority Seniority_34("STRING_SB");
      noQuoteEntries_1_1_0.set(Seniority_34);
      Instrument_34.insert(Seniority_34.getString());
      FIX::SettlMethod SettlMethod_34('C');
      noQuoteEntries_1_1_0.set(SettlMethod_34);
      Instrument_34.insert(SettlMethod_34.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_34("STRING_1716908288");
      noQuoteEntries_1_1_0.set(SettleOnOpenFlag_34);
      Instrument_34.insert(SettleOnOpenFlag_34.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_34("STRING_928689202");
      noQuoteEntries_1_1_0.set(StateOrProvinceOfIssue_34);
      Instrument_34.insert(StateOrProvinceOfIssue_34.getString());
      FIX::StrikeCurrency StrikeCurrency_34("EUR");
      noQuoteEntries_1_1_0.set(StrikeCurrency_34);
      Instrument_34.insert(StrikeCurrency_34.getString());
      FIX::StrikeMultiplier StrikeMultiplier_34;
      StrikeMultiplier_34.setString("3095448");
      noQuoteEntries_1_1_0.set(StrikeMultiplier_34);
      Instrument_34.insert(StrikeMultiplier_34.getString());
      FIX::StrikePrice StrikePrice_34;
      StrikePrice_34.setString("2198735");
      noQuoteEntries_1_1_0.set(StrikePrice_34);
      Instrument_34.insert(StrikePrice_34.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_34(4);
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryMethod_34);
      Instrument_34.insert(StrikePriceBoundaryMethod_34.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_34;
      StrikePriceBoundaryPrecision_34.setString("58.010000");
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryPrecision_34);
      Instrument_34.insert(StrikePriceBoundaryPrecision_34.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_34(3);
      noQuoteEntries_1_1_0.set(StrikePriceDeterminationMethod_34);
      Instrument_34.insert(StrikePriceDeterminationMethod_34.getString());
      FIX::StrikeValue StrikeValue_34;
      StrikeValue_34.setString("2263211");
      noQuoteEntries_1_1_0.set(StrikeValue_34);
      Instrument_34.insert(StrikeValue_34.getString());
      FIX::Symbol Symbol_34("STRING_651944221");
      noQuoteEntries_1_1_0.set(Symbol_34);
      Instrument_34.insert(Symbol_34.getString());
      FIX::SymbolSfx SymbolSfx_34("STRING_CD");
      noQuoteEntries_1_1_0.set(SymbolSfx_34);
      Instrument_34.insert(SymbolSfx_34.getString());
      FIX::TimeUnit TimeUnit_34("STRING_H");
      noQuoteEntries_1_1_0.set(TimeUnit_34);
      Instrument_34.insert(TimeUnit_34.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_34(1);
      noQuoteEntries_1_1_0.set(UnderlyingPriceDeterminationMethod_34);
      Instrument_34.insert(UnderlyingPriceDeterminationMethod_34.getString());
      FIX::UnitOfMeasure UnitOfMeasure_34("STRING_Bbl");
      noQuoteEntries_1_1_0.set(UnitOfMeasure_34);
      Instrument_34.insert(UnitOfMeasure_34.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_34;
      UnitOfMeasureQty_34.setString("10060605");
      noQuoteEntries_1_1_0.set(UnitOfMeasureQty_34);
      Instrument_34.insert(UnitOfMeasureQty_34.getString());
      FIX::ValuationMethod ValuationMethod_34("STRING_CDS");
      noQuoteEntries_1_1_0.set(ValuationMethod_34);
      Instrument_34.insert(ValuationMethod_34.getString());
      all_values.push_back(Instrument_34);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_70;
        FIX::ComplexEventCondition ComplexEventCondition_70(1);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventCondition_70.getString());
        FIX::ComplexEventPrice ComplexEventPrice_70;
        ComplexEventPrice_70.setString("15152619");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPrice_70.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_70(1);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryMethod_70.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_70;
        ComplexEventPriceBoundaryPrecision_70.setString("8.070000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryPrecision_70.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_70(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceTimeType_70.getString());
        FIX::ComplexEventType ComplexEventType_70(5);
        noComplexEvents_1_0_2_0.set(ComplexEventType_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventType_70.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_70;
        ComplexOptPayoutAmount_70.setString("17349213");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexOptPayoutAmount_70.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_70);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_151;
          FIX::ComplexEventEndDate ComplexEventEndDate_151(FIX::UTCTIMESTAMP(23, 16, 51, 27, 52006));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_151);
          ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventEndDate_151.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_151(FIX::UTCTIMESTAMP(18, 23, 15, 9, 12006));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_151);
          ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventStartDate_151.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_151);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_304;
            FIX::ComplexEventEndTime ComplexEventEndTime_304(FIX::UTCTIMEONLY(2, 16, 57));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_304);
            ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventEndTime_304.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_304(FIX::UTCTIMEONLY(21, 41, 18));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_304);
            ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventStartTime_304.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_304);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_152;
          FIX::ComplexEventEndDate ComplexEventEndDate_152(FIX::UTCTIMESTAMP(13, 20, 2, 16, 72008));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventEndDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventEndDate_152.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_152(FIX::UTCTIMESTAMP(11, 59, 35, 15, 122015));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventStartDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventStartDate_152.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_152);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_305;
            FIX::ComplexEventEndTime ComplexEventEndTime_305(FIX::UTCTIMEONLY(1, 16, 4));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventEndTime_305);
            ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventEndTime_305.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_305(FIX::UTCTIMEONLY(5, 46, 32));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventStartTime_305);
            ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventStartTime_305.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_305);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_306;
            FIX::ComplexEventEndTime ComplexEventEndTime_306(FIX::UTCTIMEONLY(16, 48, 56));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventEndTime_306);
            ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventEndTime_306.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_306(FIX::UTCTIMEONLY(1, 37, 4));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventStartTime_306);
            ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventStartTime_306.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_306);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_1);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_153;
          FIX::ComplexEventEndDate ComplexEventEndDate_153(FIX::UTCTIMESTAMP(6, 24, 19, 26, 112014));
          noComplexEventDates_1_0_0_3_2.set(ComplexEventEndDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventEndDate_153.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_153(FIX::UTCTIMESTAMP(1, 23, 0, 4, 112003));
          noComplexEventDates_1_0_0_3_2.set(ComplexEventStartDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventStartDate_153.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_153);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_307;
            FIX::ComplexEventEndTime ComplexEventEndTime_307(FIX::UTCTIMEONLY(9, 10, 43));
            noComplexEventTimes_1_0_0_2_4_0.set(ComplexEventEndTime_307);
            ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventEndTime_307.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_307(FIX::UTCTIMEONLY(7, 21, 4));
            noComplexEventTimes_1_0_0_2_4_0.set(ComplexEventStartTime_307);
            ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventStartTime_307.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_307);

            noComplexEventDates_1_0_0_3_2.addGroup(noComplexEventTimes_1_0_0_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_308;
            FIX::ComplexEventEndTime ComplexEventEndTime_308(FIX::UTCTIMEONLY(1, 52, 29));
            noComplexEventTimes_1_0_0_2_4_1.set(ComplexEventEndTime_308);
            ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventEndTime_308.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_308(FIX::UTCTIMEONLY(22, 58, 31));
            noComplexEventTimes_1_0_0_2_4_1.set(ComplexEventStartTime_308);
            ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventStartTime_308.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_308);

            noComplexEventDates_1_0_0_3_2.addGroup(noComplexEventTimes_1_0_0_2_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_309;
            FIX::ComplexEventEndTime ComplexEventEndTime_309(FIX::UTCTIMEONLY(8, 47, 26));
            noComplexEventTimes_1_0_0_2_4_2.set(ComplexEventEndTime_309);
            ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventEndTime_309.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_309(FIX::UTCTIMEONLY(13, 50, 36));
            noComplexEventTimes_1_0_0_2_4_2.set(ComplexEventStartTime_309);
            ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventStartTime_309.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_309);

            noComplexEventDates_1_0_0_3_2.addGroup(noComplexEventTimes_1_0_0_2_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_71;
        FIX::ComplexEventCondition ComplexEventCondition_71(1);
        noComplexEvents_1_0_2_1.set(ComplexEventCondition_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventCondition_71.getString());
        FIX::ComplexEventPrice ComplexEventPrice_71;
        ComplexEventPrice_71.setString("3876200");
        noComplexEvents_1_0_2_1.set(ComplexEventPrice_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPrice_71.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_71(2);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryMethod_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryMethod_71.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_71;
        ComplexEventPriceBoundaryPrecision_71.setString("60.150000");
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryPrecision_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryPrecision_71.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_71(3);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceTimeType_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceTimeType_71.getString());
        FIX::ComplexEventType ComplexEventType_71(8);
        noComplexEvents_1_0_2_1.set(ComplexEventType_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventType_71.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_71;
        ComplexOptPayoutAmount_71.setString("17254247");
        noComplexEvents_1_0_2_1.set(ComplexOptPayoutAmount_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexOptPayoutAmount_71.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_71);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_154;
          FIX::ComplexEventEndDate ComplexEventEndDate_154(FIX::UTCTIMESTAMP(14, 18, 36, 25, 82008));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventEndDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventEndDate_154.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_154(FIX::UTCTIMESTAMP(12, 25, 28, 15, 122001));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventStartDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventStartDate_154.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_154);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_310;
            FIX::ComplexEventEndTime ComplexEventEndTime_310(FIX::UTCTIMEONLY(3, 49, 48));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventEndTime_310);
            ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventEndTime_310.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_310(FIX::UTCTIMEONLY(6, 39, 46));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventStartTime_310);
            ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventStartTime_310.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_310);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_311;
            FIX::ComplexEventEndTime ComplexEventEndTime_311(FIX::UTCTIMEONLY(21, 22, 12));
            noComplexEventTimes_1_0_1_0_4_1.set(ComplexEventEndTime_311);
            ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventEndTime_311.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_311(FIX::UTCTIMEONLY(22, 52, 9));
            noComplexEventTimes_1_0_1_0_4_1.set(ComplexEventStartTime_311);
            ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventStartTime_311.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_311);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_1);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_155;
          FIX::ComplexEventEndDate ComplexEventEndDate_155(FIX::UTCTIMESTAMP(7, 27, 59, 4, 42013));
          noComplexEventDates_1_0_1_3_1.set(ComplexEventEndDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventEndDate_155.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_155(FIX::UTCTIMESTAMP(3, 56, 36, 27, 122013));
          noComplexEventDates_1_0_1_3_1.set(ComplexEventStartDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventStartDate_155.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_155);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_312;
            FIX::ComplexEventEndTime ComplexEventEndTime_312(FIX::UTCTIMEONLY(2, 27, 30));
            noComplexEventTimes_1_0_1_1_4_0.set(ComplexEventEndTime_312);
            ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventEndTime_312.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_312(FIX::UTCTIMEONLY(21, 1, 7));
            noComplexEventTimes_1_0_1_1_4_0.set(ComplexEventStartTime_312);
            ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventStartTime_312.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_312);

            noComplexEventDates_1_0_1_3_1.addGroup(noComplexEventTimes_1_0_1_1_4_0);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_156;
          FIX::ComplexEventEndDate ComplexEventEndDate_156(FIX::UTCTIMESTAMP(2, 22, 18, 3, 92017));
          noComplexEventDates_1_0_1_3_2.set(ComplexEventEndDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventEndDate_156.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_156(FIX::UTCTIMESTAMP(14, 46, 40, 9, 72011));
          noComplexEventDates_1_0_1_3_2.set(ComplexEventStartDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventStartDate_156.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_156);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_313;
            FIX::ComplexEventEndTime ComplexEventEndTime_313(FIX::UTCTIMEONLY(2, 45, 38));
            noComplexEventTimes_1_0_1_2_4_0.set(ComplexEventEndTime_313);
            ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventEndTime_313.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_313(FIX::UTCTIMEONLY(9, 25, 47));
            noComplexEventTimes_1_0_1_2_4_0.set(ComplexEventStartTime_313);
            ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventStartTime_313.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_313);

            noComplexEventDates_1_0_1_3_2.addGroup(noComplexEventTimes_1_0_1_2_4_0);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_75;
        FIX::EventDate EventDate_75("LOCALMKTDATE_297720747");
        noEvents_1_0_2_0.set(EventDate_75);
        EvntGrp_NoEvents_75.insert(EventDate_75.getString());
        FIX::EventPx EventPx_75;
        EventPx_75.setString("20929571");
        noEvents_1_0_2_0.set(EventPx_75);
        EvntGrp_NoEvents_75.insert(EventPx_75.getString());
        FIX::EventText EventText_75("STRING_935902492");
        noEvents_1_0_2_0.set(EventText_75);
        EvntGrp_NoEvents_75.insert(EventText_75.getString());
        FIX::EventTime EventTime_75(FIX::UTCTIMESTAMP(15, 45, 48, 10, 122016));
        noEvents_1_0_2_0.set(EventTime_75);
        EvntGrp_NoEvents_75.insert(EventTime_75.getString());
        FIX::EventType EventType_75(9);
        noEvents_1_0_2_0.set(EventType_75);
        EvntGrp_NoEvents_75.insert(EventType_75.getString());
        all_values.push_back(EvntGrp_NoEvents_75);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_63;
        FIX::InstrumentPartyID InstrumentPartyID_63("STRING_566582638");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_63);
        InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyID_63.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_63('1');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_63);
        InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyIDSource_63.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_63(1012628499);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_63);
        InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyRole_63.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_63);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126;
          FIX::InstrumentPartySubID InstrumentPartySubID_126("STRING_1786599197");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_126);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126.insert(InstrumentPartySubID_126.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_126(766580411);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_126);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126.insert(InstrumentPartySubIDType_126.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_68;
        FIX::SecurityAltID SecurityAltID_68("STRING_793667824");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_68);
        SecAltIDGrp_NoSecurityAltID_68.insert(SecurityAltID_68.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_68("STRING_1072299514");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_68);
        SecAltIDGrp_NoSecurityAltID_68.insert(SecurityAltIDSource_68.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_68);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_68;
      FIX::SecurityXML SecurityXML_69("XMLDATA_839147611");
      noQuoteEntries_1_1_0.set(SecurityXML_69);
      FIX::SecurityXMLLen SecurityXMLLen_34(1770846606);
      noQuoteEntries_1_1_0.set(SecurityXMLLen_34);
      FIX::SecurityXMLSchema SecurityXMLSchema_34("STRING_109040693");
      noQuoteEntries_1_1_0.set(SecurityXMLSchema_34);
      SecurityXML_68.insert(SecurityXMLSchema_34.getString());
      all_values.push_back(SecurityXML_68);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_55;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_55("DATA_1863866056");
    noQuoteSets_0_1.set(EncodedUnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuer_55.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_55(1207488216);
    noQuoteSets_0_1.set(EncodedUnderlyingIssuerLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuerLen_55.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_55("DATA_299803914");
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDesc_55.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_55(1403971865);
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDescLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDescLen_55.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_55;
    UnderlyingAdjustedQuantity_55.setString("13787848");
    noQuoteSets_0_1.set(UnderlyingAdjustedQuantity_55);
    UnderlyingInstrument_55.insert(UnderlyingAdjustedQuantity_55.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_55;
    UnderlyingAllocationPercent_55.setString("47.410000");
    noQuoteSets_0_1.set(UnderlyingAllocationPercent_55);
    UnderlyingInstrument_55.insert(UnderlyingAllocationPercent_55.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_55;
    UnderlyingAttachmentPoint_55.setString("3.280000");
    noQuoteSets_0_1.set(UnderlyingAttachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingAttachmentPoint_55.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_55("STRING_1676505628");
    noQuoteSets_0_1.set(UnderlyingCFICode_55);
    UnderlyingInstrument_55.insert(UnderlyingCFICode_55.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_55("STRING_1587478247");
    noQuoteSets_0_1.set(UnderlyingCPProgram_55);
    UnderlyingInstrument_55.insert(UnderlyingCPProgram_55.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_55("STRING_1318792820");
    noQuoteSets_0_1.set(UnderlyingCPRegType_55);
    UnderlyingInstrument_55.insert(UnderlyingCPRegType_55.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_55;
    UnderlyingCapValue_55.setString("11688163");
    noQuoteSets_0_1.set(UnderlyingCapValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCapValue_55.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_55;
    UnderlyingCashAmount_55.setString("12651791");
    noQuoteSets_0_1.set(UnderlyingCashAmount_55);
    UnderlyingInstrument_55.insert(UnderlyingCashAmount_55.getString());
    FIX::UnderlyingCashType UnderlyingCashType_55("STRING_FIXED");
    noQuoteSets_0_1.set(UnderlyingCashType_55);
    UnderlyingInstrument_55.insert(UnderlyingCashType_55.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_55;
    UnderlyingContractMultiplier_55.setString("20349812");
    noQuoteSets_0_1.set(UnderlyingContractMultiplier_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplier_55.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_55(449245065);
    noQuoteSets_0_1.set(UnderlyingContractMultiplierUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplierUnit_55.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_55("COUNTRY_1327698801");
    noQuoteSets_0_1.set(UnderlyingCountryOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingCountryOfIssue_55.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_55("LOCALMKTDATE_1450464179");
    noQuoteSets_0_1.set(UnderlyingCouponPaymentDate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponPaymentDate_55.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_55;
    UnderlyingCouponRate_55.setString("94.250000");
    noQuoteSets_0_1.set(UnderlyingCouponRate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponRate_55.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_55("STRING_391266040");
    noQuoteSets_0_1.set(UnderlyingCreditRating_55);
    UnderlyingInstrument_55.insert(UnderlyingCreditRating_55.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_55("EUR");
    noQuoteSets_0_1.set(UnderlyingCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrency_55.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_55;
    UnderlyingCurrentValue_55.setString("14038945");
    noQuoteSets_0_1.set(UnderlyingCurrentValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrentValue_55.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_55;
    UnderlyingDetachmentPoint_55.setString("34.930000");
    noQuoteSets_0_1.set(UnderlyingDetachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingDetachmentPoint_55.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_55;
    UnderlyingDirtyPrice_55.setString("11286224");
    noQuoteSets_0_1.set(UnderlyingDirtyPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingDirtyPrice_55.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_55;
    UnderlyingEndPrice_55.setString("229913");
    noQuoteSets_0_1.set(UnderlyingEndPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingEndPrice_55.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_55;
    UnderlyingEndValue_55.setString("9511804");
    noQuoteSets_0_1.set(UnderlyingEndValue_55);
    UnderlyingInstrument_55.insert(UnderlyingEndValue_55.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_55(1922290310);
    noQuoteSets_0_1.set(UnderlyingExerciseStyle_55);
    UnderlyingInstrument_55.insert(UnderlyingExerciseStyle_55.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_55;
    UnderlyingFXRate_55.setString("10952908");
    noQuoteSets_0_1.set(UnderlyingFXRate_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRate_55.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_55('D');
    noQuoteSets_0_1.set(UnderlyingFXRateCalc_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRateCalc_55.getString());
    FIX::UnderlyingFactor UnderlyingFactor_55;
    UnderlyingFactor_55.setString("15456532");
    noQuoteSets_0_1.set(UnderlyingFactor_55);
    UnderlyingInstrument_55.insert(UnderlyingFactor_55.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_55(1204331511);
    noQuoteSets_0_1.set(UnderlyingFlowScheduleType_55);
    UnderlyingInstrument_55.insert(UnderlyingFlowScheduleType_55.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_55("STRING_1506710487");
    noQuoteSets_0_1.set(UnderlyingInstrRegistry_55);
    UnderlyingInstrument_55.insert(UnderlyingInstrRegistry_55.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_55("LOCALMKTDATE_605657836");
    noQuoteSets_0_1.set(UnderlyingIssueDate_55);
    UnderlyingInstrument_55.insert(UnderlyingIssueDate_55.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_55("STRING_1504135425");
    noQuoteSets_0_1.set(UnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(UnderlyingIssuer_55.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_55("STRING_763198704");
    noQuoteSets_0_1.set(UnderlyingLocaleOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingLocaleOfIssue_55.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_55("LOCALMKTDATE_1984442717");
    noQuoteSets_0_1.set(UnderlyingMaturityDate_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityDate_55.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_55("MONTHYEAR_998656519");
    noQuoteSets_0_1.set(UnderlyingMaturityMonthYear_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityMonthYear_55.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_55("TZTIMEONLY_1146089032");
    noQuoteSets_0_1.set(UnderlyingMaturityTime_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityTime_55.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_55;
    UnderlyingNotionalPercentageOutstanding_55.setString("46.980000");
    noQuoteSets_0_1.set(UnderlyingNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_55('4');
    noQuoteSets_0_1.set(UnderlyingOptAttribute_55);
    UnderlyingInstrument_55.insert(UnderlyingOptAttribute_55.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_55;
    UnderlyingOriginalNotionalPercentageOutstanding_55.setString("82.050000");
    noQuoteSets_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingOriginalNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_55("STRING_534797439");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasure_55.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_55;
    UnderlyingPriceUnitOfMeasureQty_55.setString("17038303");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasureQty_55.getString());
    FIX::UnderlyingProduct UnderlyingProduct_55(1961838851);
    noQuoteSets_0_1.set(UnderlyingProduct_55);
    UnderlyingInstrument_55.insert(UnderlyingProduct_55.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_55(422295088);
    noQuoteSets_0_1.set(UnderlyingPutOrCall_55);
    UnderlyingInstrument_55.insert(UnderlyingPutOrCall_55.getString());
    FIX::UnderlyingPx UnderlyingPx_55;
    UnderlyingPx_55.setString("55917");
    noQuoteSets_0_1.set(UnderlyingPx_55);
    UnderlyingInstrument_55.insert(UnderlyingPx_55.getString());
    FIX::UnderlyingQty UnderlyingQty_55;
    UnderlyingQty_55.setString("11420540");
    noQuoteSets_0_1.set(UnderlyingQty_55);
    UnderlyingInstrument_55.insert(UnderlyingQty_55.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_55("LOCALMKTDATE_1872759267");
    noQuoteSets_0_1.set(UnderlyingRedemptionDate_55);
    UnderlyingInstrument_55.insert(UnderlyingRedemptionDate_55.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_55("STRING_289041144");
    noQuoteSets_0_1.set(UnderlyingRepoCollateralSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingRepoCollateralSecurityType_55.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_55;
    UnderlyingRepurchaseRate_55.setString("0.450000");
    noQuoteSets_0_1.set(UnderlyingRepurchaseRate_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseRate_55.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_55(1742322436);
    noQuoteSets_0_1.set(UnderlyingRepurchaseTerm_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseTerm_55.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_55("STRING_1778548081");
    noQuoteSets_0_1.set(UnderlyingRestructuringType_55);
    UnderlyingInstrument_55.insert(UnderlyingRestructuringType_55.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_55("STRING_789730937");
    noQuoteSets_0_1.set(UnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityDesc_55.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_55("EXCHANGE_1402102281");
    noQuoteSets_0_1.set(UnderlyingSecurityExchange_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityExchange_55.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_55("STRING_759686919");
    noQuoteSets_0_1.set(UnderlyingSecurityID_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityID_55.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_55("STRING_812722240");
    noQuoteSets_0_1.set(UnderlyingSecurityIDSource_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityIDSource_55.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_55("STRING_205799101");
    noQuoteSets_0_1.set(UnderlyingSecuritySubType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecuritySubType_55.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_55("STRING_534493582");
    noQuoteSets_0_1.set(UnderlyingSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityType_55.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_55("STRING_1908013058");
    noQuoteSets_0_1.set(UnderlyingSeniority_55);
    UnderlyingInstrument_55.insert(UnderlyingSeniority_55.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_55("STRING_1996127179");
    noQuoteSets_0_1.set(UnderlyingSettlMethod_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlMethod_55.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_55(4);
    noQuoteSets_0_1.set(UnderlyingSettlementType_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlementType_55.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_55;
    UnderlyingStartValue_55.setString("9648609");
    noQuoteSets_0_1.set(UnderlyingStartValue_55);
    UnderlyingInstrument_55.insert(UnderlyingStartValue_55.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_55("STRING_1355354018");
    noQuoteSets_0_1.set(UnderlyingStateOrProvinceOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingStateOrProvinceOfIssue_55.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_55("CAN");
    noQuoteSets_0_1.set(UnderlyingStrikeCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikeCurrency_55.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_55;
    UnderlyingStrikePrice_55.setString("21185527");
    noQuoteSets_0_1.set(UnderlyingStrikePrice_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikePrice_55.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_55("STRING_375280108");
    noQuoteSets_0_1.set(UnderlyingSymbol_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbol_55.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_55("STRING_1320169218");
    noQuoteSets_0_1.set(UnderlyingSymbolSfx_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbolSfx_55.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_55("STRING_1117158107");
    noQuoteSets_0_1.set(UnderlyingTimeUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingTimeUnit_55.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_55("STRING_1888744806");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasure_55.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_55;
    UnderlyingUnitOfMeasureQty_55.setString("17588203");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasureQty_55.getString());
    all_values.push_back(UnderlyingInstrument_55);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_109;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_109("STRING_276058597");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_109);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltID_109.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_109("STRING_1315166990");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_109);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltIDSource_109.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_110;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_110("STRING_1248911515");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_110);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltID_110.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_110("STRING_698353685");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_110);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltIDSource_110.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_107;
      FIX::UnderlyingStipType UnderlyingStipType_107("STRING_243481872");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_107);
      UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipType_107.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_107("STRING_423629304");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_107);
      UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipValue_107.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_107);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_108;
      FIX::UnderlyingStipType UnderlyingStipType_108("STRING_1609799852");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_108);
      UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipType_108.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_108("STRING_1776801917");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_108);
      UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipValue_108.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_108);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_109;
      FIX::UnderlyingStipType UnderlyingStipType_109("STRING_18468092");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_109);
      UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipType_109.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_109("STRING_1240864285");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_109);
      UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipValue_109.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_109);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_109;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_109("STRING_1420570374");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyID_109.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_109('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyIDSource_109.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_109(1231771446);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyRole_109.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_109);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_210("STRING_387561139");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_210);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210.insert(UnderlyingInstrumentPartySubID_210.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_210(992300857);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_210);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210.insert(UnderlyingInstrumentPartySubIDType_210.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_211("STRING_1475013006");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_211);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211.insert(UnderlyingInstrumentPartySubID_211.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_211(320224341);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_211);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211.insert(UnderlyingInstrumentPartySubIDType_211.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_110;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_110("STRING_1957161778");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyID_110.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_110('6');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyIDSource_110.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_110(858545380);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyRole_110.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_110);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_212("STRING_653952452");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_212);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212.insert(UnderlyingInstrumentPartySubID_212.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_212(1233825489);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_212);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212.insert(UnderlyingInstrumentPartySubIDType_212.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_213("STRING_1451360047");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_213);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213.insert(UnderlyingInstrumentPartySubID_213.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_213(1771110559);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_213);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213.insert(UnderlyingInstrumentPartySubIDType_213.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_111;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_111("STRING_975086647");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyID_111.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_111('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyIDSource_111.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_111(1058183224);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyRole_111.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_111);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_214("STRING_230380078");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_214);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214.insert(UnderlyingInstrumentPartySubID_214.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_214(159611091);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_214);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214.insert(UnderlyingInstrumentPartySubIDType_214.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noQuoteSets_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_0;
    FIX::TargetPartyID TargetPartyID_0("STRING_1551138786");
    noTargetPartyIDs_0_0.set(TargetPartyID_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyID_0.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_0('4');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyIDSource_0.getString());
    FIX::TargetPartyRole TargetPartyRole_0(225644587);
    noTargetPartyIDs_0_0.set(TargetPartyRole_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyRole_0.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_1;
    FIX::TargetPartyID TargetPartyID_1("STRING_1013454991");
    noTargetPartyIDs_0_1.set(TargetPartyID_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyID_1.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_1('3');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyIDSource_1.getString());
    FIX::TargetPartyRole TargetPartyRole_1(244112679);
    noTargetPartyIDs_0_1.set(TargetPartyRole_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyRole_1.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_1);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_2;
    FIX::TargetPartyID TargetPartyID_2("STRING_106835628");
    noTargetPartyIDs_0_2.set(TargetPartyID_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyID_2.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_2('4');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyIDSource_2.getString());
    FIX::TargetPartyRole TargetPartyRole_2(1664683053);
    noTargetPartyIDs_0_2.set(TargetPartyRole_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyRole_2.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_2);

    msg.addGroup(noTargetPartyIDs_0_2);
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
