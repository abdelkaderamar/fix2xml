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
  multiset<string> MassQuoteAcknowledgement_0;
  FIX::Account Account_11("STRING_1864380455");
  msg.set(Account_11);
  MassQuoteAcknowledgement_0.insert(Account_11.getString());
  FIX::AccountType AccountType_10(6);
  msg.set(AccountType_10);
  MassQuoteAcknowledgement_0.insert(AccountType_10.getString());
  FIX::AcctIDSource AcctIDSource_4(1);
  msg.set(AcctIDSource_4);
  MassQuoteAcknowledgement_0.insert(AcctIDSource_4.getString());
  FIX::EncodedText EncodedText_49("DATA_1118955228");
  msg.set(EncodedText_49);
  MassQuoteAcknowledgement_0.insert(EncodedText_49.getString());
  FIX::EncodedTextLen EncodedTextLen_49(130100922);
  msg.set(EncodedTextLen_49);
  MassQuoteAcknowledgement_0.insert(EncodedTextLen_49.getString());
  FIX::QuoteCancelType QuoteCancelType_0(6);
  msg.set(QuoteCancelType_0);
  MassQuoteAcknowledgement_0.insert(QuoteCancelType_0.getString());
  FIX::QuoteID QuoteID_2("STRING_971379337");
  msg.set(QuoteID_2);
  MassQuoteAcknowledgement_0.insert(QuoteID_2.getString());
  FIX::QuoteRejectReason QuoteRejectReason_0(13);
  msg.set(QuoteRejectReason_0);
  MassQuoteAcknowledgement_0.insert(QuoteRejectReason_0.getString());
  FIX::QuoteReqID QuoteReqID_1("STRING_1196184736");
  msg.set(QuoteReqID_1);
  MassQuoteAcknowledgement_0.insert(QuoteReqID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_1(3);
  msg.set(QuoteResponseLevel_1);
  MassQuoteAcknowledgement_0.insert(QuoteResponseLevel_1.getString());
  FIX::QuoteStatus QuoteStatus_0(13);
  msg.set(QuoteStatus_0);
  MassQuoteAcknowledgement_0.insert(QuoteStatus_0.getString());
  FIX::QuoteType QuoteType_3(2);
  msg.set(QuoteType_3);
  MassQuoteAcknowledgement_0.insert(QuoteType_3.getString());
  FIX::Text Text_49("STRING_1058771419");
  msg.set(Text_49);
  MassQuoteAcknowledgement_0.insert(Text_49.getString());
  all_values.push_back(MassQuoteAcknowledgement_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_56;
    FIX::PartyID PartyID_56("STRING_1401405899");
    noPartyIDs_0_0.set(PartyID_56);
    Parties_NoPartyIDs_56.insert(PartyID_56.getString());
    FIX::PartyIDSource PartyIDSource_56('8');
    noPartyIDs_0_0.set(PartyIDSource_56);
    Parties_NoPartyIDs_56.insert(PartyIDSource_56.getString());
    FIX::PartyRole PartyRole_56(76);
    noPartyIDs_0_0.set(PartyRole_56);
    Parties_NoPartyIDs_56.insert(PartyRole_56.getString());
    all_values.push_back(Parties_NoPartyIDs_56);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_112;
      FIX::PartySubID PartySubID_112("STRING_1152038517");
      noPartySubIDs_0_1_0.set(PartySubID_112);
      PtysSubGrp_NoPartySubIDs_112.insert(PartySubID_112.getString());
      FIX::PartySubIDType PartySubIDType_112(19);
      noPartySubIDs_0_1_0.set(PartySubIDType_112);
      PtysSubGrp_NoPartySubIDs_112.insert(PartySubIDType_112.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_112);

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
    FIX::LastFragment LastFragment_11(false);
    noQuoteSets_0_0.set(LastFragment_11);
    QuotSetAckGrp_NoQuoteSets_0.insert(LastFragment_11.getString());
    FIX::QuoteSetID QuoteSetID_3("STRING_350421986");
    noQuoteSets_0_0.set(QuoteSetID_3);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetID_3.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_3(FIX::UTCTIMESTAMP(0, 30, 20, 0, 12, 2011));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_3);
    QuotSetAckGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_3.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_0(765343211);
    noQuoteSets_0_0.set(TotNoAccQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoAccQuotes_0.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_0(2141057938);
    noQuoteSets_0_0.set(TotNoCxldQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoCxldQuotes_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_3(1970591079);
    noQuoteSets_0_0.set(TotNoQuoteEntries_3);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_3.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_0(1852271231);
    noQuoteSets_0_0.set(TotNoRejQuotes_0);
    QuotSetAckGrp_NoQuoteSets_0.insert(TotNoRejQuotes_0.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_7;
      BidForwardPoints_7.setString("21006920");
      noQuoteEntries_0_1_0.set(BidForwardPoints_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints_7.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_7;
      BidForwardPoints2_7.setString("11005517");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidForwardPoints2_7.getString());
      FIX::BidPx BidPx_7;
      BidPx_7.setString("20839088");
      noQuoteEntries_0_1_0.set(BidPx_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidPx_7.getString());
      FIX::BidSize BidSize_7;
      BidSize_7.setString("10547551");
      noQuoteEntries_0_1_0.set(BidSize_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSize_7.getString());
      FIX::BidSpotRate BidSpotRate_7;
      BidSpotRate_7.setString("1492528");
      noQuoteEntries_0_1_0.set(BidSpotRate_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidSpotRate_7.getString());
      FIX::BidYield BidYield_7;
      BidYield_7.setString("29.680000");
      noQuoteEntries_0_1_0.set(BidYield_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BidYield_7.getString());
      FIX::BookingType BookingType_12(0);
      noQuoteEntries_0_1_0.set(BookingType_12);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(BookingType_12.getString());
      FIX::Currency Currency_36("CAN");
      noQuoteEntries_0_1_0.set(Currency_36);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(Currency_36.getString());
      FIX::MidPx MidPx_7;
      MidPx_7.setString("991379");
      noQuoteEntries_0_1_0.set(MidPx_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidPx_7.getString());
      FIX::MidYield MidYield_7;
      MidYield_7.setString("52.260000");
      noQuoteEntries_0_1_0.set(MidYield_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(MidYield_7.getString());
      FIX::OfferForwardPoints OfferForwardPoints_7;
      OfferForwardPoints_7.setString("14235603");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints_7.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_7;
      OfferForwardPoints2_7.setString("5912887");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_7.getString());
      FIX::OfferPx OfferPx_7;
      OfferPx_7.setString("14582293");
      noQuoteEntries_0_1_0.set(OfferPx_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferPx_7.getString());
      FIX::OfferSize OfferSize_7;
      OfferSize_7.setString("4281152");
      noQuoteEntries_0_1_0.set(OfferSize_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSize_7.getString());
      FIX::OfferSpotRate OfferSpotRate_7;
      OfferSpotRate_7.setString("2028454");
      noQuoteEntries_0_1_0.set(OfferSpotRate_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferSpotRate_7.getString());
      FIX::OfferYield OfferYield_7;
      OfferYield_7.setString("77.530000");
      noQuoteEntries_0_1_0.set(OfferYield_7);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OfferYield_7.getString());
      FIX::OrdType OrdType_27('L');
      noQuoteEntries_0_1_0.set(OrdType_27);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrdType_27.getString());
      FIX::OrderCapacity OrderCapacity_14('G');
      noQuoteEntries_0_1_0.set(OrderCapacity_14);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderCapacity_14.getString());
      FIX::OrderQty2 OrderQty2_8;
      OrderQty2_8.setString("6917009");
      noQuoteEntries_0_1_0.set(OrderQty2_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderQty2_8.getString());
      FIX::OrderRestrictions OrderRestrictions_12("MULTIPLECHARVALUE_7");
      noQuoteEntries_0_1_0.set(OrderRestrictions_12);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(OrderRestrictions_12.getString());
      FIX::QuoteEntryID QuoteEntryID_9("STRING_1023977353");
      noQuoteEntries_0_1_0.set(QuoteEntryID_9);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryID_9.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_0(1509457463);
      noQuoteEntries_0_1_0.set(QuoteEntryRejectReason_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryRejectReason_0.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_0(0);
      noQuoteEntries_0_1_0.set(QuoteEntryStatus_0);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(QuoteEntryStatus_0.getString());
      FIX::SettlDate SettlDate_25("LOCALMKTDATE_1300654836");
      noQuoteEntries_0_1_0.set(SettlDate_25);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate_25.getString());
      FIX::SettlDate2 SettlDate2_8("LOCALMKTDATE_114942050");
      noQuoteEntries_0_1_0.set(SettlDate2_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(SettlDate2_8.getString());
      FIX::TradingSessionID TradingSessionID_30("STRING_2");
      noQuoteEntries_0_1_0.set(TradingSessionID_30);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionID_30.getString());
      FIX::TradingSessionSubID TradingSessionSubID_30("STRING_3");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_30);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TradingSessionSubID_30.getString());
      FIX::TransactTime TransactTime_33(FIX::UTCTIMESTAMP(16, 58, 42, 25, 7, 2000));
      noQuoteEntries_0_1_0.set(TransactTime_33);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(TransactTime_33.getString());
      FIX::ValidUntilTime ValidUntilTime_8(FIX::UTCTIMESTAMP(6, 29, 0, 18, 7, 2014));
      noQuoteEntries_0_1_0.set(ValidUntilTime_8);
      QuotEntryAckGrp_NoQuoteEntries_0.insert(ValidUntilTime_8.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_73;
        FIX::EncodedLegIssuer EncodedLegIssuer_73("DATA_941594410");
        noLegs_0_0_2_0.set(EncodedLegIssuer_73);
        InstrumentLeg_73.insert(EncodedLegIssuer_73.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_73(329881586);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_73);
        InstrumentLeg_73.insert(EncodedLegIssuerLen_73.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_73("DATA_2043905799");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_73);
        InstrumentLeg_73.insert(EncodedLegSecurityDesc_73.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_73(1144439847);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_73);
        InstrumentLeg_73.insert(EncodedLegSecurityDescLen_73.getString());
        FIX::LegCFICode LegCFICode_73("STRING_1418439339");
        noLegs_0_0_2_0.set(LegCFICode_73);
        InstrumentLeg_73.insert(LegCFICode_73.getString());
        FIX::LegContractMultiplier LegContractMultiplier_73;
        LegContractMultiplier_73.setString("20467828");
        noLegs_0_0_2_0.set(LegContractMultiplier_73);
        InstrumentLeg_73.insert(LegContractMultiplier_73.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_73(1697707270);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_73);
        InstrumentLeg_73.insert(LegContractMultiplierUnit_73.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_73("MONTHYEAR_2110140281");
        noLegs_0_0_2_0.set(LegContractSettlMonth_73);
        InstrumentLeg_73.insert(LegContractSettlMonth_73.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_73("COUNTRY_170372640");
        noLegs_0_0_2_0.set(LegCountryOfIssue_73);
        InstrumentLeg_73.insert(LegCountryOfIssue_73.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_73("LOCALMKTDATE_574200975");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_73);
        InstrumentLeg_73.insert(LegCouponPaymentDate_73.getString());
        FIX::LegCouponRate LegCouponRate_73;
        LegCouponRate_73.setString("40.960000");
        noLegs_0_0_2_0.set(LegCouponRate_73);
        InstrumentLeg_73.insert(LegCouponRate_73.getString());
        FIX::LegCreditRating LegCreditRating_73("STRING_95172230");
        noLegs_0_0_2_0.set(LegCreditRating_73);
        InstrumentLeg_73.insert(LegCreditRating_73.getString());
        FIX::LegCurrency LegCurrency_73("JPY");
        noLegs_0_0_2_0.set(LegCurrency_73);
        InstrumentLeg_73.insert(LegCurrency_73.getString());
        FIX::LegDatedDate LegDatedDate_73("LOCALMKTDATE_785315031");
        noLegs_0_0_2_0.set(LegDatedDate_73);
        InstrumentLeg_73.insert(LegDatedDate_73.getString());
        FIX::LegExerciseStyle LegExerciseStyle_73(1021601290);
        noLegs_0_0_2_0.set(LegExerciseStyle_73);
        InstrumentLeg_73.insert(LegExerciseStyle_73.getString());
        FIX::LegFactor LegFactor_73;
        LegFactor_73.setString("15251056");
        noLegs_0_0_2_0.set(LegFactor_73);
        InstrumentLeg_73.insert(LegFactor_73.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_73(1180245415);
        noLegs_0_0_2_0.set(LegFlowScheduleType_73);
        InstrumentLeg_73.insert(LegFlowScheduleType_73.getString());
        FIX::LegInstrRegistry LegInstrRegistry_73("STRING_1280876288");
        noLegs_0_0_2_0.set(LegInstrRegistry_73);
        InstrumentLeg_73.insert(LegInstrRegistry_73.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_73("LOCALMKTDATE_1416363461");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_73);
        InstrumentLeg_73.insert(LegInterestAccrualDate_73.getString());
        FIX::LegIssueDate LegIssueDate_73("LOCALMKTDATE_528243892");
        noLegs_0_0_2_0.set(LegIssueDate_73);
        InstrumentLeg_73.insert(LegIssueDate_73.getString());
        FIX::LegIssuer LegIssuer_73("STRING_1476576495");
        noLegs_0_0_2_0.set(LegIssuer_73);
        InstrumentLeg_73.insert(LegIssuer_73.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_73("STRING_214892782");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_73);
        InstrumentLeg_73.insert(LegLocaleOfIssue_73.getString());
        FIX::LegMaturityDate LegMaturityDate_73("LOCALMKTDATE_25495198");
        noLegs_0_0_2_0.set(LegMaturityDate_73);
        InstrumentLeg_73.insert(LegMaturityDate_73.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_73("MONTHYEAR_1141156021");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_73);
        InstrumentLeg_73.insert(LegMaturityMonthYear_73.getString());
        FIX::LegMaturityTime LegMaturityTime_73("TZTIMEONLY_466060491");
        noLegs_0_0_2_0.set(LegMaturityTime_73);
        InstrumentLeg_73.insert(LegMaturityTime_73.getString());
        FIX::LegOptAttribute LegOptAttribute_73('1');
        noLegs_0_0_2_0.set(LegOptAttribute_73);
        InstrumentLeg_73.insert(LegOptAttribute_73.getString());
        FIX::LegOptionRatio LegOptionRatio_73;
        LegOptionRatio_73.setString("13333862");
        noLegs_0_0_2_0.set(LegOptionRatio_73);
        InstrumentLeg_73.insert(LegOptionRatio_73.getString());
        FIX::LegPool LegPool_73("STRING_816366117");
        noLegs_0_0_2_0.set(LegPool_73);
        InstrumentLeg_73.insert(LegPool_73.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_73("STRING_602121688");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_73);
        InstrumentLeg_73.insert(LegPriceUnitOfMeasure_73.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_73;
        LegPriceUnitOfMeasureQty_73.setString("8016932");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_73);
        InstrumentLeg_73.insert(LegPriceUnitOfMeasureQty_73.getString());
        FIX::LegProduct LegProduct_73(1757960527);
        noLegs_0_0_2_0.set(LegProduct_73);
        InstrumentLeg_73.insert(LegProduct_73.getString());
        FIX::LegPutOrCall LegPutOrCall_73(932003274);
        noLegs_0_0_2_0.set(LegPutOrCall_73);
        InstrumentLeg_73.insert(LegPutOrCall_73.getString());
        FIX::LegRatioQty LegRatioQty_73;
        LegRatioQty_73.setString("6981153");
        noLegs_0_0_2_0.set(LegRatioQty_73);
        InstrumentLeg_73.insert(LegRatioQty_73.getString());
        FIX::LegRedemptionDate LegRedemptionDate_73("LOCALMKTDATE_754916726");
        noLegs_0_0_2_0.set(LegRedemptionDate_73);
        InstrumentLeg_73.insert(LegRedemptionDate_73.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_73("STRING_202958965");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_73);
        InstrumentLeg_73.insert(LegRepoCollateralSecurityType_73.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_73;
        LegRepurchaseRate_73.setString("46.080000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_73);
        InstrumentLeg_73.insert(LegRepurchaseRate_73.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_73(305140348);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_73);
        InstrumentLeg_73.insert(LegRepurchaseTerm_73.getString());
        FIX::LegSecurityDesc LegSecurityDesc_73("STRING_165615598");
        noLegs_0_0_2_0.set(LegSecurityDesc_73);
        InstrumentLeg_73.insert(LegSecurityDesc_73.getString());
        FIX::LegSecurityExchange LegSecurityExchange_73("EXCHANGE_767787248");
        noLegs_0_0_2_0.set(LegSecurityExchange_73);
        InstrumentLeg_73.insert(LegSecurityExchange_73.getString());
        FIX::LegSecurityID LegSecurityID_73("STRING_879341323");
        noLegs_0_0_2_0.set(LegSecurityID_73);
        InstrumentLeg_73.insert(LegSecurityID_73.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_73("STRING_1637729695");
        noLegs_0_0_2_0.set(LegSecurityIDSource_73);
        InstrumentLeg_73.insert(LegSecurityIDSource_73.getString());
        FIX::LegSecuritySubType LegSecuritySubType_73("STRING_862959478");
        noLegs_0_0_2_0.set(LegSecuritySubType_73);
        InstrumentLeg_73.insert(LegSecuritySubType_73.getString());
        FIX::LegSecurityType LegSecurityType_73("STRING_606713487");
        noLegs_0_0_2_0.set(LegSecurityType_73);
        InstrumentLeg_73.insert(LegSecurityType_73.getString());
        FIX::LegSide LegSide_73('1');
        noLegs_0_0_2_0.set(LegSide_73);
        InstrumentLeg_73.insert(LegSide_73.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_73("STRING_1648274509");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_73);
        InstrumentLeg_73.insert(LegStateOrProvinceOfIssue_73.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_73("CHF");
        noLegs_0_0_2_0.set(LegStrikeCurrency_73);
        InstrumentLeg_73.insert(LegStrikeCurrency_73.getString());
        FIX::LegStrikePrice LegStrikePrice_73;
        LegStrikePrice_73.setString("6810362");
        noLegs_0_0_2_0.set(LegStrikePrice_73);
        InstrumentLeg_73.insert(LegStrikePrice_73.getString());
        FIX::LegSymbol LegSymbol_73("STRING_761707418");
        noLegs_0_0_2_0.set(LegSymbol_73);
        InstrumentLeg_73.insert(LegSymbol_73.getString());
        FIX::LegSymbolSfx LegSymbolSfx_73("STRING_1871287634");
        noLegs_0_0_2_0.set(LegSymbolSfx_73);
        InstrumentLeg_73.insert(LegSymbolSfx_73.getString());
        FIX::LegTimeUnit LegTimeUnit_73("STRING_1209280169");
        noLegs_0_0_2_0.set(LegTimeUnit_73);
        InstrumentLeg_73.insert(LegTimeUnit_73.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_73("STRING_90800265");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_73);
        InstrumentLeg_73.insert(LegUnitOfMeasure_73.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_73;
        LegUnitOfMeasureQty_73.setString("20861804");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_73);
        InstrumentLeg_73.insert(LegUnitOfMeasureQty_73.getString());
        all_values.push_back(InstrumentLeg_73);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_146;
          FIX::LegSecurityAltID LegSecurityAltID_146("STRING_1231956286");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_146);
          LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltID_146.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_146("STRING_404757259");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_146);
          LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltIDSource_146.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_146);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_41;
      FIX::AttachmentPoint AttachmentPoint_41;
      AttachmentPoint_41.setString("11.970000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_41);
      Instrument_41.insert(AttachmentPoint_41.getString());
      FIX::CFICode CFICode_41("STRING_417858926");
      noQuoteEntries_0_1_0.set(CFICode_41);
      Instrument_41.insert(CFICode_41.getString());
      FIX::CPProgram CPProgram_41(99);
      noQuoteEntries_0_1_0.set(CPProgram_41);
      Instrument_41.insert(CPProgram_41.getString());
      FIX::CPRegType CPRegType_41("STRING_1419882885");
      noQuoteEntries_0_1_0.set(CPRegType_41);
      Instrument_41.insert(CPRegType_41.getString());
      FIX::CapPrice CapPrice_41;
      CapPrice_41.setString("12195521");
      noQuoteEntries_0_1_0.set(CapPrice_41);
      Instrument_41.insert(CapPrice_41.getString());
      FIX::ContractMultiplier ContractMultiplier_41;
      ContractMultiplier_41.setString("8316002");
      noQuoteEntries_0_1_0.set(ContractMultiplier_41);
      Instrument_41.insert(ContractMultiplier_41.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_41(1);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_41);
      Instrument_41.insert(ContractMultiplierUnit_41.getString());
      FIX::ContractSettlMonth ContractSettlMonth_41("MONTHYEAR_1917667552");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_41);
      Instrument_41.insert(ContractSettlMonth_41.getString());
      FIX::CountryOfIssue CountryOfIssue_41("COUNTRY_1586516983");
      noQuoteEntries_0_1_0.set(CountryOfIssue_41);
      Instrument_41.insert(CountryOfIssue_41.getString());
      FIX::CouponPaymentDate CouponPaymentDate_41("LOCALMKTDATE_407361476");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_41);
      Instrument_41.insert(CouponPaymentDate_41.getString());
      FIX::CouponRate CouponRate_41;
      CouponRate_41.setString("85.120000");
      noQuoteEntries_0_1_0.set(CouponRate_41);
      Instrument_41.insert(CouponRate_41.getString());
      FIX::CreditRating CreditRating_41("STRING_1891657331");
      noQuoteEntries_0_1_0.set(CreditRating_41);
      Instrument_41.insert(CreditRating_41.getString());
      FIX::DatedDate DatedDate_41("LOCALMKTDATE_572977075");
      noQuoteEntries_0_1_0.set(DatedDate_41);
      Instrument_41.insert(DatedDate_41.getString());
      FIX::DetachmentPoint DetachmentPoint_41;
      DetachmentPoint_41.setString("57.600000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_41);
      Instrument_41.insert(DetachmentPoint_41.getString());
      FIX::EncodedIssuer EncodedIssuer_41("DATA_623515007");
      noQuoteEntries_0_1_0.set(EncodedIssuer_41);
      Instrument_41.insert(EncodedIssuer_41.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_41(63223122);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_41);
      Instrument_41.insert(EncodedIssuerLen_41.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_41("DATA_1998345239");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_41);
      Instrument_41.insert(EncodedSecurityDesc_41.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_41(1230228494);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_41);
      Instrument_41.insert(EncodedSecurityDescLen_41.getString());
      FIX::ExerciseStyle ExerciseStyle_41(0);
      noQuoteEntries_0_1_0.set(ExerciseStyle_41);
      Instrument_41.insert(ExerciseStyle_41.getString());
      FIX::Factor Factor_41;
      Factor_41.setString("14991361");
      noQuoteEntries_0_1_0.set(Factor_41);
      Instrument_41.insert(Factor_41.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_41(false);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_41);
      Instrument_41.insert(FlexProductEligibilityIndicator_41.getString());
      FIX::FlexibleIndicator FlexibleIndicator_41(true);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_41);
      Instrument_41.insert(FlexibleIndicator_41.getString());
      FIX::FloorPrice FloorPrice_41;
      FloorPrice_41.setString("326887");
      noQuoteEntries_0_1_0.set(FloorPrice_41);
      Instrument_41.insert(FloorPrice_41.getString());
      FIX::FlowScheduleType FlowScheduleType_41(1);
      noQuoteEntries_0_1_0.set(FlowScheduleType_41);
      Instrument_41.insert(FlowScheduleType_41.getString());
      FIX::InstrRegistry InstrRegistry_41("STRING_1319253475");
      noQuoteEntries_0_1_0.set(InstrRegistry_41);
      Instrument_41.insert(InstrRegistry_41.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_41('1');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_41);
      Instrument_41.insert(InstrmtAssignmentMethod_41.getString());
      FIX::InterestAccrualDate InterestAccrualDate_41("LOCALMKTDATE_1563567306");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_41);
      Instrument_41.insert(InterestAccrualDate_41.getString());
      FIX::IssueDate IssueDate_41("LOCALMKTDATE_1257950243");
      noQuoteEntries_0_1_0.set(IssueDate_41);
      Instrument_41.insert(IssueDate_41.getString());
      FIX::Issuer Issuer_41("STRING_329260618");
      noQuoteEntries_0_1_0.set(Issuer_41);
      Instrument_41.insert(Issuer_41.getString());
      FIX::ListMethod ListMethod_41(1);
      noQuoteEntries_0_1_0.set(ListMethod_41);
      Instrument_41.insert(ListMethod_41.getString());
      FIX::LocaleOfIssue LocaleOfIssue_41("STRING_1662707503");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_41);
      Instrument_41.insert(LocaleOfIssue_41.getString());
      FIX::MaturityDate MaturityDate_41("LOCALMKTDATE_1147021816");
      noQuoteEntries_0_1_0.set(MaturityDate_41);
      Instrument_41.insert(MaturityDate_41.getString());
      FIX::MaturityMonthYear MaturityMonthYear_41("MONTHYEAR_1065898871");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_41);
      Instrument_41.insert(MaturityMonthYear_41.getString());
      FIX::MaturityTime MaturityTime_41("TZTIMEONLY_736347232");
      noQuoteEntries_0_1_0.set(MaturityTime_41);
      Instrument_41.insert(MaturityTime_41.getString());
      FIX::MinPriceIncrement MinPriceIncrement_41;
      MinPriceIncrement_41.setString("4194210");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_41);
      Instrument_41.insert(MinPriceIncrement_41.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_41;
      MinPriceIncrementAmount_41.setString("1379673");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_41);
      Instrument_41.insert(MinPriceIncrementAmount_41.getString());
      FIX::NTPositionLimit NTPositionLimit_41(1567947488);
      noQuoteEntries_0_1_0.set(NTPositionLimit_41);
      Instrument_41.insert(NTPositionLimit_41.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_41;
      NotionalPercentageOutstanding_41.setString("35.650000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_41);
      Instrument_41.insert(NotionalPercentageOutstanding_41.getString());
      FIX::OptAttribute OptAttribute_41('2');
      noQuoteEntries_0_1_0.set(OptAttribute_41);
      Instrument_41.insert(OptAttribute_41.getString());
      FIX::OptPayoutAmount OptPayoutAmount_41;
      OptPayoutAmount_41.setString("10069808");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_41);
      Instrument_41.insert(OptPayoutAmount_41.getString());
      FIX::OptPayoutType OptPayoutType_41(1);
      noQuoteEntries_0_1_0.set(OptPayoutType_41);
      Instrument_41.insert(OptPayoutType_41.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_41;
      OriginalNotionalPercentageOutstanding_41.setString("98.020000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_41);
      Instrument_41.insert(OriginalNotionalPercentageOutstanding_41.getString());
      FIX::Pool Pool_41("STRING_751154507");
      noQuoteEntries_0_1_0.set(Pool_41);
      Instrument_41.insert(Pool_41.getString());
      FIX::PositionLimit PositionLimit_41(1604162116);
      noQuoteEntries_0_1_0.set(PositionLimit_41);
      Instrument_41.insert(PositionLimit_41.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_41("STRING_PCTPAR");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_41);
      Instrument_41.insert(PriceQuoteMethod_41.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_41("STRING_1374669514");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_41);
      Instrument_41.insert(PriceUnitOfMeasure_41.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_41;
      PriceUnitOfMeasureQty_41.setString("16673852");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_41);
      Instrument_41.insert(PriceUnitOfMeasureQty_41.getString());
      FIX::Product Product_43(3);
      noQuoteEntries_0_1_0.set(Product_43);
      Instrument_41.insert(Product_43.getString());
      FIX::ProductComplex ProductComplex_41("STRING_457414360");
      noQuoteEntries_0_1_0.set(ProductComplex_41);
      Instrument_41.insert(ProductComplex_41.getString());
      FIX::PutOrCall PutOrCall_41(0);
      noQuoteEntries_0_1_0.set(PutOrCall_41);
      Instrument_41.insert(PutOrCall_41.getString());
      FIX::RedemptionDate RedemptionDate_41("LOCALMKTDATE_613649606");
      noQuoteEntries_0_1_0.set(RedemptionDate_41);
      Instrument_41.insert(RedemptionDate_41.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_41("STRING_1168473983");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_41);
      Instrument_41.insert(RepoCollateralSecurityType_41.getString());
      FIX::RepurchaseRate RepurchaseRate_41;
      RepurchaseRate_41.setString("27.460000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_41);
      Instrument_41.insert(RepurchaseRate_41.getString());
      FIX::RepurchaseTerm RepurchaseTerm_41(646338336);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_41);
      Instrument_41.insert(RepurchaseTerm_41.getString());
      FIX::RestructuringType RestructuringType_41("STRING_MR");
      noQuoteEntries_0_1_0.set(RestructuringType_41);
      Instrument_41.insert(RestructuringType_41.getString());
      FIX::SecurityDesc SecurityDesc_41("STRING_1427646221");
      noQuoteEntries_0_1_0.set(SecurityDesc_41);
      Instrument_41.insert(SecurityDesc_41.getString());
      FIX::SecurityExchange SecurityExchange_41("EXCHANGE_1888307235");
      noQuoteEntries_0_1_0.set(SecurityExchange_41);
      Instrument_41.insert(SecurityExchange_41.getString());
      FIX::SecurityGroup SecurityGroup_41("STRING_2057324683");
      noQuoteEntries_0_1_0.set(SecurityGroup_41);
      Instrument_41.insert(SecurityGroup_41.getString());
      FIX::SecurityID SecurityID_41("STRING_538112817");
      noQuoteEntries_0_1_0.set(SecurityID_41);
      Instrument_41.insert(SecurityID_41.getString());
      FIX::SecurityIDSource SecurityIDSource_41("STRING_G");
      noQuoteEntries_0_1_0.set(SecurityIDSource_41);
      Instrument_41.insert(SecurityIDSource_41.getString());
      FIX::SecurityStatus SecurityStatus_41("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityStatus_41);
      Instrument_41.insert(SecurityStatus_41.getString());
      FIX::SecuritySubType SecuritySubType_42("STRING_53336672");
      noQuoteEntries_0_1_0.set(SecuritySubType_42);
      Instrument_41.insert(SecuritySubType_42.getString());
      FIX::SecurityType SecurityType_43("STRING_GO");
      noQuoteEntries_0_1_0.set(SecurityType_43);
      Instrument_41.insert(SecurityType_43.getString());
      FIX::Seniority Seniority_41("STRING_SR");
      noQuoteEntries_0_1_0.set(Seniority_41);
      Instrument_41.insert(Seniority_41.getString());
      FIX::SettlMethod SettlMethod_41('C');
      noQuoteEntries_0_1_0.set(SettlMethod_41);
      Instrument_41.insert(SettlMethod_41.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_41("STRING_1636527075");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_41);
      Instrument_41.insert(SettleOnOpenFlag_41.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_41("STRING_1761747238");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_41);
      Instrument_41.insert(StateOrProvinceOfIssue_41.getString());
      FIX::StrikeCurrency StrikeCurrency_41("GBP");
      noQuoteEntries_0_1_0.set(StrikeCurrency_41);
      Instrument_41.insert(StrikeCurrency_41.getString());
      FIX::StrikeMultiplier StrikeMultiplier_41;
      StrikeMultiplier_41.setString("16698985");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_41);
      Instrument_41.insert(StrikeMultiplier_41.getString());
      FIX::StrikePrice StrikePrice_41;
      StrikePrice_41.setString("12171285");
      noQuoteEntries_0_1_0.set(StrikePrice_41);
      Instrument_41.insert(StrikePrice_41.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_41(4);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_41);
      Instrument_41.insert(StrikePriceBoundaryMethod_41.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_41;
      StrikePriceBoundaryPrecision_41.setString("83.310000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_41);
      Instrument_41.insert(StrikePriceBoundaryPrecision_41.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_41(4);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_41);
      Instrument_41.insert(StrikePriceDeterminationMethod_41.getString());
      FIX::StrikeValue StrikeValue_41;
      StrikeValue_41.setString("6007305");
      noQuoteEntries_0_1_0.set(StrikeValue_41);
      Instrument_41.insert(StrikeValue_41.getString());
      FIX::Symbol Symbol_41("STRING_1209300246");
      noQuoteEntries_0_1_0.set(Symbol_41);
      Instrument_41.insert(Symbol_41.getString());
      FIX::SymbolSfx SymbolSfx_41("STRING_WI");
      noQuoteEntries_0_1_0.set(SymbolSfx_41);
      Instrument_41.insert(SymbolSfx_41.getString());
      FIX::TimeUnit TimeUnit_41("STRING_H");
      noQuoteEntries_0_1_0.set(TimeUnit_41);
      Instrument_41.insert(TimeUnit_41.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_41(1);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_41);
      Instrument_41.insert(UnderlyingPriceDeterminationMethod_41.getString());
      FIX::UnitOfMeasure UnitOfMeasure_41("STRING_Bbl");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_41);
      Instrument_41.insert(UnitOfMeasure_41.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_41;
      UnitOfMeasureQty_41.setString("7810589");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_41);
      Instrument_41.insert(UnitOfMeasureQty_41.getString());
      FIX::ValuationMethod ValuationMethod_41("STRING_CDS");
      noQuoteEntries_0_1_0.set(ValuationMethod_41);
      Instrument_41.insert(ValuationMethod_41.getString());
      all_values.push_back(Instrument_41);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_80;
        FIX::ComplexEventCondition ComplexEventCondition_80(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventCondition_80.getString());
        FIX::ComplexEventPrice ComplexEventPrice_80;
        ComplexEventPrice_80.setString("15838016");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPrice_80.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_80(4);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryMethod_80.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_80;
        ComplexEventPriceBoundaryPrecision_80.setString("43.180000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryPrecision_80.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_80(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceTimeType_80.getString());
        FIX::ComplexEventType ComplexEventType_80(6);
        noComplexEvents_0_0_2_0.set(ComplexEventType_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventType_80.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_80;
        ComplexOptPayoutAmount_80.setString("7077271");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexOptPayoutAmount_80.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_80);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_159;
          FIX::ComplexEventEndDate ComplexEventEndDate_159(FIX::UTCTIMESTAMP(23, 20, 13, 23, 12, 2003));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_159);
          ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventEndDate_159.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_159(FIX::UTCTIMESTAMP(23, 3, 36, 25, 7, 2011));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_159);
          ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventStartDate_159.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_159);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_317;
            FIX::ComplexEventEndTime ComplexEventEndTime_317(FIX::UTCTIMEONLY(8, 47, 4));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_317);
            ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventEndTime_317.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_317(FIX::UTCTIMEONLY(2, 15, 53));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_317);
            ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventStartTime_317.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_317);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_318;
            FIX::ComplexEventEndTime ComplexEventEndTime_318(FIX::UTCTIMEONLY(21, 39, 41));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_318);
            ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventEndTime_318.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_318(FIX::UTCTIMEONLY(8, 49, 2));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_318);
            ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventStartTime_318.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_318);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_160;
          FIX::ComplexEventEndDate ComplexEventEndDate_160(FIX::UTCTIMESTAMP(0, 22, 54, 12, 3, 2009));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_160);
          ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventEndDate_160.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_160(FIX::UTCTIMESTAMP(1, 1, 44, 10, 8, 2013));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_160);
          ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventStartDate_160.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_160);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_319;
            FIX::ComplexEventEndTime ComplexEventEndTime_319(FIX::UTCTIMEONLY(19, 9, 8));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_319);
            ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventEndTime_319.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_319(FIX::UTCTIMEONLY(23, 23, 57));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_319);
            ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventStartTime_319.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_319);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_320;
            FIX::ComplexEventEndTime ComplexEventEndTime_320(FIX::UTCTIMEONLY(13, 36, 35));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_320);
            ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventEndTime_320.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_320(FIX::UTCTIMEONLY(0, 24, 30));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_320);
            ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventStartTime_320.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_320);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_321;
            FIX::ComplexEventEndTime ComplexEventEndTime_321(FIX::UTCTIMEONLY(13, 44, 12));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventEndTime_321);
            ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventEndTime_321.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_321(FIX::UTCTIMEONLY(22, 2, 41));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventStartTime_321);
            ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventStartTime_321.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_321);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_81;
        FIX::ComplexEventCondition ComplexEventCondition_81(1);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventCondition_81.getString());
        FIX::ComplexEventPrice ComplexEventPrice_81;
        ComplexEventPrice_81.setString("19932232");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPrice_81.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_81(1);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryMethod_81.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_81;
        ComplexEventPriceBoundaryPrecision_81.setString("18.980000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryPrecision_81.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_81(3);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceTimeType_81.getString());
        FIX::ComplexEventType ComplexEventType_81(1);
        noComplexEvents_0_0_2_1.set(ComplexEventType_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexEventType_81.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_81;
        ComplexOptPayoutAmount_81.setString("16850184");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_81);
        ComplexEvents_NoComplexEvents_81.insert(ComplexOptPayoutAmount_81.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_81);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_161;
          FIX::ComplexEventEndDate ComplexEventEndDate_161(FIX::UTCTIMESTAMP(9, 15, 19, 20, 3, 2004));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_161);
          ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventEndDate_161.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_161(FIX::UTCTIMESTAMP(3, 45, 29, 11, 2, 2016));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_161);
          ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventStartDate_161.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_161);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_322;
            FIX::ComplexEventEndTime ComplexEventEndTime_322(FIX::UTCTIMEONLY(23, 30, 36));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_322);
            ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventEndTime_322.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_322(FIX::UTCTIMEONLY(4, 38, 53));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_322);
            ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventStartTime_322.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_322);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
            FIX::ComplexEventEndTime ComplexEventEndTime_323(FIX::UTCTIMEONLY(9, 18, 11));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventEndTime_323);
            ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventEndTime_323.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_323(FIX::UTCTIMEONLY(6, 23, 42));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventStartTime_323);
            ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventStartTime_323.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
            FIX::ComplexEventEndTime ComplexEventEndTime_324(FIX::UTCTIMEONLY(12, 57, 52));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventEndTime_324);
            ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventEndTime_324.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_324(FIX::UTCTIMEONLY(3, 0, 30));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventStartTime_324);
            ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventStartTime_324.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_2);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_162;
          FIX::ComplexEventEndDate ComplexEventEndDate_162(FIX::UTCTIMESTAMP(21, 51, 54, 23, 2, 2004));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventEndDate_162);
          ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventEndDate_162.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_162(FIX::UTCTIMESTAMP(4, 10, 58, 4, 7, 2000));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventStartDate_162);
          ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventStartDate_162.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_162);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
            FIX::ComplexEventEndTime ComplexEventEndTime_325(FIX::UTCTIMEONLY(9, 39, 22));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventEndTime_325);
            ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventEndTime_325.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_325(FIX::UTCTIMEONLY(13, 45, 11));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventStartTime_325);
            ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventStartTime_325.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_163;
          FIX::ComplexEventEndDate ComplexEventEndDate_163(FIX::UTCTIMESTAMP(13, 0, 46, 21, 4, 2005));
          noComplexEventDates_0_0_1_3_2.set(ComplexEventEndDate_163);
          ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventEndDate_163.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_163(FIX::UTCTIMESTAMP(22, 24, 2, 25, 4, 2010));
          noComplexEventDates_0_0_1_3_2.set(ComplexEventStartDate_163);
          ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventStartDate_163.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_163);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
            FIX::ComplexEventEndTime ComplexEventEndTime_326(FIX::UTCTIMEONLY(20, 19, 36));
            noComplexEventTimes_0_0_1_2_4_0.set(ComplexEventEndTime_326);
            ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventEndTime_326.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_326(FIX::UTCTIMEONLY(5, 13, 38));
            noComplexEventTimes_0_0_1_2_4_0.set(ComplexEventStartTime_326);
            ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventStartTime_326.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
            FIX::ComplexEventEndTime ComplexEventEndTime_327(FIX::UTCTIMEONLY(2, 18, 58));
            noComplexEventTimes_0_0_1_2_4_1.set(ComplexEventEndTime_327);
            ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventEndTime_327.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_327(FIX::UTCTIMEONLY(11, 35, 2));
            noComplexEventTimes_0_0_1_2_4_1.set(ComplexEventStartTime_327);
            ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventStartTime_327.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
            FIX::ComplexEventEndTime ComplexEventEndTime_328(FIX::UTCTIMEONLY(0, 2, 48));
            noComplexEventTimes_0_0_1_2_4_2.set(ComplexEventEndTime_328);
            ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventEndTime_328.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_328(FIX::UTCTIMEONLY(6, 27, 40));
            noComplexEventTimes_0_0_1_2_4_2.set(ComplexEventStartTime_328);
            ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventStartTime_328.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_2);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_83;
        FIX::EventDate EventDate_83("LOCALMKTDATE_1280171032");
        noEvents_0_0_2_0.set(EventDate_83);
        EvntGrp_NoEvents_83.insert(EventDate_83.getString());
        FIX::EventPx EventPx_83;
        EventPx_83.setString("3453029");
        noEvents_0_0_2_0.set(EventPx_83);
        EvntGrp_NoEvents_83.insert(EventPx_83.getString());
        FIX::EventText EventText_83("STRING_986776737");
        noEvents_0_0_2_0.set(EventText_83);
        EvntGrp_NoEvents_83.insert(EventText_83.getString());
        FIX::EventTime EventTime_83(FIX::UTCTIMESTAMP(3, 14, 37, 19, 2, 2002));
        noEvents_0_0_2_0.set(EventTime_83);
        EvntGrp_NoEvents_83.insert(EventTime_83.getString());
        FIX::EventType EventType_83(1);
        noEvents_0_0_2_0.set(EventType_83);
        EvntGrp_NoEvents_83.insert(EventType_83.getString());
        all_values.push_back(EvntGrp_NoEvents_83);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_84;
        FIX::EventDate EventDate_84("LOCALMKTDATE_230944303");
        noEvents_0_0_2_1.set(EventDate_84);
        EvntGrp_NoEvents_84.insert(EventDate_84.getString());
        FIX::EventPx EventPx_84;
        EventPx_84.setString("2055904");
        noEvents_0_0_2_1.set(EventPx_84);
        EvntGrp_NoEvents_84.insert(EventPx_84.getString());
        FIX::EventText EventText_84("STRING_812128379");
        noEvents_0_0_2_1.set(EventText_84);
        EvntGrp_NoEvents_84.insert(EventText_84.getString());
        FIX::EventTime EventTime_84(FIX::UTCTIMESTAMP(9, 9, 10, 1, 9, 2013));
        noEvents_0_0_2_1.set(EventTime_84);
        EvntGrp_NoEvents_84.insert(EventTime_84.getString());
        FIX::EventType EventType_84(99);
        noEvents_0_0_2_1.set(EventType_84);
        EvntGrp_NoEvents_84.insert(EventType_84.getString());
        all_values.push_back(EvntGrp_NoEvents_84);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_85;
        FIX::EventDate EventDate_85("LOCALMKTDATE_1757271102");
        noEvents_0_0_2_2.set(EventDate_85);
        EvntGrp_NoEvents_85.insert(EventDate_85.getString());
        FIX::EventPx EventPx_85;
        EventPx_85.setString("10543074");
        noEvents_0_0_2_2.set(EventPx_85);
        EvntGrp_NoEvents_85.insert(EventPx_85.getString());
        FIX::EventText EventText_85("STRING_329090294");
        noEvents_0_0_2_2.set(EventText_85);
        EvntGrp_NoEvents_85.insert(EventText_85.getString());
        FIX::EventTime EventTime_85(FIX::UTCTIMESTAMP(3, 36, 58, 12, 9, 2000));
        noEvents_0_0_2_2.set(EventTime_85);
        EvntGrp_NoEvents_85.insert(EventTime_85.getString());
        FIX::EventType EventType_85(16);
        noEvents_0_0_2_2.set(EventType_85);
        EvntGrp_NoEvents_85.insert(EventType_85.getString());
        all_values.push_back(EvntGrp_NoEvents_85);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_87;
        FIX::InstrumentPartyID InstrumentPartyID_87("STRING_749367462");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_87);
        InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyID_87.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_87('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_87);
        InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyIDSource_87.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_87(425850472);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_87);
        InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyRole_87.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_87);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182;
          FIX::InstrumentPartySubID InstrumentPartySubID_182("STRING_242274177");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_182);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubID_182.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_182(620755338);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_182);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubIDType_182.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183;
          FIX::InstrumentPartySubID InstrumentPartySubID_183("STRING_1701301713");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_183);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubID_183.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_183(849139998);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_183);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubIDType_183.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_88;
        FIX::InstrumentPartyID InstrumentPartyID_88("STRING_851699641");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_88);
        InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyID_88.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_88('1');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_88);
        InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyIDSource_88.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_88(1661268377);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_88);
        InstrumentParties_NoInstrumentParties_88.insert(InstrumentPartyRole_88.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_88);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184;
          FIX::InstrumentPartySubID InstrumentPartySubID_184("STRING_361584858");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_184);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubID_184.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_184(111189258);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_184);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubIDType_184.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_89;
        FIX::SecurityAltID SecurityAltID_89("STRING_2052121063");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_89);
        SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltID_89.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_89("STRING_1511003150");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_89);
        SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltIDSource_89.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_89);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_90;
        FIX::SecurityAltID SecurityAltID_90("STRING_590698612");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_90);
        SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltID_90.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_90("STRING_864092574");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_90);
        SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltIDSource_90.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_90);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_82;
      FIX::SecurityXML SecurityXML_83("XMLDATA_1120790605");
      noQuoteEntries_0_1_0.set(SecurityXML_83);
      FIX::SecurityXMLLen SecurityXMLLen_41(1645006030);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_41);
      FIX::SecurityXMLSchema SecurityXMLSchema_41("STRING_1193182868");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_41);
      SecurityXML_82.insert(SecurityXMLSchema_41.getString());
      all_values.push_back(SecurityXML_82);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_54;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_54("DATA_924971568");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuer_54.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_54(1673639689);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuerLen_54.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_54("DATA_1408189664");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDesc_54.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_54(865670858);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDescLen_54.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_54;
    UnderlyingAdjustedQuantity_54.setString("11787845");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_54);
    UnderlyingInstrument_54.insert(UnderlyingAdjustedQuantity_54.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_54;
    UnderlyingAllocationPercent_54.setString("89.130000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_54);
    UnderlyingInstrument_54.insert(UnderlyingAllocationPercent_54.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_54;
    UnderlyingAttachmentPoint_54.setString("11.810000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingAttachmentPoint_54.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_54("STRING_1029232308");
    noQuoteSets_0_0.set(UnderlyingCFICode_54);
    UnderlyingInstrument_54.insert(UnderlyingCFICode_54.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_54("STRING_2076104899");
    noQuoteSets_0_0.set(UnderlyingCPProgram_54);
    UnderlyingInstrument_54.insert(UnderlyingCPProgram_54.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_54("STRING_688424995");
    noQuoteSets_0_0.set(UnderlyingCPRegType_54);
    UnderlyingInstrument_54.insert(UnderlyingCPRegType_54.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_54;
    UnderlyingCapValue_54.setString("3272500");
    noQuoteSets_0_0.set(UnderlyingCapValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCapValue_54.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_54;
    UnderlyingCashAmount_54.setString("3544717");
    noQuoteSets_0_0.set(UnderlyingCashAmount_54);
    UnderlyingInstrument_54.insert(UnderlyingCashAmount_54.getString());
    FIX::UnderlyingCashType UnderlyingCashType_54("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_54);
    UnderlyingInstrument_54.insert(UnderlyingCashType_54.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_54;
    UnderlyingContractMultiplier_54.setString("5695242");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplier_54.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_54(975227061);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplierUnit_54.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_54("COUNTRY_1079531560");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingCountryOfIssue_54.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_54("LOCALMKTDATE_1418664238");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponPaymentDate_54.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_54;
    UnderlyingCouponRate_54.setString("67.020000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponRate_54.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_54("STRING_838940064");
    noQuoteSets_0_0.set(UnderlyingCreditRating_54);
    UnderlyingInstrument_54.insert(UnderlyingCreditRating_54.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_54("CAN");
    noQuoteSets_0_0.set(UnderlyingCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrency_54.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_54;
    UnderlyingCurrentValue_54.setString("12005249");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrentValue_54.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_54;
    UnderlyingDetachmentPoint_54.setString("82.250000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingDetachmentPoint_54.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_54;
    UnderlyingDirtyPrice_54.setString("14269516");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingDirtyPrice_54.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_54;
    UnderlyingEndPrice_54.setString("11051623");
    noQuoteSets_0_0.set(UnderlyingEndPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingEndPrice_54.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_54;
    UnderlyingEndValue_54.setString("4071577");
    noQuoteSets_0_0.set(UnderlyingEndValue_54);
    UnderlyingInstrument_54.insert(UnderlyingEndValue_54.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_54(2017650281);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_54);
    UnderlyingInstrument_54.insert(UnderlyingExerciseStyle_54.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_54;
    UnderlyingFXRate_54.setString("19692549");
    noQuoteSets_0_0.set(UnderlyingFXRate_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRate_54.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_54('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRateCalc_54.getString());
    FIX::UnderlyingFactor UnderlyingFactor_54;
    UnderlyingFactor_54.setString("15151726");
    noQuoteSets_0_0.set(UnderlyingFactor_54);
    UnderlyingInstrument_54.insert(UnderlyingFactor_54.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_54(1014954132);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_54);
    UnderlyingInstrument_54.insert(UnderlyingFlowScheduleType_54.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_54("STRING_305436252");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_54);
    UnderlyingInstrument_54.insert(UnderlyingInstrRegistry_54.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_54("LOCALMKTDATE_1041328705");
    noQuoteSets_0_0.set(UnderlyingIssueDate_54);
    UnderlyingInstrument_54.insert(UnderlyingIssueDate_54.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_54("STRING_275660149");
    noQuoteSets_0_0.set(UnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(UnderlyingIssuer_54.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_54("STRING_1171107111");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingLocaleOfIssue_54.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_54("LOCALMKTDATE_72629598");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityDate_54.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_54("MONTHYEAR_1524419062");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityMonthYear_54.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_54("TZTIMEONLY_1110164644");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityTime_54.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_54;
    UnderlyingNotionalPercentageOutstanding_54.setString("19.070000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_54('1');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_54);
    UnderlyingInstrument_54.insert(UnderlyingOptAttribute_54.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_54;
    UnderlyingOriginalNotionalPercentageOutstanding_54.setString("96.390000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingOriginalNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_54("STRING_1429111969");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasure_54.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_54;
    UnderlyingPriceUnitOfMeasureQty_54.setString("18075120");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasureQty_54.getString());
    FIX::UnderlyingProduct UnderlyingProduct_54(1176819485);
    noQuoteSets_0_0.set(UnderlyingProduct_54);
    UnderlyingInstrument_54.insert(UnderlyingProduct_54.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_54(1998636209);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_54);
    UnderlyingInstrument_54.insert(UnderlyingPutOrCall_54.getString());
    FIX::UnderlyingPx UnderlyingPx_54;
    UnderlyingPx_54.setString("6352554");
    noQuoteSets_0_0.set(UnderlyingPx_54);
    UnderlyingInstrument_54.insert(UnderlyingPx_54.getString());
    FIX::UnderlyingQty UnderlyingQty_54;
    UnderlyingQty_54.setString("1088673");
    noQuoteSets_0_0.set(UnderlyingQty_54);
    UnderlyingInstrument_54.insert(UnderlyingQty_54.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_54("LOCALMKTDATE_1269816799");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_54);
    UnderlyingInstrument_54.insert(UnderlyingRedemptionDate_54.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_54("STRING_314698504");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingRepoCollateralSecurityType_54.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_54;
    UnderlyingRepurchaseRate_54.setString("74.620000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseRate_54.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_54(54782118);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseTerm_54.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_54("STRING_179876971");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_54);
    UnderlyingInstrument_54.insert(UnderlyingRestructuringType_54.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_54("STRING_848736");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityDesc_54.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_54("EXCHANGE_1098420343");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityExchange_54.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_54("STRING_1606828641");
    noQuoteSets_0_0.set(UnderlyingSecurityID_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityID_54.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_54("STRING_1106011074");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityIDSource_54.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_54("STRING_1505578071");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecuritySubType_54.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_54("STRING_1476995274");
    noQuoteSets_0_0.set(UnderlyingSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityType_54.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_54("STRING_927782338");
    noQuoteSets_0_0.set(UnderlyingSeniority_54);
    UnderlyingInstrument_54.insert(UnderlyingSeniority_54.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_54("STRING_886042755");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlMethod_54.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_54(2);
    noQuoteSets_0_0.set(UnderlyingSettlementType_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlementType_54.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_54;
    UnderlyingStartValue_54.setString("19427364");
    noQuoteSets_0_0.set(UnderlyingStartValue_54);
    UnderlyingInstrument_54.insert(UnderlyingStartValue_54.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_54("STRING_1191479008");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingStateOrProvinceOfIssue_54.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_54("CHF");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikeCurrency_54.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_54;
    UnderlyingStrikePrice_54.setString("2151024");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikePrice_54.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_54("STRING_1958642593");
    noQuoteSets_0_0.set(UnderlyingSymbol_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbol_54.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_54("STRING_1595332033");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbolSfx_54.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_54("STRING_1325267115");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingTimeUnit_54.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_54("STRING_913020852");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasure_54.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_54;
    UnderlyingUnitOfMeasureQty_54.setString("9008886");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasureQty_54.getString());
    all_values.push_back(UnderlyingInstrument_54);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_111;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_111("STRING_194649174");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltID_111.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_111("STRING_560917087");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltIDSource_111.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_98;
      FIX::UnderlyingStipType UnderlyingStipType_98("STRING_45801735");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_98);
      UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipType_98.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_98("STRING_1196172537");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_98);
      UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipValue_98.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_98);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_115;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_115("STRING_1315618535");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyID_115.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_115('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyIDSource_115.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_115(1062383803);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyRole_115.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_115);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_225("STRING_1690748013");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_225);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubID_225.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_225(1063232539);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_225);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubIDType_225.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_226("STRING_321337349");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_226);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubID_226.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_226(1150093006);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_226);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubIDType_226.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_227("STRING_21759965");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubID_227.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_227(1826915420);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubIDType_227.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_116;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_116("STRING_479604632");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyID_116.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_116('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyIDSource_116.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_116(565474527);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyRole_116.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_116);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_228("STRING_744795126");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubID_228.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_228(1756953535);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubIDType_228.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_229("STRING_1062818269");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_229);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubID_229.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_229(815708097);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_229);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubIDType_229.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_230("STRING_1972056006");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_230);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubID_230.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_230(873977215);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_230);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubIDType_230.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_117;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_117("STRING_263556483");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyID_117.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_117('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyIDSource_117.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_117(1786998067);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyRole_117.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_117);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_231("STRING_2126212579");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_231);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubID_231.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_231(1981647241);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_231);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubIDType_231.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_232("STRING_1725362268");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_232);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubID_232.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_232(2131921523);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_232);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubIDType_232.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_233("STRING_2027448977");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_233);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubID_233.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_233(774051157);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_233);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubIDType_233.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);

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
    FIX::LastFragment LastFragment_12(true);
    noQuoteSets_0_1.set(LastFragment_12);
    QuotSetAckGrp_NoQuoteSets_1.insert(LastFragment_12.getString());
    FIX::QuoteSetID QuoteSetID_4("STRING_1195583864");
    noQuoteSets_0_1.set(QuoteSetID_4);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetID_4.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_4(FIX::UTCTIMESTAMP(3, 29, 4, 22, 11, 2000));
    noQuoteSets_0_1.set(QuoteSetValidUntilTime_4);
    QuotSetAckGrp_NoQuoteSets_1.insert(QuoteSetValidUntilTime_4.getString());
    FIX::TotNoAccQuotes TotNoAccQuotes_1(98906876);
    noQuoteSets_0_1.set(TotNoAccQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoAccQuotes_1.getString());
    FIX::TotNoCxldQuotes TotNoCxldQuotes_1(419269990);
    noQuoteSets_0_1.set(TotNoCxldQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoCxldQuotes_1.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_4(1310400554);
    noQuoteSets_0_1.set(TotNoQuoteEntries_4);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoQuoteEntries_4.getString());
    FIX::TotNoRejQuotes TotNoRejQuotes_1(1048449179);
    noQuoteSets_0_1.set(TotNoRejQuotes_1);
    QuotSetAckGrp_NoQuoteSets_1.insert(TotNoRejQuotes_1.getString());
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_1);

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_8;
      BidForwardPoints_8.setString("4872058");
      noQuoteEntries_1_1_0.set(BidForwardPoints_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints_8.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_8;
      BidForwardPoints2_8.setString("17932443");
      noQuoteEntries_1_1_0.set(BidForwardPoints2_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidForwardPoints2_8.getString());
      FIX::BidPx BidPx_8;
      BidPx_8.setString("5942144");
      noQuoteEntries_1_1_0.set(BidPx_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidPx_8.getString());
      FIX::BidSize BidSize_8;
      BidSize_8.setString("15500240");
      noQuoteEntries_1_1_0.set(BidSize_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSize_8.getString());
      FIX::BidSpotRate BidSpotRate_8;
      BidSpotRate_8.setString("4614687");
      noQuoteEntries_1_1_0.set(BidSpotRate_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidSpotRate_8.getString());
      FIX::BidYield BidYield_8;
      BidYield_8.setString("67.640000");
      noQuoteEntries_1_1_0.set(BidYield_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BidYield_8.getString());
      FIX::BookingType BookingType_13(0);
      noQuoteEntries_1_1_0.set(BookingType_13);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(BookingType_13.getString());
      FIX::Currency Currency_37("EUR");
      noQuoteEntries_1_1_0.set(Currency_37);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(Currency_37.getString());
      FIX::MidPx MidPx_8;
      MidPx_8.setString("20635157");
      noQuoteEntries_1_1_0.set(MidPx_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidPx_8.getString());
      FIX::MidYield MidYield_8;
      MidYield_8.setString("4.190000");
      noQuoteEntries_1_1_0.set(MidYield_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(MidYield_8.getString());
      FIX::OfferForwardPoints OfferForwardPoints_8;
      OfferForwardPoints_8.setString("15473551");
      noQuoteEntries_1_1_0.set(OfferForwardPoints_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints_8.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_8;
      OfferForwardPoints2_8.setString("18976793");
      noQuoteEntries_1_1_0.set(OfferForwardPoints2_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_8.getString());
      FIX::OfferPx OfferPx_8;
      OfferPx_8.setString("14673490");
      noQuoteEntries_1_1_0.set(OfferPx_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferPx_8.getString());
      FIX::OfferSize OfferSize_8;
      OfferSize_8.setString("15317930");
      noQuoteEntries_1_1_0.set(OfferSize_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSize_8.getString());
      FIX::OfferSpotRate OfferSpotRate_8;
      OfferSpotRate_8.setString("17776446");
      noQuoteEntries_1_1_0.set(OfferSpotRate_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferSpotRate_8.getString());
      FIX::OfferYield OfferYield_8;
      OfferYield_8.setString("65.490000");
      noQuoteEntries_1_1_0.set(OfferYield_8);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OfferYield_8.getString());
      FIX::OrdType OrdType_28('D');
      noQuoteEntries_1_1_0.set(OrdType_28);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrdType_28.getString());
      FIX::OrderCapacity OrderCapacity_15('G');
      noQuoteEntries_1_1_0.set(OrderCapacity_15);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderCapacity_15.getString());
      FIX::OrderQty2 OrderQty2_9;
      OrderQty2_9.setString("2313551");
      noQuoteEntries_1_1_0.set(OrderQty2_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderQty2_9.getString());
      FIX::OrderRestrictions OrderRestrictions_13("MULTIPLECHARVALUE_2");
      noQuoteEntries_1_1_0.set(OrderRestrictions_13);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(OrderRestrictions_13.getString());
      FIX::QuoteEntryID QuoteEntryID_10("STRING_1244245741");
      noQuoteEntries_1_1_0.set(QuoteEntryID_10);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryID_10.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_1(2059541664);
      noQuoteEntries_1_1_0.set(QuoteEntryRejectReason_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryRejectReason_1.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_1(14);
      noQuoteEntries_1_1_0.set(QuoteEntryStatus_1);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(QuoteEntryStatus_1.getString());
      FIX::SettlDate SettlDate_26("LOCALMKTDATE_1984083959");
      noQuoteEntries_1_1_0.set(SettlDate_26);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate_26.getString());
      FIX::SettlDate2 SettlDate2_9("LOCALMKTDATE_742853938");
      noQuoteEntries_1_1_0.set(SettlDate2_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(SettlDate2_9.getString());
      FIX::TradingSessionID TradingSessionID_31("STRING_6");
      noQuoteEntries_1_1_0.set(TradingSessionID_31);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionID_31.getString());
      FIX::TradingSessionSubID TradingSessionSubID_31("STRING_3");
      noQuoteEntries_1_1_0.set(TradingSessionSubID_31);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TradingSessionSubID_31.getString());
      FIX::TransactTime TransactTime_34(FIX::UTCTIMESTAMP(5, 40, 14, 6, 6, 2006));
      noQuoteEntries_1_1_0.set(TransactTime_34);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(TransactTime_34.getString());
      FIX::ValidUntilTime ValidUntilTime_9(FIX::UTCTIMESTAMP(21, 50, 59, 11, 8, 2001));
      noQuoteEntries_1_1_0.set(ValidUntilTime_9);
      QuotEntryAckGrp_NoQuoteEntries_1.insert(ValidUntilTime_9.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_1);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_74;
        FIX::EncodedLegIssuer EncodedLegIssuer_74("DATA_1885746201");
        noLegs_1_0_2_0.set(EncodedLegIssuer_74);
        InstrumentLeg_74.insert(EncodedLegIssuer_74.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_74(1763331411);
        noLegs_1_0_2_0.set(EncodedLegIssuerLen_74);
        InstrumentLeg_74.insert(EncodedLegIssuerLen_74.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_74("DATA_458939496");
        noLegs_1_0_2_0.set(EncodedLegSecurityDesc_74);
        InstrumentLeg_74.insert(EncodedLegSecurityDesc_74.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_74(1515907209);
        noLegs_1_0_2_0.set(EncodedLegSecurityDescLen_74);
        InstrumentLeg_74.insert(EncodedLegSecurityDescLen_74.getString());
        FIX::LegCFICode LegCFICode_74("STRING_1857247960");
        noLegs_1_0_2_0.set(LegCFICode_74);
        InstrumentLeg_74.insert(LegCFICode_74.getString());
        FIX::LegContractMultiplier LegContractMultiplier_74;
        LegContractMultiplier_74.setString("20897467");
        noLegs_1_0_2_0.set(LegContractMultiplier_74);
        InstrumentLeg_74.insert(LegContractMultiplier_74.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_74(194168432);
        noLegs_1_0_2_0.set(LegContractMultiplierUnit_74);
        InstrumentLeg_74.insert(LegContractMultiplierUnit_74.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_74("MONTHYEAR_2088603061");
        noLegs_1_0_2_0.set(LegContractSettlMonth_74);
        InstrumentLeg_74.insert(LegContractSettlMonth_74.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_74("COUNTRY_586984739");
        noLegs_1_0_2_0.set(LegCountryOfIssue_74);
        InstrumentLeg_74.insert(LegCountryOfIssue_74.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_74("LOCALMKTDATE_1438414173");
        noLegs_1_0_2_0.set(LegCouponPaymentDate_74);
        InstrumentLeg_74.insert(LegCouponPaymentDate_74.getString());
        FIX::LegCouponRate LegCouponRate_74;
        LegCouponRate_74.setString("10.770000");
        noLegs_1_0_2_0.set(LegCouponRate_74);
        InstrumentLeg_74.insert(LegCouponRate_74.getString());
        FIX::LegCreditRating LegCreditRating_74("STRING_1308853280");
        noLegs_1_0_2_0.set(LegCreditRating_74);
        InstrumentLeg_74.insert(LegCreditRating_74.getString());
        FIX::LegCurrency LegCurrency_74("GBP");
        noLegs_1_0_2_0.set(LegCurrency_74);
        InstrumentLeg_74.insert(LegCurrency_74.getString());
        FIX::LegDatedDate LegDatedDate_74("LOCALMKTDATE_2129628698");
        noLegs_1_0_2_0.set(LegDatedDate_74);
        InstrumentLeg_74.insert(LegDatedDate_74.getString());
        FIX::LegExerciseStyle LegExerciseStyle_74(1530884787);
        noLegs_1_0_2_0.set(LegExerciseStyle_74);
        InstrumentLeg_74.insert(LegExerciseStyle_74.getString());
        FIX::LegFactor LegFactor_74;
        LegFactor_74.setString("5018022");
        noLegs_1_0_2_0.set(LegFactor_74);
        InstrumentLeg_74.insert(LegFactor_74.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_74(1851369647);
        noLegs_1_0_2_0.set(LegFlowScheduleType_74);
        InstrumentLeg_74.insert(LegFlowScheduleType_74.getString());
        FIX::LegInstrRegistry LegInstrRegistry_74("STRING_624015959");
        noLegs_1_0_2_0.set(LegInstrRegistry_74);
        InstrumentLeg_74.insert(LegInstrRegistry_74.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_74("LOCALMKTDATE_894778887");
        noLegs_1_0_2_0.set(LegInterestAccrualDate_74);
        InstrumentLeg_74.insert(LegInterestAccrualDate_74.getString());
        FIX::LegIssueDate LegIssueDate_74("LOCALMKTDATE_1218871253");
        noLegs_1_0_2_0.set(LegIssueDate_74);
        InstrumentLeg_74.insert(LegIssueDate_74.getString());
        FIX::LegIssuer LegIssuer_74("STRING_311361536");
        noLegs_1_0_2_0.set(LegIssuer_74);
        InstrumentLeg_74.insert(LegIssuer_74.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_74("STRING_690296011");
        noLegs_1_0_2_0.set(LegLocaleOfIssue_74);
        InstrumentLeg_74.insert(LegLocaleOfIssue_74.getString());
        FIX::LegMaturityDate LegMaturityDate_74("LOCALMKTDATE_1047841615");
        noLegs_1_0_2_0.set(LegMaturityDate_74);
        InstrumentLeg_74.insert(LegMaturityDate_74.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_74("MONTHYEAR_417493878");
        noLegs_1_0_2_0.set(LegMaturityMonthYear_74);
        InstrumentLeg_74.insert(LegMaturityMonthYear_74.getString());
        FIX::LegMaturityTime LegMaturityTime_74("TZTIMEONLY_762330801");
        noLegs_1_0_2_0.set(LegMaturityTime_74);
        InstrumentLeg_74.insert(LegMaturityTime_74.getString());
        FIX::LegOptAttribute LegOptAttribute_74('1');
        noLegs_1_0_2_0.set(LegOptAttribute_74);
        InstrumentLeg_74.insert(LegOptAttribute_74.getString());
        FIX::LegOptionRatio LegOptionRatio_74;
        LegOptionRatio_74.setString("20922524");
        noLegs_1_0_2_0.set(LegOptionRatio_74);
        InstrumentLeg_74.insert(LegOptionRatio_74.getString());
        FIX::LegPool LegPool_74("STRING_750397676");
        noLegs_1_0_2_0.set(LegPool_74);
        InstrumentLeg_74.insert(LegPool_74.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_74("STRING_1897819585");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasure_74);
        InstrumentLeg_74.insert(LegPriceUnitOfMeasure_74.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_74;
        LegPriceUnitOfMeasureQty_74.setString("10193989");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasureQty_74);
        InstrumentLeg_74.insert(LegPriceUnitOfMeasureQty_74.getString());
        FIX::LegProduct LegProduct_74(488660230);
        noLegs_1_0_2_0.set(LegProduct_74);
        InstrumentLeg_74.insert(LegProduct_74.getString());
        FIX::LegPutOrCall LegPutOrCall_74(1513667348);
        noLegs_1_0_2_0.set(LegPutOrCall_74);
        InstrumentLeg_74.insert(LegPutOrCall_74.getString());
        FIX::LegRatioQty LegRatioQty_74;
        LegRatioQty_74.setString("14783384");
        noLegs_1_0_2_0.set(LegRatioQty_74);
        InstrumentLeg_74.insert(LegRatioQty_74.getString());
        FIX::LegRedemptionDate LegRedemptionDate_74("LOCALMKTDATE_2004567439");
        noLegs_1_0_2_0.set(LegRedemptionDate_74);
        InstrumentLeg_74.insert(LegRedemptionDate_74.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_74("STRING_1223431661");
        noLegs_1_0_2_0.set(LegRepoCollateralSecurityType_74);
        InstrumentLeg_74.insert(LegRepoCollateralSecurityType_74.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_74;
        LegRepurchaseRate_74.setString("15.130000");
        noLegs_1_0_2_0.set(LegRepurchaseRate_74);
        InstrumentLeg_74.insert(LegRepurchaseRate_74.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_74(51252223);
        noLegs_1_0_2_0.set(LegRepurchaseTerm_74);
        InstrumentLeg_74.insert(LegRepurchaseTerm_74.getString());
        FIX::LegSecurityDesc LegSecurityDesc_74("STRING_1164551074");
        noLegs_1_0_2_0.set(LegSecurityDesc_74);
        InstrumentLeg_74.insert(LegSecurityDesc_74.getString());
        FIX::LegSecurityExchange LegSecurityExchange_74("EXCHANGE_2007586252");
        noLegs_1_0_2_0.set(LegSecurityExchange_74);
        InstrumentLeg_74.insert(LegSecurityExchange_74.getString());
        FIX::LegSecurityID LegSecurityID_74("STRING_1489666397");
        noLegs_1_0_2_0.set(LegSecurityID_74);
        InstrumentLeg_74.insert(LegSecurityID_74.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_74("STRING_1017728503");
        noLegs_1_0_2_0.set(LegSecurityIDSource_74);
        InstrumentLeg_74.insert(LegSecurityIDSource_74.getString());
        FIX::LegSecuritySubType LegSecuritySubType_74("STRING_1168955884");
        noLegs_1_0_2_0.set(LegSecuritySubType_74);
        InstrumentLeg_74.insert(LegSecuritySubType_74.getString());
        FIX::LegSecurityType LegSecurityType_74("STRING_617197234");
        noLegs_1_0_2_0.set(LegSecurityType_74);
        InstrumentLeg_74.insert(LegSecurityType_74.getString());
        FIX::LegSide LegSide_74('1');
        noLegs_1_0_2_0.set(LegSide_74);
        InstrumentLeg_74.insert(LegSide_74.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_74("STRING_1151100934");
        noLegs_1_0_2_0.set(LegStateOrProvinceOfIssue_74);
        InstrumentLeg_74.insert(LegStateOrProvinceOfIssue_74.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_74("JPY");
        noLegs_1_0_2_0.set(LegStrikeCurrency_74);
        InstrumentLeg_74.insert(LegStrikeCurrency_74.getString());
        FIX::LegStrikePrice LegStrikePrice_74;
        LegStrikePrice_74.setString("8549869");
        noLegs_1_0_2_0.set(LegStrikePrice_74);
        InstrumentLeg_74.insert(LegStrikePrice_74.getString());
        FIX::LegSymbol LegSymbol_74("STRING_624614332");
        noLegs_1_0_2_0.set(LegSymbol_74);
        InstrumentLeg_74.insert(LegSymbol_74.getString());
        FIX::LegSymbolSfx LegSymbolSfx_74("STRING_862857323");
        noLegs_1_0_2_0.set(LegSymbolSfx_74);
        InstrumentLeg_74.insert(LegSymbolSfx_74.getString());
        FIX::LegTimeUnit LegTimeUnit_74("STRING_2073858187");
        noLegs_1_0_2_0.set(LegTimeUnit_74);
        InstrumentLeg_74.insert(LegTimeUnit_74.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_74("STRING_935975868");
        noLegs_1_0_2_0.set(LegUnitOfMeasure_74);
        InstrumentLeg_74.insert(LegUnitOfMeasure_74.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_74;
        LegUnitOfMeasureQty_74.setString("15531533");
        noLegs_1_0_2_0.set(LegUnitOfMeasureQty_74);
        InstrumentLeg_74.insert(LegUnitOfMeasureQty_74.getString());
        all_values.push_back(InstrumentLeg_74);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_147;
          FIX::LegSecurityAltID LegSecurityAltID_147("STRING_1353469746");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltID_147);
          LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltID_147.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_147("STRING_168000488");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltIDSource_147);
          LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltIDSource_147.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_147);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_75;
        FIX::EncodedLegIssuer EncodedLegIssuer_75("DATA_428569720");
        noLegs_1_0_2_1.set(EncodedLegIssuer_75);
        InstrumentLeg_75.insert(EncodedLegIssuer_75.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_75(1298238555);
        noLegs_1_0_2_1.set(EncodedLegIssuerLen_75);
        InstrumentLeg_75.insert(EncodedLegIssuerLen_75.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_75("DATA_918398165");
        noLegs_1_0_2_1.set(EncodedLegSecurityDesc_75);
        InstrumentLeg_75.insert(EncodedLegSecurityDesc_75.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_75(178905658);
        noLegs_1_0_2_1.set(EncodedLegSecurityDescLen_75);
        InstrumentLeg_75.insert(EncodedLegSecurityDescLen_75.getString());
        FIX::LegCFICode LegCFICode_75("STRING_170153816");
        noLegs_1_0_2_1.set(LegCFICode_75);
        InstrumentLeg_75.insert(LegCFICode_75.getString());
        FIX::LegContractMultiplier LegContractMultiplier_75;
        LegContractMultiplier_75.setString("14070583");
        noLegs_1_0_2_1.set(LegContractMultiplier_75);
        InstrumentLeg_75.insert(LegContractMultiplier_75.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_75(1692573006);
        noLegs_1_0_2_1.set(LegContractMultiplierUnit_75);
        InstrumentLeg_75.insert(LegContractMultiplierUnit_75.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_75("MONTHYEAR_1648492221");
        noLegs_1_0_2_1.set(LegContractSettlMonth_75);
        InstrumentLeg_75.insert(LegContractSettlMonth_75.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_75("COUNTRY_1264142186");
        noLegs_1_0_2_1.set(LegCountryOfIssue_75);
        InstrumentLeg_75.insert(LegCountryOfIssue_75.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_75("LOCALMKTDATE_768521019");
        noLegs_1_0_2_1.set(LegCouponPaymentDate_75);
        InstrumentLeg_75.insert(LegCouponPaymentDate_75.getString());
        FIX::LegCouponRate LegCouponRate_75;
        LegCouponRate_75.setString("0.860000");
        noLegs_1_0_2_1.set(LegCouponRate_75);
        InstrumentLeg_75.insert(LegCouponRate_75.getString());
        FIX::LegCreditRating LegCreditRating_75("STRING_1315394409");
        noLegs_1_0_2_1.set(LegCreditRating_75);
        InstrumentLeg_75.insert(LegCreditRating_75.getString());
        FIX::LegCurrency LegCurrency_75("GBP");
        noLegs_1_0_2_1.set(LegCurrency_75);
        InstrumentLeg_75.insert(LegCurrency_75.getString());
        FIX::LegDatedDate LegDatedDate_75("LOCALMKTDATE_657577158");
        noLegs_1_0_2_1.set(LegDatedDate_75);
        InstrumentLeg_75.insert(LegDatedDate_75.getString());
        FIX::LegExerciseStyle LegExerciseStyle_75(803316949);
        noLegs_1_0_2_1.set(LegExerciseStyle_75);
        InstrumentLeg_75.insert(LegExerciseStyle_75.getString());
        FIX::LegFactor LegFactor_75;
        LegFactor_75.setString("19506685");
        noLegs_1_0_2_1.set(LegFactor_75);
        InstrumentLeg_75.insert(LegFactor_75.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_75(1274774392);
        noLegs_1_0_2_1.set(LegFlowScheduleType_75);
        InstrumentLeg_75.insert(LegFlowScheduleType_75.getString());
        FIX::LegInstrRegistry LegInstrRegistry_75("STRING_269593172");
        noLegs_1_0_2_1.set(LegInstrRegistry_75);
        InstrumentLeg_75.insert(LegInstrRegistry_75.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_75("LOCALMKTDATE_954285861");
        noLegs_1_0_2_1.set(LegInterestAccrualDate_75);
        InstrumentLeg_75.insert(LegInterestAccrualDate_75.getString());
        FIX::LegIssueDate LegIssueDate_75("LOCALMKTDATE_1275372765");
        noLegs_1_0_2_1.set(LegIssueDate_75);
        InstrumentLeg_75.insert(LegIssueDate_75.getString());
        FIX::LegIssuer LegIssuer_75("STRING_237671609");
        noLegs_1_0_2_1.set(LegIssuer_75);
        InstrumentLeg_75.insert(LegIssuer_75.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_75("STRING_1809272795");
        noLegs_1_0_2_1.set(LegLocaleOfIssue_75);
        InstrumentLeg_75.insert(LegLocaleOfIssue_75.getString());
        FIX::LegMaturityDate LegMaturityDate_75("LOCALMKTDATE_1899987097");
        noLegs_1_0_2_1.set(LegMaturityDate_75);
        InstrumentLeg_75.insert(LegMaturityDate_75.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_75("MONTHYEAR_1100528932");
        noLegs_1_0_2_1.set(LegMaturityMonthYear_75);
        InstrumentLeg_75.insert(LegMaturityMonthYear_75.getString());
        FIX::LegMaturityTime LegMaturityTime_75("TZTIMEONLY_1735647334");
        noLegs_1_0_2_1.set(LegMaturityTime_75);
        InstrumentLeg_75.insert(LegMaturityTime_75.getString());
        FIX::LegOptAttribute LegOptAttribute_75('6');
        noLegs_1_0_2_1.set(LegOptAttribute_75);
        InstrumentLeg_75.insert(LegOptAttribute_75.getString());
        FIX::LegOptionRatio LegOptionRatio_75;
        LegOptionRatio_75.setString("5061986");
        noLegs_1_0_2_1.set(LegOptionRatio_75);
        InstrumentLeg_75.insert(LegOptionRatio_75.getString());
        FIX::LegPool LegPool_75("STRING_562379840");
        noLegs_1_0_2_1.set(LegPool_75);
        InstrumentLeg_75.insert(LegPool_75.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_75("STRING_2041949064");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasure_75);
        InstrumentLeg_75.insert(LegPriceUnitOfMeasure_75.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_75;
        LegPriceUnitOfMeasureQty_75.setString("6741991");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasureQty_75);
        InstrumentLeg_75.insert(LegPriceUnitOfMeasureQty_75.getString());
        FIX::LegProduct LegProduct_75(990949560);
        noLegs_1_0_2_1.set(LegProduct_75);
        InstrumentLeg_75.insert(LegProduct_75.getString());
        FIX::LegPutOrCall LegPutOrCall_75(1192703972);
        noLegs_1_0_2_1.set(LegPutOrCall_75);
        InstrumentLeg_75.insert(LegPutOrCall_75.getString());
        FIX::LegRatioQty LegRatioQty_75;
        LegRatioQty_75.setString("15925972");
        noLegs_1_0_2_1.set(LegRatioQty_75);
        InstrumentLeg_75.insert(LegRatioQty_75.getString());
        FIX::LegRedemptionDate LegRedemptionDate_75("LOCALMKTDATE_1169855218");
        noLegs_1_0_2_1.set(LegRedemptionDate_75);
        InstrumentLeg_75.insert(LegRedemptionDate_75.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_75("STRING_1362857788");
        noLegs_1_0_2_1.set(LegRepoCollateralSecurityType_75);
        InstrumentLeg_75.insert(LegRepoCollateralSecurityType_75.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_75;
        LegRepurchaseRate_75.setString("20.200000");
        noLegs_1_0_2_1.set(LegRepurchaseRate_75);
        InstrumentLeg_75.insert(LegRepurchaseRate_75.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_75(714944577);
        noLegs_1_0_2_1.set(LegRepurchaseTerm_75);
        InstrumentLeg_75.insert(LegRepurchaseTerm_75.getString());
        FIX::LegSecurityDesc LegSecurityDesc_75("STRING_863866362");
        noLegs_1_0_2_1.set(LegSecurityDesc_75);
        InstrumentLeg_75.insert(LegSecurityDesc_75.getString());
        FIX::LegSecurityExchange LegSecurityExchange_75("EXCHANGE_2116314206");
        noLegs_1_0_2_1.set(LegSecurityExchange_75);
        InstrumentLeg_75.insert(LegSecurityExchange_75.getString());
        FIX::LegSecurityID LegSecurityID_75("STRING_1483465596");
        noLegs_1_0_2_1.set(LegSecurityID_75);
        InstrumentLeg_75.insert(LegSecurityID_75.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_75("STRING_1785476448");
        noLegs_1_0_2_1.set(LegSecurityIDSource_75);
        InstrumentLeg_75.insert(LegSecurityIDSource_75.getString());
        FIX::LegSecuritySubType LegSecuritySubType_75("STRING_1284224967");
        noLegs_1_0_2_1.set(LegSecuritySubType_75);
        InstrumentLeg_75.insert(LegSecuritySubType_75.getString());
        FIX::LegSecurityType LegSecurityType_75("STRING_1269054042");
        noLegs_1_0_2_1.set(LegSecurityType_75);
        InstrumentLeg_75.insert(LegSecurityType_75.getString());
        FIX::LegSide LegSide_75('4');
        noLegs_1_0_2_1.set(LegSide_75);
        InstrumentLeg_75.insert(LegSide_75.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_75("STRING_1941802126");
        noLegs_1_0_2_1.set(LegStateOrProvinceOfIssue_75);
        InstrumentLeg_75.insert(LegStateOrProvinceOfIssue_75.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_75("USD");
        noLegs_1_0_2_1.set(LegStrikeCurrency_75);
        InstrumentLeg_75.insert(LegStrikeCurrency_75.getString());
        FIX::LegStrikePrice LegStrikePrice_75;
        LegStrikePrice_75.setString("10690928");
        noLegs_1_0_2_1.set(LegStrikePrice_75);
        InstrumentLeg_75.insert(LegStrikePrice_75.getString());
        FIX::LegSymbol LegSymbol_75("STRING_194480515");
        noLegs_1_0_2_1.set(LegSymbol_75);
        InstrumentLeg_75.insert(LegSymbol_75.getString());
        FIX::LegSymbolSfx LegSymbolSfx_75("STRING_1177176279");
        noLegs_1_0_2_1.set(LegSymbolSfx_75);
        InstrumentLeg_75.insert(LegSymbolSfx_75.getString());
        FIX::LegTimeUnit LegTimeUnit_75("STRING_196981988");
        noLegs_1_0_2_1.set(LegTimeUnit_75);
        InstrumentLeg_75.insert(LegTimeUnit_75.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_75("STRING_432152124");
        noLegs_1_0_2_1.set(LegUnitOfMeasure_75);
        InstrumentLeg_75.insert(LegUnitOfMeasure_75.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_75;
        LegUnitOfMeasureQty_75.setString("8389654");
        noLegs_1_0_2_1.set(LegUnitOfMeasureQty_75);
        InstrumentLeg_75.insert(LegUnitOfMeasureQty_75.getString());
        all_values.push_back(InstrumentLeg_75);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_148;
          FIX::LegSecurityAltID LegSecurityAltID_148("STRING_1532681057");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltID_148);
          LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltID_148.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_148("STRING_427129112");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltIDSource_148);
          LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltIDSource_148.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_148);

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_1);
      }
      // Instrument
      multiset<string> Instrument_42;
      FIX::AttachmentPoint AttachmentPoint_42;
      AttachmentPoint_42.setString("47.550000");
      noQuoteEntries_1_1_0.set(AttachmentPoint_42);
      Instrument_42.insert(AttachmentPoint_42.getString());
      FIX::CFICode CFICode_42("STRING_2038879676");
      noQuoteEntries_1_1_0.set(CFICode_42);
      Instrument_42.insert(CFICode_42.getString());
      FIX::CPProgram CPProgram_42(2);
      noQuoteEntries_1_1_0.set(CPProgram_42);
      Instrument_42.insert(CPProgram_42.getString());
      FIX::CPRegType CPRegType_42("STRING_532430172");
      noQuoteEntries_1_1_0.set(CPRegType_42);
      Instrument_42.insert(CPRegType_42.getString());
      FIX::CapPrice CapPrice_42;
      CapPrice_42.setString("5655951");
      noQuoteEntries_1_1_0.set(CapPrice_42);
      Instrument_42.insert(CapPrice_42.getString());
      FIX::ContractMultiplier ContractMultiplier_42;
      ContractMultiplier_42.setString("19804585");
      noQuoteEntries_1_1_0.set(ContractMultiplier_42);
      Instrument_42.insert(ContractMultiplier_42.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_42(2);
      noQuoteEntries_1_1_0.set(ContractMultiplierUnit_42);
      Instrument_42.insert(ContractMultiplierUnit_42.getString());
      FIX::ContractSettlMonth ContractSettlMonth_42("MONTHYEAR_10708761");
      noQuoteEntries_1_1_0.set(ContractSettlMonth_42);
      Instrument_42.insert(ContractSettlMonth_42.getString());
      FIX::CountryOfIssue CountryOfIssue_42("COUNTRY_1002830083");
      noQuoteEntries_1_1_0.set(CountryOfIssue_42);
      Instrument_42.insert(CountryOfIssue_42.getString());
      FIX::CouponPaymentDate CouponPaymentDate_42("LOCALMKTDATE_940508284");
      noQuoteEntries_1_1_0.set(CouponPaymentDate_42);
      Instrument_42.insert(CouponPaymentDate_42.getString());
      FIX::CouponRate CouponRate_42;
      CouponRate_42.setString("7.810000");
      noQuoteEntries_1_1_0.set(CouponRate_42);
      Instrument_42.insert(CouponRate_42.getString());
      FIX::CreditRating CreditRating_42("STRING_1717774660");
      noQuoteEntries_1_1_0.set(CreditRating_42);
      Instrument_42.insert(CreditRating_42.getString());
      FIX::DatedDate DatedDate_42("LOCALMKTDATE_1804374646");
      noQuoteEntries_1_1_0.set(DatedDate_42);
      Instrument_42.insert(DatedDate_42.getString());
      FIX::DetachmentPoint DetachmentPoint_42;
      DetachmentPoint_42.setString("13.390000");
      noQuoteEntries_1_1_0.set(DetachmentPoint_42);
      Instrument_42.insert(DetachmentPoint_42.getString());
      FIX::EncodedIssuer EncodedIssuer_42("DATA_1053756609");
      noQuoteEntries_1_1_0.set(EncodedIssuer_42);
      Instrument_42.insert(EncodedIssuer_42.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_42(1442367447);
      noQuoteEntries_1_1_0.set(EncodedIssuerLen_42);
      Instrument_42.insert(EncodedIssuerLen_42.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_42("DATA_2115936307");
      noQuoteEntries_1_1_0.set(EncodedSecurityDesc_42);
      Instrument_42.insert(EncodedSecurityDesc_42.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_42(175327003);
      noQuoteEntries_1_1_0.set(EncodedSecurityDescLen_42);
      Instrument_42.insert(EncodedSecurityDescLen_42.getString());
      FIX::ExerciseStyle ExerciseStyle_42(1);
      noQuoteEntries_1_1_0.set(ExerciseStyle_42);
      Instrument_42.insert(ExerciseStyle_42.getString());
      FIX::Factor Factor_42;
      Factor_42.setString("19102547");
      noQuoteEntries_1_1_0.set(Factor_42);
      Instrument_42.insert(Factor_42.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_42(true);
      noQuoteEntries_1_1_0.set(FlexProductEligibilityIndicator_42);
      Instrument_42.insert(FlexProductEligibilityIndicator_42.getString());
      FIX::FlexibleIndicator FlexibleIndicator_42(true);
      noQuoteEntries_1_1_0.set(FlexibleIndicator_42);
      Instrument_42.insert(FlexibleIndicator_42.getString());
      FIX::FloorPrice FloorPrice_42;
      FloorPrice_42.setString("8318640");
      noQuoteEntries_1_1_0.set(FloorPrice_42);
      Instrument_42.insert(FloorPrice_42.getString());
      FIX::FlowScheduleType FlowScheduleType_42(1);
      noQuoteEntries_1_1_0.set(FlowScheduleType_42);
      Instrument_42.insert(FlowScheduleType_42.getString());
      FIX::InstrRegistry InstrRegistry_42("STRING_1114655987");
      noQuoteEntries_1_1_0.set(InstrRegistry_42);
      Instrument_42.insert(InstrRegistry_42.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_42('1');
      noQuoteEntries_1_1_0.set(InstrmtAssignmentMethod_42);
      Instrument_42.insert(InstrmtAssignmentMethod_42.getString());
      FIX::InterestAccrualDate InterestAccrualDate_42("LOCALMKTDATE_726846986");
      noQuoteEntries_1_1_0.set(InterestAccrualDate_42);
      Instrument_42.insert(InterestAccrualDate_42.getString());
      FIX::IssueDate IssueDate_42("LOCALMKTDATE_1953621414");
      noQuoteEntries_1_1_0.set(IssueDate_42);
      Instrument_42.insert(IssueDate_42.getString());
      FIX::Issuer Issuer_42("STRING_978331433");
      noQuoteEntries_1_1_0.set(Issuer_42);
      Instrument_42.insert(Issuer_42.getString());
      FIX::ListMethod ListMethod_42(1);
      noQuoteEntries_1_1_0.set(ListMethod_42);
      Instrument_42.insert(ListMethod_42.getString());
      FIX::LocaleOfIssue LocaleOfIssue_42("STRING_233266878");
      noQuoteEntries_1_1_0.set(LocaleOfIssue_42);
      Instrument_42.insert(LocaleOfIssue_42.getString());
      FIX::MaturityDate MaturityDate_42("LOCALMKTDATE_1616296188");
      noQuoteEntries_1_1_0.set(MaturityDate_42);
      Instrument_42.insert(MaturityDate_42.getString());
      FIX::MaturityMonthYear MaturityMonthYear_42("MONTHYEAR_3440423");
      noQuoteEntries_1_1_0.set(MaturityMonthYear_42);
      Instrument_42.insert(MaturityMonthYear_42.getString());
      FIX::MaturityTime MaturityTime_42("TZTIMEONLY_1222775831");
      noQuoteEntries_1_1_0.set(MaturityTime_42);
      Instrument_42.insert(MaturityTime_42.getString());
      FIX::MinPriceIncrement MinPriceIncrement_42;
      MinPriceIncrement_42.setString("12427");
      noQuoteEntries_1_1_0.set(MinPriceIncrement_42);
      Instrument_42.insert(MinPriceIncrement_42.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_42;
      MinPriceIncrementAmount_42.setString("5690355");
      noQuoteEntries_1_1_0.set(MinPriceIncrementAmount_42);
      Instrument_42.insert(MinPriceIncrementAmount_42.getString());
      FIX::NTPositionLimit NTPositionLimit_42(1055750696);
      noQuoteEntries_1_1_0.set(NTPositionLimit_42);
      Instrument_42.insert(NTPositionLimit_42.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_42;
      NotionalPercentageOutstanding_42.setString("68.560000");
      noQuoteEntries_1_1_0.set(NotionalPercentageOutstanding_42);
      Instrument_42.insert(NotionalPercentageOutstanding_42.getString());
      FIX::OptAttribute OptAttribute_42('5');
      noQuoteEntries_1_1_0.set(OptAttribute_42);
      Instrument_42.insert(OptAttribute_42.getString());
      FIX::OptPayoutAmount OptPayoutAmount_42;
      OptPayoutAmount_42.setString("20585807");
      noQuoteEntries_1_1_0.set(OptPayoutAmount_42);
      Instrument_42.insert(OptPayoutAmount_42.getString());
      FIX::OptPayoutType OptPayoutType_42(1);
      noQuoteEntries_1_1_0.set(OptPayoutType_42);
      Instrument_42.insert(OptPayoutType_42.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_42;
      OriginalNotionalPercentageOutstanding_42.setString("51.030000");
      noQuoteEntries_1_1_0.set(OriginalNotionalPercentageOutstanding_42);
      Instrument_42.insert(OriginalNotionalPercentageOutstanding_42.getString());
      FIX::Pool Pool_42("STRING_1628871792");
      noQuoteEntries_1_1_0.set(Pool_42);
      Instrument_42.insert(Pool_42.getString());
      FIX::PositionLimit PositionLimit_42(176292491);
      noQuoteEntries_1_1_0.set(PositionLimit_42);
      Instrument_42.insert(PositionLimit_42.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_42("STRING_INT");
      noQuoteEntries_1_1_0.set(PriceQuoteMethod_42);
      Instrument_42.insert(PriceQuoteMethod_42.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_42("STRING_535144753");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasure_42);
      Instrument_42.insert(PriceUnitOfMeasure_42.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_42;
      PriceUnitOfMeasureQty_42.setString("16186599");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasureQty_42);
      Instrument_42.insert(PriceUnitOfMeasureQty_42.getString());
      FIX::Product Product_44(10);
      noQuoteEntries_1_1_0.set(Product_44);
      Instrument_42.insert(Product_44.getString());
      FIX::ProductComplex ProductComplex_42("STRING_710471756");
      noQuoteEntries_1_1_0.set(ProductComplex_42);
      Instrument_42.insert(ProductComplex_42.getString());
      FIX::PutOrCall PutOrCall_42(0);
      noQuoteEntries_1_1_0.set(PutOrCall_42);
      Instrument_42.insert(PutOrCall_42.getString());
      FIX::RedemptionDate RedemptionDate_42("LOCALMKTDATE_2005560238");
      noQuoteEntries_1_1_0.set(RedemptionDate_42);
      Instrument_42.insert(RedemptionDate_42.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_42("STRING_810686102");
      noQuoteEntries_1_1_0.set(RepoCollateralSecurityType_42);
      Instrument_42.insert(RepoCollateralSecurityType_42.getString());
      FIX::RepurchaseRate RepurchaseRate_42;
      RepurchaseRate_42.setString("89.360000");
      noQuoteEntries_1_1_0.set(RepurchaseRate_42);
      Instrument_42.insert(RepurchaseRate_42.getString());
      FIX::RepurchaseTerm RepurchaseTerm_42(689940598);
      noQuoteEntries_1_1_0.set(RepurchaseTerm_42);
      Instrument_42.insert(RepurchaseTerm_42.getString());
      FIX::RestructuringType RestructuringType_42("STRING_XR");
      noQuoteEntries_1_1_0.set(RestructuringType_42);
      Instrument_42.insert(RestructuringType_42.getString());
      FIX::SecurityDesc SecurityDesc_42("STRING_237901276");
      noQuoteEntries_1_1_0.set(SecurityDesc_42);
      Instrument_42.insert(SecurityDesc_42.getString());
      FIX::SecurityExchange SecurityExchange_42("EXCHANGE_1718786593");
      noQuoteEntries_1_1_0.set(SecurityExchange_42);
      Instrument_42.insert(SecurityExchange_42.getString());
      FIX::SecurityGroup SecurityGroup_42("STRING_1832227949");
      noQuoteEntries_1_1_0.set(SecurityGroup_42);
      Instrument_42.insert(SecurityGroup_42.getString());
      FIX::SecurityID SecurityID_42("STRING_44039042");
      noQuoteEntries_1_1_0.set(SecurityID_42);
      Instrument_42.insert(SecurityID_42.getString());
      FIX::SecurityIDSource SecurityIDSource_42("STRING_J");
      noQuoteEntries_1_1_0.set(SecurityIDSource_42);
      Instrument_42.insert(SecurityIDSource_42.getString());
      FIX::SecurityStatus SecurityStatus_42("STRING_1");
      noQuoteEntries_1_1_0.set(SecurityStatus_42);
      Instrument_42.insert(SecurityStatus_42.getString());
      FIX::SecuritySubType SecuritySubType_43("STRING_277305920");
      noQuoteEntries_1_1_0.set(SecuritySubType_43);
      Instrument_42.insert(SecuritySubType_43.getString());
      FIX::SecurityType SecurityType_44("STRING_RAN");
      noQuoteEntries_1_1_0.set(SecurityType_44);
      Instrument_42.insert(SecurityType_44.getString());
      FIX::Seniority Seniority_42("STRING_SR");
      noQuoteEntries_1_1_0.set(Seniority_42);
      Instrument_42.insert(Seniority_42.getString());
      FIX::SettlMethod SettlMethod_42('P');
      noQuoteEntries_1_1_0.set(SettlMethod_42);
      Instrument_42.insert(SettlMethod_42.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_42("STRING_19689631");
      noQuoteEntries_1_1_0.set(SettleOnOpenFlag_42);
      Instrument_42.insert(SettleOnOpenFlag_42.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_42("STRING_369264680");
      noQuoteEntries_1_1_0.set(StateOrProvinceOfIssue_42);
      Instrument_42.insert(StateOrProvinceOfIssue_42.getString());
      FIX::StrikeCurrency StrikeCurrency_42("GBP");
      noQuoteEntries_1_1_0.set(StrikeCurrency_42);
      Instrument_42.insert(StrikeCurrency_42.getString());
      FIX::StrikeMultiplier StrikeMultiplier_42;
      StrikeMultiplier_42.setString("9490090");
      noQuoteEntries_1_1_0.set(StrikeMultiplier_42);
      Instrument_42.insert(StrikeMultiplier_42.getString());
      FIX::StrikePrice StrikePrice_42;
      StrikePrice_42.setString("3194459");
      noQuoteEntries_1_1_0.set(StrikePrice_42);
      Instrument_42.insert(StrikePrice_42.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_42(4);
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryMethod_42);
      Instrument_42.insert(StrikePriceBoundaryMethod_42.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_42;
      StrikePriceBoundaryPrecision_42.setString("4.560000");
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryPrecision_42);
      Instrument_42.insert(StrikePriceBoundaryPrecision_42.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_42(4);
      noQuoteEntries_1_1_0.set(StrikePriceDeterminationMethod_42);
      Instrument_42.insert(StrikePriceDeterminationMethod_42.getString());
      FIX::StrikeValue StrikeValue_42;
      StrikeValue_42.setString("2942768");
      noQuoteEntries_1_1_0.set(StrikeValue_42);
      Instrument_42.insert(StrikeValue_42.getString());
      FIX::Symbol Symbol_42("STRING_371003251");
      noQuoteEntries_1_1_0.set(Symbol_42);
      Instrument_42.insert(Symbol_42.getString());
      FIX::SymbolSfx SymbolSfx_42("STRING_CD");
      noQuoteEntries_1_1_0.set(SymbolSfx_42);
      Instrument_42.insert(SymbolSfx_42.getString());
      FIX::TimeUnit TimeUnit_42("STRING_D");
      noQuoteEntries_1_1_0.set(TimeUnit_42);
      Instrument_42.insert(TimeUnit_42.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_42(1);
      noQuoteEntries_1_1_0.set(UnderlyingPriceDeterminationMethod_42);
      Instrument_42.insert(UnderlyingPriceDeterminationMethod_42.getString());
      FIX::UnitOfMeasure UnitOfMeasure_42("STRING_tn");
      noQuoteEntries_1_1_0.set(UnitOfMeasure_42);
      Instrument_42.insert(UnitOfMeasure_42.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_42;
      UnitOfMeasureQty_42.setString("10987023");
      noQuoteEntries_1_1_0.set(UnitOfMeasureQty_42);
      Instrument_42.insert(UnitOfMeasureQty_42.getString());
      FIX::ValuationMethod ValuationMethod_42("STRING_EQTY");
      noQuoteEntries_1_1_0.set(ValuationMethod_42);
      Instrument_42.insert(ValuationMethod_42.getString());
      all_values.push_back(Instrument_42);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_82;
        FIX::ComplexEventCondition ComplexEventCondition_82(1);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventCondition_82.getString());
        FIX::ComplexEventPrice ComplexEventPrice_82;
        ComplexEventPrice_82.setString("10143258");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPrice_82.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_82(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryMethod_82.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_82;
        ComplexEventPriceBoundaryPrecision_82.setString("89.080000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryPrecision_82.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_82(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceTimeType_82.getString());
        FIX::ComplexEventType ComplexEventType_82(6);
        noComplexEvents_1_0_2_0.set(ComplexEventType_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexEventType_82.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_82;
        ComplexOptPayoutAmount_82.setString("5038879");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_82);
        ComplexEvents_NoComplexEvents_82.insert(ComplexOptPayoutAmount_82.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_82);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_164;
          FIX::ComplexEventEndDate ComplexEventEndDate_164(FIX::UTCTIMESTAMP(14, 16, 39, 22, 12, 2011));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_164);
          ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventEndDate_164.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_164(FIX::UTCTIMESTAMP(23, 41, 24, 16, 10, 2007));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_164);
          ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventStartDate_164.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_164);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
            FIX::ComplexEventEndTime ComplexEventEndTime_329(FIX::UTCTIMEONLY(15, 20, 5));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_329);
            ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventEndTime_329.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_329(FIX::UTCTIMEONLY(15, 40, 29));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_329);
            ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventStartTime_329.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
            FIX::ComplexEventEndTime ComplexEventEndTime_330(FIX::UTCTIMEONLY(1, 23, 35));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventEndTime_330);
            ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventEndTime_330.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_330(FIX::UTCTIMEONLY(22, 5, 20));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventStartTime_330);
            ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventStartTime_330.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
            FIX::ComplexEventEndTime ComplexEventEndTime_331(FIX::UTCTIMEONLY(8, 28, 45));
            noComplexEventTimes_1_0_0_0_4_2.set(ComplexEventEndTime_331);
            ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventEndTime_331.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_331(FIX::UTCTIMEONLY(16, 44, 35));
            noComplexEventTimes_1_0_0_0_4_2.set(ComplexEventStartTime_331);
            ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventStartTime_331.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_165;
          FIX::ComplexEventEndDate ComplexEventEndDate_165(FIX::UTCTIMESTAMP(5, 0, 16, 3, 8, 2015));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventEndDate_165);
          ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventEndDate_165.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_165(FIX::UTCTIMESTAMP(15, 33, 32, 10, 5, 2012));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventStartDate_165);
          ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventStartDate_165.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_165);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
            FIX::ComplexEventEndTime ComplexEventEndTime_332(FIX::UTCTIMEONLY(5, 47, 11));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventEndTime_332);
            ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventEndTime_332.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_332(FIX::UTCTIMEONLY(9, 9, 13));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventStartTime_332);
            ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventStartTime_332.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);

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
        multiset<string> EvntGrp_NoEvents_86;
        FIX::EventDate EventDate_86("LOCALMKTDATE_207634917");
        noEvents_1_0_2_0.set(EventDate_86);
        EvntGrp_NoEvents_86.insert(EventDate_86.getString());
        FIX::EventPx EventPx_86;
        EventPx_86.setString("5130610");
        noEvents_1_0_2_0.set(EventPx_86);
        EvntGrp_NoEvents_86.insert(EventPx_86.getString());
        FIX::EventText EventText_86("STRING_2005548315");
        noEvents_1_0_2_0.set(EventText_86);
        EvntGrp_NoEvents_86.insert(EventText_86.getString());
        FIX::EventTime EventTime_86(FIX::UTCTIMESTAMP(22, 52, 34, 1, 2, 2004));
        noEvents_1_0_2_0.set(EventTime_86);
        EvntGrp_NoEvents_86.insert(EventTime_86.getString());
        FIX::EventType EventType_86(2);
        noEvents_1_0_2_0.set(EventType_86);
        EvntGrp_NoEvents_86.insert(EventType_86.getString());
        all_values.push_back(EvntGrp_NoEvents_86);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_89;
        FIX::InstrumentPartyID InstrumentPartyID_89("STRING_1488576826");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_89);
        InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyID_89.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_89('8');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_89);
        InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyIDSource_89.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_89(1544575776);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_89);
        InstrumentParties_NoInstrumentParties_89.insert(InstrumentPartyRole_89.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_89);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185;
          FIX::InstrumentPartySubID InstrumentPartySubID_185("STRING_1760663267");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_185);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubID_185.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_185(189459120);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_185);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubIDType_185.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186;
          FIX::InstrumentPartySubID InstrumentPartySubID_186("STRING_780792679");
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubID_186);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubID_186.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_186(455812508);
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubIDType_186);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubIDType_186.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187;
          FIX::InstrumentPartySubID InstrumentPartySubID_187("STRING_1655259973");
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubID_187);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubID_187.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_187(1056345283);
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubIDType_187);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubIDType_187.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_90;
        FIX::InstrumentPartyID InstrumentPartyID_90("STRING_1421308604");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_90);
        InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyID_90.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_90('5');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_90);
        InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyIDSource_90.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_90(1753951470);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_90);
        InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyRole_90.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_90);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188;
          FIX::InstrumentPartySubID InstrumentPartySubID_188("STRING_1645835183");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_188);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubID_188.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_188(1225905895);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_188);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubIDType_188.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189;
          FIX::InstrumentPartySubID InstrumentPartySubID_189("STRING_1309357796");
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubID_189);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubID_189.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_189(1891501597);
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubIDType_189);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubIDType_189.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190;
          FIX::InstrumentPartySubID InstrumentPartySubID_190("STRING_1916259206");
          noInstrumentPartySubIDs_1_0_1_3_2.set(InstrumentPartySubID_190);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubID_190.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_190(1516992713);
          noInstrumentPartySubIDs_1_0_1_3_2.set(InstrumentPartySubIDType_190);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubIDType_190.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_91;
        FIX::InstrumentPartyID InstrumentPartyID_91("STRING_257079011");
        noInstrumentParties_1_0_2_2.set(InstrumentPartyID_91);
        InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyID_91.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_91('1');
        noInstrumentParties_1_0_2_2.set(InstrumentPartyIDSource_91);
        InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyIDSource_91.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_91(1578729892);
        noInstrumentParties_1_0_2_2.set(InstrumentPartyRole_91);
        InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyRole_91.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_91);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191;
          FIX::InstrumentPartySubID InstrumentPartySubID_191("STRING_1266160697");
          noInstrumentPartySubIDs_1_0_2_3_0.set(InstrumentPartySubID_191);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubID_191.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_191(2036710107);
          noInstrumentPartySubIDs_1_0_2_3_0.set(InstrumentPartySubIDType_191);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubIDType_191.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192;
          FIX::InstrumentPartySubID InstrumentPartySubID_192("STRING_2082599694");
          noInstrumentPartySubIDs_1_0_2_3_1.set(InstrumentPartySubID_192);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubID_192.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_192(1806839479);
          noInstrumentPartySubIDs_1_0_2_3_1.set(InstrumentPartySubIDType_192);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubIDType_192.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_91;
        FIX::SecurityAltID SecurityAltID_91("STRING_762041568");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_91);
        SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltID_91.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_91("STRING_760613179");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_91);
        SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltIDSource_91.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_91);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_92;
        FIX::SecurityAltID SecurityAltID_92("STRING_946129591");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_92);
        SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltID_92.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_92("STRING_1580987522");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_92);
        SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltIDSource_92.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_92);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_93;
        FIX::SecurityAltID SecurityAltID_93("STRING_157705307");
        noSecurityAltID_1_0_2_2.set(SecurityAltID_93);
        SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltID_93.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_93("STRING_1058389248");
        noSecurityAltID_1_0_2_2.set(SecurityAltIDSource_93);
        SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltIDSource_93.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_93);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_84;
      FIX::SecurityXML SecurityXML_85("XMLDATA_1194167142");
      noQuoteEntries_1_1_0.set(SecurityXML_85);
      FIX::SecurityXMLLen SecurityXMLLen_42(347164428);
      noQuoteEntries_1_1_0.set(SecurityXMLLen_42);
      FIX::SecurityXMLSchema SecurityXMLSchema_42("STRING_1839181928");
      noQuoteEntries_1_1_0.set(SecurityXMLSchema_42);
      SecurityXML_84.insert(SecurityXMLSchema_42.getString());
      all_values.push_back(SecurityXML_84);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_9;
      BidForwardPoints_9.setString("16499796");
      noQuoteEntries_1_1_1.set(BidForwardPoints_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidForwardPoints_9.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_9;
      BidForwardPoints2_9.setString("20024244");
      noQuoteEntries_1_1_1.set(BidForwardPoints2_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidForwardPoints2_9.getString());
      FIX::BidPx BidPx_9;
      BidPx_9.setString("7480435");
      noQuoteEntries_1_1_1.set(BidPx_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidPx_9.getString());
      FIX::BidSize BidSize_9;
      BidSize_9.setString("9238046");
      noQuoteEntries_1_1_1.set(BidSize_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidSize_9.getString());
      FIX::BidSpotRate BidSpotRate_9;
      BidSpotRate_9.setString("3687940");
      noQuoteEntries_1_1_1.set(BidSpotRate_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidSpotRate_9.getString());
      FIX::BidYield BidYield_9;
      BidYield_9.setString("13.860000");
      noQuoteEntries_1_1_1.set(BidYield_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BidYield_9.getString());
      FIX::BookingType BookingType_14(1);
      noQuoteEntries_1_1_1.set(BookingType_14);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(BookingType_14.getString());
      FIX::Currency Currency_38("EUR");
      noQuoteEntries_1_1_1.set(Currency_38);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(Currency_38.getString());
      FIX::MidPx MidPx_9;
      MidPx_9.setString("9077119");
      noQuoteEntries_1_1_1.set(MidPx_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(MidPx_9.getString());
      FIX::MidYield MidYield_9;
      MidYield_9.setString("71.680000");
      noQuoteEntries_1_1_1.set(MidYield_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(MidYield_9.getString());
      FIX::OfferForwardPoints OfferForwardPoints_9;
      OfferForwardPoints_9.setString("13491928");
      noQuoteEntries_1_1_1.set(OfferForwardPoints_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferForwardPoints_9.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_9;
      OfferForwardPoints2_9.setString("2772209");
      noQuoteEntries_1_1_1.set(OfferForwardPoints2_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferForwardPoints2_9.getString());
      FIX::OfferPx OfferPx_9;
      OfferPx_9.setString("20157261");
      noQuoteEntries_1_1_1.set(OfferPx_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferPx_9.getString());
      FIX::OfferSize OfferSize_9;
      OfferSize_9.setString("9760330");
      noQuoteEntries_1_1_1.set(OfferSize_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferSize_9.getString());
      FIX::OfferSpotRate OfferSpotRate_9;
      OfferSpotRate_9.setString("18559508");
      noQuoteEntries_1_1_1.set(OfferSpotRate_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferSpotRate_9.getString());
      FIX::OfferYield OfferYield_9;
      OfferYield_9.setString("70.200000");
      noQuoteEntries_1_1_1.set(OfferYield_9);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OfferYield_9.getString());
      FIX::OrdType OrdType_29('J');
      noQuoteEntries_1_1_1.set(OrdType_29);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrdType_29.getString());
      FIX::OrderCapacity OrderCapacity_16('W');
      noQuoteEntries_1_1_1.set(OrderCapacity_16);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderCapacity_16.getString());
      FIX::OrderQty2 OrderQty2_10;
      OrderQty2_10.setString("20142930");
      noQuoteEntries_1_1_1.set(OrderQty2_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderQty2_10.getString());
      FIX::OrderRestrictions OrderRestrictions_14("MULTIPLECHARVALUE_E");
      noQuoteEntries_1_1_1.set(OrderRestrictions_14);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(OrderRestrictions_14.getString());
      FIX::QuoteEntryID QuoteEntryID_11("STRING_1202730104");
      noQuoteEntries_1_1_1.set(QuoteEntryID_11);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryID_11.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_2(628850986);
      noQuoteEntries_1_1_1.set(QuoteEntryRejectReason_2);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryRejectReason_2.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_2(12);
      noQuoteEntries_1_1_1.set(QuoteEntryStatus_2);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(QuoteEntryStatus_2.getString());
      FIX::SettlDate SettlDate_27("LOCALMKTDATE_1376048");
      noQuoteEntries_1_1_1.set(SettlDate_27);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(SettlDate_27.getString());
      FIX::SettlDate2 SettlDate2_10("LOCALMKTDATE_62354861");
      noQuoteEntries_1_1_1.set(SettlDate2_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(SettlDate2_10.getString());
      FIX::TradingSessionID TradingSessionID_32("STRING_1");
      noQuoteEntries_1_1_1.set(TradingSessionID_32);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TradingSessionID_32.getString());
      FIX::TradingSessionSubID TradingSessionSubID_32("STRING_3");
      noQuoteEntries_1_1_1.set(TradingSessionSubID_32);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TradingSessionSubID_32.getString());
      FIX::TransactTime TransactTime_35(FIX::UTCTIMESTAMP(12, 56, 5, 25, 5, 2001));
      noQuoteEntries_1_1_1.set(TransactTime_35);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(TransactTime_35.getString());
      FIX::ValidUntilTime ValidUntilTime_10(FIX::UTCTIMESTAMP(22, 36, 40, 3, 7, 2010));
      noQuoteEntries_1_1_1.set(ValidUntilTime_10);
      QuotEntryAckGrp_NoQuoteEntries_2.insert(ValidUntilTime_10.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_2);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_76;
        FIX::EncodedLegIssuer EncodedLegIssuer_76("DATA_318625998");
        noLegs_1_1_2_0.set(EncodedLegIssuer_76);
        InstrumentLeg_76.insert(EncodedLegIssuer_76.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_76(589835271);
        noLegs_1_1_2_0.set(EncodedLegIssuerLen_76);
        InstrumentLeg_76.insert(EncodedLegIssuerLen_76.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_76("DATA_1464694416");
        noLegs_1_1_2_0.set(EncodedLegSecurityDesc_76);
        InstrumentLeg_76.insert(EncodedLegSecurityDesc_76.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_76(27093230);
        noLegs_1_1_2_0.set(EncodedLegSecurityDescLen_76);
        InstrumentLeg_76.insert(EncodedLegSecurityDescLen_76.getString());
        FIX::LegCFICode LegCFICode_76("STRING_521528643");
        noLegs_1_1_2_0.set(LegCFICode_76);
        InstrumentLeg_76.insert(LegCFICode_76.getString());
        FIX::LegContractMultiplier LegContractMultiplier_76;
        LegContractMultiplier_76.setString("15594045");
        noLegs_1_1_2_0.set(LegContractMultiplier_76);
        InstrumentLeg_76.insert(LegContractMultiplier_76.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_76(1772270569);
        noLegs_1_1_2_0.set(LegContractMultiplierUnit_76);
        InstrumentLeg_76.insert(LegContractMultiplierUnit_76.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_76("MONTHYEAR_388338061");
        noLegs_1_1_2_0.set(LegContractSettlMonth_76);
        InstrumentLeg_76.insert(LegContractSettlMonth_76.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_76("COUNTRY_1313470476");
        noLegs_1_1_2_0.set(LegCountryOfIssue_76);
        InstrumentLeg_76.insert(LegCountryOfIssue_76.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_76("LOCALMKTDATE_827517025");
        noLegs_1_1_2_0.set(LegCouponPaymentDate_76);
        InstrumentLeg_76.insert(LegCouponPaymentDate_76.getString());
        FIX::LegCouponRate LegCouponRate_76;
        LegCouponRate_76.setString("90.480000");
        noLegs_1_1_2_0.set(LegCouponRate_76);
        InstrumentLeg_76.insert(LegCouponRate_76.getString());
        FIX::LegCreditRating LegCreditRating_76("STRING_1828149601");
        noLegs_1_1_2_0.set(LegCreditRating_76);
        InstrumentLeg_76.insert(LegCreditRating_76.getString());
        FIX::LegCurrency LegCurrency_76("CAN");
        noLegs_1_1_2_0.set(LegCurrency_76);
        InstrumentLeg_76.insert(LegCurrency_76.getString());
        FIX::LegDatedDate LegDatedDate_76("LOCALMKTDATE_353050385");
        noLegs_1_1_2_0.set(LegDatedDate_76);
        InstrumentLeg_76.insert(LegDatedDate_76.getString());
        FIX::LegExerciseStyle LegExerciseStyle_76(1888658370);
        noLegs_1_1_2_0.set(LegExerciseStyle_76);
        InstrumentLeg_76.insert(LegExerciseStyle_76.getString());
        FIX::LegFactor LegFactor_76;
        LegFactor_76.setString("1885822");
        noLegs_1_1_2_0.set(LegFactor_76);
        InstrumentLeg_76.insert(LegFactor_76.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_76(1372599246);
        noLegs_1_1_2_0.set(LegFlowScheduleType_76);
        InstrumentLeg_76.insert(LegFlowScheduleType_76.getString());
        FIX::LegInstrRegistry LegInstrRegistry_76("STRING_492638298");
        noLegs_1_1_2_0.set(LegInstrRegistry_76);
        InstrumentLeg_76.insert(LegInstrRegistry_76.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_76("LOCALMKTDATE_947600269");
        noLegs_1_1_2_0.set(LegInterestAccrualDate_76);
        InstrumentLeg_76.insert(LegInterestAccrualDate_76.getString());
        FIX::LegIssueDate LegIssueDate_76("LOCALMKTDATE_99605211");
        noLegs_1_1_2_0.set(LegIssueDate_76);
        InstrumentLeg_76.insert(LegIssueDate_76.getString());
        FIX::LegIssuer LegIssuer_76("STRING_1992145438");
        noLegs_1_1_2_0.set(LegIssuer_76);
        InstrumentLeg_76.insert(LegIssuer_76.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_76("STRING_482939232");
        noLegs_1_1_2_0.set(LegLocaleOfIssue_76);
        InstrumentLeg_76.insert(LegLocaleOfIssue_76.getString());
        FIX::LegMaturityDate LegMaturityDate_76("LOCALMKTDATE_1342888860");
        noLegs_1_1_2_0.set(LegMaturityDate_76);
        InstrumentLeg_76.insert(LegMaturityDate_76.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_76("MONTHYEAR_1698680316");
        noLegs_1_1_2_0.set(LegMaturityMonthYear_76);
        InstrumentLeg_76.insert(LegMaturityMonthYear_76.getString());
        FIX::LegMaturityTime LegMaturityTime_76("TZTIMEONLY_1764115968");
        noLegs_1_1_2_0.set(LegMaturityTime_76);
        InstrumentLeg_76.insert(LegMaturityTime_76.getString());
        FIX::LegOptAttribute LegOptAttribute_76('3');
        noLegs_1_1_2_0.set(LegOptAttribute_76);
        InstrumentLeg_76.insert(LegOptAttribute_76.getString());
        FIX::LegOptionRatio LegOptionRatio_76;
        LegOptionRatio_76.setString("8381488");
        noLegs_1_1_2_0.set(LegOptionRatio_76);
        InstrumentLeg_76.insert(LegOptionRatio_76.getString());
        FIX::LegPool LegPool_76("STRING_1805520979");
        noLegs_1_1_2_0.set(LegPool_76);
        InstrumentLeg_76.insert(LegPool_76.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_76("STRING_1027427172");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasure_76);
        InstrumentLeg_76.insert(LegPriceUnitOfMeasure_76.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_76;
        LegPriceUnitOfMeasureQty_76.setString("13268101");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasureQty_76);
        InstrumentLeg_76.insert(LegPriceUnitOfMeasureQty_76.getString());
        FIX::LegProduct LegProduct_76(2124146977);
        noLegs_1_1_2_0.set(LegProduct_76);
        InstrumentLeg_76.insert(LegProduct_76.getString());
        FIX::LegPutOrCall LegPutOrCall_76(1617262443);
        noLegs_1_1_2_0.set(LegPutOrCall_76);
        InstrumentLeg_76.insert(LegPutOrCall_76.getString());
        FIX::LegRatioQty LegRatioQty_76;
        LegRatioQty_76.setString("6440209");
        noLegs_1_1_2_0.set(LegRatioQty_76);
        InstrumentLeg_76.insert(LegRatioQty_76.getString());
        FIX::LegRedemptionDate LegRedemptionDate_76("LOCALMKTDATE_3756559");
        noLegs_1_1_2_0.set(LegRedemptionDate_76);
        InstrumentLeg_76.insert(LegRedemptionDate_76.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_76("STRING_2138791086");
        noLegs_1_1_2_0.set(LegRepoCollateralSecurityType_76);
        InstrumentLeg_76.insert(LegRepoCollateralSecurityType_76.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_76;
        LegRepurchaseRate_76.setString("18.290000");
        noLegs_1_1_2_0.set(LegRepurchaseRate_76);
        InstrumentLeg_76.insert(LegRepurchaseRate_76.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_76(1776027128);
        noLegs_1_1_2_0.set(LegRepurchaseTerm_76);
        InstrumentLeg_76.insert(LegRepurchaseTerm_76.getString());
        FIX::LegSecurityDesc LegSecurityDesc_76("STRING_379645500");
        noLegs_1_1_2_0.set(LegSecurityDesc_76);
        InstrumentLeg_76.insert(LegSecurityDesc_76.getString());
        FIX::LegSecurityExchange LegSecurityExchange_76("EXCHANGE_1369412305");
        noLegs_1_1_2_0.set(LegSecurityExchange_76);
        InstrumentLeg_76.insert(LegSecurityExchange_76.getString());
        FIX::LegSecurityID LegSecurityID_76("STRING_456060505");
        noLegs_1_1_2_0.set(LegSecurityID_76);
        InstrumentLeg_76.insert(LegSecurityID_76.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_76("STRING_1396834548");
        noLegs_1_1_2_0.set(LegSecurityIDSource_76);
        InstrumentLeg_76.insert(LegSecurityIDSource_76.getString());
        FIX::LegSecuritySubType LegSecuritySubType_76("STRING_1050078258");
        noLegs_1_1_2_0.set(LegSecuritySubType_76);
        InstrumentLeg_76.insert(LegSecuritySubType_76.getString());
        FIX::LegSecurityType LegSecurityType_76("STRING_1284953579");
        noLegs_1_1_2_0.set(LegSecurityType_76);
        InstrumentLeg_76.insert(LegSecurityType_76.getString());
        FIX::LegSide LegSide_76('3');
        noLegs_1_1_2_0.set(LegSide_76);
        InstrumentLeg_76.insert(LegSide_76.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_76("STRING_1403128644");
        noLegs_1_1_2_0.set(LegStateOrProvinceOfIssue_76);
        InstrumentLeg_76.insert(LegStateOrProvinceOfIssue_76.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_76("CAN");
        noLegs_1_1_2_0.set(LegStrikeCurrency_76);
        InstrumentLeg_76.insert(LegStrikeCurrency_76.getString());
        FIX::LegStrikePrice LegStrikePrice_76;
        LegStrikePrice_76.setString("6282442");
        noLegs_1_1_2_0.set(LegStrikePrice_76);
        InstrumentLeg_76.insert(LegStrikePrice_76.getString());
        FIX::LegSymbol LegSymbol_76("STRING_1518766599");
        noLegs_1_1_2_0.set(LegSymbol_76);
        InstrumentLeg_76.insert(LegSymbol_76.getString());
        FIX::LegSymbolSfx LegSymbolSfx_76("STRING_1465077342");
        noLegs_1_1_2_0.set(LegSymbolSfx_76);
        InstrumentLeg_76.insert(LegSymbolSfx_76.getString());
        FIX::LegTimeUnit LegTimeUnit_76("STRING_727849453");
        noLegs_1_1_2_0.set(LegTimeUnit_76);
        InstrumentLeg_76.insert(LegTimeUnit_76.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_76("STRING_1363428390");
        noLegs_1_1_2_0.set(LegUnitOfMeasure_76);
        InstrumentLeg_76.insert(LegUnitOfMeasure_76.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_76;
        LegUnitOfMeasureQty_76.setString("19480165");
        noLegs_1_1_2_0.set(LegUnitOfMeasureQty_76);
        InstrumentLeg_76.insert(LegUnitOfMeasureQty_76.getString());
        all_values.push_back(InstrumentLeg_76);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_149;
          FIX::LegSecurityAltID LegSecurityAltID_149("STRING_914625058");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltID_149);
          LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltID_149.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_149("STRING_1564648894");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltIDSource_149);
          LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltIDSource_149.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_149);

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_150;
          FIX::LegSecurityAltID LegSecurityAltID_150("STRING_229089098");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltID_150);
          LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltID_150.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_150("STRING_1752773886");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltIDSource_150);
          LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltIDSource_150.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_150);

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_151;
          FIX::LegSecurityAltID LegSecurityAltID_151("STRING_1222686225");
          noLegSecurityAltID_1_1_0_3_2.set(LegSecurityAltID_151);
          LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltID_151.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_151("STRING_1256516271");
          noLegSecurityAltID_1_1_0_3_2.set(LegSecurityAltIDSource_151);
          LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltIDSource_151.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_151);

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_43;
      FIX::AttachmentPoint AttachmentPoint_43;
      AttachmentPoint_43.setString("4.170000");
      noQuoteEntries_1_1_1.set(AttachmentPoint_43);
      Instrument_43.insert(AttachmentPoint_43.getString());
      FIX::CFICode CFICode_43("STRING_1199349554");
      noQuoteEntries_1_1_1.set(CFICode_43);
      Instrument_43.insert(CFICode_43.getString());
      FIX::CPProgram CPProgram_43(2);
      noQuoteEntries_1_1_1.set(CPProgram_43);
      Instrument_43.insert(CPProgram_43.getString());
      FIX::CPRegType CPRegType_43("STRING_1576121364");
      noQuoteEntries_1_1_1.set(CPRegType_43);
      Instrument_43.insert(CPRegType_43.getString());
      FIX::CapPrice CapPrice_43;
      CapPrice_43.setString("12031061");
      noQuoteEntries_1_1_1.set(CapPrice_43);
      Instrument_43.insert(CapPrice_43.getString());
      FIX::ContractMultiplier ContractMultiplier_43;
      ContractMultiplier_43.setString("7176025");
      noQuoteEntries_1_1_1.set(ContractMultiplier_43);
      Instrument_43.insert(ContractMultiplier_43.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_43(2);
      noQuoteEntries_1_1_1.set(ContractMultiplierUnit_43);
      Instrument_43.insert(ContractMultiplierUnit_43.getString());
      FIX::ContractSettlMonth ContractSettlMonth_43("MONTHYEAR_831649593");
      noQuoteEntries_1_1_1.set(ContractSettlMonth_43);
      Instrument_43.insert(ContractSettlMonth_43.getString());
      FIX::CountryOfIssue CountryOfIssue_43("COUNTRY_1097248005");
      noQuoteEntries_1_1_1.set(CountryOfIssue_43);
      Instrument_43.insert(CountryOfIssue_43.getString());
      FIX::CouponPaymentDate CouponPaymentDate_43("LOCALMKTDATE_853991851");
      noQuoteEntries_1_1_1.set(CouponPaymentDate_43);
      Instrument_43.insert(CouponPaymentDate_43.getString());
      FIX::CouponRate CouponRate_43;
      CouponRate_43.setString("0.990000");
      noQuoteEntries_1_1_1.set(CouponRate_43);
      Instrument_43.insert(CouponRate_43.getString());
      FIX::CreditRating CreditRating_43("STRING_346598905");
      noQuoteEntries_1_1_1.set(CreditRating_43);
      Instrument_43.insert(CreditRating_43.getString());
      FIX::DatedDate DatedDate_43("LOCALMKTDATE_1904070110");
      noQuoteEntries_1_1_1.set(DatedDate_43);
      Instrument_43.insert(DatedDate_43.getString());
      FIX::DetachmentPoint DetachmentPoint_43;
      DetachmentPoint_43.setString("0.300000");
      noQuoteEntries_1_1_1.set(DetachmentPoint_43);
      Instrument_43.insert(DetachmentPoint_43.getString());
      FIX::EncodedIssuer EncodedIssuer_43("DATA_675493714");
      noQuoteEntries_1_1_1.set(EncodedIssuer_43);
      Instrument_43.insert(EncodedIssuer_43.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_43(1159715106);
      noQuoteEntries_1_1_1.set(EncodedIssuerLen_43);
      Instrument_43.insert(EncodedIssuerLen_43.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_43("DATA_1451308331");
      noQuoteEntries_1_1_1.set(EncodedSecurityDesc_43);
      Instrument_43.insert(EncodedSecurityDesc_43.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_43(1192970787);
      noQuoteEntries_1_1_1.set(EncodedSecurityDescLen_43);
      Instrument_43.insert(EncodedSecurityDescLen_43.getString());
      FIX::ExerciseStyle ExerciseStyle_43(1);
      noQuoteEntries_1_1_1.set(ExerciseStyle_43);
      Instrument_43.insert(ExerciseStyle_43.getString());
      FIX::Factor Factor_43;
      Factor_43.setString("8225912");
      noQuoteEntries_1_1_1.set(Factor_43);
      Instrument_43.insert(Factor_43.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_43(false);
      noQuoteEntries_1_1_1.set(FlexProductEligibilityIndicator_43);
      Instrument_43.insert(FlexProductEligibilityIndicator_43.getString());
      FIX::FlexibleIndicator FlexibleIndicator_43(false);
      noQuoteEntries_1_1_1.set(FlexibleIndicator_43);
      Instrument_43.insert(FlexibleIndicator_43.getString());
      FIX::FloorPrice FloorPrice_43;
      FloorPrice_43.setString("385360");
      noQuoteEntries_1_1_1.set(FloorPrice_43);
      Instrument_43.insert(FloorPrice_43.getString());
      FIX::FlowScheduleType FlowScheduleType_43(2);
      noQuoteEntries_1_1_1.set(FlowScheduleType_43);
      Instrument_43.insert(FlowScheduleType_43.getString());
      FIX::InstrRegistry InstrRegistry_43("STRING_291579819");
      noQuoteEntries_1_1_1.set(InstrRegistry_43);
      Instrument_43.insert(InstrRegistry_43.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_43('9');
      noQuoteEntries_1_1_1.set(InstrmtAssignmentMethod_43);
      Instrument_43.insert(InstrmtAssignmentMethod_43.getString());
      FIX::InterestAccrualDate InterestAccrualDate_43("LOCALMKTDATE_1875746301");
      noQuoteEntries_1_1_1.set(InterestAccrualDate_43);
      Instrument_43.insert(InterestAccrualDate_43.getString());
      FIX::IssueDate IssueDate_43("LOCALMKTDATE_520668918");
      noQuoteEntries_1_1_1.set(IssueDate_43);
      Instrument_43.insert(IssueDate_43.getString());
      FIX::Issuer Issuer_43("STRING_558451321");
      noQuoteEntries_1_1_1.set(Issuer_43);
      Instrument_43.insert(Issuer_43.getString());
      FIX::ListMethod ListMethod_43(1);
      noQuoteEntries_1_1_1.set(ListMethod_43);
      Instrument_43.insert(ListMethod_43.getString());
      FIX::LocaleOfIssue LocaleOfIssue_43("STRING_1777185189");
      noQuoteEntries_1_1_1.set(LocaleOfIssue_43);
      Instrument_43.insert(LocaleOfIssue_43.getString());
      FIX::MaturityDate MaturityDate_43("LOCALMKTDATE_1490551739");
      noQuoteEntries_1_1_1.set(MaturityDate_43);
      Instrument_43.insert(MaturityDate_43.getString());
      FIX::MaturityMonthYear MaturityMonthYear_43("MONTHYEAR_2814785");
      noQuoteEntries_1_1_1.set(MaturityMonthYear_43);
      Instrument_43.insert(MaturityMonthYear_43.getString());
      FIX::MaturityTime MaturityTime_43("TZTIMEONLY_355996607");
      noQuoteEntries_1_1_1.set(MaturityTime_43);
      Instrument_43.insert(MaturityTime_43.getString());
      FIX::MinPriceIncrement MinPriceIncrement_43;
      MinPriceIncrement_43.setString("9191894");
      noQuoteEntries_1_1_1.set(MinPriceIncrement_43);
      Instrument_43.insert(MinPriceIncrement_43.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_43;
      MinPriceIncrementAmount_43.setString("12059208");
      noQuoteEntries_1_1_1.set(MinPriceIncrementAmount_43);
      Instrument_43.insert(MinPriceIncrementAmount_43.getString());
      FIX::NTPositionLimit NTPositionLimit_43(1073599112);
      noQuoteEntries_1_1_1.set(NTPositionLimit_43);
      Instrument_43.insert(NTPositionLimit_43.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_43;
      NotionalPercentageOutstanding_43.setString("90.010000");
      noQuoteEntries_1_1_1.set(NotionalPercentageOutstanding_43);
      Instrument_43.insert(NotionalPercentageOutstanding_43.getString());
      FIX::OptAttribute OptAttribute_43('2');
      noQuoteEntries_1_1_1.set(OptAttribute_43);
      Instrument_43.insert(OptAttribute_43.getString());
      FIX::OptPayoutAmount OptPayoutAmount_43;
      OptPayoutAmount_43.setString("233634");
      noQuoteEntries_1_1_1.set(OptPayoutAmount_43);
      Instrument_43.insert(OptPayoutAmount_43.getString());
      FIX::OptPayoutType OptPayoutType_43(3);
      noQuoteEntries_1_1_1.set(OptPayoutType_43);
      Instrument_43.insert(OptPayoutType_43.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_43;
      OriginalNotionalPercentageOutstanding_43.setString("69.430000");
      noQuoteEntries_1_1_1.set(OriginalNotionalPercentageOutstanding_43);
      Instrument_43.insert(OriginalNotionalPercentageOutstanding_43.getString());
      FIX::Pool Pool_43("STRING_369962374");
      noQuoteEntries_1_1_1.set(Pool_43);
      Instrument_43.insert(Pool_43.getString());
      FIX::PositionLimit PositionLimit_43(1014347315);
      noQuoteEntries_1_1_1.set(PositionLimit_43);
      Instrument_43.insert(PositionLimit_43.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_43("STRING_INX");
      noQuoteEntries_1_1_1.set(PriceQuoteMethod_43);
      Instrument_43.insert(PriceQuoteMethod_43.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_43("STRING_1045456088");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasure_43);
      Instrument_43.insert(PriceUnitOfMeasure_43.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_43;
      PriceUnitOfMeasureQty_43.setString("265787");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasureQty_43);
      Instrument_43.insert(PriceUnitOfMeasureQty_43.getString());
      FIX::Product Product_45(8);
      noQuoteEntries_1_1_1.set(Product_45);
      Instrument_43.insert(Product_45.getString());
      FIX::ProductComplex ProductComplex_43("STRING_90943227");
      noQuoteEntries_1_1_1.set(ProductComplex_43);
      Instrument_43.insert(ProductComplex_43.getString());
      FIX::PutOrCall PutOrCall_43(1);
      noQuoteEntries_1_1_1.set(PutOrCall_43);
      Instrument_43.insert(PutOrCall_43.getString());
      FIX::RedemptionDate RedemptionDate_43("LOCALMKTDATE_1729392939");
      noQuoteEntries_1_1_1.set(RedemptionDate_43);
      Instrument_43.insert(RedemptionDate_43.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_43("STRING_601507708");
      noQuoteEntries_1_1_1.set(RepoCollateralSecurityType_43);
      Instrument_43.insert(RepoCollateralSecurityType_43.getString());
      FIX::RepurchaseRate RepurchaseRate_43;
      RepurchaseRate_43.setString("96.260000");
      noQuoteEntries_1_1_1.set(RepurchaseRate_43);
      Instrument_43.insert(RepurchaseRate_43.getString());
      FIX::RepurchaseTerm RepurchaseTerm_43(1767928963);
      noQuoteEntries_1_1_1.set(RepurchaseTerm_43);
      Instrument_43.insert(RepurchaseTerm_43.getString());
      FIX::RestructuringType RestructuringType_43("STRING_XR");
      noQuoteEntries_1_1_1.set(RestructuringType_43);
      Instrument_43.insert(RestructuringType_43.getString());
      FIX::SecurityDesc SecurityDesc_43("STRING_326959446");
      noQuoteEntries_1_1_1.set(SecurityDesc_43);
      Instrument_43.insert(SecurityDesc_43.getString());
      FIX::SecurityExchange SecurityExchange_43("EXCHANGE_573606398");
      noQuoteEntries_1_1_1.set(SecurityExchange_43);
      Instrument_43.insert(SecurityExchange_43.getString());
      FIX::SecurityGroup SecurityGroup_43("STRING_640867769");
      noQuoteEntries_1_1_1.set(SecurityGroup_43);
      Instrument_43.insert(SecurityGroup_43.getString());
      FIX::SecurityID SecurityID_43("STRING_847628364");
      noQuoteEntries_1_1_1.set(SecurityID_43);
      Instrument_43.insert(SecurityID_43.getString());
      FIX::SecurityIDSource SecurityIDSource_43("STRING_3");
      noQuoteEntries_1_1_1.set(SecurityIDSource_43);
      Instrument_43.insert(SecurityIDSource_43.getString());
      FIX::SecurityStatus SecurityStatus_43("STRING_1");
      noQuoteEntries_1_1_1.set(SecurityStatus_43);
      Instrument_43.insert(SecurityStatus_43.getString());
      FIX::SecuritySubType SecuritySubType_44("STRING_477329905");
      noQuoteEntries_1_1_1.set(SecuritySubType_44);
      Instrument_43.insert(SecuritySubType_44.getString());
      FIX::SecurityType SecurityType_45("STRING_MF");
      noQuoteEntries_1_1_1.set(SecurityType_45);
      Instrument_43.insert(SecurityType_45.getString());
      FIX::Seniority Seniority_43("STRING_SD");
      noQuoteEntries_1_1_1.set(Seniority_43);
      Instrument_43.insert(Seniority_43.getString());
      FIX::SettlMethod SettlMethod_43('C');
      noQuoteEntries_1_1_1.set(SettlMethod_43);
      Instrument_43.insert(SettlMethod_43.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_43("STRING_1394315266");
      noQuoteEntries_1_1_1.set(SettleOnOpenFlag_43);
      Instrument_43.insert(SettleOnOpenFlag_43.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_43("STRING_653068684");
      noQuoteEntries_1_1_1.set(StateOrProvinceOfIssue_43);
      Instrument_43.insert(StateOrProvinceOfIssue_43.getString());
      FIX::StrikeCurrency StrikeCurrency_43("GBP");
      noQuoteEntries_1_1_1.set(StrikeCurrency_43);
      Instrument_43.insert(StrikeCurrency_43.getString());
      FIX::StrikeMultiplier StrikeMultiplier_43;
      StrikeMultiplier_43.setString("5431555");
      noQuoteEntries_1_1_1.set(StrikeMultiplier_43);
      Instrument_43.insert(StrikeMultiplier_43.getString());
      FIX::StrikePrice StrikePrice_43;
      StrikePrice_43.setString("19302890");
      noQuoteEntries_1_1_1.set(StrikePrice_43);
      Instrument_43.insert(StrikePrice_43.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_43(4);
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryMethod_43);
      Instrument_43.insert(StrikePriceBoundaryMethod_43.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_43;
      StrikePriceBoundaryPrecision_43.setString("24.720000");
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryPrecision_43);
      Instrument_43.insert(StrikePriceBoundaryPrecision_43.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_43(2);
      noQuoteEntries_1_1_1.set(StrikePriceDeterminationMethod_43);
      Instrument_43.insert(StrikePriceDeterminationMethod_43.getString());
      FIX::StrikeValue StrikeValue_43;
      StrikeValue_43.setString("19227087");
      noQuoteEntries_1_1_1.set(StrikeValue_43);
      Instrument_43.insert(StrikeValue_43.getString());
      FIX::Symbol Symbol_43("STRING_1176445798");
      noQuoteEntries_1_1_1.set(Symbol_43);
      Instrument_43.insert(Symbol_43.getString());
      FIX::SymbolSfx SymbolSfx_43("STRING_WI");
      noQuoteEntries_1_1_1.set(SymbolSfx_43);
      Instrument_43.insert(SymbolSfx_43.getString());
      FIX::TimeUnit TimeUnit_43("STRING_Wk");
      noQuoteEntries_1_1_1.set(TimeUnit_43);
      Instrument_43.insert(TimeUnit_43.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_43(3);
      noQuoteEntries_1_1_1.set(UnderlyingPriceDeterminationMethod_43);
      Instrument_43.insert(UnderlyingPriceDeterminationMethod_43.getString());
      FIX::UnitOfMeasure UnitOfMeasure_43("STRING_USD");
      noQuoteEntries_1_1_1.set(UnitOfMeasure_43);
      Instrument_43.insert(UnitOfMeasure_43.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_43;
      UnitOfMeasureQty_43.setString("16163420");
      noQuoteEntries_1_1_1.set(UnitOfMeasureQty_43);
      Instrument_43.insert(UnitOfMeasureQty_43.getString());
      FIX::ValuationMethod ValuationMethod_43("STRING_EQTY");
      noQuoteEntries_1_1_1.set(ValuationMethod_43);
      Instrument_43.insert(ValuationMethod_43.getString());
      all_values.push_back(Instrument_43);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_83;
        FIX::ComplexEventCondition ComplexEventCondition_83(1);
        noComplexEvents_1_1_2_0.set(ComplexEventCondition_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventCondition_83.getString());
        FIX::ComplexEventPrice ComplexEventPrice_83;
        ComplexEventPrice_83.setString("12856020");
        noComplexEvents_1_1_2_0.set(ComplexEventPrice_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPrice_83.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_83(4);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryMethod_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryMethod_83.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_83;
        ComplexEventPriceBoundaryPrecision_83.setString("11.060000");
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryPrecision_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryPrecision_83.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_83(1);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceTimeType_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceTimeType_83.getString());
        FIX::ComplexEventType ComplexEventType_83(9);
        noComplexEvents_1_1_2_0.set(ComplexEventType_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexEventType_83.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_83;
        ComplexOptPayoutAmount_83.setString("6788258");
        noComplexEvents_1_1_2_0.set(ComplexOptPayoutAmount_83);
        ComplexEvents_NoComplexEvents_83.insert(ComplexOptPayoutAmount_83.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_83);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_166;
          FIX::ComplexEventEndDate ComplexEventEndDate_166(FIX::UTCTIMESTAMP(7, 42, 47, 4, 10, 2004));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventEndDate_166);
          ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventEndDate_166.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_166(FIX::UTCTIMESTAMP(21, 1, 43, 14, 6, 2010));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventStartDate_166);
          ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventStartDate_166.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_166);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
            FIX::ComplexEventEndTime ComplexEventEndTime_333(FIX::UTCTIMEONLY(2, 27, 50));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventEndTime_333);
            ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventEndTime_333.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_333(FIX::UTCTIMEONLY(13, 7, 40));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventStartTime_333);
            ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventStartTime_333.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
            FIX::ComplexEventEndTime ComplexEventEndTime_334(FIX::UTCTIMEONLY(12, 5, 52));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventEndTime_334);
            ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventEndTime_334.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_334(FIX::UTCTIMEONLY(19, 26, 43));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventStartTime_334);
            ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventStartTime_334.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_167;
          FIX::ComplexEventEndDate ComplexEventEndDate_167(FIX::UTCTIMESTAMP(10, 18, 9, 10, 4, 2007));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventEndDate_167);
          ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventEndDate_167.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_167(FIX::UTCTIMESTAMP(0, 54, 10, 22, 12, 2003));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventStartDate_167);
          ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventStartDate_167.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_167);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
            FIX::ComplexEventEndTime ComplexEventEndTime_335(FIX::UTCTIMEONLY(9, 7, 37));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventEndTime_335);
            ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventEndTime_335.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_335(FIX::UTCTIMEONLY(8, 36, 28));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventStartTime_335);
            ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventStartTime_335.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_336;
            FIX::ComplexEventEndTime ComplexEventEndTime_336(FIX::UTCTIMEONLY(13, 26, 29));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventEndTime_336);
            ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventEndTime_336.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_336(FIX::UTCTIMEONLY(9, 56, 44));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventStartTime_336);
            ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventStartTime_336.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_336);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_168;
          FIX::ComplexEventEndDate ComplexEventEndDate_168(FIX::UTCTIMESTAMP(10, 2, 56, 8, 10, 2003));
          noComplexEventDates_1_1_0_3_2.set(ComplexEventEndDate_168);
          ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventEndDate_168.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_168(FIX::UTCTIMESTAMP(21, 51, 45, 19, 7, 2004));
          noComplexEventDates_1_1_0_3_2.set(ComplexEventStartDate_168);
          ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventStartDate_168.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_168);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_337;
            FIX::ComplexEventEndTime ComplexEventEndTime_337(FIX::UTCTIMEONLY(1, 10, 6));
            noComplexEventTimes_1_1_0_2_4_0.set(ComplexEventEndTime_337);
            ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventEndTime_337.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_337(FIX::UTCTIMEONLY(22, 35, 34));
            noComplexEventTimes_1_1_0_2_4_0.set(ComplexEventStartTime_337);
            ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventStartTime_337.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_337);

            noComplexEventDates_1_1_0_3_2.addGroup(noComplexEventTimes_1_1_0_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_338;
            FIX::ComplexEventEndTime ComplexEventEndTime_338(FIX::UTCTIMEONLY(0, 0, 29));
            noComplexEventTimes_1_1_0_2_4_1.set(ComplexEventEndTime_338);
            ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventEndTime_338.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_338(FIX::UTCTIMEONLY(1, 17, 49));
            noComplexEventTimes_1_1_0_2_4_1.set(ComplexEventStartTime_338);
            ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventStartTime_338.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_338);

            noComplexEventDates_1_1_0_3_2.addGroup(noComplexEventTimes_1_1_0_2_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_339;
            FIX::ComplexEventEndTime ComplexEventEndTime_339(FIX::UTCTIMEONLY(15, 52, 8));
            noComplexEventTimes_1_1_0_2_4_2.set(ComplexEventEndTime_339);
            ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventEndTime_339.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_339(FIX::UTCTIMEONLY(13, 5, 14));
            noComplexEventTimes_1_1_0_2_4_2.set(ComplexEventStartTime_339);
            ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventStartTime_339.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_339);

            noComplexEventDates_1_1_0_3_2.addGroup(noComplexEventTimes_1_1_0_2_4_2);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_84;
        FIX::ComplexEventCondition ComplexEventCondition_84(2);
        noComplexEvents_1_1_2_1.set(ComplexEventCondition_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventCondition_84.getString());
        FIX::ComplexEventPrice ComplexEventPrice_84;
        ComplexEventPrice_84.setString("17462272");
        noComplexEvents_1_1_2_1.set(ComplexEventPrice_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPrice_84.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_84(1);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryMethod_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryMethod_84.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_84;
        ComplexEventPriceBoundaryPrecision_84.setString("99.820000");
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryPrecision_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryPrecision_84.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_84(3);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceTimeType_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceTimeType_84.getString());
        FIX::ComplexEventType ComplexEventType_84(5);
        noComplexEvents_1_1_2_1.set(ComplexEventType_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexEventType_84.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_84;
        ComplexOptPayoutAmount_84.setString("19932780");
        noComplexEvents_1_1_2_1.set(ComplexOptPayoutAmount_84);
        ComplexEvents_NoComplexEvents_84.insert(ComplexOptPayoutAmount_84.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_84);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_169;
          FIX::ComplexEventEndDate ComplexEventEndDate_169(FIX::UTCTIMESTAMP(0, 51, 23, 11, 3, 2009));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventEndDate_169);
          ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventEndDate_169.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_169(FIX::UTCTIMESTAMP(2, 49, 28, 7, 4, 2010));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventStartDate_169);
          ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventStartDate_169.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_169);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_340;
            FIX::ComplexEventEndTime ComplexEventEndTime_340(FIX::UTCTIMEONLY(17, 16, 28));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventEndTime_340);
            ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventEndTime_340.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_340(FIX::UTCTIMEONLY(10, 25, 11));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventStartTime_340);
            ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventStartTime_340.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_340);

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_341;
            FIX::ComplexEventEndTime ComplexEventEndTime_341(FIX::UTCTIMEONLY(6, 11, 39));
            noComplexEventTimes_1_1_1_0_4_1.set(ComplexEventEndTime_341);
            ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventEndTime_341.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_341(FIX::UTCTIMEONLY(8, 5, 21));
            noComplexEventTimes_1_1_1_0_4_1.set(ComplexEventStartTime_341);
            ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventStartTime_341.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_341);

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_342;
            FIX::ComplexEventEndTime ComplexEventEndTime_342(FIX::UTCTIMEONLY(6, 4, 21));
            noComplexEventTimes_1_1_1_0_4_2.set(ComplexEventEndTime_342);
            ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventEndTime_342.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_342(FIX::UTCTIMEONLY(6, 19, 32));
            noComplexEventTimes_1_1_1_0_4_2.set(ComplexEventStartTime_342);
            ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventStartTime_342.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_342);

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_2);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_170;
          FIX::ComplexEventEndDate ComplexEventEndDate_170(FIX::UTCTIMESTAMP(12, 0, 43, 19, 3, 2014));
          noComplexEventDates_1_1_1_3_1.set(ComplexEventEndDate_170);
          ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventEndDate_170.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_170(FIX::UTCTIMESTAMP(20, 16, 55, 5, 3, 2002));
          noComplexEventDates_1_1_1_3_1.set(ComplexEventStartDate_170);
          ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventStartDate_170.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_170);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_343;
            FIX::ComplexEventEndTime ComplexEventEndTime_343(FIX::UTCTIMEONLY(18, 0, 39));
            noComplexEventTimes_1_1_1_1_4_0.set(ComplexEventEndTime_343);
            ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventEndTime_343.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_343(FIX::UTCTIMEONLY(20, 36, 1));
            noComplexEventTimes_1_1_1_1_4_0.set(ComplexEventStartTime_343);
            ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventStartTime_343.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_343);

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_344;
            FIX::ComplexEventEndTime ComplexEventEndTime_344(FIX::UTCTIMEONLY(22, 5, 15));
            noComplexEventTimes_1_1_1_1_4_1.set(ComplexEventEndTime_344);
            ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventEndTime_344.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_344(FIX::UTCTIMEONLY(12, 26, 15));
            noComplexEventTimes_1_1_1_1_4_1.set(ComplexEventStartTime_344);
            ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventStartTime_344.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_344);

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_345;
            FIX::ComplexEventEndTime ComplexEventEndTime_345(FIX::UTCTIMEONLY(15, 8, 12));
            noComplexEventTimes_1_1_1_1_4_2.set(ComplexEventEndTime_345);
            ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventEndTime_345.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_345(FIX::UTCTIMEONLY(2, 12, 1));
            noComplexEventTimes_1_1_1_1_4_2.set(ComplexEventStartTime_345);
            ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventStartTime_345.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_345);

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_2);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_87;
        FIX::EventDate EventDate_87("LOCALMKTDATE_935821888");
        noEvents_1_1_2_0.set(EventDate_87);
        EvntGrp_NoEvents_87.insert(EventDate_87.getString());
        FIX::EventPx EventPx_87;
        EventPx_87.setString("9320350");
        noEvents_1_1_2_0.set(EventPx_87);
        EvntGrp_NoEvents_87.insert(EventPx_87.getString());
        FIX::EventText EventText_87("STRING_1116196159");
        noEvents_1_1_2_0.set(EventText_87);
        EvntGrp_NoEvents_87.insert(EventText_87.getString());
        FIX::EventTime EventTime_87(FIX::UTCTIMESTAMP(13, 16, 18, 3, 5, 2013));
        noEvents_1_1_2_0.set(EventTime_87);
        EvntGrp_NoEvents_87.insert(EventTime_87.getString());
        FIX::EventType EventType_87(99);
        noEvents_1_1_2_0.set(EventType_87);
        EvntGrp_NoEvents_87.insert(EventType_87.getString());
        all_values.push_back(EvntGrp_NoEvents_87);

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_88;
        FIX::EventDate EventDate_88("LOCALMKTDATE_1159488664");
        noEvents_1_1_2_1.set(EventDate_88);
        EvntGrp_NoEvents_88.insert(EventDate_88.getString());
        FIX::EventPx EventPx_88;
        EventPx_88.setString("20633600");
        noEvents_1_1_2_1.set(EventPx_88);
        EvntGrp_NoEvents_88.insert(EventPx_88.getString());
        FIX::EventText EventText_88("STRING_1301433900");
        noEvents_1_1_2_1.set(EventText_88);
        EvntGrp_NoEvents_88.insert(EventText_88.getString());
        FIX::EventTime EventTime_88(FIX::UTCTIMESTAMP(4, 57, 5, 8, 10, 2014));
        noEvents_1_1_2_1.set(EventTime_88);
        EvntGrp_NoEvents_88.insert(EventTime_88.getString());
        FIX::EventType EventType_88(99);
        noEvents_1_1_2_1.set(EventType_88);
        EvntGrp_NoEvents_88.insert(EventType_88.getString());
        all_values.push_back(EvntGrp_NoEvents_88);

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_92;
        FIX::InstrumentPartyID InstrumentPartyID_92("STRING_566331351");
        noInstrumentParties_1_1_2_0.set(InstrumentPartyID_92);
        InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyID_92.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_92('1');
        noInstrumentParties_1_1_2_0.set(InstrumentPartyIDSource_92);
        InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyIDSource_92.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_92(1695949086);
        noInstrumentParties_1_1_2_0.set(InstrumentPartyRole_92);
        InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyRole_92.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_92);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193;
          FIX::InstrumentPartySubID InstrumentPartySubID_193("STRING_581976298");
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubID_193);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubID_193.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_193(322064230);
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubIDType_193);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubIDType_193.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194;
          FIX::InstrumentPartySubID InstrumentPartySubID_194("STRING_1910113279");
          noInstrumentPartySubIDs_1_1_0_3_1.set(InstrumentPartySubID_194);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubID_194.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_194(161293584);
          noInstrumentPartySubIDs_1_1_0_3_1.set(InstrumentPartySubIDType_194);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubIDType_194.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195;
          FIX::InstrumentPartySubID InstrumentPartySubID_195("STRING_1257886118");
          noInstrumentPartySubIDs_1_1_0_3_2.set(InstrumentPartySubID_195);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubID_195.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_195(694664639);
          noInstrumentPartySubIDs_1_1_0_3_2.set(InstrumentPartySubIDType_195);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubIDType_195.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_93;
        FIX::InstrumentPartyID InstrumentPartyID_93("STRING_1277489744");
        noInstrumentParties_1_1_2_1.set(InstrumentPartyID_93);
        InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyID_93.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_93('1');
        noInstrumentParties_1_1_2_1.set(InstrumentPartyIDSource_93);
        InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyIDSource_93.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_93(1473514860);
        noInstrumentParties_1_1_2_1.set(InstrumentPartyRole_93);
        InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyRole_93.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_93);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196;
          FIX::InstrumentPartySubID InstrumentPartySubID_196("STRING_1078086420");
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubID_196);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubID_196.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_196(369011532);
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubIDType_196);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubIDType_196.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197;
          FIX::InstrumentPartySubID InstrumentPartySubID_197("STRING_98640060");
          noInstrumentPartySubIDs_1_1_1_3_1.set(InstrumentPartySubID_197);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubID_197.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_197(108043481);
          noInstrumentPartySubIDs_1_1_1_3_1.set(InstrumentPartySubIDType_197);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubIDType_197.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_94;
        FIX::InstrumentPartyID InstrumentPartyID_94("STRING_574448231");
        noInstrumentParties_1_1_2_2.set(InstrumentPartyID_94);
        InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyID_94.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_94('1');
        noInstrumentParties_1_1_2_2.set(InstrumentPartyIDSource_94);
        InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyIDSource_94.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_94(23919839);
        noInstrumentParties_1_1_2_2.set(InstrumentPartyRole_94);
        InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyRole_94.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_94);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198;
          FIX::InstrumentPartySubID InstrumentPartySubID_198("STRING_1042906854");
          noInstrumentPartySubIDs_1_1_2_3_0.set(InstrumentPartySubID_198);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubID_198.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_198(565369468);
          noInstrumentPartySubIDs_1_1_2_3_0.set(InstrumentPartySubIDType_198);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubIDType_198.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199;
          FIX::InstrumentPartySubID InstrumentPartySubID_199("STRING_63418140");
          noInstrumentPartySubIDs_1_1_2_3_1.set(InstrumentPartySubID_199);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubID_199.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_199(1693320659);
          noInstrumentPartySubIDs_1_1_2_3_1.set(InstrumentPartySubIDType_199);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubIDType_199.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200;
          FIX::InstrumentPartySubID InstrumentPartySubID_200("STRING_2031700300");
          noInstrumentPartySubIDs_1_1_2_3_2.set(InstrumentPartySubID_200);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubID_200.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_200(2114647474);
          noInstrumentPartySubIDs_1_1_2_3_2.set(InstrumentPartySubIDType_200);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubIDType_200.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_94;
        FIX::SecurityAltID SecurityAltID_94("STRING_773915451");
        noSecurityAltID_1_1_2_0.set(SecurityAltID_94);
        SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltID_94.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_94("STRING_2041504828");
        noSecurityAltID_1_1_2_0.set(SecurityAltIDSource_94);
        SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltIDSource_94.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_94);

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_95;
        FIX::SecurityAltID SecurityAltID_95("STRING_1447321274");
        noSecurityAltID_1_1_2_1.set(SecurityAltID_95);
        SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltID_95.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_95("STRING_884310251");
        noSecurityAltID_1_1_2_1.set(SecurityAltIDSource_95);
        SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltIDSource_95.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_95);

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_96;
        FIX::SecurityAltID SecurityAltID_96("STRING_1589970266");
        noSecurityAltID_1_1_2_2.set(SecurityAltID_96);
        SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltID_96.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_96("STRING_1453643492");
        noSecurityAltID_1_1_2_2.set(SecurityAltIDSource_96);
        SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltIDSource_96.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_96);

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_86;
      FIX::SecurityXML SecurityXML_87("XMLDATA_1466286549");
      noQuoteEntries_1_1_1.set(SecurityXML_87);
      FIX::SecurityXMLLen SecurityXMLLen_43(1912034496);
      noQuoteEntries_1_1_1.set(SecurityXMLLen_43);
      FIX::SecurityXMLSchema SecurityXMLSchema_43("STRING_1216273123");
      noQuoteEntries_1_1_1.set(SecurityXMLSchema_43);
      SecurityXML_86.insert(SecurityXMLSchema_43.getString());
      all_values.push_back(SecurityXML_86);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_2;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_10;
      BidForwardPoints_10.setString("16275801");
      noQuoteEntries_1_1_2.set(BidForwardPoints_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidForwardPoints_10.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_10;
      BidForwardPoints2_10.setString("10224369");
      noQuoteEntries_1_1_2.set(BidForwardPoints2_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidForwardPoints2_10.getString());
      FIX::BidPx BidPx_10;
      BidPx_10.setString("19109377");
      noQuoteEntries_1_1_2.set(BidPx_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidPx_10.getString());
      FIX::BidSize BidSize_10;
      BidSize_10.setString("7575862");
      noQuoteEntries_1_1_2.set(BidSize_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidSize_10.getString());
      FIX::BidSpotRate BidSpotRate_10;
      BidSpotRate_10.setString("2061714");
      noQuoteEntries_1_1_2.set(BidSpotRate_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidSpotRate_10.getString());
      FIX::BidYield BidYield_10;
      BidYield_10.setString("89.750000");
      noQuoteEntries_1_1_2.set(BidYield_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BidYield_10.getString());
      FIX::BookingType BookingType_15(1);
      noQuoteEntries_1_1_2.set(BookingType_15);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(BookingType_15.getString());
      FIX::Currency Currency_39("CAN");
      noQuoteEntries_1_1_2.set(Currency_39);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(Currency_39.getString());
      FIX::MidPx MidPx_10;
      MidPx_10.setString("14143197");
      noQuoteEntries_1_1_2.set(MidPx_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(MidPx_10.getString());
      FIX::MidYield MidYield_10;
      MidYield_10.setString("13.490000");
      noQuoteEntries_1_1_2.set(MidYield_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(MidYield_10.getString());
      FIX::OfferForwardPoints OfferForwardPoints_10;
      OfferForwardPoints_10.setString("329450");
      noQuoteEntries_1_1_2.set(OfferForwardPoints_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferForwardPoints_10.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_10;
      OfferForwardPoints2_10.setString("5249648");
      noQuoteEntries_1_1_2.set(OfferForwardPoints2_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferForwardPoints2_10.getString());
      FIX::OfferPx OfferPx_10;
      OfferPx_10.setString("14162211");
      noQuoteEntries_1_1_2.set(OfferPx_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferPx_10.getString());
      FIX::OfferSize OfferSize_10;
      OfferSize_10.setString("19088272");
      noQuoteEntries_1_1_2.set(OfferSize_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferSize_10.getString());
      FIX::OfferSpotRate OfferSpotRate_10;
      OfferSpotRate_10.setString("15678716");
      noQuoteEntries_1_1_2.set(OfferSpotRate_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferSpotRate_10.getString());
      FIX::OfferYield OfferYield_10;
      OfferYield_10.setString("6.570000");
      noQuoteEntries_1_1_2.set(OfferYield_10);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OfferYield_10.getString());
      FIX::OrdType OrdType_30('2');
      noQuoteEntries_1_1_2.set(OrdType_30);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrdType_30.getString());
      FIX::OrderCapacity OrderCapacity_17('G');
      noQuoteEntries_1_1_2.set(OrderCapacity_17);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderCapacity_17.getString());
      FIX::OrderQty2 OrderQty2_11;
      OrderQty2_11.setString("18658073");
      noQuoteEntries_1_1_2.set(OrderQty2_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderQty2_11.getString());
      FIX::OrderRestrictions OrderRestrictions_15("MULTIPLECHARVALUE_D");
      noQuoteEntries_1_1_2.set(OrderRestrictions_15);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(OrderRestrictions_15.getString());
      FIX::QuoteEntryID QuoteEntryID_12("STRING_1994698626");
      noQuoteEntries_1_1_2.set(QuoteEntryID_12);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryID_12.getString());
      FIX::QuoteEntryRejectReason QuoteEntryRejectReason_3(492239112);
      noQuoteEntries_1_1_2.set(QuoteEntryRejectReason_3);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryRejectReason_3.getString());
      FIX::QuoteEntryStatus QuoteEntryStatus_3(6);
      noQuoteEntries_1_1_2.set(QuoteEntryStatus_3);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(QuoteEntryStatus_3.getString());
      FIX::SettlDate SettlDate_28("LOCALMKTDATE_1294536253");
      noQuoteEntries_1_1_2.set(SettlDate_28);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(SettlDate_28.getString());
      FIX::SettlDate2 SettlDate2_11("LOCALMKTDATE_1376549363");
      noQuoteEntries_1_1_2.set(SettlDate2_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(SettlDate2_11.getString());
      FIX::TradingSessionID TradingSessionID_33("STRING_6");
      noQuoteEntries_1_1_2.set(TradingSessionID_33);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TradingSessionID_33.getString());
      FIX::TradingSessionSubID TradingSessionSubID_33("STRING_2");
      noQuoteEntries_1_1_2.set(TradingSessionSubID_33);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TradingSessionSubID_33.getString());
      FIX::TransactTime TransactTime_36(FIX::UTCTIMESTAMP(9, 20, 50, 12, 7, 2011));
      noQuoteEntries_1_1_2.set(TransactTime_36);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(TransactTime_36.getString());
      FIX::ValidUntilTime ValidUntilTime_11(FIX::UTCTIMESTAMP(21, 53, 8, 12, 7, 2011));
      noQuoteEntries_1_1_2.set(ValidUntilTime_11);
      QuotEntryAckGrp_NoQuoteEntries_3.insert(ValidUntilTime_11.getString());
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_3);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_77;
        FIX::EncodedLegIssuer EncodedLegIssuer_77("DATA_2040515632");
        noLegs_1_2_2_0.set(EncodedLegIssuer_77);
        InstrumentLeg_77.insert(EncodedLegIssuer_77.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_77(2066889358);
        noLegs_1_2_2_0.set(EncodedLegIssuerLen_77);
        InstrumentLeg_77.insert(EncodedLegIssuerLen_77.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_77("DATA_2070177831");
        noLegs_1_2_2_0.set(EncodedLegSecurityDesc_77);
        InstrumentLeg_77.insert(EncodedLegSecurityDesc_77.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_77(1460903675);
        noLegs_1_2_2_0.set(EncodedLegSecurityDescLen_77);
        InstrumentLeg_77.insert(EncodedLegSecurityDescLen_77.getString());
        FIX::LegCFICode LegCFICode_77("STRING_1900996367");
        noLegs_1_2_2_0.set(LegCFICode_77);
        InstrumentLeg_77.insert(LegCFICode_77.getString());
        FIX::LegContractMultiplier LegContractMultiplier_77;
        LegContractMultiplier_77.setString("18949395");
        noLegs_1_2_2_0.set(LegContractMultiplier_77);
        InstrumentLeg_77.insert(LegContractMultiplier_77.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_77(427128730);
        noLegs_1_2_2_0.set(LegContractMultiplierUnit_77);
        InstrumentLeg_77.insert(LegContractMultiplierUnit_77.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_77("MONTHYEAR_1619320028");
        noLegs_1_2_2_0.set(LegContractSettlMonth_77);
        InstrumentLeg_77.insert(LegContractSettlMonth_77.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_77("COUNTRY_1686865084");
        noLegs_1_2_2_0.set(LegCountryOfIssue_77);
        InstrumentLeg_77.insert(LegCountryOfIssue_77.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_77("LOCALMKTDATE_274343709");
        noLegs_1_2_2_0.set(LegCouponPaymentDate_77);
        InstrumentLeg_77.insert(LegCouponPaymentDate_77.getString());
        FIX::LegCouponRate LegCouponRate_77;
        LegCouponRate_77.setString("91.410000");
        noLegs_1_2_2_0.set(LegCouponRate_77);
        InstrumentLeg_77.insert(LegCouponRate_77.getString());
        FIX::LegCreditRating LegCreditRating_77("STRING_1372811804");
        noLegs_1_2_2_0.set(LegCreditRating_77);
        InstrumentLeg_77.insert(LegCreditRating_77.getString());
        FIX::LegCurrency LegCurrency_77("USD");
        noLegs_1_2_2_0.set(LegCurrency_77);
        InstrumentLeg_77.insert(LegCurrency_77.getString());
        FIX::LegDatedDate LegDatedDate_77("LOCALMKTDATE_501245141");
        noLegs_1_2_2_0.set(LegDatedDate_77);
        InstrumentLeg_77.insert(LegDatedDate_77.getString());
        FIX::LegExerciseStyle LegExerciseStyle_77(22092411);
        noLegs_1_2_2_0.set(LegExerciseStyle_77);
        InstrumentLeg_77.insert(LegExerciseStyle_77.getString());
        FIX::LegFactor LegFactor_77;
        LegFactor_77.setString("20359771");
        noLegs_1_2_2_0.set(LegFactor_77);
        InstrumentLeg_77.insert(LegFactor_77.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_77(1541712975);
        noLegs_1_2_2_0.set(LegFlowScheduleType_77);
        InstrumentLeg_77.insert(LegFlowScheduleType_77.getString());
        FIX::LegInstrRegistry LegInstrRegistry_77("STRING_1839061631");
        noLegs_1_2_2_0.set(LegInstrRegistry_77);
        InstrumentLeg_77.insert(LegInstrRegistry_77.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_77("LOCALMKTDATE_63942223");
        noLegs_1_2_2_0.set(LegInterestAccrualDate_77);
        InstrumentLeg_77.insert(LegInterestAccrualDate_77.getString());
        FIX::LegIssueDate LegIssueDate_77("LOCALMKTDATE_1457134127");
        noLegs_1_2_2_0.set(LegIssueDate_77);
        InstrumentLeg_77.insert(LegIssueDate_77.getString());
        FIX::LegIssuer LegIssuer_77("STRING_1272001317");
        noLegs_1_2_2_0.set(LegIssuer_77);
        InstrumentLeg_77.insert(LegIssuer_77.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_77("STRING_996977202");
        noLegs_1_2_2_0.set(LegLocaleOfIssue_77);
        InstrumentLeg_77.insert(LegLocaleOfIssue_77.getString());
        FIX::LegMaturityDate LegMaturityDate_77("LOCALMKTDATE_1578726727");
        noLegs_1_2_2_0.set(LegMaturityDate_77);
        InstrumentLeg_77.insert(LegMaturityDate_77.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_77("MONTHYEAR_1941909979");
        noLegs_1_2_2_0.set(LegMaturityMonthYear_77);
        InstrumentLeg_77.insert(LegMaturityMonthYear_77.getString());
        FIX::LegMaturityTime LegMaturityTime_77("TZTIMEONLY_1098208235");
        noLegs_1_2_2_0.set(LegMaturityTime_77);
        InstrumentLeg_77.insert(LegMaturityTime_77.getString());
        FIX::LegOptAttribute LegOptAttribute_77('8');
        noLegs_1_2_2_0.set(LegOptAttribute_77);
        InstrumentLeg_77.insert(LegOptAttribute_77.getString());
        FIX::LegOptionRatio LegOptionRatio_77;
        LegOptionRatio_77.setString("20703154");
        noLegs_1_2_2_0.set(LegOptionRatio_77);
        InstrumentLeg_77.insert(LegOptionRatio_77.getString());
        FIX::LegPool LegPool_77("STRING_466275382");
        noLegs_1_2_2_0.set(LegPool_77);
        InstrumentLeg_77.insert(LegPool_77.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_77("STRING_1487761716");
        noLegs_1_2_2_0.set(LegPriceUnitOfMeasure_77);
        InstrumentLeg_77.insert(LegPriceUnitOfMeasure_77.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_77;
        LegPriceUnitOfMeasureQty_77.setString("841824");
        noLegs_1_2_2_0.set(LegPriceUnitOfMeasureQty_77);
        InstrumentLeg_77.insert(LegPriceUnitOfMeasureQty_77.getString());
        FIX::LegProduct LegProduct_77(359307366);
        noLegs_1_2_2_0.set(LegProduct_77);
        InstrumentLeg_77.insert(LegProduct_77.getString());
        FIX::LegPutOrCall LegPutOrCall_77(1407167427);
        noLegs_1_2_2_0.set(LegPutOrCall_77);
        InstrumentLeg_77.insert(LegPutOrCall_77.getString());
        FIX::LegRatioQty LegRatioQty_77;
        LegRatioQty_77.setString("68766");
        noLegs_1_2_2_0.set(LegRatioQty_77);
        InstrumentLeg_77.insert(LegRatioQty_77.getString());
        FIX::LegRedemptionDate LegRedemptionDate_77("LOCALMKTDATE_1820211041");
        noLegs_1_2_2_0.set(LegRedemptionDate_77);
        InstrumentLeg_77.insert(LegRedemptionDate_77.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_77("STRING_1160680146");
        noLegs_1_2_2_0.set(LegRepoCollateralSecurityType_77);
        InstrumentLeg_77.insert(LegRepoCollateralSecurityType_77.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_77;
        LegRepurchaseRate_77.setString("61.900000");
        noLegs_1_2_2_0.set(LegRepurchaseRate_77);
        InstrumentLeg_77.insert(LegRepurchaseRate_77.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_77(99856124);
        noLegs_1_2_2_0.set(LegRepurchaseTerm_77);
        InstrumentLeg_77.insert(LegRepurchaseTerm_77.getString());
        FIX::LegSecurityDesc LegSecurityDesc_77("STRING_632516527");
        noLegs_1_2_2_0.set(LegSecurityDesc_77);
        InstrumentLeg_77.insert(LegSecurityDesc_77.getString());
        FIX::LegSecurityExchange LegSecurityExchange_77("EXCHANGE_1441197627");
        noLegs_1_2_2_0.set(LegSecurityExchange_77);
        InstrumentLeg_77.insert(LegSecurityExchange_77.getString());
        FIX::LegSecurityID LegSecurityID_77("STRING_374199833");
        noLegs_1_2_2_0.set(LegSecurityID_77);
        InstrumentLeg_77.insert(LegSecurityID_77.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_77("STRING_596592020");
        noLegs_1_2_2_0.set(LegSecurityIDSource_77);
        InstrumentLeg_77.insert(LegSecurityIDSource_77.getString());
        FIX::LegSecuritySubType LegSecuritySubType_77("STRING_666525783");
        noLegs_1_2_2_0.set(LegSecuritySubType_77);
        InstrumentLeg_77.insert(LegSecuritySubType_77.getString());
        FIX::LegSecurityType LegSecurityType_77("STRING_1943079795");
        noLegs_1_2_2_0.set(LegSecurityType_77);
        InstrumentLeg_77.insert(LegSecurityType_77.getString());
        FIX::LegSide LegSide_77('1');
        noLegs_1_2_2_0.set(LegSide_77);
        InstrumentLeg_77.insert(LegSide_77.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_77("STRING_1167770924");
        noLegs_1_2_2_0.set(LegStateOrProvinceOfIssue_77);
        InstrumentLeg_77.insert(LegStateOrProvinceOfIssue_77.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_77("EUR");
        noLegs_1_2_2_0.set(LegStrikeCurrency_77);
        InstrumentLeg_77.insert(LegStrikeCurrency_77.getString());
        FIX::LegStrikePrice LegStrikePrice_77;
        LegStrikePrice_77.setString("5620002");
        noLegs_1_2_2_0.set(LegStrikePrice_77);
        InstrumentLeg_77.insert(LegStrikePrice_77.getString());
        FIX::LegSymbol LegSymbol_77("STRING_1656750189");
        noLegs_1_2_2_0.set(LegSymbol_77);
        InstrumentLeg_77.insert(LegSymbol_77.getString());
        FIX::LegSymbolSfx LegSymbolSfx_77("STRING_1889652572");
        noLegs_1_2_2_0.set(LegSymbolSfx_77);
        InstrumentLeg_77.insert(LegSymbolSfx_77.getString());
        FIX::LegTimeUnit LegTimeUnit_77("STRING_2019134378");
        noLegs_1_2_2_0.set(LegTimeUnit_77);
        InstrumentLeg_77.insert(LegTimeUnit_77.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_77("STRING_781267858");
        noLegs_1_2_2_0.set(LegUnitOfMeasure_77);
        InstrumentLeg_77.insert(LegUnitOfMeasure_77.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_77;
        LegUnitOfMeasureQty_77.setString("7391461");
        noLegs_1_2_2_0.set(LegUnitOfMeasureQty_77);
        InstrumentLeg_77.insert(LegUnitOfMeasureQty_77.getString());
        all_values.push_back(InstrumentLeg_77);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_152;
          FIX::LegSecurityAltID LegSecurityAltID_152("STRING_575694189");
          noLegSecurityAltID_1_2_0_3_0.set(LegSecurityAltID_152);
          LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltID_152.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_152("STRING_1837354362");
          noLegSecurityAltID_1_2_0_3_0.set(LegSecurityAltIDSource_152);
          LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltIDSource_152.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_152);

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_153;
          FIX::LegSecurityAltID LegSecurityAltID_153("STRING_139987356");
          noLegSecurityAltID_1_2_0_3_1.set(LegSecurityAltID_153);
          LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltID_153.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_153("STRING_498526041");
          noLegSecurityAltID_1_2_0_3_1.set(LegSecurityAltIDSource_153);
          LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltIDSource_153.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_153);

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_78;
        FIX::EncodedLegIssuer EncodedLegIssuer_78("DATA_156146096");
        noLegs_1_2_2_1.set(EncodedLegIssuer_78);
        InstrumentLeg_78.insert(EncodedLegIssuer_78.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_78(1627749073);
        noLegs_1_2_2_1.set(EncodedLegIssuerLen_78);
        InstrumentLeg_78.insert(EncodedLegIssuerLen_78.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_78("DATA_582708503");
        noLegs_1_2_2_1.set(EncodedLegSecurityDesc_78);
        InstrumentLeg_78.insert(EncodedLegSecurityDesc_78.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_78(515453462);
        noLegs_1_2_2_1.set(EncodedLegSecurityDescLen_78);
        InstrumentLeg_78.insert(EncodedLegSecurityDescLen_78.getString());
        FIX::LegCFICode LegCFICode_78("STRING_887432852");
        noLegs_1_2_2_1.set(LegCFICode_78);
        InstrumentLeg_78.insert(LegCFICode_78.getString());
        FIX::LegContractMultiplier LegContractMultiplier_78;
        LegContractMultiplier_78.setString("5895851");
        noLegs_1_2_2_1.set(LegContractMultiplier_78);
        InstrumentLeg_78.insert(LegContractMultiplier_78.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_78(188180856);
        noLegs_1_2_2_1.set(LegContractMultiplierUnit_78);
        InstrumentLeg_78.insert(LegContractMultiplierUnit_78.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_78("MONTHYEAR_2048112998");
        noLegs_1_2_2_1.set(LegContractSettlMonth_78);
        InstrumentLeg_78.insert(LegContractSettlMonth_78.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_78("COUNTRY_343917691");
        noLegs_1_2_2_1.set(LegCountryOfIssue_78);
        InstrumentLeg_78.insert(LegCountryOfIssue_78.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_78("LOCALMKTDATE_288036980");
        noLegs_1_2_2_1.set(LegCouponPaymentDate_78);
        InstrumentLeg_78.insert(LegCouponPaymentDate_78.getString());
        FIX::LegCouponRate LegCouponRate_78;
        LegCouponRate_78.setString("58.770000");
        noLegs_1_2_2_1.set(LegCouponRate_78);
        InstrumentLeg_78.insert(LegCouponRate_78.getString());
        FIX::LegCreditRating LegCreditRating_78("STRING_1785115318");
        noLegs_1_2_2_1.set(LegCreditRating_78);
        InstrumentLeg_78.insert(LegCreditRating_78.getString());
        FIX::LegCurrency LegCurrency_78("CHF");
        noLegs_1_2_2_1.set(LegCurrency_78);
        InstrumentLeg_78.insert(LegCurrency_78.getString());
        FIX::LegDatedDate LegDatedDate_78("LOCALMKTDATE_304157453");
        noLegs_1_2_2_1.set(LegDatedDate_78);
        InstrumentLeg_78.insert(LegDatedDate_78.getString());
        FIX::LegExerciseStyle LegExerciseStyle_78(457832960);
        noLegs_1_2_2_1.set(LegExerciseStyle_78);
        InstrumentLeg_78.insert(LegExerciseStyle_78.getString());
        FIX::LegFactor LegFactor_78;
        LegFactor_78.setString("9194711");
        noLegs_1_2_2_1.set(LegFactor_78);
        InstrumentLeg_78.insert(LegFactor_78.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_78(1471928377);
        noLegs_1_2_2_1.set(LegFlowScheduleType_78);
        InstrumentLeg_78.insert(LegFlowScheduleType_78.getString());
        FIX::LegInstrRegistry LegInstrRegistry_78("STRING_275521518");
        noLegs_1_2_2_1.set(LegInstrRegistry_78);
        InstrumentLeg_78.insert(LegInstrRegistry_78.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_78("LOCALMKTDATE_597697827");
        noLegs_1_2_2_1.set(LegInterestAccrualDate_78);
        InstrumentLeg_78.insert(LegInterestAccrualDate_78.getString());
        FIX::LegIssueDate LegIssueDate_78("LOCALMKTDATE_2033928629");
        noLegs_1_2_2_1.set(LegIssueDate_78);
        InstrumentLeg_78.insert(LegIssueDate_78.getString());
        FIX::LegIssuer LegIssuer_78("STRING_1932271707");
        noLegs_1_2_2_1.set(LegIssuer_78);
        InstrumentLeg_78.insert(LegIssuer_78.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_78("STRING_339866752");
        noLegs_1_2_2_1.set(LegLocaleOfIssue_78);
        InstrumentLeg_78.insert(LegLocaleOfIssue_78.getString());
        FIX::LegMaturityDate LegMaturityDate_78("LOCALMKTDATE_1905579359");
        noLegs_1_2_2_1.set(LegMaturityDate_78);
        InstrumentLeg_78.insert(LegMaturityDate_78.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_78("MONTHYEAR_566055917");
        noLegs_1_2_2_1.set(LegMaturityMonthYear_78);
        InstrumentLeg_78.insert(LegMaturityMonthYear_78.getString());
        FIX::LegMaturityTime LegMaturityTime_78("TZTIMEONLY_1079012879");
        noLegs_1_2_2_1.set(LegMaturityTime_78);
        InstrumentLeg_78.insert(LegMaturityTime_78.getString());
        FIX::LegOptAttribute LegOptAttribute_78('1');
        noLegs_1_2_2_1.set(LegOptAttribute_78);
        InstrumentLeg_78.insert(LegOptAttribute_78.getString());
        FIX::LegOptionRatio LegOptionRatio_78;
        LegOptionRatio_78.setString("11417501");
        noLegs_1_2_2_1.set(LegOptionRatio_78);
        InstrumentLeg_78.insert(LegOptionRatio_78.getString());
        FIX::LegPool LegPool_78("STRING_768883593");
        noLegs_1_2_2_1.set(LegPool_78);
        InstrumentLeg_78.insert(LegPool_78.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_78("STRING_1348460525");
        noLegs_1_2_2_1.set(LegPriceUnitOfMeasure_78);
        InstrumentLeg_78.insert(LegPriceUnitOfMeasure_78.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_78;
        LegPriceUnitOfMeasureQty_78.setString("16402761");
        noLegs_1_2_2_1.set(LegPriceUnitOfMeasureQty_78);
        InstrumentLeg_78.insert(LegPriceUnitOfMeasureQty_78.getString());
        FIX::LegProduct LegProduct_78(925029690);
        noLegs_1_2_2_1.set(LegProduct_78);
        InstrumentLeg_78.insert(LegProduct_78.getString());
        FIX::LegPutOrCall LegPutOrCall_78(828725950);
        noLegs_1_2_2_1.set(LegPutOrCall_78);
        InstrumentLeg_78.insert(LegPutOrCall_78.getString());
        FIX::LegRatioQty LegRatioQty_78;
        LegRatioQty_78.setString("755010");
        noLegs_1_2_2_1.set(LegRatioQty_78);
        InstrumentLeg_78.insert(LegRatioQty_78.getString());
        FIX::LegRedemptionDate LegRedemptionDate_78("LOCALMKTDATE_1440483152");
        noLegs_1_2_2_1.set(LegRedemptionDate_78);
        InstrumentLeg_78.insert(LegRedemptionDate_78.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_78("STRING_1716158802");
        noLegs_1_2_2_1.set(LegRepoCollateralSecurityType_78);
        InstrumentLeg_78.insert(LegRepoCollateralSecurityType_78.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_78;
        LegRepurchaseRate_78.setString("61.510000");
        noLegs_1_2_2_1.set(LegRepurchaseRate_78);
        InstrumentLeg_78.insert(LegRepurchaseRate_78.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_78(1628664008);
        noLegs_1_2_2_1.set(LegRepurchaseTerm_78);
        InstrumentLeg_78.insert(LegRepurchaseTerm_78.getString());
        FIX::LegSecurityDesc LegSecurityDesc_78("STRING_1616788153");
        noLegs_1_2_2_1.set(LegSecurityDesc_78);
        InstrumentLeg_78.insert(LegSecurityDesc_78.getString());
        FIX::LegSecurityExchange LegSecurityExchange_78("EXCHANGE_1009003842");
        noLegs_1_2_2_1.set(LegSecurityExchange_78);
        InstrumentLeg_78.insert(LegSecurityExchange_78.getString());
        FIX::LegSecurityID LegSecurityID_78("STRING_1916700988");
        noLegs_1_2_2_1.set(LegSecurityID_78);
        InstrumentLeg_78.insert(LegSecurityID_78.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_78("STRING_2450382");
        noLegs_1_2_2_1.set(LegSecurityIDSource_78);
        InstrumentLeg_78.insert(LegSecurityIDSource_78.getString());
        FIX::LegSecuritySubType LegSecuritySubType_78("STRING_646635512");
        noLegs_1_2_2_1.set(LegSecuritySubType_78);
        InstrumentLeg_78.insert(LegSecuritySubType_78.getString());
        FIX::LegSecurityType LegSecurityType_78("STRING_431454153");
        noLegs_1_2_2_1.set(LegSecurityType_78);
        InstrumentLeg_78.insert(LegSecurityType_78.getString());
        FIX::LegSide LegSide_78('1');
        noLegs_1_2_2_1.set(LegSide_78);
        InstrumentLeg_78.insert(LegSide_78.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_78("STRING_950792965");
        noLegs_1_2_2_1.set(LegStateOrProvinceOfIssue_78);
        InstrumentLeg_78.insert(LegStateOrProvinceOfIssue_78.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_78("GBP");
        noLegs_1_2_2_1.set(LegStrikeCurrency_78);
        InstrumentLeg_78.insert(LegStrikeCurrency_78.getString());
        FIX::LegStrikePrice LegStrikePrice_78;
        LegStrikePrice_78.setString("2752376");
        noLegs_1_2_2_1.set(LegStrikePrice_78);
        InstrumentLeg_78.insert(LegStrikePrice_78.getString());
        FIX::LegSymbol LegSymbol_78("STRING_1164808631");
        noLegs_1_2_2_1.set(LegSymbol_78);
        InstrumentLeg_78.insert(LegSymbol_78.getString());
        FIX::LegSymbolSfx LegSymbolSfx_78("STRING_501873585");
        noLegs_1_2_2_1.set(LegSymbolSfx_78);
        InstrumentLeg_78.insert(LegSymbolSfx_78.getString());
        FIX::LegTimeUnit LegTimeUnit_78("STRING_161682676");
        noLegs_1_2_2_1.set(LegTimeUnit_78);
        InstrumentLeg_78.insert(LegTimeUnit_78.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_78("STRING_949596690");
        noLegs_1_2_2_1.set(LegUnitOfMeasure_78);
        InstrumentLeg_78.insert(LegUnitOfMeasure_78.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_78;
        LegUnitOfMeasureQty_78.setString("8417403");
        noLegs_1_2_2_1.set(LegUnitOfMeasureQty_78);
        InstrumentLeg_78.insert(LegUnitOfMeasureQty_78.getString());
        all_values.push_back(InstrumentLeg_78);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_154;
          FIX::LegSecurityAltID LegSecurityAltID_154("STRING_1515652608");
          noLegSecurityAltID_1_2_1_3_0.set(LegSecurityAltID_154);
          LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltID_154.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_154("STRING_1920753216");
          noLegSecurityAltID_1_2_1_3_0.set(LegSecurityAltIDSource_154);
          LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltIDSource_154.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_154);

          noLegs_1_2_2_1.addGroup(noLegSecurityAltID_1_2_1_3_0);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_79;
        FIX::EncodedLegIssuer EncodedLegIssuer_79("DATA_1128251556");
        noLegs_1_2_2_2.set(EncodedLegIssuer_79);
        InstrumentLeg_79.insert(EncodedLegIssuer_79.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_79(509919067);
        noLegs_1_2_2_2.set(EncodedLegIssuerLen_79);
        InstrumentLeg_79.insert(EncodedLegIssuerLen_79.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_79("DATA_542153162");
        noLegs_1_2_2_2.set(EncodedLegSecurityDesc_79);
        InstrumentLeg_79.insert(EncodedLegSecurityDesc_79.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_79(329228434);
        noLegs_1_2_2_2.set(EncodedLegSecurityDescLen_79);
        InstrumentLeg_79.insert(EncodedLegSecurityDescLen_79.getString());
        FIX::LegCFICode LegCFICode_79("STRING_2711567");
        noLegs_1_2_2_2.set(LegCFICode_79);
        InstrumentLeg_79.insert(LegCFICode_79.getString());
        FIX::LegContractMultiplier LegContractMultiplier_79;
        LegContractMultiplier_79.setString("14671828");
        noLegs_1_2_2_2.set(LegContractMultiplier_79);
        InstrumentLeg_79.insert(LegContractMultiplier_79.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_79(1157954384);
        noLegs_1_2_2_2.set(LegContractMultiplierUnit_79);
        InstrumentLeg_79.insert(LegContractMultiplierUnit_79.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_79("MONTHYEAR_78212570");
        noLegs_1_2_2_2.set(LegContractSettlMonth_79);
        InstrumentLeg_79.insert(LegContractSettlMonth_79.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_79("COUNTRY_760182356");
        noLegs_1_2_2_2.set(LegCountryOfIssue_79);
        InstrumentLeg_79.insert(LegCountryOfIssue_79.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_79("LOCALMKTDATE_726629539");
        noLegs_1_2_2_2.set(LegCouponPaymentDate_79);
        InstrumentLeg_79.insert(LegCouponPaymentDate_79.getString());
        FIX::LegCouponRate LegCouponRate_79;
        LegCouponRate_79.setString("87.210000");
        noLegs_1_2_2_2.set(LegCouponRate_79);
        InstrumentLeg_79.insert(LegCouponRate_79.getString());
        FIX::LegCreditRating LegCreditRating_79("STRING_241362717");
        noLegs_1_2_2_2.set(LegCreditRating_79);
        InstrumentLeg_79.insert(LegCreditRating_79.getString());
        FIX::LegCurrency LegCurrency_79("GBP");
        noLegs_1_2_2_2.set(LegCurrency_79);
        InstrumentLeg_79.insert(LegCurrency_79.getString());
        FIX::LegDatedDate LegDatedDate_79("LOCALMKTDATE_10580057");
        noLegs_1_2_2_2.set(LegDatedDate_79);
        InstrumentLeg_79.insert(LegDatedDate_79.getString());
        FIX::LegExerciseStyle LegExerciseStyle_79(198384426);
        noLegs_1_2_2_2.set(LegExerciseStyle_79);
        InstrumentLeg_79.insert(LegExerciseStyle_79.getString());
        FIX::LegFactor LegFactor_79;
        LegFactor_79.setString("2514544");
        noLegs_1_2_2_2.set(LegFactor_79);
        InstrumentLeg_79.insert(LegFactor_79.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_79(442034211);
        noLegs_1_2_2_2.set(LegFlowScheduleType_79);
        InstrumentLeg_79.insert(LegFlowScheduleType_79.getString());
        FIX::LegInstrRegistry LegInstrRegistry_79("STRING_1330572706");
        noLegs_1_2_2_2.set(LegInstrRegistry_79);
        InstrumentLeg_79.insert(LegInstrRegistry_79.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_79("LOCALMKTDATE_1202247394");
        noLegs_1_2_2_2.set(LegInterestAccrualDate_79);
        InstrumentLeg_79.insert(LegInterestAccrualDate_79.getString());
        FIX::LegIssueDate LegIssueDate_79("LOCALMKTDATE_1331321324");
        noLegs_1_2_2_2.set(LegIssueDate_79);
        InstrumentLeg_79.insert(LegIssueDate_79.getString());
        FIX::LegIssuer LegIssuer_79("STRING_1234748464");
        noLegs_1_2_2_2.set(LegIssuer_79);
        InstrumentLeg_79.insert(LegIssuer_79.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_79("STRING_1477485089");
        noLegs_1_2_2_2.set(LegLocaleOfIssue_79);
        InstrumentLeg_79.insert(LegLocaleOfIssue_79.getString());
        FIX::LegMaturityDate LegMaturityDate_79("LOCALMKTDATE_348646308");
        noLegs_1_2_2_2.set(LegMaturityDate_79);
        InstrumentLeg_79.insert(LegMaturityDate_79.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_79("MONTHYEAR_1736622050");
        noLegs_1_2_2_2.set(LegMaturityMonthYear_79);
        InstrumentLeg_79.insert(LegMaturityMonthYear_79.getString());
        FIX::LegMaturityTime LegMaturityTime_79("TZTIMEONLY_1639167765");
        noLegs_1_2_2_2.set(LegMaturityTime_79);
        InstrumentLeg_79.insert(LegMaturityTime_79.getString());
        FIX::LegOptAttribute LegOptAttribute_79('1');
        noLegs_1_2_2_2.set(LegOptAttribute_79);
        InstrumentLeg_79.insert(LegOptAttribute_79.getString());
        FIX::LegOptionRatio LegOptionRatio_79;
        LegOptionRatio_79.setString("4308787");
        noLegs_1_2_2_2.set(LegOptionRatio_79);
        InstrumentLeg_79.insert(LegOptionRatio_79.getString());
        FIX::LegPool LegPool_79("STRING_1558946152");
        noLegs_1_2_2_2.set(LegPool_79);
        InstrumentLeg_79.insert(LegPool_79.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_79("STRING_666411958");
        noLegs_1_2_2_2.set(LegPriceUnitOfMeasure_79);
        InstrumentLeg_79.insert(LegPriceUnitOfMeasure_79.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_79;
        LegPriceUnitOfMeasureQty_79.setString("2041483");
        noLegs_1_2_2_2.set(LegPriceUnitOfMeasureQty_79);
        InstrumentLeg_79.insert(LegPriceUnitOfMeasureQty_79.getString());
        FIX::LegProduct LegProduct_79(539714061);
        noLegs_1_2_2_2.set(LegProduct_79);
        InstrumentLeg_79.insert(LegProduct_79.getString());
        FIX::LegPutOrCall LegPutOrCall_79(1176331025);
        noLegs_1_2_2_2.set(LegPutOrCall_79);
        InstrumentLeg_79.insert(LegPutOrCall_79.getString());
        FIX::LegRatioQty LegRatioQty_79;
        LegRatioQty_79.setString("7463014");
        noLegs_1_2_2_2.set(LegRatioQty_79);
        InstrumentLeg_79.insert(LegRatioQty_79.getString());
        FIX::LegRedemptionDate LegRedemptionDate_79("LOCALMKTDATE_868942495");
        noLegs_1_2_2_2.set(LegRedemptionDate_79);
        InstrumentLeg_79.insert(LegRedemptionDate_79.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_79("STRING_1179042592");
        noLegs_1_2_2_2.set(LegRepoCollateralSecurityType_79);
        InstrumentLeg_79.insert(LegRepoCollateralSecurityType_79.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_79;
        LegRepurchaseRate_79.setString("6.740000");
        noLegs_1_2_2_2.set(LegRepurchaseRate_79);
        InstrumentLeg_79.insert(LegRepurchaseRate_79.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_79(2026896879);
        noLegs_1_2_2_2.set(LegRepurchaseTerm_79);
        InstrumentLeg_79.insert(LegRepurchaseTerm_79.getString());
        FIX::LegSecurityDesc LegSecurityDesc_79("STRING_1257255162");
        noLegs_1_2_2_2.set(LegSecurityDesc_79);
        InstrumentLeg_79.insert(LegSecurityDesc_79.getString());
        FIX::LegSecurityExchange LegSecurityExchange_79("EXCHANGE_826183030");
        noLegs_1_2_2_2.set(LegSecurityExchange_79);
        InstrumentLeg_79.insert(LegSecurityExchange_79.getString());
        FIX::LegSecurityID LegSecurityID_79("STRING_606042770");
        noLegs_1_2_2_2.set(LegSecurityID_79);
        InstrumentLeg_79.insert(LegSecurityID_79.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_79("STRING_2000553884");
        noLegs_1_2_2_2.set(LegSecurityIDSource_79);
        InstrumentLeg_79.insert(LegSecurityIDSource_79.getString());
        FIX::LegSecuritySubType LegSecuritySubType_79("STRING_1067545747");
        noLegs_1_2_2_2.set(LegSecuritySubType_79);
        InstrumentLeg_79.insert(LegSecuritySubType_79.getString());
        FIX::LegSecurityType LegSecurityType_79("STRING_801976814");
        noLegs_1_2_2_2.set(LegSecurityType_79);
        InstrumentLeg_79.insert(LegSecurityType_79.getString());
        FIX::LegSide LegSide_79('1');
        noLegs_1_2_2_2.set(LegSide_79);
        InstrumentLeg_79.insert(LegSide_79.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_79("STRING_1078125805");
        noLegs_1_2_2_2.set(LegStateOrProvinceOfIssue_79);
        InstrumentLeg_79.insert(LegStateOrProvinceOfIssue_79.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_79("JPY");
        noLegs_1_2_2_2.set(LegStrikeCurrency_79);
        InstrumentLeg_79.insert(LegStrikeCurrency_79.getString());
        FIX::LegStrikePrice LegStrikePrice_79;
        LegStrikePrice_79.setString("15201600");
        noLegs_1_2_2_2.set(LegStrikePrice_79);
        InstrumentLeg_79.insert(LegStrikePrice_79.getString());
        FIX::LegSymbol LegSymbol_79("STRING_183450299");
        noLegs_1_2_2_2.set(LegSymbol_79);
        InstrumentLeg_79.insert(LegSymbol_79.getString());
        FIX::LegSymbolSfx LegSymbolSfx_79("STRING_911590974");
        noLegs_1_2_2_2.set(LegSymbolSfx_79);
        InstrumentLeg_79.insert(LegSymbolSfx_79.getString());
        FIX::LegTimeUnit LegTimeUnit_79("STRING_703997692");
        noLegs_1_2_2_2.set(LegTimeUnit_79);
        InstrumentLeg_79.insert(LegTimeUnit_79.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_79("STRING_1418198764");
        noLegs_1_2_2_2.set(LegUnitOfMeasure_79);
        InstrumentLeg_79.insert(LegUnitOfMeasure_79.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_79;
        LegUnitOfMeasureQty_79.setString("2415924");
        noLegs_1_2_2_2.set(LegUnitOfMeasureQty_79);
        InstrumentLeg_79.insert(LegUnitOfMeasureQty_79.getString());
        all_values.push_back(InstrumentLeg_79);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_155;
          FIX::LegSecurityAltID LegSecurityAltID_155("STRING_1007337166");
          noLegSecurityAltID_1_2_2_3_0.set(LegSecurityAltID_155);
          LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltID_155.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_155("STRING_1880760180");
          noLegSecurityAltID_1_2_2_3_0.set(LegSecurityAltIDSource_155);
          LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltIDSource_155.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_155);

          noLegs_1_2_2_2.addGroup(noLegSecurityAltID_1_2_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_156;
          FIX::LegSecurityAltID LegSecurityAltID_156("STRING_203403351");
          noLegSecurityAltID_1_2_2_3_1.set(LegSecurityAltID_156);
          LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltID_156.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_156("STRING_1438215905");
          noLegSecurityAltID_1_2_2_3_1.set(LegSecurityAltIDSource_156);
          LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltIDSource_156.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_156);

          noLegs_1_2_2_2.addGroup(noLegSecurityAltID_1_2_2_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_2);
      }
      // Instrument
      multiset<string> Instrument_44;
      FIX::AttachmentPoint AttachmentPoint_44;
      AttachmentPoint_44.setString("26.850000");
      noQuoteEntries_1_1_2.set(AttachmentPoint_44);
      Instrument_44.insert(AttachmentPoint_44.getString());
      FIX::CFICode CFICode_44("STRING_869815309");
      noQuoteEntries_1_1_2.set(CFICode_44);
      Instrument_44.insert(CFICode_44.getString());
      FIX::CPProgram CPProgram_44(99);
      noQuoteEntries_1_1_2.set(CPProgram_44);
      Instrument_44.insert(CPProgram_44.getString());
      FIX::CPRegType CPRegType_44("STRING_1831936746");
      noQuoteEntries_1_1_2.set(CPRegType_44);
      Instrument_44.insert(CPRegType_44.getString());
      FIX::CapPrice CapPrice_44;
      CapPrice_44.setString("20461463");
      noQuoteEntries_1_1_2.set(CapPrice_44);
      Instrument_44.insert(CapPrice_44.getString());
      FIX::ContractMultiplier ContractMultiplier_44;
      ContractMultiplier_44.setString("2411820");
      noQuoteEntries_1_1_2.set(ContractMultiplier_44);
      Instrument_44.insert(ContractMultiplier_44.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_44(2);
      noQuoteEntries_1_1_2.set(ContractMultiplierUnit_44);
      Instrument_44.insert(ContractMultiplierUnit_44.getString());
      FIX::ContractSettlMonth ContractSettlMonth_44("MONTHYEAR_1077705279");
      noQuoteEntries_1_1_2.set(ContractSettlMonth_44);
      Instrument_44.insert(ContractSettlMonth_44.getString());
      FIX::CountryOfIssue CountryOfIssue_44("COUNTRY_307182709");
      noQuoteEntries_1_1_2.set(CountryOfIssue_44);
      Instrument_44.insert(CountryOfIssue_44.getString());
      FIX::CouponPaymentDate CouponPaymentDate_44("LOCALMKTDATE_432808824");
      noQuoteEntries_1_1_2.set(CouponPaymentDate_44);
      Instrument_44.insert(CouponPaymentDate_44.getString());
      FIX::CouponRate CouponRate_44;
      CouponRate_44.setString("67.940000");
      noQuoteEntries_1_1_2.set(CouponRate_44);
      Instrument_44.insert(CouponRate_44.getString());
      FIX::CreditRating CreditRating_44("STRING_1133365740");
      noQuoteEntries_1_1_2.set(CreditRating_44);
      Instrument_44.insert(CreditRating_44.getString());
      FIX::DatedDate DatedDate_44("LOCALMKTDATE_1038851595");
      noQuoteEntries_1_1_2.set(DatedDate_44);
      Instrument_44.insert(DatedDate_44.getString());
      FIX::DetachmentPoint DetachmentPoint_44;
      DetachmentPoint_44.setString("70.300000");
      noQuoteEntries_1_1_2.set(DetachmentPoint_44);
      Instrument_44.insert(DetachmentPoint_44.getString());
      FIX::EncodedIssuer EncodedIssuer_44("DATA_53427839");
      noQuoteEntries_1_1_2.set(EncodedIssuer_44);
      Instrument_44.insert(EncodedIssuer_44.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_44(1840828409);
      noQuoteEntries_1_1_2.set(EncodedIssuerLen_44);
      Instrument_44.insert(EncodedIssuerLen_44.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_44("DATA_1645919830");
      noQuoteEntries_1_1_2.set(EncodedSecurityDesc_44);
      Instrument_44.insert(EncodedSecurityDesc_44.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_44(1131553644);
      noQuoteEntries_1_1_2.set(EncodedSecurityDescLen_44);
      Instrument_44.insert(EncodedSecurityDescLen_44.getString());
      FIX::ExerciseStyle ExerciseStyle_44(0);
      noQuoteEntries_1_1_2.set(ExerciseStyle_44);
      Instrument_44.insert(ExerciseStyle_44.getString());
      FIX::Factor Factor_44;
      Factor_44.setString("13552634");
      noQuoteEntries_1_1_2.set(Factor_44);
      Instrument_44.insert(Factor_44.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_44(true);
      noQuoteEntries_1_1_2.set(FlexProductEligibilityIndicator_44);
      Instrument_44.insert(FlexProductEligibilityIndicator_44.getString());
      FIX::FlexibleIndicator FlexibleIndicator_44(true);
      noQuoteEntries_1_1_2.set(FlexibleIndicator_44);
      Instrument_44.insert(FlexibleIndicator_44.getString());
      FIX::FloorPrice FloorPrice_44;
      FloorPrice_44.setString("1193707");
      noQuoteEntries_1_1_2.set(FloorPrice_44);
      Instrument_44.insert(FloorPrice_44.getString());
      FIX::FlowScheduleType FlowScheduleType_44(0);
      noQuoteEntries_1_1_2.set(FlowScheduleType_44);
      Instrument_44.insert(FlowScheduleType_44.getString());
      FIX::InstrRegistry InstrRegistry_44("STRING_147871418");
      noQuoteEntries_1_1_2.set(InstrRegistry_44);
      Instrument_44.insert(InstrRegistry_44.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_44('3');
      noQuoteEntries_1_1_2.set(InstrmtAssignmentMethod_44);
      Instrument_44.insert(InstrmtAssignmentMethod_44.getString());
      FIX::InterestAccrualDate InterestAccrualDate_44("LOCALMKTDATE_113388057");
      noQuoteEntries_1_1_2.set(InterestAccrualDate_44);
      Instrument_44.insert(InterestAccrualDate_44.getString());
      FIX::IssueDate IssueDate_44("LOCALMKTDATE_1155208584");
      noQuoteEntries_1_1_2.set(IssueDate_44);
      Instrument_44.insert(IssueDate_44.getString());
      FIX::Issuer Issuer_44("STRING_94239685");
      noQuoteEntries_1_1_2.set(Issuer_44);
      Instrument_44.insert(Issuer_44.getString());
      FIX::ListMethod ListMethod_44(0);
      noQuoteEntries_1_1_2.set(ListMethod_44);
      Instrument_44.insert(ListMethod_44.getString());
      FIX::LocaleOfIssue LocaleOfIssue_44("STRING_445940841");
      noQuoteEntries_1_1_2.set(LocaleOfIssue_44);
      Instrument_44.insert(LocaleOfIssue_44.getString());
      FIX::MaturityDate MaturityDate_44("LOCALMKTDATE_1386462370");
      noQuoteEntries_1_1_2.set(MaturityDate_44);
      Instrument_44.insert(MaturityDate_44.getString());
      FIX::MaturityMonthYear MaturityMonthYear_44("MONTHYEAR_1186606718");
      noQuoteEntries_1_1_2.set(MaturityMonthYear_44);
      Instrument_44.insert(MaturityMonthYear_44.getString());
      FIX::MaturityTime MaturityTime_44("TZTIMEONLY_2088305055");
      noQuoteEntries_1_1_2.set(MaturityTime_44);
      Instrument_44.insert(MaturityTime_44.getString());
      FIX::MinPriceIncrement MinPriceIncrement_44;
      MinPriceIncrement_44.setString("10709154");
      noQuoteEntries_1_1_2.set(MinPriceIncrement_44);
      Instrument_44.insert(MinPriceIncrement_44.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_44;
      MinPriceIncrementAmount_44.setString("10852694");
      noQuoteEntries_1_1_2.set(MinPriceIncrementAmount_44);
      Instrument_44.insert(MinPriceIncrementAmount_44.getString());
      FIX::NTPositionLimit NTPositionLimit_44(182003442);
      noQuoteEntries_1_1_2.set(NTPositionLimit_44);
      Instrument_44.insert(NTPositionLimit_44.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_44;
      NotionalPercentageOutstanding_44.setString("10.610000");
      noQuoteEntries_1_1_2.set(NotionalPercentageOutstanding_44);
      Instrument_44.insert(NotionalPercentageOutstanding_44.getString());
      FIX::OptAttribute OptAttribute_44('1');
      noQuoteEntries_1_1_2.set(OptAttribute_44);
      Instrument_44.insert(OptAttribute_44.getString());
      FIX::OptPayoutAmount OptPayoutAmount_44;
      OptPayoutAmount_44.setString("4891861");
      noQuoteEntries_1_1_2.set(OptPayoutAmount_44);
      Instrument_44.insert(OptPayoutAmount_44.getString());
      FIX::OptPayoutType OptPayoutType_44(2);
      noQuoteEntries_1_1_2.set(OptPayoutType_44);
      Instrument_44.insert(OptPayoutType_44.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_44;
      OriginalNotionalPercentageOutstanding_44.setString("78.300000");
      noQuoteEntries_1_1_2.set(OriginalNotionalPercentageOutstanding_44);
      Instrument_44.insert(OriginalNotionalPercentageOutstanding_44.getString());
      FIX::Pool Pool_44("STRING_1622551892");
      noQuoteEntries_1_1_2.set(Pool_44);
      Instrument_44.insert(Pool_44.getString());
      FIX::PositionLimit PositionLimit_44(948487832);
      noQuoteEntries_1_1_2.set(PositionLimit_44);
      Instrument_44.insert(PositionLimit_44.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_44("STRING_STD");
      noQuoteEntries_1_1_2.set(PriceQuoteMethod_44);
      Instrument_44.insert(PriceQuoteMethod_44.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_44("STRING_1675979731");
      noQuoteEntries_1_1_2.set(PriceUnitOfMeasure_44);
      Instrument_44.insert(PriceUnitOfMeasure_44.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_44;
      PriceUnitOfMeasureQty_44.setString("6418325");
      noQuoteEntries_1_1_2.set(PriceUnitOfMeasureQty_44);
      Instrument_44.insert(PriceUnitOfMeasureQty_44.getString());
      FIX::Product Product_46(1);
      noQuoteEntries_1_1_2.set(Product_46);
      Instrument_44.insert(Product_46.getString());
      FIX::ProductComplex ProductComplex_44("STRING_660049728");
      noQuoteEntries_1_1_2.set(ProductComplex_44);
      Instrument_44.insert(ProductComplex_44.getString());
      FIX::PutOrCall PutOrCall_44(0);
      noQuoteEntries_1_1_2.set(PutOrCall_44);
      Instrument_44.insert(PutOrCall_44.getString());
      FIX::RedemptionDate RedemptionDate_44("LOCALMKTDATE_1097214453");
      noQuoteEntries_1_1_2.set(RedemptionDate_44);
      Instrument_44.insert(RedemptionDate_44.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_44("STRING_1164279740");
      noQuoteEntries_1_1_2.set(RepoCollateralSecurityType_44);
      Instrument_44.insert(RepoCollateralSecurityType_44.getString());
      FIX::RepurchaseRate RepurchaseRate_44;
      RepurchaseRate_44.setString("12.500000");
      noQuoteEntries_1_1_2.set(RepurchaseRate_44);
      Instrument_44.insert(RepurchaseRate_44.getString());
      FIX::RepurchaseTerm RepurchaseTerm_44(1216585190);
      noQuoteEntries_1_1_2.set(RepurchaseTerm_44);
      Instrument_44.insert(RepurchaseTerm_44.getString());
      FIX::RestructuringType RestructuringType_44("STRING_MR");
      noQuoteEntries_1_1_2.set(RestructuringType_44);
      Instrument_44.insert(RestructuringType_44.getString());
      FIX::SecurityDesc SecurityDesc_44("STRING_213082668");
      noQuoteEntries_1_1_2.set(SecurityDesc_44);
      Instrument_44.insert(SecurityDesc_44.getString());
      FIX::SecurityExchange SecurityExchange_44("EXCHANGE_1577548342");
      noQuoteEntries_1_1_2.set(SecurityExchange_44);
      Instrument_44.insert(SecurityExchange_44.getString());
      FIX::SecurityGroup SecurityGroup_44("STRING_338411855");
      noQuoteEntries_1_1_2.set(SecurityGroup_44);
      Instrument_44.insert(SecurityGroup_44.getString());
      FIX::SecurityID SecurityID_44("STRING_1368291252");
      noQuoteEntries_1_1_2.set(SecurityID_44);
      Instrument_44.insert(SecurityID_44.getString());
      FIX::SecurityIDSource SecurityIDSource_44("STRING_K");
      noQuoteEntries_1_1_2.set(SecurityIDSource_44);
      Instrument_44.insert(SecurityIDSource_44.getString());
      FIX::SecurityStatus SecurityStatus_44("STRING_2");
      noQuoteEntries_1_1_2.set(SecurityStatus_44);
      Instrument_44.insert(SecurityStatus_44.getString());
      FIX::SecuritySubType SecuritySubType_45("STRING_1814232094");
      noQuoteEntries_1_1_2.set(SecuritySubType_45);
      Instrument_44.insert(SecuritySubType_45.getString());
      FIX::SecurityType SecurityType_46("STRING_CAN");
      noQuoteEntries_1_1_2.set(SecurityType_46);
      Instrument_44.insert(SecurityType_46.getString());
      FIX::Seniority Seniority_44("STRING_SR");
      noQuoteEntries_1_1_2.set(Seniority_44);
      Instrument_44.insert(Seniority_44.getString());
      FIX::SettlMethod SettlMethod_44('P');
      noQuoteEntries_1_1_2.set(SettlMethod_44);
      Instrument_44.insert(SettlMethod_44.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_44("STRING_1981682217");
      noQuoteEntries_1_1_2.set(SettleOnOpenFlag_44);
      Instrument_44.insert(SettleOnOpenFlag_44.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_44("STRING_779595738");
      noQuoteEntries_1_1_2.set(StateOrProvinceOfIssue_44);
      Instrument_44.insert(StateOrProvinceOfIssue_44.getString());
      FIX::StrikeCurrency StrikeCurrency_44("GBP");
      noQuoteEntries_1_1_2.set(StrikeCurrency_44);
      Instrument_44.insert(StrikeCurrency_44.getString());
      FIX::StrikeMultiplier StrikeMultiplier_44;
      StrikeMultiplier_44.setString("7950867");
      noQuoteEntries_1_1_2.set(StrikeMultiplier_44);
      Instrument_44.insert(StrikeMultiplier_44.getString());
      FIX::StrikePrice StrikePrice_44;
      StrikePrice_44.setString("2787594");
      noQuoteEntries_1_1_2.set(StrikePrice_44);
      Instrument_44.insert(StrikePrice_44.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_44(4);
      noQuoteEntries_1_1_2.set(StrikePriceBoundaryMethod_44);
      Instrument_44.insert(StrikePriceBoundaryMethod_44.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_44;
      StrikePriceBoundaryPrecision_44.setString("46.050000");
      noQuoteEntries_1_1_2.set(StrikePriceBoundaryPrecision_44);
      Instrument_44.insert(StrikePriceBoundaryPrecision_44.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_44(4);
      noQuoteEntries_1_1_2.set(StrikePriceDeterminationMethod_44);
      Instrument_44.insert(StrikePriceDeterminationMethod_44.getString());
      FIX::StrikeValue StrikeValue_44;
      StrikeValue_44.setString("1691500");
      noQuoteEntries_1_1_2.set(StrikeValue_44);
      Instrument_44.insert(StrikeValue_44.getString());
      FIX::Symbol Symbol_44("STRING_1241569466");
      noQuoteEntries_1_1_2.set(Symbol_44);
      Instrument_44.insert(Symbol_44.getString());
      FIX::SymbolSfx SymbolSfx_44("STRING_WI");
      noQuoteEntries_1_1_2.set(SymbolSfx_44);
      Instrument_44.insert(SymbolSfx_44.getString());
      FIX::TimeUnit TimeUnit_44("STRING_Mo");
      noQuoteEntries_1_1_2.set(TimeUnit_44);
      Instrument_44.insert(TimeUnit_44.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_44(1);
      noQuoteEntries_1_1_2.set(UnderlyingPriceDeterminationMethod_44);
      Instrument_44.insert(UnderlyingPriceDeterminationMethod_44.getString());
      FIX::UnitOfMeasure UnitOfMeasure_44("STRING_Bu");
      noQuoteEntries_1_1_2.set(UnitOfMeasure_44);
      Instrument_44.insert(UnitOfMeasure_44.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_44;
      UnitOfMeasureQty_44.setString("21465212");
      noQuoteEntries_1_1_2.set(UnitOfMeasureQty_44);
      Instrument_44.insert(UnitOfMeasureQty_44.getString());
      FIX::ValuationMethod ValuationMethod_44("STRING_FUT");
      noQuoteEntries_1_1_2.set(ValuationMethod_44);
      Instrument_44.insert(ValuationMethod_44.getString());
      all_values.push_back(Instrument_44);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_85;
        FIX::ComplexEventCondition ComplexEventCondition_85(2);
        noComplexEvents_1_2_2_0.set(ComplexEventCondition_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventCondition_85.getString());
        FIX::ComplexEventPrice ComplexEventPrice_85;
        ComplexEventPrice_85.setString("11498365");
        noComplexEvents_1_2_2_0.set(ComplexEventPrice_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPrice_85.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_85(2);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryMethod_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryMethod_85.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_85;
        ComplexEventPriceBoundaryPrecision_85.setString("15.140000");
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryPrecision_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceBoundaryPrecision_85.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_85(2);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceTimeType_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventPriceTimeType_85.getString());
        FIX::ComplexEventType ComplexEventType_85(9);
        noComplexEvents_1_2_2_0.set(ComplexEventType_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexEventType_85.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_85;
        ComplexOptPayoutAmount_85.setString("16456227");
        noComplexEvents_1_2_2_0.set(ComplexOptPayoutAmount_85);
        ComplexEvents_NoComplexEvents_85.insert(ComplexOptPayoutAmount_85.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_85);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_171;
          FIX::ComplexEventEndDate ComplexEventEndDate_171(FIX::UTCTIMESTAMP(20, 27, 13, 1, 5, 2011));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventEndDate_171);
          ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventEndDate_171.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_171(FIX::UTCTIMESTAMP(23, 38, 8, 15, 9, 2002));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventStartDate_171);
          ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventStartDate_171.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_171);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_346;
            FIX::ComplexEventEndTime ComplexEventEndTime_346(FIX::UTCTIMEONLY(19, 58, 42));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventEndTime_346);
            ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventEndTime_346.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_346(FIX::UTCTIMEONLY(17, 36, 1));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventStartTime_346);
            ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventStartTime_346.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_346);

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_0);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_172;
          FIX::ComplexEventEndDate ComplexEventEndDate_172(FIX::UTCTIMESTAMP(19, 14, 52, 17, 11, 2009));
          noComplexEventDates_1_2_0_3_1.set(ComplexEventEndDate_172);
          ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventEndDate_172.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_172(FIX::UTCTIMESTAMP(22, 23, 14, 7, 10, 2006));
          noComplexEventDates_1_2_0_3_1.set(ComplexEventStartDate_172);
          ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventStartDate_172.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_172);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_347;
            FIX::ComplexEventEndTime ComplexEventEndTime_347(FIX::UTCTIMEONLY(17, 21, 50));
            noComplexEventTimes_1_2_0_1_4_0.set(ComplexEventEndTime_347);
            ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventEndTime_347.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_347(FIX::UTCTIMEONLY(21, 2, 0));
            noComplexEventTimes_1_2_0_1_4_0.set(ComplexEventStartTime_347);
            ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventStartTime_347.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_347);

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_0);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_86;
        FIX::ComplexEventCondition ComplexEventCondition_86(2);
        noComplexEvents_1_2_2_1.set(ComplexEventCondition_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventCondition_86.getString());
        FIX::ComplexEventPrice ComplexEventPrice_86;
        ComplexEventPrice_86.setString("6014087");
        noComplexEvents_1_2_2_1.set(ComplexEventPrice_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPrice_86.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_86(4);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryMethod_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryMethod_86.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_86;
        ComplexEventPriceBoundaryPrecision_86.setString("90.530000");
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryPrecision_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryPrecision_86.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_86(1);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceTimeType_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceTimeType_86.getString());
        FIX::ComplexEventType ComplexEventType_86(1);
        noComplexEvents_1_2_2_1.set(ComplexEventType_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexEventType_86.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_86;
        ComplexOptPayoutAmount_86.setString("1533613");
        noComplexEvents_1_2_2_1.set(ComplexOptPayoutAmount_86);
        ComplexEvents_NoComplexEvents_86.insert(ComplexOptPayoutAmount_86.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_86);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_173;
          FIX::ComplexEventEndDate ComplexEventEndDate_173(FIX::UTCTIMESTAMP(13, 31, 34, 2, 11, 2013));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventEndDate_173);
          ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventEndDate_173.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_173(FIX::UTCTIMESTAMP(0, 40, 3, 7, 2, 2008));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventStartDate_173);
          ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventStartDate_173.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_173);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_348;
            FIX::ComplexEventEndTime ComplexEventEndTime_348(FIX::UTCTIMEONLY(7, 2, 26));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventEndTime_348);
            ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventEndTime_348.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_348(FIX::UTCTIMEONLY(11, 28, 8));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventStartTime_348);
            ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventStartTime_348.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_348);

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_349;
            FIX::ComplexEventEndTime ComplexEventEndTime_349(FIX::UTCTIMEONLY(6, 6, 40));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventEndTime_349);
            ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventEndTime_349.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_349(FIX::UTCTIMEONLY(13, 21, 42));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventStartTime_349);
            ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventStartTime_349.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_349);

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_174;
          FIX::ComplexEventEndDate ComplexEventEndDate_174(FIX::UTCTIMESTAMP(2, 6, 4, 17, 5, 2009));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventEndDate_174);
          ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventEndDate_174.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_174(FIX::UTCTIMESTAMP(8, 2, 18, 23, 4, 2014));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventStartDate_174);
          ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventStartDate_174.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_174);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_350;
            FIX::ComplexEventEndTime ComplexEventEndTime_350(FIX::UTCTIMEONLY(19, 55, 5));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventEndTime_350);
            ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventEndTime_350.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_350(FIX::UTCTIMEONLY(18, 25, 47));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventStartTime_350);
            ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventStartTime_350.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_350);

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_0);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_175;
          FIX::ComplexEventEndDate ComplexEventEndDate_175(FIX::UTCTIMESTAMP(19, 45, 13, 21, 11, 2002));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventEndDate_175);
          ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventEndDate_175.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_175(FIX::UTCTIMESTAMP(21, 41, 57, 1, 11, 2017));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventStartDate_175);
          ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventStartDate_175.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_175);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_351;
            FIX::ComplexEventEndTime ComplexEventEndTime_351(FIX::UTCTIMEONLY(17, 17, 14));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventEndTime_351);
            ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventEndTime_351.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_351(FIX::UTCTIMEONLY(20, 50, 1));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventStartTime_351);
            ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventStartTime_351.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_351);

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_0);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_89;
        FIX::EventDate EventDate_89("LOCALMKTDATE_1026560894");
        noEvents_1_2_2_0.set(EventDate_89);
        EvntGrp_NoEvents_89.insert(EventDate_89.getString());
        FIX::EventPx EventPx_89;
        EventPx_89.setString("12224464");
        noEvents_1_2_2_0.set(EventPx_89);
        EvntGrp_NoEvents_89.insert(EventPx_89.getString());
        FIX::EventText EventText_89("STRING_1400281256");
        noEvents_1_2_2_0.set(EventText_89);
        EvntGrp_NoEvents_89.insert(EventText_89.getString());
        FIX::EventTime EventTime_89(FIX::UTCTIMESTAMP(6, 14, 33, 23, 2, 2000));
        noEvents_1_2_2_0.set(EventTime_89);
        EvntGrp_NoEvents_89.insert(EventTime_89.getString());
        FIX::EventType EventType_89(13);
        noEvents_1_2_2_0.set(EventType_89);
        EvntGrp_NoEvents_89.insert(EventType_89.getString());
        all_values.push_back(EvntGrp_NoEvents_89);

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_90;
        FIX::EventDate EventDate_90("LOCALMKTDATE_854972938");
        noEvents_1_2_2_1.set(EventDate_90);
        EvntGrp_NoEvents_90.insert(EventDate_90.getString());
        FIX::EventPx EventPx_90;
        EventPx_90.setString("13907154");
        noEvents_1_2_2_1.set(EventPx_90);
        EvntGrp_NoEvents_90.insert(EventPx_90.getString());
        FIX::EventText EventText_90("STRING_988516311");
        noEvents_1_2_2_1.set(EventText_90);
        EvntGrp_NoEvents_90.insert(EventText_90.getString());
        FIX::EventTime EventTime_90(FIX::UTCTIMESTAMP(18, 24, 39, 15, 3, 2009));
        noEvents_1_2_2_1.set(EventTime_90);
        EvntGrp_NoEvents_90.insert(EventTime_90.getString());
        FIX::EventType EventType_90(11);
        noEvents_1_2_2_1.set(EventType_90);
        EvntGrp_NoEvents_90.insert(EventType_90.getString());
        all_values.push_back(EvntGrp_NoEvents_90);

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_91;
        FIX::EventDate EventDate_91("LOCALMKTDATE_148890130");
        noEvents_1_2_2_2.set(EventDate_91);
        EvntGrp_NoEvents_91.insert(EventDate_91.getString());
        FIX::EventPx EventPx_91;
        EventPx_91.setString("17313301");
        noEvents_1_2_2_2.set(EventPx_91);
        EvntGrp_NoEvents_91.insert(EventPx_91.getString());
        FIX::EventText EventText_91("STRING_41024579");
        noEvents_1_2_2_2.set(EventText_91);
        EvntGrp_NoEvents_91.insert(EventText_91.getString());
        FIX::EventTime EventTime_91(FIX::UTCTIMESTAMP(7, 20, 7, 24, 12, 2009));
        noEvents_1_2_2_2.set(EventTime_91);
        EvntGrp_NoEvents_91.insert(EventTime_91.getString());
        FIX::EventType EventType_91(13);
        noEvents_1_2_2_2.set(EventType_91);
        EvntGrp_NoEvents_91.insert(EventType_91.getString());
        all_values.push_back(EvntGrp_NoEvents_91);

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_95;
        FIX::InstrumentPartyID InstrumentPartyID_95("STRING_1610322007");
        noInstrumentParties_1_2_2_0.set(InstrumentPartyID_95);
        InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyID_95.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_95('1');
        noInstrumentParties_1_2_2_0.set(InstrumentPartyIDSource_95);
        InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyIDSource_95.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_95(1256016554);
        noInstrumentParties_1_2_2_0.set(InstrumentPartyRole_95);
        InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyRole_95.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_95);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201;
          FIX::InstrumentPartySubID InstrumentPartySubID_201("STRING_1250843206");
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubID_201);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubID_201.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_201(1555769043);
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubIDType_201);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubIDType_201.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202;
          FIX::InstrumentPartySubID InstrumentPartySubID_202("STRING_604960962");
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubID_202);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubID_202.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_202(993658930);
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubIDType_202);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubIDType_202.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203;
          FIX::InstrumentPartySubID InstrumentPartySubID_203("STRING_263258334");
          noInstrumentPartySubIDs_1_2_0_3_2.set(InstrumentPartySubID_203);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubID_203.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_203(1995676407);
          noInstrumentPartySubIDs_1_2_0_3_2.set(InstrumentPartySubIDType_203);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubIDType_203.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noInstrumentParties_1_2_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_97;
        FIX::SecurityAltID SecurityAltID_97("STRING_2094020084");
        noSecurityAltID_1_2_2_0.set(SecurityAltID_97);
        SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltID_97.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_97("STRING_1606035841");
        noSecurityAltID_1_2_2_0.set(SecurityAltIDSource_97);
        SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltIDSource_97.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_97);

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_98;
        FIX::SecurityAltID SecurityAltID_98("STRING_663620957");
        noSecurityAltID_1_2_2_1.set(SecurityAltID_98);
        SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltID_98.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_98("STRING_777993075");
        noSecurityAltID_1_2_2_1.set(SecurityAltIDSource_98);
        SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltIDSource_98.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_98);

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_88;
      FIX::SecurityXML SecurityXML_89("XMLDATA_1011571649");
      noQuoteEntries_1_1_2.set(SecurityXML_89);
      FIX::SecurityXMLLen SecurityXMLLen_44(1429619671);
      noQuoteEntries_1_1_2.set(SecurityXMLLen_44);
      FIX::SecurityXMLSchema SecurityXMLSchema_44("STRING_314606356");
      noQuoteEntries_1_1_2.set(SecurityXMLSchema_44);
      SecurityXML_88.insert(SecurityXMLSchema_44.getString());
      all_values.push_back(SecurityXML_88);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_55;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_55("DATA_489420911");
    noQuoteSets_0_1.set(EncodedUnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuer_55.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_55(1578509802);
    noQuoteSets_0_1.set(EncodedUnderlyingIssuerLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuerLen_55.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_55("DATA_2045936527");
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDesc_55.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_55(530445491);
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDescLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDescLen_55.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_55;
    UnderlyingAdjustedQuantity_55.setString("9149570");
    noQuoteSets_0_1.set(UnderlyingAdjustedQuantity_55);
    UnderlyingInstrument_55.insert(UnderlyingAdjustedQuantity_55.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_55;
    UnderlyingAllocationPercent_55.setString("44.620000");
    noQuoteSets_0_1.set(UnderlyingAllocationPercent_55);
    UnderlyingInstrument_55.insert(UnderlyingAllocationPercent_55.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_55;
    UnderlyingAttachmentPoint_55.setString("95.310000");
    noQuoteSets_0_1.set(UnderlyingAttachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingAttachmentPoint_55.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_55("STRING_1461319806");
    noQuoteSets_0_1.set(UnderlyingCFICode_55);
    UnderlyingInstrument_55.insert(UnderlyingCFICode_55.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_55("STRING_1659702746");
    noQuoteSets_0_1.set(UnderlyingCPProgram_55);
    UnderlyingInstrument_55.insert(UnderlyingCPProgram_55.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_55("STRING_1308620374");
    noQuoteSets_0_1.set(UnderlyingCPRegType_55);
    UnderlyingInstrument_55.insert(UnderlyingCPRegType_55.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_55;
    UnderlyingCapValue_55.setString("8867597");
    noQuoteSets_0_1.set(UnderlyingCapValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCapValue_55.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_55;
    UnderlyingCashAmount_55.setString("549502");
    noQuoteSets_0_1.set(UnderlyingCashAmount_55);
    UnderlyingInstrument_55.insert(UnderlyingCashAmount_55.getString());
    FIX::UnderlyingCashType UnderlyingCashType_55("STRING_FIXED");
    noQuoteSets_0_1.set(UnderlyingCashType_55);
    UnderlyingInstrument_55.insert(UnderlyingCashType_55.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_55;
    UnderlyingContractMultiplier_55.setString("3495981");
    noQuoteSets_0_1.set(UnderlyingContractMultiplier_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplier_55.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_55(1530442336);
    noQuoteSets_0_1.set(UnderlyingContractMultiplierUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplierUnit_55.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_55("COUNTRY_1002245380");
    noQuoteSets_0_1.set(UnderlyingCountryOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingCountryOfIssue_55.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_55("LOCALMKTDATE_1152262011");
    noQuoteSets_0_1.set(UnderlyingCouponPaymentDate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponPaymentDate_55.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_55;
    UnderlyingCouponRate_55.setString("18.940000");
    noQuoteSets_0_1.set(UnderlyingCouponRate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponRate_55.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_55("STRING_410530776");
    noQuoteSets_0_1.set(UnderlyingCreditRating_55);
    UnderlyingInstrument_55.insert(UnderlyingCreditRating_55.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_55("CAN");
    noQuoteSets_0_1.set(UnderlyingCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrency_55.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_55;
    UnderlyingCurrentValue_55.setString("6737891");
    noQuoteSets_0_1.set(UnderlyingCurrentValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrentValue_55.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_55;
    UnderlyingDetachmentPoint_55.setString("57.330000");
    noQuoteSets_0_1.set(UnderlyingDetachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingDetachmentPoint_55.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_55;
    UnderlyingDirtyPrice_55.setString("14621524");
    noQuoteSets_0_1.set(UnderlyingDirtyPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingDirtyPrice_55.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_55;
    UnderlyingEndPrice_55.setString("6203255");
    noQuoteSets_0_1.set(UnderlyingEndPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingEndPrice_55.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_55;
    UnderlyingEndValue_55.setString("10639679");
    noQuoteSets_0_1.set(UnderlyingEndValue_55);
    UnderlyingInstrument_55.insert(UnderlyingEndValue_55.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_55(2125773376);
    noQuoteSets_0_1.set(UnderlyingExerciseStyle_55);
    UnderlyingInstrument_55.insert(UnderlyingExerciseStyle_55.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_55;
    UnderlyingFXRate_55.setString("13983186");
    noQuoteSets_0_1.set(UnderlyingFXRate_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRate_55.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_55('M');
    noQuoteSets_0_1.set(UnderlyingFXRateCalc_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRateCalc_55.getString());
    FIX::UnderlyingFactor UnderlyingFactor_55;
    UnderlyingFactor_55.setString("14079093");
    noQuoteSets_0_1.set(UnderlyingFactor_55);
    UnderlyingInstrument_55.insert(UnderlyingFactor_55.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_55(1712924978);
    noQuoteSets_0_1.set(UnderlyingFlowScheduleType_55);
    UnderlyingInstrument_55.insert(UnderlyingFlowScheduleType_55.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_55("STRING_417476839");
    noQuoteSets_0_1.set(UnderlyingInstrRegistry_55);
    UnderlyingInstrument_55.insert(UnderlyingInstrRegistry_55.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_55("LOCALMKTDATE_838935553");
    noQuoteSets_0_1.set(UnderlyingIssueDate_55);
    UnderlyingInstrument_55.insert(UnderlyingIssueDate_55.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_55("STRING_1611377857");
    noQuoteSets_0_1.set(UnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(UnderlyingIssuer_55.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_55("STRING_947922330");
    noQuoteSets_0_1.set(UnderlyingLocaleOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingLocaleOfIssue_55.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_55("LOCALMKTDATE_1753892652");
    noQuoteSets_0_1.set(UnderlyingMaturityDate_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityDate_55.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_55("MONTHYEAR_1803312319");
    noQuoteSets_0_1.set(UnderlyingMaturityMonthYear_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityMonthYear_55.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_55("TZTIMEONLY_924248213");
    noQuoteSets_0_1.set(UnderlyingMaturityTime_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityTime_55.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_55;
    UnderlyingNotionalPercentageOutstanding_55.setString("88.110000");
    noQuoteSets_0_1.set(UnderlyingNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_55('1');
    noQuoteSets_0_1.set(UnderlyingOptAttribute_55);
    UnderlyingInstrument_55.insert(UnderlyingOptAttribute_55.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_55;
    UnderlyingOriginalNotionalPercentageOutstanding_55.setString("49.390000");
    noQuoteSets_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingOriginalNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_55("STRING_1954488571");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasure_55.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_55;
    UnderlyingPriceUnitOfMeasureQty_55.setString("13704816");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasureQty_55.getString());
    FIX::UnderlyingProduct UnderlyingProduct_55(1979097414);
    noQuoteSets_0_1.set(UnderlyingProduct_55);
    UnderlyingInstrument_55.insert(UnderlyingProduct_55.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_55(156603042);
    noQuoteSets_0_1.set(UnderlyingPutOrCall_55);
    UnderlyingInstrument_55.insert(UnderlyingPutOrCall_55.getString());
    FIX::UnderlyingPx UnderlyingPx_55;
    UnderlyingPx_55.setString("7534403");
    noQuoteSets_0_1.set(UnderlyingPx_55);
    UnderlyingInstrument_55.insert(UnderlyingPx_55.getString());
    FIX::UnderlyingQty UnderlyingQty_55;
    UnderlyingQty_55.setString("8338591");
    noQuoteSets_0_1.set(UnderlyingQty_55);
    UnderlyingInstrument_55.insert(UnderlyingQty_55.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_55("LOCALMKTDATE_1308865053");
    noQuoteSets_0_1.set(UnderlyingRedemptionDate_55);
    UnderlyingInstrument_55.insert(UnderlyingRedemptionDate_55.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_55("STRING_1387242210");
    noQuoteSets_0_1.set(UnderlyingRepoCollateralSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingRepoCollateralSecurityType_55.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_55;
    UnderlyingRepurchaseRate_55.setString("99.220000");
    noQuoteSets_0_1.set(UnderlyingRepurchaseRate_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseRate_55.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_55(918604378);
    noQuoteSets_0_1.set(UnderlyingRepurchaseTerm_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseTerm_55.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_55("STRING_867219387");
    noQuoteSets_0_1.set(UnderlyingRestructuringType_55);
    UnderlyingInstrument_55.insert(UnderlyingRestructuringType_55.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_55("STRING_1918179032");
    noQuoteSets_0_1.set(UnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityDesc_55.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_55("EXCHANGE_376536463");
    noQuoteSets_0_1.set(UnderlyingSecurityExchange_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityExchange_55.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_55("STRING_181888157");
    noQuoteSets_0_1.set(UnderlyingSecurityID_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityID_55.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_55("STRING_391020930");
    noQuoteSets_0_1.set(UnderlyingSecurityIDSource_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityIDSource_55.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_55("STRING_1440504390");
    noQuoteSets_0_1.set(UnderlyingSecuritySubType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecuritySubType_55.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_55("STRING_160177885");
    noQuoteSets_0_1.set(UnderlyingSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityType_55.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_55("STRING_1789339552");
    noQuoteSets_0_1.set(UnderlyingSeniority_55);
    UnderlyingInstrument_55.insert(UnderlyingSeniority_55.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_55("STRING_1368560317");
    noQuoteSets_0_1.set(UnderlyingSettlMethod_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlMethod_55.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_55(5);
    noQuoteSets_0_1.set(UnderlyingSettlementType_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlementType_55.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_55;
    UnderlyingStartValue_55.setString("13547808");
    noQuoteSets_0_1.set(UnderlyingStartValue_55);
    UnderlyingInstrument_55.insert(UnderlyingStartValue_55.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_55("STRING_1786037156");
    noQuoteSets_0_1.set(UnderlyingStateOrProvinceOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingStateOrProvinceOfIssue_55.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_55("CHF");
    noQuoteSets_0_1.set(UnderlyingStrikeCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikeCurrency_55.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_55;
    UnderlyingStrikePrice_55.setString("5864758");
    noQuoteSets_0_1.set(UnderlyingStrikePrice_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikePrice_55.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_55("STRING_2013431843");
    noQuoteSets_0_1.set(UnderlyingSymbol_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbol_55.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_55("STRING_474503762");
    noQuoteSets_0_1.set(UnderlyingSymbolSfx_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbolSfx_55.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_55("STRING_1510724051");
    noQuoteSets_0_1.set(UnderlyingTimeUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingTimeUnit_55.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_55("STRING_933677006");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasure_55.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_55;
    UnderlyingUnitOfMeasureQty_55.setString("17900351");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasureQty_55.getString());
    all_values.push_back(UnderlyingInstrument_55);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_112;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_112("STRING_740681929");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltID_112.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_112("STRING_1013033158");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltIDSource_112.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_113;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_113("STRING_1427722757");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltID_113.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_113("STRING_897284971");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltIDSource_113.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_99;
      FIX::UnderlyingStipType UnderlyingStipType_99("STRING_114098255");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_99);
      UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipType_99.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_99("STRING_58666376");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_99);
      UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipValue_99.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_99);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_118;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_118("STRING_1358488178");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyID_118.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_118('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyIDSource_118.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_118(1873451422);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyRole_118.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_118);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_234("STRING_1353807218");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_234);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubID_234.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_234(2055339580);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_234);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubIDType_234.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_235("STRING_1520204493");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubID_235.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_235(646827960);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubIDType_235.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_236("STRING_68033817");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubID_236.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_236(1162060397);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubIDType_236.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_119;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_119("STRING_2015388277");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyID_119.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_119('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyIDSource_119.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_119(369357631);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_119);
      UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyRole_119.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_119);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_237("STRING_1895660293");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubID_237.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_237(1188032722);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubIDType_237.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_238("STRING_92933976");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubID_238.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_238(1761608488);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubIDType_238.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_239("STRING_1662536484");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_239);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubID_239.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_239(1603658028);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_239);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubIDType_239.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);

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
    FIX::TargetPartyID TargetPartyID_0("STRING_1305088015");
    noTargetPartyIDs_0_0.set(TargetPartyID_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyID_0.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_0('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyIDSource_0.getString());
    FIX::TargetPartyRole TargetPartyRole_0(1288483775);
    noTargetPartyIDs_0_0.set(TargetPartyRole_0);
    TargetParties_NoTargetPartyIDs_0.insert(TargetPartyRole_0.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_1;
    FIX::TargetPartyID TargetPartyID_1("STRING_170637525");
    noTargetPartyIDs_0_1.set(TargetPartyID_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyID_1.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_1('3');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_1);
    TargetParties_NoTargetPartyIDs_1.insert(TargetPartyIDSource_1.getString());
    FIX::TargetPartyRole TargetPartyRole_1(38285098);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
