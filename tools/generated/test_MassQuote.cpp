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
  FIX::Account Account_14("STRING_904738316");
  msg.set(Account_14);
  MassQuote_0.insert(Account_14.getString());
  FIX::AccountType AccountType_11(2);
  msg.set(AccountType_11);
  MassQuote_0.insert(AccountType_11.getString());
  FIX::AcctIDSource AcctIDSource_7(1);
  msg.set(AcctIDSource_7);
  MassQuote_0.insert(AcctIDSource_7.getString());
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("9385213");
  msg.set(DefBidSize_0);
  MassQuote_0.insert(DefBidSize_0.getString());
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("5880365");
  msg.set(DefOfferSize_0);
  MassQuote_0.insert(DefOfferSize_0.getString());
  FIX::QuoteID QuoteID_1("STRING_1879279327");
  msg.set(QuoteID_1);
  MassQuote_0.insert(QuoteID_1.getString());
  FIX::QuoteReqID QuoteReqID_0("STRING_1575304509");
  msg.set(QuoteReqID_0);
  MassQuote_0.insert(QuoteReqID_0.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_0(3);
  msg.set(QuoteResponseLevel_0);
  MassQuote_0.insert(QuoteResponseLevel_0.getString());
  FIX::QuoteType QuoteType_2(2);
  msg.set(QuoteType_2);
  MassQuote_0.insert(QuoteType_2.getString());
  all_values.push_back(MassQuote_0);

  all_compo_names.insert("MassQuote");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_53;
    FIX::PartyID PartyID_53("STRING_361712311");
    noPartyIDs_0_0.set(PartyID_53);
    Parties_NoPartyIDs_53.insert(PartyID_53.getString());
    FIX::PartyIDSource PartyIDSource_53('I');
    noPartyIDs_0_0.set(PartyIDSource_53);
    Parties_NoPartyIDs_53.insert(PartyIDSource_53.getString());
    FIX::PartyRole PartyRole_53(17);
    noPartyIDs_0_0.set(PartyRole_53);
    Parties_NoPartyIDs_53.insert(PartyRole_53.getString());
    all_values.push_back(Parties_NoPartyIDs_53);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_118;
      FIX::PartySubID PartySubID_118("STRING_1057985617");
      noPartySubIDs_0_1_0.set(PartySubID_118);
      PtysSubGrp_NoPartySubIDs_118.insert(PartySubID_118.getString());
      FIX::PartySubIDType PartySubIDType_118(31);
      noPartySubIDs_0_1_0.set(PartySubIDType_118);
      PtysSubGrp_NoPartySubIDs_118.insert(PartySubIDType_118.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_118);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

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
    FIX::QuoteSetID QuoteSetID_0("STRING_1381781951");
    noQuoteSets_0_0.set(QuoteSetID_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetID_0.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_0(FIX::UTCTIMESTAMP(4, 2, 39, 24, 8, 2002));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_0(509727190);
    noQuoteSets_0_0.set(TotNoQuoteEntries_0);
    QuotSetGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_0.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_0);
    all_compo_names.insert("QuotSetGrp.NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_0;
      BidForwardPoints_0.setString("13505990");
      noQuoteEntries_0_1_0.set(BidForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints_0.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("3940320");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints2_0.getString());
      FIX::BidPx BidPx_0;
      BidPx_0.setString("12776309");
      noQuoteEntries_0_1_0.set(BidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidPx_0.getString());
      FIX::BidSize BidSize_0;
      BidSize_0.setString("1078537");
      noQuoteEntries_0_1_0.set(BidSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSize_0.getString());
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("3825088");
      noQuoteEntries_0_1_0.set(BidSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSpotRate_0.getString());
      FIX::BidYield BidYield_0;
      BidYield_0.setString("78.360000");
      noQuoteEntries_0_1_0.set(BidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidYield_0.getString());
      FIX::BookingType BookingType_7(2);
      noQuoteEntries_0_1_0.set(BookingType_7);
      QuotEntryGrp_NoQuoteEntries_0.insert(BookingType_7.getString());
      FIX::Currency Currency_30("JPY");
      noQuoteEntries_0_1_0.set(Currency_30);
      QuotEntryGrp_NoQuoteEntries_0.insert(Currency_30.getString());
      FIX::MidPx MidPx_0;
      MidPx_0.setString("4741959");
      noQuoteEntries_0_1_0.set(MidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidPx_0.getString());
      FIX::MidYield MidYield_0;
      MidYield_0.setString("79.150000");
      noQuoteEntries_0_1_0.set(MidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidYield_0.getString());
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("4326403");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints_0.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("6175153");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_0.getString());
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("15585602");
      noQuoteEntries_0_1_0.set(OfferPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferPx_0.getString());
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("11526748");
      noQuoteEntries_0_1_0.set(OfferSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSize_0.getString());
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("12036862");
      noQuoteEntries_0_1_0.set(OfferSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSpotRate_0.getString());
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("52.180000");
      noQuoteEntries_0_1_0.set(OfferYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferYield_0.getString());
      FIX::OrdType OrdType_33('K');
      noQuoteEntries_0_1_0.set(OrdType_33);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrdType_33.getString());
      FIX::OrderCapacity OrderCapacity_8('A');
      noQuoteEntries_0_1_0.set(OrderCapacity_8);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderCapacity_8.getString());
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("14188228");
      noQuoteEntries_0_1_0.set(OrderQty2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderQty2_1.getString());
      FIX::OrderRestrictions OrderRestrictions_5("MULTIPLECHARVALUE_4");
      noQuoteEntries_0_1_0.set(OrderRestrictions_5);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderRestrictions_5.getString());
      FIX::QuoteEntryID QuoteEntryID_3("STRING_49473555");
      noQuoteEntries_0_1_0.set(QuoteEntryID_3);
      QuotEntryGrp_NoQuoteEntries_0.insert(QuoteEntryID_3.getString());
      FIX::SettlDate SettlDate_23("LOCALMKTDATE_1484811461");
      noQuoteEntries_0_1_0.set(SettlDate_23);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate_23.getString());
      FIX::SettlDate2 SettlDate2_1("LOCALMKTDATE_1203806751");
      noQuoteEntries_0_1_0.set(SettlDate2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate2_1.getString());
      FIX::TradingSessionID TradingSessionID_36("STRING_1");
      noQuoteEntries_0_1_0.set(TradingSessionID_36);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionID_36.getString());
      FIX::TradingSessionSubID TradingSessionSubID_36("STRING_5");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_36);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionSubID_36.getString());
      FIX::TransactTime TransactTime_26(FIX::UTCTIMESTAMP(1, 32, 37, 5, 12, 2012));
      noQuoteEntries_0_1_0.set(TransactTime_26);
      QuotEntryGrp_NoQuoteEntries_0.insert(TransactTime_26.getString());
      FIX::ValidUntilTime ValidUntilTime_1(FIX::UTCTIMESTAMP(14, 37, 10, 15, 2, 2002));
      noQuoteEntries_0_1_0.set(ValidUntilTime_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(ValidUntilTime_1.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_60;
        FIX::EncodedLegIssuer EncodedLegIssuer_60("DATA_1355792692");
        noLegs_0_0_2_0.set(EncodedLegIssuer_60);
        InstrumentLeg_60.insert(EncodedLegIssuer_60.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_60(91985332);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_60);
        InstrumentLeg_60.insert(EncodedLegIssuerLen_60.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_60("DATA_2065265285");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_60);
        InstrumentLeg_60.insert(EncodedLegSecurityDesc_60.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_60(766869270);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_60);
        InstrumentLeg_60.insert(EncodedLegSecurityDescLen_60.getString());
        FIX::LegCFICode LegCFICode_60("STRING_1244660167");
        noLegs_0_0_2_0.set(LegCFICode_60);
        InstrumentLeg_60.insert(LegCFICode_60.getString());
        FIX::LegContractMultiplier LegContractMultiplier_60;
        LegContractMultiplier_60.setString("11214678");
        noLegs_0_0_2_0.set(LegContractMultiplier_60);
        InstrumentLeg_60.insert(LegContractMultiplier_60.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_60(1579704488);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_60);
        InstrumentLeg_60.insert(LegContractMultiplierUnit_60.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_60("MONTHYEAR_1307836970");
        noLegs_0_0_2_0.set(LegContractSettlMonth_60);
        InstrumentLeg_60.insert(LegContractSettlMonth_60.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_60("COUNTRY_1936643126");
        noLegs_0_0_2_0.set(LegCountryOfIssue_60);
        InstrumentLeg_60.insert(LegCountryOfIssue_60.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_60("LOCALMKTDATE_851043700");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_60);
        InstrumentLeg_60.insert(LegCouponPaymentDate_60.getString());
        FIX::LegCouponRate LegCouponRate_60;
        LegCouponRate_60.setString("39.810000");
        noLegs_0_0_2_0.set(LegCouponRate_60);
        InstrumentLeg_60.insert(LegCouponRate_60.getString());
        FIX::LegCreditRating LegCreditRating_60("STRING_1986116681");
        noLegs_0_0_2_0.set(LegCreditRating_60);
        InstrumentLeg_60.insert(LegCreditRating_60.getString());
        FIX::LegCurrency LegCurrency_60("JPY");
        noLegs_0_0_2_0.set(LegCurrency_60);
        InstrumentLeg_60.insert(LegCurrency_60.getString());
        FIX::LegDatedDate LegDatedDate_60("LOCALMKTDATE_1181017911");
        noLegs_0_0_2_0.set(LegDatedDate_60);
        InstrumentLeg_60.insert(LegDatedDate_60.getString());
        FIX::LegExerciseStyle LegExerciseStyle_60(2112281254);
        noLegs_0_0_2_0.set(LegExerciseStyle_60);
        InstrumentLeg_60.insert(LegExerciseStyle_60.getString());
        FIX::LegFactor LegFactor_60;
        LegFactor_60.setString("16574755");
        noLegs_0_0_2_0.set(LegFactor_60);
        InstrumentLeg_60.insert(LegFactor_60.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_60(738266960);
        noLegs_0_0_2_0.set(LegFlowScheduleType_60);
        InstrumentLeg_60.insert(LegFlowScheduleType_60.getString());
        FIX::LegInstrRegistry LegInstrRegistry_60("STRING_581007418");
        noLegs_0_0_2_0.set(LegInstrRegistry_60);
        InstrumentLeg_60.insert(LegInstrRegistry_60.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_60("LOCALMKTDATE_69334009");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_60);
        InstrumentLeg_60.insert(LegInterestAccrualDate_60.getString());
        FIX::LegIssueDate LegIssueDate_60("LOCALMKTDATE_1575016894");
        noLegs_0_0_2_0.set(LegIssueDate_60);
        InstrumentLeg_60.insert(LegIssueDate_60.getString());
        FIX::LegIssuer LegIssuer_60("STRING_400332638");
        noLegs_0_0_2_0.set(LegIssuer_60);
        InstrumentLeg_60.insert(LegIssuer_60.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_60("STRING_1022708107");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_60);
        InstrumentLeg_60.insert(LegLocaleOfIssue_60.getString());
        FIX::LegMaturityDate LegMaturityDate_60("LOCALMKTDATE_1541914168");
        noLegs_0_0_2_0.set(LegMaturityDate_60);
        InstrumentLeg_60.insert(LegMaturityDate_60.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_60("MONTHYEAR_327511580");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_60);
        InstrumentLeg_60.insert(LegMaturityMonthYear_60.getString());
        FIX::LegMaturityTime LegMaturityTime_60("TZTIMEONLY_211107457");
        noLegs_0_0_2_0.set(LegMaturityTime_60);
        InstrumentLeg_60.insert(LegMaturityTime_60.getString());
        FIX::LegOptAttribute LegOptAttribute_60('4');
        noLegs_0_0_2_0.set(LegOptAttribute_60);
        InstrumentLeg_60.insert(LegOptAttribute_60.getString());
        FIX::LegOptionRatio LegOptionRatio_60;
        LegOptionRatio_60.setString("13010656");
        noLegs_0_0_2_0.set(LegOptionRatio_60);
        InstrumentLeg_60.insert(LegOptionRatio_60.getString());
        FIX::LegPool LegPool_60("STRING_370052234");
        noLegs_0_0_2_0.set(LegPool_60);
        InstrumentLeg_60.insert(LegPool_60.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_60("STRING_74740609");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_60);
        InstrumentLeg_60.insert(LegPriceUnitOfMeasure_60.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_60;
        LegPriceUnitOfMeasureQty_60.setString("6013319");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_60);
        InstrumentLeg_60.insert(LegPriceUnitOfMeasureQty_60.getString());
        FIX::LegProduct LegProduct_60(1725844926);
        noLegs_0_0_2_0.set(LegProduct_60);
        InstrumentLeg_60.insert(LegProduct_60.getString());
        FIX::LegPutOrCall LegPutOrCall_60(166725941);
        noLegs_0_0_2_0.set(LegPutOrCall_60);
        InstrumentLeg_60.insert(LegPutOrCall_60.getString());
        FIX::LegRatioQty LegRatioQty_60;
        LegRatioQty_60.setString("5191135");
        noLegs_0_0_2_0.set(LegRatioQty_60);
        InstrumentLeg_60.insert(LegRatioQty_60.getString());
        FIX::LegRedemptionDate LegRedemptionDate_60("LOCALMKTDATE_345230548");
        noLegs_0_0_2_0.set(LegRedemptionDate_60);
        InstrumentLeg_60.insert(LegRedemptionDate_60.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_60("STRING_1411386108");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_60);
        InstrumentLeg_60.insert(LegRepoCollateralSecurityType_60.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_60;
        LegRepurchaseRate_60.setString("14.330000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_60);
        InstrumentLeg_60.insert(LegRepurchaseRate_60.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_60(1924935036);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_60);
        InstrumentLeg_60.insert(LegRepurchaseTerm_60.getString());
        FIX::LegSecurityDesc LegSecurityDesc_60("STRING_571739431");
        noLegs_0_0_2_0.set(LegSecurityDesc_60);
        InstrumentLeg_60.insert(LegSecurityDesc_60.getString());
        FIX::LegSecurityExchange LegSecurityExchange_60("EXCHANGE_1429740911");
        noLegs_0_0_2_0.set(LegSecurityExchange_60);
        InstrumentLeg_60.insert(LegSecurityExchange_60.getString());
        FIX::LegSecurityID LegSecurityID_60("STRING_628495088");
        noLegs_0_0_2_0.set(LegSecurityID_60);
        InstrumentLeg_60.insert(LegSecurityID_60.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_60("STRING_975793412");
        noLegs_0_0_2_0.set(LegSecurityIDSource_60);
        InstrumentLeg_60.insert(LegSecurityIDSource_60.getString());
        FIX::LegSecuritySubType LegSecuritySubType_60("STRING_1268373944");
        noLegs_0_0_2_0.set(LegSecuritySubType_60);
        InstrumentLeg_60.insert(LegSecuritySubType_60.getString());
        FIX::LegSecurityType LegSecurityType_60("STRING_816866601");
        noLegs_0_0_2_0.set(LegSecurityType_60);
        InstrumentLeg_60.insert(LegSecurityType_60.getString());
        FIX::LegSide LegSide_60('4');
        noLegs_0_0_2_0.set(LegSide_60);
        InstrumentLeg_60.insert(LegSide_60.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_60("STRING_301908208");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_60);
        InstrumentLeg_60.insert(LegStateOrProvinceOfIssue_60.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_60("CAN");
        noLegs_0_0_2_0.set(LegStrikeCurrency_60);
        InstrumentLeg_60.insert(LegStrikeCurrency_60.getString());
        FIX::LegStrikePrice LegStrikePrice_60;
        LegStrikePrice_60.setString("10401751");
        noLegs_0_0_2_0.set(LegStrikePrice_60);
        InstrumentLeg_60.insert(LegStrikePrice_60.getString());
        FIX::LegSymbol LegSymbol_60("STRING_1362671626");
        noLegs_0_0_2_0.set(LegSymbol_60);
        InstrumentLeg_60.insert(LegSymbol_60.getString());
        FIX::LegSymbolSfx LegSymbolSfx_60("STRING_15496456");
        noLegs_0_0_2_0.set(LegSymbolSfx_60);
        InstrumentLeg_60.insert(LegSymbolSfx_60.getString());
        FIX::LegTimeUnit LegTimeUnit_60("STRING_467708414");
        noLegs_0_0_2_0.set(LegTimeUnit_60);
        InstrumentLeg_60.insert(LegTimeUnit_60.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_60("STRING_1763004264");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_60);
        InstrumentLeg_60.insert(LegUnitOfMeasure_60.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_60;
        LegUnitOfMeasureQty_60.setString("10382045");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_60);
        InstrumentLeg_60.insert(LegUnitOfMeasureQty_60.getString());
        all_values.push_back(InstrumentLeg_60);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_119;
          FIX::LegSecurityAltID LegSecurityAltID_119("STRING_2090515844");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_119);
          LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltID_119.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_119("STRING_1249312021");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_119);
          LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltIDSource_119.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_119);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_61;
        FIX::EncodedLegIssuer EncodedLegIssuer_61("DATA_277534565");
        noLegs_0_0_2_1.set(EncodedLegIssuer_61);
        InstrumentLeg_61.insert(EncodedLegIssuer_61.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_61(1244097800);
        noLegs_0_0_2_1.set(EncodedLegIssuerLen_61);
        InstrumentLeg_61.insert(EncodedLegIssuerLen_61.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_61("DATA_1619364255");
        noLegs_0_0_2_1.set(EncodedLegSecurityDesc_61);
        InstrumentLeg_61.insert(EncodedLegSecurityDesc_61.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_61(352275174);
        noLegs_0_0_2_1.set(EncodedLegSecurityDescLen_61);
        InstrumentLeg_61.insert(EncodedLegSecurityDescLen_61.getString());
        FIX::LegCFICode LegCFICode_61("STRING_1845429722");
        noLegs_0_0_2_1.set(LegCFICode_61);
        InstrumentLeg_61.insert(LegCFICode_61.getString());
        FIX::LegContractMultiplier LegContractMultiplier_61;
        LegContractMultiplier_61.setString("11977255");
        noLegs_0_0_2_1.set(LegContractMultiplier_61);
        InstrumentLeg_61.insert(LegContractMultiplier_61.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_61(519001115);
        noLegs_0_0_2_1.set(LegContractMultiplierUnit_61);
        InstrumentLeg_61.insert(LegContractMultiplierUnit_61.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_61("MONTHYEAR_217059633");
        noLegs_0_0_2_1.set(LegContractSettlMonth_61);
        InstrumentLeg_61.insert(LegContractSettlMonth_61.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_61("COUNTRY_1542956081");
        noLegs_0_0_2_1.set(LegCountryOfIssue_61);
        InstrumentLeg_61.insert(LegCountryOfIssue_61.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_61("LOCALMKTDATE_1930387224");
        noLegs_0_0_2_1.set(LegCouponPaymentDate_61);
        InstrumentLeg_61.insert(LegCouponPaymentDate_61.getString());
        FIX::LegCouponRate LegCouponRate_61;
        LegCouponRate_61.setString("10.660000");
        noLegs_0_0_2_1.set(LegCouponRate_61);
        InstrumentLeg_61.insert(LegCouponRate_61.getString());
        FIX::LegCreditRating LegCreditRating_61("STRING_1320407469");
        noLegs_0_0_2_1.set(LegCreditRating_61);
        InstrumentLeg_61.insert(LegCreditRating_61.getString());
        FIX::LegCurrency LegCurrency_61("CAN");
        noLegs_0_0_2_1.set(LegCurrency_61);
        InstrumentLeg_61.insert(LegCurrency_61.getString());
        FIX::LegDatedDate LegDatedDate_61("LOCALMKTDATE_1948902557");
        noLegs_0_0_2_1.set(LegDatedDate_61);
        InstrumentLeg_61.insert(LegDatedDate_61.getString());
        FIX::LegExerciseStyle LegExerciseStyle_61(1330436419);
        noLegs_0_0_2_1.set(LegExerciseStyle_61);
        InstrumentLeg_61.insert(LegExerciseStyle_61.getString());
        FIX::LegFactor LegFactor_61;
        LegFactor_61.setString("2607886");
        noLegs_0_0_2_1.set(LegFactor_61);
        InstrumentLeg_61.insert(LegFactor_61.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_61(618285510);
        noLegs_0_0_2_1.set(LegFlowScheduleType_61);
        InstrumentLeg_61.insert(LegFlowScheduleType_61.getString());
        FIX::LegInstrRegistry LegInstrRegistry_61("STRING_1766606915");
        noLegs_0_0_2_1.set(LegInstrRegistry_61);
        InstrumentLeg_61.insert(LegInstrRegistry_61.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_61("LOCALMKTDATE_562696833");
        noLegs_0_0_2_1.set(LegInterestAccrualDate_61);
        InstrumentLeg_61.insert(LegInterestAccrualDate_61.getString());
        FIX::LegIssueDate LegIssueDate_61("LOCALMKTDATE_1399949718");
        noLegs_0_0_2_1.set(LegIssueDate_61);
        InstrumentLeg_61.insert(LegIssueDate_61.getString());
        FIX::LegIssuer LegIssuer_61("STRING_1712769362");
        noLegs_0_0_2_1.set(LegIssuer_61);
        InstrumentLeg_61.insert(LegIssuer_61.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_61("STRING_1602872002");
        noLegs_0_0_2_1.set(LegLocaleOfIssue_61);
        InstrumentLeg_61.insert(LegLocaleOfIssue_61.getString());
        FIX::LegMaturityDate LegMaturityDate_61("LOCALMKTDATE_615137696");
        noLegs_0_0_2_1.set(LegMaturityDate_61);
        InstrumentLeg_61.insert(LegMaturityDate_61.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_61("MONTHYEAR_1728265819");
        noLegs_0_0_2_1.set(LegMaturityMonthYear_61);
        InstrumentLeg_61.insert(LegMaturityMonthYear_61.getString());
        FIX::LegMaturityTime LegMaturityTime_61("TZTIMEONLY_2070580416");
        noLegs_0_0_2_1.set(LegMaturityTime_61);
        InstrumentLeg_61.insert(LegMaturityTime_61.getString());
        FIX::LegOptAttribute LegOptAttribute_61('2');
        noLegs_0_0_2_1.set(LegOptAttribute_61);
        InstrumentLeg_61.insert(LegOptAttribute_61.getString());
        FIX::LegOptionRatio LegOptionRatio_61;
        LegOptionRatio_61.setString("6189867");
        noLegs_0_0_2_1.set(LegOptionRatio_61);
        InstrumentLeg_61.insert(LegOptionRatio_61.getString());
        FIX::LegPool LegPool_61("STRING_1932719351");
        noLegs_0_0_2_1.set(LegPool_61);
        InstrumentLeg_61.insert(LegPool_61.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_61("STRING_173690508");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasure_61);
        InstrumentLeg_61.insert(LegPriceUnitOfMeasure_61.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_61;
        LegPriceUnitOfMeasureQty_61.setString("18682987");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasureQty_61);
        InstrumentLeg_61.insert(LegPriceUnitOfMeasureQty_61.getString());
        FIX::LegProduct LegProduct_61(62770268);
        noLegs_0_0_2_1.set(LegProduct_61);
        InstrumentLeg_61.insert(LegProduct_61.getString());
        FIX::LegPutOrCall LegPutOrCall_61(1417788309);
        noLegs_0_0_2_1.set(LegPutOrCall_61);
        InstrumentLeg_61.insert(LegPutOrCall_61.getString());
        FIX::LegRatioQty LegRatioQty_61;
        LegRatioQty_61.setString("13401793");
        noLegs_0_0_2_1.set(LegRatioQty_61);
        InstrumentLeg_61.insert(LegRatioQty_61.getString());
        FIX::LegRedemptionDate LegRedemptionDate_61("LOCALMKTDATE_415045442");
        noLegs_0_0_2_1.set(LegRedemptionDate_61);
        InstrumentLeg_61.insert(LegRedemptionDate_61.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_61("STRING_1115734383");
        noLegs_0_0_2_1.set(LegRepoCollateralSecurityType_61);
        InstrumentLeg_61.insert(LegRepoCollateralSecurityType_61.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_61;
        LegRepurchaseRate_61.setString("12.480000");
        noLegs_0_0_2_1.set(LegRepurchaseRate_61);
        InstrumentLeg_61.insert(LegRepurchaseRate_61.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_61(934046557);
        noLegs_0_0_2_1.set(LegRepurchaseTerm_61);
        InstrumentLeg_61.insert(LegRepurchaseTerm_61.getString());
        FIX::LegSecurityDesc LegSecurityDesc_61("STRING_1332794016");
        noLegs_0_0_2_1.set(LegSecurityDesc_61);
        InstrumentLeg_61.insert(LegSecurityDesc_61.getString());
        FIX::LegSecurityExchange LegSecurityExchange_61("EXCHANGE_1933377329");
        noLegs_0_0_2_1.set(LegSecurityExchange_61);
        InstrumentLeg_61.insert(LegSecurityExchange_61.getString());
        FIX::LegSecurityID LegSecurityID_61("STRING_716950133");
        noLegs_0_0_2_1.set(LegSecurityID_61);
        InstrumentLeg_61.insert(LegSecurityID_61.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_61("STRING_1042951434");
        noLegs_0_0_2_1.set(LegSecurityIDSource_61);
        InstrumentLeg_61.insert(LegSecurityIDSource_61.getString());
        FIX::LegSecuritySubType LegSecuritySubType_61("STRING_1106301150");
        noLegs_0_0_2_1.set(LegSecuritySubType_61);
        InstrumentLeg_61.insert(LegSecuritySubType_61.getString());
        FIX::LegSecurityType LegSecurityType_61("STRING_1071593140");
        noLegs_0_0_2_1.set(LegSecurityType_61);
        InstrumentLeg_61.insert(LegSecurityType_61.getString());
        FIX::LegSide LegSide_61('3');
        noLegs_0_0_2_1.set(LegSide_61);
        InstrumentLeg_61.insert(LegSide_61.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_61("STRING_907720059");
        noLegs_0_0_2_1.set(LegStateOrProvinceOfIssue_61);
        InstrumentLeg_61.insert(LegStateOrProvinceOfIssue_61.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_61("GBP");
        noLegs_0_0_2_1.set(LegStrikeCurrency_61);
        InstrumentLeg_61.insert(LegStrikeCurrency_61.getString());
        FIX::LegStrikePrice LegStrikePrice_61;
        LegStrikePrice_61.setString("15260055");
        noLegs_0_0_2_1.set(LegStrikePrice_61);
        InstrumentLeg_61.insert(LegStrikePrice_61.getString());
        FIX::LegSymbol LegSymbol_61("STRING_2021152826");
        noLegs_0_0_2_1.set(LegSymbol_61);
        InstrumentLeg_61.insert(LegSymbol_61.getString());
        FIX::LegSymbolSfx LegSymbolSfx_61("STRING_858851574");
        noLegs_0_0_2_1.set(LegSymbolSfx_61);
        InstrumentLeg_61.insert(LegSymbolSfx_61.getString());
        FIX::LegTimeUnit LegTimeUnit_61("STRING_778471639");
        noLegs_0_0_2_1.set(LegTimeUnit_61);
        InstrumentLeg_61.insert(LegTimeUnit_61.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_61("STRING_1586438541");
        noLegs_0_0_2_1.set(LegUnitOfMeasure_61);
        InstrumentLeg_61.insert(LegUnitOfMeasure_61.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_61;
        LegUnitOfMeasureQty_61.setString("3142399");
        noLegs_0_0_2_1.set(LegUnitOfMeasureQty_61);
        InstrumentLeg_61.insert(LegUnitOfMeasureQty_61.getString());
        all_values.push_back(InstrumentLeg_61);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_120;
          FIX::LegSecurityAltID LegSecurityAltID_120("STRING_1167220712");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltID_120);
          LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltID_120.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_120("STRING_237336696");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltIDSource_120);
          LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltIDSource_120.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_120);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_62;
        FIX::EncodedLegIssuer EncodedLegIssuer_62("DATA_1624267647");
        noLegs_0_0_2_2.set(EncodedLegIssuer_62);
        InstrumentLeg_62.insert(EncodedLegIssuer_62.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_62(1786207447);
        noLegs_0_0_2_2.set(EncodedLegIssuerLen_62);
        InstrumentLeg_62.insert(EncodedLegIssuerLen_62.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_62("DATA_22572399");
        noLegs_0_0_2_2.set(EncodedLegSecurityDesc_62);
        InstrumentLeg_62.insert(EncodedLegSecurityDesc_62.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_62(1797958156);
        noLegs_0_0_2_2.set(EncodedLegSecurityDescLen_62);
        InstrumentLeg_62.insert(EncodedLegSecurityDescLen_62.getString());
        FIX::LegCFICode LegCFICode_62("STRING_1507022555");
        noLegs_0_0_2_2.set(LegCFICode_62);
        InstrumentLeg_62.insert(LegCFICode_62.getString());
        FIX::LegContractMultiplier LegContractMultiplier_62;
        LegContractMultiplier_62.setString("853426");
        noLegs_0_0_2_2.set(LegContractMultiplier_62);
        InstrumentLeg_62.insert(LegContractMultiplier_62.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_62(1068262817);
        noLegs_0_0_2_2.set(LegContractMultiplierUnit_62);
        InstrumentLeg_62.insert(LegContractMultiplierUnit_62.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_62("MONTHYEAR_699718270");
        noLegs_0_0_2_2.set(LegContractSettlMonth_62);
        InstrumentLeg_62.insert(LegContractSettlMonth_62.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_62("COUNTRY_500388109");
        noLegs_0_0_2_2.set(LegCountryOfIssue_62);
        InstrumentLeg_62.insert(LegCountryOfIssue_62.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_62("LOCALMKTDATE_36513552");
        noLegs_0_0_2_2.set(LegCouponPaymentDate_62);
        InstrumentLeg_62.insert(LegCouponPaymentDate_62.getString());
        FIX::LegCouponRate LegCouponRate_62;
        LegCouponRate_62.setString("95.180000");
        noLegs_0_0_2_2.set(LegCouponRate_62);
        InstrumentLeg_62.insert(LegCouponRate_62.getString());
        FIX::LegCreditRating LegCreditRating_62("STRING_1434434667");
        noLegs_0_0_2_2.set(LegCreditRating_62);
        InstrumentLeg_62.insert(LegCreditRating_62.getString());
        FIX::LegCurrency LegCurrency_62("EUR");
        noLegs_0_0_2_2.set(LegCurrency_62);
        InstrumentLeg_62.insert(LegCurrency_62.getString());
        FIX::LegDatedDate LegDatedDate_62("LOCALMKTDATE_3901152");
        noLegs_0_0_2_2.set(LegDatedDate_62);
        InstrumentLeg_62.insert(LegDatedDate_62.getString());
        FIX::LegExerciseStyle LegExerciseStyle_62(264775354);
        noLegs_0_0_2_2.set(LegExerciseStyle_62);
        InstrumentLeg_62.insert(LegExerciseStyle_62.getString());
        FIX::LegFactor LegFactor_62;
        LegFactor_62.setString("19823343");
        noLegs_0_0_2_2.set(LegFactor_62);
        InstrumentLeg_62.insert(LegFactor_62.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_62(1075494293);
        noLegs_0_0_2_2.set(LegFlowScheduleType_62);
        InstrumentLeg_62.insert(LegFlowScheduleType_62.getString());
        FIX::LegInstrRegistry LegInstrRegistry_62("STRING_300141469");
        noLegs_0_0_2_2.set(LegInstrRegistry_62);
        InstrumentLeg_62.insert(LegInstrRegistry_62.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_62("LOCALMKTDATE_742570760");
        noLegs_0_0_2_2.set(LegInterestAccrualDate_62);
        InstrumentLeg_62.insert(LegInterestAccrualDate_62.getString());
        FIX::LegIssueDate LegIssueDate_62("LOCALMKTDATE_1330040204");
        noLegs_0_0_2_2.set(LegIssueDate_62);
        InstrumentLeg_62.insert(LegIssueDate_62.getString());
        FIX::LegIssuer LegIssuer_62("STRING_596296209");
        noLegs_0_0_2_2.set(LegIssuer_62);
        InstrumentLeg_62.insert(LegIssuer_62.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_62("STRING_121092681");
        noLegs_0_0_2_2.set(LegLocaleOfIssue_62);
        InstrumentLeg_62.insert(LegLocaleOfIssue_62.getString());
        FIX::LegMaturityDate LegMaturityDate_62("LOCALMKTDATE_1203709383");
        noLegs_0_0_2_2.set(LegMaturityDate_62);
        InstrumentLeg_62.insert(LegMaturityDate_62.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_62("MONTHYEAR_1455147783");
        noLegs_0_0_2_2.set(LegMaturityMonthYear_62);
        InstrumentLeg_62.insert(LegMaturityMonthYear_62.getString());
        FIX::LegMaturityTime LegMaturityTime_62("TZTIMEONLY_899564321");
        noLegs_0_0_2_2.set(LegMaturityTime_62);
        InstrumentLeg_62.insert(LegMaturityTime_62.getString());
        FIX::LegOptAttribute LegOptAttribute_62('6');
        noLegs_0_0_2_2.set(LegOptAttribute_62);
        InstrumentLeg_62.insert(LegOptAttribute_62.getString());
        FIX::LegOptionRatio LegOptionRatio_62;
        LegOptionRatio_62.setString("17693877");
        noLegs_0_0_2_2.set(LegOptionRatio_62);
        InstrumentLeg_62.insert(LegOptionRatio_62.getString());
        FIX::LegPool LegPool_62("STRING_145690008");
        noLegs_0_0_2_2.set(LegPool_62);
        InstrumentLeg_62.insert(LegPool_62.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_62("STRING_1809884988");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasure_62);
        InstrumentLeg_62.insert(LegPriceUnitOfMeasure_62.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_62;
        LegPriceUnitOfMeasureQty_62.setString("20067244");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasureQty_62);
        InstrumentLeg_62.insert(LegPriceUnitOfMeasureQty_62.getString());
        FIX::LegProduct LegProduct_62(1769957656);
        noLegs_0_0_2_2.set(LegProduct_62);
        InstrumentLeg_62.insert(LegProduct_62.getString());
        FIX::LegPutOrCall LegPutOrCall_62(1448608787);
        noLegs_0_0_2_2.set(LegPutOrCall_62);
        InstrumentLeg_62.insert(LegPutOrCall_62.getString());
        FIX::LegRatioQty LegRatioQty_62;
        LegRatioQty_62.setString("20292968");
        noLegs_0_0_2_2.set(LegRatioQty_62);
        InstrumentLeg_62.insert(LegRatioQty_62.getString());
        FIX::LegRedemptionDate LegRedemptionDate_62("LOCALMKTDATE_1420432164");
        noLegs_0_0_2_2.set(LegRedemptionDate_62);
        InstrumentLeg_62.insert(LegRedemptionDate_62.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_62("STRING_808147694");
        noLegs_0_0_2_2.set(LegRepoCollateralSecurityType_62);
        InstrumentLeg_62.insert(LegRepoCollateralSecurityType_62.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_62;
        LegRepurchaseRate_62.setString("94.750000");
        noLegs_0_0_2_2.set(LegRepurchaseRate_62);
        InstrumentLeg_62.insert(LegRepurchaseRate_62.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_62(341211333);
        noLegs_0_0_2_2.set(LegRepurchaseTerm_62);
        InstrumentLeg_62.insert(LegRepurchaseTerm_62.getString());
        FIX::LegSecurityDesc LegSecurityDesc_62("STRING_1507865964");
        noLegs_0_0_2_2.set(LegSecurityDesc_62);
        InstrumentLeg_62.insert(LegSecurityDesc_62.getString());
        FIX::LegSecurityExchange LegSecurityExchange_62("EXCHANGE_467543936");
        noLegs_0_0_2_2.set(LegSecurityExchange_62);
        InstrumentLeg_62.insert(LegSecurityExchange_62.getString());
        FIX::LegSecurityID LegSecurityID_62("STRING_377724885");
        noLegs_0_0_2_2.set(LegSecurityID_62);
        InstrumentLeg_62.insert(LegSecurityID_62.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_62("STRING_450521834");
        noLegs_0_0_2_2.set(LegSecurityIDSource_62);
        InstrumentLeg_62.insert(LegSecurityIDSource_62.getString());
        FIX::LegSecuritySubType LegSecuritySubType_62("STRING_1901978603");
        noLegs_0_0_2_2.set(LegSecuritySubType_62);
        InstrumentLeg_62.insert(LegSecuritySubType_62.getString());
        FIX::LegSecurityType LegSecurityType_62("STRING_1747032453");
        noLegs_0_0_2_2.set(LegSecurityType_62);
        InstrumentLeg_62.insert(LegSecurityType_62.getString());
        FIX::LegSide LegSide_62('1');
        noLegs_0_0_2_2.set(LegSide_62);
        InstrumentLeg_62.insert(LegSide_62.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_62("STRING_1905879756");
        noLegs_0_0_2_2.set(LegStateOrProvinceOfIssue_62);
        InstrumentLeg_62.insert(LegStateOrProvinceOfIssue_62.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_62("GBP");
        noLegs_0_0_2_2.set(LegStrikeCurrency_62);
        InstrumentLeg_62.insert(LegStrikeCurrency_62.getString());
        FIX::LegStrikePrice LegStrikePrice_62;
        LegStrikePrice_62.setString("8338904");
        noLegs_0_0_2_2.set(LegStrikePrice_62);
        InstrumentLeg_62.insert(LegStrikePrice_62.getString());
        FIX::LegSymbol LegSymbol_62("STRING_164465628");
        noLegs_0_0_2_2.set(LegSymbol_62);
        InstrumentLeg_62.insert(LegSymbol_62.getString());
        FIX::LegSymbolSfx LegSymbolSfx_62("STRING_1903976494");
        noLegs_0_0_2_2.set(LegSymbolSfx_62);
        InstrumentLeg_62.insert(LegSymbolSfx_62.getString());
        FIX::LegTimeUnit LegTimeUnit_62("STRING_16446957");
        noLegs_0_0_2_2.set(LegTimeUnit_62);
        InstrumentLeg_62.insert(LegTimeUnit_62.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_62("STRING_760761837");
        noLegs_0_0_2_2.set(LegUnitOfMeasure_62);
        InstrumentLeg_62.insert(LegUnitOfMeasure_62.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_62;
        LegUnitOfMeasureQty_62.setString("20250691");
        noLegs_0_0_2_2.set(LegUnitOfMeasureQty_62);
        InstrumentLeg_62.insert(LegUnitOfMeasureQty_62.getString());
        all_values.push_back(InstrumentLeg_62);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_121;
          FIX::LegSecurityAltID LegSecurityAltID_121("STRING_68425973");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltID_121);
          LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltID_121.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_121("STRING_777149848");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltIDSource_121);
          LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltIDSource_121.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_121);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_32;
      FIX::AttachmentPoint AttachmentPoint_32;
      AttachmentPoint_32.setString("6.160000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_32);
      Instrument_32.insert(AttachmentPoint_32.getString());
      FIX::CFICode CFICode_32("STRING_1837813684");
      noQuoteEntries_0_1_0.set(CFICode_32);
      Instrument_32.insert(CFICode_32.getString());
      FIX::CPProgram CPProgram_32(99);
      noQuoteEntries_0_1_0.set(CPProgram_32);
      Instrument_32.insert(CPProgram_32.getString());
      FIX::CPRegType CPRegType_32("STRING_1525221956");
      noQuoteEntries_0_1_0.set(CPRegType_32);
      Instrument_32.insert(CPRegType_32.getString());
      FIX::CapPrice CapPrice_32;
      CapPrice_32.setString("16970544");
      noQuoteEntries_0_1_0.set(CapPrice_32);
      Instrument_32.insert(CapPrice_32.getString());
      FIX::ContractMultiplier ContractMultiplier_32;
      ContractMultiplier_32.setString("5453138");
      noQuoteEntries_0_1_0.set(ContractMultiplier_32);
      Instrument_32.insert(ContractMultiplier_32.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_32(2);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_32);
      Instrument_32.insert(ContractMultiplierUnit_32.getString());
      FIX::ContractSettlMonth ContractSettlMonth_32("MONTHYEAR_1578867604");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_32);
      Instrument_32.insert(ContractSettlMonth_32.getString());
      FIX::CountryOfIssue CountryOfIssue_32("COUNTRY_1965746029");
      noQuoteEntries_0_1_0.set(CountryOfIssue_32);
      Instrument_32.insert(CountryOfIssue_32.getString());
      FIX::CouponPaymentDate CouponPaymentDate_32("LOCALMKTDATE_1634494789");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_32);
      Instrument_32.insert(CouponPaymentDate_32.getString());
      FIX::CouponRate CouponRate_32;
      CouponRate_32.setString("34.310000");
      noQuoteEntries_0_1_0.set(CouponRate_32);
      Instrument_32.insert(CouponRate_32.getString());
      FIX::CreditRating CreditRating_32("STRING_159473714");
      noQuoteEntries_0_1_0.set(CreditRating_32);
      Instrument_32.insert(CreditRating_32.getString());
      FIX::DatedDate DatedDate_32("LOCALMKTDATE_994877105");
      noQuoteEntries_0_1_0.set(DatedDate_32);
      Instrument_32.insert(DatedDate_32.getString());
      FIX::DetachmentPoint DetachmentPoint_32;
      DetachmentPoint_32.setString("73.670000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_32);
      Instrument_32.insert(DetachmentPoint_32.getString());
      FIX::EncodedIssuer EncodedIssuer_32("DATA_537198599");
      noQuoteEntries_0_1_0.set(EncodedIssuer_32);
      Instrument_32.insert(EncodedIssuer_32.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_32(1445398939);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_32);
      Instrument_32.insert(EncodedIssuerLen_32.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_32("DATA_1768062323");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_32);
      Instrument_32.insert(EncodedSecurityDesc_32.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_32(136747404);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_32);
      Instrument_32.insert(EncodedSecurityDescLen_32.getString());
      FIX::ExerciseStyle ExerciseStyle_32(2);
      noQuoteEntries_0_1_0.set(ExerciseStyle_32);
      Instrument_32.insert(ExerciseStyle_32.getString());
      FIX::Factor Factor_32;
      Factor_32.setString("15264584");
      noQuoteEntries_0_1_0.set(Factor_32);
      Instrument_32.insert(Factor_32.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_32(false);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_32);
      Instrument_32.insert(FlexProductEligibilityIndicator_32.getString());
      FIX::FlexibleIndicator FlexibleIndicator_32(true);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_32);
      Instrument_32.insert(FlexibleIndicator_32.getString());
      FIX::FloorPrice FloorPrice_32;
      FloorPrice_32.setString("2128651");
      noQuoteEntries_0_1_0.set(FloorPrice_32);
      Instrument_32.insert(FloorPrice_32.getString());
      FIX::FlowScheduleType FlowScheduleType_32(1);
      noQuoteEntries_0_1_0.set(FlowScheduleType_32);
      Instrument_32.insert(FlowScheduleType_32.getString());
      FIX::InstrRegistry InstrRegistry_32("STRING_1542368904");
      noQuoteEntries_0_1_0.set(InstrRegistry_32);
      Instrument_32.insert(InstrRegistry_32.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_32('2');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_32);
      Instrument_32.insert(InstrmtAssignmentMethod_32.getString());
      FIX::InterestAccrualDate InterestAccrualDate_32("LOCALMKTDATE_926299028");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_32);
      Instrument_32.insert(InterestAccrualDate_32.getString());
      FIX::IssueDate IssueDate_32("LOCALMKTDATE_1419954432");
      noQuoteEntries_0_1_0.set(IssueDate_32);
      Instrument_32.insert(IssueDate_32.getString());
      FIX::Issuer Issuer_32("STRING_1449468482");
      noQuoteEntries_0_1_0.set(Issuer_32);
      Instrument_32.insert(Issuer_32.getString());
      FIX::ListMethod ListMethod_32(1);
      noQuoteEntries_0_1_0.set(ListMethod_32);
      Instrument_32.insert(ListMethod_32.getString());
      FIX::LocaleOfIssue LocaleOfIssue_32("STRING_49620632");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_32);
      Instrument_32.insert(LocaleOfIssue_32.getString());
      FIX::MaturityDate MaturityDate_32("LOCALMKTDATE_1164805450");
      noQuoteEntries_0_1_0.set(MaturityDate_32);
      Instrument_32.insert(MaturityDate_32.getString());
      FIX::MaturityMonthYear MaturityMonthYear_32("MONTHYEAR_685055038");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_32);
      Instrument_32.insert(MaturityMonthYear_32.getString());
      FIX::MaturityTime MaturityTime_32("TZTIMEONLY_972460489");
      noQuoteEntries_0_1_0.set(MaturityTime_32);
      Instrument_32.insert(MaturityTime_32.getString());
      FIX::MinPriceIncrement MinPriceIncrement_32;
      MinPriceIncrement_32.setString("5425437");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_32);
      Instrument_32.insert(MinPriceIncrement_32.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_32;
      MinPriceIncrementAmount_32.setString("2346258");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_32);
      Instrument_32.insert(MinPriceIncrementAmount_32.getString());
      FIX::NTPositionLimit NTPositionLimit_32(1517774354);
      noQuoteEntries_0_1_0.set(NTPositionLimit_32);
      Instrument_32.insert(NTPositionLimit_32.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_32;
      NotionalPercentageOutstanding_32.setString("8.540000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_32);
      Instrument_32.insert(NotionalPercentageOutstanding_32.getString());
      FIX::OptAttribute OptAttribute_32('1');
      noQuoteEntries_0_1_0.set(OptAttribute_32);
      Instrument_32.insert(OptAttribute_32.getString());
      FIX::OptPayoutAmount OptPayoutAmount_32;
      OptPayoutAmount_32.setString("13360367");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_32);
      Instrument_32.insert(OptPayoutAmount_32.getString());
      FIX::OptPayoutType OptPayoutType_32(2);
      noQuoteEntries_0_1_0.set(OptPayoutType_32);
      Instrument_32.insert(OptPayoutType_32.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_32;
      OriginalNotionalPercentageOutstanding_32.setString("32.210000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_32);
      Instrument_32.insert(OriginalNotionalPercentageOutstanding_32.getString());
      FIX::Pool Pool_32("STRING_1495510449");
      noQuoteEntries_0_1_0.set(Pool_32);
      Instrument_32.insert(Pool_32.getString());
      FIX::PositionLimit PositionLimit_32(1850779101);
      noQuoteEntries_0_1_0.set(PositionLimit_32);
      Instrument_32.insert(PositionLimit_32.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_32("STRING_INX");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_32);
      Instrument_32.insert(PriceQuoteMethod_32.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_32("STRING_2032709048");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_32);
      Instrument_32.insert(PriceUnitOfMeasure_32.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_32;
      PriceUnitOfMeasureQty_32.setString("11486943");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_32);
      Instrument_32.insert(PriceUnitOfMeasureQty_32.getString());
      FIX::Product Product_34(9);
      noQuoteEntries_0_1_0.set(Product_34);
      Instrument_32.insert(Product_34.getString());
      FIX::ProductComplex ProductComplex_32("STRING_21972804");
      noQuoteEntries_0_1_0.set(ProductComplex_32);
      Instrument_32.insert(ProductComplex_32.getString());
      FIX::PutOrCall PutOrCall_32(1);
      noQuoteEntries_0_1_0.set(PutOrCall_32);
      Instrument_32.insert(PutOrCall_32.getString());
      FIX::RedemptionDate RedemptionDate_32("LOCALMKTDATE_77670399");
      noQuoteEntries_0_1_0.set(RedemptionDate_32);
      Instrument_32.insert(RedemptionDate_32.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_32("STRING_23044367");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_32);
      Instrument_32.insert(RepoCollateralSecurityType_32.getString());
      FIX::RepurchaseRate RepurchaseRate_32;
      RepurchaseRate_32.setString("71.280000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_32);
      Instrument_32.insert(RepurchaseRate_32.getString());
      FIX::RepurchaseTerm RepurchaseTerm_32(290535583);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_32);
      Instrument_32.insert(RepurchaseTerm_32.getString());
      FIX::RestructuringType RestructuringType_32("STRING_MM");
      noQuoteEntries_0_1_0.set(RestructuringType_32);
      Instrument_32.insert(RestructuringType_32.getString());
      FIX::SecurityDesc SecurityDesc_32("STRING_806442384");
      noQuoteEntries_0_1_0.set(SecurityDesc_32);
      Instrument_32.insert(SecurityDesc_32.getString());
      FIX::SecurityExchange SecurityExchange_32("EXCHANGE_519847724");
      noQuoteEntries_0_1_0.set(SecurityExchange_32);
      Instrument_32.insert(SecurityExchange_32.getString());
      FIX::SecurityGroup SecurityGroup_32("STRING_1114880587");
      noQuoteEntries_0_1_0.set(SecurityGroup_32);
      Instrument_32.insert(SecurityGroup_32.getString());
      FIX::SecurityID SecurityID_32("STRING_78913168");
      noQuoteEntries_0_1_0.set(SecurityID_32);
      Instrument_32.insert(SecurityID_32.getString());
      FIX::SecurityIDSource SecurityIDSource_32("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityIDSource_32);
      Instrument_32.insert(SecurityIDSource_32.getString());
      FIX::SecurityStatus SecurityStatus_32("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityStatus_32);
      Instrument_32.insert(SecurityStatus_32.getString());
      FIX::SecuritySubType SecuritySubType_33("STRING_128533801");
      noQuoteEntries_0_1_0.set(SecuritySubType_33);
      Instrument_32.insert(SecuritySubType_33.getString());
      FIX::SecurityType SecurityType_34("STRING_CORP");
      noQuoteEntries_0_1_0.set(SecurityType_34);
      Instrument_32.insert(SecurityType_34.getString());
      FIX::Seniority Seniority_32("STRING_SR");
      noQuoteEntries_0_1_0.set(Seniority_32);
      Instrument_32.insert(Seniority_32.getString());
      FIX::SettlMethod SettlMethod_32('C');
      noQuoteEntries_0_1_0.set(SettlMethod_32);
      Instrument_32.insert(SettlMethod_32.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_32("STRING_1529181768");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_32);
      Instrument_32.insert(SettleOnOpenFlag_32.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_32("STRING_881802813");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_32);
      Instrument_32.insert(StateOrProvinceOfIssue_32.getString());
      FIX::StrikeCurrency StrikeCurrency_32("GBP");
      noQuoteEntries_0_1_0.set(StrikeCurrency_32);
      Instrument_32.insert(StrikeCurrency_32.getString());
      FIX::StrikeMultiplier StrikeMultiplier_32;
      StrikeMultiplier_32.setString("5478126");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_32);
      Instrument_32.insert(StrikeMultiplier_32.getString());
      FIX::StrikePrice StrikePrice_32;
      StrikePrice_32.setString("18073217");
      noQuoteEntries_0_1_0.set(StrikePrice_32);
      Instrument_32.insert(StrikePrice_32.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_32(1);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_32);
      Instrument_32.insert(StrikePriceBoundaryMethod_32.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_32;
      StrikePriceBoundaryPrecision_32.setString("58.250000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_32);
      Instrument_32.insert(StrikePriceBoundaryPrecision_32.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_32(3);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_32);
      Instrument_32.insert(StrikePriceDeterminationMethod_32.getString());
      FIX::StrikeValue StrikeValue_32;
      StrikeValue_32.setString("13097864");
      noQuoteEntries_0_1_0.set(StrikeValue_32);
      Instrument_32.insert(StrikeValue_32.getString());
      FIX::Symbol Symbol_32("STRING_690479118");
      noQuoteEntries_0_1_0.set(Symbol_32);
      Instrument_32.insert(Symbol_32.getString());
      FIX::SymbolSfx SymbolSfx_32("STRING_CD");
      noQuoteEntries_0_1_0.set(SymbolSfx_32);
      Instrument_32.insert(SymbolSfx_32.getString());
      FIX::TimeUnit TimeUnit_32("STRING_H");
      noQuoteEntries_0_1_0.set(TimeUnit_32);
      Instrument_32.insert(TimeUnit_32.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_32(3);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_32);
      Instrument_32.insert(UnderlyingPriceDeterminationMethod_32.getString());
      FIX::UnitOfMeasure UnitOfMeasure_32("STRING_Gal");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_32);
      Instrument_32.insert(UnitOfMeasure_32.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_32;
      UnitOfMeasureQty_32.setString("20841618");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_32);
      Instrument_32.insert(UnitOfMeasureQty_32.getString());
      FIX::ValuationMethod ValuationMethod_32("STRING_CDS");
      noQuoteEntries_0_1_0.set(ValuationMethod_32);
      Instrument_32.insert(ValuationMethod_32.getString());
      all_values.push_back(Instrument_32);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_65;
        FIX::ComplexEventCondition ComplexEventCondition_65(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventCondition_65.getString());
        FIX::ComplexEventPrice ComplexEventPrice_65;
        ComplexEventPrice_65.setString("17573807");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPrice_65.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_65(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceBoundaryMethod_65.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_65;
        ComplexEventPriceBoundaryPrecision_65.setString("41.030000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceBoundaryPrecision_65.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_65(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceTimeType_65.getString());
        FIX::ComplexEventType ComplexEventType_65(2);
        noComplexEvents_0_0_2_0.set(ComplexEventType_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventType_65.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_65;
        ComplexOptPayoutAmount_65.setString("861072");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexOptPayoutAmount_65.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_65);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_136;
          FIX::ComplexEventEndDate ComplexEventEndDate_136(FIX::UTCTIMESTAMP(0, 40, 3, 7, 9, 2012));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_136);
          ComplexEventDates_NoComplexEventDates_136.insert(ComplexEventEndDate_136.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_136(FIX::UTCTIMESTAMP(22, 31, 44, 13, 5, 2012));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_136);
          ComplexEventDates_NoComplexEventDates_136.insert(ComplexEventStartDate_136.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_136);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_274;
            FIX::ComplexEventEndTime ComplexEventEndTime_274(FIX::UTCTIMEONLY(1, 42, 40));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_274);
            ComplexEventTimes_NoComplexEventTimes_274.insert(ComplexEventEndTime_274.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_274(FIX::UTCTIMEONLY(8, 25, 42));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_274);
            ComplexEventTimes_NoComplexEventTimes_274.insert(ComplexEventStartTime_274.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_274);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_275;
            FIX::ComplexEventEndTime ComplexEventEndTime_275(FIX::UTCTIMEONLY(17, 39, 10));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_275);
            ComplexEventTimes_NoComplexEventTimes_275.insert(ComplexEventEndTime_275.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_275(FIX::UTCTIMEONLY(19, 21, 57));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_275);
            ComplexEventTimes_NoComplexEventTimes_275.insert(ComplexEventStartTime_275.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_275);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_276;
            FIX::ComplexEventEndTime ComplexEventEndTime_276(FIX::UTCTIMEONLY(22, 37, 51));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventEndTime_276);
            ComplexEventTimes_NoComplexEventTimes_276.insert(ComplexEventEndTime_276.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_276(FIX::UTCTIMEONLY(9, 19, 21));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventStartTime_276);
            ComplexEventTimes_NoComplexEventTimes_276.insert(ComplexEventStartTime_276.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_276);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_137;
          FIX::ComplexEventEndDate ComplexEventEndDate_137(FIX::UTCTIMESTAMP(2, 5, 20, 11, 5, 2011));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_137);
          ComplexEventDates_NoComplexEventDates_137.insert(ComplexEventEndDate_137.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_137(FIX::UTCTIMESTAMP(17, 35, 58, 1, 1, 2015));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_137);
          ComplexEventDates_NoComplexEventDates_137.insert(ComplexEventStartDate_137.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_137);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_277;
            FIX::ComplexEventEndTime ComplexEventEndTime_277(FIX::UTCTIMEONLY(9, 43, 5));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_277);
            ComplexEventTimes_NoComplexEventTimes_277.insert(ComplexEventEndTime_277.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_277(FIX::UTCTIMEONLY(6, 18, 4));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_277);
            ComplexEventTimes_NoComplexEventTimes_277.insert(ComplexEventStartTime_277.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_277);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_138;
          FIX::ComplexEventEndDate ComplexEventEndDate_138(FIX::UTCTIMESTAMP(20, 33, 49, 17, 11, 2012));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventEndDate_138);
          ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventEndDate_138.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_138(FIX::UTCTIMESTAMP(21, 43, 32, 22, 7, 2006));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventStartDate_138);
          ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventStartDate_138.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_138);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_278;
            FIX::ComplexEventEndTime ComplexEventEndTime_278(FIX::UTCTIMEONLY(21, 19, 49));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventEndTime_278);
            ComplexEventTimes_NoComplexEventTimes_278.insert(ComplexEventEndTime_278.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_278(FIX::UTCTIMEONLY(23, 5, 1));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventStartTime_278);
            ComplexEventTimes_NoComplexEventTimes_278.insert(ComplexEventStartTime_278.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_278);
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
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_60;
        FIX::EventDate EventDate_60("LOCALMKTDATE_427561086");
        noEvents_0_0_2_0.set(EventDate_60);
        EvntGrp_NoEvents_60.insert(EventDate_60.getString());
        FIX::EventPx EventPx_60;
        EventPx_60.setString("20410025");
        noEvents_0_0_2_0.set(EventPx_60);
        EvntGrp_NoEvents_60.insert(EventPx_60.getString());
        FIX::EventText EventText_60("STRING_2107450547");
        noEvents_0_0_2_0.set(EventText_60);
        EvntGrp_NoEvents_60.insert(EventText_60.getString());
        FIX::EventTime EventTime_60(FIX::UTCTIMESTAMP(7, 57, 17, 13, 7, 2014));
        noEvents_0_0_2_0.set(EventTime_60);
        EvntGrp_NoEvents_60.insert(EventTime_60.getString());
        FIX::EventType EventType_60(4);
        noEvents_0_0_2_0.set(EventType_60);
        EvntGrp_NoEvents_60.insert(EventType_60.getString());
        all_values.push_back(EvntGrp_NoEvents_60);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_58;
        FIX::InstrumentPartyID InstrumentPartyID_58("STRING_2066451432");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_58);
        InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyID_58.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_58('7');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_58);
        InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyIDSource_58.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_58(1484170162);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_58);
        InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyRole_58.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_58);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112;
          FIX::InstrumentPartySubID InstrumentPartySubID_112("STRING_1136163918");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_112);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubID_112.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_112(503532166);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_112);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubIDType_112.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113;
          FIX::InstrumentPartySubID InstrumentPartySubID_113("STRING_2134163627");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_113);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubID_113.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_113(805782352);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_113);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubIDType_113.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_59;
        FIX::InstrumentPartyID InstrumentPartyID_59("STRING_1827530146");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_59);
        InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyID_59.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_59('2');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_59);
        InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyIDSource_59.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_59(145979324);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_59);
        InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyRole_59.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_59);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114;
          FIX::InstrumentPartySubID InstrumentPartySubID_114("STRING_1022690022");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_114);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubID_114.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_114(981771153);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_114);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubIDType_114.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115;
          FIX::InstrumentPartySubID InstrumentPartySubID_115("STRING_1252900649");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_115);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubID_115.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_115(1194014429);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_115);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubIDType_115.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116;
          FIX::InstrumentPartySubID InstrumentPartySubID_116("STRING_162568350");
          noInstrumentPartySubIDs_0_0_1_3_2.set(InstrumentPartySubID_116);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubID_116.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_116(1260384990);
          noInstrumentPartySubIDs_0_0_1_3_2.set(InstrumentPartySubIDType_116);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubIDType_116.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_60;
        FIX::InstrumentPartyID InstrumentPartyID_60("STRING_1685943191");
        noInstrumentParties_0_0_2_2.set(InstrumentPartyID_60);
        InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyID_60.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_60('5');
        noInstrumentParties_0_0_2_2.set(InstrumentPartyIDSource_60);
        InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyIDSource_60.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_60(1153903927);
        noInstrumentParties_0_0_2_2.set(InstrumentPartyRole_60);
        InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyRole_60.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_60);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117;
          FIX::InstrumentPartySubID InstrumentPartySubID_117("STRING_1000990429");
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubID_117);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubID_117.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_117(1797567542);
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubIDType_117);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubIDType_117.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118;
          FIX::InstrumentPartySubID InstrumentPartySubID_118("STRING_307456179");
          noInstrumentPartySubIDs_0_0_2_3_1.set(InstrumentPartySubID_118);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubID_118.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_118(83264698);
          noInstrumentPartySubIDs_0_0_2_3_1.set(InstrumentPartySubIDType_118);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubIDType_118.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119;
          FIX::InstrumentPartySubID InstrumentPartySubID_119("STRING_2111693815");
          noInstrumentPartySubIDs_0_0_2_3_2.set(InstrumentPartySubID_119);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubID_119.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_119(1413730881);
          noInstrumentPartySubIDs_0_0_2_3_2.set(InstrumentPartySubIDType_119);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubIDType_119.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_55;
        FIX::SecurityAltID SecurityAltID_55("STRING_1867469250");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_55);
        SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltID_55.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_55("STRING_1433584389");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_55);
        SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltIDSource_55.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_55);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_64;
      FIX::SecurityXML SecurityXML_65("XMLDATA_1677216052");
      noQuoteEntries_0_1_0.set(SecurityXML_65);
      FIX::SecurityXMLLen SecurityXMLLen_32(421268038);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_32);
      FIX::SecurityXMLSchema SecurityXMLSchema_32("STRING_770270903");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_32);
      SecurityXML_64.insert(SecurityXMLSchema_32.getString());
      all_values.push_back(SecurityXML_64);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("8569127");
      noQuoteEntries_0_1_1.set(BidForwardPoints_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidForwardPoints_1.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("15574319");
      noQuoteEntries_0_1_1.set(BidForwardPoints2_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidForwardPoints2_1.getString());
      FIX::BidPx BidPx_1;
      BidPx_1.setString("12738030");
      noQuoteEntries_0_1_1.set(BidPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidPx_1.getString());
      FIX::BidSize BidSize_1;
      BidSize_1.setString("8435926");
      noQuoteEntries_0_1_1.set(BidSize_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidSize_1.getString());
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("2157306");
      noQuoteEntries_0_1_1.set(BidSpotRate_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidSpotRate_1.getString());
      FIX::BidYield BidYield_1;
      BidYield_1.setString("95.670000");
      noQuoteEntries_0_1_1.set(BidYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidYield_1.getString());
      FIX::BookingType BookingType_8(0);
      noQuoteEntries_0_1_1.set(BookingType_8);
      QuotEntryGrp_NoQuoteEntries_1.insert(BookingType_8.getString());
      FIX::Currency Currency_31("JPY");
      noQuoteEntries_0_1_1.set(Currency_31);
      QuotEntryGrp_NoQuoteEntries_1.insert(Currency_31.getString());
      FIX::MidPx MidPx_1;
      MidPx_1.setString("17505293");
      noQuoteEntries_0_1_1.set(MidPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(MidPx_1.getString());
      FIX::MidYield MidYield_1;
      MidYield_1.setString("11.380000");
      noQuoteEntries_0_1_1.set(MidYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(MidYield_1.getString());
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("5681769");
      noQuoteEntries_0_1_1.set(OfferForwardPoints_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferForwardPoints_1.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("7970601");
      noQuoteEntries_0_1_1.set(OfferForwardPoints2_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_1.getString());
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("15060494");
      noQuoteEntries_0_1_1.set(OfferPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferPx_1.getString());
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("18285619");
      noQuoteEntries_0_1_1.set(OfferSize_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferSize_1.getString());
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("3355196");
      noQuoteEntries_0_1_1.set(OfferSpotRate_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferSpotRate_1.getString());
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("89.250000");
      noQuoteEntries_0_1_1.set(OfferYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferYield_1.getString());
      FIX::OrdType OrdType_34('D');
      noQuoteEntries_0_1_1.set(OrdType_34);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrdType_34.getString());
      FIX::OrderCapacity OrderCapacity_9('I');
      noQuoteEntries_0_1_1.set(OrderCapacity_9);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderCapacity_9.getString());
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("9496857");
      noQuoteEntries_0_1_1.set(OrderQty2_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderQty2_2.getString());
      FIX::OrderRestrictions OrderRestrictions_6("MULTIPLECHARVALUE_A");
      noQuoteEntries_0_1_1.set(OrderRestrictions_6);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderRestrictions_6.getString());
      FIX::QuoteEntryID QuoteEntryID_4("STRING_141402304");
      noQuoteEntries_0_1_1.set(QuoteEntryID_4);
      QuotEntryGrp_NoQuoteEntries_1.insert(QuoteEntryID_4.getString());
      FIX::SettlDate SettlDate_24("LOCALMKTDATE_1032950405");
      noQuoteEntries_0_1_1.set(SettlDate_24);
      QuotEntryGrp_NoQuoteEntries_1.insert(SettlDate_24.getString());
      FIX::SettlDate2 SettlDate2_2("LOCALMKTDATE_449276322");
      noQuoteEntries_0_1_1.set(SettlDate2_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(SettlDate2_2.getString());
      FIX::TradingSessionID TradingSessionID_37("STRING_2");
      noQuoteEntries_0_1_1.set(TradingSessionID_37);
      QuotEntryGrp_NoQuoteEntries_1.insert(TradingSessionID_37.getString());
      FIX::TradingSessionSubID TradingSessionSubID_37("STRING_4");
      noQuoteEntries_0_1_1.set(TradingSessionSubID_37);
      QuotEntryGrp_NoQuoteEntries_1.insert(TradingSessionSubID_37.getString());
      FIX::TransactTime TransactTime_27(FIX::UTCTIMESTAMP(14, 30, 2, 25, 5, 2011));
      noQuoteEntries_0_1_1.set(TransactTime_27);
      QuotEntryGrp_NoQuoteEntries_1.insert(TransactTime_27.getString());
      FIX::ValidUntilTime ValidUntilTime_2(FIX::UTCTIMESTAMP(6, 12, 37, 14, 10, 2009));
      noQuoteEntries_0_1_1.set(ValidUntilTime_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(ValidUntilTime_2.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_1);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_63;
        FIX::EncodedLegIssuer EncodedLegIssuer_63("DATA_1921400055");
        noLegs_0_1_2_0.set(EncodedLegIssuer_63);
        InstrumentLeg_63.insert(EncodedLegIssuer_63.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_63(1575127150);
        noLegs_0_1_2_0.set(EncodedLegIssuerLen_63);
        InstrumentLeg_63.insert(EncodedLegIssuerLen_63.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_63("DATA_854414376");
        noLegs_0_1_2_0.set(EncodedLegSecurityDesc_63);
        InstrumentLeg_63.insert(EncodedLegSecurityDesc_63.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_63(1279965896);
        noLegs_0_1_2_0.set(EncodedLegSecurityDescLen_63);
        InstrumentLeg_63.insert(EncodedLegSecurityDescLen_63.getString());
        FIX::LegCFICode LegCFICode_63("STRING_1256205484");
        noLegs_0_1_2_0.set(LegCFICode_63);
        InstrumentLeg_63.insert(LegCFICode_63.getString());
        FIX::LegContractMultiplier LegContractMultiplier_63;
        LegContractMultiplier_63.setString("11899340");
        noLegs_0_1_2_0.set(LegContractMultiplier_63);
        InstrumentLeg_63.insert(LegContractMultiplier_63.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_63(1228661174);
        noLegs_0_1_2_0.set(LegContractMultiplierUnit_63);
        InstrumentLeg_63.insert(LegContractMultiplierUnit_63.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_63("MONTHYEAR_2091187744");
        noLegs_0_1_2_0.set(LegContractSettlMonth_63);
        InstrumentLeg_63.insert(LegContractSettlMonth_63.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_63("COUNTRY_1023880183");
        noLegs_0_1_2_0.set(LegCountryOfIssue_63);
        InstrumentLeg_63.insert(LegCountryOfIssue_63.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_63("LOCALMKTDATE_30863233");
        noLegs_0_1_2_0.set(LegCouponPaymentDate_63);
        InstrumentLeg_63.insert(LegCouponPaymentDate_63.getString());
        FIX::LegCouponRate LegCouponRate_63;
        LegCouponRate_63.setString("2.510000");
        noLegs_0_1_2_0.set(LegCouponRate_63);
        InstrumentLeg_63.insert(LegCouponRate_63.getString());
        FIX::LegCreditRating LegCreditRating_63("STRING_1165282487");
        noLegs_0_1_2_0.set(LegCreditRating_63);
        InstrumentLeg_63.insert(LegCreditRating_63.getString());
        FIX::LegCurrency LegCurrency_63("CHF");
        noLegs_0_1_2_0.set(LegCurrency_63);
        InstrumentLeg_63.insert(LegCurrency_63.getString());
        FIX::LegDatedDate LegDatedDate_63("LOCALMKTDATE_572932025");
        noLegs_0_1_2_0.set(LegDatedDate_63);
        InstrumentLeg_63.insert(LegDatedDate_63.getString());
        FIX::LegExerciseStyle LegExerciseStyle_63(1707528664);
        noLegs_0_1_2_0.set(LegExerciseStyle_63);
        InstrumentLeg_63.insert(LegExerciseStyle_63.getString());
        FIX::LegFactor LegFactor_63;
        LegFactor_63.setString("10473084");
        noLegs_0_1_2_0.set(LegFactor_63);
        InstrumentLeg_63.insert(LegFactor_63.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_63(1414165951);
        noLegs_0_1_2_0.set(LegFlowScheduleType_63);
        InstrumentLeg_63.insert(LegFlowScheduleType_63.getString());
        FIX::LegInstrRegistry LegInstrRegistry_63("STRING_1880976095");
        noLegs_0_1_2_0.set(LegInstrRegistry_63);
        InstrumentLeg_63.insert(LegInstrRegistry_63.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_63("LOCALMKTDATE_1637838460");
        noLegs_0_1_2_0.set(LegInterestAccrualDate_63);
        InstrumentLeg_63.insert(LegInterestAccrualDate_63.getString());
        FIX::LegIssueDate LegIssueDate_63("LOCALMKTDATE_878187133");
        noLegs_0_1_2_0.set(LegIssueDate_63);
        InstrumentLeg_63.insert(LegIssueDate_63.getString());
        FIX::LegIssuer LegIssuer_63("STRING_763852591");
        noLegs_0_1_2_0.set(LegIssuer_63);
        InstrumentLeg_63.insert(LegIssuer_63.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_63("STRING_1638316731");
        noLegs_0_1_2_0.set(LegLocaleOfIssue_63);
        InstrumentLeg_63.insert(LegLocaleOfIssue_63.getString());
        FIX::LegMaturityDate LegMaturityDate_63("LOCALMKTDATE_1616011383");
        noLegs_0_1_2_0.set(LegMaturityDate_63);
        InstrumentLeg_63.insert(LegMaturityDate_63.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_63("MONTHYEAR_490321781");
        noLegs_0_1_2_0.set(LegMaturityMonthYear_63);
        InstrumentLeg_63.insert(LegMaturityMonthYear_63.getString());
        FIX::LegMaturityTime LegMaturityTime_63("TZTIMEONLY_1854525663");
        noLegs_0_1_2_0.set(LegMaturityTime_63);
        InstrumentLeg_63.insert(LegMaturityTime_63.getString());
        FIX::LegOptAttribute LegOptAttribute_63('1');
        noLegs_0_1_2_0.set(LegOptAttribute_63);
        InstrumentLeg_63.insert(LegOptAttribute_63.getString());
        FIX::LegOptionRatio LegOptionRatio_63;
        LegOptionRatio_63.setString("9446303");
        noLegs_0_1_2_0.set(LegOptionRatio_63);
        InstrumentLeg_63.insert(LegOptionRatio_63.getString());
        FIX::LegPool LegPool_63("STRING_284960932");
        noLegs_0_1_2_0.set(LegPool_63);
        InstrumentLeg_63.insert(LegPool_63.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_63("STRING_19668064");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasure_63);
        InstrumentLeg_63.insert(LegPriceUnitOfMeasure_63.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_63;
        LegPriceUnitOfMeasureQty_63.setString("10019845");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasureQty_63);
        InstrumentLeg_63.insert(LegPriceUnitOfMeasureQty_63.getString());
        FIX::LegProduct LegProduct_63(58877339);
        noLegs_0_1_2_0.set(LegProduct_63);
        InstrumentLeg_63.insert(LegProduct_63.getString());
        FIX::LegPutOrCall LegPutOrCall_63(1594795215);
        noLegs_0_1_2_0.set(LegPutOrCall_63);
        InstrumentLeg_63.insert(LegPutOrCall_63.getString());
        FIX::LegRatioQty LegRatioQty_63;
        LegRatioQty_63.setString("18563989");
        noLegs_0_1_2_0.set(LegRatioQty_63);
        InstrumentLeg_63.insert(LegRatioQty_63.getString());
        FIX::LegRedemptionDate LegRedemptionDate_63("LOCALMKTDATE_1338843236");
        noLegs_0_1_2_0.set(LegRedemptionDate_63);
        InstrumentLeg_63.insert(LegRedemptionDate_63.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_63("STRING_703517051");
        noLegs_0_1_2_0.set(LegRepoCollateralSecurityType_63);
        InstrumentLeg_63.insert(LegRepoCollateralSecurityType_63.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_63;
        LegRepurchaseRate_63.setString("93.320000");
        noLegs_0_1_2_0.set(LegRepurchaseRate_63);
        InstrumentLeg_63.insert(LegRepurchaseRate_63.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_63(420020762);
        noLegs_0_1_2_0.set(LegRepurchaseTerm_63);
        InstrumentLeg_63.insert(LegRepurchaseTerm_63.getString());
        FIX::LegSecurityDesc LegSecurityDesc_63("STRING_647221147");
        noLegs_0_1_2_0.set(LegSecurityDesc_63);
        InstrumentLeg_63.insert(LegSecurityDesc_63.getString());
        FIX::LegSecurityExchange LegSecurityExchange_63("EXCHANGE_1922729516");
        noLegs_0_1_2_0.set(LegSecurityExchange_63);
        InstrumentLeg_63.insert(LegSecurityExchange_63.getString());
        FIX::LegSecurityID LegSecurityID_63("STRING_450883995");
        noLegs_0_1_2_0.set(LegSecurityID_63);
        InstrumentLeg_63.insert(LegSecurityID_63.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_63("STRING_1075991398");
        noLegs_0_1_2_0.set(LegSecurityIDSource_63);
        InstrumentLeg_63.insert(LegSecurityIDSource_63.getString());
        FIX::LegSecuritySubType LegSecuritySubType_63("STRING_940528355");
        noLegs_0_1_2_0.set(LegSecuritySubType_63);
        InstrumentLeg_63.insert(LegSecuritySubType_63.getString());
        FIX::LegSecurityType LegSecurityType_63("STRING_1514697633");
        noLegs_0_1_2_0.set(LegSecurityType_63);
        InstrumentLeg_63.insert(LegSecurityType_63.getString());
        FIX::LegSide LegSide_63('1');
        noLegs_0_1_2_0.set(LegSide_63);
        InstrumentLeg_63.insert(LegSide_63.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_63("STRING_1513460380");
        noLegs_0_1_2_0.set(LegStateOrProvinceOfIssue_63);
        InstrumentLeg_63.insert(LegStateOrProvinceOfIssue_63.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_63("EUR");
        noLegs_0_1_2_0.set(LegStrikeCurrency_63);
        InstrumentLeg_63.insert(LegStrikeCurrency_63.getString());
        FIX::LegStrikePrice LegStrikePrice_63;
        LegStrikePrice_63.setString("7801426");
        noLegs_0_1_2_0.set(LegStrikePrice_63);
        InstrumentLeg_63.insert(LegStrikePrice_63.getString());
        FIX::LegSymbol LegSymbol_63("STRING_808235097");
        noLegs_0_1_2_0.set(LegSymbol_63);
        InstrumentLeg_63.insert(LegSymbol_63.getString());
        FIX::LegSymbolSfx LegSymbolSfx_63("STRING_344217633");
        noLegs_0_1_2_0.set(LegSymbolSfx_63);
        InstrumentLeg_63.insert(LegSymbolSfx_63.getString());
        FIX::LegTimeUnit LegTimeUnit_63("STRING_1658329817");
        noLegs_0_1_2_0.set(LegTimeUnit_63);
        InstrumentLeg_63.insert(LegTimeUnit_63.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_63("STRING_1572087688");
        noLegs_0_1_2_0.set(LegUnitOfMeasure_63);
        InstrumentLeg_63.insert(LegUnitOfMeasure_63.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_63;
        LegUnitOfMeasureQty_63.setString("19825343");
        noLegs_0_1_2_0.set(LegUnitOfMeasureQty_63);
        InstrumentLeg_63.insert(LegUnitOfMeasureQty_63.getString());
        all_values.push_back(InstrumentLeg_63);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_122;
          FIX::LegSecurityAltID LegSecurityAltID_122("STRING_2062409470");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltID_122);
          LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltID_122.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_122("STRING_1689576379");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltIDSource_122);
          LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltIDSource_122.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_122);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_33;
      FIX::AttachmentPoint AttachmentPoint_33;
      AttachmentPoint_33.setString("54.570000");
      noQuoteEntries_0_1_1.set(AttachmentPoint_33);
      Instrument_33.insert(AttachmentPoint_33.getString());
      FIX::CFICode CFICode_33("STRING_859556130");
      noQuoteEntries_0_1_1.set(CFICode_33);
      Instrument_33.insert(CFICode_33.getString());
      FIX::CPProgram CPProgram_33(99);
      noQuoteEntries_0_1_1.set(CPProgram_33);
      Instrument_33.insert(CPProgram_33.getString());
      FIX::CPRegType CPRegType_33("STRING_159243522");
      noQuoteEntries_0_1_1.set(CPRegType_33);
      Instrument_33.insert(CPRegType_33.getString());
      FIX::CapPrice CapPrice_33;
      CapPrice_33.setString("18615406");
      noQuoteEntries_0_1_1.set(CapPrice_33);
      Instrument_33.insert(CapPrice_33.getString());
      FIX::ContractMultiplier ContractMultiplier_33;
      ContractMultiplier_33.setString("20334146");
      noQuoteEntries_0_1_1.set(ContractMultiplier_33);
      Instrument_33.insert(ContractMultiplier_33.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_33(0);
      noQuoteEntries_0_1_1.set(ContractMultiplierUnit_33);
      Instrument_33.insert(ContractMultiplierUnit_33.getString());
      FIX::ContractSettlMonth ContractSettlMonth_33("MONTHYEAR_1570455948");
      noQuoteEntries_0_1_1.set(ContractSettlMonth_33);
      Instrument_33.insert(ContractSettlMonth_33.getString());
      FIX::CountryOfIssue CountryOfIssue_33("COUNTRY_1224774238");
      noQuoteEntries_0_1_1.set(CountryOfIssue_33);
      Instrument_33.insert(CountryOfIssue_33.getString());
      FIX::CouponPaymentDate CouponPaymentDate_33("LOCALMKTDATE_310072140");
      noQuoteEntries_0_1_1.set(CouponPaymentDate_33);
      Instrument_33.insert(CouponPaymentDate_33.getString());
      FIX::CouponRate CouponRate_33;
      CouponRate_33.setString("16.330000");
      noQuoteEntries_0_1_1.set(CouponRate_33);
      Instrument_33.insert(CouponRate_33.getString());
      FIX::CreditRating CreditRating_33("STRING_1644795000");
      noQuoteEntries_0_1_1.set(CreditRating_33);
      Instrument_33.insert(CreditRating_33.getString());
      FIX::DatedDate DatedDate_33("LOCALMKTDATE_957293287");
      noQuoteEntries_0_1_1.set(DatedDate_33);
      Instrument_33.insert(DatedDate_33.getString());
      FIX::DetachmentPoint DetachmentPoint_33;
      DetachmentPoint_33.setString("75.010000");
      noQuoteEntries_0_1_1.set(DetachmentPoint_33);
      Instrument_33.insert(DetachmentPoint_33.getString());
      FIX::EncodedIssuer EncodedIssuer_33("DATA_2095678995");
      noQuoteEntries_0_1_1.set(EncodedIssuer_33);
      Instrument_33.insert(EncodedIssuer_33.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_33(2033284686);
      noQuoteEntries_0_1_1.set(EncodedIssuerLen_33);
      Instrument_33.insert(EncodedIssuerLen_33.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_33("DATA_1037595856");
      noQuoteEntries_0_1_1.set(EncodedSecurityDesc_33);
      Instrument_33.insert(EncodedSecurityDesc_33.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_33(1462892981);
      noQuoteEntries_0_1_1.set(EncodedSecurityDescLen_33);
      Instrument_33.insert(EncodedSecurityDescLen_33.getString());
      FIX::ExerciseStyle ExerciseStyle_33(2);
      noQuoteEntries_0_1_1.set(ExerciseStyle_33);
      Instrument_33.insert(ExerciseStyle_33.getString());
      FIX::Factor Factor_33;
      Factor_33.setString("4035725");
      noQuoteEntries_0_1_1.set(Factor_33);
      Instrument_33.insert(Factor_33.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_33(false);
      noQuoteEntries_0_1_1.set(FlexProductEligibilityIndicator_33);
      Instrument_33.insert(FlexProductEligibilityIndicator_33.getString());
      FIX::FlexibleIndicator FlexibleIndicator_33(true);
      noQuoteEntries_0_1_1.set(FlexibleIndicator_33);
      Instrument_33.insert(FlexibleIndicator_33.getString());
      FIX::FloorPrice FloorPrice_33;
      FloorPrice_33.setString("11837152");
      noQuoteEntries_0_1_1.set(FloorPrice_33);
      Instrument_33.insert(FloorPrice_33.getString());
      FIX::FlowScheduleType FlowScheduleType_33(0);
      noQuoteEntries_0_1_1.set(FlowScheduleType_33);
      Instrument_33.insert(FlowScheduleType_33.getString());
      FIX::InstrRegistry InstrRegistry_33("STRING_890435815");
      noQuoteEntries_0_1_1.set(InstrRegistry_33);
      Instrument_33.insert(InstrRegistry_33.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_33('6');
      noQuoteEntries_0_1_1.set(InstrmtAssignmentMethod_33);
      Instrument_33.insert(InstrmtAssignmentMethod_33.getString());
      FIX::InterestAccrualDate InterestAccrualDate_33("LOCALMKTDATE_622991120");
      noQuoteEntries_0_1_1.set(InterestAccrualDate_33);
      Instrument_33.insert(InterestAccrualDate_33.getString());
      FIX::IssueDate IssueDate_33("LOCALMKTDATE_725486531");
      noQuoteEntries_0_1_1.set(IssueDate_33);
      Instrument_33.insert(IssueDate_33.getString());
      FIX::Issuer Issuer_33("STRING_1821418994");
      noQuoteEntries_0_1_1.set(Issuer_33);
      Instrument_33.insert(Issuer_33.getString());
      FIX::ListMethod ListMethod_33(0);
      noQuoteEntries_0_1_1.set(ListMethod_33);
      Instrument_33.insert(ListMethod_33.getString());
      FIX::LocaleOfIssue LocaleOfIssue_33("STRING_267579262");
      noQuoteEntries_0_1_1.set(LocaleOfIssue_33);
      Instrument_33.insert(LocaleOfIssue_33.getString());
      FIX::MaturityDate MaturityDate_33("LOCALMKTDATE_1960994452");
      noQuoteEntries_0_1_1.set(MaturityDate_33);
      Instrument_33.insert(MaturityDate_33.getString());
      FIX::MaturityMonthYear MaturityMonthYear_33("MONTHYEAR_1397473072");
      noQuoteEntries_0_1_1.set(MaturityMonthYear_33);
      Instrument_33.insert(MaturityMonthYear_33.getString());
      FIX::MaturityTime MaturityTime_33("TZTIMEONLY_94632925");
      noQuoteEntries_0_1_1.set(MaturityTime_33);
      Instrument_33.insert(MaturityTime_33.getString());
      FIX::MinPriceIncrement MinPriceIncrement_33;
      MinPriceIncrement_33.setString("21202379");
      noQuoteEntries_0_1_1.set(MinPriceIncrement_33);
      Instrument_33.insert(MinPriceIncrement_33.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_33;
      MinPriceIncrementAmount_33.setString("11115300");
      noQuoteEntries_0_1_1.set(MinPriceIncrementAmount_33);
      Instrument_33.insert(MinPriceIncrementAmount_33.getString());
      FIX::NTPositionLimit NTPositionLimit_33(2128047576);
      noQuoteEntries_0_1_1.set(NTPositionLimit_33);
      Instrument_33.insert(NTPositionLimit_33.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_33;
      NotionalPercentageOutstanding_33.setString("30.630000");
      noQuoteEntries_0_1_1.set(NotionalPercentageOutstanding_33);
      Instrument_33.insert(NotionalPercentageOutstanding_33.getString());
      FIX::OptAttribute OptAttribute_33('5');
      noQuoteEntries_0_1_1.set(OptAttribute_33);
      Instrument_33.insert(OptAttribute_33.getString());
      FIX::OptPayoutAmount OptPayoutAmount_33;
      OptPayoutAmount_33.setString("12053381");
      noQuoteEntries_0_1_1.set(OptPayoutAmount_33);
      Instrument_33.insert(OptPayoutAmount_33.getString());
      FIX::OptPayoutType OptPayoutType_33(3);
      noQuoteEntries_0_1_1.set(OptPayoutType_33);
      Instrument_33.insert(OptPayoutType_33.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_33;
      OriginalNotionalPercentageOutstanding_33.setString("40.330000");
      noQuoteEntries_0_1_1.set(OriginalNotionalPercentageOutstanding_33);
      Instrument_33.insert(OriginalNotionalPercentageOutstanding_33.getString());
      FIX::Pool Pool_33("STRING_702649519");
      noQuoteEntries_0_1_1.set(Pool_33);
      Instrument_33.insert(Pool_33.getString());
      FIX::PositionLimit PositionLimit_33(846674842);
      noQuoteEntries_0_1_1.set(PositionLimit_33);
      Instrument_33.insert(PositionLimit_33.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_33("STRING_INT");
      noQuoteEntries_0_1_1.set(PriceQuoteMethod_33);
      Instrument_33.insert(PriceQuoteMethod_33.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_33("STRING_650844866");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasure_33);
      Instrument_33.insert(PriceUnitOfMeasure_33.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_33;
      PriceUnitOfMeasureQty_33.setString("7324758");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasureQty_33);
      Instrument_33.insert(PriceUnitOfMeasureQty_33.getString());
      FIX::Product Product_35(3);
      noQuoteEntries_0_1_1.set(Product_35);
      Instrument_33.insert(Product_35.getString());
      FIX::ProductComplex ProductComplex_33("STRING_2113737847");
      noQuoteEntries_0_1_1.set(ProductComplex_33);
      Instrument_33.insert(ProductComplex_33.getString());
      FIX::PutOrCall PutOrCall_33(0);
      noQuoteEntries_0_1_1.set(PutOrCall_33);
      Instrument_33.insert(PutOrCall_33.getString());
      FIX::RedemptionDate RedemptionDate_33("LOCALMKTDATE_247076331");
      noQuoteEntries_0_1_1.set(RedemptionDate_33);
      Instrument_33.insert(RedemptionDate_33.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_33("STRING_356406182");
      noQuoteEntries_0_1_1.set(RepoCollateralSecurityType_33);
      Instrument_33.insert(RepoCollateralSecurityType_33.getString());
      FIX::RepurchaseRate RepurchaseRate_33;
      RepurchaseRate_33.setString("94.240000");
      noQuoteEntries_0_1_1.set(RepurchaseRate_33);
      Instrument_33.insert(RepurchaseRate_33.getString());
      FIX::RepurchaseTerm RepurchaseTerm_33(1430791604);
      noQuoteEntries_0_1_1.set(RepurchaseTerm_33);
      Instrument_33.insert(RepurchaseTerm_33.getString());
      FIX::RestructuringType RestructuringType_33("STRING_MM");
      noQuoteEntries_0_1_1.set(RestructuringType_33);
      Instrument_33.insert(RestructuringType_33.getString());
      FIX::SecurityDesc SecurityDesc_33("STRING_1861485240");
      noQuoteEntries_0_1_1.set(SecurityDesc_33);
      Instrument_33.insert(SecurityDesc_33.getString());
      FIX::SecurityExchange SecurityExchange_33("EXCHANGE_2125353046");
      noQuoteEntries_0_1_1.set(SecurityExchange_33);
      Instrument_33.insert(SecurityExchange_33.getString());
      FIX::SecurityGroup SecurityGroup_33("STRING_30300735");
      noQuoteEntries_0_1_1.set(SecurityGroup_33);
      Instrument_33.insert(SecurityGroup_33.getString());
      FIX::SecurityID SecurityID_33("STRING_439488123");
      noQuoteEntries_0_1_1.set(SecurityID_33);
      Instrument_33.insert(SecurityID_33.getString());
      FIX::SecurityIDSource SecurityIDSource_33("STRING_2");
      noQuoteEntries_0_1_1.set(SecurityIDSource_33);
      Instrument_33.insert(SecurityIDSource_33.getString());
      FIX::SecurityStatus SecurityStatus_33("STRING_2");
      noQuoteEntries_0_1_1.set(SecurityStatus_33);
      Instrument_33.insert(SecurityStatus_33.getString());
      FIX::SecuritySubType SecuritySubType_34("STRING_707067386");
      noQuoteEntries_0_1_1.set(SecuritySubType_34);
      Instrument_33.insert(SecuritySubType_34.getString());
      FIX::SecurityType SecurityType_35("STRING_GO");
      noQuoteEntries_0_1_1.set(SecurityType_35);
      Instrument_33.insert(SecurityType_35.getString());
      FIX::Seniority Seniority_33("STRING_SD");
      noQuoteEntries_0_1_1.set(Seniority_33);
      Instrument_33.insert(Seniority_33.getString());
      FIX::SettlMethod SettlMethod_33('P');
      noQuoteEntries_0_1_1.set(SettlMethod_33);
      Instrument_33.insert(SettlMethod_33.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_33("STRING_1585553523");
      noQuoteEntries_0_1_1.set(SettleOnOpenFlag_33);
      Instrument_33.insert(SettleOnOpenFlag_33.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_33("STRING_929737201");
      noQuoteEntries_0_1_1.set(StateOrProvinceOfIssue_33);
      Instrument_33.insert(StateOrProvinceOfIssue_33.getString());
      FIX::StrikeCurrency StrikeCurrency_33("USD");
      noQuoteEntries_0_1_1.set(StrikeCurrency_33);
      Instrument_33.insert(StrikeCurrency_33.getString());
      FIX::StrikeMultiplier StrikeMultiplier_33;
      StrikeMultiplier_33.setString("14642396");
      noQuoteEntries_0_1_1.set(StrikeMultiplier_33);
      Instrument_33.insert(StrikeMultiplier_33.getString());
      FIX::StrikePrice StrikePrice_33;
      StrikePrice_33.setString("19876024");
      noQuoteEntries_0_1_1.set(StrikePrice_33);
      Instrument_33.insert(StrikePrice_33.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_33(4);
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryMethod_33);
      Instrument_33.insert(StrikePriceBoundaryMethod_33.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_33;
      StrikePriceBoundaryPrecision_33.setString("99.860000");
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryPrecision_33);
      Instrument_33.insert(StrikePriceBoundaryPrecision_33.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_33(2);
      noQuoteEntries_0_1_1.set(StrikePriceDeterminationMethod_33);
      Instrument_33.insert(StrikePriceDeterminationMethod_33.getString());
      FIX::StrikeValue StrikeValue_33;
      StrikeValue_33.setString("19009193");
      noQuoteEntries_0_1_1.set(StrikeValue_33);
      Instrument_33.insert(StrikeValue_33.getString());
      FIX::Symbol Symbol_33("STRING_1126471520");
      noQuoteEntries_0_1_1.set(Symbol_33);
      Instrument_33.insert(Symbol_33.getString());
      FIX::SymbolSfx SymbolSfx_33("STRING_WI");
      noQuoteEntries_0_1_1.set(SymbolSfx_33);
      Instrument_33.insert(SymbolSfx_33.getString());
      FIX::TimeUnit TimeUnit_33("STRING_S");
      noQuoteEntries_0_1_1.set(TimeUnit_33);
      Instrument_33.insert(TimeUnit_33.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_33(4);
      noQuoteEntries_0_1_1.set(UnderlyingPriceDeterminationMethod_33);
      Instrument_33.insert(UnderlyingPriceDeterminationMethod_33.getString());
      FIX::UnitOfMeasure UnitOfMeasure_33("STRING_USD");
      noQuoteEntries_0_1_1.set(UnitOfMeasure_33);
      Instrument_33.insert(UnitOfMeasure_33.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_33;
      UnitOfMeasureQty_33.setString("9107428");
      noQuoteEntries_0_1_1.set(UnitOfMeasureQty_33);
      Instrument_33.insert(UnitOfMeasureQty_33.getString());
      FIX::ValuationMethod ValuationMethod_33("STRING_CDSD");
      noQuoteEntries_0_1_1.set(ValuationMethod_33);
      Instrument_33.insert(ValuationMethod_33.getString());
      all_values.push_back(Instrument_33);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_66;
        FIX::ComplexEventCondition ComplexEventCondition_66(1);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventCondition_66.getString());
        FIX::ComplexEventPrice ComplexEventPrice_66;
        ComplexEventPrice_66.setString("5003595");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPrice_66.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_66(1);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceBoundaryMethod_66.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_66;
        ComplexEventPriceBoundaryPrecision_66.setString("38.260000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceBoundaryPrecision_66.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_66(3);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceTimeType_66.getString());
        FIX::ComplexEventType ComplexEventType_66(3);
        noComplexEvents_0_1_2_0.set(ComplexEventType_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventType_66.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_66;
        ComplexOptPayoutAmount_66.setString("20352819");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexOptPayoutAmount_66.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_66);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_139;
          FIX::ComplexEventEndDate ComplexEventEndDate_139(FIX::UTCTIMESTAMP(8, 51, 34, 3, 11, 2010));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_139);
          ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventEndDate_139.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_139(FIX::UTCTIMESTAMP(8, 49, 57, 1, 5, 2004));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_139);
          ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventStartDate_139.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_139);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_279;
            FIX::ComplexEventEndTime ComplexEventEndTime_279(FIX::UTCTIMEONLY(9, 25, 51));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_279);
            ComplexEventTimes_NoComplexEventTimes_279.insert(ComplexEventEndTime_279.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_279(FIX::UTCTIMEONLY(7, 58, 50));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_279);
            ComplexEventTimes_NoComplexEventTimes_279.insert(ComplexEventStartTime_279.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_279);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_280;
            FIX::ComplexEventEndTime ComplexEventEndTime_280(FIX::UTCTIMEONLY(13, 2, 40));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_280);
            ComplexEventTimes_NoComplexEventTimes_280.insert(ComplexEventEndTime_280.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_280(FIX::UTCTIMEONLY(13, 22, 33));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_280);
            ComplexEventTimes_NoComplexEventTimes_280.insert(ComplexEventStartTime_280.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_280);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_281;
            FIX::ComplexEventEndTime ComplexEventEndTime_281(FIX::UTCTIMEONLY(18, 16, 8));
            noComplexEventTimes_0_1_0_0_4_2.set(ComplexEventEndTime_281);
            ComplexEventTimes_NoComplexEventTimes_281.insert(ComplexEventEndTime_281.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_281(FIX::UTCTIMEONLY(19, 36, 32));
            noComplexEventTimes_0_1_0_0_4_2.set(ComplexEventStartTime_281);
            ComplexEventTimes_NoComplexEventTimes_281.insert(ComplexEventStartTime_281.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_281);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_140;
          FIX::ComplexEventEndDate ComplexEventEndDate_140(FIX::UTCTIMESTAMP(13, 21, 21, 5, 8, 2006));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_140);
          ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventEndDate_140.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_140(FIX::UTCTIMESTAMP(9, 47, 45, 21, 7, 2011));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_140);
          ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventStartDate_140.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_140);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_282;
            FIX::ComplexEventEndTime ComplexEventEndTime_282(FIX::UTCTIMEONLY(12, 9, 27));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_282);
            ComplexEventTimes_NoComplexEventTimes_282.insert(ComplexEventEndTime_282.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_282(FIX::UTCTIMEONLY(14, 41, 0));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_282);
            ComplexEventTimes_NoComplexEventTimes_282.insert(ComplexEventStartTime_282.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_282);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_141;
          FIX::ComplexEventEndDate ComplexEventEndDate_141(FIX::UTCTIMESTAMP(3, 8, 28, 9, 4, 2008));
          noComplexEventDates_0_1_0_3_2.set(ComplexEventEndDate_141);
          ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventEndDate_141.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_141(FIX::UTCTIMESTAMP(19, 13, 3, 0, 12, 2002));
          noComplexEventDates_0_1_0_3_2.set(ComplexEventStartDate_141);
          ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventStartDate_141.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_141);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_283;
            FIX::ComplexEventEndTime ComplexEventEndTime_283(FIX::UTCTIMEONLY(11, 17, 10));
            noComplexEventTimes_0_1_0_2_4_0.set(ComplexEventEndTime_283);
            ComplexEventTimes_NoComplexEventTimes_283.insert(ComplexEventEndTime_283.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_283(FIX::UTCTIMEONLY(23, 46, 44));
            noComplexEventTimes_0_1_0_2_4_0.set(ComplexEventStartTime_283);
            ComplexEventTimes_NoComplexEventTimes_283.insert(ComplexEventStartTime_283.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_283);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
        ComplexEventPrice_67.setString("6363407");
        noComplexEvents_0_1_2_1.set(ComplexEventPrice_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPrice_67.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_67(5);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryMethod_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryMethod_67.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_67;
        ComplexEventPriceBoundaryPrecision_67.setString("60.580000");
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryPrecision_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryPrecision_67.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_67(3);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceTimeType_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceTimeType_67.getString());
        FIX::ComplexEventType ComplexEventType_67(9);
        noComplexEvents_0_1_2_1.set(ComplexEventType_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventType_67.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_67;
        ComplexOptPayoutAmount_67.setString("4135331");
        noComplexEvents_0_1_2_1.set(ComplexOptPayoutAmount_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexOptPayoutAmount_67.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_67);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_142;
          FIX::ComplexEventEndDate ComplexEventEndDate_142(FIX::UTCTIMESTAMP(7, 38, 4, 4, 10, 2006));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventEndDate_142);
          ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventEndDate_142.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_142(FIX::UTCTIMESTAMP(20, 14, 48, 4, 6, 2009));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventStartDate_142);
          ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventStartDate_142.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_142);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_284;
            FIX::ComplexEventEndTime ComplexEventEndTime_284(FIX::UTCTIMEONLY(2, 7, 36));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventEndTime_284);
            ComplexEventTimes_NoComplexEventTimes_284.insert(ComplexEventEndTime_284.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_284(FIX::UTCTIMEONLY(22, 22, 16));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventStartTime_284);
            ComplexEventTimes_NoComplexEventTimes_284.insert(ComplexEventStartTime_284.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_284);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_285;
            FIX::ComplexEventEndTime ComplexEventEndTime_285(FIX::UTCTIMEONLY(5, 2, 19));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventEndTime_285);
            ComplexEventTimes_NoComplexEventTimes_285.insert(ComplexEventEndTime_285.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_285(FIX::UTCTIMEONLY(22, 10, 16));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventStartTime_285);
            ComplexEventTimes_NoComplexEventTimes_285.insert(ComplexEventStartTime_285.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_285);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_286;
            FIX::ComplexEventEndTime ComplexEventEndTime_286(FIX::UTCTIMEONLY(21, 46, 15));
            noComplexEventTimes_0_1_1_0_4_2.set(ComplexEventEndTime_286);
            ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventEndTime_286.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_286(FIX::UTCTIMEONLY(11, 16, 55));
            noComplexEventTimes_0_1_1_0_4_2.set(ComplexEventStartTime_286);
            ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventStartTime_286.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_286);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_2);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_143;
          FIX::ComplexEventEndDate ComplexEventEndDate_143(FIX::UTCTIMESTAMP(18, 35, 52, 11, 3, 2005));
          noComplexEventDates_0_1_1_3_1.set(ComplexEventEndDate_143);
          ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventEndDate_143.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_143(FIX::UTCTIMESTAMP(9, 42, 17, 20, 6, 2002));
          noComplexEventDates_0_1_1_3_1.set(ComplexEventStartDate_143);
          ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventStartDate_143.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_143);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_287;
            FIX::ComplexEventEndTime ComplexEventEndTime_287(FIX::UTCTIMEONLY(13, 2, 13));
            noComplexEventTimes_0_1_1_1_4_0.set(ComplexEventEndTime_287);
            ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventEndTime_287.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_287(FIX::UTCTIMEONLY(5, 15, 43));
            noComplexEventTimes_0_1_1_1_4_0.set(ComplexEventStartTime_287);
            ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventStartTime_287.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_287);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_144;
          FIX::ComplexEventEndDate ComplexEventEndDate_144(FIX::UTCTIMESTAMP(1, 21, 55, 18, 10, 2017));
          noComplexEventDates_0_1_1_3_2.set(ComplexEventEndDate_144);
          ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventEndDate_144.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_144(FIX::UTCTIMESTAMP(21, 33, 37, 9, 1, 2007));
          noComplexEventDates_0_1_1_3_2.set(ComplexEventStartDate_144);
          ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventStartDate_144.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_144);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_288;
            FIX::ComplexEventEndTime ComplexEventEndTime_288(FIX::UTCTIMEONLY(4, 59, 39));
            noComplexEventTimes_0_1_1_2_4_0.set(ComplexEventEndTime_288);
            ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventEndTime_288.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_288(FIX::UTCTIMEONLY(20, 11, 53));
            noComplexEventTimes_0_1_1_2_4_0.set(ComplexEventStartTime_288);
            ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventStartTime_288.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_288);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_2.addGroup(noComplexEventTimes_0_1_1_2_4_0);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_61;
        FIX::EventDate EventDate_61("LOCALMKTDATE_729222712");
        noEvents_0_1_2_0.set(EventDate_61);
        EvntGrp_NoEvents_61.insert(EventDate_61.getString());
        FIX::EventPx EventPx_61;
        EventPx_61.setString("16805267");
        noEvents_0_1_2_0.set(EventPx_61);
        EvntGrp_NoEvents_61.insert(EventPx_61.getString());
        FIX::EventText EventText_61("STRING_721029403");
        noEvents_0_1_2_0.set(EventText_61);
        EvntGrp_NoEvents_61.insert(EventText_61.getString());
        FIX::EventTime EventTime_61(FIX::UTCTIMESTAMP(5, 58, 3, 9, 12, 2010));
        noEvents_0_1_2_0.set(EventTime_61);
        EvntGrp_NoEvents_61.insert(EventTime_61.getString());
        FIX::EventType EventType_61(5);
        noEvents_0_1_2_0.set(EventType_61);
        EvntGrp_NoEvents_61.insert(EventType_61.getString());
        all_values.push_back(EvntGrp_NoEvents_61);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_62;
        FIX::EventDate EventDate_62("LOCALMKTDATE_377180298");
        noEvents_0_1_2_1.set(EventDate_62);
        EvntGrp_NoEvents_62.insert(EventDate_62.getString());
        FIX::EventPx EventPx_62;
        EventPx_62.setString("15415189");
        noEvents_0_1_2_1.set(EventPx_62);
        EvntGrp_NoEvents_62.insert(EventPx_62.getString());
        FIX::EventText EventText_62("STRING_1819276556");
        noEvents_0_1_2_1.set(EventText_62);
        EvntGrp_NoEvents_62.insert(EventText_62.getString());
        FIX::EventTime EventTime_62(FIX::UTCTIMESTAMP(10, 21, 48, 20, 11, 2008));
        noEvents_0_1_2_1.set(EventTime_62);
        EvntGrp_NoEvents_62.insert(EventTime_62.getString());
        FIX::EventType EventType_62(5);
        noEvents_0_1_2_1.set(EventType_62);
        EvntGrp_NoEvents_62.insert(EventType_62.getString());
        all_values.push_back(EvntGrp_NoEvents_62);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_63;
        FIX::EventDate EventDate_63("LOCALMKTDATE_1594083339");
        noEvents_0_1_2_2.set(EventDate_63);
        EvntGrp_NoEvents_63.insert(EventDate_63.getString());
        FIX::EventPx EventPx_63;
        EventPx_63.setString("17544652");
        noEvents_0_1_2_2.set(EventPx_63);
        EvntGrp_NoEvents_63.insert(EventPx_63.getString());
        FIX::EventText EventText_63("STRING_999179075");
        noEvents_0_1_2_2.set(EventText_63);
        EvntGrp_NoEvents_63.insert(EventText_63.getString());
        FIX::EventTime EventTime_63(FIX::UTCTIMESTAMP(17, 19, 21, 7, 2, 2001));
        noEvents_0_1_2_2.set(EventTime_63);
        EvntGrp_NoEvents_63.insert(EventTime_63.getString());
        FIX::EventType EventType_63(16);
        noEvents_0_1_2_2.set(EventType_63);
        EvntGrp_NoEvents_63.insert(EventType_63.getString());
        all_values.push_back(EvntGrp_NoEvents_63);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_61;
        FIX::InstrumentPartyID InstrumentPartyID_61("STRING_117725545");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_61);
        InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyID_61.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_61('6');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_61);
        InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyIDSource_61.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_61(562264583);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_61);
        InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyRole_61.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_61);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120;
          FIX::InstrumentPartySubID InstrumentPartySubID_120("STRING_2145922609");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_120);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubID_120.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_120(2063028094);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_120);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubIDType_120.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121;
          FIX::InstrumentPartySubID InstrumentPartySubID_121("STRING_2061631064");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_121);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubID_121.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_121(302706205);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_121);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubIDType_121.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_62;
        FIX::InstrumentPartyID InstrumentPartyID_62("STRING_292724744");
        noInstrumentParties_0_1_2_1.set(InstrumentPartyID_62);
        InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyID_62.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_62('1');
        noInstrumentParties_0_1_2_1.set(InstrumentPartyIDSource_62);
        InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyIDSource_62.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_62(2121982761);
        noInstrumentParties_0_1_2_1.set(InstrumentPartyRole_62);
        InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyRole_62.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_62);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122;
          FIX::InstrumentPartySubID InstrumentPartySubID_122("STRING_1231476664");
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubID_122);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubID_122.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_122(281621975);
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubIDType_122);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubIDType_122.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123;
          FIX::InstrumentPartySubID InstrumentPartySubID_123("STRING_2107163572");
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubID_123);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123.insert(InstrumentPartySubID_123.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_123(840751704);
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubIDType_123);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123.insert(InstrumentPartySubIDType_123.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_63;
        FIX::InstrumentPartyID InstrumentPartyID_63("STRING_952503345");
        noInstrumentParties_0_1_2_2.set(InstrumentPartyID_63);
        InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyID_63.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_63('5');
        noInstrumentParties_0_1_2_2.set(InstrumentPartyIDSource_63);
        InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyIDSource_63.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_63(440732521);
        noInstrumentParties_0_1_2_2.set(InstrumentPartyRole_63);
        InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyRole_63.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_63);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124;
          FIX::InstrumentPartySubID InstrumentPartySubID_124("STRING_188934321");
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubID_124);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124.insert(InstrumentPartySubID_124.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_124(1439911596);
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubIDType_124);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124.insert(InstrumentPartySubIDType_124.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125;
          FIX::InstrumentPartySubID InstrumentPartySubID_125("STRING_143226147");
          noInstrumentPartySubIDs_0_1_2_3_1.set(InstrumentPartySubID_125);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125.insert(InstrumentPartySubID_125.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_125(715496594);
          noInstrumentPartySubIDs_0_1_2_3_1.set(InstrumentPartySubIDType_125);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125.insert(InstrumentPartySubIDType_125.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_56;
        FIX::SecurityAltID SecurityAltID_56("STRING_1339755108");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_56);
        SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltID_56.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_56("STRING_1292462221");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_56);
        SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltIDSource_56.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_56);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_66;
      FIX::SecurityXML SecurityXML_67("XMLDATA_2139708937");
      noQuoteEntries_0_1_1.set(SecurityXML_67);
      FIX::SecurityXMLLen SecurityXMLLen_33(1118023134);
      noQuoteEntries_0_1_1.set(SecurityXMLLen_33);
      FIX::SecurityXMLSchema SecurityXMLSchema_33("STRING_1402470936");
      noQuoteEntries_0_1_1.set(SecurityXMLSchema_33);
      SecurityXML_66.insert(SecurityXMLSchema_33.getString());
      all_values.push_back(SecurityXML_66);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_2;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_2;
      BidForwardPoints_2.setString("18270680");
      noQuoteEntries_0_1_2.set(BidForwardPoints_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidForwardPoints_2.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_2;
      BidForwardPoints2_2.setString("12357486");
      noQuoteEntries_0_1_2.set(BidForwardPoints2_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidForwardPoints2_2.getString());
      FIX::BidPx BidPx_2;
      BidPx_2.setString("20761270");
      noQuoteEntries_0_1_2.set(BidPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidPx_2.getString());
      FIX::BidSize BidSize_2;
      BidSize_2.setString("2418489");
      noQuoteEntries_0_1_2.set(BidSize_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidSize_2.getString());
      FIX::BidSpotRate BidSpotRate_2;
      BidSpotRate_2.setString("8677949");
      noQuoteEntries_0_1_2.set(BidSpotRate_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidSpotRate_2.getString());
      FIX::BidYield BidYield_2;
      BidYield_2.setString("60.090000");
      noQuoteEntries_0_1_2.set(BidYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidYield_2.getString());
      FIX::BookingType BookingType_9(1);
      noQuoteEntries_0_1_2.set(BookingType_9);
      QuotEntryGrp_NoQuoteEntries_2.insert(BookingType_9.getString());
      FIX::Currency Currency_32("CHF");
      noQuoteEntries_0_1_2.set(Currency_32);
      QuotEntryGrp_NoQuoteEntries_2.insert(Currency_32.getString());
      FIX::MidPx MidPx_2;
      MidPx_2.setString("4501181");
      noQuoteEntries_0_1_2.set(MidPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(MidPx_2.getString());
      FIX::MidYield MidYield_2;
      MidYield_2.setString("50.130000");
      noQuoteEntries_0_1_2.set(MidYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(MidYield_2.getString());
      FIX::OfferForwardPoints OfferForwardPoints_2;
      OfferForwardPoints_2.setString("2042876");
      noQuoteEntries_0_1_2.set(OfferForwardPoints_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferForwardPoints_2.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_2;
      OfferForwardPoints2_2.setString("20836256");
      noQuoteEntries_0_1_2.set(OfferForwardPoints2_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferForwardPoints2_2.getString());
      FIX::OfferPx OfferPx_2;
      OfferPx_2.setString("13216016");
      noQuoteEntries_0_1_2.set(OfferPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferPx_2.getString());
      FIX::OfferSize OfferSize_2;
      OfferSize_2.setString("4859096");
      noQuoteEntries_0_1_2.set(OfferSize_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferSize_2.getString());
      FIX::OfferSpotRate OfferSpotRate_2;
      OfferSpotRate_2.setString("20433055");
      noQuoteEntries_0_1_2.set(OfferSpotRate_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferSpotRate_2.getString());
      FIX::OfferYield OfferYield_2;
      OfferYield_2.setString("97.340000");
      noQuoteEntries_0_1_2.set(OfferYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferYield_2.getString());
      FIX::OrdType OrdType_35('1');
      noQuoteEntries_0_1_2.set(OrdType_35);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrdType_35.getString());
      FIX::OrderCapacity OrderCapacity_10('G');
      noQuoteEntries_0_1_2.set(OrderCapacity_10);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderCapacity_10.getString());
      FIX::OrderQty2 OrderQty2_3;
      OrderQty2_3.setString("4556022");
      noQuoteEntries_0_1_2.set(OrderQty2_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderQty2_3.getString());
      FIX::OrderRestrictions OrderRestrictions_7("MULTIPLECHARVALUE_3");
      noQuoteEntries_0_1_2.set(OrderRestrictions_7);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderRestrictions_7.getString());
      FIX::QuoteEntryID QuoteEntryID_5("STRING_666709018");
      noQuoteEntries_0_1_2.set(QuoteEntryID_5);
      QuotEntryGrp_NoQuoteEntries_2.insert(QuoteEntryID_5.getString());
      FIX::SettlDate SettlDate_25("LOCALMKTDATE_1895513852");
      noQuoteEntries_0_1_2.set(SettlDate_25);
      QuotEntryGrp_NoQuoteEntries_2.insert(SettlDate_25.getString());
      FIX::SettlDate2 SettlDate2_3("LOCALMKTDATE_1980742184");
      noQuoteEntries_0_1_2.set(SettlDate2_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(SettlDate2_3.getString());
      FIX::TradingSessionID TradingSessionID_38("STRING_1");
      noQuoteEntries_0_1_2.set(TradingSessionID_38);
      QuotEntryGrp_NoQuoteEntries_2.insert(TradingSessionID_38.getString());
      FIX::TradingSessionSubID TradingSessionSubID_38("STRING_4");
      noQuoteEntries_0_1_2.set(TradingSessionSubID_38);
      QuotEntryGrp_NoQuoteEntries_2.insert(TradingSessionSubID_38.getString());
      FIX::TransactTime TransactTime_28(FIX::UTCTIMESTAMP(18, 41, 10, 10, 12, 2005));
      noQuoteEntries_0_1_2.set(TransactTime_28);
      QuotEntryGrp_NoQuoteEntries_2.insert(TransactTime_28.getString());
      FIX::ValidUntilTime ValidUntilTime_3(FIX::UTCTIMESTAMP(4, 0, 4, 8, 5, 2007));
      noQuoteEntries_0_1_2.set(ValidUntilTime_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(ValidUntilTime_3.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_2);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_64;
        FIX::EncodedLegIssuer EncodedLegIssuer_64("DATA_971680429");
        noLegs_0_2_2_0.set(EncodedLegIssuer_64);
        InstrumentLeg_64.insert(EncodedLegIssuer_64.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_64(71973484);
        noLegs_0_2_2_0.set(EncodedLegIssuerLen_64);
        InstrumentLeg_64.insert(EncodedLegIssuerLen_64.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_64("DATA_1231238068");
        noLegs_0_2_2_0.set(EncodedLegSecurityDesc_64);
        InstrumentLeg_64.insert(EncodedLegSecurityDesc_64.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_64(145798459);
        noLegs_0_2_2_0.set(EncodedLegSecurityDescLen_64);
        InstrumentLeg_64.insert(EncodedLegSecurityDescLen_64.getString());
        FIX::LegCFICode LegCFICode_64("STRING_557883139");
        noLegs_0_2_2_0.set(LegCFICode_64);
        InstrumentLeg_64.insert(LegCFICode_64.getString());
        FIX::LegContractMultiplier LegContractMultiplier_64;
        LegContractMultiplier_64.setString("11270600");
        noLegs_0_2_2_0.set(LegContractMultiplier_64);
        InstrumentLeg_64.insert(LegContractMultiplier_64.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_64(160668194);
        noLegs_0_2_2_0.set(LegContractMultiplierUnit_64);
        InstrumentLeg_64.insert(LegContractMultiplierUnit_64.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_64("MONTHYEAR_1996296140");
        noLegs_0_2_2_0.set(LegContractSettlMonth_64);
        InstrumentLeg_64.insert(LegContractSettlMonth_64.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_64("COUNTRY_1604834713");
        noLegs_0_2_2_0.set(LegCountryOfIssue_64);
        InstrumentLeg_64.insert(LegCountryOfIssue_64.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_64("LOCALMKTDATE_616270449");
        noLegs_0_2_2_0.set(LegCouponPaymentDate_64);
        InstrumentLeg_64.insert(LegCouponPaymentDate_64.getString());
        FIX::LegCouponRate LegCouponRate_64;
        LegCouponRate_64.setString("85.290000");
        noLegs_0_2_2_0.set(LegCouponRate_64);
        InstrumentLeg_64.insert(LegCouponRate_64.getString());
        FIX::LegCreditRating LegCreditRating_64("STRING_124060083");
        noLegs_0_2_2_0.set(LegCreditRating_64);
        InstrumentLeg_64.insert(LegCreditRating_64.getString());
        FIX::LegCurrency LegCurrency_64("CAN");
        noLegs_0_2_2_0.set(LegCurrency_64);
        InstrumentLeg_64.insert(LegCurrency_64.getString());
        FIX::LegDatedDate LegDatedDate_64("LOCALMKTDATE_1506265696");
        noLegs_0_2_2_0.set(LegDatedDate_64);
        InstrumentLeg_64.insert(LegDatedDate_64.getString());
        FIX::LegExerciseStyle LegExerciseStyle_64(1138226445);
        noLegs_0_2_2_0.set(LegExerciseStyle_64);
        InstrumentLeg_64.insert(LegExerciseStyle_64.getString());
        FIX::LegFactor LegFactor_64;
        LegFactor_64.setString("5451170");
        noLegs_0_2_2_0.set(LegFactor_64);
        InstrumentLeg_64.insert(LegFactor_64.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_64(2033449882);
        noLegs_0_2_2_0.set(LegFlowScheduleType_64);
        InstrumentLeg_64.insert(LegFlowScheduleType_64.getString());
        FIX::LegInstrRegistry LegInstrRegistry_64("STRING_1904377527");
        noLegs_0_2_2_0.set(LegInstrRegistry_64);
        InstrumentLeg_64.insert(LegInstrRegistry_64.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_64("LOCALMKTDATE_688670192");
        noLegs_0_2_2_0.set(LegInterestAccrualDate_64);
        InstrumentLeg_64.insert(LegInterestAccrualDate_64.getString());
        FIX::LegIssueDate LegIssueDate_64("LOCALMKTDATE_1815621356");
        noLegs_0_2_2_0.set(LegIssueDate_64);
        InstrumentLeg_64.insert(LegIssueDate_64.getString());
        FIX::LegIssuer LegIssuer_64("STRING_202629354");
        noLegs_0_2_2_0.set(LegIssuer_64);
        InstrumentLeg_64.insert(LegIssuer_64.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_64("STRING_2067972001");
        noLegs_0_2_2_0.set(LegLocaleOfIssue_64);
        InstrumentLeg_64.insert(LegLocaleOfIssue_64.getString());
        FIX::LegMaturityDate LegMaturityDate_64("LOCALMKTDATE_1526436231");
        noLegs_0_2_2_0.set(LegMaturityDate_64);
        InstrumentLeg_64.insert(LegMaturityDate_64.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_64("MONTHYEAR_890213807");
        noLegs_0_2_2_0.set(LegMaturityMonthYear_64);
        InstrumentLeg_64.insert(LegMaturityMonthYear_64.getString());
        FIX::LegMaturityTime LegMaturityTime_64("TZTIMEONLY_20101434");
        noLegs_0_2_2_0.set(LegMaturityTime_64);
        InstrumentLeg_64.insert(LegMaturityTime_64.getString());
        FIX::LegOptAttribute LegOptAttribute_64('1');
        noLegs_0_2_2_0.set(LegOptAttribute_64);
        InstrumentLeg_64.insert(LegOptAttribute_64.getString());
        FIX::LegOptionRatio LegOptionRatio_64;
        LegOptionRatio_64.setString("17351916");
        noLegs_0_2_2_0.set(LegOptionRatio_64);
        InstrumentLeg_64.insert(LegOptionRatio_64.getString());
        FIX::LegPool LegPool_64("STRING_901656850");
        noLegs_0_2_2_0.set(LegPool_64);
        InstrumentLeg_64.insert(LegPool_64.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_64("STRING_1032019271");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasure_64);
        InstrumentLeg_64.insert(LegPriceUnitOfMeasure_64.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_64;
        LegPriceUnitOfMeasureQty_64.setString("8828040");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasureQty_64);
        InstrumentLeg_64.insert(LegPriceUnitOfMeasureQty_64.getString());
        FIX::LegProduct LegProduct_64(1873337279);
        noLegs_0_2_2_0.set(LegProduct_64);
        InstrumentLeg_64.insert(LegProduct_64.getString());
        FIX::LegPutOrCall LegPutOrCall_64(1103992755);
        noLegs_0_2_2_0.set(LegPutOrCall_64);
        InstrumentLeg_64.insert(LegPutOrCall_64.getString());
        FIX::LegRatioQty LegRatioQty_64;
        LegRatioQty_64.setString("21140421");
        noLegs_0_2_2_0.set(LegRatioQty_64);
        InstrumentLeg_64.insert(LegRatioQty_64.getString());
        FIX::LegRedemptionDate LegRedemptionDate_64("LOCALMKTDATE_2019135739");
        noLegs_0_2_2_0.set(LegRedemptionDate_64);
        InstrumentLeg_64.insert(LegRedemptionDate_64.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_64("STRING_1661875895");
        noLegs_0_2_2_0.set(LegRepoCollateralSecurityType_64);
        InstrumentLeg_64.insert(LegRepoCollateralSecurityType_64.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_64;
        LegRepurchaseRate_64.setString("85.150000");
        noLegs_0_2_2_0.set(LegRepurchaseRate_64);
        InstrumentLeg_64.insert(LegRepurchaseRate_64.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_64(32320285);
        noLegs_0_2_2_0.set(LegRepurchaseTerm_64);
        InstrumentLeg_64.insert(LegRepurchaseTerm_64.getString());
        FIX::LegSecurityDesc LegSecurityDesc_64("STRING_1510688387");
        noLegs_0_2_2_0.set(LegSecurityDesc_64);
        InstrumentLeg_64.insert(LegSecurityDesc_64.getString());
        FIX::LegSecurityExchange LegSecurityExchange_64("EXCHANGE_550969581");
        noLegs_0_2_2_0.set(LegSecurityExchange_64);
        InstrumentLeg_64.insert(LegSecurityExchange_64.getString());
        FIX::LegSecurityID LegSecurityID_64("STRING_648590734");
        noLegs_0_2_2_0.set(LegSecurityID_64);
        InstrumentLeg_64.insert(LegSecurityID_64.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_64("STRING_1049533268");
        noLegs_0_2_2_0.set(LegSecurityIDSource_64);
        InstrumentLeg_64.insert(LegSecurityIDSource_64.getString());
        FIX::LegSecuritySubType LegSecuritySubType_64("STRING_675029664");
        noLegs_0_2_2_0.set(LegSecuritySubType_64);
        InstrumentLeg_64.insert(LegSecuritySubType_64.getString());
        FIX::LegSecurityType LegSecurityType_64("STRING_1012891388");
        noLegs_0_2_2_0.set(LegSecurityType_64);
        InstrumentLeg_64.insert(LegSecurityType_64.getString());
        FIX::LegSide LegSide_64('4');
        noLegs_0_2_2_0.set(LegSide_64);
        InstrumentLeg_64.insert(LegSide_64.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_64("STRING_33811712");
        noLegs_0_2_2_0.set(LegStateOrProvinceOfIssue_64);
        InstrumentLeg_64.insert(LegStateOrProvinceOfIssue_64.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_64("GBP");
        noLegs_0_2_2_0.set(LegStrikeCurrency_64);
        InstrumentLeg_64.insert(LegStrikeCurrency_64.getString());
        FIX::LegStrikePrice LegStrikePrice_64;
        LegStrikePrice_64.setString("20672615");
        noLegs_0_2_2_0.set(LegStrikePrice_64);
        InstrumentLeg_64.insert(LegStrikePrice_64.getString());
        FIX::LegSymbol LegSymbol_64("STRING_1908011712");
        noLegs_0_2_2_0.set(LegSymbol_64);
        InstrumentLeg_64.insert(LegSymbol_64.getString());
        FIX::LegSymbolSfx LegSymbolSfx_64("STRING_1655423938");
        noLegs_0_2_2_0.set(LegSymbolSfx_64);
        InstrumentLeg_64.insert(LegSymbolSfx_64.getString());
        FIX::LegTimeUnit LegTimeUnit_64("STRING_1735399303");
        noLegs_0_2_2_0.set(LegTimeUnit_64);
        InstrumentLeg_64.insert(LegTimeUnit_64.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_64("STRING_2110641067");
        noLegs_0_2_2_0.set(LegUnitOfMeasure_64);
        InstrumentLeg_64.insert(LegUnitOfMeasure_64.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_64;
        LegUnitOfMeasureQty_64.setString("15759122");
        noLegs_0_2_2_0.set(LegUnitOfMeasureQty_64);
        InstrumentLeg_64.insert(LegUnitOfMeasureQty_64.getString());
        all_values.push_back(InstrumentLeg_64);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_123;
          FIX::LegSecurityAltID LegSecurityAltID_123("STRING_853371226");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltID_123);
          LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltID_123.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_123("STRING_1596013726");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltIDSource_123);
          LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltIDSource_123.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_123);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_124;
          FIX::LegSecurityAltID LegSecurityAltID_124("STRING_131201706");
          noLegSecurityAltID_0_2_0_3_1.set(LegSecurityAltID_124);
          LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltID_124.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_124("STRING_441079261");
          noLegSecurityAltID_0_2_0_3_1.set(LegSecurityAltIDSource_124);
          LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltIDSource_124.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_124);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_125;
          FIX::LegSecurityAltID LegSecurityAltID_125("STRING_350186928");
          noLegSecurityAltID_0_2_0_3_2.set(LegSecurityAltID_125);
          LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltID_125.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_125("STRING_1163220978");
          noLegSecurityAltID_0_2_0_3_2.set(LegSecurityAltIDSource_125);
          LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltIDSource_125.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_125);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_65;
        FIX::EncodedLegIssuer EncodedLegIssuer_65("DATA_1323883340");
        noLegs_0_2_2_1.set(EncodedLegIssuer_65);
        InstrumentLeg_65.insert(EncodedLegIssuer_65.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_65(76040559);
        noLegs_0_2_2_1.set(EncodedLegIssuerLen_65);
        InstrumentLeg_65.insert(EncodedLegIssuerLen_65.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_65("DATA_119730085");
        noLegs_0_2_2_1.set(EncodedLegSecurityDesc_65);
        InstrumentLeg_65.insert(EncodedLegSecurityDesc_65.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_65(1290441839);
        noLegs_0_2_2_1.set(EncodedLegSecurityDescLen_65);
        InstrumentLeg_65.insert(EncodedLegSecurityDescLen_65.getString());
        FIX::LegCFICode LegCFICode_65("STRING_2095176298");
        noLegs_0_2_2_1.set(LegCFICode_65);
        InstrumentLeg_65.insert(LegCFICode_65.getString());
        FIX::LegContractMultiplier LegContractMultiplier_65;
        LegContractMultiplier_65.setString("17816059");
        noLegs_0_2_2_1.set(LegContractMultiplier_65);
        InstrumentLeg_65.insert(LegContractMultiplier_65.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_65(236576706);
        noLegs_0_2_2_1.set(LegContractMultiplierUnit_65);
        InstrumentLeg_65.insert(LegContractMultiplierUnit_65.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_65("MONTHYEAR_2127496583");
        noLegs_0_2_2_1.set(LegContractSettlMonth_65);
        InstrumentLeg_65.insert(LegContractSettlMonth_65.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_65("COUNTRY_1144810719");
        noLegs_0_2_2_1.set(LegCountryOfIssue_65);
        InstrumentLeg_65.insert(LegCountryOfIssue_65.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_65("LOCALMKTDATE_787546287");
        noLegs_0_2_2_1.set(LegCouponPaymentDate_65);
        InstrumentLeg_65.insert(LegCouponPaymentDate_65.getString());
        FIX::LegCouponRate LegCouponRate_65;
        LegCouponRate_65.setString("36.700000");
        noLegs_0_2_2_1.set(LegCouponRate_65);
        InstrumentLeg_65.insert(LegCouponRate_65.getString());
        FIX::LegCreditRating LegCreditRating_65("STRING_46860339");
        noLegs_0_2_2_1.set(LegCreditRating_65);
        InstrumentLeg_65.insert(LegCreditRating_65.getString());
        FIX::LegCurrency LegCurrency_65("JPY");
        noLegs_0_2_2_1.set(LegCurrency_65);
        InstrumentLeg_65.insert(LegCurrency_65.getString());
        FIX::LegDatedDate LegDatedDate_65("LOCALMKTDATE_468497024");
        noLegs_0_2_2_1.set(LegDatedDate_65);
        InstrumentLeg_65.insert(LegDatedDate_65.getString());
        FIX::LegExerciseStyle LegExerciseStyle_65(1496387664);
        noLegs_0_2_2_1.set(LegExerciseStyle_65);
        InstrumentLeg_65.insert(LegExerciseStyle_65.getString());
        FIX::LegFactor LegFactor_65;
        LegFactor_65.setString("16451292");
        noLegs_0_2_2_1.set(LegFactor_65);
        InstrumentLeg_65.insert(LegFactor_65.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_65(1435250771);
        noLegs_0_2_2_1.set(LegFlowScheduleType_65);
        InstrumentLeg_65.insert(LegFlowScheduleType_65.getString());
        FIX::LegInstrRegistry LegInstrRegistry_65("STRING_1416165611");
        noLegs_0_2_2_1.set(LegInstrRegistry_65);
        InstrumentLeg_65.insert(LegInstrRegistry_65.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_65("LOCALMKTDATE_1405657308");
        noLegs_0_2_2_1.set(LegInterestAccrualDate_65);
        InstrumentLeg_65.insert(LegInterestAccrualDate_65.getString());
        FIX::LegIssueDate LegIssueDate_65("LOCALMKTDATE_943191061");
        noLegs_0_2_2_1.set(LegIssueDate_65);
        InstrumentLeg_65.insert(LegIssueDate_65.getString());
        FIX::LegIssuer LegIssuer_65("STRING_1004081266");
        noLegs_0_2_2_1.set(LegIssuer_65);
        InstrumentLeg_65.insert(LegIssuer_65.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_65("STRING_1368814727");
        noLegs_0_2_2_1.set(LegLocaleOfIssue_65);
        InstrumentLeg_65.insert(LegLocaleOfIssue_65.getString());
        FIX::LegMaturityDate LegMaturityDate_65("LOCALMKTDATE_371619705");
        noLegs_0_2_2_1.set(LegMaturityDate_65);
        InstrumentLeg_65.insert(LegMaturityDate_65.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_65("MONTHYEAR_2118433152");
        noLegs_0_2_2_1.set(LegMaturityMonthYear_65);
        InstrumentLeg_65.insert(LegMaturityMonthYear_65.getString());
        FIX::LegMaturityTime LegMaturityTime_65("TZTIMEONLY_74702305");
        noLegs_0_2_2_1.set(LegMaturityTime_65);
        InstrumentLeg_65.insert(LegMaturityTime_65.getString());
        FIX::LegOptAttribute LegOptAttribute_65('1');
        noLegs_0_2_2_1.set(LegOptAttribute_65);
        InstrumentLeg_65.insert(LegOptAttribute_65.getString());
        FIX::LegOptionRatio LegOptionRatio_65;
        LegOptionRatio_65.setString("1021512");
        noLegs_0_2_2_1.set(LegOptionRatio_65);
        InstrumentLeg_65.insert(LegOptionRatio_65.getString());
        FIX::LegPool LegPool_65("STRING_515781566");
        noLegs_0_2_2_1.set(LegPool_65);
        InstrumentLeg_65.insert(LegPool_65.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_65("STRING_170336711");
        noLegs_0_2_2_1.set(LegPriceUnitOfMeasure_65);
        InstrumentLeg_65.insert(LegPriceUnitOfMeasure_65.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_65;
        LegPriceUnitOfMeasureQty_65.setString("12653721");
        noLegs_0_2_2_1.set(LegPriceUnitOfMeasureQty_65);
        InstrumentLeg_65.insert(LegPriceUnitOfMeasureQty_65.getString());
        FIX::LegProduct LegProduct_65(1839664906);
        noLegs_0_2_2_1.set(LegProduct_65);
        InstrumentLeg_65.insert(LegProduct_65.getString());
        FIX::LegPutOrCall LegPutOrCall_65(246377271);
        noLegs_0_2_2_1.set(LegPutOrCall_65);
        InstrumentLeg_65.insert(LegPutOrCall_65.getString());
        FIX::LegRatioQty LegRatioQty_65;
        LegRatioQty_65.setString("13851022");
        noLegs_0_2_2_1.set(LegRatioQty_65);
        InstrumentLeg_65.insert(LegRatioQty_65.getString());
        FIX::LegRedemptionDate LegRedemptionDate_65("LOCALMKTDATE_982623097");
        noLegs_0_2_2_1.set(LegRedemptionDate_65);
        InstrumentLeg_65.insert(LegRedemptionDate_65.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_65("STRING_194069921");
        noLegs_0_2_2_1.set(LegRepoCollateralSecurityType_65);
        InstrumentLeg_65.insert(LegRepoCollateralSecurityType_65.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_65;
        LegRepurchaseRate_65.setString("46.070000");
        noLegs_0_2_2_1.set(LegRepurchaseRate_65);
        InstrumentLeg_65.insert(LegRepurchaseRate_65.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_65(1219199803);
        noLegs_0_2_2_1.set(LegRepurchaseTerm_65);
        InstrumentLeg_65.insert(LegRepurchaseTerm_65.getString());
        FIX::LegSecurityDesc LegSecurityDesc_65("STRING_174082857");
        noLegs_0_2_2_1.set(LegSecurityDesc_65);
        InstrumentLeg_65.insert(LegSecurityDesc_65.getString());
        FIX::LegSecurityExchange LegSecurityExchange_65("EXCHANGE_16551678");
        noLegs_0_2_2_1.set(LegSecurityExchange_65);
        InstrumentLeg_65.insert(LegSecurityExchange_65.getString());
        FIX::LegSecurityID LegSecurityID_65("STRING_2006746091");
        noLegs_0_2_2_1.set(LegSecurityID_65);
        InstrumentLeg_65.insert(LegSecurityID_65.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_65("STRING_802686527");
        noLegs_0_2_2_1.set(LegSecurityIDSource_65);
        InstrumentLeg_65.insert(LegSecurityIDSource_65.getString());
        FIX::LegSecuritySubType LegSecuritySubType_65("STRING_63412018");
        noLegs_0_2_2_1.set(LegSecuritySubType_65);
        InstrumentLeg_65.insert(LegSecuritySubType_65.getString());
        FIX::LegSecurityType LegSecurityType_65("STRING_1321838395");
        noLegs_0_2_2_1.set(LegSecurityType_65);
        InstrumentLeg_65.insert(LegSecurityType_65.getString());
        FIX::LegSide LegSide_65('2');
        noLegs_0_2_2_1.set(LegSide_65);
        InstrumentLeg_65.insert(LegSide_65.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_65("STRING_531909042");
        noLegs_0_2_2_1.set(LegStateOrProvinceOfIssue_65);
        InstrumentLeg_65.insert(LegStateOrProvinceOfIssue_65.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_65("GBP");
        noLegs_0_2_2_1.set(LegStrikeCurrency_65);
        InstrumentLeg_65.insert(LegStrikeCurrency_65.getString());
        FIX::LegStrikePrice LegStrikePrice_65;
        LegStrikePrice_65.setString("19671598");
        noLegs_0_2_2_1.set(LegStrikePrice_65);
        InstrumentLeg_65.insert(LegStrikePrice_65.getString());
        FIX::LegSymbol LegSymbol_65("STRING_2086908022");
        noLegs_0_2_2_1.set(LegSymbol_65);
        InstrumentLeg_65.insert(LegSymbol_65.getString());
        FIX::LegSymbolSfx LegSymbolSfx_65("STRING_1200000840");
        noLegs_0_2_2_1.set(LegSymbolSfx_65);
        InstrumentLeg_65.insert(LegSymbolSfx_65.getString());
        FIX::LegTimeUnit LegTimeUnit_65("STRING_762867227");
        noLegs_0_2_2_1.set(LegTimeUnit_65);
        InstrumentLeg_65.insert(LegTimeUnit_65.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_65("STRING_943505640");
        noLegs_0_2_2_1.set(LegUnitOfMeasure_65);
        InstrumentLeg_65.insert(LegUnitOfMeasure_65.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_65;
        LegUnitOfMeasureQty_65.setString("4213319");
        noLegs_0_2_2_1.set(LegUnitOfMeasureQty_65);
        InstrumentLeg_65.insert(LegUnitOfMeasureQty_65.getString());
        all_values.push_back(InstrumentLeg_65);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_126;
          FIX::LegSecurityAltID LegSecurityAltID_126("STRING_914455145");
          noLegSecurityAltID_0_2_1_3_0.set(LegSecurityAltID_126);
          LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltID_126.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_126("STRING_496034224");
          noLegSecurityAltID_0_2_1_3_0.set(LegSecurityAltIDSource_126);
          LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltIDSource_126.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_126);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_127;
          FIX::LegSecurityAltID LegSecurityAltID_127("STRING_954636716");
          noLegSecurityAltID_0_2_1_3_1.set(LegSecurityAltID_127);
          LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltID_127.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_127("STRING_1016606356");
          noLegSecurityAltID_0_2_1_3_1.set(LegSecurityAltIDSource_127);
          LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltIDSource_127.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_127);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_128;
          FIX::LegSecurityAltID LegSecurityAltID_128("STRING_1011815790");
          noLegSecurityAltID_0_2_1_3_2.set(LegSecurityAltID_128);
          LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltID_128.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_128("STRING_1124973427");
          noLegSecurityAltID_0_2_1_3_2.set(LegSecurityAltIDSource_128);
          LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltIDSource_128.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_128);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_1);
      }
      // Instrument
      multiset<string> Instrument_34;
      FIX::AttachmentPoint AttachmentPoint_34;
      AttachmentPoint_34.setString("48.970000");
      noQuoteEntries_0_1_2.set(AttachmentPoint_34);
      Instrument_34.insert(AttachmentPoint_34.getString());
      FIX::CFICode CFICode_34("STRING_703997048");
      noQuoteEntries_0_1_2.set(CFICode_34);
      Instrument_34.insert(CFICode_34.getString());
      FIX::CPProgram CPProgram_34(2);
      noQuoteEntries_0_1_2.set(CPProgram_34);
      Instrument_34.insert(CPProgram_34.getString());
      FIX::CPRegType CPRegType_34("STRING_1519597171");
      noQuoteEntries_0_1_2.set(CPRegType_34);
      Instrument_34.insert(CPRegType_34.getString());
      FIX::CapPrice CapPrice_34;
      CapPrice_34.setString("16866201");
      noQuoteEntries_0_1_2.set(CapPrice_34);
      Instrument_34.insert(CapPrice_34.getString());
      FIX::ContractMultiplier ContractMultiplier_34;
      ContractMultiplier_34.setString("15654206");
      noQuoteEntries_0_1_2.set(ContractMultiplier_34);
      Instrument_34.insert(ContractMultiplier_34.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_34(1);
      noQuoteEntries_0_1_2.set(ContractMultiplierUnit_34);
      Instrument_34.insert(ContractMultiplierUnit_34.getString());
      FIX::ContractSettlMonth ContractSettlMonth_34("MONTHYEAR_758336301");
      noQuoteEntries_0_1_2.set(ContractSettlMonth_34);
      Instrument_34.insert(ContractSettlMonth_34.getString());
      FIX::CountryOfIssue CountryOfIssue_34("COUNTRY_1739503477");
      noQuoteEntries_0_1_2.set(CountryOfIssue_34);
      Instrument_34.insert(CountryOfIssue_34.getString());
      FIX::CouponPaymentDate CouponPaymentDate_34("LOCALMKTDATE_407889809");
      noQuoteEntries_0_1_2.set(CouponPaymentDate_34);
      Instrument_34.insert(CouponPaymentDate_34.getString());
      FIX::CouponRate CouponRate_34;
      CouponRate_34.setString("87.440000");
      noQuoteEntries_0_1_2.set(CouponRate_34);
      Instrument_34.insert(CouponRate_34.getString());
      FIX::CreditRating CreditRating_34("STRING_394706356");
      noQuoteEntries_0_1_2.set(CreditRating_34);
      Instrument_34.insert(CreditRating_34.getString());
      FIX::DatedDate DatedDate_34("LOCALMKTDATE_471301827");
      noQuoteEntries_0_1_2.set(DatedDate_34);
      Instrument_34.insert(DatedDate_34.getString());
      FIX::DetachmentPoint DetachmentPoint_34;
      DetachmentPoint_34.setString("71.390000");
      noQuoteEntries_0_1_2.set(DetachmentPoint_34);
      Instrument_34.insert(DetachmentPoint_34.getString());
      FIX::EncodedIssuer EncodedIssuer_34("DATA_691404293");
      noQuoteEntries_0_1_2.set(EncodedIssuer_34);
      Instrument_34.insert(EncodedIssuer_34.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_34(1003210869);
      noQuoteEntries_0_1_2.set(EncodedIssuerLen_34);
      Instrument_34.insert(EncodedIssuerLen_34.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_34("DATA_462695902");
      noQuoteEntries_0_1_2.set(EncodedSecurityDesc_34);
      Instrument_34.insert(EncodedSecurityDesc_34.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_34(485747825);
      noQuoteEntries_0_1_2.set(EncodedSecurityDescLen_34);
      Instrument_34.insert(EncodedSecurityDescLen_34.getString());
      FIX::ExerciseStyle ExerciseStyle_34(1);
      noQuoteEntries_0_1_2.set(ExerciseStyle_34);
      Instrument_34.insert(ExerciseStyle_34.getString());
      FIX::Factor Factor_34;
      Factor_34.setString("4021202");
      noQuoteEntries_0_1_2.set(Factor_34);
      Instrument_34.insert(Factor_34.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_34(true);
      noQuoteEntries_0_1_2.set(FlexProductEligibilityIndicator_34);
      Instrument_34.insert(FlexProductEligibilityIndicator_34.getString());
      FIX::FlexibleIndicator FlexibleIndicator_34(true);
      noQuoteEntries_0_1_2.set(FlexibleIndicator_34);
      Instrument_34.insert(FlexibleIndicator_34.getString());
      FIX::FloorPrice FloorPrice_34;
      FloorPrice_34.setString("13456259");
      noQuoteEntries_0_1_2.set(FloorPrice_34);
      Instrument_34.insert(FloorPrice_34.getString());
      FIX::FlowScheduleType FlowScheduleType_34(0);
      noQuoteEntries_0_1_2.set(FlowScheduleType_34);
      Instrument_34.insert(FlowScheduleType_34.getString());
      FIX::InstrRegistry InstrRegistry_34("STRING_572757546");
      noQuoteEntries_0_1_2.set(InstrRegistry_34);
      Instrument_34.insert(InstrRegistry_34.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_34('1');
      noQuoteEntries_0_1_2.set(InstrmtAssignmentMethod_34);
      Instrument_34.insert(InstrmtAssignmentMethod_34.getString());
      FIX::InterestAccrualDate InterestAccrualDate_34("LOCALMKTDATE_455631162");
      noQuoteEntries_0_1_2.set(InterestAccrualDate_34);
      Instrument_34.insert(InterestAccrualDate_34.getString());
      FIX::IssueDate IssueDate_34("LOCALMKTDATE_1527394262");
      noQuoteEntries_0_1_2.set(IssueDate_34);
      Instrument_34.insert(IssueDate_34.getString());
      FIX::Issuer Issuer_34("STRING_1129203770");
      noQuoteEntries_0_1_2.set(Issuer_34);
      Instrument_34.insert(Issuer_34.getString());
      FIX::ListMethod ListMethod_34(0);
      noQuoteEntries_0_1_2.set(ListMethod_34);
      Instrument_34.insert(ListMethod_34.getString());
      FIX::LocaleOfIssue LocaleOfIssue_34("STRING_504884042");
      noQuoteEntries_0_1_2.set(LocaleOfIssue_34);
      Instrument_34.insert(LocaleOfIssue_34.getString());
      FIX::MaturityDate MaturityDate_34("LOCALMKTDATE_1263698667");
      noQuoteEntries_0_1_2.set(MaturityDate_34);
      Instrument_34.insert(MaturityDate_34.getString());
      FIX::MaturityMonthYear MaturityMonthYear_34("MONTHYEAR_23960353");
      noQuoteEntries_0_1_2.set(MaturityMonthYear_34);
      Instrument_34.insert(MaturityMonthYear_34.getString());
      FIX::MaturityTime MaturityTime_34("TZTIMEONLY_1876234740");
      noQuoteEntries_0_1_2.set(MaturityTime_34);
      Instrument_34.insert(MaturityTime_34.getString());
      FIX::MinPriceIncrement MinPriceIncrement_34;
      MinPriceIncrement_34.setString("6358121");
      noQuoteEntries_0_1_2.set(MinPriceIncrement_34);
      Instrument_34.insert(MinPriceIncrement_34.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_34;
      MinPriceIncrementAmount_34.setString("17105804");
      noQuoteEntries_0_1_2.set(MinPriceIncrementAmount_34);
      Instrument_34.insert(MinPriceIncrementAmount_34.getString());
      FIX::NTPositionLimit NTPositionLimit_34(1294171712);
      noQuoteEntries_0_1_2.set(NTPositionLimit_34);
      Instrument_34.insert(NTPositionLimit_34.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_34;
      NotionalPercentageOutstanding_34.setString("3.210000");
      noQuoteEntries_0_1_2.set(NotionalPercentageOutstanding_34);
      Instrument_34.insert(NotionalPercentageOutstanding_34.getString());
      FIX::OptAttribute OptAttribute_34('3');
      noQuoteEntries_0_1_2.set(OptAttribute_34);
      Instrument_34.insert(OptAttribute_34.getString());
      FIX::OptPayoutAmount OptPayoutAmount_34;
      OptPayoutAmount_34.setString("8861915");
      noQuoteEntries_0_1_2.set(OptPayoutAmount_34);
      Instrument_34.insert(OptPayoutAmount_34.getString());
      FIX::OptPayoutType OptPayoutType_34(1);
      noQuoteEntries_0_1_2.set(OptPayoutType_34);
      Instrument_34.insert(OptPayoutType_34.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_34;
      OriginalNotionalPercentageOutstanding_34.setString("18.950000");
      noQuoteEntries_0_1_2.set(OriginalNotionalPercentageOutstanding_34);
      Instrument_34.insert(OriginalNotionalPercentageOutstanding_34.getString());
      FIX::Pool Pool_34("STRING_1280897897");
      noQuoteEntries_0_1_2.set(Pool_34);
      Instrument_34.insert(Pool_34.getString());
      FIX::PositionLimit PositionLimit_34(1906341957);
      noQuoteEntries_0_1_2.set(PositionLimit_34);
      Instrument_34.insert(PositionLimit_34.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_34("STRING_INT");
      noQuoteEntries_0_1_2.set(PriceQuoteMethod_34);
      Instrument_34.insert(PriceQuoteMethod_34.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_34("STRING_1972302190");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasure_34);
      Instrument_34.insert(PriceUnitOfMeasure_34.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_34;
      PriceUnitOfMeasureQty_34.setString("7620691");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasureQty_34);
      Instrument_34.insert(PriceUnitOfMeasureQty_34.getString());
      FIX::Product Product_36(9);
      noQuoteEntries_0_1_2.set(Product_36);
      Instrument_34.insert(Product_36.getString());
      FIX::ProductComplex ProductComplex_34("STRING_310566368");
      noQuoteEntries_0_1_2.set(ProductComplex_34);
      Instrument_34.insert(ProductComplex_34.getString());
      FIX::PutOrCall PutOrCall_34(0);
      noQuoteEntries_0_1_2.set(PutOrCall_34);
      Instrument_34.insert(PutOrCall_34.getString());
      FIX::RedemptionDate RedemptionDate_34("LOCALMKTDATE_1595801566");
      noQuoteEntries_0_1_2.set(RedemptionDate_34);
      Instrument_34.insert(RedemptionDate_34.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_34("STRING_1996315034");
      noQuoteEntries_0_1_2.set(RepoCollateralSecurityType_34);
      Instrument_34.insert(RepoCollateralSecurityType_34.getString());
      FIX::RepurchaseRate RepurchaseRate_34;
      RepurchaseRate_34.setString("68.280000");
      noQuoteEntries_0_1_2.set(RepurchaseRate_34);
      Instrument_34.insert(RepurchaseRate_34.getString());
      FIX::RepurchaseTerm RepurchaseTerm_34(793943835);
      noQuoteEntries_0_1_2.set(RepurchaseTerm_34);
      Instrument_34.insert(RepurchaseTerm_34.getString());
      FIX::RestructuringType RestructuringType_34("STRING_XR");
      noQuoteEntries_0_1_2.set(RestructuringType_34);
      Instrument_34.insert(RestructuringType_34.getString());
      FIX::SecurityDesc SecurityDesc_34("STRING_1595984374");
      noQuoteEntries_0_1_2.set(SecurityDesc_34);
      Instrument_34.insert(SecurityDesc_34.getString());
      FIX::SecurityExchange SecurityExchange_34("EXCHANGE_906541250");
      noQuoteEntries_0_1_2.set(SecurityExchange_34);
      Instrument_34.insert(SecurityExchange_34.getString());
      FIX::SecurityGroup SecurityGroup_34("STRING_264059485");
      noQuoteEntries_0_1_2.set(SecurityGroup_34);
      Instrument_34.insert(SecurityGroup_34.getString());
      FIX::SecurityID SecurityID_34("STRING_975894989");
      noQuoteEntries_0_1_2.set(SecurityID_34);
      Instrument_34.insert(SecurityID_34.getString());
      FIX::SecurityIDSource SecurityIDSource_34("STRING_D");
      noQuoteEntries_0_1_2.set(SecurityIDSource_34);
      Instrument_34.insert(SecurityIDSource_34.getString());
      FIX::SecurityStatus SecurityStatus_34("STRING_1");
      noQuoteEntries_0_1_2.set(SecurityStatus_34);
      Instrument_34.insert(SecurityStatus_34.getString());
      FIX::SecuritySubType SecuritySubType_35("STRING_1480779031");
      noQuoteEntries_0_1_2.set(SecuritySubType_35);
      Instrument_34.insert(SecuritySubType_35.getString());
      FIX::SecurityType SecurityType_36("STRING_PS");
      noQuoteEntries_0_1_2.set(SecurityType_36);
      Instrument_34.insert(SecurityType_36.getString());
      FIX::Seniority Seniority_34("STRING_SD");
      noQuoteEntries_0_1_2.set(Seniority_34);
      Instrument_34.insert(Seniority_34.getString());
      FIX::SettlMethod SettlMethod_34('P');
      noQuoteEntries_0_1_2.set(SettlMethod_34);
      Instrument_34.insert(SettlMethod_34.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_34("STRING_1787772231");
      noQuoteEntries_0_1_2.set(SettleOnOpenFlag_34);
      Instrument_34.insert(SettleOnOpenFlag_34.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_34("STRING_1318563641");
      noQuoteEntries_0_1_2.set(StateOrProvinceOfIssue_34);
      Instrument_34.insert(StateOrProvinceOfIssue_34.getString());
      FIX::StrikeCurrency StrikeCurrency_34("GBP");
      noQuoteEntries_0_1_2.set(StrikeCurrency_34);
      Instrument_34.insert(StrikeCurrency_34.getString());
      FIX::StrikeMultiplier StrikeMultiplier_34;
      StrikeMultiplier_34.setString("16399967");
      noQuoteEntries_0_1_2.set(StrikeMultiplier_34);
      Instrument_34.insert(StrikeMultiplier_34.getString());
      FIX::StrikePrice StrikePrice_34;
      StrikePrice_34.setString("12424097");
      noQuoteEntries_0_1_2.set(StrikePrice_34);
      Instrument_34.insert(StrikePrice_34.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_34(1);
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryMethod_34);
      Instrument_34.insert(StrikePriceBoundaryMethod_34.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_34;
      StrikePriceBoundaryPrecision_34.setString("50.400000");
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryPrecision_34);
      Instrument_34.insert(StrikePriceBoundaryPrecision_34.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_34(4);
      noQuoteEntries_0_1_2.set(StrikePriceDeterminationMethod_34);
      Instrument_34.insert(StrikePriceDeterminationMethod_34.getString());
      FIX::StrikeValue StrikeValue_34;
      StrikeValue_34.setString("18613373");
      noQuoteEntries_0_1_2.set(StrikeValue_34);
      Instrument_34.insert(StrikeValue_34.getString());
      FIX::Symbol Symbol_34("STRING_1162530427");
      noQuoteEntries_0_1_2.set(Symbol_34);
      Instrument_34.insert(Symbol_34.getString());
      FIX::SymbolSfx SymbolSfx_34("STRING_WI");
      noQuoteEntries_0_1_2.set(SymbolSfx_34);
      Instrument_34.insert(SymbolSfx_34.getString());
      FIX::TimeUnit TimeUnit_34("STRING_Min");
      noQuoteEntries_0_1_2.set(TimeUnit_34);
      Instrument_34.insert(TimeUnit_34.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_34(1);
      noQuoteEntries_0_1_2.set(UnderlyingPriceDeterminationMethod_34);
      Instrument_34.insert(UnderlyingPriceDeterminationMethod_34.getString());
      FIX::UnitOfMeasure UnitOfMeasure_34("STRING_t");
      noQuoteEntries_0_1_2.set(UnitOfMeasure_34);
      Instrument_34.insert(UnitOfMeasure_34.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_34;
      UnitOfMeasureQty_34.setString("20608790");
      noQuoteEntries_0_1_2.set(UnitOfMeasureQty_34);
      Instrument_34.insert(UnitOfMeasureQty_34.getString());
      FIX::ValuationMethod ValuationMethod_34("STRING_CDSD");
      noQuoteEntries_0_1_2.set(ValuationMethod_34);
      Instrument_34.insert(ValuationMethod_34.getString());
      all_values.push_back(Instrument_34);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_68;
        FIX::ComplexEventCondition ComplexEventCondition_68(2);
        noComplexEvents_0_2_2_0.set(ComplexEventCondition_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventCondition_68.getString());
        FIX::ComplexEventPrice ComplexEventPrice_68;
        ComplexEventPrice_68.setString("4509898");
        noComplexEvents_0_2_2_0.set(ComplexEventPrice_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPrice_68.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_68(5);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryMethod_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryMethod_68.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_68;
        ComplexEventPriceBoundaryPrecision_68.setString("29.960000");
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryPrecision_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryPrecision_68.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_68(1);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceTimeType_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceTimeType_68.getString());
        FIX::ComplexEventType ComplexEventType_68(1);
        noComplexEvents_0_2_2_0.set(ComplexEventType_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventType_68.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_68;
        ComplexOptPayoutAmount_68.setString("13610179");
        noComplexEvents_0_2_2_0.set(ComplexOptPayoutAmount_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexOptPayoutAmount_68.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_68);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_145;
          FIX::ComplexEventEndDate ComplexEventEndDate_145(FIX::UTCTIMESTAMP(16, 16, 45, 11, 8, 2007));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventEndDate_145);
          ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventEndDate_145.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_145(FIX::UTCTIMESTAMP(19, 4, 21, 14, 1, 2014));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventStartDate_145);
          ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventStartDate_145.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_145);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_289;
            FIX::ComplexEventEndTime ComplexEventEndTime_289(FIX::UTCTIMEONLY(21, 42, 31));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventEndTime_289);
            ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventEndTime_289.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_289(FIX::UTCTIMEONLY(12, 25, 38));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventStartTime_289);
            ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventStartTime_289.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_289);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_290;
            FIX::ComplexEventEndTime ComplexEventEndTime_290(FIX::UTCTIMEONLY(19, 37, 9));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventEndTime_290);
            ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventEndTime_290.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_290(FIX::UTCTIMEONLY(14, 6, 26));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventStartTime_290);
            ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventStartTime_290.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_290);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_291;
            FIX::ComplexEventEndTime ComplexEventEndTime_291(FIX::UTCTIMEONLY(22, 42, 34));
            noComplexEventTimes_0_2_0_0_4_2.set(ComplexEventEndTime_291);
            ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventEndTime_291.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_291(FIX::UTCTIMEONLY(5, 53, 49));
            noComplexEventTimes_0_2_0_0_4_2.set(ComplexEventStartTime_291);
            ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventStartTime_291.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_291);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_2);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_64;
        FIX::EventDate EventDate_64("LOCALMKTDATE_128526169");
        noEvents_0_2_2_0.set(EventDate_64);
        EvntGrp_NoEvents_64.insert(EventDate_64.getString());
        FIX::EventPx EventPx_64;
        EventPx_64.setString("9221986");
        noEvents_0_2_2_0.set(EventPx_64);
        EvntGrp_NoEvents_64.insert(EventPx_64.getString());
        FIX::EventText EventText_64("STRING_1866620655");
        noEvents_0_2_2_0.set(EventText_64);
        EvntGrp_NoEvents_64.insert(EventText_64.getString());
        FIX::EventTime EventTime_64(FIX::UTCTIMESTAMP(14, 2, 37, 12, 2, 2014));
        noEvents_0_2_2_0.set(EventTime_64);
        EvntGrp_NoEvents_64.insert(EventTime_64.getString());
        FIX::EventType EventType_64(12);
        noEvents_0_2_2_0.set(EventType_64);
        EvntGrp_NoEvents_64.insert(EventType_64.getString());
        all_values.push_back(EvntGrp_NoEvents_64);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_65;
        FIX::EventDate EventDate_65("LOCALMKTDATE_1264914421");
        noEvents_0_2_2_1.set(EventDate_65);
        EvntGrp_NoEvents_65.insert(EventDate_65.getString());
        FIX::EventPx EventPx_65;
        EventPx_65.setString("7167920");
        noEvents_0_2_2_1.set(EventPx_65);
        EvntGrp_NoEvents_65.insert(EventPx_65.getString());
        FIX::EventText EventText_65("STRING_1239896669");
        noEvents_0_2_2_1.set(EventText_65);
        EvntGrp_NoEvents_65.insert(EventText_65.getString());
        FIX::EventTime EventTime_65(FIX::UTCTIMESTAMP(9, 7, 28, 7, 2, 2016));
        noEvents_0_2_2_1.set(EventTime_65);
        EvntGrp_NoEvents_65.insert(EventTime_65.getString());
        FIX::EventType EventType_65(15);
        noEvents_0_2_2_1.set(EventType_65);
        EvntGrp_NoEvents_65.insert(EventType_65.getString());
        all_values.push_back(EvntGrp_NoEvents_65);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_64;
        FIX::InstrumentPartyID InstrumentPartyID_64("STRING_1310358481");
        noInstrumentParties_0_2_2_0.set(InstrumentPartyID_64);
        InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyID_64.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_64('1');
        noInstrumentParties_0_2_2_0.set(InstrumentPartyIDSource_64);
        InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyIDSource_64.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_64(1194902903);
        noInstrumentParties_0_2_2_0.set(InstrumentPartyRole_64);
        InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyRole_64.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_64);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126;
          FIX::InstrumentPartySubID InstrumentPartySubID_126("STRING_532802970");
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubID_126);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126.insert(InstrumentPartySubID_126.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_126(887818268);
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubIDType_126);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126.insert(InstrumentPartySubIDType_126.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127;
          FIX::InstrumentPartySubID InstrumentPartySubID_127("STRING_332202292");
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubID_127);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127.insert(InstrumentPartySubID_127.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_127(1886431915);
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubIDType_127);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127.insert(InstrumentPartySubIDType_127.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128;
          FIX::InstrumentPartySubID InstrumentPartySubID_128("STRING_1016344437");
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubID_128);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128.insert(InstrumentPartySubID_128.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_128(1254400975);
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubIDType_128);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128.insert(InstrumentPartySubIDType_128.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_65;
        FIX::InstrumentPartyID InstrumentPartyID_65("STRING_1605568922");
        noInstrumentParties_0_2_2_1.set(InstrumentPartyID_65);
        InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyID_65.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_65('2');
        noInstrumentParties_0_2_2_1.set(InstrumentPartyIDSource_65);
        InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyIDSource_65.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_65(1759927749);
        noInstrumentParties_0_2_2_1.set(InstrumentPartyRole_65);
        InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyRole_65.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_65);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129;
          FIX::InstrumentPartySubID InstrumentPartySubID_129("STRING_742427440");
          noInstrumentPartySubIDs_0_2_1_3_0.set(InstrumentPartySubID_129);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129.insert(InstrumentPartySubID_129.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_129(2049425137);
          noInstrumentPartySubIDs_0_2_1_3_0.set(InstrumentPartySubIDType_129);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129.insert(InstrumentPartySubIDType_129.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_57;
        FIX::SecurityAltID SecurityAltID_57("STRING_1711242768");
        noSecurityAltID_0_2_2_0.set(SecurityAltID_57);
        SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltID_57.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_57("STRING_486618380");
        noSecurityAltID_0_2_2_0.set(SecurityAltIDSource_57);
        SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltIDSource_57.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_57);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_58;
        FIX::SecurityAltID SecurityAltID_58("STRING_1317732807");
        noSecurityAltID_0_2_2_1.set(SecurityAltID_58);
        SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltID_58.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_58("STRING_280551126");
        noSecurityAltID_0_2_2_1.set(SecurityAltIDSource_58);
        SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltIDSource_58.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_58);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_59;
        FIX::SecurityAltID SecurityAltID_59("STRING_1726515050");
        noSecurityAltID_0_2_2_2.set(SecurityAltID_59);
        SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltID_59.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_59("STRING_1987949573");
        noSecurityAltID_0_2_2_2.set(SecurityAltIDSource_59);
        SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltIDSource_59.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_59);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_68;
      FIX::SecurityXML SecurityXML_69("XMLDATA_1196309631");
      noQuoteEntries_0_1_2.set(SecurityXML_69);
      FIX::SecurityXMLLen SecurityXMLLen_34(1642616449);
      noQuoteEntries_0_1_2.set(SecurityXMLLen_34);
      FIX::SecurityXMLSchema SecurityXMLSchema_34("STRING_301108033");
      noQuoteEntries_0_1_2.set(SecurityXMLSchema_34);
      SecurityXML_68.insert(SecurityXMLSchema_34.getString());
      all_values.push_back(SecurityXML_68);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_54;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_54("DATA_1521082059");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuer_54.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_54(667450662);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingIssuerLen_54.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_54("DATA_1913193468");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDesc_54.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_54(353177205);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_54);
    UnderlyingInstrument_54.insert(EncodedUnderlyingSecurityDescLen_54.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_54;
    UnderlyingAdjustedQuantity_54.setString("9650522");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_54);
    UnderlyingInstrument_54.insert(UnderlyingAdjustedQuantity_54.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_54;
    UnderlyingAllocationPercent_54.setString("83.010000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_54);
    UnderlyingInstrument_54.insert(UnderlyingAllocationPercent_54.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_54;
    UnderlyingAttachmentPoint_54.setString("75.530000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingAttachmentPoint_54.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_54("STRING_12471467");
    noQuoteSets_0_0.set(UnderlyingCFICode_54);
    UnderlyingInstrument_54.insert(UnderlyingCFICode_54.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_54("STRING_1841059672");
    noQuoteSets_0_0.set(UnderlyingCPProgram_54);
    UnderlyingInstrument_54.insert(UnderlyingCPProgram_54.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_54("STRING_623150523");
    noQuoteSets_0_0.set(UnderlyingCPRegType_54);
    UnderlyingInstrument_54.insert(UnderlyingCPRegType_54.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_54;
    UnderlyingCapValue_54.setString("9002897");
    noQuoteSets_0_0.set(UnderlyingCapValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCapValue_54.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_54;
    UnderlyingCashAmount_54.setString("257783");
    noQuoteSets_0_0.set(UnderlyingCashAmount_54);
    UnderlyingInstrument_54.insert(UnderlyingCashAmount_54.getString());
    FIX::UnderlyingCashType UnderlyingCashType_54("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_54);
    UnderlyingInstrument_54.insert(UnderlyingCashType_54.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_54;
    UnderlyingContractMultiplier_54.setString("19166341");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplier_54.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_54(1280179291);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingContractMultiplierUnit_54.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_54("COUNTRY_1967667713");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingCountryOfIssue_54.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_54("LOCALMKTDATE_1781176976");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponPaymentDate_54.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_54;
    UnderlyingCouponRate_54.setString("33.930000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_54);
    UnderlyingInstrument_54.insert(UnderlyingCouponRate_54.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_54("STRING_1371735402");
    noQuoteSets_0_0.set(UnderlyingCreditRating_54);
    UnderlyingInstrument_54.insert(UnderlyingCreditRating_54.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_54("GBP");
    noQuoteSets_0_0.set(UnderlyingCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrency_54.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_54;
    UnderlyingCurrentValue_54.setString("14245537");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_54);
    UnderlyingInstrument_54.insert(UnderlyingCurrentValue_54.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_54;
    UnderlyingDetachmentPoint_54.setString("35.360000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_54);
    UnderlyingInstrument_54.insert(UnderlyingDetachmentPoint_54.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_54;
    UnderlyingDirtyPrice_54.setString("12811832");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingDirtyPrice_54.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_54;
    UnderlyingEndPrice_54.setString("5948029");
    noQuoteSets_0_0.set(UnderlyingEndPrice_54);
    UnderlyingInstrument_54.insert(UnderlyingEndPrice_54.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_54;
    UnderlyingEndValue_54.setString("2204310");
    noQuoteSets_0_0.set(UnderlyingEndValue_54);
    UnderlyingInstrument_54.insert(UnderlyingEndValue_54.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_54(860214665);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_54);
    UnderlyingInstrument_54.insert(UnderlyingExerciseStyle_54.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_54;
    UnderlyingFXRate_54.setString("4352688");
    noQuoteSets_0_0.set(UnderlyingFXRate_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRate_54.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_54('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_54);
    UnderlyingInstrument_54.insert(UnderlyingFXRateCalc_54.getString());
    FIX::UnderlyingFactor UnderlyingFactor_54;
    UnderlyingFactor_54.setString("3553474");
    noQuoteSets_0_0.set(UnderlyingFactor_54);
    UnderlyingInstrument_54.insert(UnderlyingFactor_54.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_54(736376906);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_54);
    UnderlyingInstrument_54.insert(UnderlyingFlowScheduleType_54.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_54("STRING_790339057");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_54);
    UnderlyingInstrument_54.insert(UnderlyingInstrRegistry_54.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_54("LOCALMKTDATE_1022798128");
    noQuoteSets_0_0.set(UnderlyingIssueDate_54);
    UnderlyingInstrument_54.insert(UnderlyingIssueDate_54.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_54("STRING_502086726");
    noQuoteSets_0_0.set(UnderlyingIssuer_54);
    UnderlyingInstrument_54.insert(UnderlyingIssuer_54.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_54("STRING_1143516262");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingLocaleOfIssue_54.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_54("LOCALMKTDATE_1987850339");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityDate_54.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_54("MONTHYEAR_1578155027");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityMonthYear_54.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_54("TZTIMEONLY_1233863816");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_54);
    UnderlyingInstrument_54.insert(UnderlyingMaturityTime_54.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_54;
    UnderlyingNotionalPercentageOutstanding_54.setString("18.060000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_54('1');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_54);
    UnderlyingInstrument_54.insert(UnderlyingOptAttribute_54.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_54;
    UnderlyingOriginalNotionalPercentageOutstanding_54.setString("43.390000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_54);
    UnderlyingInstrument_54.insert(UnderlyingOriginalNotionalPercentageOutstanding_54.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_54("STRING_753127894");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasure_54.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_54;
    UnderlyingPriceUnitOfMeasureQty_54.setString("12975093");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingPriceUnitOfMeasureQty_54.getString());
    FIX::UnderlyingProduct UnderlyingProduct_54(71629482);
    noQuoteSets_0_0.set(UnderlyingProduct_54);
    UnderlyingInstrument_54.insert(UnderlyingProduct_54.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_54(522278419);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_54);
    UnderlyingInstrument_54.insert(UnderlyingPutOrCall_54.getString());
    FIX::UnderlyingPx UnderlyingPx_54;
    UnderlyingPx_54.setString("4302050");
    noQuoteSets_0_0.set(UnderlyingPx_54);
    UnderlyingInstrument_54.insert(UnderlyingPx_54.getString());
    FIX::UnderlyingQty UnderlyingQty_54;
    UnderlyingQty_54.setString("20392971");
    noQuoteSets_0_0.set(UnderlyingQty_54);
    UnderlyingInstrument_54.insert(UnderlyingQty_54.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_54("LOCALMKTDATE_155971747");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_54);
    UnderlyingInstrument_54.insert(UnderlyingRedemptionDate_54.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_54("STRING_1322828404");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingRepoCollateralSecurityType_54.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_54;
    UnderlyingRepurchaseRate_54.setString("89.490000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseRate_54.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_54(532092515);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_54);
    UnderlyingInstrument_54.insert(UnderlyingRepurchaseTerm_54.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_54("STRING_2117393286");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_54);
    UnderlyingInstrument_54.insert(UnderlyingRestructuringType_54.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_54("STRING_540619089");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityDesc_54.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_54("EXCHANGE_471972403");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityExchange_54.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_54("STRING_1251092901");
    noQuoteSets_0_0.set(UnderlyingSecurityID_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityID_54.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_54("STRING_1135422036");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityIDSource_54.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_54("STRING_692403418");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecuritySubType_54.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_54("STRING_2111307566");
    noQuoteSets_0_0.set(UnderlyingSecurityType_54);
    UnderlyingInstrument_54.insert(UnderlyingSecurityType_54.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_54("STRING_1570690908");
    noQuoteSets_0_0.set(UnderlyingSeniority_54);
    UnderlyingInstrument_54.insert(UnderlyingSeniority_54.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_54("STRING_2109144065");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlMethod_54.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_54(4);
    noQuoteSets_0_0.set(UnderlyingSettlementType_54);
    UnderlyingInstrument_54.insert(UnderlyingSettlementType_54.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_54;
    UnderlyingStartValue_54.setString("1595841");
    noQuoteSets_0_0.set(UnderlyingStartValue_54);
    UnderlyingInstrument_54.insert(UnderlyingStartValue_54.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_54("STRING_751999474");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_54);
    UnderlyingInstrument_54.insert(UnderlyingStateOrProvinceOfIssue_54.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_54("USD");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikeCurrency_54.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_54;
    UnderlyingStrikePrice_54.setString("18955157");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_54);
    UnderlyingInstrument_54.insert(UnderlyingStrikePrice_54.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_54("STRING_1182336204");
    noQuoteSets_0_0.set(UnderlyingSymbol_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbol_54.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_54("STRING_92342271");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_54);
    UnderlyingInstrument_54.insert(UnderlyingSymbolSfx_54.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_54("STRING_981895905");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_54);
    UnderlyingInstrument_54.insert(UnderlyingTimeUnit_54.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_54("STRING_1035174362");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasure_54.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_54;
    UnderlyingUnitOfMeasureQty_54.setString("13640733");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_54);
    UnderlyingInstrument_54.insert(UnderlyingUnitOfMeasureQty_54.getString());
    all_values.push_back(UnderlyingInstrument_54);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_113;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_113("STRING_1788302256");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltID_113.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_113("STRING_514099042");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltIDSource_113.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_106;
      FIX::UnderlyingStipType UnderlyingStipType_106("STRING_163097027");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipType_106.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_106("STRING_944304053");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_106);
      UnderlyingStipulations_NoUnderlyingStips_106.insert(UnderlyingStipValue_106.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_106);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_101;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_101("STRING_319068774");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_101);
      UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyID_101.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_101('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_101);
      UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyIDSource_101.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_101(1918418574);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_101);
      UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyRole_101.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_101);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_200("STRING_89558447");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_200);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubID_200.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_200(311554015);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_200);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubIDType_200.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_201("STRING_1323133693");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_201);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201.insert(UnderlyingInstrumentPartySubID_201.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_201(1340651349);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_201);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201.insert(UnderlyingInstrumentPartySubIDType_201.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_202("STRING_1446976051");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_202);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202.insert(UnderlyingInstrumentPartySubID_202.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_202(2015537111);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_202);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202.insert(UnderlyingInstrumentPartySubIDType_202.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noQuoteSets_0_0);
  }
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_1;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_1;
    FIX::LastFragment LastFragment_9(false);
    noQuoteSets_0_1.set(LastFragment_9);
    QuotSetGrp_NoQuoteSets_1.insert(LastFragment_9.getString());
    FIX::QuoteSetID QuoteSetID_1("STRING_870183312");
    noQuoteSets_0_1.set(QuoteSetID_1);
    QuotSetGrp_NoQuoteSets_1.insert(QuoteSetID_1.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_1(FIX::UTCTIMESTAMP(20, 18, 35, 12, 8, 2006));
    noQuoteSets_0_1.set(QuoteSetValidUntilTime_1);
    QuotSetGrp_NoQuoteSets_1.insert(QuoteSetValidUntilTime_1.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_1(2000468720);
    noQuoteSets_0_1.set(TotNoQuoteEntries_1);
    QuotSetGrp_NoQuoteSets_1.insert(TotNoQuoteEntries_1.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_1);
    all_compo_names.insert("QuotSetGrp.NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_3;
      BidForwardPoints_3.setString("13116413");
      noQuoteEntries_1_1_0.set(BidForwardPoints_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidForwardPoints_3.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_3;
      BidForwardPoints2_3.setString("8881594");
      noQuoteEntries_1_1_0.set(BidForwardPoints2_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidForwardPoints2_3.getString());
      FIX::BidPx BidPx_3;
      BidPx_3.setString("10003703");
      noQuoteEntries_1_1_0.set(BidPx_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidPx_3.getString());
      FIX::BidSize BidSize_3;
      BidSize_3.setString("20030679");
      noQuoteEntries_1_1_0.set(BidSize_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidSize_3.getString());
      FIX::BidSpotRate BidSpotRate_3;
      BidSpotRate_3.setString("5289780");
      noQuoteEntries_1_1_0.set(BidSpotRate_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidSpotRate_3.getString());
      FIX::BidYield BidYield_3;
      BidYield_3.setString("93.590000");
      noQuoteEntries_1_1_0.set(BidYield_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidYield_3.getString());
      FIX::BookingType BookingType_10(2);
      noQuoteEntries_1_1_0.set(BookingType_10);
      QuotEntryGrp_NoQuoteEntries_3.insert(BookingType_10.getString());
      FIX::Currency Currency_33("GBP");
      noQuoteEntries_1_1_0.set(Currency_33);
      QuotEntryGrp_NoQuoteEntries_3.insert(Currency_33.getString());
      FIX::MidPx MidPx_3;
      MidPx_3.setString("12735100");
      noQuoteEntries_1_1_0.set(MidPx_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(MidPx_3.getString());
      FIX::MidYield MidYield_3;
      MidYield_3.setString("38.450000");
      noQuoteEntries_1_1_0.set(MidYield_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(MidYield_3.getString());
      FIX::OfferForwardPoints OfferForwardPoints_3;
      OfferForwardPoints_3.setString("4309385");
      noQuoteEntries_1_1_0.set(OfferForwardPoints_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferForwardPoints_3.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_3;
      OfferForwardPoints2_3.setString("10444449");
      noQuoteEntries_1_1_0.set(OfferForwardPoints2_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferForwardPoints2_3.getString());
      FIX::OfferPx OfferPx_3;
      OfferPx_3.setString("18623051");
      noQuoteEntries_1_1_0.set(OfferPx_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferPx_3.getString());
      FIX::OfferSize OfferSize_3;
      OfferSize_3.setString("5204970");
      noQuoteEntries_1_1_0.set(OfferSize_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferSize_3.getString());
      FIX::OfferSpotRate OfferSpotRate_3;
      OfferSpotRate_3.setString("13559989");
      noQuoteEntries_1_1_0.set(OfferSpotRate_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferSpotRate_3.getString());
      FIX::OfferYield OfferYield_3;
      OfferYield_3.setString("51.800000");
      noQuoteEntries_1_1_0.set(OfferYield_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferYield_3.getString());
      FIX::OrdType OrdType_36('I');
      noQuoteEntries_1_1_0.set(OrdType_36);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrdType_36.getString());
      FIX::OrderCapacity OrderCapacity_11('W');
      noQuoteEntries_1_1_0.set(OrderCapacity_11);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrderCapacity_11.getString());
      FIX::OrderQty2 OrderQty2_4;
      OrderQty2_4.setString("9060086");
      noQuoteEntries_1_1_0.set(OrderQty2_4);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrderQty2_4.getString());
      FIX::OrderRestrictions OrderRestrictions_8("MULTIPLECHARVALUE_5");
      noQuoteEntries_1_1_0.set(OrderRestrictions_8);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrderRestrictions_8.getString());
      FIX::QuoteEntryID QuoteEntryID_6("STRING_1525674659");
      noQuoteEntries_1_1_0.set(QuoteEntryID_6);
      QuotEntryGrp_NoQuoteEntries_3.insert(QuoteEntryID_6.getString());
      FIX::SettlDate SettlDate_26("LOCALMKTDATE_735722524");
      noQuoteEntries_1_1_0.set(SettlDate_26);
      QuotEntryGrp_NoQuoteEntries_3.insert(SettlDate_26.getString());
      FIX::SettlDate2 SettlDate2_4("LOCALMKTDATE_494302993");
      noQuoteEntries_1_1_0.set(SettlDate2_4);
      QuotEntryGrp_NoQuoteEntries_3.insert(SettlDate2_4.getString());
      FIX::TradingSessionID TradingSessionID_39("STRING_4");
      noQuoteEntries_1_1_0.set(TradingSessionID_39);
      QuotEntryGrp_NoQuoteEntries_3.insert(TradingSessionID_39.getString());
      FIX::TradingSessionSubID TradingSessionSubID_39("STRING_5");
      noQuoteEntries_1_1_0.set(TradingSessionSubID_39);
      QuotEntryGrp_NoQuoteEntries_3.insert(TradingSessionSubID_39.getString());
      FIX::TransactTime TransactTime_29(FIX::UTCTIMESTAMP(4, 3, 22, 7, 5, 2013));
      noQuoteEntries_1_1_0.set(TransactTime_29);
      QuotEntryGrp_NoQuoteEntries_3.insert(TransactTime_29.getString());
      FIX::ValidUntilTime ValidUntilTime_4(FIX::UTCTIMESTAMP(17, 12, 23, 5, 8, 2005));
      noQuoteEntries_1_1_0.set(ValidUntilTime_4);
      QuotEntryGrp_NoQuoteEntries_3.insert(ValidUntilTime_4.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_3);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_66;
        FIX::EncodedLegIssuer EncodedLegIssuer_66("DATA_2138293329");
        noLegs_1_0_2_0.set(EncodedLegIssuer_66);
        InstrumentLeg_66.insert(EncodedLegIssuer_66.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_66(697794572);
        noLegs_1_0_2_0.set(EncodedLegIssuerLen_66);
        InstrumentLeg_66.insert(EncodedLegIssuerLen_66.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_66("DATA_1456034979");
        noLegs_1_0_2_0.set(EncodedLegSecurityDesc_66);
        InstrumentLeg_66.insert(EncodedLegSecurityDesc_66.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_66(1853114816);
        noLegs_1_0_2_0.set(EncodedLegSecurityDescLen_66);
        InstrumentLeg_66.insert(EncodedLegSecurityDescLen_66.getString());
        FIX::LegCFICode LegCFICode_66("STRING_1218291592");
        noLegs_1_0_2_0.set(LegCFICode_66);
        InstrumentLeg_66.insert(LegCFICode_66.getString());
        FIX::LegContractMultiplier LegContractMultiplier_66;
        LegContractMultiplier_66.setString("6645502");
        noLegs_1_0_2_0.set(LegContractMultiplier_66);
        InstrumentLeg_66.insert(LegContractMultiplier_66.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_66(743586348);
        noLegs_1_0_2_0.set(LegContractMultiplierUnit_66);
        InstrumentLeg_66.insert(LegContractMultiplierUnit_66.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_66("MONTHYEAR_931956314");
        noLegs_1_0_2_0.set(LegContractSettlMonth_66);
        InstrumentLeg_66.insert(LegContractSettlMonth_66.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_66("COUNTRY_1320041621");
        noLegs_1_0_2_0.set(LegCountryOfIssue_66);
        InstrumentLeg_66.insert(LegCountryOfIssue_66.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_66("LOCALMKTDATE_1649594991");
        noLegs_1_0_2_0.set(LegCouponPaymentDate_66);
        InstrumentLeg_66.insert(LegCouponPaymentDate_66.getString());
        FIX::LegCouponRate LegCouponRate_66;
        LegCouponRate_66.setString("63.030000");
        noLegs_1_0_2_0.set(LegCouponRate_66);
        InstrumentLeg_66.insert(LegCouponRate_66.getString());
        FIX::LegCreditRating LegCreditRating_66("STRING_698232632");
        noLegs_1_0_2_0.set(LegCreditRating_66);
        InstrumentLeg_66.insert(LegCreditRating_66.getString());
        FIX::LegCurrency LegCurrency_66("GBP");
        noLegs_1_0_2_0.set(LegCurrency_66);
        InstrumentLeg_66.insert(LegCurrency_66.getString());
        FIX::LegDatedDate LegDatedDate_66("LOCALMKTDATE_1106191122");
        noLegs_1_0_2_0.set(LegDatedDate_66);
        InstrumentLeg_66.insert(LegDatedDate_66.getString());
        FIX::LegExerciseStyle LegExerciseStyle_66(1555269746);
        noLegs_1_0_2_0.set(LegExerciseStyle_66);
        InstrumentLeg_66.insert(LegExerciseStyle_66.getString());
        FIX::LegFactor LegFactor_66;
        LegFactor_66.setString("16093511");
        noLegs_1_0_2_0.set(LegFactor_66);
        InstrumentLeg_66.insert(LegFactor_66.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_66(1058104334);
        noLegs_1_0_2_0.set(LegFlowScheduleType_66);
        InstrumentLeg_66.insert(LegFlowScheduleType_66.getString());
        FIX::LegInstrRegistry LegInstrRegistry_66("STRING_1054967421");
        noLegs_1_0_2_0.set(LegInstrRegistry_66);
        InstrumentLeg_66.insert(LegInstrRegistry_66.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_66("LOCALMKTDATE_627288091");
        noLegs_1_0_2_0.set(LegInterestAccrualDate_66);
        InstrumentLeg_66.insert(LegInterestAccrualDate_66.getString());
        FIX::LegIssueDate LegIssueDate_66("LOCALMKTDATE_646314541");
        noLegs_1_0_2_0.set(LegIssueDate_66);
        InstrumentLeg_66.insert(LegIssueDate_66.getString());
        FIX::LegIssuer LegIssuer_66("STRING_1866306445");
        noLegs_1_0_2_0.set(LegIssuer_66);
        InstrumentLeg_66.insert(LegIssuer_66.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_66("STRING_533384460");
        noLegs_1_0_2_0.set(LegLocaleOfIssue_66);
        InstrumentLeg_66.insert(LegLocaleOfIssue_66.getString());
        FIX::LegMaturityDate LegMaturityDate_66("LOCALMKTDATE_1234895065");
        noLegs_1_0_2_0.set(LegMaturityDate_66);
        InstrumentLeg_66.insert(LegMaturityDate_66.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_66("MONTHYEAR_385746119");
        noLegs_1_0_2_0.set(LegMaturityMonthYear_66);
        InstrumentLeg_66.insert(LegMaturityMonthYear_66.getString());
        FIX::LegMaturityTime LegMaturityTime_66("TZTIMEONLY_968458873");
        noLegs_1_0_2_0.set(LegMaturityTime_66);
        InstrumentLeg_66.insert(LegMaturityTime_66.getString());
        FIX::LegOptAttribute LegOptAttribute_66('1');
        noLegs_1_0_2_0.set(LegOptAttribute_66);
        InstrumentLeg_66.insert(LegOptAttribute_66.getString());
        FIX::LegOptionRatio LegOptionRatio_66;
        LegOptionRatio_66.setString("16713098");
        noLegs_1_0_2_0.set(LegOptionRatio_66);
        InstrumentLeg_66.insert(LegOptionRatio_66.getString());
        FIX::LegPool LegPool_66("STRING_2095608356");
        noLegs_1_0_2_0.set(LegPool_66);
        InstrumentLeg_66.insert(LegPool_66.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_66("STRING_1457317299");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasure_66);
        InstrumentLeg_66.insert(LegPriceUnitOfMeasure_66.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_66;
        LegPriceUnitOfMeasureQty_66.setString("20828998");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasureQty_66);
        InstrumentLeg_66.insert(LegPriceUnitOfMeasureQty_66.getString());
        FIX::LegProduct LegProduct_66(2086418037);
        noLegs_1_0_2_0.set(LegProduct_66);
        InstrumentLeg_66.insert(LegProduct_66.getString());
        FIX::LegPutOrCall LegPutOrCall_66(7628223);
        noLegs_1_0_2_0.set(LegPutOrCall_66);
        InstrumentLeg_66.insert(LegPutOrCall_66.getString());
        FIX::LegRatioQty LegRatioQty_66;
        LegRatioQty_66.setString("13914511");
        noLegs_1_0_2_0.set(LegRatioQty_66);
        InstrumentLeg_66.insert(LegRatioQty_66.getString());
        FIX::LegRedemptionDate LegRedemptionDate_66("LOCALMKTDATE_1792049205");
        noLegs_1_0_2_0.set(LegRedemptionDate_66);
        InstrumentLeg_66.insert(LegRedemptionDate_66.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_66("STRING_1225919816");
        noLegs_1_0_2_0.set(LegRepoCollateralSecurityType_66);
        InstrumentLeg_66.insert(LegRepoCollateralSecurityType_66.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_66;
        LegRepurchaseRate_66.setString("14.730000");
        noLegs_1_0_2_0.set(LegRepurchaseRate_66);
        InstrumentLeg_66.insert(LegRepurchaseRate_66.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_66(388151905);
        noLegs_1_0_2_0.set(LegRepurchaseTerm_66);
        InstrumentLeg_66.insert(LegRepurchaseTerm_66.getString());
        FIX::LegSecurityDesc LegSecurityDesc_66("STRING_10392482");
        noLegs_1_0_2_0.set(LegSecurityDesc_66);
        InstrumentLeg_66.insert(LegSecurityDesc_66.getString());
        FIX::LegSecurityExchange LegSecurityExchange_66("EXCHANGE_1228559446");
        noLegs_1_0_2_0.set(LegSecurityExchange_66);
        InstrumentLeg_66.insert(LegSecurityExchange_66.getString());
        FIX::LegSecurityID LegSecurityID_66("STRING_2037746897");
        noLegs_1_0_2_0.set(LegSecurityID_66);
        InstrumentLeg_66.insert(LegSecurityID_66.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_66("STRING_1960488785");
        noLegs_1_0_2_0.set(LegSecurityIDSource_66);
        InstrumentLeg_66.insert(LegSecurityIDSource_66.getString());
        FIX::LegSecuritySubType LegSecuritySubType_66("STRING_1926792079");
        noLegs_1_0_2_0.set(LegSecuritySubType_66);
        InstrumentLeg_66.insert(LegSecuritySubType_66.getString());
        FIX::LegSecurityType LegSecurityType_66("STRING_128097116");
        noLegs_1_0_2_0.set(LegSecurityType_66);
        InstrumentLeg_66.insert(LegSecurityType_66.getString());
        FIX::LegSide LegSide_66('1');
        noLegs_1_0_2_0.set(LegSide_66);
        InstrumentLeg_66.insert(LegSide_66.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_66("STRING_885499553");
        noLegs_1_0_2_0.set(LegStateOrProvinceOfIssue_66);
        InstrumentLeg_66.insert(LegStateOrProvinceOfIssue_66.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_66("JPY");
        noLegs_1_0_2_0.set(LegStrikeCurrency_66);
        InstrumentLeg_66.insert(LegStrikeCurrency_66.getString());
        FIX::LegStrikePrice LegStrikePrice_66;
        LegStrikePrice_66.setString("19436038");
        noLegs_1_0_2_0.set(LegStrikePrice_66);
        InstrumentLeg_66.insert(LegStrikePrice_66.getString());
        FIX::LegSymbol LegSymbol_66("STRING_590850636");
        noLegs_1_0_2_0.set(LegSymbol_66);
        InstrumentLeg_66.insert(LegSymbol_66.getString());
        FIX::LegSymbolSfx LegSymbolSfx_66("STRING_199076386");
        noLegs_1_0_2_0.set(LegSymbolSfx_66);
        InstrumentLeg_66.insert(LegSymbolSfx_66.getString());
        FIX::LegTimeUnit LegTimeUnit_66("STRING_442434781");
        noLegs_1_0_2_0.set(LegTimeUnit_66);
        InstrumentLeg_66.insert(LegTimeUnit_66.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_66("STRING_309673434");
        noLegs_1_0_2_0.set(LegUnitOfMeasure_66);
        InstrumentLeg_66.insert(LegUnitOfMeasure_66.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_66;
        LegUnitOfMeasureQty_66.setString("7324608");
        noLegs_1_0_2_0.set(LegUnitOfMeasureQty_66);
        InstrumentLeg_66.insert(LegUnitOfMeasureQty_66.getString());
        all_values.push_back(InstrumentLeg_66);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_129;
          FIX::LegSecurityAltID LegSecurityAltID_129("STRING_695419553");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltID_129);
          LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltID_129.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_129("STRING_1700919719");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltIDSource_129);
          LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltIDSource_129.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_129);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_130;
          FIX::LegSecurityAltID LegSecurityAltID_130("STRING_720307499");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltID_130);
          LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltID_130.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_130("STRING_219245721");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltIDSource_130);
          LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltIDSource_130.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_130);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_131;
          FIX::LegSecurityAltID LegSecurityAltID_131("STRING_1649044428");
          noLegSecurityAltID_1_0_0_3_2.set(LegSecurityAltID_131);
          LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltID_131.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_131("STRING_30141150");
          noLegSecurityAltID_1_0_0_3_2.set(LegSecurityAltIDSource_131);
          LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltIDSource_131.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_131);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_67;
        FIX::EncodedLegIssuer EncodedLegIssuer_67("DATA_154661941");
        noLegs_1_0_2_1.set(EncodedLegIssuer_67);
        InstrumentLeg_67.insert(EncodedLegIssuer_67.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_67(1587978817);
        noLegs_1_0_2_1.set(EncodedLegIssuerLen_67);
        InstrumentLeg_67.insert(EncodedLegIssuerLen_67.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_67("DATA_37769374");
        noLegs_1_0_2_1.set(EncodedLegSecurityDesc_67);
        InstrumentLeg_67.insert(EncodedLegSecurityDesc_67.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_67(1546113139);
        noLegs_1_0_2_1.set(EncodedLegSecurityDescLen_67);
        InstrumentLeg_67.insert(EncodedLegSecurityDescLen_67.getString());
        FIX::LegCFICode LegCFICode_67("STRING_1232544375");
        noLegs_1_0_2_1.set(LegCFICode_67);
        InstrumentLeg_67.insert(LegCFICode_67.getString());
        FIX::LegContractMultiplier LegContractMultiplier_67;
        LegContractMultiplier_67.setString("12636891");
        noLegs_1_0_2_1.set(LegContractMultiplier_67);
        InstrumentLeg_67.insert(LegContractMultiplier_67.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_67(1454630964);
        noLegs_1_0_2_1.set(LegContractMultiplierUnit_67);
        InstrumentLeg_67.insert(LegContractMultiplierUnit_67.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_67("MONTHYEAR_1620696280");
        noLegs_1_0_2_1.set(LegContractSettlMonth_67);
        InstrumentLeg_67.insert(LegContractSettlMonth_67.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_67("COUNTRY_1274081672");
        noLegs_1_0_2_1.set(LegCountryOfIssue_67);
        InstrumentLeg_67.insert(LegCountryOfIssue_67.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_67("LOCALMKTDATE_535706763");
        noLegs_1_0_2_1.set(LegCouponPaymentDate_67);
        InstrumentLeg_67.insert(LegCouponPaymentDate_67.getString());
        FIX::LegCouponRate LegCouponRate_67;
        LegCouponRate_67.setString("95.290000");
        noLegs_1_0_2_1.set(LegCouponRate_67);
        InstrumentLeg_67.insert(LegCouponRate_67.getString());
        FIX::LegCreditRating LegCreditRating_67("STRING_1087086809");
        noLegs_1_0_2_1.set(LegCreditRating_67);
        InstrumentLeg_67.insert(LegCreditRating_67.getString());
        FIX::LegCurrency LegCurrency_67("JPY");
        noLegs_1_0_2_1.set(LegCurrency_67);
        InstrumentLeg_67.insert(LegCurrency_67.getString());
        FIX::LegDatedDate LegDatedDate_67("LOCALMKTDATE_1197007594");
        noLegs_1_0_2_1.set(LegDatedDate_67);
        InstrumentLeg_67.insert(LegDatedDate_67.getString());
        FIX::LegExerciseStyle LegExerciseStyle_67(1200514747);
        noLegs_1_0_2_1.set(LegExerciseStyle_67);
        InstrumentLeg_67.insert(LegExerciseStyle_67.getString());
        FIX::LegFactor LegFactor_67;
        LegFactor_67.setString("11749398");
        noLegs_1_0_2_1.set(LegFactor_67);
        InstrumentLeg_67.insert(LegFactor_67.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_67(768795888);
        noLegs_1_0_2_1.set(LegFlowScheduleType_67);
        InstrumentLeg_67.insert(LegFlowScheduleType_67.getString());
        FIX::LegInstrRegistry LegInstrRegistry_67("STRING_996634986");
        noLegs_1_0_2_1.set(LegInstrRegistry_67);
        InstrumentLeg_67.insert(LegInstrRegistry_67.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_67("LOCALMKTDATE_1765790497");
        noLegs_1_0_2_1.set(LegInterestAccrualDate_67);
        InstrumentLeg_67.insert(LegInterestAccrualDate_67.getString());
        FIX::LegIssueDate LegIssueDate_67("LOCALMKTDATE_967872274");
        noLegs_1_0_2_1.set(LegIssueDate_67);
        InstrumentLeg_67.insert(LegIssueDate_67.getString());
        FIX::LegIssuer LegIssuer_67("STRING_1439069767");
        noLegs_1_0_2_1.set(LegIssuer_67);
        InstrumentLeg_67.insert(LegIssuer_67.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_67("STRING_2075463931");
        noLegs_1_0_2_1.set(LegLocaleOfIssue_67);
        InstrumentLeg_67.insert(LegLocaleOfIssue_67.getString());
        FIX::LegMaturityDate LegMaturityDate_67("LOCALMKTDATE_1700333121");
        noLegs_1_0_2_1.set(LegMaturityDate_67);
        InstrumentLeg_67.insert(LegMaturityDate_67.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_67("MONTHYEAR_968915966");
        noLegs_1_0_2_1.set(LegMaturityMonthYear_67);
        InstrumentLeg_67.insert(LegMaturityMonthYear_67.getString());
        FIX::LegMaturityTime LegMaturityTime_67("TZTIMEONLY_623399836");
        noLegs_1_0_2_1.set(LegMaturityTime_67);
        InstrumentLeg_67.insert(LegMaturityTime_67.getString());
        FIX::LegOptAttribute LegOptAttribute_67('1');
        noLegs_1_0_2_1.set(LegOptAttribute_67);
        InstrumentLeg_67.insert(LegOptAttribute_67.getString());
        FIX::LegOptionRatio LegOptionRatio_67;
        LegOptionRatio_67.setString("16892234");
        noLegs_1_0_2_1.set(LegOptionRatio_67);
        InstrumentLeg_67.insert(LegOptionRatio_67.getString());
        FIX::LegPool LegPool_67("STRING_842645558");
        noLegs_1_0_2_1.set(LegPool_67);
        InstrumentLeg_67.insert(LegPool_67.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_67("STRING_755329972");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasure_67);
        InstrumentLeg_67.insert(LegPriceUnitOfMeasure_67.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_67;
        LegPriceUnitOfMeasureQty_67.setString("17193646");
        noLegs_1_0_2_1.set(LegPriceUnitOfMeasureQty_67);
        InstrumentLeg_67.insert(LegPriceUnitOfMeasureQty_67.getString());
        FIX::LegProduct LegProduct_67(997307499);
        noLegs_1_0_2_1.set(LegProduct_67);
        InstrumentLeg_67.insert(LegProduct_67.getString());
        FIX::LegPutOrCall LegPutOrCall_67(195825142);
        noLegs_1_0_2_1.set(LegPutOrCall_67);
        InstrumentLeg_67.insert(LegPutOrCall_67.getString());
        FIX::LegRatioQty LegRatioQty_67;
        LegRatioQty_67.setString("17571339");
        noLegs_1_0_2_1.set(LegRatioQty_67);
        InstrumentLeg_67.insert(LegRatioQty_67.getString());
        FIX::LegRedemptionDate LegRedemptionDate_67("LOCALMKTDATE_395936990");
        noLegs_1_0_2_1.set(LegRedemptionDate_67);
        InstrumentLeg_67.insert(LegRedemptionDate_67.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_67("STRING_1428369517");
        noLegs_1_0_2_1.set(LegRepoCollateralSecurityType_67);
        InstrumentLeg_67.insert(LegRepoCollateralSecurityType_67.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_67;
        LegRepurchaseRate_67.setString("95.310000");
        noLegs_1_0_2_1.set(LegRepurchaseRate_67);
        InstrumentLeg_67.insert(LegRepurchaseRate_67.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_67(1850567955);
        noLegs_1_0_2_1.set(LegRepurchaseTerm_67);
        InstrumentLeg_67.insert(LegRepurchaseTerm_67.getString());
        FIX::LegSecurityDesc LegSecurityDesc_67("STRING_901582149");
        noLegs_1_0_2_1.set(LegSecurityDesc_67);
        InstrumentLeg_67.insert(LegSecurityDesc_67.getString());
        FIX::LegSecurityExchange LegSecurityExchange_67("EXCHANGE_2147421203");
        noLegs_1_0_2_1.set(LegSecurityExchange_67);
        InstrumentLeg_67.insert(LegSecurityExchange_67.getString());
        FIX::LegSecurityID LegSecurityID_67("STRING_238791070");
        noLegs_1_0_2_1.set(LegSecurityID_67);
        InstrumentLeg_67.insert(LegSecurityID_67.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_67("STRING_265058031");
        noLegs_1_0_2_1.set(LegSecurityIDSource_67);
        InstrumentLeg_67.insert(LegSecurityIDSource_67.getString());
        FIX::LegSecuritySubType LegSecuritySubType_67("STRING_1087024364");
        noLegs_1_0_2_1.set(LegSecuritySubType_67);
        InstrumentLeg_67.insert(LegSecuritySubType_67.getString());
        FIX::LegSecurityType LegSecurityType_67("STRING_553806264");
        noLegs_1_0_2_1.set(LegSecurityType_67);
        InstrumentLeg_67.insert(LegSecurityType_67.getString());
        FIX::LegSide LegSide_67('1');
        noLegs_1_0_2_1.set(LegSide_67);
        InstrumentLeg_67.insert(LegSide_67.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_67("STRING_136548310");
        noLegs_1_0_2_1.set(LegStateOrProvinceOfIssue_67);
        InstrumentLeg_67.insert(LegStateOrProvinceOfIssue_67.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_67("USD");
        noLegs_1_0_2_1.set(LegStrikeCurrency_67);
        InstrumentLeg_67.insert(LegStrikeCurrency_67.getString());
        FIX::LegStrikePrice LegStrikePrice_67;
        LegStrikePrice_67.setString("9053441");
        noLegs_1_0_2_1.set(LegStrikePrice_67);
        InstrumentLeg_67.insert(LegStrikePrice_67.getString());
        FIX::LegSymbol LegSymbol_67("STRING_603472349");
        noLegs_1_0_2_1.set(LegSymbol_67);
        InstrumentLeg_67.insert(LegSymbol_67.getString());
        FIX::LegSymbolSfx LegSymbolSfx_67("STRING_549877739");
        noLegs_1_0_2_1.set(LegSymbolSfx_67);
        InstrumentLeg_67.insert(LegSymbolSfx_67.getString());
        FIX::LegTimeUnit LegTimeUnit_67("STRING_1873216473");
        noLegs_1_0_2_1.set(LegTimeUnit_67);
        InstrumentLeg_67.insert(LegTimeUnit_67.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_67("STRING_2042542117");
        noLegs_1_0_2_1.set(LegUnitOfMeasure_67);
        InstrumentLeg_67.insert(LegUnitOfMeasure_67.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_67;
        LegUnitOfMeasureQty_67.setString("4778580");
        noLegs_1_0_2_1.set(LegUnitOfMeasureQty_67);
        InstrumentLeg_67.insert(LegUnitOfMeasureQty_67.getString());
        all_values.push_back(InstrumentLeg_67);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_132;
          FIX::LegSecurityAltID LegSecurityAltID_132("STRING_863974435");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltID_132);
          LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltID_132.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_132("STRING_1101257859");
          noLegSecurityAltID_1_0_1_3_0.set(LegSecurityAltIDSource_132);
          LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltIDSource_132.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_132);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_133;
          FIX::LegSecurityAltID LegSecurityAltID_133("STRING_532351491");
          noLegSecurityAltID_1_0_1_3_1.set(LegSecurityAltID_133);
          LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltID_133.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_133("STRING_405714252");
          noLegSecurityAltID_1_0_1_3_1.set(LegSecurityAltIDSource_133);
          LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltIDSource_133.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_133);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_68;
        FIX::EncodedLegIssuer EncodedLegIssuer_68("DATA_1943903417");
        noLegs_1_0_2_2.set(EncodedLegIssuer_68);
        InstrumentLeg_68.insert(EncodedLegIssuer_68.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_68(1287681463);
        noLegs_1_0_2_2.set(EncodedLegIssuerLen_68);
        InstrumentLeg_68.insert(EncodedLegIssuerLen_68.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_68("DATA_2125078867");
        noLegs_1_0_2_2.set(EncodedLegSecurityDesc_68);
        InstrumentLeg_68.insert(EncodedLegSecurityDesc_68.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_68(793727268);
        noLegs_1_0_2_2.set(EncodedLegSecurityDescLen_68);
        InstrumentLeg_68.insert(EncodedLegSecurityDescLen_68.getString());
        FIX::LegCFICode LegCFICode_68("STRING_1483506605");
        noLegs_1_0_2_2.set(LegCFICode_68);
        InstrumentLeg_68.insert(LegCFICode_68.getString());
        FIX::LegContractMultiplier LegContractMultiplier_68;
        LegContractMultiplier_68.setString("17347292");
        noLegs_1_0_2_2.set(LegContractMultiplier_68);
        InstrumentLeg_68.insert(LegContractMultiplier_68.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_68(1189664259);
        noLegs_1_0_2_2.set(LegContractMultiplierUnit_68);
        InstrumentLeg_68.insert(LegContractMultiplierUnit_68.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_68("MONTHYEAR_764392474");
        noLegs_1_0_2_2.set(LegContractSettlMonth_68);
        InstrumentLeg_68.insert(LegContractSettlMonth_68.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_68("COUNTRY_460585092");
        noLegs_1_0_2_2.set(LegCountryOfIssue_68);
        InstrumentLeg_68.insert(LegCountryOfIssue_68.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_68("LOCALMKTDATE_892748566");
        noLegs_1_0_2_2.set(LegCouponPaymentDate_68);
        InstrumentLeg_68.insert(LegCouponPaymentDate_68.getString());
        FIX::LegCouponRate LegCouponRate_68;
        LegCouponRate_68.setString("46.240000");
        noLegs_1_0_2_2.set(LegCouponRate_68);
        InstrumentLeg_68.insert(LegCouponRate_68.getString());
        FIX::LegCreditRating LegCreditRating_68("STRING_460522648");
        noLegs_1_0_2_2.set(LegCreditRating_68);
        InstrumentLeg_68.insert(LegCreditRating_68.getString());
        FIX::LegCurrency LegCurrency_68("CAN");
        noLegs_1_0_2_2.set(LegCurrency_68);
        InstrumentLeg_68.insert(LegCurrency_68.getString());
        FIX::LegDatedDate LegDatedDate_68("LOCALMKTDATE_1547547012");
        noLegs_1_0_2_2.set(LegDatedDate_68);
        InstrumentLeg_68.insert(LegDatedDate_68.getString());
        FIX::LegExerciseStyle LegExerciseStyle_68(1685345900);
        noLegs_1_0_2_2.set(LegExerciseStyle_68);
        InstrumentLeg_68.insert(LegExerciseStyle_68.getString());
        FIX::LegFactor LegFactor_68;
        LegFactor_68.setString("16876636");
        noLegs_1_0_2_2.set(LegFactor_68);
        InstrumentLeg_68.insert(LegFactor_68.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_68(1684095323);
        noLegs_1_0_2_2.set(LegFlowScheduleType_68);
        InstrumentLeg_68.insert(LegFlowScheduleType_68.getString());
        FIX::LegInstrRegistry LegInstrRegistry_68("STRING_1292183263");
        noLegs_1_0_2_2.set(LegInstrRegistry_68);
        InstrumentLeg_68.insert(LegInstrRegistry_68.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_68("LOCALMKTDATE_471750926");
        noLegs_1_0_2_2.set(LegInterestAccrualDate_68);
        InstrumentLeg_68.insert(LegInterestAccrualDate_68.getString());
        FIX::LegIssueDate LegIssueDate_68("LOCALMKTDATE_441955874");
        noLegs_1_0_2_2.set(LegIssueDate_68);
        InstrumentLeg_68.insert(LegIssueDate_68.getString());
        FIX::LegIssuer LegIssuer_68("STRING_1895655612");
        noLegs_1_0_2_2.set(LegIssuer_68);
        InstrumentLeg_68.insert(LegIssuer_68.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_68("STRING_1021628665");
        noLegs_1_0_2_2.set(LegLocaleOfIssue_68);
        InstrumentLeg_68.insert(LegLocaleOfIssue_68.getString());
        FIX::LegMaturityDate LegMaturityDate_68("LOCALMKTDATE_167688699");
        noLegs_1_0_2_2.set(LegMaturityDate_68);
        InstrumentLeg_68.insert(LegMaturityDate_68.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_68("MONTHYEAR_1790714081");
        noLegs_1_0_2_2.set(LegMaturityMonthYear_68);
        InstrumentLeg_68.insert(LegMaturityMonthYear_68.getString());
        FIX::LegMaturityTime LegMaturityTime_68("TZTIMEONLY_1499486688");
        noLegs_1_0_2_2.set(LegMaturityTime_68);
        InstrumentLeg_68.insert(LegMaturityTime_68.getString());
        FIX::LegOptAttribute LegOptAttribute_68('1');
        noLegs_1_0_2_2.set(LegOptAttribute_68);
        InstrumentLeg_68.insert(LegOptAttribute_68.getString());
        FIX::LegOptionRatio LegOptionRatio_68;
        LegOptionRatio_68.setString("5072048");
        noLegs_1_0_2_2.set(LegOptionRatio_68);
        InstrumentLeg_68.insert(LegOptionRatio_68.getString());
        FIX::LegPool LegPool_68("STRING_453260900");
        noLegs_1_0_2_2.set(LegPool_68);
        InstrumentLeg_68.insert(LegPool_68.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_68("STRING_2126106137");
        noLegs_1_0_2_2.set(LegPriceUnitOfMeasure_68);
        InstrumentLeg_68.insert(LegPriceUnitOfMeasure_68.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_68;
        LegPriceUnitOfMeasureQty_68.setString("9129191");
        noLegs_1_0_2_2.set(LegPriceUnitOfMeasureQty_68);
        InstrumentLeg_68.insert(LegPriceUnitOfMeasureQty_68.getString());
        FIX::LegProduct LegProduct_68(249680669);
        noLegs_1_0_2_2.set(LegProduct_68);
        InstrumentLeg_68.insert(LegProduct_68.getString());
        FIX::LegPutOrCall LegPutOrCall_68(1266303952);
        noLegs_1_0_2_2.set(LegPutOrCall_68);
        InstrumentLeg_68.insert(LegPutOrCall_68.getString());
        FIX::LegRatioQty LegRatioQty_68;
        LegRatioQty_68.setString("8905143");
        noLegs_1_0_2_2.set(LegRatioQty_68);
        InstrumentLeg_68.insert(LegRatioQty_68.getString());
        FIX::LegRedemptionDate LegRedemptionDate_68("LOCALMKTDATE_1043407938");
        noLegs_1_0_2_2.set(LegRedemptionDate_68);
        InstrumentLeg_68.insert(LegRedemptionDate_68.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_68("STRING_602326910");
        noLegs_1_0_2_2.set(LegRepoCollateralSecurityType_68);
        InstrumentLeg_68.insert(LegRepoCollateralSecurityType_68.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_68;
        LegRepurchaseRate_68.setString("99.010000");
        noLegs_1_0_2_2.set(LegRepurchaseRate_68);
        InstrumentLeg_68.insert(LegRepurchaseRate_68.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_68(85588549);
        noLegs_1_0_2_2.set(LegRepurchaseTerm_68);
        InstrumentLeg_68.insert(LegRepurchaseTerm_68.getString());
        FIX::LegSecurityDesc LegSecurityDesc_68("STRING_1366719384");
        noLegs_1_0_2_2.set(LegSecurityDesc_68);
        InstrumentLeg_68.insert(LegSecurityDesc_68.getString());
        FIX::LegSecurityExchange LegSecurityExchange_68("EXCHANGE_938344993");
        noLegs_1_0_2_2.set(LegSecurityExchange_68);
        InstrumentLeg_68.insert(LegSecurityExchange_68.getString());
        FIX::LegSecurityID LegSecurityID_68("STRING_978337115");
        noLegs_1_0_2_2.set(LegSecurityID_68);
        InstrumentLeg_68.insert(LegSecurityID_68.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_68("STRING_885210360");
        noLegs_1_0_2_2.set(LegSecurityIDSource_68);
        InstrumentLeg_68.insert(LegSecurityIDSource_68.getString());
        FIX::LegSecuritySubType LegSecuritySubType_68("STRING_1398867641");
        noLegs_1_0_2_2.set(LegSecuritySubType_68);
        InstrumentLeg_68.insert(LegSecuritySubType_68.getString());
        FIX::LegSecurityType LegSecurityType_68("STRING_2109876751");
        noLegs_1_0_2_2.set(LegSecurityType_68);
        InstrumentLeg_68.insert(LegSecurityType_68.getString());
        FIX::LegSide LegSide_68('6');
        noLegs_1_0_2_2.set(LegSide_68);
        InstrumentLeg_68.insert(LegSide_68.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_68("STRING_798931006");
        noLegs_1_0_2_2.set(LegStateOrProvinceOfIssue_68);
        InstrumentLeg_68.insert(LegStateOrProvinceOfIssue_68.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_68("CAN");
        noLegs_1_0_2_2.set(LegStrikeCurrency_68);
        InstrumentLeg_68.insert(LegStrikeCurrency_68.getString());
        FIX::LegStrikePrice LegStrikePrice_68;
        LegStrikePrice_68.setString("3355426");
        noLegs_1_0_2_2.set(LegStrikePrice_68);
        InstrumentLeg_68.insert(LegStrikePrice_68.getString());
        FIX::LegSymbol LegSymbol_68("STRING_792438618");
        noLegs_1_0_2_2.set(LegSymbol_68);
        InstrumentLeg_68.insert(LegSymbol_68.getString());
        FIX::LegSymbolSfx LegSymbolSfx_68("STRING_680690329");
        noLegs_1_0_2_2.set(LegSymbolSfx_68);
        InstrumentLeg_68.insert(LegSymbolSfx_68.getString());
        FIX::LegTimeUnit LegTimeUnit_68("STRING_777498555");
        noLegs_1_0_2_2.set(LegTimeUnit_68);
        InstrumentLeg_68.insert(LegTimeUnit_68.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_68("STRING_540610582");
        noLegs_1_0_2_2.set(LegUnitOfMeasure_68);
        InstrumentLeg_68.insert(LegUnitOfMeasure_68.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_68;
        LegUnitOfMeasureQty_68.setString("17023189");
        noLegs_1_0_2_2.set(LegUnitOfMeasureQty_68);
        InstrumentLeg_68.insert(LegUnitOfMeasureQty_68.getString());
        all_values.push_back(InstrumentLeg_68);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_134;
          FIX::LegSecurityAltID LegSecurityAltID_134("STRING_183841016");
          noLegSecurityAltID_1_0_2_3_0.set(LegSecurityAltID_134);
          LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltID_134.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_134("STRING_1054322035");
          noLegSecurityAltID_1_0_2_3_0.set(LegSecurityAltIDSource_134);
          LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltIDSource_134.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_134);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_0_2_2.addGroup(noLegSecurityAltID_1_0_2_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_35;
      FIX::AttachmentPoint AttachmentPoint_35;
      AttachmentPoint_35.setString("82.520000");
      noQuoteEntries_1_1_0.set(AttachmentPoint_35);
      Instrument_35.insert(AttachmentPoint_35.getString());
      FIX::CFICode CFICode_35("STRING_691045884");
      noQuoteEntries_1_1_0.set(CFICode_35);
      Instrument_35.insert(CFICode_35.getString());
      FIX::CPProgram CPProgram_35(1);
      noQuoteEntries_1_1_0.set(CPProgram_35);
      Instrument_35.insert(CPProgram_35.getString());
      FIX::CPRegType CPRegType_35("STRING_370080741");
      noQuoteEntries_1_1_0.set(CPRegType_35);
      Instrument_35.insert(CPRegType_35.getString());
      FIX::CapPrice CapPrice_35;
      CapPrice_35.setString("16039650");
      noQuoteEntries_1_1_0.set(CapPrice_35);
      Instrument_35.insert(CapPrice_35.getString());
      FIX::ContractMultiplier ContractMultiplier_35;
      ContractMultiplier_35.setString("17572636");
      noQuoteEntries_1_1_0.set(ContractMultiplier_35);
      Instrument_35.insert(ContractMultiplier_35.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_35(2);
      noQuoteEntries_1_1_0.set(ContractMultiplierUnit_35);
      Instrument_35.insert(ContractMultiplierUnit_35.getString());
      FIX::ContractSettlMonth ContractSettlMonth_35("MONTHYEAR_346995697");
      noQuoteEntries_1_1_0.set(ContractSettlMonth_35);
      Instrument_35.insert(ContractSettlMonth_35.getString());
      FIX::CountryOfIssue CountryOfIssue_35("COUNTRY_653187895");
      noQuoteEntries_1_1_0.set(CountryOfIssue_35);
      Instrument_35.insert(CountryOfIssue_35.getString());
      FIX::CouponPaymentDate CouponPaymentDate_35("LOCALMKTDATE_91227956");
      noQuoteEntries_1_1_0.set(CouponPaymentDate_35);
      Instrument_35.insert(CouponPaymentDate_35.getString());
      FIX::CouponRate CouponRate_35;
      CouponRate_35.setString("55.980000");
      noQuoteEntries_1_1_0.set(CouponRate_35);
      Instrument_35.insert(CouponRate_35.getString());
      FIX::CreditRating CreditRating_35("STRING_738776444");
      noQuoteEntries_1_1_0.set(CreditRating_35);
      Instrument_35.insert(CreditRating_35.getString());
      FIX::DatedDate DatedDate_35("LOCALMKTDATE_1457947340");
      noQuoteEntries_1_1_0.set(DatedDate_35);
      Instrument_35.insert(DatedDate_35.getString());
      FIX::DetachmentPoint DetachmentPoint_35;
      DetachmentPoint_35.setString("5.910000");
      noQuoteEntries_1_1_0.set(DetachmentPoint_35);
      Instrument_35.insert(DetachmentPoint_35.getString());
      FIX::EncodedIssuer EncodedIssuer_35("DATA_1717113559");
      noQuoteEntries_1_1_0.set(EncodedIssuer_35);
      Instrument_35.insert(EncodedIssuer_35.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_35(195674053);
      noQuoteEntries_1_1_0.set(EncodedIssuerLen_35);
      Instrument_35.insert(EncodedIssuerLen_35.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_35("DATA_1014484585");
      noQuoteEntries_1_1_0.set(EncodedSecurityDesc_35);
      Instrument_35.insert(EncodedSecurityDesc_35.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_35(1679506662);
      noQuoteEntries_1_1_0.set(EncodedSecurityDescLen_35);
      Instrument_35.insert(EncodedSecurityDescLen_35.getString());
      FIX::ExerciseStyle ExerciseStyle_35(1);
      noQuoteEntries_1_1_0.set(ExerciseStyle_35);
      Instrument_35.insert(ExerciseStyle_35.getString());
      FIX::Factor Factor_35;
      Factor_35.setString("18134155");
      noQuoteEntries_1_1_0.set(Factor_35);
      Instrument_35.insert(Factor_35.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_35(false);
      noQuoteEntries_1_1_0.set(FlexProductEligibilityIndicator_35);
      Instrument_35.insert(FlexProductEligibilityIndicator_35.getString());
      FIX::FlexibleIndicator FlexibleIndicator_35(true);
      noQuoteEntries_1_1_0.set(FlexibleIndicator_35);
      Instrument_35.insert(FlexibleIndicator_35.getString());
      FIX::FloorPrice FloorPrice_35;
      FloorPrice_35.setString("14746");
      noQuoteEntries_1_1_0.set(FloorPrice_35);
      Instrument_35.insert(FloorPrice_35.getString());
      FIX::FlowScheduleType FlowScheduleType_35(0);
      noQuoteEntries_1_1_0.set(FlowScheduleType_35);
      Instrument_35.insert(FlowScheduleType_35.getString());
      FIX::InstrRegistry InstrRegistry_35("STRING_1754063153");
      noQuoteEntries_1_1_0.set(InstrRegistry_35);
      Instrument_35.insert(InstrRegistry_35.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_35('7');
      noQuoteEntries_1_1_0.set(InstrmtAssignmentMethod_35);
      Instrument_35.insert(InstrmtAssignmentMethod_35.getString());
      FIX::InterestAccrualDate InterestAccrualDate_35("LOCALMKTDATE_365327569");
      noQuoteEntries_1_1_0.set(InterestAccrualDate_35);
      Instrument_35.insert(InterestAccrualDate_35.getString());
      FIX::IssueDate IssueDate_35("LOCALMKTDATE_1308898500");
      noQuoteEntries_1_1_0.set(IssueDate_35);
      Instrument_35.insert(IssueDate_35.getString());
      FIX::Issuer Issuer_35("STRING_1724160433");
      noQuoteEntries_1_1_0.set(Issuer_35);
      Instrument_35.insert(Issuer_35.getString());
      FIX::ListMethod ListMethod_35(1);
      noQuoteEntries_1_1_0.set(ListMethod_35);
      Instrument_35.insert(ListMethod_35.getString());
      FIX::LocaleOfIssue LocaleOfIssue_35("STRING_215736888");
      noQuoteEntries_1_1_0.set(LocaleOfIssue_35);
      Instrument_35.insert(LocaleOfIssue_35.getString());
      FIX::MaturityDate MaturityDate_35("LOCALMKTDATE_2115618686");
      noQuoteEntries_1_1_0.set(MaturityDate_35);
      Instrument_35.insert(MaturityDate_35.getString());
      FIX::MaturityMonthYear MaturityMonthYear_35("MONTHYEAR_1240214470");
      noQuoteEntries_1_1_0.set(MaturityMonthYear_35);
      Instrument_35.insert(MaturityMonthYear_35.getString());
      FIX::MaturityTime MaturityTime_35("TZTIMEONLY_1723319823");
      noQuoteEntries_1_1_0.set(MaturityTime_35);
      Instrument_35.insert(MaturityTime_35.getString());
      FIX::MinPriceIncrement MinPriceIncrement_35;
      MinPriceIncrement_35.setString("3382157");
      noQuoteEntries_1_1_0.set(MinPriceIncrement_35);
      Instrument_35.insert(MinPriceIncrement_35.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_35;
      MinPriceIncrementAmount_35.setString("6966958");
      noQuoteEntries_1_1_0.set(MinPriceIncrementAmount_35);
      Instrument_35.insert(MinPriceIncrementAmount_35.getString());
      FIX::NTPositionLimit NTPositionLimit_35(1333099780);
      noQuoteEntries_1_1_0.set(NTPositionLimit_35);
      Instrument_35.insert(NTPositionLimit_35.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_35;
      NotionalPercentageOutstanding_35.setString("4.730000");
      noQuoteEntries_1_1_0.set(NotionalPercentageOutstanding_35);
      Instrument_35.insert(NotionalPercentageOutstanding_35.getString());
      FIX::OptAttribute OptAttribute_35('1');
      noQuoteEntries_1_1_0.set(OptAttribute_35);
      Instrument_35.insert(OptAttribute_35.getString());
      FIX::OptPayoutAmount OptPayoutAmount_35;
      OptPayoutAmount_35.setString("19862876");
      noQuoteEntries_1_1_0.set(OptPayoutAmount_35);
      Instrument_35.insert(OptPayoutAmount_35.getString());
      FIX::OptPayoutType OptPayoutType_35(2);
      noQuoteEntries_1_1_0.set(OptPayoutType_35);
      Instrument_35.insert(OptPayoutType_35.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_35;
      OriginalNotionalPercentageOutstanding_35.setString("71.220000");
      noQuoteEntries_1_1_0.set(OriginalNotionalPercentageOutstanding_35);
      Instrument_35.insert(OriginalNotionalPercentageOutstanding_35.getString());
      FIX::Pool Pool_35("STRING_577580471");
      noQuoteEntries_1_1_0.set(Pool_35);
      Instrument_35.insert(Pool_35.getString());
      FIX::PositionLimit PositionLimit_35(1376292122);
      noQuoteEntries_1_1_0.set(PositionLimit_35);
      Instrument_35.insert(PositionLimit_35.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_35("STRING_INX");
      noQuoteEntries_1_1_0.set(PriceQuoteMethod_35);
      Instrument_35.insert(PriceQuoteMethod_35.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_35("STRING_147210382");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasure_35);
      Instrument_35.insert(PriceUnitOfMeasure_35.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_35;
      PriceUnitOfMeasureQty_35.setString("15719661");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasureQty_35);
      Instrument_35.insert(PriceUnitOfMeasureQty_35.getString());
      FIX::Product Product_37(3);
      noQuoteEntries_1_1_0.set(Product_37);
      Instrument_35.insert(Product_37.getString());
      FIX::ProductComplex ProductComplex_35("STRING_1826717044");
      noQuoteEntries_1_1_0.set(ProductComplex_35);
      Instrument_35.insert(ProductComplex_35.getString());
      FIX::PutOrCall PutOrCall_35(1);
      noQuoteEntries_1_1_0.set(PutOrCall_35);
      Instrument_35.insert(PutOrCall_35.getString());
      FIX::RedemptionDate RedemptionDate_35("LOCALMKTDATE_16996945");
      noQuoteEntries_1_1_0.set(RedemptionDate_35);
      Instrument_35.insert(RedemptionDate_35.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_35("STRING_858995413");
      noQuoteEntries_1_1_0.set(RepoCollateralSecurityType_35);
      Instrument_35.insert(RepoCollateralSecurityType_35.getString());
      FIX::RepurchaseRate RepurchaseRate_35;
      RepurchaseRate_35.setString("87.710000");
      noQuoteEntries_1_1_0.set(RepurchaseRate_35);
      Instrument_35.insert(RepurchaseRate_35.getString());
      FIX::RepurchaseTerm RepurchaseTerm_35(18471569);
      noQuoteEntries_1_1_0.set(RepurchaseTerm_35);
      Instrument_35.insert(RepurchaseTerm_35.getString());
      FIX::RestructuringType RestructuringType_35("STRING_FR");
      noQuoteEntries_1_1_0.set(RestructuringType_35);
      Instrument_35.insert(RestructuringType_35.getString());
      FIX::SecurityDesc SecurityDesc_35("STRING_968868277");
      noQuoteEntries_1_1_0.set(SecurityDesc_35);
      Instrument_35.insert(SecurityDesc_35.getString());
      FIX::SecurityExchange SecurityExchange_35("EXCHANGE_797444748");
      noQuoteEntries_1_1_0.set(SecurityExchange_35);
      Instrument_35.insert(SecurityExchange_35.getString());
      FIX::SecurityGroup SecurityGroup_35("STRING_1049039970");
      noQuoteEntries_1_1_0.set(SecurityGroup_35);
      Instrument_35.insert(SecurityGroup_35.getString());
      FIX::SecurityID SecurityID_35("STRING_130283129");
      noQuoteEntries_1_1_0.set(SecurityID_35);
      Instrument_35.insert(SecurityID_35.getString());
      FIX::SecurityIDSource SecurityIDSource_35("STRING_7");
      noQuoteEntries_1_1_0.set(SecurityIDSource_35);
      Instrument_35.insert(SecurityIDSource_35.getString());
      FIX::SecurityStatus SecurityStatus_35("STRING_2");
      noQuoteEntries_1_1_0.set(SecurityStatus_35);
      Instrument_35.insert(SecurityStatus_35.getString());
      FIX::SecuritySubType SecuritySubType_36("STRING_346020017");
      noQuoteEntries_1_1_0.set(SecuritySubType_36);
      Instrument_35.insert(SecuritySubType_36.getString());
      FIX::SecurityType SecurityType_37("STRING_SWING");
      noQuoteEntries_1_1_0.set(SecurityType_37);
      Instrument_35.insert(SecurityType_37.getString());
      FIX::Seniority Seniority_35("STRING_SB");
      noQuoteEntries_1_1_0.set(Seniority_35);
      Instrument_35.insert(Seniority_35.getString());
      FIX::SettlMethod SettlMethod_35('P');
      noQuoteEntries_1_1_0.set(SettlMethod_35);
      Instrument_35.insert(SettlMethod_35.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_35("STRING_680472351");
      noQuoteEntries_1_1_0.set(SettleOnOpenFlag_35);
      Instrument_35.insert(SettleOnOpenFlag_35.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_35("STRING_1387635204");
      noQuoteEntries_1_1_0.set(StateOrProvinceOfIssue_35);
      Instrument_35.insert(StateOrProvinceOfIssue_35.getString());
      FIX::StrikeCurrency StrikeCurrency_35("EUR");
      noQuoteEntries_1_1_0.set(StrikeCurrency_35);
      Instrument_35.insert(StrikeCurrency_35.getString());
      FIX::StrikeMultiplier StrikeMultiplier_35;
      StrikeMultiplier_35.setString("2838430");
      noQuoteEntries_1_1_0.set(StrikeMultiplier_35);
      Instrument_35.insert(StrikeMultiplier_35.getString());
      FIX::StrikePrice StrikePrice_35;
      StrikePrice_35.setString("10937600");
      noQuoteEntries_1_1_0.set(StrikePrice_35);
      Instrument_35.insert(StrikePrice_35.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_35(4);
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryMethod_35);
      Instrument_35.insert(StrikePriceBoundaryMethod_35.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_35;
      StrikePriceBoundaryPrecision_35.setString("65.540000");
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryPrecision_35);
      Instrument_35.insert(StrikePriceBoundaryPrecision_35.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_35(1);
      noQuoteEntries_1_1_0.set(StrikePriceDeterminationMethod_35);
      Instrument_35.insert(StrikePriceDeterminationMethod_35.getString());
      FIX::StrikeValue StrikeValue_35;
      StrikeValue_35.setString("18022260");
      noQuoteEntries_1_1_0.set(StrikeValue_35);
      Instrument_35.insert(StrikeValue_35.getString());
      FIX::Symbol Symbol_35("STRING_1488870620");
      noQuoteEntries_1_1_0.set(Symbol_35);
      Instrument_35.insert(Symbol_35.getString());
      FIX::SymbolSfx SymbolSfx_35("STRING_WI");
      noQuoteEntries_1_1_0.set(SymbolSfx_35);
      Instrument_35.insert(SymbolSfx_35.getString());
      FIX::TimeUnit TimeUnit_35("STRING_Mo");
      noQuoteEntries_1_1_0.set(TimeUnit_35);
      Instrument_35.insert(TimeUnit_35.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_35(3);
      noQuoteEntries_1_1_0.set(UnderlyingPriceDeterminationMethod_35);
      Instrument_35.insert(UnderlyingPriceDeterminationMethod_35.getString());
      FIX::UnitOfMeasure UnitOfMeasure_35("STRING_MMBtu");
      noQuoteEntries_1_1_0.set(UnitOfMeasure_35);
      Instrument_35.insert(UnitOfMeasure_35.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_35;
      UnitOfMeasureQty_35.setString("15156245");
      noQuoteEntries_1_1_0.set(UnitOfMeasureQty_35);
      Instrument_35.insert(UnitOfMeasureQty_35.getString());
      FIX::ValuationMethod ValuationMethod_35("STRING_CDS");
      noQuoteEntries_1_1_0.set(ValuationMethod_35);
      Instrument_35.insert(ValuationMethod_35.getString());
      all_values.push_back(Instrument_35);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_69;
        FIX::ComplexEventCondition ComplexEventCondition_69(1);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventCondition_69.getString());
        FIX::ComplexEventPrice ComplexEventPrice_69;
        ComplexEventPrice_69.setString("18754041");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPrice_69.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_69(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryMethod_69.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_69;
        ComplexEventPriceBoundaryPrecision_69.setString("79.550000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryPrecision_69.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_69(1);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceTimeType_69.getString());
        FIX::ComplexEventType ComplexEventType_69(2);
        noComplexEvents_1_0_2_0.set(ComplexEventType_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventType_69.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_69;
        ComplexOptPayoutAmount_69.setString("18295810");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexOptPayoutAmount_69.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_69);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_146;
          FIX::ComplexEventEndDate ComplexEventEndDate_146(FIX::UTCTIMESTAMP(14, 24, 32, 3, 4, 2013));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_146);
          ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventEndDate_146.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_146(FIX::UTCTIMESTAMP(8, 49, 34, 27, 5, 2006));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_146);
          ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventStartDate_146.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_146);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_292;
            FIX::ComplexEventEndTime ComplexEventEndTime_292(FIX::UTCTIMEONLY(5, 43, 50));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_292);
            ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventEndTime_292.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_292(FIX::UTCTIMEONLY(2, 50, 34));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_292);
            ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventStartTime_292.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_292);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_66;
        FIX::EventDate EventDate_66("LOCALMKTDATE_83722220");
        noEvents_1_0_2_0.set(EventDate_66);
        EvntGrp_NoEvents_66.insert(EventDate_66.getString());
        FIX::EventPx EventPx_66;
        EventPx_66.setString("19462186");
        noEvents_1_0_2_0.set(EventPx_66);
        EvntGrp_NoEvents_66.insert(EventPx_66.getString());
        FIX::EventText EventText_66("STRING_1240091116");
        noEvents_1_0_2_0.set(EventText_66);
        EvntGrp_NoEvents_66.insert(EventText_66.getString());
        FIX::EventTime EventTime_66(FIX::UTCTIMESTAMP(23, 13, 50, 18, 4, 2012));
        noEvents_1_0_2_0.set(EventTime_66);
        EvntGrp_NoEvents_66.insert(EventTime_66.getString());
        FIX::EventType EventType_66(3);
        noEvents_1_0_2_0.set(EventType_66);
        EvntGrp_NoEvents_66.insert(EventType_66.getString());
        all_values.push_back(EvntGrp_NoEvents_66);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_66;
        FIX::InstrumentPartyID InstrumentPartyID_66("STRING_377565973");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_66);
        InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyID_66.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_66('9');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_66);
        InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyIDSource_66.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_66(2105209276);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_66);
        InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyRole_66.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_66);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130;
          FIX::InstrumentPartySubID InstrumentPartySubID_130("STRING_1706389993");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_130);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130.insert(InstrumentPartySubID_130.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_130(108931602);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_130);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130.insert(InstrumentPartySubIDType_130.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131;
          FIX::InstrumentPartySubID InstrumentPartySubID_131("STRING_1368142381");
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubID_131);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131.insert(InstrumentPartySubID_131.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_131(1171420209);
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubIDType_131);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131.insert(InstrumentPartySubIDType_131.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_67;
        FIX::InstrumentPartyID InstrumentPartyID_67("STRING_1931478048");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_67);
        InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyID_67.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_67('1');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_67);
        InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyIDSource_67.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_67(2125321045);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_67);
        InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyRole_67.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_67);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132;
          FIX::InstrumentPartySubID InstrumentPartySubID_132("STRING_1173362571");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_132);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubID_132.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_132(624190207);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_132);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubIDType_132.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133;
          FIX::InstrumentPartySubID InstrumentPartySubID_133("STRING_2121522311");
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubID_133);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubID_133.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_133(2131209701);
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubIDType_133);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubIDType_133.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_60;
        FIX::SecurityAltID SecurityAltID_60("STRING_1027248937");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_60);
        SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltID_60.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_60("STRING_1672002862");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_60);
        SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltIDSource_60.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_60);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_61;
        FIX::SecurityAltID SecurityAltID_61("STRING_1063714158");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_61);
        SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltID_61.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_61("STRING_825983980");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_61);
        SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltIDSource_61.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_61);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_70;
      FIX::SecurityXML SecurityXML_71("XMLDATA_764610330");
      noQuoteEntries_1_1_0.set(SecurityXML_71);
      FIX::SecurityXMLLen SecurityXMLLen_35(1672801616);
      noQuoteEntries_1_1_0.set(SecurityXMLLen_35);
      FIX::SecurityXMLSchema SecurityXMLSchema_35("STRING_419283763");
      noQuoteEntries_1_1_0.set(SecurityXMLSchema_35);
      SecurityXML_70.insert(SecurityXMLSchema_35.getString());
      all_values.push_back(SecurityXML_70);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_4;
      FIX::BidForwardPoints BidForwardPoints_4;
      BidForwardPoints_4.setString("16867988");
      noQuoteEntries_1_1_1.set(BidForwardPoints_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidForwardPoints_4.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_4;
      BidForwardPoints2_4.setString("10338921");
      noQuoteEntries_1_1_1.set(BidForwardPoints2_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidForwardPoints2_4.getString());
      FIX::BidPx BidPx_4;
      BidPx_4.setString("14053568");
      noQuoteEntries_1_1_1.set(BidPx_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidPx_4.getString());
      FIX::BidSize BidSize_4;
      BidSize_4.setString("4896212");
      noQuoteEntries_1_1_1.set(BidSize_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidSize_4.getString());
      FIX::BidSpotRate BidSpotRate_4;
      BidSpotRate_4.setString("16367261");
      noQuoteEntries_1_1_1.set(BidSpotRate_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidSpotRate_4.getString());
      FIX::BidYield BidYield_4;
      BidYield_4.setString("52.960000");
      noQuoteEntries_1_1_1.set(BidYield_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidYield_4.getString());
      FIX::BookingType BookingType_11(0);
      noQuoteEntries_1_1_1.set(BookingType_11);
      QuotEntryGrp_NoQuoteEntries_4.insert(BookingType_11.getString());
      FIX::Currency Currency_34("CAN");
      noQuoteEntries_1_1_1.set(Currency_34);
      QuotEntryGrp_NoQuoteEntries_4.insert(Currency_34.getString());
      FIX::MidPx MidPx_4;
      MidPx_4.setString("13476265");
      noQuoteEntries_1_1_1.set(MidPx_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(MidPx_4.getString());
      FIX::MidYield MidYield_4;
      MidYield_4.setString("56.470000");
      noQuoteEntries_1_1_1.set(MidYield_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(MidYield_4.getString());
      FIX::OfferForwardPoints OfferForwardPoints_4;
      OfferForwardPoints_4.setString("19852479");
      noQuoteEntries_1_1_1.set(OfferForwardPoints_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferForwardPoints_4.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_4;
      OfferForwardPoints2_4.setString("14565581");
      noQuoteEntries_1_1_1.set(OfferForwardPoints2_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferForwardPoints2_4.getString());
      FIX::OfferPx OfferPx_4;
      OfferPx_4.setString("18948380");
      noQuoteEntries_1_1_1.set(OfferPx_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferPx_4.getString());
      FIX::OfferSize OfferSize_4;
      OfferSize_4.setString("10091845");
      noQuoteEntries_1_1_1.set(OfferSize_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferSize_4.getString());
      FIX::OfferSpotRate OfferSpotRate_4;
      OfferSpotRate_4.setString("12405525");
      noQuoteEntries_1_1_1.set(OfferSpotRate_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferSpotRate_4.getString());
      FIX::OfferYield OfferYield_4;
      OfferYield_4.setString("43.770000");
      noQuoteEntries_1_1_1.set(OfferYield_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferYield_4.getString());
      FIX::OrdType OrdType_37('J');
      noQuoteEntries_1_1_1.set(OrdType_37);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrdType_37.getString());
      FIX::OrderCapacity OrderCapacity_12('A');
      noQuoteEntries_1_1_1.set(OrderCapacity_12);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrderCapacity_12.getString());
      FIX::OrderQty2 OrderQty2_5;
      OrderQty2_5.setString("5043733");
      noQuoteEntries_1_1_1.set(OrderQty2_5);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrderQty2_5.getString());
      FIX::OrderRestrictions OrderRestrictions_9("MULTIPLECHARVALUE_9");
      noQuoteEntries_1_1_1.set(OrderRestrictions_9);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrderRestrictions_9.getString());
      FIX::QuoteEntryID QuoteEntryID_7("STRING_344715597");
      noQuoteEntries_1_1_1.set(QuoteEntryID_7);
      QuotEntryGrp_NoQuoteEntries_4.insert(QuoteEntryID_7.getString());
      FIX::SettlDate SettlDate_27("LOCALMKTDATE_488099354");
      noQuoteEntries_1_1_1.set(SettlDate_27);
      QuotEntryGrp_NoQuoteEntries_4.insert(SettlDate_27.getString());
      FIX::SettlDate2 SettlDate2_5("LOCALMKTDATE_443720428");
      noQuoteEntries_1_1_1.set(SettlDate2_5);
      QuotEntryGrp_NoQuoteEntries_4.insert(SettlDate2_5.getString());
      FIX::TradingSessionID TradingSessionID_40("STRING_5");
      noQuoteEntries_1_1_1.set(TradingSessionID_40);
      QuotEntryGrp_NoQuoteEntries_4.insert(TradingSessionID_40.getString());
      FIX::TradingSessionSubID TradingSessionSubID_40("STRING_5");
      noQuoteEntries_1_1_1.set(TradingSessionSubID_40);
      QuotEntryGrp_NoQuoteEntries_4.insert(TradingSessionSubID_40.getString());
      FIX::TransactTime TransactTime_30(FIX::UTCTIMESTAMP(18, 58, 34, 22, 10, 2006));
      noQuoteEntries_1_1_1.set(TransactTime_30);
      QuotEntryGrp_NoQuoteEntries_4.insert(TransactTime_30.getString());
      FIX::ValidUntilTime ValidUntilTime_5(FIX::UTCTIMESTAMP(23, 48, 27, 21, 2, 2013));
      noQuoteEntries_1_1_1.set(ValidUntilTime_5);
      QuotEntryGrp_NoQuoteEntries_4.insert(ValidUntilTime_5.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_4);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_69;
        FIX::EncodedLegIssuer EncodedLegIssuer_69("DATA_1949391325");
        noLegs_1_1_2_0.set(EncodedLegIssuer_69);
        InstrumentLeg_69.insert(EncodedLegIssuer_69.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_69(24419423);
        noLegs_1_1_2_0.set(EncodedLegIssuerLen_69);
        InstrumentLeg_69.insert(EncodedLegIssuerLen_69.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_69("DATA_705283630");
        noLegs_1_1_2_0.set(EncodedLegSecurityDesc_69);
        InstrumentLeg_69.insert(EncodedLegSecurityDesc_69.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_69(1696745705);
        noLegs_1_1_2_0.set(EncodedLegSecurityDescLen_69);
        InstrumentLeg_69.insert(EncodedLegSecurityDescLen_69.getString());
        FIX::LegCFICode LegCFICode_69("STRING_1033603957");
        noLegs_1_1_2_0.set(LegCFICode_69);
        InstrumentLeg_69.insert(LegCFICode_69.getString());
        FIX::LegContractMultiplier LegContractMultiplier_69;
        LegContractMultiplier_69.setString("19458361");
        noLegs_1_1_2_0.set(LegContractMultiplier_69);
        InstrumentLeg_69.insert(LegContractMultiplier_69.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_69(1027756434);
        noLegs_1_1_2_0.set(LegContractMultiplierUnit_69);
        InstrumentLeg_69.insert(LegContractMultiplierUnit_69.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_69("MONTHYEAR_2020625887");
        noLegs_1_1_2_0.set(LegContractSettlMonth_69);
        InstrumentLeg_69.insert(LegContractSettlMonth_69.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_69("COUNTRY_169029444");
        noLegs_1_1_2_0.set(LegCountryOfIssue_69);
        InstrumentLeg_69.insert(LegCountryOfIssue_69.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_69("LOCALMKTDATE_1532129735");
        noLegs_1_1_2_0.set(LegCouponPaymentDate_69);
        InstrumentLeg_69.insert(LegCouponPaymentDate_69.getString());
        FIX::LegCouponRate LegCouponRate_69;
        LegCouponRate_69.setString("43.770000");
        noLegs_1_1_2_0.set(LegCouponRate_69);
        InstrumentLeg_69.insert(LegCouponRate_69.getString());
        FIX::LegCreditRating LegCreditRating_69("STRING_513745041");
        noLegs_1_1_2_0.set(LegCreditRating_69);
        InstrumentLeg_69.insert(LegCreditRating_69.getString());
        FIX::LegCurrency LegCurrency_69("CAN");
        noLegs_1_1_2_0.set(LegCurrency_69);
        InstrumentLeg_69.insert(LegCurrency_69.getString());
        FIX::LegDatedDate LegDatedDate_69("LOCALMKTDATE_1885709575");
        noLegs_1_1_2_0.set(LegDatedDate_69);
        InstrumentLeg_69.insert(LegDatedDate_69.getString());
        FIX::LegExerciseStyle LegExerciseStyle_69(2032847657);
        noLegs_1_1_2_0.set(LegExerciseStyle_69);
        InstrumentLeg_69.insert(LegExerciseStyle_69.getString());
        FIX::LegFactor LegFactor_69;
        LegFactor_69.setString("12880257");
        noLegs_1_1_2_0.set(LegFactor_69);
        InstrumentLeg_69.insert(LegFactor_69.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_69(1936174441);
        noLegs_1_1_2_0.set(LegFlowScheduleType_69);
        InstrumentLeg_69.insert(LegFlowScheduleType_69.getString());
        FIX::LegInstrRegistry LegInstrRegistry_69("STRING_662592907");
        noLegs_1_1_2_0.set(LegInstrRegistry_69);
        InstrumentLeg_69.insert(LegInstrRegistry_69.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_69("LOCALMKTDATE_173294649");
        noLegs_1_1_2_0.set(LegInterestAccrualDate_69);
        InstrumentLeg_69.insert(LegInterestAccrualDate_69.getString());
        FIX::LegIssueDate LegIssueDate_69("LOCALMKTDATE_258439423");
        noLegs_1_1_2_0.set(LegIssueDate_69);
        InstrumentLeg_69.insert(LegIssueDate_69.getString());
        FIX::LegIssuer LegIssuer_69("STRING_979137040");
        noLegs_1_1_2_0.set(LegIssuer_69);
        InstrumentLeg_69.insert(LegIssuer_69.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_69("STRING_92455753");
        noLegs_1_1_2_0.set(LegLocaleOfIssue_69);
        InstrumentLeg_69.insert(LegLocaleOfIssue_69.getString());
        FIX::LegMaturityDate LegMaturityDate_69("LOCALMKTDATE_2133544895");
        noLegs_1_1_2_0.set(LegMaturityDate_69);
        InstrumentLeg_69.insert(LegMaturityDate_69.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_69("MONTHYEAR_1785302415");
        noLegs_1_1_2_0.set(LegMaturityMonthYear_69);
        InstrumentLeg_69.insert(LegMaturityMonthYear_69.getString());
        FIX::LegMaturityTime LegMaturityTime_69("TZTIMEONLY_1648342981");
        noLegs_1_1_2_0.set(LegMaturityTime_69);
        InstrumentLeg_69.insert(LegMaturityTime_69.getString());
        FIX::LegOptAttribute LegOptAttribute_69('2');
        noLegs_1_1_2_0.set(LegOptAttribute_69);
        InstrumentLeg_69.insert(LegOptAttribute_69.getString());
        FIX::LegOptionRatio LegOptionRatio_69;
        LegOptionRatio_69.setString("18338850");
        noLegs_1_1_2_0.set(LegOptionRatio_69);
        InstrumentLeg_69.insert(LegOptionRatio_69.getString());
        FIX::LegPool LegPool_69("STRING_923555011");
        noLegs_1_1_2_0.set(LegPool_69);
        InstrumentLeg_69.insert(LegPool_69.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_69("STRING_80513465");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasure_69);
        InstrumentLeg_69.insert(LegPriceUnitOfMeasure_69.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_69;
        LegPriceUnitOfMeasureQty_69.setString("10826105");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasureQty_69);
        InstrumentLeg_69.insert(LegPriceUnitOfMeasureQty_69.getString());
        FIX::LegProduct LegProduct_69(725462688);
        noLegs_1_1_2_0.set(LegProduct_69);
        InstrumentLeg_69.insert(LegProduct_69.getString());
        FIX::LegPutOrCall LegPutOrCall_69(104932889);
        noLegs_1_1_2_0.set(LegPutOrCall_69);
        InstrumentLeg_69.insert(LegPutOrCall_69.getString());
        FIX::LegRatioQty LegRatioQty_69;
        LegRatioQty_69.setString("17878941");
        noLegs_1_1_2_0.set(LegRatioQty_69);
        InstrumentLeg_69.insert(LegRatioQty_69.getString());
        FIX::LegRedemptionDate LegRedemptionDate_69("LOCALMKTDATE_274724745");
        noLegs_1_1_2_0.set(LegRedemptionDate_69);
        InstrumentLeg_69.insert(LegRedemptionDate_69.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_69("STRING_1138536846");
        noLegs_1_1_2_0.set(LegRepoCollateralSecurityType_69);
        InstrumentLeg_69.insert(LegRepoCollateralSecurityType_69.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_69;
        LegRepurchaseRate_69.setString("66.830000");
        noLegs_1_1_2_0.set(LegRepurchaseRate_69);
        InstrumentLeg_69.insert(LegRepurchaseRate_69.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_69(1302481180);
        noLegs_1_1_2_0.set(LegRepurchaseTerm_69);
        InstrumentLeg_69.insert(LegRepurchaseTerm_69.getString());
        FIX::LegSecurityDesc LegSecurityDesc_69("STRING_1011679085");
        noLegs_1_1_2_0.set(LegSecurityDesc_69);
        InstrumentLeg_69.insert(LegSecurityDesc_69.getString());
        FIX::LegSecurityExchange LegSecurityExchange_69("EXCHANGE_1755276127");
        noLegs_1_1_2_0.set(LegSecurityExchange_69);
        InstrumentLeg_69.insert(LegSecurityExchange_69.getString());
        FIX::LegSecurityID LegSecurityID_69("STRING_687127267");
        noLegs_1_1_2_0.set(LegSecurityID_69);
        InstrumentLeg_69.insert(LegSecurityID_69.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_69("STRING_348549815");
        noLegs_1_1_2_0.set(LegSecurityIDSource_69);
        InstrumentLeg_69.insert(LegSecurityIDSource_69.getString());
        FIX::LegSecuritySubType LegSecuritySubType_69("STRING_121537520");
        noLegs_1_1_2_0.set(LegSecuritySubType_69);
        InstrumentLeg_69.insert(LegSecuritySubType_69.getString());
        FIX::LegSecurityType LegSecurityType_69("STRING_559872708");
        noLegs_1_1_2_0.set(LegSecurityType_69);
        InstrumentLeg_69.insert(LegSecurityType_69.getString());
        FIX::LegSide LegSide_69('1');
        noLegs_1_1_2_0.set(LegSide_69);
        InstrumentLeg_69.insert(LegSide_69.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_69("STRING_2007247095");
        noLegs_1_1_2_0.set(LegStateOrProvinceOfIssue_69);
        InstrumentLeg_69.insert(LegStateOrProvinceOfIssue_69.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_69("JPY");
        noLegs_1_1_2_0.set(LegStrikeCurrency_69);
        InstrumentLeg_69.insert(LegStrikeCurrency_69.getString());
        FIX::LegStrikePrice LegStrikePrice_69;
        LegStrikePrice_69.setString("17959378");
        noLegs_1_1_2_0.set(LegStrikePrice_69);
        InstrumentLeg_69.insert(LegStrikePrice_69.getString());
        FIX::LegSymbol LegSymbol_69("STRING_1107829624");
        noLegs_1_1_2_0.set(LegSymbol_69);
        InstrumentLeg_69.insert(LegSymbol_69.getString());
        FIX::LegSymbolSfx LegSymbolSfx_69("STRING_1590461365");
        noLegs_1_1_2_0.set(LegSymbolSfx_69);
        InstrumentLeg_69.insert(LegSymbolSfx_69.getString());
        FIX::LegTimeUnit LegTimeUnit_69("STRING_2054377312");
        noLegs_1_1_2_0.set(LegTimeUnit_69);
        InstrumentLeg_69.insert(LegTimeUnit_69.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_69("STRING_2086966664");
        noLegs_1_1_2_0.set(LegUnitOfMeasure_69);
        InstrumentLeg_69.insert(LegUnitOfMeasure_69.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_69;
        LegUnitOfMeasureQty_69.setString("16829171");
        noLegs_1_1_2_0.set(LegUnitOfMeasureQty_69);
        InstrumentLeg_69.insert(LegUnitOfMeasureQty_69.getString());
        all_values.push_back(InstrumentLeg_69);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_135;
          FIX::LegSecurityAltID LegSecurityAltID_135("STRING_1724785431");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltID_135);
          LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltID_135.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_135("STRING_1183776452");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltIDSource_135);
          LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltIDSource_135.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_135);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_136;
          FIX::LegSecurityAltID LegSecurityAltID_136("STRING_1934296925");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltID_136);
          LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltID_136.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_136("STRING_1411186824");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltIDSource_136);
          LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltIDSource_136.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_136);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_36;
      FIX::AttachmentPoint AttachmentPoint_36;
      AttachmentPoint_36.setString("14.630000");
      noQuoteEntries_1_1_1.set(AttachmentPoint_36);
      Instrument_36.insert(AttachmentPoint_36.getString());
      FIX::CFICode CFICode_36("STRING_2014810391");
      noQuoteEntries_1_1_1.set(CFICode_36);
      Instrument_36.insert(CFICode_36.getString());
      FIX::CPProgram CPProgram_36(2);
      noQuoteEntries_1_1_1.set(CPProgram_36);
      Instrument_36.insert(CPProgram_36.getString());
      FIX::CPRegType CPRegType_36("STRING_685310503");
      noQuoteEntries_1_1_1.set(CPRegType_36);
      Instrument_36.insert(CPRegType_36.getString());
      FIX::CapPrice CapPrice_36;
      CapPrice_36.setString("21197432");
      noQuoteEntries_1_1_1.set(CapPrice_36);
      Instrument_36.insert(CapPrice_36.getString());
      FIX::ContractMultiplier ContractMultiplier_36;
      ContractMultiplier_36.setString("21342078");
      noQuoteEntries_1_1_1.set(ContractMultiplier_36);
      Instrument_36.insert(ContractMultiplier_36.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_36(2);
      noQuoteEntries_1_1_1.set(ContractMultiplierUnit_36);
      Instrument_36.insert(ContractMultiplierUnit_36.getString());
      FIX::ContractSettlMonth ContractSettlMonth_36("MONTHYEAR_1110796478");
      noQuoteEntries_1_1_1.set(ContractSettlMonth_36);
      Instrument_36.insert(ContractSettlMonth_36.getString());
      FIX::CountryOfIssue CountryOfIssue_36("COUNTRY_1572970927");
      noQuoteEntries_1_1_1.set(CountryOfIssue_36);
      Instrument_36.insert(CountryOfIssue_36.getString());
      FIX::CouponPaymentDate CouponPaymentDate_36("LOCALMKTDATE_115032781");
      noQuoteEntries_1_1_1.set(CouponPaymentDate_36);
      Instrument_36.insert(CouponPaymentDate_36.getString());
      FIX::CouponRate CouponRate_36;
      CouponRate_36.setString("55.630000");
      noQuoteEntries_1_1_1.set(CouponRate_36);
      Instrument_36.insert(CouponRate_36.getString());
      FIX::CreditRating CreditRating_36("STRING_1180763406");
      noQuoteEntries_1_1_1.set(CreditRating_36);
      Instrument_36.insert(CreditRating_36.getString());
      FIX::DatedDate DatedDate_36("LOCALMKTDATE_802160048");
      noQuoteEntries_1_1_1.set(DatedDate_36);
      Instrument_36.insert(DatedDate_36.getString());
      FIX::DetachmentPoint DetachmentPoint_36;
      DetachmentPoint_36.setString("17.300000");
      noQuoteEntries_1_1_1.set(DetachmentPoint_36);
      Instrument_36.insert(DetachmentPoint_36.getString());
      FIX::EncodedIssuer EncodedIssuer_36("DATA_1302300926");
      noQuoteEntries_1_1_1.set(EncodedIssuer_36);
      Instrument_36.insert(EncodedIssuer_36.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_36(1362032756);
      noQuoteEntries_1_1_1.set(EncodedIssuerLen_36);
      Instrument_36.insert(EncodedIssuerLen_36.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_36("DATA_452682703");
      noQuoteEntries_1_1_1.set(EncodedSecurityDesc_36);
      Instrument_36.insert(EncodedSecurityDesc_36.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_36(1162064373);
      noQuoteEntries_1_1_1.set(EncodedSecurityDescLen_36);
      Instrument_36.insert(EncodedSecurityDescLen_36.getString());
      FIX::ExerciseStyle ExerciseStyle_36(2);
      noQuoteEntries_1_1_1.set(ExerciseStyle_36);
      Instrument_36.insert(ExerciseStyle_36.getString());
      FIX::Factor Factor_36;
      Factor_36.setString("18698494");
      noQuoteEntries_1_1_1.set(Factor_36);
      Instrument_36.insert(Factor_36.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_36(false);
      noQuoteEntries_1_1_1.set(FlexProductEligibilityIndicator_36);
      Instrument_36.insert(FlexProductEligibilityIndicator_36.getString());
      FIX::FlexibleIndicator FlexibleIndicator_36(false);
      noQuoteEntries_1_1_1.set(FlexibleIndicator_36);
      Instrument_36.insert(FlexibleIndicator_36.getString());
      FIX::FloorPrice FloorPrice_36;
      FloorPrice_36.setString("13128271");
      noQuoteEntries_1_1_1.set(FloorPrice_36);
      Instrument_36.insert(FloorPrice_36.getString());
      FIX::FlowScheduleType FlowScheduleType_36(2);
      noQuoteEntries_1_1_1.set(FlowScheduleType_36);
      Instrument_36.insert(FlowScheduleType_36.getString());
      FIX::InstrRegistry InstrRegistry_36("STRING_707098465");
      noQuoteEntries_1_1_1.set(InstrRegistry_36);
      Instrument_36.insert(InstrRegistry_36.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_36('8');
      noQuoteEntries_1_1_1.set(InstrmtAssignmentMethod_36);
      Instrument_36.insert(InstrmtAssignmentMethod_36.getString());
      FIX::InterestAccrualDate InterestAccrualDate_36("LOCALMKTDATE_610367188");
      noQuoteEntries_1_1_1.set(InterestAccrualDate_36);
      Instrument_36.insert(InterestAccrualDate_36.getString());
      FIX::IssueDate IssueDate_36("LOCALMKTDATE_284400248");
      noQuoteEntries_1_1_1.set(IssueDate_36);
      Instrument_36.insert(IssueDate_36.getString());
      FIX::Issuer Issuer_36("STRING_2032037060");
      noQuoteEntries_1_1_1.set(Issuer_36);
      Instrument_36.insert(Issuer_36.getString());
      FIX::ListMethod ListMethod_36(0);
      noQuoteEntries_1_1_1.set(ListMethod_36);
      Instrument_36.insert(ListMethod_36.getString());
      FIX::LocaleOfIssue LocaleOfIssue_36("STRING_1695587072");
      noQuoteEntries_1_1_1.set(LocaleOfIssue_36);
      Instrument_36.insert(LocaleOfIssue_36.getString());
      FIX::MaturityDate MaturityDate_36("LOCALMKTDATE_1991884875");
      noQuoteEntries_1_1_1.set(MaturityDate_36);
      Instrument_36.insert(MaturityDate_36.getString());
      FIX::MaturityMonthYear MaturityMonthYear_36("MONTHYEAR_264507209");
      noQuoteEntries_1_1_1.set(MaturityMonthYear_36);
      Instrument_36.insert(MaturityMonthYear_36.getString());
      FIX::MaturityTime MaturityTime_36("TZTIMEONLY_2041900791");
      noQuoteEntries_1_1_1.set(MaturityTime_36);
      Instrument_36.insert(MaturityTime_36.getString());
      FIX::MinPriceIncrement MinPriceIncrement_36;
      MinPriceIncrement_36.setString("5297117");
      noQuoteEntries_1_1_1.set(MinPriceIncrement_36);
      Instrument_36.insert(MinPriceIncrement_36.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_36;
      MinPriceIncrementAmount_36.setString("2367668");
      noQuoteEntries_1_1_1.set(MinPriceIncrementAmount_36);
      Instrument_36.insert(MinPriceIncrementAmount_36.getString());
      FIX::NTPositionLimit NTPositionLimit_36(2028625035);
      noQuoteEntries_1_1_1.set(NTPositionLimit_36);
      Instrument_36.insert(NTPositionLimit_36.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_36;
      NotionalPercentageOutstanding_36.setString("69.800000");
      noQuoteEntries_1_1_1.set(NotionalPercentageOutstanding_36);
      Instrument_36.insert(NotionalPercentageOutstanding_36.getString());
      FIX::OptAttribute OptAttribute_36('1');
      noQuoteEntries_1_1_1.set(OptAttribute_36);
      Instrument_36.insert(OptAttribute_36.getString());
      FIX::OptPayoutAmount OptPayoutAmount_36;
      OptPayoutAmount_36.setString("14541123");
      noQuoteEntries_1_1_1.set(OptPayoutAmount_36);
      Instrument_36.insert(OptPayoutAmount_36.getString());
      FIX::OptPayoutType OptPayoutType_36(1);
      noQuoteEntries_1_1_1.set(OptPayoutType_36);
      Instrument_36.insert(OptPayoutType_36.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_36;
      OriginalNotionalPercentageOutstanding_36.setString("52.340000");
      noQuoteEntries_1_1_1.set(OriginalNotionalPercentageOutstanding_36);
      Instrument_36.insert(OriginalNotionalPercentageOutstanding_36.getString());
      FIX::Pool Pool_36("STRING_487392072");
      noQuoteEntries_1_1_1.set(Pool_36);
      Instrument_36.insert(Pool_36.getString());
      FIX::PositionLimit PositionLimit_36(259456161);
      noQuoteEntries_1_1_1.set(PositionLimit_36);
      Instrument_36.insert(PositionLimit_36.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_36("STRING_INX");
      noQuoteEntries_1_1_1.set(PriceQuoteMethod_36);
      Instrument_36.insert(PriceQuoteMethod_36.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_36("STRING_1789692998");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasure_36);
      Instrument_36.insert(PriceUnitOfMeasure_36.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_36;
      PriceUnitOfMeasureQty_36.setString("16214889");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasureQty_36);
      Instrument_36.insert(PriceUnitOfMeasureQty_36.getString());
      FIX::Product Product_38(12);
      noQuoteEntries_1_1_1.set(Product_38);
      Instrument_36.insert(Product_38.getString());
      FIX::ProductComplex ProductComplex_36("STRING_804273723");
      noQuoteEntries_1_1_1.set(ProductComplex_36);
      Instrument_36.insert(ProductComplex_36.getString());
      FIX::PutOrCall PutOrCall_36(0);
      noQuoteEntries_1_1_1.set(PutOrCall_36);
      Instrument_36.insert(PutOrCall_36.getString());
      FIX::RedemptionDate RedemptionDate_36("LOCALMKTDATE_1821145439");
      noQuoteEntries_1_1_1.set(RedemptionDate_36);
      Instrument_36.insert(RedemptionDate_36.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_36("STRING_1614792337");
      noQuoteEntries_1_1_1.set(RepoCollateralSecurityType_36);
      Instrument_36.insert(RepoCollateralSecurityType_36.getString());
      FIX::RepurchaseRate RepurchaseRate_36;
      RepurchaseRate_36.setString("1.910000");
      noQuoteEntries_1_1_1.set(RepurchaseRate_36);
      Instrument_36.insert(RepurchaseRate_36.getString());
      FIX::RepurchaseTerm RepurchaseTerm_36(986488927);
      noQuoteEntries_1_1_1.set(RepurchaseTerm_36);
      Instrument_36.insert(RepurchaseTerm_36.getString());
      FIX::RestructuringType RestructuringType_36("STRING_MM");
      noQuoteEntries_1_1_1.set(RestructuringType_36);
      Instrument_36.insert(RestructuringType_36.getString());
      FIX::SecurityDesc SecurityDesc_36("STRING_608505008");
      noQuoteEntries_1_1_1.set(SecurityDesc_36);
      Instrument_36.insert(SecurityDesc_36.getString());
      FIX::SecurityExchange SecurityExchange_36("EXCHANGE_1834749535");
      noQuoteEntries_1_1_1.set(SecurityExchange_36);
      Instrument_36.insert(SecurityExchange_36.getString());
      FIX::SecurityGroup SecurityGroup_36("STRING_795088155");
      noQuoteEntries_1_1_1.set(SecurityGroup_36);
      Instrument_36.insert(SecurityGroup_36.getString());
      FIX::SecurityID SecurityID_36("STRING_892905256");
      noQuoteEntries_1_1_1.set(SecurityID_36);
      Instrument_36.insert(SecurityID_36.getString());
      FIX::SecurityIDSource SecurityIDSource_36("STRING_M");
      noQuoteEntries_1_1_1.set(SecurityIDSource_36);
      Instrument_36.insert(SecurityIDSource_36.getString());
      FIX::SecurityStatus SecurityStatus_36("STRING_2");
      noQuoteEntries_1_1_1.set(SecurityStatus_36);
      Instrument_36.insert(SecurityStatus_36.getString());
      FIX::SecuritySubType SecuritySubType_37("STRING_441008681");
      noQuoteEntries_1_1_1.set(SecuritySubType_37);
      Instrument_36.insert(SecuritySubType_37.getString());
      FIX::SecurityType SecurityType_38("STRING_CTB");
      noQuoteEntries_1_1_1.set(SecurityType_38);
      Instrument_36.insert(SecurityType_38.getString());
      FIX::Seniority Seniority_36("STRING_SR");
      noQuoteEntries_1_1_1.set(Seniority_36);
      Instrument_36.insert(Seniority_36.getString());
      FIX::SettlMethod SettlMethod_36('C');
      noQuoteEntries_1_1_1.set(SettlMethod_36);
      Instrument_36.insert(SettlMethod_36.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_36("STRING_2093415905");
      noQuoteEntries_1_1_1.set(SettleOnOpenFlag_36);
      Instrument_36.insert(SettleOnOpenFlag_36.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_36("STRING_1693542671");
      noQuoteEntries_1_1_1.set(StateOrProvinceOfIssue_36);
      Instrument_36.insert(StateOrProvinceOfIssue_36.getString());
      FIX::StrikeCurrency StrikeCurrency_36("CAN");
      noQuoteEntries_1_1_1.set(StrikeCurrency_36);
      Instrument_36.insert(StrikeCurrency_36.getString());
      FIX::StrikeMultiplier StrikeMultiplier_36;
      StrikeMultiplier_36.setString("8936223");
      noQuoteEntries_1_1_1.set(StrikeMultiplier_36);
      Instrument_36.insert(StrikeMultiplier_36.getString());
      FIX::StrikePrice StrikePrice_36;
      StrikePrice_36.setString("16706795");
      noQuoteEntries_1_1_1.set(StrikePrice_36);
      Instrument_36.insert(StrikePrice_36.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_36(1);
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryMethod_36);
      Instrument_36.insert(StrikePriceBoundaryMethod_36.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_36;
      StrikePriceBoundaryPrecision_36.setString("39.280000");
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryPrecision_36);
      Instrument_36.insert(StrikePriceBoundaryPrecision_36.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_36(4);
      noQuoteEntries_1_1_1.set(StrikePriceDeterminationMethod_36);
      Instrument_36.insert(StrikePriceDeterminationMethod_36.getString());
      FIX::StrikeValue StrikeValue_36;
      StrikeValue_36.setString("11524315");
      noQuoteEntries_1_1_1.set(StrikeValue_36);
      Instrument_36.insert(StrikeValue_36.getString());
      FIX::Symbol Symbol_36("STRING_1714790893");
      noQuoteEntries_1_1_1.set(Symbol_36);
      Instrument_36.insert(Symbol_36.getString());
      FIX::SymbolSfx SymbolSfx_36("STRING_WI");
      noQuoteEntries_1_1_1.set(SymbolSfx_36);
      Instrument_36.insert(SymbolSfx_36.getString());
      FIX::TimeUnit TimeUnit_36("STRING_Wk");
      noQuoteEntries_1_1_1.set(TimeUnit_36);
      Instrument_36.insert(TimeUnit_36.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_36(2);
      noQuoteEntries_1_1_1.set(UnderlyingPriceDeterminationMethod_36);
      Instrument_36.insert(UnderlyingPriceDeterminationMethod_36.getString());
      FIX::UnitOfMeasure UnitOfMeasure_36("STRING_oz_tr");
      noQuoteEntries_1_1_1.set(UnitOfMeasure_36);
      Instrument_36.insert(UnitOfMeasure_36.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_36;
      UnitOfMeasureQty_36.setString("19077115");
      noQuoteEntries_1_1_1.set(UnitOfMeasureQty_36);
      Instrument_36.insert(UnitOfMeasureQty_36.getString());
      FIX::ValuationMethod ValuationMethod_36("STRING_CDSD");
      noQuoteEntries_1_1_1.set(ValuationMethod_36);
      Instrument_36.insert(ValuationMethod_36.getString());
      all_values.push_back(Instrument_36);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_70;
        FIX::ComplexEventCondition ComplexEventCondition_70(2);
        noComplexEvents_1_1_2_0.set(ComplexEventCondition_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventCondition_70.getString());
        FIX::ComplexEventPrice ComplexEventPrice_70;
        ComplexEventPrice_70.setString("1787539");
        noComplexEvents_1_1_2_0.set(ComplexEventPrice_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPrice_70.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_70(1);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryMethod_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryMethod_70.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_70;
        ComplexEventPriceBoundaryPrecision_70.setString("94.250000");
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryPrecision_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryPrecision_70.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_70(3);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceTimeType_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceTimeType_70.getString());
        FIX::ComplexEventType ComplexEventType_70(2);
        noComplexEvents_1_1_2_0.set(ComplexEventType_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventType_70.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_70;
        ComplexOptPayoutAmount_70.setString("11630446");
        noComplexEvents_1_1_2_0.set(ComplexOptPayoutAmount_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexOptPayoutAmount_70.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_70);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_147;
          FIX::ComplexEventEndDate ComplexEventEndDate_147(FIX::UTCTIMESTAMP(19, 4, 38, 23, 3, 2017));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventEndDate_147);
          ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventEndDate_147.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_147(FIX::UTCTIMESTAMP(23, 23, 18, 2, 1, 2003));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventStartDate_147);
          ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventStartDate_147.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_147);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_293;
            FIX::ComplexEventEndTime ComplexEventEndTime_293(FIX::UTCTIMEONLY(18, 26, 23));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventEndTime_293);
            ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventEndTime_293.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_293(FIX::UTCTIMEONLY(20, 19, 49));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventStartTime_293);
            ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventStartTime_293.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_293);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_294;
            FIX::ComplexEventEndTime ComplexEventEndTime_294(FIX::UTCTIMEONLY(11, 30, 43));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventEndTime_294);
            ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventEndTime_294.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_294(FIX::UTCTIMEONLY(17, 45, 12));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventStartTime_294);
            ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventStartTime_294.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_294);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_148;
          FIX::ComplexEventEndDate ComplexEventEndDate_148(FIX::UTCTIMESTAMP(20, 9, 24, 4, 12, 2010));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventEndDate_148);
          ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventEndDate_148.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_148(FIX::UTCTIMESTAMP(22, 13, 1, 0, 6, 2016));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventStartDate_148);
          ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventStartDate_148.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_148);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_295;
            FIX::ComplexEventEndTime ComplexEventEndTime_295(FIX::UTCTIMEONLY(21, 48, 50));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventEndTime_295);
            ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventEndTime_295.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_295(FIX::UTCTIMEONLY(0, 9, 2));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventStartTime_295);
            ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventStartTime_295.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_295);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_296;
            FIX::ComplexEventEndTime ComplexEventEndTime_296(FIX::UTCTIMEONLY(9, 24, 42));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventEndTime_296);
            ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventEndTime_296.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_296(FIX::UTCTIMEONLY(5, 19, 52));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventStartTime_296);
            ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventStartTime_296.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_296);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_71;
        FIX::ComplexEventCondition ComplexEventCondition_71(2);
        noComplexEvents_1_1_2_1.set(ComplexEventCondition_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventCondition_71.getString());
        FIX::ComplexEventPrice ComplexEventPrice_71;
        ComplexEventPrice_71.setString("12803351");
        noComplexEvents_1_1_2_1.set(ComplexEventPrice_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPrice_71.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_71(2);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryMethod_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryMethod_71.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_71;
        ComplexEventPriceBoundaryPrecision_71.setString("91.840000");
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryPrecision_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryPrecision_71.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_71(1);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceTimeType_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceTimeType_71.getString());
        FIX::ComplexEventType ComplexEventType_71(2);
        noComplexEvents_1_1_2_1.set(ComplexEventType_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventType_71.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_71;
        ComplexOptPayoutAmount_71.setString("18782417");
        noComplexEvents_1_1_2_1.set(ComplexOptPayoutAmount_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexOptPayoutAmount_71.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_71);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_149;
          FIX::ComplexEventEndDate ComplexEventEndDate_149(FIX::UTCTIMESTAMP(23, 45, 15, 25, 12, 2011));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventEndDate_149);
          ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventEndDate_149.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_149(FIX::UTCTIMESTAMP(0, 9, 22, 1, 10, 2007));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventStartDate_149);
          ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventStartDate_149.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_149);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_297;
            FIX::ComplexEventEndTime ComplexEventEndTime_297(FIX::UTCTIMEONLY(20, 59, 50));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventEndTime_297);
            ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventEndTime_297.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_297(FIX::UTCTIMEONLY(8, 9, 28));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventStartTime_297);
            ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventStartTime_297.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_297);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_298;
            FIX::ComplexEventEndTime ComplexEventEndTime_298(FIX::UTCTIMEONLY(5, 29, 36));
            noComplexEventTimes_1_1_1_0_4_1.set(ComplexEventEndTime_298);
            ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventEndTime_298.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_298(FIX::UTCTIMEONLY(1, 10, 17));
            noComplexEventTimes_1_1_1_0_4_1.set(ComplexEventStartTime_298);
            ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventStartTime_298.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_298);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_299;
            FIX::ComplexEventEndTime ComplexEventEndTime_299(FIX::UTCTIMEONLY(21, 54, 50));
            noComplexEventTimes_1_1_1_0_4_2.set(ComplexEventEndTime_299);
            ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventEndTime_299.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_299(FIX::UTCTIMEONLY(17, 11, 34));
            noComplexEventTimes_1_1_1_0_4_2.set(ComplexEventStartTime_299);
            ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventStartTime_299.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_299);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_2);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_150;
          FIX::ComplexEventEndDate ComplexEventEndDate_150(FIX::UTCTIMESTAMP(8, 56, 19, 2, 9, 2004));
          noComplexEventDates_1_1_1_3_1.set(ComplexEventEndDate_150);
          ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventEndDate_150.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_150(FIX::UTCTIMESTAMP(4, 37, 20, 16, 10, 2011));
          noComplexEventDates_1_1_1_3_1.set(ComplexEventStartDate_150);
          ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventStartDate_150.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_150);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_300;
            FIX::ComplexEventEndTime ComplexEventEndTime_300(FIX::UTCTIMEONLY(3, 41, 29));
            noComplexEventTimes_1_1_1_1_4_0.set(ComplexEventEndTime_300);
            ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventEndTime_300.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_300(FIX::UTCTIMEONLY(18, 39, 53));
            noComplexEventTimes_1_1_1_1_4_0.set(ComplexEventStartTime_300);
            ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventStartTime_300.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_300);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_301;
            FIX::ComplexEventEndTime ComplexEventEndTime_301(FIX::UTCTIMEONLY(1, 39, 24));
            noComplexEventTimes_1_1_1_1_4_1.set(ComplexEventEndTime_301);
            ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventEndTime_301.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_301(FIX::UTCTIMEONLY(1, 36, 58));
            noComplexEventTimes_1_1_1_1_4_1.set(ComplexEventStartTime_301);
            ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventStartTime_301.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_301);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_302;
            FIX::ComplexEventEndTime ComplexEventEndTime_302(FIX::UTCTIMEONLY(20, 54, 18));
            noComplexEventTimes_1_1_1_1_4_2.set(ComplexEventEndTime_302);
            ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventEndTime_302.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_302(FIX::UTCTIMEONLY(6, 56, 56));
            noComplexEventTimes_1_1_1_1_4_2.set(ComplexEventStartTime_302);
            ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventStartTime_302.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_302);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_1.addGroup(noComplexEventTimes_1_1_1_1_4_2);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_72;
        FIX::ComplexEventCondition ComplexEventCondition_72(2);
        noComplexEvents_1_1_2_2.set(ComplexEventCondition_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventCondition_72.getString());
        FIX::ComplexEventPrice ComplexEventPrice_72;
        ComplexEventPrice_72.setString("14446198");
        noComplexEvents_1_1_2_2.set(ComplexEventPrice_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPrice_72.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_72(2);
        noComplexEvents_1_1_2_2.set(ComplexEventPriceBoundaryMethod_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryMethod_72.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_72;
        ComplexEventPriceBoundaryPrecision_72.setString("18.550000");
        noComplexEvents_1_1_2_2.set(ComplexEventPriceBoundaryPrecision_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryPrecision_72.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_72(2);
        noComplexEvents_1_1_2_2.set(ComplexEventPriceTimeType_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceTimeType_72.getString());
        FIX::ComplexEventType ComplexEventType_72(3);
        noComplexEvents_1_1_2_2.set(ComplexEventType_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventType_72.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_72;
        ComplexOptPayoutAmount_72.setString("3755214");
        noComplexEvents_1_1_2_2.set(ComplexOptPayoutAmount_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexOptPayoutAmount_72.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_72);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_151;
          FIX::ComplexEventEndDate ComplexEventEndDate_151(FIX::UTCTIMESTAMP(21, 57, 17, 4, 2, 2003));
          noComplexEventDates_1_1_2_3_0.set(ComplexEventEndDate_151);
          ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventEndDate_151.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_151(FIX::UTCTIMESTAMP(18, 42, 6, 21, 8, 2004));
          noComplexEventDates_1_1_2_3_0.set(ComplexEventStartDate_151);
          ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventStartDate_151.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_151);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_303;
            FIX::ComplexEventEndTime ComplexEventEndTime_303(FIX::UTCTIMEONLY(23, 22, 4));
            noComplexEventTimes_1_1_2_0_4_0.set(ComplexEventEndTime_303);
            ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventEndTime_303.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_303(FIX::UTCTIMEONLY(4, 0, 38));
            noComplexEventTimes_1_1_2_0_4_0.set(ComplexEventStartTime_303);
            ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventStartTime_303.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_303);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_304;
            FIX::ComplexEventEndTime ComplexEventEndTime_304(FIX::UTCTIMEONLY(13, 54, 51));
            noComplexEventTimes_1_1_2_0_4_1.set(ComplexEventEndTime_304);
            ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventEndTime_304.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_304(FIX::UTCTIMEONLY(20, 19, 20));
            noComplexEventTimes_1_1_2_0_4_1.set(ComplexEventStartTime_304);
            ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventStartTime_304.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_304);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_305;
            FIX::ComplexEventEndTime ComplexEventEndTime_305(FIX::UTCTIMEONLY(8, 17, 31));
            noComplexEventTimes_1_1_2_0_4_2.set(ComplexEventEndTime_305);
            ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventEndTime_305.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_305(FIX::UTCTIMEONLY(6, 26, 10));
            noComplexEventTimes_1_1_2_0_4_2.set(ComplexEventStartTime_305);
            ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventStartTime_305.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_305);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_2);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_152;
          FIX::ComplexEventEndDate ComplexEventEndDate_152(FIX::UTCTIMESTAMP(0, 9, 22, 4, 8, 2013));
          noComplexEventDates_1_1_2_3_1.set(ComplexEventEndDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventEndDate_152.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_152(FIX::UTCTIMESTAMP(6, 3, 39, 20, 1, 2007));
          noComplexEventDates_1_1_2_3_1.set(ComplexEventStartDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventStartDate_152.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_152);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_306;
            FIX::ComplexEventEndTime ComplexEventEndTime_306(FIX::UTCTIMEONLY(1, 12, 50));
            noComplexEventTimes_1_1_2_1_4_0.set(ComplexEventEndTime_306);
            ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventEndTime_306.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_306(FIX::UTCTIMEONLY(9, 9, 1));
            noComplexEventTimes_1_1_2_1_4_0.set(ComplexEventStartTime_306);
            ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventStartTime_306.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_306);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_307;
            FIX::ComplexEventEndTime ComplexEventEndTime_307(FIX::UTCTIMEONLY(18, 18, 13));
            noComplexEventTimes_1_1_2_1_4_1.set(ComplexEventEndTime_307);
            ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventEndTime_307.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_307(FIX::UTCTIMEONLY(5, 39, 53));
            noComplexEventTimes_1_1_2_1_4_1.set(ComplexEventStartTime_307);
            ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventStartTime_307.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_307);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_308;
            FIX::ComplexEventEndTime ComplexEventEndTime_308(FIX::UTCTIMEONLY(4, 2, 11));
            noComplexEventTimes_1_1_2_1_4_2.set(ComplexEventEndTime_308);
            ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventEndTime_308.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_308(FIX::UTCTIMEONLY(13, 1, 2));
            noComplexEventTimes_1_1_2_1_4_2.set(ComplexEventStartTime_308);
            ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventStartTime_308.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_308);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_2);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_67;
        FIX::EventDate EventDate_67("LOCALMKTDATE_1808092204");
        noEvents_1_1_2_0.set(EventDate_67);
        EvntGrp_NoEvents_67.insert(EventDate_67.getString());
        FIX::EventPx EventPx_67;
        EventPx_67.setString("19976872");
        noEvents_1_1_2_0.set(EventPx_67);
        EvntGrp_NoEvents_67.insert(EventPx_67.getString());
        FIX::EventText EventText_67("STRING_839509996");
        noEvents_1_1_2_0.set(EventText_67);
        EvntGrp_NoEvents_67.insert(EventText_67.getString());
        FIX::EventTime EventTime_67(FIX::UTCTIMESTAMP(5, 34, 28, 22, 11, 2006));
        noEvents_1_1_2_0.set(EventTime_67);
        EvntGrp_NoEvents_67.insert(EventTime_67.getString());
        FIX::EventType EventType_67(16);
        noEvents_1_1_2_0.set(EventType_67);
        EvntGrp_NoEvents_67.insert(EventType_67.getString());
        all_values.push_back(EvntGrp_NoEvents_67);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_68;
        FIX::InstrumentPartyID InstrumentPartyID_68("STRING_1544206460");
        noInstrumentParties_1_1_2_0.set(InstrumentPartyID_68);
        InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyID_68.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_68('5');
        noInstrumentParties_1_1_2_0.set(InstrumentPartyIDSource_68);
        InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyIDSource_68.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_68(276973806);
        noInstrumentParties_1_1_2_0.set(InstrumentPartyRole_68);
        InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyRole_68.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_68);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134;
          FIX::InstrumentPartySubID InstrumentPartySubID_134("STRING_2014580926");
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubID_134);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubID_134.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_134(1293865759);
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubIDType_134);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubIDType_134.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_69;
        FIX::InstrumentPartyID InstrumentPartyID_69("STRING_344154144");
        noInstrumentParties_1_1_2_1.set(InstrumentPartyID_69);
        InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyID_69.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_69('1');
        noInstrumentParties_1_1_2_1.set(InstrumentPartyIDSource_69);
        InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyIDSource_69.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_69(912833091);
        noInstrumentParties_1_1_2_1.set(InstrumentPartyRole_69);
        InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyRole_69.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_69);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135;
          FIX::InstrumentPartySubID InstrumentPartySubID_135("STRING_1220604273");
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubID_135);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubID_135.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_135(558674903);
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubIDType_135);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubIDType_135.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136;
          FIX::InstrumentPartySubID InstrumentPartySubID_136("STRING_391649831");
          noInstrumentPartySubIDs_1_1_1_3_1.set(InstrumentPartySubID_136);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubID_136.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_136(2033276684);
          noInstrumentPartySubIDs_1_1_1_3_1.set(InstrumentPartySubIDType_136);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubIDType_136.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137;
          FIX::InstrumentPartySubID InstrumentPartySubID_137("STRING_1950224571");
          noInstrumentPartySubIDs_1_1_1_3_2.set(InstrumentPartySubID_137);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubID_137.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_137(1864444069);
          noInstrumentPartySubIDs_1_1_1_3_2.set(InstrumentPartySubIDType_137);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubIDType_137.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_70;
        FIX::InstrumentPartyID InstrumentPartyID_70("STRING_1412466637");
        noInstrumentParties_1_1_2_2.set(InstrumentPartyID_70);
        InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyID_70.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_70('7');
        noInstrumentParties_1_1_2_2.set(InstrumentPartyIDSource_70);
        InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyIDSource_70.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_70(1022971217);
        noInstrumentParties_1_1_2_2.set(InstrumentPartyRole_70);
        InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyRole_70.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_70);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138;
          FIX::InstrumentPartySubID InstrumentPartySubID_138("STRING_551686339");
          noInstrumentPartySubIDs_1_1_2_3_0.set(InstrumentPartySubID_138);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubID_138.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_138(1862481213);
          noInstrumentPartySubIDs_1_1_2_3_0.set(InstrumentPartySubIDType_138);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubIDType_138.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139;
          FIX::InstrumentPartySubID InstrumentPartySubID_139("STRING_989213694");
          noInstrumentPartySubIDs_1_1_2_3_1.set(InstrumentPartySubID_139);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubID_139.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_139(1497420264);
          noInstrumentPartySubIDs_1_1_2_3_1.set(InstrumentPartySubIDType_139);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubIDType_139.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_62;
        FIX::SecurityAltID SecurityAltID_62("STRING_368923994");
        noSecurityAltID_1_1_2_0.set(SecurityAltID_62);
        SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltID_62.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_62("STRING_684922150");
        noSecurityAltID_1_1_2_0.set(SecurityAltIDSource_62);
        SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltIDSource_62.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_62);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_63;
        FIX::SecurityAltID SecurityAltID_63("STRING_1929370005");
        noSecurityAltID_1_1_2_1.set(SecurityAltID_63);
        SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltID_63.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_63("STRING_166149805");
        noSecurityAltID_1_1_2_1.set(SecurityAltIDSource_63);
        SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltIDSource_63.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_63);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_64;
        FIX::SecurityAltID SecurityAltID_64("STRING_413454997");
        noSecurityAltID_1_1_2_2.set(SecurityAltID_64);
        SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltID_64.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_64("STRING_1125091741");
        noSecurityAltID_1_1_2_2.set(SecurityAltIDSource_64);
        SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltIDSource_64.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_64);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_72;
      FIX::SecurityXML SecurityXML_73("XMLDATA_1710356265");
      noQuoteEntries_1_1_1.set(SecurityXML_73);
      FIX::SecurityXMLLen SecurityXMLLen_36(959613725);
      noQuoteEntries_1_1_1.set(SecurityXMLLen_36);
      FIX::SecurityXMLSchema SecurityXMLSchema_36("STRING_1402065547");
      noQuoteEntries_1_1_1.set(SecurityXMLSchema_36);
      SecurityXML_72.insert(SecurityXMLSchema_36.getString());
      all_values.push_back(SecurityXML_72);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_55;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_55("DATA_1005619039");
    noQuoteSets_0_1.set(EncodedUnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuer_55.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_55(826711003);
    noQuoteSets_0_1.set(EncodedUnderlyingIssuerLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingIssuerLen_55.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_55("DATA_548447658");
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDesc_55.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_55(1349773183);
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDescLen_55);
    UnderlyingInstrument_55.insert(EncodedUnderlyingSecurityDescLen_55.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_55;
    UnderlyingAdjustedQuantity_55.setString("20025168");
    noQuoteSets_0_1.set(UnderlyingAdjustedQuantity_55);
    UnderlyingInstrument_55.insert(UnderlyingAdjustedQuantity_55.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_55;
    UnderlyingAllocationPercent_55.setString("7.490000");
    noQuoteSets_0_1.set(UnderlyingAllocationPercent_55);
    UnderlyingInstrument_55.insert(UnderlyingAllocationPercent_55.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_55;
    UnderlyingAttachmentPoint_55.setString("89.530000");
    noQuoteSets_0_1.set(UnderlyingAttachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingAttachmentPoint_55.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_55("STRING_1075637512");
    noQuoteSets_0_1.set(UnderlyingCFICode_55);
    UnderlyingInstrument_55.insert(UnderlyingCFICode_55.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_55("STRING_2019955652");
    noQuoteSets_0_1.set(UnderlyingCPProgram_55);
    UnderlyingInstrument_55.insert(UnderlyingCPProgram_55.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_55("STRING_455988784");
    noQuoteSets_0_1.set(UnderlyingCPRegType_55);
    UnderlyingInstrument_55.insert(UnderlyingCPRegType_55.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_55;
    UnderlyingCapValue_55.setString("9614305");
    noQuoteSets_0_1.set(UnderlyingCapValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCapValue_55.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_55;
    UnderlyingCashAmount_55.setString("18226965");
    noQuoteSets_0_1.set(UnderlyingCashAmount_55);
    UnderlyingInstrument_55.insert(UnderlyingCashAmount_55.getString());
    FIX::UnderlyingCashType UnderlyingCashType_55("STRING_DIFF");
    noQuoteSets_0_1.set(UnderlyingCashType_55);
    UnderlyingInstrument_55.insert(UnderlyingCashType_55.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_55;
    UnderlyingContractMultiplier_55.setString("2264135");
    noQuoteSets_0_1.set(UnderlyingContractMultiplier_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplier_55.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_55(376695713);
    noQuoteSets_0_1.set(UnderlyingContractMultiplierUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingContractMultiplierUnit_55.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_55("COUNTRY_1195920422");
    noQuoteSets_0_1.set(UnderlyingCountryOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingCountryOfIssue_55.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_55("LOCALMKTDATE_1299488732");
    noQuoteSets_0_1.set(UnderlyingCouponPaymentDate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponPaymentDate_55.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_55;
    UnderlyingCouponRate_55.setString("20.520000");
    noQuoteSets_0_1.set(UnderlyingCouponRate_55);
    UnderlyingInstrument_55.insert(UnderlyingCouponRate_55.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_55("STRING_910917987");
    noQuoteSets_0_1.set(UnderlyingCreditRating_55);
    UnderlyingInstrument_55.insert(UnderlyingCreditRating_55.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_55("JPY");
    noQuoteSets_0_1.set(UnderlyingCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrency_55.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_55;
    UnderlyingCurrentValue_55.setString("13099133");
    noQuoteSets_0_1.set(UnderlyingCurrentValue_55);
    UnderlyingInstrument_55.insert(UnderlyingCurrentValue_55.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_55;
    UnderlyingDetachmentPoint_55.setString("27.730000");
    noQuoteSets_0_1.set(UnderlyingDetachmentPoint_55);
    UnderlyingInstrument_55.insert(UnderlyingDetachmentPoint_55.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_55;
    UnderlyingDirtyPrice_55.setString("9632408");
    noQuoteSets_0_1.set(UnderlyingDirtyPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingDirtyPrice_55.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_55;
    UnderlyingEndPrice_55.setString("10917996");
    noQuoteSets_0_1.set(UnderlyingEndPrice_55);
    UnderlyingInstrument_55.insert(UnderlyingEndPrice_55.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_55;
    UnderlyingEndValue_55.setString("6762925");
    noQuoteSets_0_1.set(UnderlyingEndValue_55);
    UnderlyingInstrument_55.insert(UnderlyingEndValue_55.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_55(1376695815);
    noQuoteSets_0_1.set(UnderlyingExerciseStyle_55);
    UnderlyingInstrument_55.insert(UnderlyingExerciseStyle_55.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_55;
    UnderlyingFXRate_55.setString("694077");
    noQuoteSets_0_1.set(UnderlyingFXRate_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRate_55.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_55('M');
    noQuoteSets_0_1.set(UnderlyingFXRateCalc_55);
    UnderlyingInstrument_55.insert(UnderlyingFXRateCalc_55.getString());
    FIX::UnderlyingFactor UnderlyingFactor_55;
    UnderlyingFactor_55.setString("1888258");
    noQuoteSets_0_1.set(UnderlyingFactor_55);
    UnderlyingInstrument_55.insert(UnderlyingFactor_55.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_55(1471473304);
    noQuoteSets_0_1.set(UnderlyingFlowScheduleType_55);
    UnderlyingInstrument_55.insert(UnderlyingFlowScheduleType_55.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_55("STRING_1244784234");
    noQuoteSets_0_1.set(UnderlyingInstrRegistry_55);
    UnderlyingInstrument_55.insert(UnderlyingInstrRegistry_55.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_55("LOCALMKTDATE_1015536895");
    noQuoteSets_0_1.set(UnderlyingIssueDate_55);
    UnderlyingInstrument_55.insert(UnderlyingIssueDate_55.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_55("STRING_2019920962");
    noQuoteSets_0_1.set(UnderlyingIssuer_55);
    UnderlyingInstrument_55.insert(UnderlyingIssuer_55.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_55("STRING_447073769");
    noQuoteSets_0_1.set(UnderlyingLocaleOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingLocaleOfIssue_55.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_55("LOCALMKTDATE_870570134");
    noQuoteSets_0_1.set(UnderlyingMaturityDate_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityDate_55.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_55("MONTHYEAR_1333718064");
    noQuoteSets_0_1.set(UnderlyingMaturityMonthYear_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityMonthYear_55.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_55("TZTIMEONLY_511412722");
    noQuoteSets_0_1.set(UnderlyingMaturityTime_55);
    UnderlyingInstrument_55.insert(UnderlyingMaturityTime_55.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_55;
    UnderlyingNotionalPercentageOutstanding_55.setString("76.460000");
    noQuoteSets_0_1.set(UnderlyingNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_55('1');
    noQuoteSets_0_1.set(UnderlyingOptAttribute_55);
    UnderlyingInstrument_55.insert(UnderlyingOptAttribute_55.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_55;
    UnderlyingOriginalNotionalPercentageOutstanding_55.setString("15.070000");
    noQuoteSets_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_55);
    UnderlyingInstrument_55.insert(UnderlyingOriginalNotionalPercentageOutstanding_55.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_55("STRING_760154547");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasure_55.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_55;
    UnderlyingPriceUnitOfMeasureQty_55.setString("8814029");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingPriceUnitOfMeasureQty_55.getString());
    FIX::UnderlyingProduct UnderlyingProduct_55(1140350712);
    noQuoteSets_0_1.set(UnderlyingProduct_55);
    UnderlyingInstrument_55.insert(UnderlyingProduct_55.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_55(986568085);
    noQuoteSets_0_1.set(UnderlyingPutOrCall_55);
    UnderlyingInstrument_55.insert(UnderlyingPutOrCall_55.getString());
    FIX::UnderlyingPx UnderlyingPx_55;
    UnderlyingPx_55.setString("12580987");
    noQuoteSets_0_1.set(UnderlyingPx_55);
    UnderlyingInstrument_55.insert(UnderlyingPx_55.getString());
    FIX::UnderlyingQty UnderlyingQty_55;
    UnderlyingQty_55.setString("1887874");
    noQuoteSets_0_1.set(UnderlyingQty_55);
    UnderlyingInstrument_55.insert(UnderlyingQty_55.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_55("LOCALMKTDATE_138573169");
    noQuoteSets_0_1.set(UnderlyingRedemptionDate_55);
    UnderlyingInstrument_55.insert(UnderlyingRedemptionDate_55.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_55("STRING_38997113");
    noQuoteSets_0_1.set(UnderlyingRepoCollateralSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingRepoCollateralSecurityType_55.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_55;
    UnderlyingRepurchaseRate_55.setString("54.740000");
    noQuoteSets_0_1.set(UnderlyingRepurchaseRate_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseRate_55.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_55(279791947);
    noQuoteSets_0_1.set(UnderlyingRepurchaseTerm_55);
    UnderlyingInstrument_55.insert(UnderlyingRepurchaseTerm_55.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_55("STRING_317315781");
    noQuoteSets_0_1.set(UnderlyingRestructuringType_55);
    UnderlyingInstrument_55.insert(UnderlyingRestructuringType_55.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_55("STRING_262135133");
    noQuoteSets_0_1.set(UnderlyingSecurityDesc_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityDesc_55.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_55("EXCHANGE_789934720");
    noQuoteSets_0_1.set(UnderlyingSecurityExchange_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityExchange_55.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_55("STRING_1280556599");
    noQuoteSets_0_1.set(UnderlyingSecurityID_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityID_55.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_55("STRING_1353934797");
    noQuoteSets_0_1.set(UnderlyingSecurityIDSource_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityIDSource_55.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_55("STRING_1466227298");
    noQuoteSets_0_1.set(UnderlyingSecuritySubType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecuritySubType_55.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_55("STRING_509768766");
    noQuoteSets_0_1.set(UnderlyingSecurityType_55);
    UnderlyingInstrument_55.insert(UnderlyingSecurityType_55.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_55("STRING_1423342554");
    noQuoteSets_0_1.set(UnderlyingSeniority_55);
    UnderlyingInstrument_55.insert(UnderlyingSeniority_55.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_55("STRING_1705392493");
    noQuoteSets_0_1.set(UnderlyingSettlMethod_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlMethod_55.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_55(2);
    noQuoteSets_0_1.set(UnderlyingSettlementType_55);
    UnderlyingInstrument_55.insert(UnderlyingSettlementType_55.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_55;
    UnderlyingStartValue_55.setString("7473322");
    noQuoteSets_0_1.set(UnderlyingStartValue_55);
    UnderlyingInstrument_55.insert(UnderlyingStartValue_55.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_55("STRING_802693079");
    noQuoteSets_0_1.set(UnderlyingStateOrProvinceOfIssue_55);
    UnderlyingInstrument_55.insert(UnderlyingStateOrProvinceOfIssue_55.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_55("JPY");
    noQuoteSets_0_1.set(UnderlyingStrikeCurrency_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikeCurrency_55.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_55;
    UnderlyingStrikePrice_55.setString("12497668");
    noQuoteSets_0_1.set(UnderlyingStrikePrice_55);
    UnderlyingInstrument_55.insert(UnderlyingStrikePrice_55.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_55("STRING_437218040");
    noQuoteSets_0_1.set(UnderlyingSymbol_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbol_55.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_55("STRING_1953487588");
    noQuoteSets_0_1.set(UnderlyingSymbolSfx_55);
    UnderlyingInstrument_55.insert(UnderlyingSymbolSfx_55.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_55("STRING_1761179571");
    noQuoteSets_0_1.set(UnderlyingTimeUnit_55);
    UnderlyingInstrument_55.insert(UnderlyingTimeUnit_55.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_55("STRING_235942038");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasure_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasure_55.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_55;
    UnderlyingUnitOfMeasureQty_55.setString("10121940");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasureQty_55);
    UnderlyingInstrument_55.insert(UnderlyingUnitOfMeasureQty_55.getString());
    all_values.push_back(UnderlyingInstrument_55);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_114;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_114("STRING_996096585");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltID_114.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_114("STRING_1893597005");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltIDSource_114.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_115;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_115("STRING_1721448143");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltID_115.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_115("STRING_1982664670");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltIDSource_115.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_107;
      FIX::UnderlyingStipType UnderlyingStipType_107("STRING_1910235630");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_107);
      UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipType_107.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_107("STRING_2121237839");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_107);
      UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipValue_107.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_107);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_108;
      FIX::UnderlyingStipType UnderlyingStipType_108("STRING_1043209179");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_108);
      UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipType_108.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_108("STRING_862457456");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_108);
      UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipValue_108.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_108);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_102;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_102("STRING_1360524960");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_102);
      UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyID_102.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_102('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_102);
      UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyIDSource_102.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_102(1043480859);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_102);
      UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyRole_102.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_102);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_203("STRING_331043738");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_203);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203.insert(UnderlyingInstrumentPartySubID_203.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_203(362224510);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_203);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203.insert(UnderlyingInstrumentPartySubIDType_203.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_103;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_103("STRING_1003366677");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_103);
      UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyID_103.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_103('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_103);
      UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyIDSource_103.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_103(2067617003);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_103);
      UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyRole_103.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_103);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_204("STRING_354234854");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_204);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204.insert(UnderlyingInstrumentPartySubID_204.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_204(722826435);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_204);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204.insert(UnderlyingInstrumentPartySubIDType_204.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_104;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_104("STRING_1268609240");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_104);
      UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyID_104.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_104('9');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_104);
      UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyIDSource_104.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_104(1972593284);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_104);
      UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyRole_104.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_104);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_205("STRING_780008319");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_205);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205.insert(UnderlyingInstrumentPartySubID_205.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_205(1586289207);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_205);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205.insert(UnderlyingInstrumentPartySubIDType_205.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_206("STRING_1941769319");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_206);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206.insert(UnderlyingInstrumentPartySubID_206.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_206(1792202328);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_206);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206.insert(UnderlyingInstrumentPartySubIDType_206.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
    FIX::QuoteSetID QuoteSetID_2("STRING_790382256");
    noQuoteSets_0_2.set(QuoteSetID_2);
    QuotSetGrp_NoQuoteSets_2.insert(QuoteSetID_2.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_2(FIX::UTCTIMESTAMP(5, 39, 23, 11, 7, 2002));
    noQuoteSets_0_2.set(QuoteSetValidUntilTime_2);
    QuotSetGrp_NoQuoteSets_2.insert(QuoteSetValidUntilTime_2.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_2(219076923);
    noQuoteSets_0_2.set(TotNoQuoteEntries_2);
    QuotSetGrp_NoQuoteSets_2.insert(TotNoQuoteEntries_2.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_2);
    all_compo_names.insert("QuotSetGrp.NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_5;
      FIX::BidForwardPoints BidForwardPoints_5;
      BidForwardPoints_5.setString("6512945");
      noQuoteEntries_2_1_0.set(BidForwardPoints_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidForwardPoints_5.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_5;
      BidForwardPoints2_5.setString("13436695");
      noQuoteEntries_2_1_0.set(BidForwardPoints2_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidForwardPoints2_5.getString());
      FIX::BidPx BidPx_5;
      BidPx_5.setString("18963444");
      noQuoteEntries_2_1_0.set(BidPx_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidPx_5.getString());
      FIX::BidSize BidSize_5;
      BidSize_5.setString("11448925");
      noQuoteEntries_2_1_0.set(BidSize_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidSize_5.getString());
      FIX::BidSpotRate BidSpotRate_5;
      BidSpotRate_5.setString("16747132");
      noQuoteEntries_2_1_0.set(BidSpotRate_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidSpotRate_5.getString());
      FIX::BidYield BidYield_5;
      BidYield_5.setString("53.310000");
      noQuoteEntries_2_1_0.set(BidYield_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidYield_5.getString());
      FIX::BookingType BookingType_12(1);
      noQuoteEntries_2_1_0.set(BookingType_12);
      QuotEntryGrp_NoQuoteEntries_5.insert(BookingType_12.getString());
      FIX::Currency Currency_35("GBP");
      noQuoteEntries_2_1_0.set(Currency_35);
      QuotEntryGrp_NoQuoteEntries_5.insert(Currency_35.getString());
      FIX::MidPx MidPx_5;
      MidPx_5.setString("17027368");
      noQuoteEntries_2_1_0.set(MidPx_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(MidPx_5.getString());
      FIX::MidYield MidYield_5;
      MidYield_5.setString("7.500000");
      noQuoteEntries_2_1_0.set(MidYield_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(MidYield_5.getString());
      FIX::OfferForwardPoints OfferForwardPoints_5;
      OfferForwardPoints_5.setString("7540451");
      noQuoteEntries_2_1_0.set(OfferForwardPoints_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferForwardPoints_5.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_5;
      OfferForwardPoints2_5.setString("8238624");
      noQuoteEntries_2_1_0.set(OfferForwardPoints2_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferForwardPoints2_5.getString());
      FIX::OfferPx OfferPx_5;
      OfferPx_5.setString("4623714");
      noQuoteEntries_2_1_0.set(OfferPx_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferPx_5.getString());
      FIX::OfferSize OfferSize_5;
      OfferSize_5.setString("5791547");
      noQuoteEntries_2_1_0.set(OfferSize_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferSize_5.getString());
      FIX::OfferSpotRate OfferSpotRate_5;
      OfferSpotRate_5.setString("3822060");
      noQuoteEntries_2_1_0.set(OfferSpotRate_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferSpotRate_5.getString());
      FIX::OfferYield OfferYield_5;
      OfferYield_5.setString("98.010000");
      noQuoteEntries_2_1_0.set(OfferYield_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferYield_5.getString());
      FIX::OrdType OrdType_38('E');
      noQuoteEntries_2_1_0.set(OrdType_38);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrdType_38.getString());
      FIX::OrderCapacity OrderCapacity_13('G');
      noQuoteEntries_2_1_0.set(OrderCapacity_13);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrderCapacity_13.getString());
      FIX::OrderQty2 OrderQty2_6;
      OrderQty2_6.setString("8870984");
      noQuoteEntries_2_1_0.set(OrderQty2_6);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrderQty2_6.getString());
      FIX::OrderRestrictions OrderRestrictions_10("MULTIPLECHARVALUE_8");
      noQuoteEntries_2_1_0.set(OrderRestrictions_10);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrderRestrictions_10.getString());
      FIX::QuoteEntryID QuoteEntryID_8("STRING_966874022");
      noQuoteEntries_2_1_0.set(QuoteEntryID_8);
      QuotEntryGrp_NoQuoteEntries_5.insert(QuoteEntryID_8.getString());
      FIX::SettlDate SettlDate_28("LOCALMKTDATE_277930519");
      noQuoteEntries_2_1_0.set(SettlDate_28);
      QuotEntryGrp_NoQuoteEntries_5.insert(SettlDate_28.getString());
      FIX::SettlDate2 SettlDate2_6("LOCALMKTDATE_1779214440");
      noQuoteEntries_2_1_0.set(SettlDate2_6);
      QuotEntryGrp_NoQuoteEntries_5.insert(SettlDate2_6.getString());
      FIX::TradingSessionID TradingSessionID_41("STRING_6");
      noQuoteEntries_2_1_0.set(TradingSessionID_41);
      QuotEntryGrp_NoQuoteEntries_5.insert(TradingSessionID_41.getString());
      FIX::TradingSessionSubID TradingSessionSubID_41("STRING_6");
      noQuoteEntries_2_1_0.set(TradingSessionSubID_41);
      QuotEntryGrp_NoQuoteEntries_5.insert(TradingSessionSubID_41.getString());
      FIX::TransactTime TransactTime_31(FIX::UTCTIMESTAMP(3, 45, 10, 5, 8, 2001));
      noQuoteEntries_2_1_0.set(TransactTime_31);
      QuotEntryGrp_NoQuoteEntries_5.insert(TransactTime_31.getString());
      FIX::ValidUntilTime ValidUntilTime_6(FIX::UTCTIMESTAMP(5, 19, 45, 27, 4, 2011));
      noQuoteEntries_2_1_0.set(ValidUntilTime_6);
      QuotEntryGrp_NoQuoteEntries_5.insert(ValidUntilTime_6.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_5);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_70;
        FIX::EncodedLegIssuer EncodedLegIssuer_70("DATA_848309297");
        noLegs_2_0_2_0.set(EncodedLegIssuer_70);
        InstrumentLeg_70.insert(EncodedLegIssuer_70.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_70(1542344693);
        noLegs_2_0_2_0.set(EncodedLegIssuerLen_70);
        InstrumentLeg_70.insert(EncodedLegIssuerLen_70.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_70("DATA_2139822575");
        noLegs_2_0_2_0.set(EncodedLegSecurityDesc_70);
        InstrumentLeg_70.insert(EncodedLegSecurityDesc_70.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_70(1310680779);
        noLegs_2_0_2_0.set(EncodedLegSecurityDescLen_70);
        InstrumentLeg_70.insert(EncodedLegSecurityDescLen_70.getString());
        FIX::LegCFICode LegCFICode_70("STRING_2121499450");
        noLegs_2_0_2_0.set(LegCFICode_70);
        InstrumentLeg_70.insert(LegCFICode_70.getString());
        FIX::LegContractMultiplier LegContractMultiplier_70;
        LegContractMultiplier_70.setString("3745450");
        noLegs_2_0_2_0.set(LegContractMultiplier_70);
        InstrumentLeg_70.insert(LegContractMultiplier_70.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_70(405576932);
        noLegs_2_0_2_0.set(LegContractMultiplierUnit_70);
        InstrumentLeg_70.insert(LegContractMultiplierUnit_70.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_70("MONTHYEAR_2139459767");
        noLegs_2_0_2_0.set(LegContractSettlMonth_70);
        InstrumentLeg_70.insert(LegContractSettlMonth_70.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_70("COUNTRY_551036787");
        noLegs_2_0_2_0.set(LegCountryOfIssue_70);
        InstrumentLeg_70.insert(LegCountryOfIssue_70.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_70("LOCALMKTDATE_1292675413");
        noLegs_2_0_2_0.set(LegCouponPaymentDate_70);
        InstrumentLeg_70.insert(LegCouponPaymentDate_70.getString());
        FIX::LegCouponRate LegCouponRate_70;
        LegCouponRate_70.setString("94.260000");
        noLegs_2_0_2_0.set(LegCouponRate_70);
        InstrumentLeg_70.insert(LegCouponRate_70.getString());
        FIX::LegCreditRating LegCreditRating_70("STRING_1517910809");
        noLegs_2_0_2_0.set(LegCreditRating_70);
        InstrumentLeg_70.insert(LegCreditRating_70.getString());
        FIX::LegCurrency LegCurrency_70("JPY");
        noLegs_2_0_2_0.set(LegCurrency_70);
        InstrumentLeg_70.insert(LegCurrency_70.getString());
        FIX::LegDatedDate LegDatedDate_70("LOCALMKTDATE_962864462");
        noLegs_2_0_2_0.set(LegDatedDate_70);
        InstrumentLeg_70.insert(LegDatedDate_70.getString());
        FIX::LegExerciseStyle LegExerciseStyle_70(96096907);
        noLegs_2_0_2_0.set(LegExerciseStyle_70);
        InstrumentLeg_70.insert(LegExerciseStyle_70.getString());
        FIX::LegFactor LegFactor_70;
        LegFactor_70.setString("7974041");
        noLegs_2_0_2_0.set(LegFactor_70);
        InstrumentLeg_70.insert(LegFactor_70.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_70(1007135585);
        noLegs_2_0_2_0.set(LegFlowScheduleType_70);
        InstrumentLeg_70.insert(LegFlowScheduleType_70.getString());
        FIX::LegInstrRegistry LegInstrRegistry_70("STRING_59841164");
        noLegs_2_0_2_0.set(LegInstrRegistry_70);
        InstrumentLeg_70.insert(LegInstrRegistry_70.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_70("LOCALMKTDATE_4831308");
        noLegs_2_0_2_0.set(LegInterestAccrualDate_70);
        InstrumentLeg_70.insert(LegInterestAccrualDate_70.getString());
        FIX::LegIssueDate LegIssueDate_70("LOCALMKTDATE_1904270318");
        noLegs_2_0_2_0.set(LegIssueDate_70);
        InstrumentLeg_70.insert(LegIssueDate_70.getString());
        FIX::LegIssuer LegIssuer_70("STRING_674880015");
        noLegs_2_0_2_0.set(LegIssuer_70);
        InstrumentLeg_70.insert(LegIssuer_70.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_70("STRING_555928003");
        noLegs_2_0_2_0.set(LegLocaleOfIssue_70);
        InstrumentLeg_70.insert(LegLocaleOfIssue_70.getString());
        FIX::LegMaturityDate LegMaturityDate_70("LOCALMKTDATE_402782224");
        noLegs_2_0_2_0.set(LegMaturityDate_70);
        InstrumentLeg_70.insert(LegMaturityDate_70.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_70("MONTHYEAR_287327724");
        noLegs_2_0_2_0.set(LegMaturityMonthYear_70);
        InstrumentLeg_70.insert(LegMaturityMonthYear_70.getString());
        FIX::LegMaturityTime LegMaturityTime_70("TZTIMEONLY_634254302");
        noLegs_2_0_2_0.set(LegMaturityTime_70);
        InstrumentLeg_70.insert(LegMaturityTime_70.getString());
        FIX::LegOptAttribute LegOptAttribute_70('1');
        noLegs_2_0_2_0.set(LegOptAttribute_70);
        InstrumentLeg_70.insert(LegOptAttribute_70.getString());
        FIX::LegOptionRatio LegOptionRatio_70;
        LegOptionRatio_70.setString("20480346");
        noLegs_2_0_2_0.set(LegOptionRatio_70);
        InstrumentLeg_70.insert(LegOptionRatio_70.getString());
        FIX::LegPool LegPool_70("STRING_1994196497");
        noLegs_2_0_2_0.set(LegPool_70);
        InstrumentLeg_70.insert(LegPool_70.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_70("STRING_1948162681");
        noLegs_2_0_2_0.set(LegPriceUnitOfMeasure_70);
        InstrumentLeg_70.insert(LegPriceUnitOfMeasure_70.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_70;
        LegPriceUnitOfMeasureQty_70.setString("12165110");
        noLegs_2_0_2_0.set(LegPriceUnitOfMeasureQty_70);
        InstrumentLeg_70.insert(LegPriceUnitOfMeasureQty_70.getString());
        FIX::LegProduct LegProduct_70(695022147);
        noLegs_2_0_2_0.set(LegProduct_70);
        InstrumentLeg_70.insert(LegProduct_70.getString());
        FIX::LegPutOrCall LegPutOrCall_70(1343023726);
        noLegs_2_0_2_0.set(LegPutOrCall_70);
        InstrumentLeg_70.insert(LegPutOrCall_70.getString());
        FIX::LegRatioQty LegRatioQty_70;
        LegRatioQty_70.setString("12088500");
        noLegs_2_0_2_0.set(LegRatioQty_70);
        InstrumentLeg_70.insert(LegRatioQty_70.getString());
        FIX::LegRedemptionDate LegRedemptionDate_70("LOCALMKTDATE_2005702926");
        noLegs_2_0_2_0.set(LegRedemptionDate_70);
        InstrumentLeg_70.insert(LegRedemptionDate_70.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_70("STRING_1317039528");
        noLegs_2_0_2_0.set(LegRepoCollateralSecurityType_70);
        InstrumentLeg_70.insert(LegRepoCollateralSecurityType_70.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_70;
        LegRepurchaseRate_70.setString("50.290000");
        noLegs_2_0_2_0.set(LegRepurchaseRate_70);
        InstrumentLeg_70.insert(LegRepurchaseRate_70.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_70(263796210);
        noLegs_2_0_2_0.set(LegRepurchaseTerm_70);
        InstrumentLeg_70.insert(LegRepurchaseTerm_70.getString());
        FIX::LegSecurityDesc LegSecurityDesc_70("STRING_1309015648");
        noLegs_2_0_2_0.set(LegSecurityDesc_70);
        InstrumentLeg_70.insert(LegSecurityDesc_70.getString());
        FIX::LegSecurityExchange LegSecurityExchange_70("EXCHANGE_2134431816");
        noLegs_2_0_2_0.set(LegSecurityExchange_70);
        InstrumentLeg_70.insert(LegSecurityExchange_70.getString());
        FIX::LegSecurityID LegSecurityID_70("STRING_1556471623");
        noLegs_2_0_2_0.set(LegSecurityID_70);
        InstrumentLeg_70.insert(LegSecurityID_70.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_70("STRING_1338855074");
        noLegs_2_0_2_0.set(LegSecurityIDSource_70);
        InstrumentLeg_70.insert(LegSecurityIDSource_70.getString());
        FIX::LegSecuritySubType LegSecuritySubType_70("STRING_1504858977");
        noLegs_2_0_2_0.set(LegSecuritySubType_70);
        InstrumentLeg_70.insert(LegSecuritySubType_70.getString());
        FIX::LegSecurityType LegSecurityType_70("STRING_979593908");
        noLegs_2_0_2_0.set(LegSecurityType_70);
        InstrumentLeg_70.insert(LegSecurityType_70.getString());
        FIX::LegSide LegSide_70('1');
        noLegs_2_0_2_0.set(LegSide_70);
        InstrumentLeg_70.insert(LegSide_70.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_70("STRING_320239791");
        noLegs_2_0_2_0.set(LegStateOrProvinceOfIssue_70);
        InstrumentLeg_70.insert(LegStateOrProvinceOfIssue_70.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_70("GBP");
        noLegs_2_0_2_0.set(LegStrikeCurrency_70);
        InstrumentLeg_70.insert(LegStrikeCurrency_70.getString());
        FIX::LegStrikePrice LegStrikePrice_70;
        LegStrikePrice_70.setString("13273753");
        noLegs_2_0_2_0.set(LegStrikePrice_70);
        InstrumentLeg_70.insert(LegStrikePrice_70.getString());
        FIX::LegSymbol LegSymbol_70("STRING_1135531979");
        noLegs_2_0_2_0.set(LegSymbol_70);
        InstrumentLeg_70.insert(LegSymbol_70.getString());
        FIX::LegSymbolSfx LegSymbolSfx_70("STRING_1802660726");
        noLegs_2_0_2_0.set(LegSymbolSfx_70);
        InstrumentLeg_70.insert(LegSymbolSfx_70.getString());
        FIX::LegTimeUnit LegTimeUnit_70("STRING_1084162047");
        noLegs_2_0_2_0.set(LegTimeUnit_70);
        InstrumentLeg_70.insert(LegTimeUnit_70.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_70("STRING_1810411994");
        noLegs_2_0_2_0.set(LegUnitOfMeasure_70);
        InstrumentLeg_70.insert(LegUnitOfMeasure_70.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_70;
        LegUnitOfMeasureQty_70.setString("2111050");
        noLegs_2_0_2_0.set(LegUnitOfMeasureQty_70);
        InstrumentLeg_70.insert(LegUnitOfMeasureQty_70.getString());
        all_values.push_back(InstrumentLeg_70);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_137;
          FIX::LegSecurityAltID LegSecurityAltID_137("STRING_2097739719");
          noLegSecurityAltID_2_0_0_3_0.set(LegSecurityAltID_137);
          LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltID_137.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_137("STRING_845359384");
          noLegSecurityAltID_2_0_0_3_0.set(LegSecurityAltIDSource_137);
          LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltIDSource_137.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_137);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_138;
          FIX::LegSecurityAltID LegSecurityAltID_138("STRING_499323733");
          noLegSecurityAltID_2_0_0_3_1.set(LegSecurityAltID_138);
          LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltID_138.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_138("STRING_1998290687");
          noLegSecurityAltID_2_0_0_3_1.set(LegSecurityAltIDSource_138);
          LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltIDSource_138.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_138);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_139;
          FIX::LegSecurityAltID LegSecurityAltID_139("STRING_692072234");
          noLegSecurityAltID_2_0_0_3_2.set(LegSecurityAltID_139);
          LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltID_139.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_139("STRING_300002766");
          noLegSecurityAltID_2_0_0_3_2.set(LegSecurityAltIDSource_139);
          LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltIDSource_139.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_139);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_37;
      FIX::AttachmentPoint AttachmentPoint_37;
      AttachmentPoint_37.setString("81.200000");
      noQuoteEntries_2_1_0.set(AttachmentPoint_37);
      Instrument_37.insert(AttachmentPoint_37.getString());
      FIX::CFICode CFICode_37("STRING_1387094381");
      noQuoteEntries_2_1_0.set(CFICode_37);
      Instrument_37.insert(CFICode_37.getString());
      FIX::CPProgram CPProgram_37(2);
      noQuoteEntries_2_1_0.set(CPProgram_37);
      Instrument_37.insert(CPProgram_37.getString());
      FIX::CPRegType CPRegType_37("STRING_128684480");
      noQuoteEntries_2_1_0.set(CPRegType_37);
      Instrument_37.insert(CPRegType_37.getString());
      FIX::CapPrice CapPrice_37;
      CapPrice_37.setString("12453136");
      noQuoteEntries_2_1_0.set(CapPrice_37);
      Instrument_37.insert(CapPrice_37.getString());
      FIX::ContractMultiplier ContractMultiplier_37;
      ContractMultiplier_37.setString("8125823");
      noQuoteEntries_2_1_0.set(ContractMultiplier_37);
      Instrument_37.insert(ContractMultiplier_37.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_37(2);
      noQuoteEntries_2_1_0.set(ContractMultiplierUnit_37);
      Instrument_37.insert(ContractMultiplierUnit_37.getString());
      FIX::ContractSettlMonth ContractSettlMonth_37("MONTHYEAR_1509109869");
      noQuoteEntries_2_1_0.set(ContractSettlMonth_37);
      Instrument_37.insert(ContractSettlMonth_37.getString());
      FIX::CountryOfIssue CountryOfIssue_37("COUNTRY_2121598021");
      noQuoteEntries_2_1_0.set(CountryOfIssue_37);
      Instrument_37.insert(CountryOfIssue_37.getString());
      FIX::CouponPaymentDate CouponPaymentDate_37("LOCALMKTDATE_1699027678");
      noQuoteEntries_2_1_0.set(CouponPaymentDate_37);
      Instrument_37.insert(CouponPaymentDate_37.getString());
      FIX::CouponRate CouponRate_37;
      CouponRate_37.setString("78.440000");
      noQuoteEntries_2_1_0.set(CouponRate_37);
      Instrument_37.insert(CouponRate_37.getString());
      FIX::CreditRating CreditRating_37("STRING_1312969447");
      noQuoteEntries_2_1_0.set(CreditRating_37);
      Instrument_37.insert(CreditRating_37.getString());
      FIX::DatedDate DatedDate_37("LOCALMKTDATE_1056403007");
      noQuoteEntries_2_1_0.set(DatedDate_37);
      Instrument_37.insert(DatedDate_37.getString());
      FIX::DetachmentPoint DetachmentPoint_37;
      DetachmentPoint_37.setString("17.520000");
      noQuoteEntries_2_1_0.set(DetachmentPoint_37);
      Instrument_37.insert(DetachmentPoint_37.getString());
      FIX::EncodedIssuer EncodedIssuer_37("DATA_165911092");
      noQuoteEntries_2_1_0.set(EncodedIssuer_37);
      Instrument_37.insert(EncodedIssuer_37.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_37(1376642799);
      noQuoteEntries_2_1_0.set(EncodedIssuerLen_37);
      Instrument_37.insert(EncodedIssuerLen_37.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_37("DATA_825898919");
      noQuoteEntries_2_1_0.set(EncodedSecurityDesc_37);
      Instrument_37.insert(EncodedSecurityDesc_37.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_37(1963740511);
      noQuoteEntries_2_1_0.set(EncodedSecurityDescLen_37);
      Instrument_37.insert(EncodedSecurityDescLen_37.getString());
      FIX::ExerciseStyle ExerciseStyle_37(1);
      noQuoteEntries_2_1_0.set(ExerciseStyle_37);
      Instrument_37.insert(ExerciseStyle_37.getString());
      FIX::Factor Factor_37;
      Factor_37.setString("19614308");
      noQuoteEntries_2_1_0.set(Factor_37);
      Instrument_37.insert(Factor_37.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_37(false);
      noQuoteEntries_2_1_0.set(FlexProductEligibilityIndicator_37);
      Instrument_37.insert(FlexProductEligibilityIndicator_37.getString());
      FIX::FlexibleIndicator FlexibleIndicator_37(false);
      noQuoteEntries_2_1_0.set(FlexibleIndicator_37);
      Instrument_37.insert(FlexibleIndicator_37.getString());
      FIX::FloorPrice FloorPrice_37;
      FloorPrice_37.setString("16243592");
      noQuoteEntries_2_1_0.set(FloorPrice_37);
      Instrument_37.insert(FloorPrice_37.getString());
      FIX::FlowScheduleType FlowScheduleType_37(1);
      noQuoteEntries_2_1_0.set(FlowScheduleType_37);
      Instrument_37.insert(FlowScheduleType_37.getString());
      FIX::InstrRegistry InstrRegistry_37("STRING_980157199");
      noQuoteEntries_2_1_0.set(InstrRegistry_37);
      Instrument_37.insert(InstrRegistry_37.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_37('1');
      noQuoteEntries_2_1_0.set(InstrmtAssignmentMethod_37);
      Instrument_37.insert(InstrmtAssignmentMethod_37.getString());
      FIX::InterestAccrualDate InterestAccrualDate_37("LOCALMKTDATE_527898408");
      noQuoteEntries_2_1_0.set(InterestAccrualDate_37);
      Instrument_37.insert(InterestAccrualDate_37.getString());
      FIX::IssueDate IssueDate_37("LOCALMKTDATE_1479480933");
      noQuoteEntries_2_1_0.set(IssueDate_37);
      Instrument_37.insert(IssueDate_37.getString());
      FIX::Issuer Issuer_37("STRING_1425422355");
      noQuoteEntries_2_1_0.set(Issuer_37);
      Instrument_37.insert(Issuer_37.getString());
      FIX::ListMethod ListMethod_37(0);
      noQuoteEntries_2_1_0.set(ListMethod_37);
      Instrument_37.insert(ListMethod_37.getString());
      FIX::LocaleOfIssue LocaleOfIssue_37("STRING_1779483699");
      noQuoteEntries_2_1_0.set(LocaleOfIssue_37);
      Instrument_37.insert(LocaleOfIssue_37.getString());
      FIX::MaturityDate MaturityDate_37("LOCALMKTDATE_345256827");
      noQuoteEntries_2_1_0.set(MaturityDate_37);
      Instrument_37.insert(MaturityDate_37.getString());
      FIX::MaturityMonthYear MaturityMonthYear_37("MONTHYEAR_459581375");
      noQuoteEntries_2_1_0.set(MaturityMonthYear_37);
      Instrument_37.insert(MaturityMonthYear_37.getString());
      FIX::MaturityTime MaturityTime_37("TZTIMEONLY_1275026544");
      noQuoteEntries_2_1_0.set(MaturityTime_37);
      Instrument_37.insert(MaturityTime_37.getString());
      FIX::MinPriceIncrement MinPriceIncrement_37;
      MinPriceIncrement_37.setString("4739413");
      noQuoteEntries_2_1_0.set(MinPriceIncrement_37);
      Instrument_37.insert(MinPriceIncrement_37.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_37;
      MinPriceIncrementAmount_37.setString("17048950");
      noQuoteEntries_2_1_0.set(MinPriceIncrementAmount_37);
      Instrument_37.insert(MinPriceIncrementAmount_37.getString());
      FIX::NTPositionLimit NTPositionLimit_37(2087608917);
      noQuoteEntries_2_1_0.set(NTPositionLimit_37);
      Instrument_37.insert(NTPositionLimit_37.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_37;
      NotionalPercentageOutstanding_37.setString("71.680000");
      noQuoteEntries_2_1_0.set(NotionalPercentageOutstanding_37);
      Instrument_37.insert(NotionalPercentageOutstanding_37.getString());
      FIX::OptAttribute OptAttribute_37('1');
      noQuoteEntries_2_1_0.set(OptAttribute_37);
      Instrument_37.insert(OptAttribute_37.getString());
      FIX::OptPayoutAmount OptPayoutAmount_37;
      OptPayoutAmount_37.setString("20617232");
      noQuoteEntries_2_1_0.set(OptPayoutAmount_37);
      Instrument_37.insert(OptPayoutAmount_37.getString());
      FIX::OptPayoutType OptPayoutType_37(1);
      noQuoteEntries_2_1_0.set(OptPayoutType_37);
      Instrument_37.insert(OptPayoutType_37.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_37;
      OriginalNotionalPercentageOutstanding_37.setString("90.990000");
      noQuoteEntries_2_1_0.set(OriginalNotionalPercentageOutstanding_37);
      Instrument_37.insert(OriginalNotionalPercentageOutstanding_37.getString());
      FIX::Pool Pool_37("STRING_1227209089");
      noQuoteEntries_2_1_0.set(Pool_37);
      Instrument_37.insert(Pool_37.getString());
      FIX::PositionLimit PositionLimit_37(646484206);
      noQuoteEntries_2_1_0.set(PositionLimit_37);
      Instrument_37.insert(PositionLimit_37.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_37("STRING_STD");
      noQuoteEntries_2_1_0.set(PriceQuoteMethod_37);
      Instrument_37.insert(PriceQuoteMethod_37.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_37("STRING_1393120182");
      noQuoteEntries_2_1_0.set(PriceUnitOfMeasure_37);
      Instrument_37.insert(PriceUnitOfMeasure_37.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_37;
      PriceUnitOfMeasureQty_37.setString("20231270");
      noQuoteEntries_2_1_0.set(PriceUnitOfMeasureQty_37);
      Instrument_37.insert(PriceUnitOfMeasureQty_37.getString());
      FIX::Product Product_39(10);
      noQuoteEntries_2_1_0.set(Product_39);
      Instrument_37.insert(Product_39.getString());
      FIX::ProductComplex ProductComplex_37("STRING_1209377045");
      noQuoteEntries_2_1_0.set(ProductComplex_37);
      Instrument_37.insert(ProductComplex_37.getString());
      FIX::PutOrCall PutOrCall_37(1);
      noQuoteEntries_2_1_0.set(PutOrCall_37);
      Instrument_37.insert(PutOrCall_37.getString());
      FIX::RedemptionDate RedemptionDate_37("LOCALMKTDATE_227189726");
      noQuoteEntries_2_1_0.set(RedemptionDate_37);
      Instrument_37.insert(RedemptionDate_37.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_37("STRING_680810986");
      noQuoteEntries_2_1_0.set(RepoCollateralSecurityType_37);
      Instrument_37.insert(RepoCollateralSecurityType_37.getString());
      FIX::RepurchaseRate RepurchaseRate_37;
      RepurchaseRate_37.setString("44.600000");
      noQuoteEntries_2_1_0.set(RepurchaseRate_37);
      Instrument_37.insert(RepurchaseRate_37.getString());
      FIX::RepurchaseTerm RepurchaseTerm_37(1851548971);
      noQuoteEntries_2_1_0.set(RepurchaseTerm_37);
      Instrument_37.insert(RepurchaseTerm_37.getString());
      FIX::RestructuringType RestructuringType_37("STRING_MM");
      noQuoteEntries_2_1_0.set(RestructuringType_37);
      Instrument_37.insert(RestructuringType_37.getString());
      FIX::SecurityDesc SecurityDesc_37("STRING_905548012");
      noQuoteEntries_2_1_0.set(SecurityDesc_37);
      Instrument_37.insert(SecurityDesc_37.getString());
      FIX::SecurityExchange SecurityExchange_37("EXCHANGE_1278680639");
      noQuoteEntries_2_1_0.set(SecurityExchange_37);
      Instrument_37.insert(SecurityExchange_37.getString());
      FIX::SecurityGroup SecurityGroup_37("STRING_891248418");
      noQuoteEntries_2_1_0.set(SecurityGroup_37);
      Instrument_37.insert(SecurityGroup_37.getString());
      FIX::SecurityID SecurityID_37("STRING_237545297");
      noQuoteEntries_2_1_0.set(SecurityID_37);
      Instrument_37.insert(SecurityID_37.getString());
      FIX::SecurityIDSource SecurityIDSource_37("STRING_9");
      noQuoteEntries_2_1_0.set(SecurityIDSource_37);
      Instrument_37.insert(SecurityIDSource_37.getString());
      FIX::SecurityStatus SecurityStatus_37("STRING_1");
      noQuoteEntries_2_1_0.set(SecurityStatus_37);
      Instrument_37.insert(SecurityStatus_37.getString());
      FIX::SecuritySubType SecuritySubType_38("STRING_2017028996");
      noQuoteEntries_2_1_0.set(SecuritySubType_38);
      Instrument_37.insert(SecuritySubType_38.getString());
      FIX::SecurityType SecurityType_39("STRING_LOFC");
      noQuoteEntries_2_1_0.set(SecurityType_39);
      Instrument_37.insert(SecurityType_39.getString());
      FIX::Seniority Seniority_37("STRING_SB");
      noQuoteEntries_2_1_0.set(Seniority_37);
      Instrument_37.insert(Seniority_37.getString());
      FIX::SettlMethod SettlMethod_37('C');
      noQuoteEntries_2_1_0.set(SettlMethod_37);
      Instrument_37.insert(SettlMethod_37.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_37("STRING_1375817480");
      noQuoteEntries_2_1_0.set(SettleOnOpenFlag_37);
      Instrument_37.insert(SettleOnOpenFlag_37.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_37("STRING_2128211821");
      noQuoteEntries_2_1_0.set(StateOrProvinceOfIssue_37);
      Instrument_37.insert(StateOrProvinceOfIssue_37.getString());
      FIX::StrikeCurrency StrikeCurrency_37("JPY");
      noQuoteEntries_2_1_0.set(StrikeCurrency_37);
      Instrument_37.insert(StrikeCurrency_37.getString());
      FIX::StrikeMultiplier StrikeMultiplier_37;
      StrikeMultiplier_37.setString("10472494");
      noQuoteEntries_2_1_0.set(StrikeMultiplier_37);
      Instrument_37.insert(StrikeMultiplier_37.getString());
      FIX::StrikePrice StrikePrice_37;
      StrikePrice_37.setString("9989368");
      noQuoteEntries_2_1_0.set(StrikePrice_37);
      Instrument_37.insert(StrikePrice_37.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_37(3);
      noQuoteEntries_2_1_0.set(StrikePriceBoundaryMethod_37);
      Instrument_37.insert(StrikePriceBoundaryMethod_37.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_37;
      StrikePriceBoundaryPrecision_37.setString("48.790000");
      noQuoteEntries_2_1_0.set(StrikePriceBoundaryPrecision_37);
      Instrument_37.insert(StrikePriceBoundaryPrecision_37.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_37(2);
      noQuoteEntries_2_1_0.set(StrikePriceDeterminationMethod_37);
      Instrument_37.insert(StrikePriceDeterminationMethod_37.getString());
      FIX::StrikeValue StrikeValue_37;
      StrikeValue_37.setString("16509200");
      noQuoteEntries_2_1_0.set(StrikeValue_37);
      Instrument_37.insert(StrikeValue_37.getString());
      FIX::Symbol Symbol_37("STRING_471728435");
      noQuoteEntries_2_1_0.set(Symbol_37);
      Instrument_37.insert(Symbol_37.getString());
      FIX::SymbolSfx SymbolSfx_37("STRING_WI");
      noQuoteEntries_2_1_0.set(SymbolSfx_37);
      Instrument_37.insert(SymbolSfx_37.getString());
      FIX::TimeUnit TimeUnit_37("STRING_Min");
      noQuoteEntries_2_1_0.set(TimeUnit_37);
      Instrument_37.insert(TimeUnit_37.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_37(4);
      noQuoteEntries_2_1_0.set(UnderlyingPriceDeterminationMethod_37);
      Instrument_37.insert(UnderlyingPriceDeterminationMethod_37.getString());
      FIX::UnitOfMeasure UnitOfMeasure_37("STRING_lbs");
      noQuoteEntries_2_1_0.set(UnitOfMeasure_37);
      Instrument_37.insert(UnitOfMeasure_37.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_37;
      UnitOfMeasureQty_37.setString("19587412");
      noQuoteEntries_2_1_0.set(UnitOfMeasureQty_37);
      Instrument_37.insert(UnitOfMeasureQty_37.getString());
      FIX::ValuationMethod ValuationMethod_37("STRING_FUTDA");
      noQuoteEntries_2_1_0.set(ValuationMethod_37);
      Instrument_37.insert(ValuationMethod_37.getString());
      all_values.push_back(Instrument_37);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_73;
        FIX::ComplexEventCondition ComplexEventCondition_73(2);
        noComplexEvents_2_0_2_0.set(ComplexEventCondition_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventCondition_73.getString());
        FIX::ComplexEventPrice ComplexEventPrice_73;
        ComplexEventPrice_73.setString("8162259");
        noComplexEvents_2_0_2_0.set(ComplexEventPrice_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPrice_73.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_73(1);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryMethod_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryMethod_73.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_73;
        ComplexEventPriceBoundaryPrecision_73.setString("64.710000");
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryPrecision_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryPrecision_73.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_73(3);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceTimeType_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceTimeType_73.getString());
        FIX::ComplexEventType ComplexEventType_73(1);
        noComplexEvents_2_0_2_0.set(ComplexEventType_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventType_73.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_73;
        ComplexOptPayoutAmount_73.setString("8797417");
        noComplexEvents_2_0_2_0.set(ComplexOptPayoutAmount_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexOptPayoutAmount_73.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_73);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_153;
          FIX::ComplexEventEndDate ComplexEventEndDate_153(FIX::UTCTIMESTAMP(13, 30, 29, 21, 7, 2016));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventEndDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventEndDate_153.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_153(FIX::UTCTIMESTAMP(22, 30, 26, 5, 11, 2009));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventStartDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventStartDate_153.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_153);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_309;
            FIX::ComplexEventEndTime ComplexEventEndTime_309(FIX::UTCTIMEONLY(14, 4, 8));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventEndTime_309);
            ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventEndTime_309.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_309(FIX::UTCTIMEONLY(11, 37, 37));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventStartTime_309);
            ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventStartTime_309.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_309);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_310;
            FIX::ComplexEventEndTime ComplexEventEndTime_310(FIX::UTCTIMEONLY(13, 49, 22));
            noComplexEventTimes_2_0_0_0_4_1.set(ComplexEventEndTime_310);
            ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventEndTime_310.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_310(FIX::UTCTIMEONLY(20, 3, 25));
            noComplexEventTimes_2_0_0_0_4_1.set(ComplexEventStartTime_310);
            ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventStartTime_310.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_310);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_1);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_74;
        FIX::ComplexEventCondition ComplexEventCondition_74(1);
        noComplexEvents_2_0_2_1.set(ComplexEventCondition_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventCondition_74.getString());
        FIX::ComplexEventPrice ComplexEventPrice_74;
        ComplexEventPrice_74.setString("16072067");
        noComplexEvents_2_0_2_1.set(ComplexEventPrice_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPrice_74.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_74(3);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryMethod_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryMethod_74.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_74;
        ComplexEventPriceBoundaryPrecision_74.setString("48.920000");
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryPrecision_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryPrecision_74.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_74(1);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceTimeType_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceTimeType_74.getString());
        FIX::ComplexEventType ComplexEventType_74(3);
        noComplexEvents_2_0_2_1.set(ComplexEventType_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventType_74.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_74;
        ComplexOptPayoutAmount_74.setString("1214932");
        noComplexEvents_2_0_2_1.set(ComplexOptPayoutAmount_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexOptPayoutAmount_74.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_74);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_154;
          FIX::ComplexEventEndDate ComplexEventEndDate_154(FIX::UTCTIMESTAMP(5, 23, 53, 15, 7, 2010));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventEndDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventEndDate_154.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_154(FIX::UTCTIMESTAMP(1, 24, 29, 27, 5, 2012));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventStartDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventStartDate_154.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_154);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_311;
            FIX::ComplexEventEndTime ComplexEventEndTime_311(FIX::UTCTIMEONLY(0, 2, 33));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventEndTime_311);
            ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventEndTime_311.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_311(FIX::UTCTIMEONLY(10, 28, 14));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventStartTime_311);
            ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventStartTime_311.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_311);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_155;
          FIX::ComplexEventEndDate ComplexEventEndDate_155(FIX::UTCTIMESTAMP(0, 1, 40, 2, 12, 2003));
          noComplexEventDates_2_0_1_3_1.set(ComplexEventEndDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventEndDate_155.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_155(FIX::UTCTIMESTAMP(23, 36, 33, 4, 8, 2002));
          noComplexEventDates_2_0_1_3_1.set(ComplexEventStartDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventStartDate_155.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_155);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_312;
            FIX::ComplexEventEndTime ComplexEventEndTime_312(FIX::UTCTIMEONLY(9, 25, 4));
            noComplexEventTimes_2_0_1_1_4_0.set(ComplexEventEndTime_312);
            ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventEndTime_312.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_312(FIX::UTCTIMEONLY(17, 3, 1));
            noComplexEventTimes_2_0_1_1_4_0.set(ComplexEventStartTime_312);
            ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventStartTime_312.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_312);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_1.addGroup(noComplexEventTimes_2_0_1_1_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_156;
          FIX::ComplexEventEndDate ComplexEventEndDate_156(FIX::UTCTIMESTAMP(7, 3, 29, 7, 6, 2016));
          noComplexEventDates_2_0_1_3_2.set(ComplexEventEndDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventEndDate_156.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_156(FIX::UTCTIMESTAMP(1, 58, 35, 14, 1, 2002));
          noComplexEventDates_2_0_1_3_2.set(ComplexEventStartDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventStartDate_156.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_156);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_313;
            FIX::ComplexEventEndTime ComplexEventEndTime_313(FIX::UTCTIMEONLY(1, 9, 56));
            noComplexEventTimes_2_0_1_2_4_0.set(ComplexEventEndTime_313);
            ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventEndTime_313.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_313(FIX::UTCTIMEONLY(4, 20, 10));
            noComplexEventTimes_2_0_1_2_4_0.set(ComplexEventStartTime_313);
            ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventStartTime_313.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_313);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_2.addGroup(noComplexEventTimes_2_0_1_2_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_75;
        FIX::ComplexEventCondition ComplexEventCondition_75(2);
        noComplexEvents_2_0_2_2.set(ComplexEventCondition_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventCondition_75.getString());
        FIX::ComplexEventPrice ComplexEventPrice_75;
        ComplexEventPrice_75.setString("15675303");
        noComplexEvents_2_0_2_2.set(ComplexEventPrice_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPrice_75.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_75(3);
        noComplexEvents_2_0_2_2.set(ComplexEventPriceBoundaryMethod_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryMethod_75.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_75;
        ComplexEventPriceBoundaryPrecision_75.setString("68.400000");
        noComplexEvents_2_0_2_2.set(ComplexEventPriceBoundaryPrecision_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryPrecision_75.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_75(1);
        noComplexEvents_2_0_2_2.set(ComplexEventPriceTimeType_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceTimeType_75.getString());
        FIX::ComplexEventType ComplexEventType_75(7);
        noComplexEvents_2_0_2_2.set(ComplexEventType_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventType_75.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_75;
        ComplexOptPayoutAmount_75.setString("19908525");
        noComplexEvents_2_0_2_2.set(ComplexOptPayoutAmount_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexOptPayoutAmount_75.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_75);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_157;
          FIX::ComplexEventEndDate ComplexEventEndDate_157(FIX::UTCTIMESTAMP(6, 26, 29, 9, 12, 2009));
          noComplexEventDates_2_0_2_3_0.set(ComplexEventEndDate_157);
          ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventEndDate_157.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_157(FIX::UTCTIMESTAMP(16, 18, 42, 18, 11, 2008));
          noComplexEventDates_2_0_2_3_0.set(ComplexEventStartDate_157);
          ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventStartDate_157.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_157);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_314;
            FIX::ComplexEventEndTime ComplexEventEndTime_314(FIX::UTCTIMEONLY(13, 32, 34));
            noComplexEventTimes_2_0_2_0_4_0.set(ComplexEventEndTime_314);
            ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventEndTime_314.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_314(FIX::UTCTIMEONLY(12, 54, 4));
            noComplexEventTimes_2_0_2_0_4_0.set(ComplexEventStartTime_314);
            ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventStartTime_314.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_314);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_2_3_0.addGroup(noComplexEventTimes_2_0_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_315;
            FIX::ComplexEventEndTime ComplexEventEndTime_315(FIX::UTCTIMEONLY(4, 31, 4));
            noComplexEventTimes_2_0_2_0_4_1.set(ComplexEventEndTime_315);
            ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventEndTime_315.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_315(FIX::UTCTIMEONLY(11, 39, 21));
            noComplexEventTimes_2_0_2_0_4_1.set(ComplexEventStartTime_315);
            ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventStartTime_315.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_315);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_2_3_0.addGroup(noComplexEventTimes_2_0_2_0_4_1);
          }
          noComplexEvents_2_0_2_2.addGroup(noComplexEventDates_2_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_158;
          FIX::ComplexEventEndDate ComplexEventEndDate_158(FIX::UTCTIMESTAMP(21, 39, 13, 26, 7, 2008));
          noComplexEventDates_2_0_2_3_1.set(ComplexEventEndDate_158);
          ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventEndDate_158.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_158(FIX::UTCTIMESTAMP(22, 42, 51, 1, 10, 2011));
          noComplexEventDates_2_0_2_3_1.set(ComplexEventStartDate_158);
          ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventStartDate_158.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_158);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_316;
            FIX::ComplexEventEndTime ComplexEventEndTime_316(FIX::UTCTIMEONLY(16, 45, 8));
            noComplexEventTimes_2_0_2_1_4_0.set(ComplexEventEndTime_316);
            ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventEndTime_316.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_316(FIX::UTCTIMEONLY(1, 55, 23));
            noComplexEventTimes_2_0_2_1_4_0.set(ComplexEventStartTime_316);
            ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventStartTime_316.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_316);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_2_3_1.addGroup(noComplexEventTimes_2_0_2_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_317;
            FIX::ComplexEventEndTime ComplexEventEndTime_317(FIX::UTCTIMEONLY(11, 47, 53));
            noComplexEventTimes_2_0_2_1_4_1.set(ComplexEventEndTime_317);
            ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventEndTime_317.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_317(FIX::UTCTIMEONLY(2, 32, 26));
            noComplexEventTimes_2_0_2_1_4_1.set(ComplexEventStartTime_317);
            ComplexEventTimes_NoComplexEventTimes_317.insert(ComplexEventStartTime_317.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_317);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_2_3_1.addGroup(noComplexEventTimes_2_0_2_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_318;
            FIX::ComplexEventEndTime ComplexEventEndTime_318(FIX::UTCTIMEONLY(21, 5, 3));
            noComplexEventTimes_2_0_2_1_4_2.set(ComplexEventEndTime_318);
            ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventEndTime_318.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_318(FIX::UTCTIMEONLY(3, 27, 37));
            noComplexEventTimes_2_0_2_1_4_2.set(ComplexEventStartTime_318);
            ComplexEventTimes_NoComplexEventTimes_318.insert(ComplexEventStartTime_318.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_318);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_0_2_3_1.addGroup(noComplexEventTimes_2_0_2_1_4_2);
          }
          noComplexEvents_2_0_2_2.addGroup(noComplexEventDates_2_0_2_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_68;
        FIX::EventDate EventDate_68("LOCALMKTDATE_1269061570");
        noEvents_2_0_2_0.set(EventDate_68);
        EvntGrp_NoEvents_68.insert(EventDate_68.getString());
        FIX::EventPx EventPx_68;
        EventPx_68.setString("14619578");
        noEvents_2_0_2_0.set(EventPx_68);
        EvntGrp_NoEvents_68.insert(EventPx_68.getString());
        FIX::EventText EventText_68("STRING_373707950");
        noEvents_2_0_2_0.set(EventText_68);
        EvntGrp_NoEvents_68.insert(EventText_68.getString());
        FIX::EventTime EventTime_68(FIX::UTCTIMESTAMP(20, 11, 41, 5, 9, 2014));
        noEvents_2_0_2_0.set(EventTime_68);
        EvntGrp_NoEvents_68.insert(EventTime_68.getString());
        FIX::EventType EventType_68(13);
        noEvents_2_0_2_0.set(EventType_68);
        EvntGrp_NoEvents_68.insert(EventType_68.getString());
        all_values.push_back(EvntGrp_NoEvents_68);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_69;
        FIX::EventDate EventDate_69("LOCALMKTDATE_1888013001");
        noEvents_2_0_2_1.set(EventDate_69);
        EvntGrp_NoEvents_69.insert(EventDate_69.getString());
        FIX::EventPx EventPx_69;
        EventPx_69.setString("15893201");
        noEvents_2_0_2_1.set(EventPx_69);
        EvntGrp_NoEvents_69.insert(EventPx_69.getString());
        FIX::EventText EventText_69("STRING_1916516367");
        noEvents_2_0_2_1.set(EventText_69);
        EvntGrp_NoEvents_69.insert(EventText_69.getString());
        FIX::EventTime EventTime_69(FIX::UTCTIMESTAMP(12, 6, 56, 5, 10, 2015));
        noEvents_2_0_2_1.set(EventTime_69);
        EvntGrp_NoEvents_69.insert(EventTime_69.getString());
        FIX::EventType EventType_69(99);
        noEvents_2_0_2_1.set(EventType_69);
        EvntGrp_NoEvents_69.insert(EventType_69.getString());
        all_values.push_back(EvntGrp_NoEvents_69);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_71;
        FIX::InstrumentPartyID InstrumentPartyID_71("STRING_1114592010");
        noInstrumentParties_2_0_2_0.set(InstrumentPartyID_71);
        InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyID_71.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_71('5');
        noInstrumentParties_2_0_2_0.set(InstrumentPartyIDSource_71);
        InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyIDSource_71.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_71(1809846014);
        noInstrumentParties_2_0_2_0.set(InstrumentPartyRole_71);
        InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyRole_71.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_71);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140;
          FIX::InstrumentPartySubID InstrumentPartySubID_140("STRING_552750999");
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubID_140);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubID_140.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_140(1960456421);
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubIDType_140);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubIDType_140.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141;
          FIX::InstrumentPartySubID InstrumentPartySubID_141("STRING_872434880");
          noInstrumentPartySubIDs_2_0_0_3_1.set(InstrumentPartySubID_141);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubID_141.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_141(1406539600);
          noInstrumentPartySubIDs_2_0_0_3_1.set(InstrumentPartySubIDType_141);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubIDType_141.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142;
          FIX::InstrumentPartySubID InstrumentPartySubID_142("STRING_1082034343");
          noInstrumentPartySubIDs_2_0_0_3_2.set(InstrumentPartySubID_142);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubID_142.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_142(186909041);
          noInstrumentPartySubIDs_2_0_0_3_2.set(InstrumentPartySubIDType_142);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubIDType_142.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_72;
        FIX::InstrumentPartyID InstrumentPartyID_72("STRING_1780247551");
        noInstrumentParties_2_0_2_1.set(InstrumentPartyID_72);
        InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyID_72.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_72('2');
        noInstrumentParties_2_0_2_1.set(InstrumentPartyIDSource_72);
        InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyIDSource_72.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_72(1540220965);
        noInstrumentParties_2_0_2_1.set(InstrumentPartyRole_72);
        InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyRole_72.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_72);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
          FIX::InstrumentPartySubID InstrumentPartySubID_143("STRING_1046065884");
          noInstrumentPartySubIDs_2_0_1_3_0.set(InstrumentPartySubID_143);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubID_143.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_143(1961172018);
          noInstrumentPartySubIDs_2_0_1_3_0.set(InstrumentPartySubIDType_143);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubIDType_143.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
          FIX::InstrumentPartySubID InstrumentPartySubID_144("STRING_1163449042");
          noInstrumentPartySubIDs_2_0_1_3_1.set(InstrumentPartySubID_144);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubID_144.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_144(453107286);
          noInstrumentPartySubIDs_2_0_1_3_1.set(InstrumentPartySubIDType_144);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubIDType_144.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_73;
        FIX::InstrumentPartyID InstrumentPartyID_73("STRING_1902609322");
        noInstrumentParties_2_0_2_2.set(InstrumentPartyID_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyID_73.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_73('9');
        noInstrumentParties_2_0_2_2.set(InstrumentPartyIDSource_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyIDSource_73.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_73(2042427471);
        noInstrumentParties_2_0_2_2.set(InstrumentPartyRole_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyRole_73.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_73);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145;
          FIX::InstrumentPartySubID InstrumentPartySubID_145("STRING_984749438");
          noInstrumentPartySubIDs_2_0_2_3_0.set(InstrumentPartySubID_145);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubID_145.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_145(233859763);
          noInstrumentPartySubIDs_2_0_2_3_0.set(InstrumentPartySubIDType_145);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubIDType_145.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_2.addGroup(noInstrumentPartySubIDs_2_0_2_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_65;
        FIX::SecurityAltID SecurityAltID_65("STRING_2142754235");
        noSecurityAltID_2_0_2_0.set(SecurityAltID_65);
        SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltID_65.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_65("STRING_1285601396");
        noSecurityAltID_2_0_2_0.set(SecurityAltIDSource_65);
        SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltIDSource_65.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_65);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_66;
        FIX::SecurityAltID SecurityAltID_66("STRING_86155553");
        noSecurityAltID_2_0_2_1.set(SecurityAltID_66);
        SecAltIDGrp_NoSecurityAltID_66.insert(SecurityAltID_66.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_66("STRING_663386448");
        noSecurityAltID_2_0_2_1.set(SecurityAltIDSource_66);
        SecAltIDGrp_NoSecurityAltID_66.insert(SecurityAltIDSource_66.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_66);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_74;
      FIX::SecurityXML SecurityXML_75("XMLDATA_371975547");
      noQuoteEntries_2_1_0.set(SecurityXML_75);
      FIX::SecurityXMLLen SecurityXMLLen_37(953358964);
      noQuoteEntries_2_1_0.set(SecurityXMLLen_37);
      FIX::SecurityXMLSchema SecurityXMLSchema_37("STRING_1777978458");
      noQuoteEntries_2_1_0.set(SecurityXMLSchema_37);
      SecurityXML_74.insert(SecurityXMLSchema_37.getString());
      all_values.push_back(SecurityXML_74);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_6;
      FIX::BidForwardPoints BidForwardPoints_6;
      BidForwardPoints_6.setString("8940520");
      noQuoteEntries_2_1_1.set(BidForwardPoints_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidForwardPoints_6.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_6;
      BidForwardPoints2_6.setString("6157213");
      noQuoteEntries_2_1_1.set(BidForwardPoints2_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidForwardPoints2_6.getString());
      FIX::BidPx BidPx_6;
      BidPx_6.setString("13309011");
      noQuoteEntries_2_1_1.set(BidPx_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidPx_6.getString());
      FIX::BidSize BidSize_6;
      BidSize_6.setString("14468030");
      noQuoteEntries_2_1_1.set(BidSize_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidSize_6.getString());
      FIX::BidSpotRate BidSpotRate_6;
      BidSpotRate_6.setString("4286941");
      noQuoteEntries_2_1_1.set(BidSpotRate_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidSpotRate_6.getString());
      FIX::BidYield BidYield_6;
      BidYield_6.setString("23.930000");
      noQuoteEntries_2_1_1.set(BidYield_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidYield_6.getString());
      FIX::BookingType BookingType_13(2);
      noQuoteEntries_2_1_1.set(BookingType_13);
      QuotEntryGrp_NoQuoteEntries_6.insert(BookingType_13.getString());
      FIX::Currency Currency_36("USD");
      noQuoteEntries_2_1_1.set(Currency_36);
      QuotEntryGrp_NoQuoteEntries_6.insert(Currency_36.getString());
      FIX::MidPx MidPx_6;
      MidPx_6.setString("3386228");
      noQuoteEntries_2_1_1.set(MidPx_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(MidPx_6.getString());
      FIX::MidYield MidYield_6;
      MidYield_6.setString("4.900000");
      noQuoteEntries_2_1_1.set(MidYield_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(MidYield_6.getString());
      FIX::OfferForwardPoints OfferForwardPoints_6;
      OfferForwardPoints_6.setString("17829823");
      noQuoteEntries_2_1_1.set(OfferForwardPoints_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferForwardPoints_6.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_6;
      OfferForwardPoints2_6.setString("17662690");
      noQuoteEntries_2_1_1.set(OfferForwardPoints2_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferForwardPoints2_6.getString());
      FIX::OfferPx OfferPx_6;
      OfferPx_6.setString("6408927");
      noQuoteEntries_2_1_1.set(OfferPx_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferPx_6.getString());
      FIX::OfferSize OfferSize_6;
      OfferSize_6.setString("15966707");
      noQuoteEntries_2_1_1.set(OfferSize_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferSize_6.getString());
      FIX::OfferSpotRate OfferSpotRate_6;
      OfferSpotRate_6.setString("7822344");
      noQuoteEntries_2_1_1.set(OfferSpotRate_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferSpotRate_6.getString());
      FIX::OfferYield OfferYield_6;
      OfferYield_6.setString("0.120000");
      noQuoteEntries_2_1_1.set(OfferYield_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferYield_6.getString());
      FIX::OrdType OrdType_39('L');
      noQuoteEntries_2_1_1.set(OrdType_39);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrdType_39.getString());
      FIX::OrderCapacity OrderCapacity_14('G');
      noQuoteEntries_2_1_1.set(OrderCapacity_14);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrderCapacity_14.getString());
      FIX::OrderQty2 OrderQty2_7;
      OrderQty2_7.setString("9889438");
      noQuoteEntries_2_1_1.set(OrderQty2_7);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrderQty2_7.getString());
      FIX::OrderRestrictions OrderRestrictions_11("MULTIPLECHARVALUE_4");
      noQuoteEntries_2_1_1.set(OrderRestrictions_11);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrderRestrictions_11.getString());
      FIX::QuoteEntryID QuoteEntryID_9("STRING_523478611");
      noQuoteEntries_2_1_1.set(QuoteEntryID_9);
      QuotEntryGrp_NoQuoteEntries_6.insert(QuoteEntryID_9.getString());
      FIX::SettlDate SettlDate_29("LOCALMKTDATE_1222803598");
      noQuoteEntries_2_1_1.set(SettlDate_29);
      QuotEntryGrp_NoQuoteEntries_6.insert(SettlDate_29.getString());
      FIX::SettlDate2 SettlDate2_7("LOCALMKTDATE_1694853119");
      noQuoteEntries_2_1_1.set(SettlDate2_7);
      QuotEntryGrp_NoQuoteEntries_6.insert(SettlDate2_7.getString());
      FIX::TradingSessionID TradingSessionID_42("STRING_5");
      noQuoteEntries_2_1_1.set(TradingSessionID_42);
      QuotEntryGrp_NoQuoteEntries_6.insert(TradingSessionID_42.getString());
      FIX::TradingSessionSubID TradingSessionSubID_42("STRING_3");
      noQuoteEntries_2_1_1.set(TradingSessionSubID_42);
      QuotEntryGrp_NoQuoteEntries_6.insert(TradingSessionSubID_42.getString());
      FIX::TransactTime TransactTime_32(FIX::UTCTIMESTAMP(22, 13, 49, 9, 5, 2011));
      noQuoteEntries_2_1_1.set(TransactTime_32);
      QuotEntryGrp_NoQuoteEntries_6.insert(TransactTime_32.getString());
      FIX::ValidUntilTime ValidUntilTime_7(FIX::UTCTIMESTAMP(2, 43, 3, 12, 4, 2015));
      noQuoteEntries_2_1_1.set(ValidUntilTime_7);
      QuotEntryGrp_NoQuoteEntries_6.insert(ValidUntilTime_7.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_6);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_71;
        FIX::EncodedLegIssuer EncodedLegIssuer_71("DATA_589371065");
        noLegs_2_1_2_0.set(EncodedLegIssuer_71);
        InstrumentLeg_71.insert(EncodedLegIssuer_71.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_71(2077644196);
        noLegs_2_1_2_0.set(EncodedLegIssuerLen_71);
        InstrumentLeg_71.insert(EncodedLegIssuerLen_71.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_71("DATA_1589535525");
        noLegs_2_1_2_0.set(EncodedLegSecurityDesc_71);
        InstrumentLeg_71.insert(EncodedLegSecurityDesc_71.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_71(1230263791);
        noLegs_2_1_2_0.set(EncodedLegSecurityDescLen_71);
        InstrumentLeg_71.insert(EncodedLegSecurityDescLen_71.getString());
        FIX::LegCFICode LegCFICode_71("STRING_1526831318");
        noLegs_2_1_2_0.set(LegCFICode_71);
        InstrumentLeg_71.insert(LegCFICode_71.getString());
        FIX::LegContractMultiplier LegContractMultiplier_71;
        LegContractMultiplier_71.setString("2242863");
        noLegs_2_1_2_0.set(LegContractMultiplier_71);
        InstrumentLeg_71.insert(LegContractMultiplier_71.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_71(176780155);
        noLegs_2_1_2_0.set(LegContractMultiplierUnit_71);
        InstrumentLeg_71.insert(LegContractMultiplierUnit_71.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_71("MONTHYEAR_731144115");
        noLegs_2_1_2_0.set(LegContractSettlMonth_71);
        InstrumentLeg_71.insert(LegContractSettlMonth_71.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_71("COUNTRY_1910499124");
        noLegs_2_1_2_0.set(LegCountryOfIssue_71);
        InstrumentLeg_71.insert(LegCountryOfIssue_71.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_71("LOCALMKTDATE_1165723990");
        noLegs_2_1_2_0.set(LegCouponPaymentDate_71);
        InstrumentLeg_71.insert(LegCouponPaymentDate_71.getString());
        FIX::LegCouponRate LegCouponRate_71;
        LegCouponRate_71.setString("89.530000");
        noLegs_2_1_2_0.set(LegCouponRate_71);
        InstrumentLeg_71.insert(LegCouponRate_71.getString());
        FIX::LegCreditRating LegCreditRating_71("STRING_286494087");
        noLegs_2_1_2_0.set(LegCreditRating_71);
        InstrumentLeg_71.insert(LegCreditRating_71.getString());
        FIX::LegCurrency LegCurrency_71("USD");
        noLegs_2_1_2_0.set(LegCurrency_71);
        InstrumentLeg_71.insert(LegCurrency_71.getString());
        FIX::LegDatedDate LegDatedDate_71("LOCALMKTDATE_805243286");
        noLegs_2_1_2_0.set(LegDatedDate_71);
        InstrumentLeg_71.insert(LegDatedDate_71.getString());
        FIX::LegExerciseStyle LegExerciseStyle_71(601965286);
        noLegs_2_1_2_0.set(LegExerciseStyle_71);
        InstrumentLeg_71.insert(LegExerciseStyle_71.getString());
        FIX::LegFactor LegFactor_71;
        LegFactor_71.setString("7879934");
        noLegs_2_1_2_0.set(LegFactor_71);
        InstrumentLeg_71.insert(LegFactor_71.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_71(1987378932);
        noLegs_2_1_2_0.set(LegFlowScheduleType_71);
        InstrumentLeg_71.insert(LegFlowScheduleType_71.getString());
        FIX::LegInstrRegistry LegInstrRegistry_71("STRING_1334862179");
        noLegs_2_1_2_0.set(LegInstrRegistry_71);
        InstrumentLeg_71.insert(LegInstrRegistry_71.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_71("LOCALMKTDATE_1374877438");
        noLegs_2_1_2_0.set(LegInterestAccrualDate_71);
        InstrumentLeg_71.insert(LegInterestAccrualDate_71.getString());
        FIX::LegIssueDate LegIssueDate_71("LOCALMKTDATE_652525741");
        noLegs_2_1_2_0.set(LegIssueDate_71);
        InstrumentLeg_71.insert(LegIssueDate_71.getString());
        FIX::LegIssuer LegIssuer_71("STRING_814327447");
        noLegs_2_1_2_0.set(LegIssuer_71);
        InstrumentLeg_71.insert(LegIssuer_71.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_71("STRING_429999109");
        noLegs_2_1_2_0.set(LegLocaleOfIssue_71);
        InstrumentLeg_71.insert(LegLocaleOfIssue_71.getString());
        FIX::LegMaturityDate LegMaturityDate_71("LOCALMKTDATE_648573711");
        noLegs_2_1_2_0.set(LegMaturityDate_71);
        InstrumentLeg_71.insert(LegMaturityDate_71.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_71("MONTHYEAR_1740595737");
        noLegs_2_1_2_0.set(LegMaturityMonthYear_71);
        InstrumentLeg_71.insert(LegMaturityMonthYear_71.getString());
        FIX::LegMaturityTime LegMaturityTime_71("TZTIMEONLY_2061298533");
        noLegs_2_1_2_0.set(LegMaturityTime_71);
        InstrumentLeg_71.insert(LegMaturityTime_71.getString());
        FIX::LegOptAttribute LegOptAttribute_71('7');
        noLegs_2_1_2_0.set(LegOptAttribute_71);
        InstrumentLeg_71.insert(LegOptAttribute_71.getString());
        FIX::LegOptionRatio LegOptionRatio_71;
        LegOptionRatio_71.setString("12252393");
        noLegs_2_1_2_0.set(LegOptionRatio_71);
        InstrumentLeg_71.insert(LegOptionRatio_71.getString());
        FIX::LegPool LegPool_71("STRING_908359108");
        noLegs_2_1_2_0.set(LegPool_71);
        InstrumentLeg_71.insert(LegPool_71.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_71("STRING_995135871");
        noLegs_2_1_2_0.set(LegPriceUnitOfMeasure_71);
        InstrumentLeg_71.insert(LegPriceUnitOfMeasure_71.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_71;
        LegPriceUnitOfMeasureQty_71.setString("10485058");
        noLegs_2_1_2_0.set(LegPriceUnitOfMeasureQty_71);
        InstrumentLeg_71.insert(LegPriceUnitOfMeasureQty_71.getString());
        FIX::LegProduct LegProduct_71(1497730173);
        noLegs_2_1_2_0.set(LegProduct_71);
        InstrumentLeg_71.insert(LegProduct_71.getString());
        FIX::LegPutOrCall LegPutOrCall_71(925296420);
        noLegs_2_1_2_0.set(LegPutOrCall_71);
        InstrumentLeg_71.insert(LegPutOrCall_71.getString());
        FIX::LegRatioQty LegRatioQty_71;
        LegRatioQty_71.setString("4905577");
        noLegs_2_1_2_0.set(LegRatioQty_71);
        InstrumentLeg_71.insert(LegRatioQty_71.getString());
        FIX::LegRedemptionDate LegRedemptionDate_71("LOCALMKTDATE_580510316");
        noLegs_2_1_2_0.set(LegRedemptionDate_71);
        InstrumentLeg_71.insert(LegRedemptionDate_71.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_71("STRING_304644090");
        noLegs_2_1_2_0.set(LegRepoCollateralSecurityType_71);
        InstrumentLeg_71.insert(LegRepoCollateralSecurityType_71.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_71;
        LegRepurchaseRate_71.setString("40.280000");
        noLegs_2_1_2_0.set(LegRepurchaseRate_71);
        InstrumentLeg_71.insert(LegRepurchaseRate_71.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_71(757290471);
        noLegs_2_1_2_0.set(LegRepurchaseTerm_71);
        InstrumentLeg_71.insert(LegRepurchaseTerm_71.getString());
        FIX::LegSecurityDesc LegSecurityDesc_71("STRING_1035788205");
        noLegs_2_1_2_0.set(LegSecurityDesc_71);
        InstrumentLeg_71.insert(LegSecurityDesc_71.getString());
        FIX::LegSecurityExchange LegSecurityExchange_71("EXCHANGE_477859504");
        noLegs_2_1_2_0.set(LegSecurityExchange_71);
        InstrumentLeg_71.insert(LegSecurityExchange_71.getString());
        FIX::LegSecurityID LegSecurityID_71("STRING_1923014461");
        noLegs_2_1_2_0.set(LegSecurityID_71);
        InstrumentLeg_71.insert(LegSecurityID_71.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_71("STRING_495403511");
        noLegs_2_1_2_0.set(LegSecurityIDSource_71);
        InstrumentLeg_71.insert(LegSecurityIDSource_71.getString());
        FIX::LegSecuritySubType LegSecuritySubType_71("STRING_764353591");
        noLegs_2_1_2_0.set(LegSecuritySubType_71);
        InstrumentLeg_71.insert(LegSecuritySubType_71.getString());
        FIX::LegSecurityType LegSecurityType_71("STRING_16574753");
        noLegs_2_1_2_0.set(LegSecurityType_71);
        InstrumentLeg_71.insert(LegSecurityType_71.getString());
        FIX::LegSide LegSide_71('1');
        noLegs_2_1_2_0.set(LegSide_71);
        InstrumentLeg_71.insert(LegSide_71.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_71("STRING_1569596877");
        noLegs_2_1_2_0.set(LegStateOrProvinceOfIssue_71);
        InstrumentLeg_71.insert(LegStateOrProvinceOfIssue_71.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_71("USD");
        noLegs_2_1_2_0.set(LegStrikeCurrency_71);
        InstrumentLeg_71.insert(LegStrikeCurrency_71.getString());
        FIX::LegStrikePrice LegStrikePrice_71;
        LegStrikePrice_71.setString("14094921");
        noLegs_2_1_2_0.set(LegStrikePrice_71);
        InstrumentLeg_71.insert(LegStrikePrice_71.getString());
        FIX::LegSymbol LegSymbol_71("STRING_1953402218");
        noLegs_2_1_2_0.set(LegSymbol_71);
        InstrumentLeg_71.insert(LegSymbol_71.getString());
        FIX::LegSymbolSfx LegSymbolSfx_71("STRING_1665259174");
        noLegs_2_1_2_0.set(LegSymbolSfx_71);
        InstrumentLeg_71.insert(LegSymbolSfx_71.getString());
        FIX::LegTimeUnit LegTimeUnit_71("STRING_2062017903");
        noLegs_2_1_2_0.set(LegTimeUnit_71);
        InstrumentLeg_71.insert(LegTimeUnit_71.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_71("STRING_620246017");
        noLegs_2_1_2_0.set(LegUnitOfMeasure_71);
        InstrumentLeg_71.insert(LegUnitOfMeasure_71.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_71;
        LegUnitOfMeasureQty_71.setString("20952582");
        noLegs_2_1_2_0.set(LegUnitOfMeasureQty_71);
        InstrumentLeg_71.insert(LegUnitOfMeasureQty_71.getString());
        all_values.push_back(InstrumentLeg_71);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_140;
          FIX::LegSecurityAltID LegSecurityAltID_140("STRING_213358106");
          noLegSecurityAltID_2_1_0_3_0.set(LegSecurityAltID_140);
          LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltID_140.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_140("STRING_2009073169");
          noLegSecurityAltID_2_1_0_3_0.set(LegSecurityAltIDSource_140);
          LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltIDSource_140.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_140);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_1_2_0.addGroup(noLegSecurityAltID_2_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_141;
          FIX::LegSecurityAltID LegSecurityAltID_141("STRING_1263582041");
          noLegSecurityAltID_2_1_0_3_1.set(LegSecurityAltID_141);
          LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltID_141.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_141("STRING_1438597459");
          noLegSecurityAltID_2_1_0_3_1.set(LegSecurityAltIDSource_141);
          LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltIDSource_141.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_141);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_1_2_0.addGroup(noLegSecurityAltID_2_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_142;
          FIX::LegSecurityAltID LegSecurityAltID_142("STRING_769948629");
          noLegSecurityAltID_2_1_0_3_2.set(LegSecurityAltID_142);
          LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltID_142.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_142("STRING_111234265");
          noLegSecurityAltID_2_1_0_3_2.set(LegSecurityAltIDSource_142);
          LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltIDSource_142.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_142);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_1_2_0.addGroup(noLegSecurityAltID_2_1_0_3_2);
        }
        noQuoteEntries_2_1_1.addGroup(noLegs_2_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_38;
      FIX::AttachmentPoint AttachmentPoint_38;
      AttachmentPoint_38.setString("96.590000");
      noQuoteEntries_2_1_1.set(AttachmentPoint_38);
      Instrument_38.insert(AttachmentPoint_38.getString());
      FIX::CFICode CFICode_38("STRING_120195154");
      noQuoteEntries_2_1_1.set(CFICode_38);
      Instrument_38.insert(CFICode_38.getString());
      FIX::CPProgram CPProgram_38(2);
      noQuoteEntries_2_1_1.set(CPProgram_38);
      Instrument_38.insert(CPProgram_38.getString());
      FIX::CPRegType CPRegType_38("STRING_830177384");
      noQuoteEntries_2_1_1.set(CPRegType_38);
      Instrument_38.insert(CPRegType_38.getString());
      FIX::CapPrice CapPrice_38;
      CapPrice_38.setString("7007054");
      noQuoteEntries_2_1_1.set(CapPrice_38);
      Instrument_38.insert(CapPrice_38.getString());
      FIX::ContractMultiplier ContractMultiplier_38;
      ContractMultiplier_38.setString("13411747");
      noQuoteEntries_2_1_1.set(ContractMultiplier_38);
      Instrument_38.insert(ContractMultiplier_38.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_38(1);
      noQuoteEntries_2_1_1.set(ContractMultiplierUnit_38);
      Instrument_38.insert(ContractMultiplierUnit_38.getString());
      FIX::ContractSettlMonth ContractSettlMonth_38("MONTHYEAR_1457995941");
      noQuoteEntries_2_1_1.set(ContractSettlMonth_38);
      Instrument_38.insert(ContractSettlMonth_38.getString());
      FIX::CountryOfIssue CountryOfIssue_38("COUNTRY_229479333");
      noQuoteEntries_2_1_1.set(CountryOfIssue_38);
      Instrument_38.insert(CountryOfIssue_38.getString());
      FIX::CouponPaymentDate CouponPaymentDate_38("LOCALMKTDATE_2022880916");
      noQuoteEntries_2_1_1.set(CouponPaymentDate_38);
      Instrument_38.insert(CouponPaymentDate_38.getString());
      FIX::CouponRate CouponRate_38;
      CouponRate_38.setString("67.540000");
      noQuoteEntries_2_1_1.set(CouponRate_38);
      Instrument_38.insert(CouponRate_38.getString());
      FIX::CreditRating CreditRating_38("STRING_724882844");
      noQuoteEntries_2_1_1.set(CreditRating_38);
      Instrument_38.insert(CreditRating_38.getString());
      FIX::DatedDate DatedDate_38("LOCALMKTDATE_639750859");
      noQuoteEntries_2_1_1.set(DatedDate_38);
      Instrument_38.insert(DatedDate_38.getString());
      FIX::DetachmentPoint DetachmentPoint_38;
      DetachmentPoint_38.setString("15.070000");
      noQuoteEntries_2_1_1.set(DetachmentPoint_38);
      Instrument_38.insert(DetachmentPoint_38.getString());
      FIX::EncodedIssuer EncodedIssuer_38("DATA_227271131");
      noQuoteEntries_2_1_1.set(EncodedIssuer_38);
      Instrument_38.insert(EncodedIssuer_38.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_38(61864089);
      noQuoteEntries_2_1_1.set(EncodedIssuerLen_38);
      Instrument_38.insert(EncodedIssuerLen_38.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_38("DATA_1868641546");
      noQuoteEntries_2_1_1.set(EncodedSecurityDesc_38);
      Instrument_38.insert(EncodedSecurityDesc_38.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_38(517652868);
      noQuoteEntries_2_1_1.set(EncodedSecurityDescLen_38);
      Instrument_38.insert(EncodedSecurityDescLen_38.getString());
      FIX::ExerciseStyle ExerciseStyle_38(2);
      noQuoteEntries_2_1_1.set(ExerciseStyle_38);
      Instrument_38.insert(ExerciseStyle_38.getString());
      FIX::Factor Factor_38;
      Factor_38.setString("16745601");
      noQuoteEntries_2_1_1.set(Factor_38);
      Instrument_38.insert(Factor_38.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_38(true);
      noQuoteEntries_2_1_1.set(FlexProductEligibilityIndicator_38);
      Instrument_38.insert(FlexProductEligibilityIndicator_38.getString());
      FIX::FlexibleIndicator FlexibleIndicator_38(true);
      noQuoteEntries_2_1_1.set(FlexibleIndicator_38);
      Instrument_38.insert(FlexibleIndicator_38.getString());
      FIX::FloorPrice FloorPrice_38;
      FloorPrice_38.setString("1473224");
      noQuoteEntries_2_1_1.set(FloorPrice_38);
      Instrument_38.insert(FloorPrice_38.getString());
      FIX::FlowScheduleType FlowScheduleType_38(3);
      noQuoteEntries_2_1_1.set(FlowScheduleType_38);
      Instrument_38.insert(FlowScheduleType_38.getString());
      FIX::InstrRegistry InstrRegistry_38("STRING_1948998473");
      noQuoteEntries_2_1_1.set(InstrRegistry_38);
      Instrument_38.insert(InstrRegistry_38.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_38('3');
      noQuoteEntries_2_1_1.set(InstrmtAssignmentMethod_38);
      Instrument_38.insert(InstrmtAssignmentMethod_38.getString());
      FIX::InterestAccrualDate InterestAccrualDate_38("LOCALMKTDATE_1992276199");
      noQuoteEntries_2_1_1.set(InterestAccrualDate_38);
      Instrument_38.insert(InterestAccrualDate_38.getString());
      FIX::IssueDate IssueDate_38("LOCALMKTDATE_1065096867");
      noQuoteEntries_2_1_1.set(IssueDate_38);
      Instrument_38.insert(IssueDate_38.getString());
      FIX::Issuer Issuer_38("STRING_1799278050");
      noQuoteEntries_2_1_1.set(Issuer_38);
      Instrument_38.insert(Issuer_38.getString());
      FIX::ListMethod ListMethod_38(0);
      noQuoteEntries_2_1_1.set(ListMethod_38);
      Instrument_38.insert(ListMethod_38.getString());
      FIX::LocaleOfIssue LocaleOfIssue_38("STRING_1176331132");
      noQuoteEntries_2_1_1.set(LocaleOfIssue_38);
      Instrument_38.insert(LocaleOfIssue_38.getString());
      FIX::MaturityDate MaturityDate_38("LOCALMKTDATE_2138897709");
      noQuoteEntries_2_1_1.set(MaturityDate_38);
      Instrument_38.insert(MaturityDate_38.getString());
      FIX::MaturityMonthYear MaturityMonthYear_38("MONTHYEAR_734936334");
      noQuoteEntries_2_1_1.set(MaturityMonthYear_38);
      Instrument_38.insert(MaturityMonthYear_38.getString());
      FIX::MaturityTime MaturityTime_38("TZTIMEONLY_65378169");
      noQuoteEntries_2_1_1.set(MaturityTime_38);
      Instrument_38.insert(MaturityTime_38.getString());
      FIX::MinPriceIncrement MinPriceIncrement_38;
      MinPriceIncrement_38.setString("8215914");
      noQuoteEntries_2_1_1.set(MinPriceIncrement_38);
      Instrument_38.insert(MinPriceIncrement_38.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_38;
      MinPriceIncrementAmount_38.setString("14356418");
      noQuoteEntries_2_1_1.set(MinPriceIncrementAmount_38);
      Instrument_38.insert(MinPriceIncrementAmount_38.getString());
      FIX::NTPositionLimit NTPositionLimit_38(1406552944);
      noQuoteEntries_2_1_1.set(NTPositionLimit_38);
      Instrument_38.insert(NTPositionLimit_38.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_38;
      NotionalPercentageOutstanding_38.setString("92.090000");
      noQuoteEntries_2_1_1.set(NotionalPercentageOutstanding_38);
      Instrument_38.insert(NotionalPercentageOutstanding_38.getString());
      FIX::OptAttribute OptAttribute_38('7');
      noQuoteEntries_2_1_1.set(OptAttribute_38);
      Instrument_38.insert(OptAttribute_38.getString());
      FIX::OptPayoutAmount OptPayoutAmount_38;
      OptPayoutAmount_38.setString("16360322");
      noQuoteEntries_2_1_1.set(OptPayoutAmount_38);
      Instrument_38.insert(OptPayoutAmount_38.getString());
      FIX::OptPayoutType OptPayoutType_38(3);
      noQuoteEntries_2_1_1.set(OptPayoutType_38);
      Instrument_38.insert(OptPayoutType_38.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_38;
      OriginalNotionalPercentageOutstanding_38.setString("8.510000");
      noQuoteEntries_2_1_1.set(OriginalNotionalPercentageOutstanding_38);
      Instrument_38.insert(OriginalNotionalPercentageOutstanding_38.getString());
      FIX::Pool Pool_38("STRING_213431473");
      noQuoteEntries_2_1_1.set(Pool_38);
      Instrument_38.insert(Pool_38.getString());
      FIX::PositionLimit PositionLimit_38(734277337);
      noQuoteEntries_2_1_1.set(PositionLimit_38);
      Instrument_38.insert(PositionLimit_38.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_38("STRING_INT");
      noQuoteEntries_2_1_1.set(PriceQuoteMethod_38);
      Instrument_38.insert(PriceQuoteMethod_38.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_38("STRING_440702605");
      noQuoteEntries_2_1_1.set(PriceUnitOfMeasure_38);
      Instrument_38.insert(PriceUnitOfMeasure_38.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_38;
      PriceUnitOfMeasureQty_38.setString("7961414");
      noQuoteEntries_2_1_1.set(PriceUnitOfMeasureQty_38);
      Instrument_38.insert(PriceUnitOfMeasureQty_38.getString());
      FIX::Product Product_40(7);
      noQuoteEntries_2_1_1.set(Product_40);
      Instrument_38.insert(Product_40.getString());
      FIX::ProductComplex ProductComplex_38("STRING_958355473");
      noQuoteEntries_2_1_1.set(ProductComplex_38);
      Instrument_38.insert(ProductComplex_38.getString());
      FIX::PutOrCall PutOrCall_38(1);
      noQuoteEntries_2_1_1.set(PutOrCall_38);
      Instrument_38.insert(PutOrCall_38.getString());
      FIX::RedemptionDate RedemptionDate_38("LOCALMKTDATE_330533076");
      noQuoteEntries_2_1_1.set(RedemptionDate_38);
      Instrument_38.insert(RedemptionDate_38.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_38("STRING_993783867");
      noQuoteEntries_2_1_1.set(RepoCollateralSecurityType_38);
      Instrument_38.insert(RepoCollateralSecurityType_38.getString());
      FIX::RepurchaseRate RepurchaseRate_38;
      RepurchaseRate_38.setString("45.350000");
      noQuoteEntries_2_1_1.set(RepurchaseRate_38);
      Instrument_38.insert(RepurchaseRate_38.getString());
      FIX::RepurchaseTerm RepurchaseTerm_38(477855561);
      noQuoteEntries_2_1_1.set(RepurchaseTerm_38);
      Instrument_38.insert(RepurchaseTerm_38.getString());
      FIX::RestructuringType RestructuringType_38("STRING_MM");
      noQuoteEntries_2_1_1.set(RestructuringType_38);
      Instrument_38.insert(RestructuringType_38.getString());
      FIX::SecurityDesc SecurityDesc_38("STRING_1307419361");
      noQuoteEntries_2_1_1.set(SecurityDesc_38);
      Instrument_38.insert(SecurityDesc_38.getString());
      FIX::SecurityExchange SecurityExchange_38("EXCHANGE_838536152");
      noQuoteEntries_2_1_1.set(SecurityExchange_38);
      Instrument_38.insert(SecurityExchange_38.getString());
      FIX::SecurityGroup SecurityGroup_38("STRING_821779449");
      noQuoteEntries_2_1_1.set(SecurityGroup_38);
      Instrument_38.insert(SecurityGroup_38.getString());
      FIX::SecurityID SecurityID_38("STRING_225032580");
      noQuoteEntries_2_1_1.set(SecurityID_38);
      Instrument_38.insert(SecurityID_38.getString());
      FIX::SecurityIDSource SecurityIDSource_38("STRING_C");
      noQuoteEntries_2_1_1.set(SecurityIDSource_38);
      Instrument_38.insert(SecurityIDSource_38.getString());
      FIX::SecurityStatus SecurityStatus_38("STRING_1");
      noQuoteEntries_2_1_1.set(SecurityStatus_38);
      Instrument_38.insert(SecurityStatus_38.getString());
      FIX::SecuritySubType SecuritySubType_39("STRING_1401363712");
      noQuoteEntries_2_1_1.set(SecuritySubType_39);
      Instrument_38.insert(SecuritySubType_39.getString());
      FIX::SecurityType SecurityType_40("STRING_BA");
      noQuoteEntries_2_1_1.set(SecurityType_40);
      Instrument_38.insert(SecurityType_40.getString());
      FIX::Seniority Seniority_38("STRING_SR");
      noQuoteEntries_2_1_1.set(Seniority_38);
      Instrument_38.insert(Seniority_38.getString());
      FIX::SettlMethod SettlMethod_38('P');
      noQuoteEntries_2_1_1.set(SettlMethod_38);
      Instrument_38.insert(SettlMethod_38.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_38("STRING_1303336062");
      noQuoteEntries_2_1_1.set(SettleOnOpenFlag_38);
      Instrument_38.insert(SettleOnOpenFlag_38.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_38("STRING_1459615121");
      noQuoteEntries_2_1_1.set(StateOrProvinceOfIssue_38);
      Instrument_38.insert(StateOrProvinceOfIssue_38.getString());
      FIX::StrikeCurrency StrikeCurrency_38("CAN");
      noQuoteEntries_2_1_1.set(StrikeCurrency_38);
      Instrument_38.insert(StrikeCurrency_38.getString());
      FIX::StrikeMultiplier StrikeMultiplier_38;
      StrikeMultiplier_38.setString("582855");
      noQuoteEntries_2_1_1.set(StrikeMultiplier_38);
      Instrument_38.insert(StrikeMultiplier_38.getString());
      FIX::StrikePrice StrikePrice_38;
      StrikePrice_38.setString("2143598");
      noQuoteEntries_2_1_1.set(StrikePrice_38);
      Instrument_38.insert(StrikePrice_38.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_38(5);
      noQuoteEntries_2_1_1.set(StrikePriceBoundaryMethod_38);
      Instrument_38.insert(StrikePriceBoundaryMethod_38.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_38;
      StrikePriceBoundaryPrecision_38.setString("64.220000");
      noQuoteEntries_2_1_1.set(StrikePriceBoundaryPrecision_38);
      Instrument_38.insert(StrikePriceBoundaryPrecision_38.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_38(1);
      noQuoteEntries_2_1_1.set(StrikePriceDeterminationMethod_38);
      Instrument_38.insert(StrikePriceDeterminationMethod_38.getString());
      FIX::StrikeValue StrikeValue_38;
      StrikeValue_38.setString("2037854");
      noQuoteEntries_2_1_1.set(StrikeValue_38);
      Instrument_38.insert(StrikeValue_38.getString());
      FIX::Symbol Symbol_38("STRING_972781484");
      noQuoteEntries_2_1_1.set(Symbol_38);
      Instrument_38.insert(Symbol_38.getString());
      FIX::SymbolSfx SymbolSfx_38("STRING_WI");
      noQuoteEntries_2_1_1.set(SymbolSfx_38);
      Instrument_38.insert(SymbolSfx_38.getString());
      FIX::TimeUnit TimeUnit_38("STRING_Yr");
      noQuoteEntries_2_1_1.set(TimeUnit_38);
      Instrument_38.insert(TimeUnit_38.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_38(2);
      noQuoteEntries_2_1_1.set(UnderlyingPriceDeterminationMethod_38);
      Instrument_38.insert(UnderlyingPriceDeterminationMethod_38.getString());
      FIX::UnitOfMeasure UnitOfMeasure_38("STRING_t");
      noQuoteEntries_2_1_1.set(UnitOfMeasure_38);
      Instrument_38.insert(UnitOfMeasure_38.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_38;
      UnitOfMeasureQty_38.setString("11199408");
      noQuoteEntries_2_1_1.set(UnitOfMeasureQty_38);
      Instrument_38.insert(UnitOfMeasureQty_38.getString());
      FIX::ValuationMethod ValuationMethod_38("STRING_CDSD");
      noQuoteEntries_2_1_1.set(ValuationMethod_38);
      Instrument_38.insert(ValuationMethod_38.getString());
      all_values.push_back(Instrument_38);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_76;
        FIX::ComplexEventCondition ComplexEventCondition_76(1);
        noComplexEvents_2_1_2_0.set(ComplexEventCondition_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventCondition_76.getString());
        FIX::ComplexEventPrice ComplexEventPrice_76;
        ComplexEventPrice_76.setString("4371430");
        noComplexEvents_2_1_2_0.set(ComplexEventPrice_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPrice_76.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_76(2);
        noComplexEvents_2_1_2_0.set(ComplexEventPriceBoundaryMethod_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryMethod_76.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
        ComplexEventPriceBoundaryPrecision_76.setString("11.410000");
        noComplexEvents_2_1_2_0.set(ComplexEventPriceBoundaryPrecision_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryPrecision_76.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_76(3);
        noComplexEvents_2_1_2_0.set(ComplexEventPriceTimeType_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceTimeType_76.getString());
        FIX::ComplexEventType ComplexEventType_76(8);
        noComplexEvents_2_1_2_0.set(ComplexEventType_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventType_76.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
        ComplexOptPayoutAmount_76.setString("20108137");
        noComplexEvents_2_1_2_0.set(ComplexOptPayoutAmount_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexOptPayoutAmount_76.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_76);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_159;
          FIX::ComplexEventEndDate ComplexEventEndDate_159(FIX::UTCTIMESTAMP(9, 19, 24, 6, 2, 2015));
          noComplexEventDates_2_1_0_3_0.set(ComplexEventEndDate_159);
          ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventEndDate_159.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_159(FIX::UTCTIMESTAMP(4, 7, 3, 25, 2, 2007));
          noComplexEventDates_2_1_0_3_0.set(ComplexEventStartDate_159);
          ComplexEventDates_NoComplexEventDates_159.insert(ComplexEventStartDate_159.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_159);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_319;
            FIX::ComplexEventEndTime ComplexEventEndTime_319(FIX::UTCTIMEONLY(17, 7, 51));
            noComplexEventTimes_2_1_0_0_4_0.set(ComplexEventEndTime_319);
            ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventEndTime_319.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_319(FIX::UTCTIMEONLY(20, 32, 29));
            noComplexEventTimes_2_1_0_0_4_0.set(ComplexEventStartTime_319);
            ComplexEventTimes_NoComplexEventTimes_319.insert(ComplexEventStartTime_319.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_319);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_0_3_0.addGroup(noComplexEventTimes_2_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_320;
            FIX::ComplexEventEndTime ComplexEventEndTime_320(FIX::UTCTIMEONLY(23, 57, 46));
            noComplexEventTimes_2_1_0_0_4_1.set(ComplexEventEndTime_320);
            ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventEndTime_320.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_320(FIX::UTCTIMEONLY(11, 40, 25));
            noComplexEventTimes_2_1_0_0_4_1.set(ComplexEventStartTime_320);
            ComplexEventTimes_NoComplexEventTimes_320.insert(ComplexEventStartTime_320.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_320);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_0_3_0.addGroup(noComplexEventTimes_2_1_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_321;
            FIX::ComplexEventEndTime ComplexEventEndTime_321(FIX::UTCTIMEONLY(1, 44, 50));
            noComplexEventTimes_2_1_0_0_4_2.set(ComplexEventEndTime_321);
            ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventEndTime_321.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_321(FIX::UTCTIMEONLY(13, 47, 32));
            noComplexEventTimes_2_1_0_0_4_2.set(ComplexEventStartTime_321);
            ComplexEventTimes_NoComplexEventTimes_321.insert(ComplexEventStartTime_321.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_321);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_0_3_0.addGroup(noComplexEventTimes_2_1_0_0_4_2);
          }
          noComplexEvents_2_1_2_0.addGroup(noComplexEventDates_2_1_0_3_0);
        }
        noQuoteEntries_2_1_1.addGroup(noComplexEvents_2_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_77;
        FIX::ComplexEventCondition ComplexEventCondition_77(1);
        noComplexEvents_2_1_2_1.set(ComplexEventCondition_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventCondition_77.getString());
        FIX::ComplexEventPrice ComplexEventPrice_77;
        ComplexEventPrice_77.setString("2083540");
        noComplexEvents_2_1_2_1.set(ComplexEventPrice_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPrice_77.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_77(3);
        noComplexEvents_2_1_2_1.set(ComplexEventPriceBoundaryMethod_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryMethod_77.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
        ComplexEventPriceBoundaryPrecision_77.setString("32.270000");
        noComplexEvents_2_1_2_1.set(ComplexEventPriceBoundaryPrecision_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryPrecision_77.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_77(1);
        noComplexEvents_2_1_2_1.set(ComplexEventPriceTimeType_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceTimeType_77.getString());
        FIX::ComplexEventType ComplexEventType_77(9);
        noComplexEvents_2_1_2_1.set(ComplexEventType_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventType_77.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
        ComplexOptPayoutAmount_77.setString("16254752");
        noComplexEvents_2_1_2_1.set(ComplexOptPayoutAmount_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexOptPayoutAmount_77.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_77);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_160;
          FIX::ComplexEventEndDate ComplexEventEndDate_160(FIX::UTCTIMESTAMP(18, 9, 35, 27, 11, 2014));
          noComplexEventDates_2_1_1_3_0.set(ComplexEventEndDate_160);
          ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventEndDate_160.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_160(FIX::UTCTIMESTAMP(9, 54, 34, 16, 6, 2008));
          noComplexEventDates_2_1_1_3_0.set(ComplexEventStartDate_160);
          ComplexEventDates_NoComplexEventDates_160.insert(ComplexEventStartDate_160.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_160);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_322;
            FIX::ComplexEventEndTime ComplexEventEndTime_322(FIX::UTCTIMEONLY(8, 6, 46));
            noComplexEventTimes_2_1_1_0_4_0.set(ComplexEventEndTime_322);
            ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventEndTime_322.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_322(FIX::UTCTIMEONLY(20, 33, 0));
            noComplexEventTimes_2_1_1_0_4_0.set(ComplexEventStartTime_322);
            ComplexEventTimes_NoComplexEventTimes_322.insert(ComplexEventStartTime_322.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_322);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_0.addGroup(noComplexEventTimes_2_1_1_0_4_0);
          }
          noComplexEvents_2_1_2_1.addGroup(noComplexEventDates_2_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_161;
          FIX::ComplexEventEndDate ComplexEventEndDate_161(FIX::UTCTIMESTAMP(8, 19, 25, 17, 10, 2006));
          noComplexEventDates_2_1_1_3_1.set(ComplexEventEndDate_161);
          ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventEndDate_161.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_161(FIX::UTCTIMESTAMP(21, 19, 29, 4, 3, 2015));
          noComplexEventDates_2_1_1_3_1.set(ComplexEventStartDate_161);
          ComplexEventDates_NoComplexEventDates_161.insert(ComplexEventStartDate_161.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_161);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
            FIX::ComplexEventEndTime ComplexEventEndTime_323(FIX::UTCTIMEONLY(16, 14, 36));
            noComplexEventTimes_2_1_1_1_4_0.set(ComplexEventEndTime_323);
            ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventEndTime_323.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_323(FIX::UTCTIMEONLY(11, 43, 31));
            noComplexEventTimes_2_1_1_1_4_0.set(ComplexEventStartTime_323);
            ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventStartTime_323.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_1.addGroup(noComplexEventTimes_2_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
            FIX::ComplexEventEndTime ComplexEventEndTime_324(FIX::UTCTIMEONLY(3, 37, 17));
            noComplexEventTimes_2_1_1_1_4_1.set(ComplexEventEndTime_324);
            ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventEndTime_324.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_324(FIX::UTCTIMEONLY(13, 42, 35));
            noComplexEventTimes_2_1_1_1_4_1.set(ComplexEventStartTime_324);
            ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventStartTime_324.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_1.addGroup(noComplexEventTimes_2_1_1_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
            FIX::ComplexEventEndTime ComplexEventEndTime_325(FIX::UTCTIMEONLY(7, 54, 57));
            noComplexEventTimes_2_1_1_1_4_2.set(ComplexEventEndTime_325);
            ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventEndTime_325.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_325(FIX::UTCTIMEONLY(7, 45, 15));
            noComplexEventTimes_2_1_1_1_4_2.set(ComplexEventStartTime_325);
            ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventStartTime_325.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_1.addGroup(noComplexEventTimes_2_1_1_1_4_2);
          }
          noComplexEvents_2_1_2_1.addGroup(noComplexEventDates_2_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_162;
          FIX::ComplexEventEndDate ComplexEventEndDate_162(FIX::UTCTIMESTAMP(8, 44, 28, 26, 4, 2013));
          noComplexEventDates_2_1_1_3_2.set(ComplexEventEndDate_162);
          ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventEndDate_162.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_162(FIX::UTCTIMESTAMP(8, 55, 41, 1, 12, 2000));
          noComplexEventDates_2_1_1_3_2.set(ComplexEventStartDate_162);
          ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventStartDate_162.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_162);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
            FIX::ComplexEventEndTime ComplexEventEndTime_326(FIX::UTCTIMEONLY(15, 45, 3));
            noComplexEventTimes_2_1_1_2_4_0.set(ComplexEventEndTime_326);
            ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventEndTime_326.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_326(FIX::UTCTIMEONLY(15, 37, 49));
            noComplexEventTimes_2_1_1_2_4_0.set(ComplexEventStartTime_326);
            ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventStartTime_326.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_2.addGroup(noComplexEventTimes_2_1_1_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
            FIX::ComplexEventEndTime ComplexEventEndTime_327(FIX::UTCTIMEONLY(20, 35, 19));
            noComplexEventTimes_2_1_1_2_4_1.set(ComplexEventEndTime_327);
            ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventEndTime_327.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_327(FIX::UTCTIMEONLY(10, 57, 36));
            noComplexEventTimes_2_1_1_2_4_1.set(ComplexEventStartTime_327);
            ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventStartTime_327.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_2.addGroup(noComplexEventTimes_2_1_1_2_4_1);
          }
          noComplexEvents_2_1_2_1.addGroup(noComplexEventDates_2_1_1_3_2);
        }
        noQuoteEntries_2_1_1.addGroup(noComplexEvents_2_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_78;
        FIX::ComplexEventCondition ComplexEventCondition_78(2);
        noComplexEvents_2_1_2_2.set(ComplexEventCondition_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventCondition_78.getString());
        FIX::ComplexEventPrice ComplexEventPrice_78;
        ComplexEventPrice_78.setString("14925890");
        noComplexEvents_2_1_2_2.set(ComplexEventPrice_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPrice_78.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_78(3);
        noComplexEvents_2_1_2_2.set(ComplexEventPriceBoundaryMethod_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryMethod_78.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
        ComplexEventPriceBoundaryPrecision_78.setString("36.790000");
        noComplexEvents_2_1_2_2.set(ComplexEventPriceBoundaryPrecision_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryPrecision_78.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_78(3);
        noComplexEvents_2_1_2_2.set(ComplexEventPriceTimeType_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceTimeType_78.getString());
        FIX::ComplexEventType ComplexEventType_78(2);
        noComplexEvents_2_1_2_2.set(ComplexEventType_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventType_78.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
        ComplexOptPayoutAmount_78.setString("14885486");
        noComplexEvents_2_1_2_2.set(ComplexOptPayoutAmount_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexOptPayoutAmount_78.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_78);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_163;
          FIX::ComplexEventEndDate ComplexEventEndDate_163(FIX::UTCTIMESTAMP(4, 49, 21, 11, 6, 2005));
          noComplexEventDates_2_1_2_3_0.set(ComplexEventEndDate_163);
          ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventEndDate_163.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_163(FIX::UTCTIMESTAMP(8, 14, 40, 10, 6, 2003));
          noComplexEventDates_2_1_2_3_0.set(ComplexEventStartDate_163);
          ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventStartDate_163.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_163);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
            FIX::ComplexEventEndTime ComplexEventEndTime_328(FIX::UTCTIMEONLY(6, 6, 39));
            noComplexEventTimes_2_1_2_0_4_0.set(ComplexEventEndTime_328);
            ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventEndTime_328.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_328(FIX::UTCTIMEONLY(5, 28, 30));
            noComplexEventTimes_2_1_2_0_4_0.set(ComplexEventStartTime_328);
            ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventStartTime_328.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_2_3_0.addGroup(noComplexEventTimes_2_1_2_0_4_0);
          }
          noComplexEvents_2_1_2_2.addGroup(noComplexEventDates_2_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_164;
          FIX::ComplexEventEndDate ComplexEventEndDate_164(FIX::UTCTIMESTAMP(14, 43, 3, 22, 12, 2008));
          noComplexEventDates_2_1_2_3_1.set(ComplexEventEndDate_164);
          ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventEndDate_164.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_164(FIX::UTCTIMESTAMP(15, 4, 0, 24, 8, 2015));
          noComplexEventDates_2_1_2_3_1.set(ComplexEventStartDate_164);
          ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventStartDate_164.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_164);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
            FIX::ComplexEventEndTime ComplexEventEndTime_329(FIX::UTCTIMEONLY(18, 51, 56));
            noComplexEventTimes_2_1_2_1_4_0.set(ComplexEventEndTime_329);
            ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventEndTime_329.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_329(FIX::UTCTIMEONLY(13, 5, 4));
            noComplexEventTimes_2_1_2_1_4_0.set(ComplexEventStartTime_329);
            ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventStartTime_329.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_2_3_1.addGroup(noComplexEventTimes_2_1_2_1_4_0);
          }
          noComplexEvents_2_1_2_2.addGroup(noComplexEventDates_2_1_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_165;
          FIX::ComplexEventEndDate ComplexEventEndDate_165(FIX::UTCTIMESTAMP(11, 10, 40, 6, 8, 2003));
          noComplexEventDates_2_1_2_3_2.set(ComplexEventEndDate_165);
          ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventEndDate_165.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_165(FIX::UTCTIMESTAMP(19, 23, 55, 19, 10, 2016));
          noComplexEventDates_2_1_2_3_2.set(ComplexEventStartDate_165);
          ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventStartDate_165.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_165);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
            FIX::ComplexEventEndTime ComplexEventEndTime_330(FIX::UTCTIMEONLY(13, 31, 35));
            noComplexEventTimes_2_1_2_2_4_0.set(ComplexEventEndTime_330);
            ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventEndTime_330.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_330(FIX::UTCTIMEONLY(6, 33, 18));
            noComplexEventTimes_2_1_2_2_4_0.set(ComplexEventStartTime_330);
            ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventStartTime_330.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_1_2_3_2.addGroup(noComplexEventTimes_2_1_2_2_4_0);
          }
          noComplexEvents_2_1_2_2.addGroup(noComplexEventDates_2_1_2_3_2);
        }
        noQuoteEntries_2_1_1.addGroup(noComplexEvents_2_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_70;
        FIX::EventDate EventDate_70("LOCALMKTDATE_1834173307");
        noEvents_2_1_2_0.set(EventDate_70);
        EvntGrp_NoEvents_70.insert(EventDate_70.getString());
        FIX::EventPx EventPx_70;
        EventPx_70.setString("13450707");
        noEvents_2_1_2_0.set(EventPx_70);
        EvntGrp_NoEvents_70.insert(EventPx_70.getString());
        FIX::EventText EventText_70("STRING_650433578");
        noEvents_2_1_2_0.set(EventText_70);
        EvntGrp_NoEvents_70.insert(EventText_70.getString());
        FIX::EventTime EventTime_70(FIX::UTCTIMESTAMP(23, 43, 27, 16, 8, 2008));
        noEvents_2_1_2_0.set(EventTime_70);
        EvntGrp_NoEvents_70.insert(EventTime_70.getString());
        FIX::EventType EventType_70(1);
        noEvents_2_1_2_0.set(EventType_70);
        EvntGrp_NoEvents_70.insert(EventType_70.getString());
        all_values.push_back(EvntGrp_NoEvents_70);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_2_1_1.addGroup(noEvents_2_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_74;
        FIX::InstrumentPartyID InstrumentPartyID_74("STRING_2113218741");
        noInstrumentParties_2_1_2_0.set(InstrumentPartyID_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyID_74.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_74('5');
        noInstrumentParties_2_1_2_0.set(InstrumentPartyIDSource_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyIDSource_74.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_74(2035109185);
        noInstrumentParties_2_1_2_0.set(InstrumentPartyRole_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyRole_74.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_74);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146;
          FIX::InstrumentPartySubID InstrumentPartySubID_146("STRING_1540977604");
          noInstrumentPartySubIDs_2_1_0_3_0.set(InstrumentPartySubID_146);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubID_146.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_146(1087787773);
          noInstrumentPartySubIDs_2_1_0_3_0.set(InstrumentPartySubIDType_146);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubIDType_146.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_1_2_0.addGroup(noInstrumentPartySubIDs_2_1_0_3_0);
        }
        noQuoteEntries_2_1_1.addGroup(noInstrumentParties_2_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_75;
        FIX::InstrumentPartyID InstrumentPartyID_75("STRING_1774630320");
        noInstrumentParties_2_1_2_1.set(InstrumentPartyID_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyID_75.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_75('1');
        noInstrumentParties_2_1_2_1.set(InstrumentPartyIDSource_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyIDSource_75.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_75(2012125715);
        noInstrumentParties_2_1_2_1.set(InstrumentPartyRole_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyRole_75.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_75);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147;
          FIX::InstrumentPartySubID InstrumentPartySubID_147("STRING_966944465");
          noInstrumentPartySubIDs_2_1_1_3_0.set(InstrumentPartySubID_147);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubID_147.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_147(1834568153);
          noInstrumentPartySubIDs_2_1_1_3_0.set(InstrumentPartySubIDType_147);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubIDType_147.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_1_2_1.addGroup(noInstrumentPartySubIDs_2_1_1_3_0);
        }
        noQuoteEntries_2_1_1.addGroup(noInstrumentParties_2_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_67;
        FIX::SecurityAltID SecurityAltID_67("STRING_533018672");
        noSecurityAltID_2_1_2_0.set(SecurityAltID_67);
        SecAltIDGrp_NoSecurityAltID_67.insert(SecurityAltID_67.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_67("STRING_1854677006");
        noSecurityAltID_2_1_2_0.set(SecurityAltIDSource_67);
        SecAltIDGrp_NoSecurityAltID_67.insert(SecurityAltIDSource_67.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_67);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_2_1_1.addGroup(noSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_68;
        FIX::SecurityAltID SecurityAltID_68("STRING_785683928");
        noSecurityAltID_2_1_2_1.set(SecurityAltID_68);
        SecAltIDGrp_NoSecurityAltID_68.insert(SecurityAltID_68.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_68("STRING_438638577");
        noSecurityAltID_2_1_2_1.set(SecurityAltIDSource_68);
        SecAltIDGrp_NoSecurityAltID_68.insert(SecurityAltIDSource_68.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_68);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_2_1_1.addGroup(noSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_69;
        FIX::SecurityAltID SecurityAltID_69("STRING_489056917");
        noSecurityAltID_2_1_2_2.set(SecurityAltID_69);
        SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltID_69.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_69("STRING_1334082230");
        noSecurityAltID_2_1_2_2.set(SecurityAltIDSource_69);
        SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltIDSource_69.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_69);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_2_1_1.addGroup(noSecurityAltID_2_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_76;
      FIX::SecurityXML SecurityXML_77("XMLDATA_125328236");
      noQuoteEntries_2_1_1.set(SecurityXML_77);
      FIX::SecurityXMLLen SecurityXMLLen_38(1834127687);
      noQuoteEntries_2_1_1.set(SecurityXMLLen_38);
      FIX::SecurityXMLSchema SecurityXMLSchema_38("STRING_1984515808");
      noQuoteEntries_2_1_1.set(SecurityXMLSchema_38);
      SecurityXML_76.insert(SecurityXMLSchema_38.getString());
      all_values.push_back(SecurityXML_76);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_2;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_7;
      FIX::BidForwardPoints BidForwardPoints_7;
      BidForwardPoints_7.setString("14943560");
      noQuoteEntries_2_1_2.set(BidForwardPoints_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(BidForwardPoints_7.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_7;
      BidForwardPoints2_7.setString("14399457");
      noQuoteEntries_2_1_2.set(BidForwardPoints2_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(BidForwardPoints2_7.getString());
      FIX::BidPx BidPx_7;
      BidPx_7.setString("6666347");
      noQuoteEntries_2_1_2.set(BidPx_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(BidPx_7.getString());
      FIX::BidSize BidSize_7;
      BidSize_7.setString("15885086");
      noQuoteEntries_2_1_2.set(BidSize_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(BidSize_7.getString());
      FIX::BidSpotRate BidSpotRate_7;
      BidSpotRate_7.setString("17601792");
      noQuoteEntries_2_1_2.set(BidSpotRate_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(BidSpotRate_7.getString());
      FIX::BidYield BidYield_7;
      BidYield_7.setString("72.660000");
      noQuoteEntries_2_1_2.set(BidYield_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(BidYield_7.getString());
      FIX::BookingType BookingType_14(1);
      noQuoteEntries_2_1_2.set(BookingType_14);
      QuotEntryGrp_NoQuoteEntries_7.insert(BookingType_14.getString());
      FIX::Currency Currency_37("EUR");
      noQuoteEntries_2_1_2.set(Currency_37);
      QuotEntryGrp_NoQuoteEntries_7.insert(Currency_37.getString());
      FIX::MidPx MidPx_7;
      MidPx_7.setString("10127779");
      noQuoteEntries_2_1_2.set(MidPx_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(MidPx_7.getString());
      FIX::MidYield MidYield_7;
      MidYield_7.setString("23.120000");
      noQuoteEntries_2_1_2.set(MidYield_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(MidYield_7.getString());
      FIX::OfferForwardPoints OfferForwardPoints_7;
      OfferForwardPoints_7.setString("477515");
      noQuoteEntries_2_1_2.set(OfferForwardPoints_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(OfferForwardPoints_7.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_7;
      OfferForwardPoints2_7.setString("4979226");
      noQuoteEntries_2_1_2.set(OfferForwardPoints2_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(OfferForwardPoints2_7.getString());
      FIX::OfferPx OfferPx_7;
      OfferPx_7.setString("20613799");
      noQuoteEntries_2_1_2.set(OfferPx_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(OfferPx_7.getString());
      FIX::OfferSize OfferSize_7;
      OfferSize_7.setString("11355393");
      noQuoteEntries_2_1_2.set(OfferSize_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(OfferSize_7.getString());
      FIX::OfferSpotRate OfferSpotRate_7;
      OfferSpotRate_7.setString("1250693");
      noQuoteEntries_2_1_2.set(OfferSpotRate_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(OfferSpotRate_7.getString());
      FIX::OfferYield OfferYield_7;
      OfferYield_7.setString("19.980000");
      noQuoteEntries_2_1_2.set(OfferYield_7);
      QuotEntryGrp_NoQuoteEntries_7.insert(OfferYield_7.getString());
      FIX::OrdType OrdType_40('I');
      noQuoteEntries_2_1_2.set(OrdType_40);
      QuotEntryGrp_NoQuoteEntries_7.insert(OrdType_40.getString());
      FIX::OrderCapacity OrderCapacity_15('W');
      noQuoteEntries_2_1_2.set(OrderCapacity_15);
      QuotEntryGrp_NoQuoteEntries_7.insert(OrderCapacity_15.getString());
      FIX::OrderQty2 OrderQty2_8;
      OrderQty2_8.setString("217728");
      noQuoteEntries_2_1_2.set(OrderQty2_8);
      QuotEntryGrp_NoQuoteEntries_7.insert(OrderQty2_8.getString());
      FIX::OrderRestrictions OrderRestrictions_12("MULTIPLECHARVALUE_F");
      noQuoteEntries_2_1_2.set(OrderRestrictions_12);
      QuotEntryGrp_NoQuoteEntries_7.insert(OrderRestrictions_12.getString());
      FIX::QuoteEntryID QuoteEntryID_10("STRING_338880401");
      noQuoteEntries_2_1_2.set(QuoteEntryID_10);
      QuotEntryGrp_NoQuoteEntries_7.insert(QuoteEntryID_10.getString());
      FIX::SettlDate SettlDate_30("LOCALMKTDATE_554791487");
      noQuoteEntries_2_1_2.set(SettlDate_30);
      QuotEntryGrp_NoQuoteEntries_7.insert(SettlDate_30.getString());
      FIX::SettlDate2 SettlDate2_8("LOCALMKTDATE_394459233");
      noQuoteEntries_2_1_2.set(SettlDate2_8);
      QuotEntryGrp_NoQuoteEntries_7.insert(SettlDate2_8.getString());
      FIX::TradingSessionID TradingSessionID_43("STRING_2");
      noQuoteEntries_2_1_2.set(TradingSessionID_43);
      QuotEntryGrp_NoQuoteEntries_7.insert(TradingSessionID_43.getString());
      FIX::TradingSessionSubID TradingSessionSubID_43("STRING_6");
      noQuoteEntries_2_1_2.set(TradingSessionSubID_43);
      QuotEntryGrp_NoQuoteEntries_7.insert(TradingSessionSubID_43.getString());
      FIX::TransactTime TransactTime_33(FIX::UTCTIMESTAMP(7, 41, 49, 3, 2, 2015));
      noQuoteEntries_2_1_2.set(TransactTime_33);
      QuotEntryGrp_NoQuoteEntries_7.insert(TransactTime_33.getString());
      FIX::ValidUntilTime ValidUntilTime_8(FIX::UTCTIMESTAMP(9, 57, 21, 6, 8, 2010));
      noQuoteEntries_2_1_2.set(ValidUntilTime_8);
      QuotEntryGrp_NoQuoteEntries_7.insert(ValidUntilTime_8.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_7);
      all_compo_names.insert("QuotEntryGrp.NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_72;
        FIX::EncodedLegIssuer EncodedLegIssuer_72("DATA_465490611");
        noLegs_2_2_2_0.set(EncodedLegIssuer_72);
        InstrumentLeg_72.insert(EncodedLegIssuer_72.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_72(1457674601);
        noLegs_2_2_2_0.set(EncodedLegIssuerLen_72);
        InstrumentLeg_72.insert(EncodedLegIssuerLen_72.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_72("DATA_316915465");
        noLegs_2_2_2_0.set(EncodedLegSecurityDesc_72);
        InstrumentLeg_72.insert(EncodedLegSecurityDesc_72.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_72(379386880);
        noLegs_2_2_2_0.set(EncodedLegSecurityDescLen_72);
        InstrumentLeg_72.insert(EncodedLegSecurityDescLen_72.getString());
        FIX::LegCFICode LegCFICode_72("STRING_445730255");
        noLegs_2_2_2_0.set(LegCFICode_72);
        InstrumentLeg_72.insert(LegCFICode_72.getString());
        FIX::LegContractMultiplier LegContractMultiplier_72;
        LegContractMultiplier_72.setString("4419847");
        noLegs_2_2_2_0.set(LegContractMultiplier_72);
        InstrumentLeg_72.insert(LegContractMultiplier_72.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_72(1581698878);
        noLegs_2_2_2_0.set(LegContractMultiplierUnit_72);
        InstrumentLeg_72.insert(LegContractMultiplierUnit_72.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_72("MONTHYEAR_1445911625");
        noLegs_2_2_2_0.set(LegContractSettlMonth_72);
        InstrumentLeg_72.insert(LegContractSettlMonth_72.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_72("COUNTRY_299860128");
        noLegs_2_2_2_0.set(LegCountryOfIssue_72);
        InstrumentLeg_72.insert(LegCountryOfIssue_72.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_72("LOCALMKTDATE_1603471693");
        noLegs_2_2_2_0.set(LegCouponPaymentDate_72);
        InstrumentLeg_72.insert(LegCouponPaymentDate_72.getString());
        FIX::LegCouponRate LegCouponRate_72;
        LegCouponRate_72.setString("74.990000");
        noLegs_2_2_2_0.set(LegCouponRate_72);
        InstrumentLeg_72.insert(LegCouponRate_72.getString());
        FIX::LegCreditRating LegCreditRating_72("STRING_638740529");
        noLegs_2_2_2_0.set(LegCreditRating_72);
        InstrumentLeg_72.insert(LegCreditRating_72.getString());
        FIX::LegCurrency LegCurrency_72("GBP");
        noLegs_2_2_2_0.set(LegCurrency_72);
        InstrumentLeg_72.insert(LegCurrency_72.getString());
        FIX::LegDatedDate LegDatedDate_72("LOCALMKTDATE_1763304858");
        noLegs_2_2_2_0.set(LegDatedDate_72);
        InstrumentLeg_72.insert(LegDatedDate_72.getString());
        FIX::LegExerciseStyle LegExerciseStyle_72(1004209597);
        noLegs_2_2_2_0.set(LegExerciseStyle_72);
        InstrumentLeg_72.insert(LegExerciseStyle_72.getString());
        FIX::LegFactor LegFactor_72;
        LegFactor_72.setString("12636692");
        noLegs_2_2_2_0.set(LegFactor_72);
        InstrumentLeg_72.insert(LegFactor_72.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_72(2074467769);
        noLegs_2_2_2_0.set(LegFlowScheduleType_72);
        InstrumentLeg_72.insert(LegFlowScheduleType_72.getString());
        FIX::LegInstrRegistry LegInstrRegistry_72("STRING_2122967899");
        noLegs_2_2_2_0.set(LegInstrRegistry_72);
        InstrumentLeg_72.insert(LegInstrRegistry_72.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_72("LOCALMKTDATE_1833829423");
        noLegs_2_2_2_0.set(LegInterestAccrualDate_72);
        InstrumentLeg_72.insert(LegInterestAccrualDate_72.getString());
        FIX::LegIssueDate LegIssueDate_72("LOCALMKTDATE_75179192");
        noLegs_2_2_2_0.set(LegIssueDate_72);
        InstrumentLeg_72.insert(LegIssueDate_72.getString());
        FIX::LegIssuer LegIssuer_72("STRING_441114912");
        noLegs_2_2_2_0.set(LegIssuer_72);
        InstrumentLeg_72.insert(LegIssuer_72.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_72("STRING_1696451762");
        noLegs_2_2_2_0.set(LegLocaleOfIssue_72);
        InstrumentLeg_72.insert(LegLocaleOfIssue_72.getString());
        FIX::LegMaturityDate LegMaturityDate_72("LOCALMKTDATE_890009007");
        noLegs_2_2_2_0.set(LegMaturityDate_72);
        InstrumentLeg_72.insert(LegMaturityDate_72.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_72("MONTHYEAR_347770561");
        noLegs_2_2_2_0.set(LegMaturityMonthYear_72);
        InstrumentLeg_72.insert(LegMaturityMonthYear_72.getString());
        FIX::LegMaturityTime LegMaturityTime_72("TZTIMEONLY_1171769691");
        noLegs_2_2_2_0.set(LegMaturityTime_72);
        InstrumentLeg_72.insert(LegMaturityTime_72.getString());
        FIX::LegOptAttribute LegOptAttribute_72('2');
        noLegs_2_2_2_0.set(LegOptAttribute_72);
        InstrumentLeg_72.insert(LegOptAttribute_72.getString());
        FIX::LegOptionRatio LegOptionRatio_72;
        LegOptionRatio_72.setString("13014690");
        noLegs_2_2_2_0.set(LegOptionRatio_72);
        InstrumentLeg_72.insert(LegOptionRatio_72.getString());
        FIX::LegPool LegPool_72("STRING_1116857991");
        noLegs_2_2_2_0.set(LegPool_72);
        InstrumentLeg_72.insert(LegPool_72.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_72("STRING_1402245512");
        noLegs_2_2_2_0.set(LegPriceUnitOfMeasure_72);
        InstrumentLeg_72.insert(LegPriceUnitOfMeasure_72.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_72;
        LegPriceUnitOfMeasureQty_72.setString("11204619");
        noLegs_2_2_2_0.set(LegPriceUnitOfMeasureQty_72);
        InstrumentLeg_72.insert(LegPriceUnitOfMeasureQty_72.getString());
        FIX::LegProduct LegProduct_72(1582348602);
        noLegs_2_2_2_0.set(LegProduct_72);
        InstrumentLeg_72.insert(LegProduct_72.getString());
        FIX::LegPutOrCall LegPutOrCall_72(712436466);
        noLegs_2_2_2_0.set(LegPutOrCall_72);
        InstrumentLeg_72.insert(LegPutOrCall_72.getString());
        FIX::LegRatioQty LegRatioQty_72;
        LegRatioQty_72.setString("14373773");
        noLegs_2_2_2_0.set(LegRatioQty_72);
        InstrumentLeg_72.insert(LegRatioQty_72.getString());
        FIX::LegRedemptionDate LegRedemptionDate_72("LOCALMKTDATE_1961735482");
        noLegs_2_2_2_0.set(LegRedemptionDate_72);
        InstrumentLeg_72.insert(LegRedemptionDate_72.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_72("STRING_1158166721");
        noLegs_2_2_2_0.set(LegRepoCollateralSecurityType_72);
        InstrumentLeg_72.insert(LegRepoCollateralSecurityType_72.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_72;
        LegRepurchaseRate_72.setString("21.440000");
        noLegs_2_2_2_0.set(LegRepurchaseRate_72);
        InstrumentLeg_72.insert(LegRepurchaseRate_72.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_72(1395950712);
        noLegs_2_2_2_0.set(LegRepurchaseTerm_72);
        InstrumentLeg_72.insert(LegRepurchaseTerm_72.getString());
        FIX::LegSecurityDesc LegSecurityDesc_72("STRING_456594698");
        noLegs_2_2_2_0.set(LegSecurityDesc_72);
        InstrumentLeg_72.insert(LegSecurityDesc_72.getString());
        FIX::LegSecurityExchange LegSecurityExchange_72("EXCHANGE_31738625");
        noLegs_2_2_2_0.set(LegSecurityExchange_72);
        InstrumentLeg_72.insert(LegSecurityExchange_72.getString());
        FIX::LegSecurityID LegSecurityID_72("STRING_851938757");
        noLegs_2_2_2_0.set(LegSecurityID_72);
        InstrumentLeg_72.insert(LegSecurityID_72.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_72("STRING_442288550");
        noLegs_2_2_2_0.set(LegSecurityIDSource_72);
        InstrumentLeg_72.insert(LegSecurityIDSource_72.getString());
        FIX::LegSecuritySubType LegSecuritySubType_72("STRING_670479154");
        noLegs_2_2_2_0.set(LegSecuritySubType_72);
        InstrumentLeg_72.insert(LegSecuritySubType_72.getString());
        FIX::LegSecurityType LegSecurityType_72("STRING_862718290");
        noLegs_2_2_2_0.set(LegSecurityType_72);
        InstrumentLeg_72.insert(LegSecurityType_72.getString());
        FIX::LegSide LegSide_72('8');
        noLegs_2_2_2_0.set(LegSide_72);
        InstrumentLeg_72.insert(LegSide_72.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_72("STRING_286300365");
        noLegs_2_2_2_0.set(LegStateOrProvinceOfIssue_72);
        InstrumentLeg_72.insert(LegStateOrProvinceOfIssue_72.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_72("CAN");
        noLegs_2_2_2_0.set(LegStrikeCurrency_72);
        InstrumentLeg_72.insert(LegStrikeCurrency_72.getString());
        FIX::LegStrikePrice LegStrikePrice_72;
        LegStrikePrice_72.setString("2132844");
        noLegs_2_2_2_0.set(LegStrikePrice_72);
        InstrumentLeg_72.insert(LegStrikePrice_72.getString());
        FIX::LegSymbol LegSymbol_72("STRING_1842412138");
        noLegs_2_2_2_0.set(LegSymbol_72);
        InstrumentLeg_72.insert(LegSymbol_72.getString());
        FIX::LegSymbolSfx LegSymbolSfx_72("STRING_1772456644");
        noLegs_2_2_2_0.set(LegSymbolSfx_72);
        InstrumentLeg_72.insert(LegSymbolSfx_72.getString());
        FIX::LegTimeUnit LegTimeUnit_72("STRING_288463679");
        noLegs_2_2_2_0.set(LegTimeUnit_72);
        InstrumentLeg_72.insert(LegTimeUnit_72.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_72("STRING_136043403");
        noLegs_2_2_2_0.set(LegUnitOfMeasure_72);
        InstrumentLeg_72.insert(LegUnitOfMeasure_72.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_72;
        LegUnitOfMeasureQty_72.setString("13214247");
        noLegs_2_2_2_0.set(LegUnitOfMeasureQty_72);
        InstrumentLeg_72.insert(LegUnitOfMeasureQty_72.getString());
        all_values.push_back(InstrumentLeg_72);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_143;
          FIX::LegSecurityAltID LegSecurityAltID_143("STRING_483813964");
          noLegSecurityAltID_2_2_0_3_0.set(LegSecurityAltID_143);
          LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltID_143.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_143("STRING_345710802");
          noLegSecurityAltID_2_2_0_3_0.set(LegSecurityAltIDSource_143);
          LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltIDSource_143.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_143);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_2_2_0.addGroup(noLegSecurityAltID_2_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_144;
          FIX::LegSecurityAltID LegSecurityAltID_144("STRING_1170795126");
          noLegSecurityAltID_2_2_0_3_1.set(LegSecurityAltID_144);
          LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltID_144.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_144("STRING_1785283040");
          noLegSecurityAltID_2_2_0_3_1.set(LegSecurityAltIDSource_144);
          LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltIDSource_144.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_144);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_2_2_0.addGroup(noLegSecurityAltID_2_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_145;
          FIX::LegSecurityAltID LegSecurityAltID_145("STRING_1462568793");
          noLegSecurityAltID_2_2_0_3_2.set(LegSecurityAltID_145);
          LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltID_145.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_145("STRING_425556990");
          noLegSecurityAltID_2_2_0_3_2.set(LegSecurityAltIDSource_145);
          LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltIDSource_145.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_145);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_2_2_0.addGroup(noLegSecurityAltID_2_2_0_3_2);
        }
        noQuoteEntries_2_1_2.addGroup(noLegs_2_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_73;
        FIX::EncodedLegIssuer EncodedLegIssuer_73("DATA_758261294");
        noLegs_2_2_2_1.set(EncodedLegIssuer_73);
        InstrumentLeg_73.insert(EncodedLegIssuer_73.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_73(897433748);
        noLegs_2_2_2_1.set(EncodedLegIssuerLen_73);
        InstrumentLeg_73.insert(EncodedLegIssuerLen_73.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_73("DATA_1137993456");
        noLegs_2_2_2_1.set(EncodedLegSecurityDesc_73);
        InstrumentLeg_73.insert(EncodedLegSecurityDesc_73.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_73(48155013);
        noLegs_2_2_2_1.set(EncodedLegSecurityDescLen_73);
        InstrumentLeg_73.insert(EncodedLegSecurityDescLen_73.getString());
        FIX::LegCFICode LegCFICode_73("STRING_711685582");
        noLegs_2_2_2_1.set(LegCFICode_73);
        InstrumentLeg_73.insert(LegCFICode_73.getString());
        FIX::LegContractMultiplier LegContractMultiplier_73;
        LegContractMultiplier_73.setString("1486765");
        noLegs_2_2_2_1.set(LegContractMultiplier_73);
        InstrumentLeg_73.insert(LegContractMultiplier_73.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_73(1927517157);
        noLegs_2_2_2_1.set(LegContractMultiplierUnit_73);
        InstrumentLeg_73.insert(LegContractMultiplierUnit_73.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_73("MONTHYEAR_2107636295");
        noLegs_2_2_2_1.set(LegContractSettlMonth_73);
        InstrumentLeg_73.insert(LegContractSettlMonth_73.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_73("COUNTRY_605271228");
        noLegs_2_2_2_1.set(LegCountryOfIssue_73);
        InstrumentLeg_73.insert(LegCountryOfIssue_73.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_73("LOCALMKTDATE_1959255782");
        noLegs_2_2_2_1.set(LegCouponPaymentDate_73);
        InstrumentLeg_73.insert(LegCouponPaymentDate_73.getString());
        FIX::LegCouponRate LegCouponRate_73;
        LegCouponRate_73.setString("14.040000");
        noLegs_2_2_2_1.set(LegCouponRate_73);
        InstrumentLeg_73.insert(LegCouponRate_73.getString());
        FIX::LegCreditRating LegCreditRating_73("STRING_1047559778");
        noLegs_2_2_2_1.set(LegCreditRating_73);
        InstrumentLeg_73.insert(LegCreditRating_73.getString());
        FIX::LegCurrency LegCurrency_73("USD");
        noLegs_2_2_2_1.set(LegCurrency_73);
        InstrumentLeg_73.insert(LegCurrency_73.getString());
        FIX::LegDatedDate LegDatedDate_73("LOCALMKTDATE_1870001413");
        noLegs_2_2_2_1.set(LegDatedDate_73);
        InstrumentLeg_73.insert(LegDatedDate_73.getString());
        FIX::LegExerciseStyle LegExerciseStyle_73(768551654);
        noLegs_2_2_2_1.set(LegExerciseStyle_73);
        InstrumentLeg_73.insert(LegExerciseStyle_73.getString());
        FIX::LegFactor LegFactor_73;
        LegFactor_73.setString("13942539");
        noLegs_2_2_2_1.set(LegFactor_73);
        InstrumentLeg_73.insert(LegFactor_73.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_73(1808628634);
        noLegs_2_2_2_1.set(LegFlowScheduleType_73);
        InstrumentLeg_73.insert(LegFlowScheduleType_73.getString());
        FIX::LegInstrRegistry LegInstrRegistry_73("STRING_981836140");
        noLegs_2_2_2_1.set(LegInstrRegistry_73);
        InstrumentLeg_73.insert(LegInstrRegistry_73.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_73("LOCALMKTDATE_1089182424");
        noLegs_2_2_2_1.set(LegInterestAccrualDate_73);
        InstrumentLeg_73.insert(LegInterestAccrualDate_73.getString());
        FIX::LegIssueDate LegIssueDate_73("LOCALMKTDATE_1433601630");
        noLegs_2_2_2_1.set(LegIssueDate_73);
        InstrumentLeg_73.insert(LegIssueDate_73.getString());
        FIX::LegIssuer LegIssuer_73("STRING_1270299819");
        noLegs_2_2_2_1.set(LegIssuer_73);
        InstrumentLeg_73.insert(LegIssuer_73.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_73("STRING_1225225827");
        noLegs_2_2_2_1.set(LegLocaleOfIssue_73);
        InstrumentLeg_73.insert(LegLocaleOfIssue_73.getString());
        FIX::LegMaturityDate LegMaturityDate_73("LOCALMKTDATE_607542741");
        noLegs_2_2_2_1.set(LegMaturityDate_73);
        InstrumentLeg_73.insert(LegMaturityDate_73.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_73("MONTHYEAR_301288857");
        noLegs_2_2_2_1.set(LegMaturityMonthYear_73);
        InstrumentLeg_73.insert(LegMaturityMonthYear_73.getString());
        FIX::LegMaturityTime LegMaturityTime_73("TZTIMEONLY_1709039792");
        noLegs_2_2_2_1.set(LegMaturityTime_73);
        InstrumentLeg_73.insert(LegMaturityTime_73.getString());
        FIX::LegOptAttribute LegOptAttribute_73('9');
        noLegs_2_2_2_1.set(LegOptAttribute_73);
        InstrumentLeg_73.insert(LegOptAttribute_73.getString());
        FIX::LegOptionRatio LegOptionRatio_73;
        LegOptionRatio_73.setString("14720839");
        noLegs_2_2_2_1.set(LegOptionRatio_73);
        InstrumentLeg_73.insert(LegOptionRatio_73.getString());
        FIX::LegPool LegPool_73("STRING_1346839184");
        noLegs_2_2_2_1.set(LegPool_73);
        InstrumentLeg_73.insert(LegPool_73.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_73("STRING_268338689");
        noLegs_2_2_2_1.set(LegPriceUnitOfMeasure_73);
        InstrumentLeg_73.insert(LegPriceUnitOfMeasure_73.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_73;
        LegPriceUnitOfMeasureQty_73.setString("18976409");
        noLegs_2_2_2_1.set(LegPriceUnitOfMeasureQty_73);
        InstrumentLeg_73.insert(LegPriceUnitOfMeasureQty_73.getString());
        FIX::LegProduct LegProduct_73(2105100478);
        noLegs_2_2_2_1.set(LegProduct_73);
        InstrumentLeg_73.insert(LegProduct_73.getString());
        FIX::LegPutOrCall LegPutOrCall_73(1165772437);
        noLegs_2_2_2_1.set(LegPutOrCall_73);
        InstrumentLeg_73.insert(LegPutOrCall_73.getString());
        FIX::LegRatioQty LegRatioQty_73;
        LegRatioQty_73.setString("8881507");
        noLegs_2_2_2_1.set(LegRatioQty_73);
        InstrumentLeg_73.insert(LegRatioQty_73.getString());
        FIX::LegRedemptionDate LegRedemptionDate_73("LOCALMKTDATE_5771843");
        noLegs_2_2_2_1.set(LegRedemptionDate_73);
        InstrumentLeg_73.insert(LegRedemptionDate_73.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_73("STRING_1877458020");
        noLegs_2_2_2_1.set(LegRepoCollateralSecurityType_73);
        InstrumentLeg_73.insert(LegRepoCollateralSecurityType_73.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_73;
        LegRepurchaseRate_73.setString("73.120000");
        noLegs_2_2_2_1.set(LegRepurchaseRate_73);
        InstrumentLeg_73.insert(LegRepurchaseRate_73.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_73(1933289001);
        noLegs_2_2_2_1.set(LegRepurchaseTerm_73);
        InstrumentLeg_73.insert(LegRepurchaseTerm_73.getString());
        FIX::LegSecurityDesc LegSecurityDesc_73("STRING_1837610667");
        noLegs_2_2_2_1.set(LegSecurityDesc_73);
        InstrumentLeg_73.insert(LegSecurityDesc_73.getString());
        FIX::LegSecurityExchange LegSecurityExchange_73("EXCHANGE_1642098541");
        noLegs_2_2_2_1.set(LegSecurityExchange_73);
        InstrumentLeg_73.insert(LegSecurityExchange_73.getString());
        FIX::LegSecurityID LegSecurityID_73("STRING_1745061135");
        noLegs_2_2_2_1.set(LegSecurityID_73);
        InstrumentLeg_73.insert(LegSecurityID_73.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_73("STRING_502218423");
        noLegs_2_2_2_1.set(LegSecurityIDSource_73);
        InstrumentLeg_73.insert(LegSecurityIDSource_73.getString());
        FIX::LegSecuritySubType LegSecuritySubType_73("STRING_542174671");
        noLegs_2_2_2_1.set(LegSecuritySubType_73);
        InstrumentLeg_73.insert(LegSecuritySubType_73.getString());
        FIX::LegSecurityType LegSecurityType_73("STRING_79828776");
        noLegs_2_2_2_1.set(LegSecurityType_73);
        InstrumentLeg_73.insert(LegSecurityType_73.getString());
        FIX::LegSide LegSide_73('2');
        noLegs_2_2_2_1.set(LegSide_73);
        InstrumentLeg_73.insert(LegSide_73.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_73("STRING_264692436");
        noLegs_2_2_2_1.set(LegStateOrProvinceOfIssue_73);
        InstrumentLeg_73.insert(LegStateOrProvinceOfIssue_73.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_73("USD");
        noLegs_2_2_2_1.set(LegStrikeCurrency_73);
        InstrumentLeg_73.insert(LegStrikeCurrency_73.getString());
        FIX::LegStrikePrice LegStrikePrice_73;
        LegStrikePrice_73.setString("20733210");
        noLegs_2_2_2_1.set(LegStrikePrice_73);
        InstrumentLeg_73.insert(LegStrikePrice_73.getString());
        FIX::LegSymbol LegSymbol_73("STRING_1830216571");
        noLegs_2_2_2_1.set(LegSymbol_73);
        InstrumentLeg_73.insert(LegSymbol_73.getString());
        FIX::LegSymbolSfx LegSymbolSfx_73("STRING_365497180");
        noLegs_2_2_2_1.set(LegSymbolSfx_73);
        InstrumentLeg_73.insert(LegSymbolSfx_73.getString());
        FIX::LegTimeUnit LegTimeUnit_73("STRING_1359439053");
        noLegs_2_2_2_1.set(LegTimeUnit_73);
        InstrumentLeg_73.insert(LegTimeUnit_73.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_73("STRING_953032742");
        noLegs_2_2_2_1.set(LegUnitOfMeasure_73);
        InstrumentLeg_73.insert(LegUnitOfMeasure_73.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_73;
        LegUnitOfMeasureQty_73.setString("15907230");
        noLegs_2_2_2_1.set(LegUnitOfMeasureQty_73);
        InstrumentLeg_73.insert(LegUnitOfMeasureQty_73.getString());
        all_values.push_back(InstrumentLeg_73);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_146;
          FIX::LegSecurityAltID LegSecurityAltID_146("STRING_1254321600");
          noLegSecurityAltID_2_2_1_3_0.set(LegSecurityAltID_146);
          LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltID_146.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_146("STRING_1152279152");
          noLegSecurityAltID_2_2_1_3_0.set(LegSecurityAltIDSource_146);
          LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltIDSource_146.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_146);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_2_2_1.addGroup(noLegSecurityAltID_2_2_1_3_0);
        }
        noQuoteEntries_2_1_2.addGroup(noLegs_2_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_2_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_74;
        FIX::EncodedLegIssuer EncodedLegIssuer_74("DATA_772751690");
        noLegs_2_2_2_2.set(EncodedLegIssuer_74);
        InstrumentLeg_74.insert(EncodedLegIssuer_74.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_74(578921935);
        noLegs_2_2_2_2.set(EncodedLegIssuerLen_74);
        InstrumentLeg_74.insert(EncodedLegIssuerLen_74.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_74("DATA_351634688");
        noLegs_2_2_2_2.set(EncodedLegSecurityDesc_74);
        InstrumentLeg_74.insert(EncodedLegSecurityDesc_74.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_74(1041090380);
        noLegs_2_2_2_2.set(EncodedLegSecurityDescLen_74);
        InstrumentLeg_74.insert(EncodedLegSecurityDescLen_74.getString());
        FIX::LegCFICode LegCFICode_74("STRING_329079261");
        noLegs_2_2_2_2.set(LegCFICode_74);
        InstrumentLeg_74.insert(LegCFICode_74.getString());
        FIX::LegContractMultiplier LegContractMultiplier_74;
        LegContractMultiplier_74.setString("3092515");
        noLegs_2_2_2_2.set(LegContractMultiplier_74);
        InstrumentLeg_74.insert(LegContractMultiplier_74.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_74(59379169);
        noLegs_2_2_2_2.set(LegContractMultiplierUnit_74);
        InstrumentLeg_74.insert(LegContractMultiplierUnit_74.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_74("MONTHYEAR_1217230044");
        noLegs_2_2_2_2.set(LegContractSettlMonth_74);
        InstrumentLeg_74.insert(LegContractSettlMonth_74.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_74("COUNTRY_315023362");
        noLegs_2_2_2_2.set(LegCountryOfIssue_74);
        InstrumentLeg_74.insert(LegCountryOfIssue_74.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_74("LOCALMKTDATE_1936837189");
        noLegs_2_2_2_2.set(LegCouponPaymentDate_74);
        InstrumentLeg_74.insert(LegCouponPaymentDate_74.getString());
        FIX::LegCouponRate LegCouponRate_74;
        LegCouponRate_74.setString("37.080000");
        noLegs_2_2_2_2.set(LegCouponRate_74);
        InstrumentLeg_74.insert(LegCouponRate_74.getString());
        FIX::LegCreditRating LegCreditRating_74("STRING_100828715");
        noLegs_2_2_2_2.set(LegCreditRating_74);
        InstrumentLeg_74.insert(LegCreditRating_74.getString());
        FIX::LegCurrency LegCurrency_74("CAN");
        noLegs_2_2_2_2.set(LegCurrency_74);
        InstrumentLeg_74.insert(LegCurrency_74.getString());
        FIX::LegDatedDate LegDatedDate_74("LOCALMKTDATE_1845889851");
        noLegs_2_2_2_2.set(LegDatedDate_74);
        InstrumentLeg_74.insert(LegDatedDate_74.getString());
        FIX::LegExerciseStyle LegExerciseStyle_74(2129182632);
        noLegs_2_2_2_2.set(LegExerciseStyle_74);
        InstrumentLeg_74.insert(LegExerciseStyle_74.getString());
        FIX::LegFactor LegFactor_74;
        LegFactor_74.setString("1433632");
        noLegs_2_2_2_2.set(LegFactor_74);
        InstrumentLeg_74.insert(LegFactor_74.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_74(1925718627);
        noLegs_2_2_2_2.set(LegFlowScheduleType_74);
        InstrumentLeg_74.insert(LegFlowScheduleType_74.getString());
        FIX::LegInstrRegistry LegInstrRegistry_74("STRING_11243454");
        noLegs_2_2_2_2.set(LegInstrRegistry_74);
        InstrumentLeg_74.insert(LegInstrRegistry_74.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_74("LOCALMKTDATE_408055709");
        noLegs_2_2_2_2.set(LegInterestAccrualDate_74);
        InstrumentLeg_74.insert(LegInterestAccrualDate_74.getString());
        FIX::LegIssueDate LegIssueDate_74("LOCALMKTDATE_626615410");
        noLegs_2_2_2_2.set(LegIssueDate_74);
        InstrumentLeg_74.insert(LegIssueDate_74.getString());
        FIX::LegIssuer LegIssuer_74("STRING_1435041858");
        noLegs_2_2_2_2.set(LegIssuer_74);
        InstrumentLeg_74.insert(LegIssuer_74.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_74("STRING_333893132");
        noLegs_2_2_2_2.set(LegLocaleOfIssue_74);
        InstrumentLeg_74.insert(LegLocaleOfIssue_74.getString());
        FIX::LegMaturityDate LegMaturityDate_74("LOCALMKTDATE_309348333");
        noLegs_2_2_2_2.set(LegMaturityDate_74);
        InstrumentLeg_74.insert(LegMaturityDate_74.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_74("MONTHYEAR_1800539038");
        noLegs_2_2_2_2.set(LegMaturityMonthYear_74);
        InstrumentLeg_74.insert(LegMaturityMonthYear_74.getString());
        FIX::LegMaturityTime LegMaturityTime_74("TZTIMEONLY_1693332185");
        noLegs_2_2_2_2.set(LegMaturityTime_74);
        InstrumentLeg_74.insert(LegMaturityTime_74.getString());
        FIX::LegOptAttribute LegOptAttribute_74('1');
        noLegs_2_2_2_2.set(LegOptAttribute_74);
        InstrumentLeg_74.insert(LegOptAttribute_74.getString());
        FIX::LegOptionRatio LegOptionRatio_74;
        LegOptionRatio_74.setString("12437783");
        noLegs_2_2_2_2.set(LegOptionRatio_74);
        InstrumentLeg_74.insert(LegOptionRatio_74.getString());
        FIX::LegPool LegPool_74("STRING_1512830331");
        noLegs_2_2_2_2.set(LegPool_74);
        InstrumentLeg_74.insert(LegPool_74.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_74("STRING_369219027");
        noLegs_2_2_2_2.set(LegPriceUnitOfMeasure_74);
        InstrumentLeg_74.insert(LegPriceUnitOfMeasure_74.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_74;
        LegPriceUnitOfMeasureQty_74.setString("2485739");
        noLegs_2_2_2_2.set(LegPriceUnitOfMeasureQty_74);
        InstrumentLeg_74.insert(LegPriceUnitOfMeasureQty_74.getString());
        FIX::LegProduct LegProduct_74(138098374);
        noLegs_2_2_2_2.set(LegProduct_74);
        InstrumentLeg_74.insert(LegProduct_74.getString());
        FIX::LegPutOrCall LegPutOrCall_74(948140963);
        noLegs_2_2_2_2.set(LegPutOrCall_74);
        InstrumentLeg_74.insert(LegPutOrCall_74.getString());
        FIX::LegRatioQty LegRatioQty_74;
        LegRatioQty_74.setString("6002085");
        noLegs_2_2_2_2.set(LegRatioQty_74);
        InstrumentLeg_74.insert(LegRatioQty_74.getString());
        FIX::LegRedemptionDate LegRedemptionDate_74("LOCALMKTDATE_1179188754");
        noLegs_2_2_2_2.set(LegRedemptionDate_74);
        InstrumentLeg_74.insert(LegRedemptionDate_74.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_74("STRING_1277220224");
        noLegs_2_2_2_2.set(LegRepoCollateralSecurityType_74);
        InstrumentLeg_74.insert(LegRepoCollateralSecurityType_74.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_74;
        LegRepurchaseRate_74.setString("1.100000");
        noLegs_2_2_2_2.set(LegRepurchaseRate_74);
        InstrumentLeg_74.insert(LegRepurchaseRate_74.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_74(1238567923);
        noLegs_2_2_2_2.set(LegRepurchaseTerm_74);
        InstrumentLeg_74.insert(LegRepurchaseTerm_74.getString());
        FIX::LegSecurityDesc LegSecurityDesc_74("STRING_346966620");
        noLegs_2_2_2_2.set(LegSecurityDesc_74);
        InstrumentLeg_74.insert(LegSecurityDesc_74.getString());
        FIX::LegSecurityExchange LegSecurityExchange_74("EXCHANGE_1224483472");
        noLegs_2_2_2_2.set(LegSecurityExchange_74);
        InstrumentLeg_74.insert(LegSecurityExchange_74.getString());
        FIX::LegSecurityID LegSecurityID_74("STRING_1027921465");
        noLegs_2_2_2_2.set(LegSecurityID_74);
        InstrumentLeg_74.insert(LegSecurityID_74.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_74("STRING_453540329");
        noLegs_2_2_2_2.set(LegSecurityIDSource_74);
        InstrumentLeg_74.insert(LegSecurityIDSource_74.getString());
        FIX::LegSecuritySubType LegSecuritySubType_74("STRING_1325312188");
        noLegs_2_2_2_2.set(LegSecuritySubType_74);
        InstrumentLeg_74.insert(LegSecuritySubType_74.getString());
        FIX::LegSecurityType LegSecurityType_74("STRING_507402025");
        noLegs_2_2_2_2.set(LegSecurityType_74);
        InstrumentLeg_74.insert(LegSecurityType_74.getString());
        FIX::LegSide LegSide_74('5');
        noLegs_2_2_2_2.set(LegSide_74);
        InstrumentLeg_74.insert(LegSide_74.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_74("STRING_1023718391");
        noLegs_2_2_2_2.set(LegStateOrProvinceOfIssue_74);
        InstrumentLeg_74.insert(LegStateOrProvinceOfIssue_74.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_74("EUR");
        noLegs_2_2_2_2.set(LegStrikeCurrency_74);
        InstrumentLeg_74.insert(LegStrikeCurrency_74.getString());
        FIX::LegStrikePrice LegStrikePrice_74;
        LegStrikePrice_74.setString("8019533");
        noLegs_2_2_2_2.set(LegStrikePrice_74);
        InstrumentLeg_74.insert(LegStrikePrice_74.getString());
        FIX::LegSymbol LegSymbol_74("STRING_500344463");
        noLegs_2_2_2_2.set(LegSymbol_74);
        InstrumentLeg_74.insert(LegSymbol_74.getString());
        FIX::LegSymbolSfx LegSymbolSfx_74("STRING_606147913");
        noLegs_2_2_2_2.set(LegSymbolSfx_74);
        InstrumentLeg_74.insert(LegSymbolSfx_74.getString());
        FIX::LegTimeUnit LegTimeUnit_74("STRING_1428568780");
        noLegs_2_2_2_2.set(LegTimeUnit_74);
        InstrumentLeg_74.insert(LegTimeUnit_74.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_74("STRING_1935386321");
        noLegs_2_2_2_2.set(LegUnitOfMeasure_74);
        InstrumentLeg_74.insert(LegUnitOfMeasure_74.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_74;
        LegUnitOfMeasureQty_74.setString("9400410");
        noLegs_2_2_2_2.set(LegUnitOfMeasureQty_74);
        InstrumentLeg_74.insert(LegUnitOfMeasureQty_74.getString());
        all_values.push_back(InstrumentLeg_74);
        all_compo_names.insert("InstrumentLeg");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_147;
          FIX::LegSecurityAltID LegSecurityAltID_147("STRING_1588441712");
          noLegSecurityAltID_2_2_2_3_0.set(LegSecurityAltID_147);
          LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltID_147.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_147("STRING_485889582");
          noLegSecurityAltID_2_2_2_3_0.set(LegSecurityAltIDSource_147);
          LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltIDSource_147.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_147);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_2_2_2.addGroup(noLegSecurityAltID_2_2_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_148;
          FIX::LegSecurityAltID LegSecurityAltID_148("STRING_852814541");
          noLegSecurityAltID_2_2_2_3_1.set(LegSecurityAltID_148);
          LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltID_148.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_148("STRING_684736462");
          noLegSecurityAltID_2_2_2_3_1.set(LegSecurityAltIDSource_148);
          LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltIDSource_148.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_148);
          all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

          noLegs_2_2_2_2.addGroup(noLegSecurityAltID_2_2_2_3_1);
        }
        noQuoteEntries_2_1_2.addGroup(noLegs_2_2_2_2);
      }
      // Instrument
      multiset<string> Instrument_39;
      FIX::AttachmentPoint AttachmentPoint_39;
      AttachmentPoint_39.setString("99.130000");
      noQuoteEntries_2_1_2.set(AttachmentPoint_39);
      Instrument_39.insert(AttachmentPoint_39.getString());
      FIX::CFICode CFICode_39("STRING_1222033568");
      noQuoteEntries_2_1_2.set(CFICode_39);
      Instrument_39.insert(CFICode_39.getString());
      FIX::CPProgram CPProgram_39(1);
      noQuoteEntries_2_1_2.set(CPProgram_39);
      Instrument_39.insert(CPProgram_39.getString());
      FIX::CPRegType CPRegType_39("STRING_2136818287");
      noQuoteEntries_2_1_2.set(CPRegType_39);
      Instrument_39.insert(CPRegType_39.getString());
      FIX::CapPrice CapPrice_39;
      CapPrice_39.setString("226908");
      noQuoteEntries_2_1_2.set(CapPrice_39);
      Instrument_39.insert(CapPrice_39.getString());
      FIX::ContractMultiplier ContractMultiplier_39;
      ContractMultiplier_39.setString("15335189");
      noQuoteEntries_2_1_2.set(ContractMultiplier_39);
      Instrument_39.insert(ContractMultiplier_39.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_39(2);
      noQuoteEntries_2_1_2.set(ContractMultiplierUnit_39);
      Instrument_39.insert(ContractMultiplierUnit_39.getString());
      FIX::ContractSettlMonth ContractSettlMonth_39("MONTHYEAR_1299911108");
      noQuoteEntries_2_1_2.set(ContractSettlMonth_39);
      Instrument_39.insert(ContractSettlMonth_39.getString());
      FIX::CountryOfIssue CountryOfIssue_39("COUNTRY_295495418");
      noQuoteEntries_2_1_2.set(CountryOfIssue_39);
      Instrument_39.insert(CountryOfIssue_39.getString());
      FIX::CouponPaymentDate CouponPaymentDate_39("LOCALMKTDATE_259607669");
      noQuoteEntries_2_1_2.set(CouponPaymentDate_39);
      Instrument_39.insert(CouponPaymentDate_39.getString());
      FIX::CouponRate CouponRate_39;
      CouponRate_39.setString("77.280000");
      noQuoteEntries_2_1_2.set(CouponRate_39);
      Instrument_39.insert(CouponRate_39.getString());
      FIX::CreditRating CreditRating_39("STRING_1519978890");
      noQuoteEntries_2_1_2.set(CreditRating_39);
      Instrument_39.insert(CreditRating_39.getString());
      FIX::DatedDate DatedDate_39("LOCALMKTDATE_1287529134");
      noQuoteEntries_2_1_2.set(DatedDate_39);
      Instrument_39.insert(DatedDate_39.getString());
      FIX::DetachmentPoint DetachmentPoint_39;
      DetachmentPoint_39.setString("80.570000");
      noQuoteEntries_2_1_2.set(DetachmentPoint_39);
      Instrument_39.insert(DetachmentPoint_39.getString());
      FIX::EncodedIssuer EncodedIssuer_39("DATA_697807430");
      noQuoteEntries_2_1_2.set(EncodedIssuer_39);
      Instrument_39.insert(EncodedIssuer_39.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_39(1794931159);
      noQuoteEntries_2_1_2.set(EncodedIssuerLen_39);
      Instrument_39.insert(EncodedIssuerLen_39.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_39("DATA_7663340");
      noQuoteEntries_2_1_2.set(EncodedSecurityDesc_39);
      Instrument_39.insert(EncodedSecurityDesc_39.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_39(1721525821);
      noQuoteEntries_2_1_2.set(EncodedSecurityDescLen_39);
      Instrument_39.insert(EncodedSecurityDescLen_39.getString());
      FIX::ExerciseStyle ExerciseStyle_39(2);
      noQuoteEntries_2_1_2.set(ExerciseStyle_39);
      Instrument_39.insert(ExerciseStyle_39.getString());
      FIX::Factor Factor_39;
      Factor_39.setString("2057555");
      noQuoteEntries_2_1_2.set(Factor_39);
      Instrument_39.insert(Factor_39.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_39(true);
      noQuoteEntries_2_1_2.set(FlexProductEligibilityIndicator_39);
      Instrument_39.insert(FlexProductEligibilityIndicator_39.getString());
      FIX::FlexibleIndicator FlexibleIndicator_39(true);
      noQuoteEntries_2_1_2.set(FlexibleIndicator_39);
      Instrument_39.insert(FlexibleIndicator_39.getString());
      FIX::FloorPrice FloorPrice_39;
      FloorPrice_39.setString("8119034");
      noQuoteEntries_2_1_2.set(FloorPrice_39);
      Instrument_39.insert(FloorPrice_39.getString());
      FIX::FlowScheduleType FlowScheduleType_39(4);
      noQuoteEntries_2_1_2.set(FlowScheduleType_39);
      Instrument_39.insert(FlowScheduleType_39.getString());
      FIX::InstrRegistry InstrRegistry_39("STRING_424795658");
      noQuoteEntries_2_1_2.set(InstrRegistry_39);
      Instrument_39.insert(InstrRegistry_39.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_39('1');
      noQuoteEntries_2_1_2.set(InstrmtAssignmentMethod_39);
      Instrument_39.insert(InstrmtAssignmentMethod_39.getString());
      FIX::InterestAccrualDate InterestAccrualDate_39("LOCALMKTDATE_1394997790");
      noQuoteEntries_2_1_2.set(InterestAccrualDate_39);
      Instrument_39.insert(InterestAccrualDate_39.getString());
      FIX::IssueDate IssueDate_39("LOCALMKTDATE_2013237370");
      noQuoteEntries_2_1_2.set(IssueDate_39);
      Instrument_39.insert(IssueDate_39.getString());
      FIX::Issuer Issuer_39("STRING_90350435");
      noQuoteEntries_2_1_2.set(Issuer_39);
      Instrument_39.insert(Issuer_39.getString());
      FIX::ListMethod ListMethod_39(1);
      noQuoteEntries_2_1_2.set(ListMethod_39);
      Instrument_39.insert(ListMethod_39.getString());
      FIX::LocaleOfIssue LocaleOfIssue_39("STRING_550490184");
      noQuoteEntries_2_1_2.set(LocaleOfIssue_39);
      Instrument_39.insert(LocaleOfIssue_39.getString());
      FIX::MaturityDate MaturityDate_39("LOCALMKTDATE_2089070349");
      noQuoteEntries_2_1_2.set(MaturityDate_39);
      Instrument_39.insert(MaturityDate_39.getString());
      FIX::MaturityMonthYear MaturityMonthYear_39("MONTHYEAR_1322362251");
      noQuoteEntries_2_1_2.set(MaturityMonthYear_39);
      Instrument_39.insert(MaturityMonthYear_39.getString());
      FIX::MaturityTime MaturityTime_39("TZTIMEONLY_1483800549");
      noQuoteEntries_2_1_2.set(MaturityTime_39);
      Instrument_39.insert(MaturityTime_39.getString());
      FIX::MinPriceIncrement MinPriceIncrement_39;
      MinPriceIncrement_39.setString("20784049");
      noQuoteEntries_2_1_2.set(MinPriceIncrement_39);
      Instrument_39.insert(MinPriceIncrement_39.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_39;
      MinPriceIncrementAmount_39.setString("13450531");
      noQuoteEntries_2_1_2.set(MinPriceIncrementAmount_39);
      Instrument_39.insert(MinPriceIncrementAmount_39.getString());
      FIX::NTPositionLimit NTPositionLimit_39(869835857);
      noQuoteEntries_2_1_2.set(NTPositionLimit_39);
      Instrument_39.insert(NTPositionLimit_39.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_39;
      NotionalPercentageOutstanding_39.setString("47.340000");
      noQuoteEntries_2_1_2.set(NotionalPercentageOutstanding_39);
      Instrument_39.insert(NotionalPercentageOutstanding_39.getString());
      FIX::OptAttribute OptAttribute_39('4');
      noQuoteEntries_2_1_2.set(OptAttribute_39);
      Instrument_39.insert(OptAttribute_39.getString());
      FIX::OptPayoutAmount OptPayoutAmount_39;
      OptPayoutAmount_39.setString("11653312");
      noQuoteEntries_2_1_2.set(OptPayoutAmount_39);
      Instrument_39.insert(OptPayoutAmount_39.getString());
      FIX::OptPayoutType OptPayoutType_39(3);
      noQuoteEntries_2_1_2.set(OptPayoutType_39);
      Instrument_39.insert(OptPayoutType_39.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_39;
      OriginalNotionalPercentageOutstanding_39.setString("83.230000");
      noQuoteEntries_2_1_2.set(OriginalNotionalPercentageOutstanding_39);
      Instrument_39.insert(OriginalNotionalPercentageOutstanding_39.getString());
      FIX::Pool Pool_39("STRING_537826518");
      noQuoteEntries_2_1_2.set(Pool_39);
      Instrument_39.insert(Pool_39.getString());
      FIX::PositionLimit PositionLimit_39(499097889);
      noQuoteEntries_2_1_2.set(PositionLimit_39);
      Instrument_39.insert(PositionLimit_39.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_39("STRING_INX");
      noQuoteEntries_2_1_2.set(PriceQuoteMethod_39);
      Instrument_39.insert(PriceQuoteMethod_39.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_39("STRING_1235633948");
      noQuoteEntries_2_1_2.set(PriceUnitOfMeasure_39);
      Instrument_39.insert(PriceUnitOfMeasure_39.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_39;
      PriceUnitOfMeasureQty_39.setString("1465454");
      noQuoteEntries_2_1_2.set(PriceUnitOfMeasureQty_39);
      Instrument_39.insert(PriceUnitOfMeasureQty_39.getString());
      FIX::Product Product_41(13);
      noQuoteEntries_2_1_2.set(Product_41);
      Instrument_39.insert(Product_41.getString());
      FIX::ProductComplex ProductComplex_39("STRING_809676122");
      noQuoteEntries_2_1_2.set(ProductComplex_39);
      Instrument_39.insert(ProductComplex_39.getString());
      FIX::PutOrCall PutOrCall_39(1);
      noQuoteEntries_2_1_2.set(PutOrCall_39);
      Instrument_39.insert(PutOrCall_39.getString());
      FIX::RedemptionDate RedemptionDate_39("LOCALMKTDATE_163227968");
      noQuoteEntries_2_1_2.set(RedemptionDate_39);
      Instrument_39.insert(RedemptionDate_39.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_39("STRING_1185671666");
      noQuoteEntries_2_1_2.set(RepoCollateralSecurityType_39);
      Instrument_39.insert(RepoCollateralSecurityType_39.getString());
      FIX::RepurchaseRate RepurchaseRate_39;
      RepurchaseRate_39.setString("69.060000");
      noQuoteEntries_2_1_2.set(RepurchaseRate_39);
      Instrument_39.insert(RepurchaseRate_39.getString());
      FIX::RepurchaseTerm RepurchaseTerm_39(975131425);
      noQuoteEntries_2_1_2.set(RepurchaseTerm_39);
      Instrument_39.insert(RepurchaseTerm_39.getString());
      FIX::RestructuringType RestructuringType_39("STRING_MM");
      noQuoteEntries_2_1_2.set(RestructuringType_39);
      Instrument_39.insert(RestructuringType_39.getString());
      FIX::SecurityDesc SecurityDesc_39("STRING_1344782564");
      noQuoteEntries_2_1_2.set(SecurityDesc_39);
      Instrument_39.insert(SecurityDesc_39.getString());
      FIX::SecurityExchange SecurityExchange_39("EXCHANGE_579592278");
      noQuoteEntries_2_1_2.set(SecurityExchange_39);
      Instrument_39.insert(SecurityExchange_39.getString());
      FIX::SecurityGroup SecurityGroup_39("STRING_90266484");
      noQuoteEntries_2_1_2.set(SecurityGroup_39);
      Instrument_39.insert(SecurityGroup_39.getString());
      FIX::SecurityID SecurityID_39("STRING_1210536286");
      noQuoteEntries_2_1_2.set(SecurityID_39);
      Instrument_39.insert(SecurityID_39.getString());
      FIX::SecurityIDSource SecurityIDSource_39("STRING_D");
      noQuoteEntries_2_1_2.set(SecurityIDSource_39);
      Instrument_39.insert(SecurityIDSource_39.getString());
      FIX::SecurityStatus SecurityStatus_39("STRING_2");
      noQuoteEntries_2_1_2.set(SecurityStatus_39);
      Instrument_39.insert(SecurityStatus_39.getString());
      FIX::SecuritySubType SecuritySubType_40("STRING_1761026470");
      noQuoteEntries_2_1_2.set(SecuritySubType_40);
      Instrument_39.insert(SecuritySubType_40.getString());
      FIX::SecurityType SecurityType_41("STRING_YCD");
      noQuoteEntries_2_1_2.set(SecurityType_41);
      Instrument_39.insert(SecurityType_41.getString());
      FIX::Seniority Seniority_39("STRING_SB");
      noQuoteEntries_2_1_2.set(Seniority_39);
      Instrument_39.insert(Seniority_39.getString());
      FIX::SettlMethod SettlMethod_39('C');
      noQuoteEntries_2_1_2.set(SettlMethod_39);
      Instrument_39.insert(SettlMethod_39.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_39("STRING_542450755");
      noQuoteEntries_2_1_2.set(SettleOnOpenFlag_39);
      Instrument_39.insert(SettleOnOpenFlag_39.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_39("STRING_710526906");
      noQuoteEntries_2_1_2.set(StateOrProvinceOfIssue_39);
      Instrument_39.insert(StateOrProvinceOfIssue_39.getString());
      FIX::StrikeCurrency StrikeCurrency_39("EUR");
      noQuoteEntries_2_1_2.set(StrikeCurrency_39);
      Instrument_39.insert(StrikeCurrency_39.getString());
      FIX::StrikeMultiplier StrikeMultiplier_39;
      StrikeMultiplier_39.setString("12080075");
      noQuoteEntries_2_1_2.set(StrikeMultiplier_39);
      Instrument_39.insert(StrikeMultiplier_39.getString());
      FIX::StrikePrice StrikePrice_39;
      StrikePrice_39.setString("9850268");
      noQuoteEntries_2_1_2.set(StrikePrice_39);
      Instrument_39.insert(StrikePrice_39.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_39(5);
      noQuoteEntries_2_1_2.set(StrikePriceBoundaryMethod_39);
      Instrument_39.insert(StrikePriceBoundaryMethod_39.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_39;
      StrikePriceBoundaryPrecision_39.setString("21.760000");
      noQuoteEntries_2_1_2.set(StrikePriceBoundaryPrecision_39);
      Instrument_39.insert(StrikePriceBoundaryPrecision_39.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_39(4);
      noQuoteEntries_2_1_2.set(StrikePriceDeterminationMethod_39);
      Instrument_39.insert(StrikePriceDeterminationMethod_39.getString());
      FIX::StrikeValue StrikeValue_39;
      StrikeValue_39.setString("13525621");
      noQuoteEntries_2_1_2.set(StrikeValue_39);
      Instrument_39.insert(StrikeValue_39.getString());
      FIX::Symbol Symbol_39("STRING_1154691261");
      noQuoteEntries_2_1_2.set(Symbol_39);
      Instrument_39.insert(Symbol_39.getString());
      FIX::SymbolSfx SymbolSfx_39("STRING_WI");
      noQuoteEntries_2_1_2.set(SymbolSfx_39);
      Instrument_39.insert(SymbolSfx_39.getString());
      FIX::TimeUnit TimeUnit_39("STRING_Min");
      noQuoteEntries_2_1_2.set(TimeUnit_39);
      Instrument_39.insert(TimeUnit_39.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_39(3);
      noQuoteEntries_2_1_2.set(UnderlyingPriceDeterminationMethod_39);
      Instrument_39.insert(UnderlyingPriceDeterminationMethod_39.getString());
      FIX::UnitOfMeasure UnitOfMeasure_39("STRING_Bbl");
      noQuoteEntries_2_1_2.set(UnitOfMeasure_39);
      Instrument_39.insert(UnitOfMeasure_39.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_39;
      UnitOfMeasureQty_39.setString("17822014");
      noQuoteEntries_2_1_2.set(UnitOfMeasureQty_39);
      Instrument_39.insert(UnitOfMeasureQty_39.getString());
      FIX::ValuationMethod ValuationMethod_39("STRING_EQTY");
      noQuoteEntries_2_1_2.set(ValuationMethod_39);
      Instrument_39.insert(ValuationMethod_39.getString());
      all_values.push_back(Instrument_39);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_79;
        FIX::ComplexEventCondition ComplexEventCondition_79(2);
        noComplexEvents_2_2_2_0.set(ComplexEventCondition_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventCondition_79.getString());
        FIX::ComplexEventPrice ComplexEventPrice_79;
        ComplexEventPrice_79.setString("1030394");
        noComplexEvents_2_2_2_0.set(ComplexEventPrice_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPrice_79.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_79(4);
        noComplexEvents_2_2_2_0.set(ComplexEventPriceBoundaryMethod_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryMethod_79.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_79;
        ComplexEventPriceBoundaryPrecision_79.setString("72.770000");
        noComplexEvents_2_2_2_0.set(ComplexEventPriceBoundaryPrecision_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryPrecision_79.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_79(2);
        noComplexEvents_2_2_2_0.set(ComplexEventPriceTimeType_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceTimeType_79.getString());
        FIX::ComplexEventType ComplexEventType_79(4);
        noComplexEvents_2_2_2_0.set(ComplexEventType_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventType_79.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_79;
        ComplexOptPayoutAmount_79.setString("9625399");
        noComplexEvents_2_2_2_0.set(ComplexOptPayoutAmount_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexOptPayoutAmount_79.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_79);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_166;
          FIX::ComplexEventEndDate ComplexEventEndDate_166(FIX::UTCTIMESTAMP(10, 59, 41, 6, 12, 2017));
          noComplexEventDates_2_2_0_3_0.set(ComplexEventEndDate_166);
          ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventEndDate_166.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_166(FIX::UTCTIMESTAMP(12, 0, 40, 9, 1, 2009));
          noComplexEventDates_2_2_0_3_0.set(ComplexEventStartDate_166);
          ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventStartDate_166.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_166);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
            FIX::ComplexEventEndTime ComplexEventEndTime_331(FIX::UTCTIMEONLY(7, 12, 16));
            noComplexEventTimes_2_2_0_0_4_0.set(ComplexEventEndTime_331);
            ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventEndTime_331.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_331(FIX::UTCTIMEONLY(4, 43, 8));
            noComplexEventTimes_2_2_0_0_4_0.set(ComplexEventStartTime_331);
            ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventStartTime_331.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_2_0_3_0.addGroup(noComplexEventTimes_2_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
            FIX::ComplexEventEndTime ComplexEventEndTime_332(FIX::UTCTIMEONLY(23, 26, 23));
            noComplexEventTimes_2_2_0_0_4_1.set(ComplexEventEndTime_332);
            ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventEndTime_332.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_332(FIX::UTCTIMEONLY(12, 10, 42));
            noComplexEventTimes_2_2_0_0_4_1.set(ComplexEventStartTime_332);
            ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventStartTime_332.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_2_0_3_0.addGroup(noComplexEventTimes_2_2_0_0_4_1);
          }
          noComplexEvents_2_2_2_0.addGroup(noComplexEventDates_2_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_167;
          FIX::ComplexEventEndDate ComplexEventEndDate_167(FIX::UTCTIMESTAMP(8, 34, 23, 26, 10, 2002));
          noComplexEventDates_2_2_0_3_1.set(ComplexEventEndDate_167);
          ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventEndDate_167.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_167(FIX::UTCTIMESTAMP(13, 2, 22, 2, 8, 2000));
          noComplexEventDates_2_2_0_3_1.set(ComplexEventStartDate_167);
          ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventStartDate_167.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_167);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
            FIX::ComplexEventEndTime ComplexEventEndTime_333(FIX::UTCTIMEONLY(1, 5, 29));
            noComplexEventTimes_2_2_0_1_4_0.set(ComplexEventEndTime_333);
            ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventEndTime_333.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_333(FIX::UTCTIMEONLY(21, 5, 33));
            noComplexEventTimes_2_2_0_1_4_0.set(ComplexEventStartTime_333);
            ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventStartTime_333.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_2_0_3_1.addGroup(noComplexEventTimes_2_2_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
            FIX::ComplexEventEndTime ComplexEventEndTime_334(FIX::UTCTIMEONLY(4, 51, 6));
            noComplexEventTimes_2_2_0_1_4_1.set(ComplexEventEndTime_334);
            ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventEndTime_334.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_334(FIX::UTCTIMEONLY(16, 16, 53));
            noComplexEventTimes_2_2_0_1_4_1.set(ComplexEventStartTime_334);
            ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventStartTime_334.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_2_0_3_1.addGroup(noComplexEventTimes_2_2_0_1_4_1);
          }
          noComplexEvents_2_2_2_0.addGroup(noComplexEventDates_2_2_0_3_1);
        }
        noQuoteEntries_2_1_2.addGroup(noComplexEvents_2_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_80;
        FIX::ComplexEventCondition ComplexEventCondition_80(1);
        noComplexEvents_2_2_2_1.set(ComplexEventCondition_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventCondition_80.getString());
        FIX::ComplexEventPrice ComplexEventPrice_80;
        ComplexEventPrice_80.setString("16890376");
        noComplexEvents_2_2_2_1.set(ComplexEventPrice_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPrice_80.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_80(3);
        noComplexEvents_2_2_2_1.set(ComplexEventPriceBoundaryMethod_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryMethod_80.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_80;
        ComplexEventPriceBoundaryPrecision_80.setString("2.100000");
        noComplexEvents_2_2_2_1.set(ComplexEventPriceBoundaryPrecision_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryPrecision_80.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_80(3);
        noComplexEvents_2_2_2_1.set(ComplexEventPriceTimeType_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceTimeType_80.getString());
        FIX::ComplexEventType ComplexEventType_80(5);
        noComplexEvents_2_2_2_1.set(ComplexEventType_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexEventType_80.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_80;
        ComplexOptPayoutAmount_80.setString("9039982");
        noComplexEvents_2_2_2_1.set(ComplexOptPayoutAmount_80);
        ComplexEvents_NoComplexEvents_80.insert(ComplexOptPayoutAmount_80.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_80);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_168;
          FIX::ComplexEventEndDate ComplexEventEndDate_168(FIX::UTCTIMESTAMP(19, 24, 44, 6, 11, 2007));
          noComplexEventDates_2_2_1_3_0.set(ComplexEventEndDate_168);
          ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventEndDate_168.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_168(FIX::UTCTIMESTAMP(15, 34, 52, 16, 1, 2003));
          noComplexEventDates_2_2_1_3_0.set(ComplexEventStartDate_168);
          ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventStartDate_168.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_168);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
            FIX::ComplexEventEndTime ComplexEventEndTime_335(FIX::UTCTIMEONLY(18, 25, 1));
            noComplexEventTimes_2_2_1_0_4_0.set(ComplexEventEndTime_335);
            ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventEndTime_335.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_335(FIX::UTCTIMEONLY(9, 17, 33));
            noComplexEventTimes_2_2_1_0_4_0.set(ComplexEventStartTime_335);
            ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventStartTime_335.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_2_1_3_0.addGroup(noComplexEventTimes_2_2_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_336;
            FIX::ComplexEventEndTime ComplexEventEndTime_336(FIX::UTCTIMEONLY(10, 52, 26));
            noComplexEventTimes_2_2_1_0_4_1.set(ComplexEventEndTime_336);
            ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventEndTime_336.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_336(FIX::UTCTIMEONLY(12, 18, 3));
            noComplexEventTimes_2_2_1_0_4_1.set(ComplexEventStartTime_336);
            ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventStartTime_336.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_336);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_2_2_1_3_0.addGroup(noComplexEventTimes_2_2_1_0_4_1);
          }
          noComplexEvents_2_2_2_1.addGroup(noComplexEventDates_2_2_1_3_0);
        }
        noQuoteEntries_2_1_2.addGroup(noComplexEvents_2_2_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_71;
        FIX::EventDate EventDate_71("LOCALMKTDATE_1394651225");
        noEvents_2_2_2_0.set(EventDate_71);
        EvntGrp_NoEvents_71.insert(EventDate_71.getString());
        FIX::EventPx EventPx_71;
        EventPx_71.setString("20516904");
        noEvents_2_2_2_0.set(EventPx_71);
        EvntGrp_NoEvents_71.insert(EventPx_71.getString());
        FIX::EventText EventText_71("STRING_641730262");
        noEvents_2_2_2_0.set(EventText_71);
        EvntGrp_NoEvents_71.insert(EventText_71.getString());
        FIX::EventTime EventTime_71(FIX::UTCTIMESTAMP(5, 51, 46, 24, 2, 2015));
        noEvents_2_2_2_0.set(EventTime_71);
        EvntGrp_NoEvents_71.insert(EventTime_71.getString());
        FIX::EventType EventType_71(18);
        noEvents_2_2_2_0.set(EventType_71);
        EvntGrp_NoEvents_71.insert(EventType_71.getString());
        all_values.push_back(EvntGrp_NoEvents_71);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_2_1_2.addGroup(noEvents_2_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_72;
        FIX::EventDate EventDate_72("LOCALMKTDATE_1436837857");
        noEvents_2_2_2_1.set(EventDate_72);
        EvntGrp_NoEvents_72.insert(EventDate_72.getString());
        FIX::EventPx EventPx_72;
        EventPx_72.setString("3631428");
        noEvents_2_2_2_1.set(EventPx_72);
        EvntGrp_NoEvents_72.insert(EventPx_72.getString());
        FIX::EventText EventText_72("STRING_1078143631");
        noEvents_2_2_2_1.set(EventText_72);
        EvntGrp_NoEvents_72.insert(EventText_72.getString());
        FIX::EventTime EventTime_72(FIX::UTCTIMESTAMP(10, 48, 25, 7, 11, 2001));
        noEvents_2_2_2_1.set(EventTime_72);
        EvntGrp_NoEvents_72.insert(EventTime_72.getString());
        FIX::EventType EventType_72(17);
        noEvents_2_2_2_1.set(EventType_72);
        EvntGrp_NoEvents_72.insert(EventType_72.getString());
        all_values.push_back(EvntGrp_NoEvents_72);
        all_compo_names.insert("EvntGrp.NoEvents");

        noQuoteEntries_2_1_2.addGroup(noEvents_2_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_76;
        FIX::InstrumentPartyID InstrumentPartyID_76("STRING_1025292909");
        noInstrumentParties_2_2_2_0.set(InstrumentPartyID_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyID_76.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_76('1');
        noInstrumentParties_2_2_2_0.set(InstrumentPartyIDSource_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyIDSource_76.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_76(1509716220);
        noInstrumentParties_2_2_2_0.set(InstrumentPartyRole_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyRole_76.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_76);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148;
          FIX::InstrumentPartySubID InstrumentPartySubID_148("STRING_176265845");
          noInstrumentPartySubIDs_2_2_0_3_0.set(InstrumentPartySubID_148);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubID_148.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_148(792284890);
          noInstrumentPartySubIDs_2_2_0_3_0.set(InstrumentPartySubIDType_148);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubIDType_148.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_2_2_0.addGroup(noInstrumentPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149;
          FIX::InstrumentPartySubID InstrumentPartySubID_149("STRING_514915567");
          noInstrumentPartySubIDs_2_2_0_3_1.set(InstrumentPartySubID_149);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubID_149.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_149(922067511);
          noInstrumentPartySubIDs_2_2_0_3_1.set(InstrumentPartySubIDType_149);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubIDType_149.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_2_2_0.addGroup(noInstrumentPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150;
          FIX::InstrumentPartySubID InstrumentPartySubID_150("STRING_39452468");
          noInstrumentPartySubIDs_2_2_0_3_2.set(InstrumentPartySubID_150);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubID_150.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_150(419122406);
          noInstrumentPartySubIDs_2_2_0_3_2.set(InstrumentPartySubIDType_150);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubIDType_150.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_2_2_0.addGroup(noInstrumentPartySubIDs_2_2_0_3_2);
        }
        noQuoteEntries_2_1_2.addGroup(noInstrumentParties_2_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_77;
        FIX::InstrumentPartyID InstrumentPartyID_77("STRING_1563797773");
        noInstrumentParties_2_2_2_1.set(InstrumentPartyID_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyID_77.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_77('2');
        noInstrumentParties_2_2_2_1.set(InstrumentPartyIDSource_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyIDSource_77.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_77(1495208132);
        noInstrumentParties_2_2_2_1.set(InstrumentPartyRole_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyRole_77.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_77);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151;
          FIX::InstrumentPartySubID InstrumentPartySubID_151("STRING_1149153670");
          noInstrumentPartySubIDs_2_2_1_3_0.set(InstrumentPartySubID_151);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubID_151.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_151(1564705640);
          noInstrumentPartySubIDs_2_2_1_3_0.set(InstrumentPartySubIDType_151);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubIDType_151.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_2_2_1.addGroup(noInstrumentPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152;
          FIX::InstrumentPartySubID InstrumentPartySubID_152("STRING_449063782");
          noInstrumentPartySubIDs_2_2_1_3_1.set(InstrumentPartySubID_152);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubID_152.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_152(296183201);
          noInstrumentPartySubIDs_2_2_1_3_1.set(InstrumentPartySubIDType_152);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152.insert(InstrumentPartySubIDType_152.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_2_2_2_1.addGroup(noInstrumentPartySubIDs_2_2_1_3_1);
        }
        noQuoteEntries_2_1_2.addGroup(noInstrumentParties_2_2_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_70;
        FIX::SecurityAltID SecurityAltID_70("STRING_1885901639");
        noSecurityAltID_2_2_2_0.set(SecurityAltID_70);
        SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltID_70.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_70("STRING_659326089");
        noSecurityAltID_2_2_2_0.set(SecurityAltIDSource_70);
        SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltIDSource_70.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_70);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noQuoteEntries_2_1_2.addGroup(noSecurityAltID_2_2_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_78;
      FIX::SecurityXML SecurityXML_79("XMLDATA_1265009560");
      noQuoteEntries_2_1_2.set(SecurityXML_79);
      FIX::SecurityXMLLen SecurityXMLLen_39(1204760244);
      noQuoteEntries_2_1_2.set(SecurityXMLLen_39);
      FIX::SecurityXMLSchema SecurityXMLSchema_39("STRING_52867980");
      noQuoteEntries_2_1_2.set(SecurityXMLSchema_39);
      SecurityXML_78.insert(SecurityXMLSchema_39.getString());
      all_values.push_back(SecurityXML_78);
      all_compo_names.insert("SecurityXML");

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_56;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_56("DATA_1463244929");
    noQuoteSets_0_2.set(EncodedUnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuer_56.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_56(1330847209);
    noQuoteSets_0_2.set(EncodedUnderlyingIssuerLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuerLen_56.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_56("DATA_395417131");
    noQuoteSets_0_2.set(EncodedUnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDesc_56.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_56(188289499);
    noQuoteSets_0_2.set(EncodedUnderlyingSecurityDescLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDescLen_56.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_56;
    UnderlyingAdjustedQuantity_56.setString("10620183");
    noQuoteSets_0_2.set(UnderlyingAdjustedQuantity_56);
    UnderlyingInstrument_56.insert(UnderlyingAdjustedQuantity_56.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_56;
    UnderlyingAllocationPercent_56.setString("42.470000");
    noQuoteSets_0_2.set(UnderlyingAllocationPercent_56);
    UnderlyingInstrument_56.insert(UnderlyingAllocationPercent_56.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_56;
    UnderlyingAttachmentPoint_56.setString("16.130000");
    noQuoteSets_0_2.set(UnderlyingAttachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingAttachmentPoint_56.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_56("STRING_2087311234");
    noQuoteSets_0_2.set(UnderlyingCFICode_56);
    UnderlyingInstrument_56.insert(UnderlyingCFICode_56.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_56("STRING_48369968");
    noQuoteSets_0_2.set(UnderlyingCPProgram_56);
    UnderlyingInstrument_56.insert(UnderlyingCPProgram_56.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_56("STRING_534184185");
    noQuoteSets_0_2.set(UnderlyingCPRegType_56);
    UnderlyingInstrument_56.insert(UnderlyingCPRegType_56.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_56;
    UnderlyingCapValue_56.setString("20704369");
    noQuoteSets_0_2.set(UnderlyingCapValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCapValue_56.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_56;
    UnderlyingCashAmount_56.setString("2246358");
    noQuoteSets_0_2.set(UnderlyingCashAmount_56);
    UnderlyingInstrument_56.insert(UnderlyingCashAmount_56.getString());
    FIX::UnderlyingCashType UnderlyingCashType_56("STRING_DIFF");
    noQuoteSets_0_2.set(UnderlyingCashType_56);
    UnderlyingInstrument_56.insert(UnderlyingCashType_56.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_56;
    UnderlyingContractMultiplier_56.setString("4378688");
    noQuoteSets_0_2.set(UnderlyingContractMultiplier_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplier_56.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_56(1146703325);
    noQuoteSets_0_2.set(UnderlyingContractMultiplierUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplierUnit_56.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_56("COUNTRY_1365921543");
    noQuoteSets_0_2.set(UnderlyingCountryOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingCountryOfIssue_56.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_56("LOCALMKTDATE_856991283");
    noQuoteSets_0_2.set(UnderlyingCouponPaymentDate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponPaymentDate_56.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_56;
    UnderlyingCouponRate_56.setString("74.510000");
    noQuoteSets_0_2.set(UnderlyingCouponRate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponRate_56.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_56("STRING_1601629707");
    noQuoteSets_0_2.set(UnderlyingCreditRating_56);
    UnderlyingInstrument_56.insert(UnderlyingCreditRating_56.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_56("EUR");
    noQuoteSets_0_2.set(UnderlyingCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrency_56.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_56;
    UnderlyingCurrentValue_56.setString("6032997");
    noQuoteSets_0_2.set(UnderlyingCurrentValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrentValue_56.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_56;
    UnderlyingDetachmentPoint_56.setString("14.070000");
    noQuoteSets_0_2.set(UnderlyingDetachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingDetachmentPoint_56.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_56;
    UnderlyingDirtyPrice_56.setString("6286467");
    noQuoteSets_0_2.set(UnderlyingDirtyPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingDirtyPrice_56.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_56;
    UnderlyingEndPrice_56.setString("8994829");
    noQuoteSets_0_2.set(UnderlyingEndPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingEndPrice_56.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_56;
    UnderlyingEndValue_56.setString("19562873");
    noQuoteSets_0_2.set(UnderlyingEndValue_56);
    UnderlyingInstrument_56.insert(UnderlyingEndValue_56.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_56(367064781);
    noQuoteSets_0_2.set(UnderlyingExerciseStyle_56);
    UnderlyingInstrument_56.insert(UnderlyingExerciseStyle_56.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_56;
    UnderlyingFXRate_56.setString("15588090");
    noQuoteSets_0_2.set(UnderlyingFXRate_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRate_56.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_56('M');
    noQuoteSets_0_2.set(UnderlyingFXRateCalc_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRateCalc_56.getString());
    FIX::UnderlyingFactor UnderlyingFactor_56;
    UnderlyingFactor_56.setString("15718250");
    noQuoteSets_0_2.set(UnderlyingFactor_56);
    UnderlyingInstrument_56.insert(UnderlyingFactor_56.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_56(1611676999);
    noQuoteSets_0_2.set(UnderlyingFlowScheduleType_56);
    UnderlyingInstrument_56.insert(UnderlyingFlowScheduleType_56.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_56("STRING_389574530");
    noQuoteSets_0_2.set(UnderlyingInstrRegistry_56);
    UnderlyingInstrument_56.insert(UnderlyingInstrRegistry_56.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_56("LOCALMKTDATE_755188586");
    noQuoteSets_0_2.set(UnderlyingIssueDate_56);
    UnderlyingInstrument_56.insert(UnderlyingIssueDate_56.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_56("STRING_2007094130");
    noQuoteSets_0_2.set(UnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(UnderlyingIssuer_56.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_56("STRING_577864029");
    noQuoteSets_0_2.set(UnderlyingLocaleOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingLocaleOfIssue_56.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_56("LOCALMKTDATE_1817206911");
    noQuoteSets_0_2.set(UnderlyingMaturityDate_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityDate_56.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_56("MONTHYEAR_332154730");
    noQuoteSets_0_2.set(UnderlyingMaturityMonthYear_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityMonthYear_56.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_56("TZTIMEONLY_1749815642");
    noQuoteSets_0_2.set(UnderlyingMaturityTime_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityTime_56.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_56;
    UnderlyingNotionalPercentageOutstanding_56.setString("44.970000");
    noQuoteSets_0_2.set(UnderlyingNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_56('3');
    noQuoteSets_0_2.set(UnderlyingOptAttribute_56);
    UnderlyingInstrument_56.insert(UnderlyingOptAttribute_56.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_56;
    UnderlyingOriginalNotionalPercentageOutstanding_56.setString("61.790000");
    noQuoteSets_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingOriginalNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_56("STRING_1679987806");
    noQuoteSets_0_2.set(UnderlyingPriceUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasure_56.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_56;
    UnderlyingPriceUnitOfMeasureQty_56.setString("6051605");
    noQuoteSets_0_2.set(UnderlyingPriceUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasureQty_56.getString());
    FIX::UnderlyingProduct UnderlyingProduct_56(1462985255);
    noQuoteSets_0_2.set(UnderlyingProduct_56);
    UnderlyingInstrument_56.insert(UnderlyingProduct_56.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_56(2117856683);
    noQuoteSets_0_2.set(UnderlyingPutOrCall_56);
    UnderlyingInstrument_56.insert(UnderlyingPutOrCall_56.getString());
    FIX::UnderlyingPx UnderlyingPx_56;
    UnderlyingPx_56.setString("17518638");
    noQuoteSets_0_2.set(UnderlyingPx_56);
    UnderlyingInstrument_56.insert(UnderlyingPx_56.getString());
    FIX::UnderlyingQty UnderlyingQty_56;
    UnderlyingQty_56.setString("6814231");
    noQuoteSets_0_2.set(UnderlyingQty_56);
    UnderlyingInstrument_56.insert(UnderlyingQty_56.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_56("LOCALMKTDATE_827364318");
    noQuoteSets_0_2.set(UnderlyingRedemptionDate_56);
    UnderlyingInstrument_56.insert(UnderlyingRedemptionDate_56.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_56("STRING_167397641");
    noQuoteSets_0_2.set(UnderlyingRepoCollateralSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingRepoCollateralSecurityType_56.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_56;
    UnderlyingRepurchaseRate_56.setString("92.090000");
    noQuoteSets_0_2.set(UnderlyingRepurchaseRate_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseRate_56.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_56(1032080085);
    noQuoteSets_0_2.set(UnderlyingRepurchaseTerm_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseTerm_56.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_56("STRING_346980648");
    noQuoteSets_0_2.set(UnderlyingRestructuringType_56);
    UnderlyingInstrument_56.insert(UnderlyingRestructuringType_56.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_56("STRING_738868938");
    noQuoteSets_0_2.set(UnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityDesc_56.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_56("EXCHANGE_654017844");
    noQuoteSets_0_2.set(UnderlyingSecurityExchange_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityExchange_56.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_56("STRING_975627438");
    noQuoteSets_0_2.set(UnderlyingSecurityID_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityID_56.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_56("STRING_1638351868");
    noQuoteSets_0_2.set(UnderlyingSecurityIDSource_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityIDSource_56.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_56("STRING_462821533");
    noQuoteSets_0_2.set(UnderlyingSecuritySubType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecuritySubType_56.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_56("STRING_1342692219");
    noQuoteSets_0_2.set(UnderlyingSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityType_56.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_56("STRING_1049677240");
    noQuoteSets_0_2.set(UnderlyingSeniority_56);
    UnderlyingInstrument_56.insert(UnderlyingSeniority_56.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_56("STRING_1536634783");
    noQuoteSets_0_2.set(UnderlyingSettlMethod_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlMethod_56.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_56(4);
    noQuoteSets_0_2.set(UnderlyingSettlementType_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlementType_56.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_56;
    UnderlyingStartValue_56.setString("5138705");
    noQuoteSets_0_2.set(UnderlyingStartValue_56);
    UnderlyingInstrument_56.insert(UnderlyingStartValue_56.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_56("STRING_1926209313");
    noQuoteSets_0_2.set(UnderlyingStateOrProvinceOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingStateOrProvinceOfIssue_56.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_56("JPY");
    noQuoteSets_0_2.set(UnderlyingStrikeCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikeCurrency_56.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_56;
    UnderlyingStrikePrice_56.setString("3565896");
    noQuoteSets_0_2.set(UnderlyingStrikePrice_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikePrice_56.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_56("STRING_1191945445");
    noQuoteSets_0_2.set(UnderlyingSymbol_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbol_56.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_56("STRING_705635804");
    noQuoteSets_0_2.set(UnderlyingSymbolSfx_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbolSfx_56.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_56("STRING_2106405337");
    noQuoteSets_0_2.set(UnderlyingTimeUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingTimeUnit_56.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_56("STRING_801496294");
    noQuoteSets_0_2.set(UnderlyingUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasure_56.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_56;
    UnderlyingUnitOfMeasureQty_56.setString("10861605");
    noQuoteSets_0_2.set(UnderlyingUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasureQty_56.getString());
    all_values.push_back(UnderlyingInstrument_56);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_116;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_116("STRING_334000453");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltID_116.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_116("STRING_1691321015");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltIDSource_116.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_109;
      FIX::UnderlyingStipType UnderlyingStipType_109("STRING_304373488");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_109);
      UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipType_109.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_109("STRING_1295701205");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_109);
      UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipValue_109.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_109);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_110;
      FIX::UnderlyingStipType UnderlyingStipType_110("STRING_92362626");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_110);
      UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipType_110.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_110("STRING_1131737806");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_110);
      UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipValue_110.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_110);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_111;
      FIX::UnderlyingStipType UnderlyingStipType_111("STRING_1463098846");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_111);
      UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipType_111.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_111("STRING_227931836");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_111);
      UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipValue_111.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_111);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_105;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_105("STRING_1810079494");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_105);
      UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyID_105.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_105('9');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_105);
      UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyIDSource_105.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_105(670352087);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_105);
      UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyRole_105.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_105);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_207("STRING_457668995");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_207);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207.insert(UnderlyingInstrumentPartySubID_207.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_207(1133173621);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_207);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207.insert(UnderlyingInstrumentPartySubIDType_207.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_208("STRING_1980915503");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_208);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208.insert(UnderlyingInstrumentPartySubID_208.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_208(1507346235);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_208);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208.insert(UnderlyingInstrumentPartySubIDType_208.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_209("STRING_522324756");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_209);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209.insert(UnderlyingInstrumentPartySubID_209.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_209(600465451);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_209);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209.insert(UnderlyingInstrumentPartySubIDType_209.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_106;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_106("STRING_2021216826");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyID_106.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_106('3');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyIDSource_106.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_106(2122687634);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_106);
      UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyRole_106.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_106);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_210("STRING_657640116");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_210);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210.insert(UnderlyingInstrumentPartySubID_210.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_210(1167149431);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_210);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210.insert(UnderlyingInstrumentPartySubIDType_210.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_211("STRING_952850056");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_211);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211.insert(UnderlyingInstrumentPartySubID_211.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_211(616561806);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_211);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211.insert(UnderlyingInstrumentPartySubIDType_211.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_212("STRING_1968645726");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_212);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212.insert(UnderlyingInstrumentPartySubID_212.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_212(2039010559);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_212);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212.insert(UnderlyingInstrumentPartySubIDType_212.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_107;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_107("STRING_711999675");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyID_107.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_107('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyIDSource_107.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_107(1582847926);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_107);
      UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyRole_107.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_107);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_213("STRING_459536019");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_213);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213.insert(UnderlyingInstrumentPartySubID_213.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_213(731065483);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_213);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213.insert(UnderlyingInstrumentPartySubIDType_213.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noQuoteSets_0_2);
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
