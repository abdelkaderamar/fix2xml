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
  FIX::Account Account_11("STRING_74783048");
  msg.set(Account_11);
  MassQuoteAcknowledgement_0.insert(Account_11.getString());
  FIX::AccountType AccountType_10(8);
  msg.set(AccountType_10);
  MassQuoteAcknowledgement_0.insert(AccountType_10.getString());
  FIX::AcctIDSource AcctIDSource_4(5);
  msg.set(AcctIDSource_4);
  MassQuoteAcknowledgement_0.insert(AcctIDSource_4.getString());
  FIX::EncodedText EncodedText_43("DATA_1492252227");
  msg.set(EncodedText_43);
  MassQuoteAcknowledgement_0.insert(EncodedText_43.getString());
  FIX::EncodedTextLen EncodedTextLen_43(1043151302);
  msg.set(EncodedTextLen_43);
  MassQuoteAcknowledgement_0.insert(EncodedTextLen_43.getString());
  FIX::QuoteCancelType QuoteCancelType_0(5);
  msg.set(QuoteCancelType_0);
  MassQuoteAcknowledgement_0.insert(QuoteCancelType_0.getString());
  FIX::QuoteID QuoteID_2("STRING_500125857");
  msg.set(QuoteID_2);
  MassQuoteAcknowledgement_0.insert(QuoteID_2.getString());
  FIX::QuoteRejectReason QuoteRejectReason_0(2);
  msg.set(QuoteRejectReason_0);
  MassQuoteAcknowledgement_0.insert(QuoteRejectReason_0.getString());
  FIX::QuoteReqID QuoteReqID_1("STRING_1232810560");
  msg.set(QuoteReqID_1);
  MassQuoteAcknowledgement_0.insert(QuoteReqID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_1(1);
  msg.set(QuoteResponseLevel_1);
  MassQuoteAcknowledgement_0.insert(QuoteResponseLevel_1.getString());
  FIX::QuoteStatus QuoteStatus_0(5);
  msg.set(QuoteStatus_0);
  MassQuoteAcknowledgement_0.insert(QuoteStatus_0.getString());
  FIX::QuoteType QuoteType_2(3);
  msg.set(QuoteType_2);
  MassQuoteAcknowledgement_0.insert(QuoteType_2.getString());
  FIX::Text Text_43("STRING_417978910");
  msg.set(Text_43);
  MassQuoteAcknowledgement_0.insert(Text_43.getString());
  all_values.push_back(MassQuoteAcknowledgement_0);

  all_compo_names.insert("MassQuoteAcknowledgement");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    FIX::PartyID PartyID_27("STRING_961169208");
    noPartyIDs_0_0.set(PartyID_27);
    Parties_NoPartyIDs_27.insert(PartyID_27.getString());
    FIX::PartyIDSource PartyIDSource_27('8');
    noPartyIDs_0_0.set(PartyIDSource_27);
    Parties_NoPartyIDs_27.insert(PartyIDSource_27.getString());
    FIX::PartyRole PartyRole_27(20);
    noPartyIDs_0_0.set(PartyRole_27);
    Parties_NoPartyIDs_27.insert(PartyRole_27.getString());
    all_values.push_back(Parties_NoPartyIDs_27);
    all_compo_names.insert("..NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      FIX::PartySubID PartySubID_27("STRING_1208075644");
      noPartySubIDs_0_1_0.set(PartySubID_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubID_27.getString());
      FIX::PartySubIDType PartySubIDType_27(24);
      noPartySubIDs_0_1_0.set(PartySubIDType_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubIDType_27.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);
      all_compo_names.insert("..NoPartyIDs..NoPartySubIDs");

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
    FIX::LastFragment LastFragment_9(false);
    noQuoteSets_0_0.set(LastFragment_9);
    QuotSetAckGrp_NoQuoteSets_0.insert(LastFragment_9.getString());
    FIX::QuoteSetID QuoteSetID_1("STRING_1129182489");
    noQuoteSets_0_0.set(QuoteSetID_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetID_1.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_1(FIX::UTCTIMESTAMP(6, 18, 9, 13, 7, 2004));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_1.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_0(1202538538);
    noQuoteSets_0_0.set(TotNoAccQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoAccQuotes_0.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_0(1275883767);
    noQuoteSets_0_0.set(TotNoCxldQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoCxldQuotes_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_1(1748921836);
    noQuoteSets_0_0.set(TotNoQuoteEntries_1);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_1.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_0(1548564434);
    noQuoteSets_0_0.set(TotNoRejQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoRejQuotes_0.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);
    all_compo_names.insert("..NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("6445894");
      noQuoteEntries_0_1_0.set(BidForwardPoints_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints_1.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("20944010");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints2_1.getString());
      FIX::BidPx BidPx_1;
      BidPx_1.setString("11207782");
      noQuoteEntries_0_1_0.set(BidPx_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidPx_1.getString());
      FIX::BidSize BidSize_1;
      BidSize_1.setString("8849977");
      noQuoteEntries_0_1_0.set(BidSize_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSize_1.getString());
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("11797279");
      noQuoteEntries_0_1_0.set(BidSpotRate_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSpotRate_1.getString());
      FIX::BidYield BidYield_1;
      BidYield_1.setString("67.320000");
      noQuoteEntries_0_1_0.set(BidYield_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidYield_1.getString());
      FIX::BookingType BookingType_6(0);
      noQuoteEntries_0_1_0.set(BookingType_6);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BookingType_6.getString());
      FIX::Currency Currency_26("USD");
      noQuoteEntries_0_1_0.set(Currency_26);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(Currency_26.getString());
      FIX::MidPx MidPx_1;
      MidPx_1.setString("2396639");
      noQuoteEntries_0_1_0.set(MidPx_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidPx_1.getString());
      FIX::MidYield MidYield_1;
      MidYield_1.setString("52.740000");
      noQuoteEntries_0_1_0.set(MidYield_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidYield_1.getString());
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("9219252");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints_1.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("4299966");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_1.getString());
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("907080");
      noQuoteEntries_0_1_0.set(OfferPx_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferPx_1.getString());
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("21300008");
      noQuoteEntries_0_1_0.set(OfferSize_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSize_1.getString());
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("16840033");
      noQuoteEntries_0_1_0.set(OfferSpotRate_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSpotRate_1.getString());
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("32.260000");
      noQuoteEntries_0_1_0.set(OfferYield_1);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferYield_1.getString());
      FIX::OrdType OrdType_9('7');
      noQuoteEntries_0_1_0.set(OrdType_9);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrdType_9.getString());
      FIX::OrderCapacity OrderCapacity_6('G');
      noQuoteEntries_0_1_0.set(OrderCapacity_6);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderCapacity_6.getString());
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("16119390");
      noQuoteEntries_0_1_0.set(OrderQty2_2);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderQty2_2.getString());
      FIX::OrderRestrictions OrderRestrictions_4("MULTIPLECHARVALUE_E");
      noQuoteEntries_0_1_0.set(OrderRestrictions_4);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderRestrictions_4.getString());
      FIX::QuoteEntryID QuoteEntryID_3("STRING_1047643999");
      noQuoteEntries_0_1_0.set(QuoteEntryID_3);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryID_3.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_0(393263873);
      noQuoteEntries_0_1_0.set(QuoteEntryRejectReason_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryRejectReason_0.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_0(12);
      noQuoteEntries_0_1_0.set(QuoteEntryStatus_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryStatus_0.getString());
      FIX::SettlDate SettlDate_18("LOCALMKTDATE_101261069");
      noQuoteEntries_0_1_0.set(SettlDate_18);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate_18.getString());
      FIX::SettlDate2 SettlDate2_2("LOCALMKTDATE_2099418699");
      noQuoteEntries_0_1_0.set(SettlDate2_2);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate2_2.getString());
      FIX::TradingSessionID TradingSessionID_20("STRING_6");
      noQuoteEntries_0_1_0.set(TradingSessionID_20);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionID_20.getString());
      FIX::TradingSessionSubID TradingSessionSubID_20("STRING_5");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_20);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionSubID_20.getString());
      FIX::TransactTime TransactTime_27(FIX::UTCTIMESTAMP(18, 43, 50, 17, 7, 2000));
      noQuoteEntries_0_1_0.set(TransactTime_27);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TransactTime_27.getString());
      FIX::ValidUntilTime ValidUntilTime_2(FIX::UTCTIMESTAMP(7, 12, 34, 1, 1, 2012));
      noQuoteEntries_0_1_0.set(ValidUntilTime_2);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(ValidUntilTime_2.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);
      all_compo_names.insert("..NoQuoteSets..NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_25;
        FIX::EncodedLegIssuer EncodedLegIssuer_25("DATA_78215542");
        noLegs_0_0_2_0.set(EncodedLegIssuer_25);
        InstrumentLeg_25.insert(EncodedLegIssuer_25.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_25(1627112654);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_25);
        InstrumentLeg_25.insert(EncodedLegIssuerLen_25.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_25("DATA_671419287");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_25);
        InstrumentLeg_25.insert(EncodedLegSecurityDesc_25.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_25(1762218922);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_25);
        InstrumentLeg_25.insert(EncodedLegSecurityDescLen_25.getString());
        FIX::LegCFICode LegCFICode_25("STRING_1794915880");
        noLegs_0_0_2_0.set(LegCFICode_25);
        InstrumentLeg_25.insert(LegCFICode_25.getString());
        FIX::LegContractMultiplier LegContractMultiplier_25;
        LegContractMultiplier_25.setString("2225137");
        noLegs_0_0_2_0.set(LegContractMultiplier_25);
        InstrumentLeg_25.insert(LegContractMultiplier_25.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_25(280437495);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_25);
        InstrumentLeg_25.insert(LegContractMultiplierUnit_25.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_25("MONTHYEAR_1259371284");
        noLegs_0_0_2_0.set(LegContractSettlMonth_25);
        InstrumentLeg_25.insert(LegContractSettlMonth_25.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_25("COUNTRY_1040656217");
        noLegs_0_0_2_0.set(LegCountryOfIssue_25);
        InstrumentLeg_25.insert(LegCountryOfIssue_25.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_25("LOCALMKTDATE_1328081494");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_25);
        InstrumentLeg_25.insert(LegCouponPaymentDate_25.getString());
        FIX::LegCouponRate LegCouponRate_25;
        LegCouponRate_25.setString("51.570000");
        noLegs_0_0_2_0.set(LegCouponRate_25);
        InstrumentLeg_25.insert(LegCouponRate_25.getString());
        FIX::LegCreditRating LegCreditRating_25("STRING_1768998438");
        noLegs_0_0_2_0.set(LegCreditRating_25);
        InstrumentLeg_25.insert(LegCreditRating_25.getString());
        FIX::LegCurrency LegCurrency_25("EUR");
        noLegs_0_0_2_0.set(LegCurrency_25);
        InstrumentLeg_25.insert(LegCurrency_25.getString());
        FIX::LegDatedDate LegDatedDate_25("LOCALMKTDATE_1552395550");
        noLegs_0_0_2_0.set(LegDatedDate_25);
        InstrumentLeg_25.insert(LegDatedDate_25.getString());
        FIX::LegExerciseStyle LegExerciseStyle_25(659003752);
        noLegs_0_0_2_0.set(LegExerciseStyle_25);
        InstrumentLeg_25.insert(LegExerciseStyle_25.getString());
        FIX::LegFactor LegFactor_25;
        LegFactor_25.setString("11579434");
        noLegs_0_0_2_0.set(LegFactor_25);
        InstrumentLeg_25.insert(LegFactor_25.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_25(736873448);
        noLegs_0_0_2_0.set(LegFlowScheduleType_25);
        InstrumentLeg_25.insert(LegFlowScheduleType_25.getString());
        FIX::LegInstrRegistry LegInstrRegistry_25("STRING_509317287");
        noLegs_0_0_2_0.set(LegInstrRegistry_25);
        InstrumentLeg_25.insert(LegInstrRegistry_25.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_25("LOCALMKTDATE_1355906179");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_25);
        InstrumentLeg_25.insert(LegInterestAccrualDate_25.getString());
        FIX::LegIssueDate LegIssueDate_25("LOCALMKTDATE_2015752409");
        noLegs_0_0_2_0.set(LegIssueDate_25);
        InstrumentLeg_25.insert(LegIssueDate_25.getString());
        FIX::LegIssuer LegIssuer_25("STRING_1480409025");
        noLegs_0_0_2_0.set(LegIssuer_25);
        InstrumentLeg_25.insert(LegIssuer_25.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_25("STRING_291382991");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_25);
        InstrumentLeg_25.insert(LegLocaleOfIssue_25.getString());
        FIX::LegMaturityDate LegMaturityDate_25("LOCALMKTDATE_179392049");
        noLegs_0_0_2_0.set(LegMaturityDate_25);
        InstrumentLeg_25.insert(LegMaturityDate_25.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_25("MONTHYEAR_1640453848");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_25);
        InstrumentLeg_25.insert(LegMaturityMonthYear_25.getString());
        FIX::LegMaturityTime LegMaturityTime_25("TZTIMEONLY_1847421564");
        noLegs_0_0_2_0.set(LegMaturityTime_25);
        InstrumentLeg_25.insert(LegMaturityTime_25.getString());
        FIX::LegOptAttribute LegOptAttribute_25('6');
        noLegs_0_0_2_0.set(LegOptAttribute_25);
        InstrumentLeg_25.insert(LegOptAttribute_25.getString());
        FIX::LegOptionRatio LegOptionRatio_25;
        LegOptionRatio_25.setString("14074306");
        noLegs_0_0_2_0.set(LegOptionRatio_25);
        InstrumentLeg_25.insert(LegOptionRatio_25.getString());
        FIX::LegPool LegPool_25("STRING_1495640416");
        noLegs_0_0_2_0.set(LegPool_25);
        InstrumentLeg_25.insert(LegPool_25.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_25("STRING_11492383");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_25);
        InstrumentLeg_25.insert(LegPriceUnitOfMeasure_25.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
        LegPriceUnitOfMeasureQty_25.setString("20963327");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_25);
        InstrumentLeg_25.insert(LegPriceUnitOfMeasureQty_25.getString());
        FIX::LegProduct LegProduct_25(1573855958);
        noLegs_0_0_2_0.set(LegProduct_25);
        InstrumentLeg_25.insert(LegProduct_25.getString());
        FIX::LegPutOrCall LegPutOrCall_25(1638605037);
        noLegs_0_0_2_0.set(LegPutOrCall_25);
        InstrumentLeg_25.insert(LegPutOrCall_25.getString());
        FIX::LegRatioQty LegRatioQty_25;
        LegRatioQty_25.setString("6202683");
        noLegs_0_0_2_0.set(LegRatioQty_25);
        InstrumentLeg_25.insert(LegRatioQty_25.getString());
        FIX::LegRedemptionDate LegRedemptionDate_25("LOCALMKTDATE_1188591232");
        noLegs_0_0_2_0.set(LegRedemptionDate_25);
        InstrumentLeg_25.insert(LegRedemptionDate_25.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_25("STRING_1286037270");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_25);
        InstrumentLeg_25.insert(LegRepoCollateralSecurityType_25.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_25;
        LegRepurchaseRate_25.setString("20.690000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_25);
        InstrumentLeg_25.insert(LegRepurchaseRate_25.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_25(1469028727);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_25);
        InstrumentLeg_25.insert(LegRepurchaseTerm_25.getString());
        FIX::LegSecurityDesc LegSecurityDesc_25("STRING_397924906");
        noLegs_0_0_2_0.set(LegSecurityDesc_25);
        InstrumentLeg_25.insert(LegSecurityDesc_25.getString());
        FIX::LegSecurityExchange LegSecurityExchange_25("EXCHANGE_1883438287");
        noLegs_0_0_2_0.set(LegSecurityExchange_25);
        InstrumentLeg_25.insert(LegSecurityExchange_25.getString());
        FIX::LegSecurityID LegSecurityID_25("STRING_649626573");
        noLegs_0_0_2_0.set(LegSecurityID_25);
        InstrumentLeg_25.insert(LegSecurityID_25.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_25("STRING_2050560064");
        noLegs_0_0_2_0.set(LegSecurityIDSource_25);
        InstrumentLeg_25.insert(LegSecurityIDSource_25.getString());
        FIX::LegSecuritySubType LegSecuritySubType_25("STRING_1504953077");
        noLegs_0_0_2_0.set(LegSecuritySubType_25);
        InstrumentLeg_25.insert(LegSecuritySubType_25.getString());
        FIX::LegSecurityType LegSecurityType_25("STRING_2078969137");
        noLegs_0_0_2_0.set(LegSecurityType_25);
        InstrumentLeg_25.insert(LegSecurityType_25.getString());
        FIX::LegSide LegSide_25('1');
        noLegs_0_0_2_0.set(LegSide_25);
        InstrumentLeg_25.insert(LegSide_25.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_25("STRING_909864979");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_25);
        InstrumentLeg_25.insert(LegStateOrProvinceOfIssue_25.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_25("USD");
        noLegs_0_0_2_0.set(LegStrikeCurrency_25);
        InstrumentLeg_25.insert(LegStrikeCurrency_25.getString());
        FIX::LegStrikePrice LegStrikePrice_25;
        LegStrikePrice_25.setString("16467384");
        noLegs_0_0_2_0.set(LegStrikePrice_25);
        InstrumentLeg_25.insert(LegStrikePrice_25.getString());
        FIX::LegSymbol LegSymbol_25("STRING_1099806528");
        noLegs_0_0_2_0.set(LegSymbol_25);
        InstrumentLeg_25.insert(LegSymbol_25.getString());
        FIX::LegSymbolSfx LegSymbolSfx_25("STRING_1874012605");
        noLegs_0_0_2_0.set(LegSymbolSfx_25);
        InstrumentLeg_25.insert(LegSymbolSfx_25.getString());
        FIX::LegTimeUnit LegTimeUnit_25("STRING_1515007188");
        noLegs_0_0_2_0.set(LegTimeUnit_25);
        InstrumentLeg_25.insert(LegTimeUnit_25.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_25("STRING_432731905");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_25);
        InstrumentLeg_25.insert(LegUnitOfMeasure_25.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
        LegUnitOfMeasureQty_25.setString("179119");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_25);
        InstrumentLeg_25.insert(LegUnitOfMeasureQty_25.getString());
        all_values.push_back(InstrumentLeg_25);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries..NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
          FIX::LegSecurityAltID LegSecurityAltID_25("STRING_2073185754");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_25);
          LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltID_25.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_25("STRING_1865333513");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_25);
          LegSecAltIDGrp_NoLegSecurityAltID_25.insert(LegSecurityAltIDSource_25.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);
          all_compo_names.insert("..NoQuoteSets..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_28;
      FIX::AttachmentPoint AttachmentPoint_28;
      AttachmentPoint_28.setString("69.920000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_28);
      Instrument_28.insert(AttachmentPoint_28.getString());
      FIX::CFICode CFICode_28("STRING_1333132772");
      noQuoteEntries_0_1_0.set(CFICode_28);
      Instrument_28.insert(CFICode_28.getString());
      FIX::CPProgram CPProgram_28(2);
      noQuoteEntries_0_1_0.set(CPProgram_28);
      Instrument_28.insert(CPProgram_28.getString());
      FIX::CPRegType CPRegType_28("STRING_180979376");
      noQuoteEntries_0_1_0.set(CPRegType_28);
      Instrument_28.insert(CPRegType_28.getString());
      FIX::CapPrice CapPrice_28;
      CapPrice_28.setString("12819818");
      noQuoteEntries_0_1_0.set(CapPrice_28);
      Instrument_28.insert(CapPrice_28.getString());
      FIX::ContractMultiplier ContractMultiplier_28;
      ContractMultiplier_28.setString("6398625");
      noQuoteEntries_0_1_0.set(ContractMultiplier_28);
      Instrument_28.insert(ContractMultiplier_28.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_28(2);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_28);
      Instrument_28.insert(ContractMultiplierUnit_28.getString());
      FIX::ContractSettlMonth ContractSettlMonth_28("MONTHYEAR_1902250204");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_28);
      Instrument_28.insert(ContractSettlMonth_28.getString());
      FIX::CountryOfIssue CountryOfIssue_28("COUNTRY_1828453824");
      noQuoteEntries_0_1_0.set(CountryOfIssue_28);
      Instrument_28.insert(CountryOfIssue_28.getString());
      FIX::CouponPaymentDate CouponPaymentDate_28("LOCALMKTDATE_958138035");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_28);
      Instrument_28.insert(CouponPaymentDate_28.getString());
      FIX::CouponRate CouponRate_28;
      CouponRate_28.setString("86.260000");
      noQuoteEntries_0_1_0.set(CouponRate_28);
      Instrument_28.insert(CouponRate_28.getString());
      FIX::CreditRating CreditRating_28("STRING_1149998903");
      noQuoteEntries_0_1_0.set(CreditRating_28);
      Instrument_28.insert(CreditRating_28.getString());
      FIX::DatedDate DatedDate_28("LOCALMKTDATE_1356062942");
      noQuoteEntries_0_1_0.set(DatedDate_28);
      Instrument_28.insert(DatedDate_28.getString());
      FIX::DetachmentPoint DetachmentPoint_28;
      DetachmentPoint_28.setString("32.650000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_28);
      Instrument_28.insert(DetachmentPoint_28.getString());
      FIX::EncodedIssuer EncodedIssuer_28("DATA_1799625477");
      noQuoteEntries_0_1_0.set(EncodedIssuer_28);
      Instrument_28.insert(EncodedIssuer_28.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_28(1259139358);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_28);
      Instrument_28.insert(EncodedIssuerLen_28.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_28("DATA_1838456342");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_28);
      Instrument_28.insert(EncodedSecurityDesc_28.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_28(1731110966);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_28);
      Instrument_28.insert(EncodedSecurityDescLen_28.getString());
      FIX::ExerciseStyle ExerciseStyle_28(2);
      noQuoteEntries_0_1_0.set(ExerciseStyle_28);
      Instrument_28.insert(ExerciseStyle_28.getString());
      FIX::Factor Factor_28;
      Factor_28.setString("6008376");
      noQuoteEntries_0_1_0.set(Factor_28);
      Instrument_28.insert(Factor_28.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_28(false);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_28);
      Instrument_28.insert(FlexProductEligibilityIndicator_28.getString());
      FIX::FlexibleIndicator FlexibleIndicator_28(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_28);
      Instrument_28.insert(FlexibleIndicator_28.getString());
      FIX::FloorPrice FloorPrice_28;
      FloorPrice_28.setString("1000924");
      noQuoteEntries_0_1_0.set(FloorPrice_28);
      Instrument_28.insert(FloorPrice_28.getString());
      FIX::FlowScheduleType FlowScheduleType_28(2);
      noQuoteEntries_0_1_0.set(FlowScheduleType_28);
      Instrument_28.insert(FlowScheduleType_28.getString());
      FIX::InstrRegistry InstrRegistry_28("STRING_863937718");
      noQuoteEntries_0_1_0.set(InstrRegistry_28);
      Instrument_28.insert(InstrRegistry_28.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_28('1');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_28);
      Instrument_28.insert(InstrmtAssignmentMethod_28.getString());
      FIX::InterestAccrualDate InterestAccrualDate_28("LOCALMKTDATE_1706654992");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_28);
      Instrument_28.insert(InterestAccrualDate_28.getString());
      FIX::IssueDate IssueDate_28("LOCALMKTDATE_881849667");
      noQuoteEntries_0_1_0.set(IssueDate_28);
      Instrument_28.insert(IssueDate_28.getString());
      FIX::Issuer Issuer_28("STRING_1162015231");
      noQuoteEntries_0_1_0.set(Issuer_28);
      Instrument_28.insert(Issuer_28.getString());
      FIX::ListMethod ListMethod_28(0);
      noQuoteEntries_0_1_0.set(ListMethod_28);
      Instrument_28.insert(ListMethod_28.getString());
      FIX::LocaleOfIssue LocaleOfIssue_28("STRING_599699532");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_28);
      Instrument_28.insert(LocaleOfIssue_28.getString());
      FIX::MaturityDate MaturityDate_28("LOCALMKTDATE_1331502224");
      noQuoteEntries_0_1_0.set(MaturityDate_28);
      Instrument_28.insert(MaturityDate_28.getString());
      FIX::MaturityMonthYear MaturityMonthYear_28("MONTHYEAR_818006222");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_28);
      Instrument_28.insert(MaturityMonthYear_28.getString());
      FIX::MaturityTime MaturityTime_28("TZTIMEONLY_1813189813");
      noQuoteEntries_0_1_0.set(MaturityTime_28);
      Instrument_28.insert(MaturityTime_28.getString());
      FIX::MinPriceIncrement MinPriceIncrement_28;
      MinPriceIncrement_28.setString("15124816");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_28);
      Instrument_28.insert(MinPriceIncrement_28.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
      MinPriceIncrementAmount_28.setString("20999880");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_28);
      Instrument_28.insert(MinPriceIncrementAmount_28.getString());
      FIX::NTPositionLimit NTPositionLimit_28(305568757);
      noQuoteEntries_0_1_0.set(NTPositionLimit_28);
      Instrument_28.insert(NTPositionLimit_28.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
      NotionalPercentageOutstanding_28.setString("23.650000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_28);
      Instrument_28.insert(NotionalPercentageOutstanding_28.getString());
      FIX::OptAttribute OptAttribute_28('1');
      noQuoteEntries_0_1_0.set(OptAttribute_28);
      Instrument_28.insert(OptAttribute_28.getString());
      FIX::OptPayoutAmount OptPayoutAmount_28;
      OptPayoutAmount_28.setString("21340225");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_28);
      Instrument_28.insert(OptPayoutAmount_28.getString());
      FIX::OptPayoutType OptPayoutType_28(3);
      noQuoteEntries_0_1_0.set(OptPayoutType_28);
      Instrument_28.insert(OptPayoutType_28.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
      OriginalNotionalPercentageOutstanding_28.setString("96.010000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_28);
      Instrument_28.insert(OriginalNotionalPercentageOutstanding_28.getString());
      FIX::Pool Pool_28("STRING_1136537836");
      noQuoteEntries_0_1_0.set(Pool_28);
      Instrument_28.insert(Pool_28.getString());
      FIX::PositionLimit PositionLimit_28(1351299695);
      noQuoteEntries_0_1_0.set(PositionLimit_28);
      Instrument_28.insert(PositionLimit_28.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_28("STRING_INT");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_28);
      Instrument_28.insert(PriceQuoteMethod_28.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_28("STRING_788679665");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_28);
      Instrument_28.insert(PriceUnitOfMeasure_28.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
      PriceUnitOfMeasureQty_28.setString("4629554");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_28);
      Instrument_28.insert(PriceUnitOfMeasureQty_28.getString());
      FIX::Product Product_30(11);
      noQuoteEntries_0_1_0.set(Product_30);
      Instrument_28.insert(Product_30.getString());
      FIX::ProductComplex ProductComplex_28("STRING_372306983");
      noQuoteEntries_0_1_0.set(ProductComplex_28);
      Instrument_28.insert(ProductComplex_28.getString());
      FIX::PutOrCall PutOrCall_28(0);
      noQuoteEntries_0_1_0.set(PutOrCall_28);
      Instrument_28.insert(PutOrCall_28.getString());
      FIX::RedemptionDate RedemptionDate_28("LOCALMKTDATE_930133235");
      noQuoteEntries_0_1_0.set(RedemptionDate_28);
      Instrument_28.insert(RedemptionDate_28.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_28("STRING_546423542");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_28);
      Instrument_28.insert(RepoCollateralSecurityType_28.getString());
      FIX::RepurchaseRate RepurchaseRate_28;
      RepurchaseRate_28.setString("28.530000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_28);
      Instrument_28.insert(RepurchaseRate_28.getString());
      FIX::RepurchaseTerm RepurchaseTerm_28(1030225688);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_28);
      Instrument_28.insert(RepurchaseTerm_28.getString());
      FIX::RestructuringType RestructuringType_28("STRING_MR");
      noQuoteEntries_0_1_0.set(RestructuringType_28);
      Instrument_28.insert(RestructuringType_28.getString());
      FIX::SecurityDesc SecurityDesc_28("STRING_936120571");
      noQuoteEntries_0_1_0.set(SecurityDesc_28);
      Instrument_28.insert(SecurityDesc_28.getString());
      FIX::SecurityExchange SecurityExchange_28("EXCHANGE_497841682");
      noQuoteEntries_0_1_0.set(SecurityExchange_28);
      Instrument_28.insert(SecurityExchange_28.getString());
      FIX::SecurityGroup SecurityGroup_28("STRING_1379517974");
      noQuoteEntries_0_1_0.set(SecurityGroup_28);
      Instrument_28.insert(SecurityGroup_28.getString());
      FIX::SecurityID SecurityID_28("STRING_1817970239");
      noQuoteEntries_0_1_0.set(SecurityID_28);
      Instrument_28.insert(SecurityID_28.getString());
      FIX::SecurityIDSource SecurityIDSource_28("STRING_D");
      noQuoteEntries_0_1_0.set(SecurityIDSource_28);
      Instrument_28.insert(SecurityIDSource_28.getString());
      FIX::SecurityStatus SecurityStatus_28("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityStatus_28);
      Instrument_28.insert(SecurityStatus_28.getString());
      FIX::SecuritySubType SecuritySubType_29("STRING_270186123");
      noQuoteEntries_0_1_0.set(SecuritySubType_29);
      Instrument_28.insert(SecuritySubType_29.getString());
      FIX::SecurityType SecurityType_30("STRING_OOC");
      noQuoteEntries_0_1_0.set(SecurityType_30);
      Instrument_28.insert(SecurityType_30.getString());
      FIX::Seniority Seniority_28("STRING_SB");
      noQuoteEntries_0_1_0.set(Seniority_28);
      Instrument_28.insert(Seniority_28.getString());
      FIX::SettlMethod SettlMethod_28('P');
      noQuoteEntries_0_1_0.set(SettlMethod_28);
      Instrument_28.insert(SettlMethod_28.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_28("STRING_208873442");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_28);
      Instrument_28.insert(SettleOnOpenFlag_28.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_28("STRING_1634902066");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_28);
      Instrument_28.insert(StateOrProvinceOfIssue_28.getString());
      FIX::StrikeCurrency StrikeCurrency_28("CHF");
      noQuoteEntries_0_1_0.set(StrikeCurrency_28);
      Instrument_28.insert(StrikeCurrency_28.getString());
      FIX::StrikeMultiplier StrikeMultiplier_28;
      StrikeMultiplier_28.setString("13421730");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_28);
      Instrument_28.insert(StrikeMultiplier_28.getString());
      FIX::StrikePrice StrikePrice_28;
      StrikePrice_28.setString("2279999");
      noQuoteEntries_0_1_0.set(StrikePrice_28);
      Instrument_28.insert(StrikePrice_28.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_28(1);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_28);
      Instrument_28.insert(StrikePriceBoundaryMethod_28.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
      StrikePriceBoundaryPrecision_28.setString("26.430000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_28);
      Instrument_28.insert(StrikePriceBoundaryPrecision_28.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_28(4);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_28);
      Instrument_28.insert(StrikePriceDeterminationMethod_28.getString());
      FIX::StrikeValue StrikeValue_28;
      StrikeValue_28.setString("5925086");
      noQuoteEntries_0_1_0.set(StrikeValue_28);
      Instrument_28.insert(StrikeValue_28.getString());
      FIX::Symbol Symbol_28("STRING_137831861");
      noQuoteEntries_0_1_0.set(Symbol_28);
      Instrument_28.insert(Symbol_28.getString());
      FIX::SymbolSfx SymbolSfx_28("STRING_WI");
      noQuoteEntries_0_1_0.set(SymbolSfx_28);
      Instrument_28.insert(SymbolSfx_28.getString());
      FIX::TimeUnit TimeUnit_28("STRING_Min");
      noQuoteEntries_0_1_0.set(TimeUnit_28);
      Instrument_28.insert(TimeUnit_28.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_28(3);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_28);
      Instrument_28.insert(UnderlyingPriceDeterminationMethod_28.getString());
      FIX::UnitOfMeasure UnitOfMeasure_28("STRING_tn");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_28);
      Instrument_28.insert(UnitOfMeasure_28.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
      UnitOfMeasureQty_28.setString("21377217");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_28);
      Instrument_28.insert(UnitOfMeasureQty_28.getString());
      FIX::ValuationMethod ValuationMethod_28("STRING_FUTDA");
      noQuoteEntries_0_1_0.set(ValuationMethod_28);
      Instrument_28.insert(ValuationMethod_28.getString());
      all_values.push_back(Instrument_28);
      all_compo_names.insert("..NoQuoteSets..NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_28;
        FIX::ComplexEventCondition ComplexEventCondition_28(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexEventCondition_28.getString());
        FIX::ComplexEventPrice ComplexEventPrice_28;
        ComplexEventPrice_28.setString("2800026");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexEventPrice_28.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_28(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryMethod_28.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
        ComplexEventPriceBoundaryPrecision_28.setString("15.290000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryPrecision_28.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_28(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceTimeType_28.getString());
        FIX::ComplexEventType ComplexEventType_28(4);
        noComplexEvents_0_0_2_0.set(ComplexEventType_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexEventType_28.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
        ComplexOptPayoutAmount_28.setString("6690281");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_28);
        ComplexEvents_NoComplexEvents_28.insert(ComplexOptPayoutAmount_28.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_28);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_28;
          FIX::ComplexEventEndDate ComplexEventEndDate_28(FIX::UTCTIMESTAMP(19, 16, 10, 20, 7, 2014));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_28);
          ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventEndDate_28.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_28(FIX::UTCTIMESTAMP(2, 29, 17, 6, 9, 2017));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_28);
          ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventStartDate_28.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_28);
          all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
            FIX::ComplexEventEndTime ComplexEventEndTime_28(FIX::UTCTIMEONLY(22, 50, 28));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_28);
            ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventEndTime_28.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_28(FIX::UTCTIMEONLY(23, 58, 33));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_28);
            ComplexEventTimes_NoComplexEventTimes_28.insert(ComplexEventStartTime_28.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);
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
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_28;
        FIX::EventDate EventDate_28("LOCALMKTDATE_692506536");
        noEvents_0_0_2_0.set(EventDate_28);
        EvntGrp_NoEvents_28.insert(EventDate_28.getString());
        FIX::EventPx EventPx_28;
        EventPx_28.setString("3197044");
        noEvents_0_0_2_0.set(EventPx_28);
        EvntGrp_NoEvents_28.insert(EventPx_28.getString());
        FIX::EventText EventText_28("STRING_381837213");
        noEvents_0_0_2_0.set(EventText_28);
        EvntGrp_NoEvents_28.insert(EventText_28.getString());
        FIX::EventTime EventTime_28(FIX::UTCTIMESTAMP(4, 13, 23, 3, 10, 2013));
        noEvents_0_0_2_0.set(EventTime_28);
        EvntGrp_NoEvents_28.insert(EventTime_28.getString());
        FIX::EventType EventType_28(14);
        noEvents_0_0_2_0.set(EventType_28);
        EvntGrp_NoEvents_28.insert(EventType_28.getString());
        all_values.push_back(EvntGrp_NoEvents_28);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_28;
        FIX::InstrumentPartyID InstrumentPartyID_28("STRING_2090144630");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_28);
        InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyID_28.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_28('7');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_28);
        InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyIDSource_28.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_28(1834270040);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_28);
        InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyRole_28.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_28);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
          FIX::InstrumentPartySubID InstrumentPartySubID_28("STRING_1845830331");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_28);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubID_28.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_28(1031353949);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_28);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubIDType_28.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);
          all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_28;
        FIX::SecurityAltID SecurityAltID_28("STRING_256114227");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_28);
        SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltID_28.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_28("STRING_1592975674");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_28);
        SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltIDSource_28.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_56;
      FIX::SecurityXML SecurityXML_57("XMLDATA_784403628");
      noQuoteEntries_0_1_0.set(SecurityXML_57);
      FIX::SecurityXMLLen SecurityXMLLen_28(951713633);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_28);
      FIX::SecurityXMLSchema SecurityXMLSchema_28("STRING_12847584");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_28);
      SecurityXML_56.insert(SecurityXMLSchema_28.getString());
      all_values.push_back(SecurityXML_56);
      all_compo_names.insert("..NoQuoteSets..NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_28;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_28("DATA_115040251");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuer_28.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_28(2114440462);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingIssuerLen_28.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_28("DATA_958243959");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDesc_28.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_28(1583398626);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_28);
    UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDescLen_28.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
    UnderlyingAdjustedQuantity_28.setString("3794606");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_28);
    UnderlyingInstrument_28.insert(UnderlyingAdjustedQuantity_28.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
    UnderlyingAllocationPercent_28.setString("10.440000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_28);
    UnderlyingInstrument_28.insert(UnderlyingAllocationPercent_28.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
    UnderlyingAttachmentPoint_28.setString("43.100000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingAttachmentPoint_28.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_28("STRING_1071967188");
    noQuoteSets_0_0.set(UnderlyingCFICode_28);
    UnderlyingInstrument_28.insert(UnderlyingCFICode_28.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_28("STRING_1000325470");
    noQuoteSets_0_0.set(UnderlyingCPProgram_28);
    UnderlyingInstrument_28.insert(UnderlyingCPProgram_28.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_28("STRING_1348531524");
    noQuoteSets_0_0.set(UnderlyingCPRegType_28);
    UnderlyingInstrument_28.insert(UnderlyingCPRegType_28.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_28;
    UnderlyingCapValue_28.setString("3948344");
    noQuoteSets_0_0.set(UnderlyingCapValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCapValue_28.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
    UnderlyingCashAmount_28.setString("11493915");
    noQuoteSets_0_0.set(UnderlyingCashAmount_28);
    UnderlyingInstrument_28.insert(UnderlyingCashAmount_28.getString());
    FIX::UnderlyingCashType UnderlyingCashType_28("STRING_DIFF");
    noQuoteSets_0_0.set(UnderlyingCashType_28);
    UnderlyingInstrument_28.insert(UnderlyingCashType_28.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
    UnderlyingContractMultiplier_28.setString("79193");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplier_28.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_28(1992210746);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingContractMultiplierUnit_28.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_28("COUNTRY_94509138");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingCountryOfIssue_28.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_28("LOCALMKTDATE_755097423");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponPaymentDate_28.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
    UnderlyingCouponRate_28.setString("33.720000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_28);
    UnderlyingInstrument_28.insert(UnderlyingCouponRate_28.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_28("STRING_812211600");
    noQuoteSets_0_0.set(UnderlyingCreditRating_28);
    UnderlyingInstrument_28.insert(UnderlyingCreditRating_28.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_28("EUR");
    noQuoteSets_0_0.set(UnderlyingCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrency_28.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
    UnderlyingCurrentValue_28.setString("4989979");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_28);
    UnderlyingInstrument_28.insert(UnderlyingCurrentValue_28.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
    UnderlyingDetachmentPoint_28.setString("81.250000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_28);
    UnderlyingInstrument_28.insert(UnderlyingDetachmentPoint_28.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
    UnderlyingDirtyPrice_28.setString("14021318");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingDirtyPrice_28.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
    UnderlyingEndPrice_28.setString("15303519");
    noQuoteSets_0_0.set(UnderlyingEndPrice_28);
    UnderlyingInstrument_28.insert(UnderlyingEndPrice_28.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_28;
    UnderlyingEndValue_28.setString("15911054");
    noQuoteSets_0_0.set(UnderlyingEndValue_28);
    UnderlyingInstrument_28.insert(UnderlyingEndValue_28.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_28(1658246064);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_28);
    UnderlyingInstrument_28.insert(UnderlyingExerciseStyle_28.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_28;
    UnderlyingFXRate_28.setString("9758439");
    noQuoteSets_0_0.set(UnderlyingFXRate_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRate_28.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_28('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_28);
    UnderlyingInstrument_28.insert(UnderlyingFXRateCalc_28.getString());
    FIX::UnderlyingFactor UnderlyingFactor_28;
    UnderlyingFactor_28.setString("4624760");
    noQuoteSets_0_0.set(UnderlyingFactor_28);
    UnderlyingInstrument_28.insert(UnderlyingFactor_28.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_28(988691552);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_28);
    UnderlyingInstrument_28.insert(UnderlyingFlowScheduleType_28.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_28("STRING_343065727");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_28);
    UnderlyingInstrument_28.insert(UnderlyingInstrRegistry_28.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_28("LOCALMKTDATE_429432863");
    noQuoteSets_0_0.set(UnderlyingIssueDate_28);
    UnderlyingInstrument_28.insert(UnderlyingIssueDate_28.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_28("STRING_1946935511");
    noQuoteSets_0_0.set(UnderlyingIssuer_28);
    UnderlyingInstrument_28.insert(UnderlyingIssuer_28.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_28("STRING_1926464353");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingLocaleOfIssue_28.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_28("LOCALMKTDATE_808893515");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityDate_28.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_28("MONTHYEAR_480072908");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityMonthYear_28.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_28("TZTIMEONLY_745675015");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_28);
    UnderlyingInstrument_28.insert(UnderlyingMaturityTime_28.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
    UnderlyingNotionalPercentageOutstanding_28.setString("7.030000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_28('1');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_28);
    UnderlyingInstrument_28.insert(UnderlyingOptAttribute_28.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
    UnderlyingOriginalNotionalPercentageOutstanding_28.setString("65.390000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_28);
    UnderlyingInstrument_28.insert(UnderlyingOriginalNotionalPercentageOutstanding_28.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_28("STRING_128211512");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasure_28.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
    UnderlyingPriceUnitOfMeasureQty_28.setString("4823062");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasureQty_28.getString());
    FIX::UnderlyingProduct UnderlyingProduct_28(198636101);
    noQuoteSets_0_0.set(UnderlyingProduct_28);
    UnderlyingInstrument_28.insert(UnderlyingProduct_28.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_28(136130883);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_28);
    UnderlyingInstrument_28.insert(UnderlyingPutOrCall_28.getString());
    FIX::UnderlyingPx UnderlyingPx_28;
    UnderlyingPx_28.setString("3270333");
    noQuoteSets_0_0.set(UnderlyingPx_28);
    UnderlyingInstrument_28.insert(UnderlyingPx_28.getString());
    FIX::UnderlyingQty UnderlyingQty_28;
    UnderlyingQty_28.setString("2931452");
    noQuoteSets_0_0.set(UnderlyingQty_28);
    UnderlyingInstrument_28.insert(UnderlyingQty_28.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_28("LOCALMKTDATE_891228306");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_28);
    UnderlyingInstrument_28.insert(UnderlyingRedemptionDate_28.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_28("STRING_1243246764");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingRepoCollateralSecurityType_28.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
    UnderlyingRepurchaseRate_28.setString("68.390000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseRate_28.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_28(1588986711);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_28);
    UnderlyingInstrument_28.insert(UnderlyingRepurchaseTerm_28.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_28("STRING_799548269");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_28);
    UnderlyingInstrument_28.insert(UnderlyingRestructuringType_28.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_28("STRING_1604354831");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityDesc_28.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_28("EXCHANGE_670861188");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityExchange_28.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_28("STRING_54196458");
    noQuoteSets_0_0.set(UnderlyingSecurityID_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityID_28.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_28("STRING_987223125");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityIDSource_28.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_28("STRING_114483036");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecuritySubType_28.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_28("STRING_1712442522");
    noQuoteSets_0_0.set(UnderlyingSecurityType_28);
    UnderlyingInstrument_28.insert(UnderlyingSecurityType_28.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_28("STRING_1963067093");
    noQuoteSets_0_0.set(UnderlyingSeniority_28);
    UnderlyingInstrument_28.insert(UnderlyingSeniority_28.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_28("STRING_342508512");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlMethod_28.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_28(4);
    noQuoteSets_0_0.set(UnderlyingSettlementType_28);
    UnderlyingInstrument_28.insert(UnderlyingSettlementType_28.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_28;
    UnderlyingStartValue_28.setString("8042749");
    noQuoteSets_0_0.set(UnderlyingStartValue_28);
    UnderlyingInstrument_28.insert(UnderlyingStartValue_28.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_28("STRING_685574239");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_28);
    UnderlyingInstrument_28.insert(UnderlyingStateOrProvinceOfIssue_28.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_28("CHF");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikeCurrency_28.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
    UnderlyingStrikePrice_28.setString("4645549");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_28);
    UnderlyingInstrument_28.insert(UnderlyingStrikePrice_28.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_28("STRING_1265761302");
    noQuoteSets_0_0.set(UnderlyingSymbol_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbol_28.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_28("STRING_1083799769");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_28);
    UnderlyingInstrument_28.insert(UnderlyingSymbolSfx_28.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_28("STRING_1210229959");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_28);
    UnderlyingInstrument_28.insert(UnderlyingTimeUnit_28.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_28("STRING_999138358");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasure_28.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
    UnderlyingUnitOfMeasureQty_28.setString("4167144");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_28);
    UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasureQty_28.getString());
    all_values.push_back(UnderlyingInstrument_28);
    all_compo_names.insert("..NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_28("STRING_1127349870");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltID_28.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_28("STRING_899020793");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltIDSource_28.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      all_compo_names.insert("..NoQuoteSets...NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      FIX::UnderlyingStipType UnderlyingStipType_28("STRING_1263480753");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipType_28.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_28("STRING_1226054185");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipValue_28.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);
      all_compo_names.insert("..NoQuoteSets...NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_28("STRING_7225412");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyID_28.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_28('3');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyIDSource_28.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_28(606607383);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyRole_28.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      all_compo_names.insert("..NoQuoteSets...NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_28("STRING_1121365570");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubID_28.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_28(63478566);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubIDType_28.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        all_compo_names.insert("..NoQuoteSets...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noQuoteSets_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_0;
    FIX::TargetPartyID TargetPartyID_0("STRING_1175562028");
    noTargetPartyIDs_0_0.set(TargetPartyID_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyID_0.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_0('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyIDSource_0.getString());
    FIX::TargetPartyRole TargetPartyRole_0(234072700);
    noTargetPartyIDs_0_0.set(TargetPartyRole_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyRole_0.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);
    all_compo_names.insert("..NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
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

  for (const auto &l : all_values) {
      bool found = false;
   for (const auto &xml_l : elt_lists) {
       if ( l == xml_l) {
           found = true;
           break;
       }
   }
   if ( ! found ) {
       cout << " ------> CANDIDATE " << endl;
       copy(l.begin(), l.end(), ostream_iterator<string>(cout, ", "));
       cout << endl;
   }
 }

}
