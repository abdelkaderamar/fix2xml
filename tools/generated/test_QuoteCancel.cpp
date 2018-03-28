#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteCancel.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteCancel, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteCancel msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteCancel_0;
  FIX::Account Account_28("STRING_184390810");
  msg.set(Account_28);
  QuoteCancel_0.insert(Account_28.getString());
  FIX::AccountType AccountType_25(6);
  msg.set(AccountType_25);
  QuoteCancel_0.insert(AccountType_25.getString());
  FIX::AcctIDSource AcctIDSource_21(3);
  msg.set(AcctIDSource_21);
  QuoteCancel_0.insert(AcctIDSource_21.getString());
  FIX::QuoteCancelType QuoteCancelType_1(5);
  msg.set(QuoteCancelType_1);
  QuoteCancel_0.insert(QuoteCancelType_1.getString());
  FIX::QuoteID QuoteID_10("STRING_184254745");
  msg.set(QuoteID_10);
  QuoteCancel_0.insert(QuoteID_10.getString());
  FIX::QuoteMsgID QuoteMsgID_1("STRING_1129561216");
  msg.set(QuoteMsgID_1);
  QuoteCancel_0.insert(QuoteMsgID_1.getString());
  FIX::QuoteReqID QuoteReqID_3("STRING_78919419");
  msg.set(QuoteReqID_3);
  QuoteCancel_0.insert(QuoteReqID_3.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_3(0);
  msg.set(QuoteResponseLevel_3);
  QuoteCancel_0.insert(QuoteResponseLevel_3.getString());
  FIX::QuoteType QuoteType_5(2);
  msg.set(QuoteType_5);
  QuoteCancel_0.insert(QuoteType_5.getString());
  FIX::TradingSessionID TradingSessionID_62("STRING_4");
  msg.set(TradingSessionID_62);
  QuoteCancel_0.insert(TradingSessionID_62.getString());
  FIX::TradingSessionSubID TradingSessionSubID_62("STRING_6");
  msg.set(TradingSessionSubID_62);
  QuoteCancel_0.insert(TradingSessionSubID_62.getString());
  all_values.push_back(QuoteCancel_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_95;
    FIX::PartyID PartyID_95("STRING_1095487035");
    noPartyIDs_0_0.set(PartyID_95);
    Parties_NoPartyIDs_95.insert(PartyID_95.getString());
    FIX::PartyIDSource PartyIDSource_95('C');
    noPartyIDs_0_0.set(PartyIDSource_95);
    Parties_NoPartyIDs_95.insert(PartyIDSource_95.getString());
    FIX::PartyRole PartyRole_95(21);
    noPartyIDs_0_0.set(PartyRole_95);
    Parties_NoPartyIDs_95.insert(PartyRole_95.getString());
    all_values.push_back(Parties_NoPartyIDs_95);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_197;
      FIX::PartySubID PartySubID_197("STRING_1498956063");
      noPartySubIDs_0_1_0.set(PartySubID_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubID_197.getString());
      FIX::PartySubIDType PartySubIDType_197(20);
      noPartySubIDs_0_1_0.set(PartySubIDType_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubIDType_197.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_197);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_198;
      FIX::PartySubID PartySubID_198("STRING_363506749");
      noPartySubIDs_0_1_1.set(PartySubID_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubID_198.getString());
      FIX::PartySubIDType PartySubIDType_198(22);
      noPartySubIDs_0_1_1.set(PartySubIDType_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubIDType_198.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_198);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_96;
    FIX::PartyID PartyID_96("STRING_1013568370");
    noPartyIDs_0_1.set(PartyID_96);
    Parties_NoPartyIDs_96.insert(PartyID_96.getString());
    FIX::PartyIDSource PartyIDSource_96('3');
    noPartyIDs_0_1.set(PartyIDSource_96);
    Parties_NoPartyIDs_96.insert(PartyIDSource_96.getString());
    FIX::PartyRole PartyRole_96(68);
    noPartyIDs_0_1.set(PartyRole_96);
    Parties_NoPartyIDs_96.insert(PartyRole_96.getString());
    all_values.push_back(Parties_NoPartyIDs_96);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_199;
      FIX::PartySubID PartySubID_199("STRING_1870340871");
      noPartySubIDs_1_1_0.set(PartySubID_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubID_199.getString());
      FIX::PartySubIDType PartySubIDType_199(32);
      noPartySubIDs_1_1_0.set(PartySubIDType_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubIDType_199.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_199);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_97;
    FIX::PartyID PartyID_97("STRING_1773843380");
    noPartyIDs_0_2.set(PartyID_97);
    Parties_NoPartyIDs_97.insert(PartyID_97.getString());
    FIX::PartyIDSource PartyIDSource_97('9');
    noPartyIDs_0_2.set(PartyIDSource_97);
    Parties_NoPartyIDs_97.insert(PartyIDSource_97.getString());
    FIX::PartyRole PartyRole_97(34);
    noPartyIDs_0_2.set(PartyRole_97);
    Parties_NoPartyIDs_97.insert(PartyRole_97.getString());
    all_values.push_back(Parties_NoPartyIDs_97);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_200;
      FIX::PartySubID PartySubID_200("STRING_1614705997");
      noPartySubIDs_2_1_0.set(PartySubID_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubID_200.getString());
      FIX::PartySubIDType PartySubIDType_200(2);
      noPartySubIDs_2_1_0.set(PartySubIDType_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubIDType_200.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_200);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_201;
      FIX::PartySubID PartySubID_201("STRING_1170831893");
      noPartySubIDs_2_1_1.set(PartySubID_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubID_201.getString());
      FIX::PartySubIDType PartySubIDType_201(16);
      noPartySubIDs_2_1_1.set(PartySubIDType_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubIDType_201.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_201);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_202;
      FIX::PartySubID PartySubID_202("STRING_353211846");
      noPartySubIDs_2_1_2.set(PartySubID_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubID_202.getString());
      FIX::PartySubIDType PartySubIDType_202(17);
      noPartySubIDs_2_1_2.set(PartySubIDType_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubIDType_202.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_202);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotCxlEntriesGrp
  // Group QuotCxlEntriesGrp.NoQuoteEntries
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_0;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_17;
    FIX::AgreementCurrency AgreementCurrency_17("CHF");
    noQuoteEntries_0_0.set(AgreementCurrency_17);
    FinancingDetails_17.insert(AgreementCurrency_17.getString());
    FIX::AgreementDate AgreementDate_17("LOCALMKTDATE_151700554");
    noQuoteEntries_0_0.set(AgreementDate_17);
    FinancingDetails_17.insert(AgreementDate_17.getString());
    FIX::AgreementDesc AgreementDesc_17("STRING_1672326505");
    noQuoteEntries_0_0.set(AgreementDesc_17);
    FinancingDetails_17.insert(AgreementDesc_17.getString());
    FIX::AgreementID AgreementID_17("STRING_827868012");
    noQuoteEntries_0_0.set(AgreementID_17);
    FinancingDetails_17.insert(AgreementID_17.getString());
    FIX::DeliveryType DeliveryType_17(2);
    noQuoteEntries_0_0.set(DeliveryType_17);
    FinancingDetails_17.insert(DeliveryType_17.getString());
    FIX::EndDate EndDate_17("LOCALMKTDATE_620329892");
    noQuoteEntries_0_0.set(EndDate_17);
    FinancingDetails_17.insert(EndDate_17.getString());
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("3.250000");
    noQuoteEntries_0_0.set(MarginRatio_17);
    FinancingDetails_17.insert(MarginRatio_17.getString());
    FIX::StartDate StartDate_17("LOCALMKTDATE_411289890");
    noQuoteEntries_0_0.set(StartDate_17);
    FinancingDetails_17.insert(StartDate_17.getString());
    FIX::TerminationType TerminationType_17(3);
    noQuoteEntries_0_0.set(TerminationType_17);
    FinancingDetails_17.insert(TerminationType_17.getString());
    all_values.push_back(FinancingDetails_17);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_98;
      FIX::EncodedLegIssuer EncodedLegIssuer_98("DATA_955325830");
      noLegs_0_1_0.set(EncodedLegIssuer_98);
      InstrumentLeg_98.insert(EncodedLegIssuer_98.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_98(1901653235);
      noLegs_0_1_0.set(EncodedLegIssuerLen_98);
      InstrumentLeg_98.insert(EncodedLegIssuerLen_98.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_98("DATA_1595035818");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_98);
      InstrumentLeg_98.insert(EncodedLegSecurityDesc_98.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_98(1968894200);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_98);
      InstrumentLeg_98.insert(EncodedLegSecurityDescLen_98.getString());
      FIX::LegCFICode LegCFICode_98("STRING_1972399992");
      noLegs_0_1_0.set(LegCFICode_98);
      InstrumentLeg_98.insert(LegCFICode_98.getString());
      FIX::LegContractMultiplier LegContractMultiplier_98;
      LegContractMultiplier_98.setString("19004611");
      noLegs_0_1_0.set(LegContractMultiplier_98);
      InstrumentLeg_98.insert(LegContractMultiplier_98.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_98(242745187);
      noLegs_0_1_0.set(LegContractMultiplierUnit_98);
      InstrumentLeg_98.insert(LegContractMultiplierUnit_98.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_98("MONTHYEAR_1695257215");
      noLegs_0_1_0.set(LegContractSettlMonth_98);
      InstrumentLeg_98.insert(LegContractSettlMonth_98.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_98("COUNTRY_1611127107");
      noLegs_0_1_0.set(LegCountryOfIssue_98);
      InstrumentLeg_98.insert(LegCountryOfIssue_98.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_98("LOCALMKTDATE_2016588567");
      noLegs_0_1_0.set(LegCouponPaymentDate_98);
      InstrumentLeg_98.insert(LegCouponPaymentDate_98.getString());
      FIX::LegCouponRate LegCouponRate_98;
      LegCouponRate_98.setString("18.640000");
      noLegs_0_1_0.set(LegCouponRate_98);
      InstrumentLeg_98.insert(LegCouponRate_98.getString());
      FIX::LegCreditRating LegCreditRating_98("STRING_1516078155");
      noLegs_0_1_0.set(LegCreditRating_98);
      InstrumentLeg_98.insert(LegCreditRating_98.getString());
      FIX::LegCurrency LegCurrency_98("EUR");
      noLegs_0_1_0.set(LegCurrency_98);
      InstrumentLeg_98.insert(LegCurrency_98.getString());
      FIX::LegDatedDate LegDatedDate_98("LOCALMKTDATE_1605420013");
      noLegs_0_1_0.set(LegDatedDate_98);
      InstrumentLeg_98.insert(LegDatedDate_98.getString());
      FIX::LegExerciseStyle LegExerciseStyle_98(1557980496);
      noLegs_0_1_0.set(LegExerciseStyle_98);
      InstrumentLeg_98.insert(LegExerciseStyle_98.getString());
      FIX::LegFactor LegFactor_98;
      LegFactor_98.setString("5625470");
      noLegs_0_1_0.set(LegFactor_98);
      InstrumentLeg_98.insert(LegFactor_98.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_98(1958631860);
      noLegs_0_1_0.set(LegFlowScheduleType_98);
      InstrumentLeg_98.insert(LegFlowScheduleType_98.getString());
      FIX::LegInstrRegistry LegInstrRegistry_98("STRING_765583487");
      noLegs_0_1_0.set(LegInstrRegistry_98);
      InstrumentLeg_98.insert(LegInstrRegistry_98.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_98("LOCALMKTDATE_1592971028");
      noLegs_0_1_0.set(LegInterestAccrualDate_98);
      InstrumentLeg_98.insert(LegInterestAccrualDate_98.getString());
      FIX::LegIssueDate LegIssueDate_98("LOCALMKTDATE_243279478");
      noLegs_0_1_0.set(LegIssueDate_98);
      InstrumentLeg_98.insert(LegIssueDate_98.getString());
      FIX::LegIssuer LegIssuer_98("STRING_1079610446");
      noLegs_0_1_0.set(LegIssuer_98);
      InstrumentLeg_98.insert(LegIssuer_98.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_98("STRING_1744671582");
      noLegs_0_1_0.set(LegLocaleOfIssue_98);
      InstrumentLeg_98.insert(LegLocaleOfIssue_98.getString());
      FIX::LegMaturityDate LegMaturityDate_98("LOCALMKTDATE_1915605983");
      noLegs_0_1_0.set(LegMaturityDate_98);
      InstrumentLeg_98.insert(LegMaturityDate_98.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_98("MONTHYEAR_1907478459");
      noLegs_0_1_0.set(LegMaturityMonthYear_98);
      InstrumentLeg_98.insert(LegMaturityMonthYear_98.getString());
      FIX::LegMaturityTime LegMaturityTime_98("TZTIMEONLY_748107172");
      noLegs_0_1_0.set(LegMaturityTime_98);
      InstrumentLeg_98.insert(LegMaturityTime_98.getString());
      FIX::LegOptAttribute LegOptAttribute_98('3');
      noLegs_0_1_0.set(LegOptAttribute_98);
      InstrumentLeg_98.insert(LegOptAttribute_98.getString());
      FIX::LegOptionRatio LegOptionRatio_98;
      LegOptionRatio_98.setString("20910587");
      noLegs_0_1_0.set(LegOptionRatio_98);
      InstrumentLeg_98.insert(LegOptionRatio_98.getString());
      FIX::LegPool LegPool_98("STRING_1159397062");
      noLegs_0_1_0.set(LegPool_98);
      InstrumentLeg_98.insert(LegPool_98.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_98("STRING_1926598713");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_98);
      InstrumentLeg_98.insert(LegPriceUnitOfMeasure_98.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
      LegPriceUnitOfMeasureQty_98.setString("16261115");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_98);
      InstrumentLeg_98.insert(LegPriceUnitOfMeasureQty_98.getString());
      FIX::LegProduct LegProduct_98(2114722892);
      noLegs_0_1_0.set(LegProduct_98);
      InstrumentLeg_98.insert(LegProduct_98.getString());
      FIX::LegPutOrCall LegPutOrCall_98(1680768301);
      noLegs_0_1_0.set(LegPutOrCall_98);
      InstrumentLeg_98.insert(LegPutOrCall_98.getString());
      FIX::LegRatioQty LegRatioQty_98;
      LegRatioQty_98.setString("10736636");
      noLegs_0_1_0.set(LegRatioQty_98);
      InstrumentLeg_98.insert(LegRatioQty_98.getString());
      FIX::LegRedemptionDate LegRedemptionDate_98("LOCALMKTDATE_1936133445");
      noLegs_0_1_0.set(LegRedemptionDate_98);
      InstrumentLeg_98.insert(LegRedemptionDate_98.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_98("STRING_1505684645");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_98);
      InstrumentLeg_98.insert(LegRepoCollateralSecurityType_98.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_98;
      LegRepurchaseRate_98.setString("11.900000");
      noLegs_0_1_0.set(LegRepurchaseRate_98);
      InstrumentLeg_98.insert(LegRepurchaseRate_98.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_98(31394984);
      noLegs_0_1_0.set(LegRepurchaseTerm_98);
      InstrumentLeg_98.insert(LegRepurchaseTerm_98.getString());
      FIX::LegSecurityDesc LegSecurityDesc_98("STRING_1053458213");
      noLegs_0_1_0.set(LegSecurityDesc_98);
      InstrumentLeg_98.insert(LegSecurityDesc_98.getString());
      FIX::LegSecurityExchange LegSecurityExchange_98("EXCHANGE_290284649");
      noLegs_0_1_0.set(LegSecurityExchange_98);
      InstrumentLeg_98.insert(LegSecurityExchange_98.getString());
      FIX::LegSecurityID LegSecurityID_98("STRING_2047983551");
      noLegs_0_1_0.set(LegSecurityID_98);
      InstrumentLeg_98.insert(LegSecurityID_98.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_98("STRING_100436429");
      noLegs_0_1_0.set(LegSecurityIDSource_98);
      InstrumentLeg_98.insert(LegSecurityIDSource_98.getString());
      FIX::LegSecuritySubType LegSecuritySubType_98("STRING_1806362804");
      noLegs_0_1_0.set(LegSecuritySubType_98);
      InstrumentLeg_98.insert(LegSecuritySubType_98.getString());
      FIX::LegSecurityType LegSecurityType_98("STRING_287648506");
      noLegs_0_1_0.set(LegSecurityType_98);
      InstrumentLeg_98.insert(LegSecurityType_98.getString());
      FIX::LegSide LegSide_98('7');
      noLegs_0_1_0.set(LegSide_98);
      InstrumentLeg_98.insert(LegSide_98.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_98("STRING_1264299170");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_98);
      InstrumentLeg_98.insert(LegStateOrProvinceOfIssue_98.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_98("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_98);
      InstrumentLeg_98.insert(LegStrikeCurrency_98.getString());
      FIX::LegStrikePrice LegStrikePrice_98;
      LegStrikePrice_98.setString("10754473");
      noLegs_0_1_0.set(LegStrikePrice_98);
      InstrumentLeg_98.insert(LegStrikePrice_98.getString());
      FIX::LegSymbol LegSymbol_98("STRING_463728842");
      noLegs_0_1_0.set(LegSymbol_98);
      InstrumentLeg_98.insert(LegSymbol_98.getString());
      FIX::LegSymbolSfx LegSymbolSfx_98("STRING_770155035");
      noLegs_0_1_0.set(LegSymbolSfx_98);
      InstrumentLeg_98.insert(LegSymbolSfx_98.getString());
      FIX::LegTimeUnit LegTimeUnit_98("STRING_1318726860");
      noLegs_0_1_0.set(LegTimeUnit_98);
      InstrumentLeg_98.insert(LegTimeUnit_98.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_98("STRING_1543339289");
      noLegs_0_1_0.set(LegUnitOfMeasure_98);
      InstrumentLeg_98.insert(LegUnitOfMeasure_98.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
      LegUnitOfMeasureQty_98.setString("3673429");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_98);
      InstrumentLeg_98.insert(LegUnitOfMeasureQty_98.getString());
      all_values.push_back(InstrumentLeg_98);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
        FIX::LegSecurityAltID LegSecurityAltID_192("STRING_1303334100");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_192);
        LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltID_192.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_192("STRING_1115450141");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_192);
        LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltIDSource_192.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_99;
      FIX::EncodedLegIssuer EncodedLegIssuer_99("DATA_1475301422");
      noLegs_0_1_1.set(EncodedLegIssuer_99);
      InstrumentLeg_99.insert(EncodedLegIssuer_99.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_99(1246909236);
      noLegs_0_1_1.set(EncodedLegIssuerLen_99);
      InstrumentLeg_99.insert(EncodedLegIssuerLen_99.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_99("DATA_127363555");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_99);
      InstrumentLeg_99.insert(EncodedLegSecurityDesc_99.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_99(1254416488);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_99);
      InstrumentLeg_99.insert(EncodedLegSecurityDescLen_99.getString());
      FIX::LegCFICode LegCFICode_99("STRING_725537112");
      noLegs_0_1_1.set(LegCFICode_99);
      InstrumentLeg_99.insert(LegCFICode_99.getString());
      FIX::LegContractMultiplier LegContractMultiplier_99;
      LegContractMultiplier_99.setString("946028");
      noLegs_0_1_1.set(LegContractMultiplier_99);
      InstrumentLeg_99.insert(LegContractMultiplier_99.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_99(787701141);
      noLegs_0_1_1.set(LegContractMultiplierUnit_99);
      InstrumentLeg_99.insert(LegContractMultiplierUnit_99.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_99("MONTHYEAR_1799200806");
      noLegs_0_1_1.set(LegContractSettlMonth_99);
      InstrumentLeg_99.insert(LegContractSettlMonth_99.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_99("COUNTRY_2030736245");
      noLegs_0_1_1.set(LegCountryOfIssue_99);
      InstrumentLeg_99.insert(LegCountryOfIssue_99.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_99("LOCALMKTDATE_145902138");
      noLegs_0_1_1.set(LegCouponPaymentDate_99);
      InstrumentLeg_99.insert(LegCouponPaymentDate_99.getString());
      FIX::LegCouponRate LegCouponRate_99;
      LegCouponRate_99.setString("83.480000");
      noLegs_0_1_1.set(LegCouponRate_99);
      InstrumentLeg_99.insert(LegCouponRate_99.getString());
      FIX::LegCreditRating LegCreditRating_99("STRING_2062131229");
      noLegs_0_1_1.set(LegCreditRating_99);
      InstrumentLeg_99.insert(LegCreditRating_99.getString());
      FIX::LegCurrency LegCurrency_99("GBP");
      noLegs_0_1_1.set(LegCurrency_99);
      InstrumentLeg_99.insert(LegCurrency_99.getString());
      FIX::LegDatedDate LegDatedDate_99("LOCALMKTDATE_1962631132");
      noLegs_0_1_1.set(LegDatedDate_99);
      InstrumentLeg_99.insert(LegDatedDate_99.getString());
      FIX::LegExerciseStyle LegExerciseStyle_99(1299796781);
      noLegs_0_1_1.set(LegExerciseStyle_99);
      InstrumentLeg_99.insert(LegExerciseStyle_99.getString());
      FIX::LegFactor LegFactor_99;
      LegFactor_99.setString("4275221");
      noLegs_0_1_1.set(LegFactor_99);
      InstrumentLeg_99.insert(LegFactor_99.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_99(102795991);
      noLegs_0_1_1.set(LegFlowScheduleType_99);
      InstrumentLeg_99.insert(LegFlowScheduleType_99.getString());
      FIX::LegInstrRegistry LegInstrRegistry_99("STRING_2061917424");
      noLegs_0_1_1.set(LegInstrRegistry_99);
      InstrumentLeg_99.insert(LegInstrRegistry_99.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_99("LOCALMKTDATE_1691821324");
      noLegs_0_1_1.set(LegInterestAccrualDate_99);
      InstrumentLeg_99.insert(LegInterestAccrualDate_99.getString());
      FIX::LegIssueDate LegIssueDate_99("LOCALMKTDATE_1948424994");
      noLegs_0_1_1.set(LegIssueDate_99);
      InstrumentLeg_99.insert(LegIssueDate_99.getString());
      FIX::LegIssuer LegIssuer_99("STRING_1239101431");
      noLegs_0_1_1.set(LegIssuer_99);
      InstrumentLeg_99.insert(LegIssuer_99.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_99("STRING_619785058");
      noLegs_0_1_1.set(LegLocaleOfIssue_99);
      InstrumentLeg_99.insert(LegLocaleOfIssue_99.getString());
      FIX::LegMaturityDate LegMaturityDate_99("LOCALMKTDATE_264670188");
      noLegs_0_1_1.set(LegMaturityDate_99);
      InstrumentLeg_99.insert(LegMaturityDate_99.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_99("MONTHYEAR_2009256467");
      noLegs_0_1_1.set(LegMaturityMonthYear_99);
      InstrumentLeg_99.insert(LegMaturityMonthYear_99.getString());
      FIX::LegMaturityTime LegMaturityTime_99("TZTIMEONLY_1938511918");
      noLegs_0_1_1.set(LegMaturityTime_99);
      InstrumentLeg_99.insert(LegMaturityTime_99.getString());
      FIX::LegOptAttribute LegOptAttribute_99('1');
      noLegs_0_1_1.set(LegOptAttribute_99);
      InstrumentLeg_99.insert(LegOptAttribute_99.getString());
      FIX::LegOptionRatio LegOptionRatio_99;
      LegOptionRatio_99.setString("2291157");
      noLegs_0_1_1.set(LegOptionRatio_99);
      InstrumentLeg_99.insert(LegOptionRatio_99.getString());
      FIX::LegPool LegPool_99("STRING_877877465");
      noLegs_0_1_1.set(LegPool_99);
      InstrumentLeg_99.insert(LegPool_99.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_99("STRING_963859929");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_99);
      InstrumentLeg_99.insert(LegPriceUnitOfMeasure_99.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
      LegPriceUnitOfMeasureQty_99.setString("13445659");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_99);
      InstrumentLeg_99.insert(LegPriceUnitOfMeasureQty_99.getString());
      FIX::LegProduct LegProduct_99(205695240);
      noLegs_0_1_1.set(LegProduct_99);
      InstrumentLeg_99.insert(LegProduct_99.getString());
      FIX::LegPutOrCall LegPutOrCall_99(63285517);
      noLegs_0_1_1.set(LegPutOrCall_99);
      InstrumentLeg_99.insert(LegPutOrCall_99.getString());
      FIX::LegRatioQty LegRatioQty_99;
      LegRatioQty_99.setString("14719294");
      noLegs_0_1_1.set(LegRatioQty_99);
      InstrumentLeg_99.insert(LegRatioQty_99.getString());
      FIX::LegRedemptionDate LegRedemptionDate_99("LOCALMKTDATE_1460111728");
      noLegs_0_1_1.set(LegRedemptionDate_99);
      InstrumentLeg_99.insert(LegRedemptionDate_99.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_99("STRING_788822629");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_99);
      InstrumentLeg_99.insert(LegRepoCollateralSecurityType_99.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_99;
      LegRepurchaseRate_99.setString("22.850000");
      noLegs_0_1_1.set(LegRepurchaseRate_99);
      InstrumentLeg_99.insert(LegRepurchaseRate_99.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_99(100329221);
      noLegs_0_1_1.set(LegRepurchaseTerm_99);
      InstrumentLeg_99.insert(LegRepurchaseTerm_99.getString());
      FIX::LegSecurityDesc LegSecurityDesc_99("STRING_440539787");
      noLegs_0_1_1.set(LegSecurityDesc_99);
      InstrumentLeg_99.insert(LegSecurityDesc_99.getString());
      FIX::LegSecurityExchange LegSecurityExchange_99("EXCHANGE_1449784882");
      noLegs_0_1_1.set(LegSecurityExchange_99);
      InstrumentLeg_99.insert(LegSecurityExchange_99.getString());
      FIX::LegSecurityID LegSecurityID_99("STRING_246231359");
      noLegs_0_1_1.set(LegSecurityID_99);
      InstrumentLeg_99.insert(LegSecurityID_99.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_99("STRING_918898136");
      noLegs_0_1_1.set(LegSecurityIDSource_99);
      InstrumentLeg_99.insert(LegSecurityIDSource_99.getString());
      FIX::LegSecuritySubType LegSecuritySubType_99("STRING_1364432463");
      noLegs_0_1_1.set(LegSecuritySubType_99);
      InstrumentLeg_99.insert(LegSecuritySubType_99.getString());
      FIX::LegSecurityType LegSecurityType_99("STRING_1445591711");
      noLegs_0_1_1.set(LegSecurityType_99);
      InstrumentLeg_99.insert(LegSecurityType_99.getString());
      FIX::LegSide LegSide_99('1');
      noLegs_0_1_1.set(LegSide_99);
      InstrumentLeg_99.insert(LegSide_99.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_99("STRING_1179579948");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_99);
      InstrumentLeg_99.insert(LegStateOrProvinceOfIssue_99.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_99("USD");
      noLegs_0_1_1.set(LegStrikeCurrency_99);
      InstrumentLeg_99.insert(LegStrikeCurrency_99.getString());
      FIX::LegStrikePrice LegStrikePrice_99;
      LegStrikePrice_99.setString("12823759");
      noLegs_0_1_1.set(LegStrikePrice_99);
      InstrumentLeg_99.insert(LegStrikePrice_99.getString());
      FIX::LegSymbol LegSymbol_99("STRING_512338620");
      noLegs_0_1_1.set(LegSymbol_99);
      InstrumentLeg_99.insert(LegSymbol_99.getString());
      FIX::LegSymbolSfx LegSymbolSfx_99("STRING_1659400965");
      noLegs_0_1_1.set(LegSymbolSfx_99);
      InstrumentLeg_99.insert(LegSymbolSfx_99.getString());
      FIX::LegTimeUnit LegTimeUnit_99("STRING_1083317285");
      noLegs_0_1_1.set(LegTimeUnit_99);
      InstrumentLeg_99.insert(LegTimeUnit_99.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_99("STRING_1751440051");
      noLegs_0_1_1.set(LegUnitOfMeasure_99);
      InstrumentLeg_99.insert(LegUnitOfMeasure_99.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
      LegUnitOfMeasureQty_99.setString("1317023");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_99);
      InstrumentLeg_99.insert(LegUnitOfMeasureQty_99.getString());
      all_values.push_back(InstrumentLeg_99);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
        FIX::LegSecurityAltID LegSecurityAltID_193("STRING_1613212870");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_193);
        LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltID_193.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_193("STRING_2070214294");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_193);
        LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltIDSource_193.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
        FIX::LegSecurityAltID LegSecurityAltID_194("STRING_1008513303");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltID_194.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_194("STRING_1842328659");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltIDSource_194.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
        FIX::LegSecurityAltID LegSecurityAltID_195("STRING_800608111");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltID_195.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_195("STRING_1972373232");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltIDSource_195.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_100;
      FIX::EncodedLegIssuer EncodedLegIssuer_100("DATA_1039410941");
      noLegs_0_1_2.set(EncodedLegIssuer_100);
      InstrumentLeg_100.insert(EncodedLegIssuer_100.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_100(1006303351);
      noLegs_0_1_2.set(EncodedLegIssuerLen_100);
      InstrumentLeg_100.insert(EncodedLegIssuerLen_100.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_100("DATA_2035658750");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_100);
      InstrumentLeg_100.insert(EncodedLegSecurityDesc_100.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_100(363856778);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_100);
      InstrumentLeg_100.insert(EncodedLegSecurityDescLen_100.getString());
      FIX::LegCFICode LegCFICode_100("STRING_318931431");
      noLegs_0_1_2.set(LegCFICode_100);
      InstrumentLeg_100.insert(LegCFICode_100.getString());
      FIX::LegContractMultiplier LegContractMultiplier_100;
      LegContractMultiplier_100.setString("6769977");
      noLegs_0_1_2.set(LegContractMultiplier_100);
      InstrumentLeg_100.insert(LegContractMultiplier_100.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_100(1930389064);
      noLegs_0_1_2.set(LegContractMultiplierUnit_100);
      InstrumentLeg_100.insert(LegContractMultiplierUnit_100.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_100("MONTHYEAR_419260652");
      noLegs_0_1_2.set(LegContractSettlMonth_100);
      InstrumentLeg_100.insert(LegContractSettlMonth_100.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_100("COUNTRY_1117537519");
      noLegs_0_1_2.set(LegCountryOfIssue_100);
      InstrumentLeg_100.insert(LegCountryOfIssue_100.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_100("LOCALMKTDATE_1232690298");
      noLegs_0_1_2.set(LegCouponPaymentDate_100);
      InstrumentLeg_100.insert(LegCouponPaymentDate_100.getString());
      FIX::LegCouponRate LegCouponRate_100;
      LegCouponRate_100.setString("20.120000");
      noLegs_0_1_2.set(LegCouponRate_100);
      InstrumentLeg_100.insert(LegCouponRate_100.getString());
      FIX::LegCreditRating LegCreditRating_100("STRING_2036435655");
      noLegs_0_1_2.set(LegCreditRating_100);
      InstrumentLeg_100.insert(LegCreditRating_100.getString());
      FIX::LegCurrency LegCurrency_100("EUR");
      noLegs_0_1_2.set(LegCurrency_100);
      InstrumentLeg_100.insert(LegCurrency_100.getString());
      FIX::LegDatedDate LegDatedDate_100("LOCALMKTDATE_1576493141");
      noLegs_0_1_2.set(LegDatedDate_100);
      InstrumentLeg_100.insert(LegDatedDate_100.getString());
      FIX::LegExerciseStyle LegExerciseStyle_100(1629219062);
      noLegs_0_1_2.set(LegExerciseStyle_100);
      InstrumentLeg_100.insert(LegExerciseStyle_100.getString());
      FIX::LegFactor LegFactor_100;
      LegFactor_100.setString("5615049");
      noLegs_0_1_2.set(LegFactor_100);
      InstrumentLeg_100.insert(LegFactor_100.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_100(1544072781);
      noLegs_0_1_2.set(LegFlowScheduleType_100);
      InstrumentLeg_100.insert(LegFlowScheduleType_100.getString());
      FIX::LegInstrRegistry LegInstrRegistry_100("STRING_764111353");
      noLegs_0_1_2.set(LegInstrRegistry_100);
      InstrumentLeg_100.insert(LegInstrRegistry_100.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_100("LOCALMKTDATE_1073843539");
      noLegs_0_1_2.set(LegInterestAccrualDate_100);
      InstrumentLeg_100.insert(LegInterestAccrualDate_100.getString());
      FIX::LegIssueDate LegIssueDate_100("LOCALMKTDATE_1055990098");
      noLegs_0_1_2.set(LegIssueDate_100);
      InstrumentLeg_100.insert(LegIssueDate_100.getString());
      FIX::LegIssuer LegIssuer_100("STRING_1847428638");
      noLegs_0_1_2.set(LegIssuer_100);
      InstrumentLeg_100.insert(LegIssuer_100.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_100("STRING_677799942");
      noLegs_0_1_2.set(LegLocaleOfIssue_100);
      InstrumentLeg_100.insert(LegLocaleOfIssue_100.getString());
      FIX::LegMaturityDate LegMaturityDate_100("LOCALMKTDATE_1187692474");
      noLegs_0_1_2.set(LegMaturityDate_100);
      InstrumentLeg_100.insert(LegMaturityDate_100.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_100("MONTHYEAR_1047932463");
      noLegs_0_1_2.set(LegMaturityMonthYear_100);
      InstrumentLeg_100.insert(LegMaturityMonthYear_100.getString());
      FIX::LegMaturityTime LegMaturityTime_100("TZTIMEONLY_143529165");
      noLegs_0_1_2.set(LegMaturityTime_100);
      InstrumentLeg_100.insert(LegMaturityTime_100.getString());
      FIX::LegOptAttribute LegOptAttribute_100('1');
      noLegs_0_1_2.set(LegOptAttribute_100);
      InstrumentLeg_100.insert(LegOptAttribute_100.getString());
      FIX::LegOptionRatio LegOptionRatio_100;
      LegOptionRatio_100.setString("20564457");
      noLegs_0_1_2.set(LegOptionRatio_100);
      InstrumentLeg_100.insert(LegOptionRatio_100.getString());
      FIX::LegPool LegPool_100("STRING_1985857824");
      noLegs_0_1_2.set(LegPool_100);
      InstrumentLeg_100.insert(LegPool_100.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_100("STRING_1911031231");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_100);
      InstrumentLeg_100.insert(LegPriceUnitOfMeasure_100.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
      LegPriceUnitOfMeasureQty_100.setString("18813353");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_100);
      InstrumentLeg_100.insert(LegPriceUnitOfMeasureQty_100.getString());
      FIX::LegProduct LegProduct_100(877785117);
      noLegs_0_1_2.set(LegProduct_100);
      InstrumentLeg_100.insert(LegProduct_100.getString());
      FIX::LegPutOrCall LegPutOrCall_100(769850935);
      noLegs_0_1_2.set(LegPutOrCall_100);
      InstrumentLeg_100.insert(LegPutOrCall_100.getString());
      FIX::LegRatioQty LegRatioQty_100;
      LegRatioQty_100.setString("17695104");
      noLegs_0_1_2.set(LegRatioQty_100);
      InstrumentLeg_100.insert(LegRatioQty_100.getString());
      FIX::LegRedemptionDate LegRedemptionDate_100("LOCALMKTDATE_1241641895");
      noLegs_0_1_2.set(LegRedemptionDate_100);
      InstrumentLeg_100.insert(LegRedemptionDate_100.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_100("STRING_1088782366");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_100);
      InstrumentLeg_100.insert(LegRepoCollateralSecurityType_100.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_100;
      LegRepurchaseRate_100.setString("45.360000");
      noLegs_0_1_2.set(LegRepurchaseRate_100);
      InstrumentLeg_100.insert(LegRepurchaseRate_100.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_100(1024547311);
      noLegs_0_1_2.set(LegRepurchaseTerm_100);
      InstrumentLeg_100.insert(LegRepurchaseTerm_100.getString());
      FIX::LegSecurityDesc LegSecurityDesc_100("STRING_1508043019");
      noLegs_0_1_2.set(LegSecurityDesc_100);
      InstrumentLeg_100.insert(LegSecurityDesc_100.getString());
      FIX::LegSecurityExchange LegSecurityExchange_100("EXCHANGE_1416562055");
      noLegs_0_1_2.set(LegSecurityExchange_100);
      InstrumentLeg_100.insert(LegSecurityExchange_100.getString());
      FIX::LegSecurityID LegSecurityID_100("STRING_109753962");
      noLegs_0_1_2.set(LegSecurityID_100);
      InstrumentLeg_100.insert(LegSecurityID_100.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_100("STRING_26051383");
      noLegs_0_1_2.set(LegSecurityIDSource_100);
      InstrumentLeg_100.insert(LegSecurityIDSource_100.getString());
      FIX::LegSecuritySubType LegSecuritySubType_100("STRING_1305514062");
      noLegs_0_1_2.set(LegSecuritySubType_100);
      InstrumentLeg_100.insert(LegSecuritySubType_100.getString());
      FIX::LegSecurityType LegSecurityType_100("STRING_559393076");
      noLegs_0_1_2.set(LegSecurityType_100);
      InstrumentLeg_100.insert(LegSecurityType_100.getString());
      FIX::LegSide LegSide_100('2');
      noLegs_0_1_2.set(LegSide_100);
      InstrumentLeg_100.insert(LegSide_100.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_100("STRING_734523555");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_100);
      InstrumentLeg_100.insert(LegStateOrProvinceOfIssue_100.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_100("EUR");
      noLegs_0_1_2.set(LegStrikeCurrency_100);
      InstrumentLeg_100.insert(LegStrikeCurrency_100.getString());
      FIX::LegStrikePrice LegStrikePrice_100;
      LegStrikePrice_100.setString("1311126");
      noLegs_0_1_2.set(LegStrikePrice_100);
      InstrumentLeg_100.insert(LegStrikePrice_100.getString());
      FIX::LegSymbol LegSymbol_100("STRING_805239843");
      noLegs_0_1_2.set(LegSymbol_100);
      InstrumentLeg_100.insert(LegSymbol_100.getString());
      FIX::LegSymbolSfx LegSymbolSfx_100("STRING_1624999916");
      noLegs_0_1_2.set(LegSymbolSfx_100);
      InstrumentLeg_100.insert(LegSymbolSfx_100.getString());
      FIX::LegTimeUnit LegTimeUnit_100("STRING_1187102787");
      noLegs_0_1_2.set(LegTimeUnit_100);
      InstrumentLeg_100.insert(LegTimeUnit_100.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_100("STRING_505184833");
      noLegs_0_1_2.set(LegUnitOfMeasure_100);
      InstrumentLeg_100.insert(LegUnitOfMeasure_100.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
      LegUnitOfMeasureQty_100.setString("1553162");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_100);
      InstrumentLeg_100.insert(LegUnitOfMeasureQty_100.getString());
      all_values.push_back(InstrumentLeg_100);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
        FIX::LegSecurityAltID LegSecurityAltID_196("STRING_1553117296");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltID_196.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_196("STRING_298845375");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltIDSource_196.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
        FIX::LegSecurityAltID LegSecurityAltID_197("STRING_1337734733");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltID_197.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_197("STRING_1462079415");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltIDSource_197.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
        FIX::LegSecurityAltID LegSecurityAltID_198("STRING_137219551");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltID_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltID_198.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_198("STRING_1101282317");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltIDSource_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltIDSource_198.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_66;
    FIX::AttachmentPoint AttachmentPoint_66;
    AttachmentPoint_66.setString("11.180000");
    noQuoteEntries_0_0.set(AttachmentPoint_66);
    Instrument_66.insert(AttachmentPoint_66.getString());
    FIX::CFICode CFICode_66("STRING_1015004668");
    noQuoteEntries_0_0.set(CFICode_66);
    Instrument_66.insert(CFICode_66.getString());
    FIX::CPProgram CPProgram_66(1);
    noQuoteEntries_0_0.set(CPProgram_66);
    Instrument_66.insert(CPProgram_66.getString());
    FIX::CPRegType CPRegType_66("STRING_817957923");
    noQuoteEntries_0_0.set(CPRegType_66);
    Instrument_66.insert(CPRegType_66.getString());
    FIX::CapPrice CapPrice_66;
    CapPrice_66.setString("1091629");
    noQuoteEntries_0_0.set(CapPrice_66);
    Instrument_66.insert(CapPrice_66.getString());
    FIX::ContractMultiplier ContractMultiplier_66;
    ContractMultiplier_66.setString("8124319");
    noQuoteEntries_0_0.set(ContractMultiplier_66);
    Instrument_66.insert(ContractMultiplier_66.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_66(1);
    noQuoteEntries_0_0.set(ContractMultiplierUnit_66);
    Instrument_66.insert(ContractMultiplierUnit_66.getString());
    FIX::ContractSettlMonth ContractSettlMonth_66("MONTHYEAR_1133710227");
    noQuoteEntries_0_0.set(ContractSettlMonth_66);
    Instrument_66.insert(ContractSettlMonth_66.getString());
    FIX::CountryOfIssue CountryOfIssue_66("COUNTRY_172991341");
    noQuoteEntries_0_0.set(CountryOfIssue_66);
    Instrument_66.insert(CountryOfIssue_66.getString());
    FIX::CouponPaymentDate CouponPaymentDate_66("LOCALMKTDATE_386060867");
    noQuoteEntries_0_0.set(CouponPaymentDate_66);
    Instrument_66.insert(CouponPaymentDate_66.getString());
    FIX::CouponRate CouponRate_66;
    CouponRate_66.setString("41.890000");
    noQuoteEntries_0_0.set(CouponRate_66);
    Instrument_66.insert(CouponRate_66.getString());
    FIX::CreditRating CreditRating_66("STRING_199042724");
    noQuoteEntries_0_0.set(CreditRating_66);
    Instrument_66.insert(CreditRating_66.getString());
    FIX::DatedDate DatedDate_66("LOCALMKTDATE_1691574929");
    noQuoteEntries_0_0.set(DatedDate_66);
    Instrument_66.insert(DatedDate_66.getString());
    FIX::DetachmentPoint DetachmentPoint_66;
    DetachmentPoint_66.setString("72.650000");
    noQuoteEntries_0_0.set(DetachmentPoint_66);
    Instrument_66.insert(DetachmentPoint_66.getString());
    FIX::EncodedIssuer EncodedIssuer_66("DATA_188694182");
    noQuoteEntries_0_0.set(EncodedIssuer_66);
    Instrument_66.insert(EncodedIssuer_66.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_66(278614837);
    noQuoteEntries_0_0.set(EncodedIssuerLen_66);
    Instrument_66.insert(EncodedIssuerLen_66.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_66("DATA_1843985755");
    noQuoteEntries_0_0.set(EncodedSecurityDesc_66);
    Instrument_66.insert(EncodedSecurityDesc_66.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_66(739850559);
    noQuoteEntries_0_0.set(EncodedSecurityDescLen_66);
    Instrument_66.insert(EncodedSecurityDescLen_66.getString());
    FIX::ExerciseStyle ExerciseStyle_66(0);
    noQuoteEntries_0_0.set(ExerciseStyle_66);
    Instrument_66.insert(ExerciseStyle_66.getString());
    FIX::Factor Factor_66;
    Factor_66.setString("5017419");
    noQuoteEntries_0_0.set(Factor_66);
    Instrument_66.insert(Factor_66.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_66(false);
    noQuoteEntries_0_0.set(FlexProductEligibilityIndicator_66);
    Instrument_66.insert(FlexProductEligibilityIndicator_66.getString());
    FIX::FlexibleIndicator FlexibleIndicator_66(false);
    noQuoteEntries_0_0.set(FlexibleIndicator_66);
    Instrument_66.insert(FlexibleIndicator_66.getString());
    FIX::FloorPrice FloorPrice_66;
    FloorPrice_66.setString("10069267");
    noQuoteEntries_0_0.set(FloorPrice_66);
    Instrument_66.insert(FloorPrice_66.getString());
    FIX::FlowScheduleType FlowScheduleType_66(3);
    noQuoteEntries_0_0.set(FlowScheduleType_66);
    Instrument_66.insert(FlowScheduleType_66.getString());
    FIX::InstrRegistry InstrRegistry_66("STRING_1824141927");
    noQuoteEntries_0_0.set(InstrRegistry_66);
    Instrument_66.insert(InstrRegistry_66.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_66('4');
    noQuoteEntries_0_0.set(InstrmtAssignmentMethod_66);
    Instrument_66.insert(InstrmtAssignmentMethod_66.getString());
    FIX::InterestAccrualDate InterestAccrualDate_66("LOCALMKTDATE_671528413");
    noQuoteEntries_0_0.set(InterestAccrualDate_66);
    Instrument_66.insert(InterestAccrualDate_66.getString());
    FIX::IssueDate IssueDate_66("LOCALMKTDATE_1014393012");
    noQuoteEntries_0_0.set(IssueDate_66);
    Instrument_66.insert(IssueDate_66.getString());
    FIX::Issuer Issuer_66("STRING_1874639847");
    noQuoteEntries_0_0.set(Issuer_66);
    Instrument_66.insert(Issuer_66.getString());
    FIX::ListMethod ListMethod_66(1);
    noQuoteEntries_0_0.set(ListMethod_66);
    Instrument_66.insert(ListMethod_66.getString());
    FIX::LocaleOfIssue LocaleOfIssue_66("STRING_2115675329");
    noQuoteEntries_0_0.set(LocaleOfIssue_66);
    Instrument_66.insert(LocaleOfIssue_66.getString());
    FIX::MaturityDate MaturityDate_66("LOCALMKTDATE_923087317");
    noQuoteEntries_0_0.set(MaturityDate_66);
    Instrument_66.insert(MaturityDate_66.getString());
    FIX::MaturityMonthYear MaturityMonthYear_66("MONTHYEAR_1823752633");
    noQuoteEntries_0_0.set(MaturityMonthYear_66);
    Instrument_66.insert(MaturityMonthYear_66.getString());
    FIX::MaturityTime MaturityTime_66("TZTIMEONLY_1839324933");
    noQuoteEntries_0_0.set(MaturityTime_66);
    Instrument_66.insert(MaturityTime_66.getString());
    FIX::MinPriceIncrement MinPriceIncrement_66;
    MinPriceIncrement_66.setString("17410452");
    noQuoteEntries_0_0.set(MinPriceIncrement_66);
    Instrument_66.insert(MinPriceIncrement_66.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_66;
    MinPriceIncrementAmount_66.setString("19329155");
    noQuoteEntries_0_0.set(MinPriceIncrementAmount_66);
    Instrument_66.insert(MinPriceIncrementAmount_66.getString());
    FIX::NTPositionLimit NTPositionLimit_66(504273256);
    noQuoteEntries_0_0.set(NTPositionLimit_66);
    Instrument_66.insert(NTPositionLimit_66.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_66;
    NotionalPercentageOutstanding_66.setString("40.510000");
    noQuoteEntries_0_0.set(NotionalPercentageOutstanding_66);
    Instrument_66.insert(NotionalPercentageOutstanding_66.getString());
    FIX::OptAttribute OptAttribute_66('9');
    noQuoteEntries_0_0.set(OptAttribute_66);
    Instrument_66.insert(OptAttribute_66.getString());
    FIX::OptPayoutAmount OptPayoutAmount_66;
    OptPayoutAmount_66.setString("6772645");
    noQuoteEntries_0_0.set(OptPayoutAmount_66);
    Instrument_66.insert(OptPayoutAmount_66.getString());
    FIX::OptPayoutType OptPayoutType_66(3);
    noQuoteEntries_0_0.set(OptPayoutType_66);
    Instrument_66.insert(OptPayoutType_66.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_66;
    OriginalNotionalPercentageOutstanding_66.setString("26.700000");
    noQuoteEntries_0_0.set(OriginalNotionalPercentageOutstanding_66);
    Instrument_66.insert(OriginalNotionalPercentageOutstanding_66.getString());
    FIX::Pool Pool_66("STRING_876307322");
    noQuoteEntries_0_0.set(Pool_66);
    Instrument_66.insert(Pool_66.getString());
    FIX::PositionLimit PositionLimit_66(640696200);
    noQuoteEntries_0_0.set(PositionLimit_66);
    Instrument_66.insert(PositionLimit_66.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_66("STRING_STD");
    noQuoteEntries_0_0.set(PriceQuoteMethod_66);
    Instrument_66.insert(PriceQuoteMethod_66.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_66("STRING_1065001504");
    noQuoteEntries_0_0.set(PriceUnitOfMeasure_66);
    Instrument_66.insert(PriceUnitOfMeasure_66.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_66;
    PriceUnitOfMeasureQty_66.setString("9193110");
    noQuoteEntries_0_0.set(PriceUnitOfMeasureQty_66);
    Instrument_66.insert(PriceUnitOfMeasureQty_66.getString());
    FIX::Product Product_68(10);
    noQuoteEntries_0_0.set(Product_68);
    Instrument_66.insert(Product_68.getString());
    FIX::ProductComplex ProductComplex_66("STRING_1804852064");
    noQuoteEntries_0_0.set(ProductComplex_66);
    Instrument_66.insert(ProductComplex_66.getString());
    FIX::PutOrCall PutOrCall_66(1);
    noQuoteEntries_0_0.set(PutOrCall_66);
    Instrument_66.insert(PutOrCall_66.getString());
    FIX::RedemptionDate RedemptionDate_66("LOCALMKTDATE_2016223994");
    noQuoteEntries_0_0.set(RedemptionDate_66);
    Instrument_66.insert(RedemptionDate_66.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_66("STRING_2022218891");
    noQuoteEntries_0_0.set(RepoCollateralSecurityType_66);
    Instrument_66.insert(RepoCollateralSecurityType_66.getString());
    FIX::RepurchaseRate RepurchaseRate_66;
    RepurchaseRate_66.setString("52.280000");
    noQuoteEntries_0_0.set(RepurchaseRate_66);
    Instrument_66.insert(RepurchaseRate_66.getString());
    FIX::RepurchaseTerm RepurchaseTerm_66(875667129);
    noQuoteEntries_0_0.set(RepurchaseTerm_66);
    Instrument_66.insert(RepurchaseTerm_66.getString());
    FIX::RestructuringType RestructuringType_66("STRING_MR");
    noQuoteEntries_0_0.set(RestructuringType_66);
    Instrument_66.insert(RestructuringType_66.getString());
    FIX::SecurityDesc SecurityDesc_66("STRING_455043507");
    noQuoteEntries_0_0.set(SecurityDesc_66);
    Instrument_66.insert(SecurityDesc_66.getString());
    FIX::SecurityExchange SecurityExchange_66("EXCHANGE_1288227561");
    noQuoteEntries_0_0.set(SecurityExchange_66);
    Instrument_66.insert(SecurityExchange_66.getString());
    FIX::SecurityGroup SecurityGroup_66("STRING_918946695");
    noQuoteEntries_0_0.set(SecurityGroup_66);
    Instrument_66.insert(SecurityGroup_66.getString());
    FIX::SecurityID SecurityID_66("STRING_1469436520");
    noQuoteEntries_0_0.set(SecurityID_66);
    Instrument_66.insert(SecurityID_66.getString());
    FIX::SecurityIDSource SecurityIDSource_66("STRING_7");
    noQuoteEntries_0_0.set(SecurityIDSource_66);
    Instrument_66.insert(SecurityIDSource_66.getString());
    FIX::SecurityStatus SecurityStatus_66("STRING_1");
    noQuoteEntries_0_0.set(SecurityStatus_66);
    Instrument_66.insert(SecurityStatus_66.getString());
    FIX::SecuritySubType SecuritySubType_67("STRING_1437628201");
    noQuoteEntries_0_0.set(SecuritySubType_67);
    Instrument_66.insert(SecuritySubType_67.getString());
    FIX::SecurityType SecurityType_68("STRING_FXSWAP");
    noQuoteEntries_0_0.set(SecurityType_68);
    Instrument_66.insert(SecurityType_68.getString());
    FIX::Seniority Seniority_66("STRING_SB");
    noQuoteEntries_0_0.set(Seniority_66);
    Instrument_66.insert(Seniority_66.getString());
    FIX::SettlMethod SettlMethod_66('P');
    noQuoteEntries_0_0.set(SettlMethod_66);
    Instrument_66.insert(SettlMethod_66.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_66("STRING_1532032669");
    noQuoteEntries_0_0.set(SettleOnOpenFlag_66);
    Instrument_66.insert(SettleOnOpenFlag_66.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_66("STRING_1189395547");
    noQuoteEntries_0_0.set(StateOrProvinceOfIssue_66);
    Instrument_66.insert(StateOrProvinceOfIssue_66.getString());
    FIX::StrikeCurrency StrikeCurrency_66("CHF");
    noQuoteEntries_0_0.set(StrikeCurrency_66);
    Instrument_66.insert(StrikeCurrency_66.getString());
    FIX::StrikeMultiplier StrikeMultiplier_66;
    StrikeMultiplier_66.setString("21085376");
    noQuoteEntries_0_0.set(StrikeMultiplier_66);
    Instrument_66.insert(StrikeMultiplier_66.getString());
    FIX::StrikePrice StrikePrice_66;
    StrikePrice_66.setString("1635236");
    noQuoteEntries_0_0.set(StrikePrice_66);
    Instrument_66.insert(StrikePrice_66.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_66(2);
    noQuoteEntries_0_0.set(StrikePriceBoundaryMethod_66);
    Instrument_66.insert(StrikePriceBoundaryMethod_66.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_66;
    StrikePriceBoundaryPrecision_66.setString("3.460000");
    noQuoteEntries_0_0.set(StrikePriceBoundaryPrecision_66);
    Instrument_66.insert(StrikePriceBoundaryPrecision_66.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_66(3);
    noQuoteEntries_0_0.set(StrikePriceDeterminationMethod_66);
    Instrument_66.insert(StrikePriceDeterminationMethod_66.getString());
    FIX::StrikeValue StrikeValue_66;
    StrikeValue_66.setString("18323941");
    noQuoteEntries_0_0.set(StrikeValue_66);
    Instrument_66.insert(StrikeValue_66.getString());
    FIX::Symbol Symbol_66("STRING_1794156634");
    noQuoteEntries_0_0.set(Symbol_66);
    Instrument_66.insert(Symbol_66.getString());
    FIX::SymbolSfx SymbolSfx_66("STRING_WI");
    noQuoteEntries_0_0.set(SymbolSfx_66);
    Instrument_66.insert(SymbolSfx_66.getString());
    FIX::TimeUnit TimeUnit_66("STRING_Wk");
    noQuoteEntries_0_0.set(TimeUnit_66);
    Instrument_66.insert(TimeUnit_66.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_66(3);
    noQuoteEntries_0_0.set(UnderlyingPriceDeterminationMethod_66);
    Instrument_66.insert(UnderlyingPriceDeterminationMethod_66.getString());
    FIX::UnitOfMeasure UnitOfMeasure_66("STRING_MMbbl");
    noQuoteEntries_0_0.set(UnitOfMeasure_66);
    Instrument_66.insert(UnitOfMeasure_66.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_66;
    UnitOfMeasureQty_66.setString("19332601");
    noQuoteEntries_0_0.set(UnitOfMeasureQty_66);
    Instrument_66.insert(UnitOfMeasureQty_66.getString());
    FIX::ValuationMethod ValuationMethod_66("STRING_FUT");
    noQuoteEntries_0_0.set(ValuationMethod_66);
    Instrument_66.insert(ValuationMethod_66.getString());
    all_values.push_back(Instrument_66);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_128;
      FIX::ComplexEventCondition ComplexEventCondition_128(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventCondition_128.getString());
      FIX::ComplexEventPrice ComplexEventPrice_128;
      ComplexEventPrice_128.setString("19055625");
      noComplexEvents_0_1_0.set(ComplexEventPrice_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPrice_128.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_128(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryMethod_128.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_128;
      ComplexEventPriceBoundaryPrecision_128.setString("52.310000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryPrecision_128.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_128(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceTimeType_128.getString());
      FIX::ComplexEventType ComplexEventType_128(9);
      noComplexEvents_0_1_0.set(ComplexEventType_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventType_128.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_128;
      ComplexOptPayoutAmount_128.setString("3411581");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexOptPayoutAmount_128.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_128);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_262;
        FIX::ComplexEventEndDate ComplexEventEndDate_262(FIX::UTCTIMESTAMP(1, 9, 44, 20, 3, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_262);
        ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventEndDate_262.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_262(FIX::UTCTIMESTAMP(23, 11, 11, 15, 11, 2000));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_262);
        ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventStartDate_262.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_262);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_524;
          FIX::ComplexEventEndTime ComplexEventEndTime_524(FIX::UTCTIMEONLY(9, 11, 26));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_524);
          ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventEndTime_524.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_524(FIX::UTCTIMEONLY(2, 14, 54));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_524);
          ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventStartTime_524.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_524);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_263;
        FIX::ComplexEventEndDate ComplexEventEndDate_263(FIX::UTCTIMESTAMP(0, 26, 42, 3, 2, 2015));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_263);
        ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventEndDate_263.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_263(FIX::UTCTIMESTAMP(16, 22, 23, 9, 11, 2014));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_263);
        ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventStartDate_263.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_263);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_525;
          FIX::ComplexEventEndTime ComplexEventEndTime_525(FIX::UTCTIMEONLY(5, 24, 29));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_525);
          ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventEndTime_525.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_525(FIX::UTCTIMEONLY(14, 27, 27));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_525);
          ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventStartTime_525.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_525);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_264;
        FIX::ComplexEventEndDate ComplexEventEndDate_264(FIX::UTCTIMESTAMP(12, 30, 29, 12, 9, 2011));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_264);
        ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventEndDate_264.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_264(FIX::UTCTIMESTAMP(23, 47, 1, 21, 7, 2000));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_264);
        ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventStartDate_264.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_264);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_526;
          FIX::ComplexEventEndTime ComplexEventEndTime_526(FIX::UTCTIMEONLY(23, 33, 56));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_526);
          ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventEndTime_526.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_526(FIX::UTCTIMEONLY(23, 2, 32));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_526);
          ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventStartTime_526.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_526);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_129;
      FIX::ComplexEventCondition ComplexEventCondition_129(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventCondition_129.getString());
      FIX::ComplexEventPrice ComplexEventPrice_129;
      ComplexEventPrice_129.setString("20572872");
      noComplexEvents_0_1_1.set(ComplexEventPrice_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPrice_129.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_129(4);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryMethod_129.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_129;
      ComplexEventPriceBoundaryPrecision_129.setString("47.420000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryPrecision_129.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_129(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceTimeType_129.getString());
      FIX::ComplexEventType ComplexEventType_129(6);
      noComplexEvents_0_1_1.set(ComplexEventType_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventType_129.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_129;
      ComplexOptPayoutAmount_129.setString("6064020");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexOptPayoutAmount_129.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_129);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_265;
        FIX::ComplexEventEndDate ComplexEventEndDate_265(FIX::UTCTIMESTAMP(21, 9, 30, 21, 7, 2017));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_265);
        ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventEndDate_265.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_265(FIX::UTCTIMESTAMP(21, 53, 44, 6, 4, 2003));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_265);
        ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventStartDate_265.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_265);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_527;
          FIX::ComplexEventEndTime ComplexEventEndTime_527(FIX::UTCTIMEONLY(2, 41, 33));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_527);
          ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventEndTime_527.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_527(FIX::UTCTIMEONLY(5, 27, 34));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_527);
          ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventStartTime_527.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_527);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_528;
          FIX::ComplexEventEndTime ComplexEventEndTime_528(FIX::UTCTIMEONLY(3, 15, 40));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_528);
          ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventEndTime_528.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_528(FIX::UTCTIMEONLY(5, 9, 43));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_528);
          ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventStartTime_528.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_528);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_130;
      FIX::ComplexEventCondition ComplexEventCondition_130(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventCondition_130.getString());
      FIX::ComplexEventPrice ComplexEventPrice_130;
      ComplexEventPrice_130.setString("12652666");
      noComplexEvents_0_1_2.set(ComplexEventPrice_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPrice_130.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_130(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryMethod_130.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_130;
      ComplexEventPriceBoundaryPrecision_130.setString("1.480000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryPrecision_130.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_130(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceTimeType_130.getString());
      FIX::ComplexEventType ComplexEventType_130(4);
      noComplexEvents_0_1_2.set(ComplexEventType_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventType_130.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_130;
      ComplexOptPayoutAmount_130.setString("718625");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexOptPayoutAmount_130.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_130);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_266;
        FIX::ComplexEventEndDate ComplexEventEndDate_266(FIX::UTCTIMESTAMP(11, 47, 34, 18, 3, 2012));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_266);
        ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventEndDate_266.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_266(FIX::UTCTIMESTAMP(8, 16, 4, 22, 2, 2007));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_266);
        ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventStartDate_266.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_266);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_529;
          FIX::ComplexEventEndTime ComplexEventEndTime_529(FIX::UTCTIMEONLY(23, 11, 31));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_529);
          ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventEndTime_529.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_529(FIX::UTCTIMEONLY(9, 40, 10));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_529);
          ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventStartTime_529.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_529);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_530;
          FIX::ComplexEventEndTime ComplexEventEndTime_530(FIX::UTCTIMEONLY(2, 3, 4));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_530);
          ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventEndTime_530.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_530(FIX::UTCTIMEONLY(22, 10, 31));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_530);
          ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventStartTime_530.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_530);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_531;
          FIX::ComplexEventEndTime ComplexEventEndTime_531(FIX::UTCTIMEONLY(21, 18, 48));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_531);
          ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventEndTime_531.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_531(FIX::UTCTIMEONLY(0, 23, 42));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_531);
          ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventStartTime_531.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_531);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_267;
        FIX::ComplexEventEndDate ComplexEventEndDate_267(FIX::UTCTIMESTAMP(19, 38, 22, 20, 11, 2011));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_267);
        ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventEndDate_267.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_267(FIX::UTCTIMESTAMP(9, 14, 58, 12, 12, 2012));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_267);
        ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventStartDate_267.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_267);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_532;
          FIX::ComplexEventEndTime ComplexEventEndTime_532(FIX::UTCTIMEONLY(8, 58, 47));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_532);
          ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventEndTime_532.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_532(FIX::UTCTIMEONLY(8, 49, 4));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_532);
          ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventStartTime_532.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_532);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_533;
          FIX::ComplexEventEndTime ComplexEventEndTime_533(FIX::UTCTIMEONLY(2, 15, 39));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_533);
          ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventEndTime_533.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_533(FIX::UTCTIMEONLY(3, 54, 28));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_533);
          ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventStartTime_533.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_533);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_534;
          FIX::ComplexEventEndTime ComplexEventEndTime_534(FIX::UTCTIMEONLY(1, 6, 26));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventEndTime_534);
          ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventEndTime_534.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_534(FIX::UTCTIMEONLY(16, 37, 28));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventStartTime_534);
          ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventStartTime_534.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_534);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_268;
        FIX::ComplexEventEndDate ComplexEventEndDate_268(FIX::UTCTIMESTAMP(4, 26, 33, 19, 9, 2012));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_268);
        ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventEndDate_268.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_268(FIX::UTCTIMESTAMP(4, 34, 53, 13, 11, 2006));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_268);
        ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventStartDate_268.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_268);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_535;
          FIX::ComplexEventEndTime ComplexEventEndTime_535(FIX::UTCTIMEONLY(8, 21, 41));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_535);
          ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventEndTime_535.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_535(FIX::UTCTIMEONLY(12, 35, 46));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_535);
          ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventStartTime_535.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_535);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_536;
          FIX::ComplexEventEndTime ComplexEventEndTime_536(FIX::UTCTIMEONLY(1, 52, 47));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_536);
          ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventEndTime_536.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_536(FIX::UTCTIMEONLY(1, 24, 23));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_536);
          ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventStartTime_536.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_536);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_537;
          FIX::ComplexEventEndTime ComplexEventEndTime_537(FIX::UTCTIMEONLY(20, 49, 8));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventEndTime_537);
          ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventEndTime_537.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_537(FIX::UTCTIMEONLY(14, 44, 54));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventStartTime_537);
          ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventStartTime_537.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_537);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_135;
      FIX::EventDate EventDate_135("LOCALMKTDATE_1198669630");
      noEvents_0_1_0.set(EventDate_135);
      EvntGrp_NoEvents_135.insert(EventDate_135.getString());
      FIX::EventPx EventPx_135;
      EventPx_135.setString("968496");
      noEvents_0_1_0.set(EventPx_135);
      EvntGrp_NoEvents_135.insert(EventPx_135.getString());
      FIX::EventText EventText_135("STRING_1829219560");
      noEvents_0_1_0.set(EventText_135);
      EvntGrp_NoEvents_135.insert(EventText_135.getString());
      FIX::EventTime EventTime_135(FIX::UTCTIMESTAMP(22, 46, 22, 7, 8, 2003));
      noEvents_0_1_0.set(EventTime_135);
      EvntGrp_NoEvents_135.insert(EventTime_135.getString());
      FIX::EventType EventType_135(6);
      noEvents_0_1_0.set(EventType_135);
      EvntGrp_NoEvents_135.insert(EventType_135.getString());
      all_values.push_back(EvntGrp_NoEvents_135);

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_136;
      FIX::EventDate EventDate_136("LOCALMKTDATE_1483463003");
      noEvents_0_1_1.set(EventDate_136);
      EvntGrp_NoEvents_136.insert(EventDate_136.getString());
      FIX::EventPx EventPx_136;
      EventPx_136.setString("15401963");
      noEvents_0_1_1.set(EventPx_136);
      EvntGrp_NoEvents_136.insert(EventPx_136.getString());
      FIX::EventText EventText_136("STRING_2046996411");
      noEvents_0_1_1.set(EventText_136);
      EvntGrp_NoEvents_136.insert(EventText_136.getString());
      FIX::EventTime EventTime_136(FIX::UTCTIMESTAMP(19, 35, 23, 6, 1, 2011));
      noEvents_0_1_1.set(EventTime_136);
      EvntGrp_NoEvents_136.insert(EventTime_136.getString());
      FIX::EventType EventType_136(2);
      noEvents_0_1_1.set(EventType_136);
      EvntGrp_NoEvents_136.insert(EventType_136.getString());
      all_values.push_back(EvntGrp_NoEvents_136);

      noQuoteEntries_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_136;
      FIX::InstrumentPartyID InstrumentPartyID_136("STRING_1416808916");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyID_136.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_136('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyIDSource_136.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_136(929059099);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyRole_136.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_136);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
        FIX::InstrumentPartySubID InstrumentPartySubID_288("STRING_81838500");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_288);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubID_288.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_288(365658055);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_288);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubIDType_288.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_137;
      FIX::InstrumentPartyID InstrumentPartyID_137("STRING_1126110562");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_137);
      InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyID_137.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_137('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_137);
      InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyIDSource_137.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_137(1564327685);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_137);
      InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyRole_137.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_137);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
        FIX::InstrumentPartySubID InstrumentPartySubID_289("STRING_1973649303");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_289);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubID_289.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_289(1061938997);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_289);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubIDType_289.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
        FIX::InstrumentPartySubID InstrumentPartySubID_290("STRING_548336417");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_290);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubID_290.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_290(1220796821);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_290);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubIDType_290.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291;
        FIX::InstrumentPartySubID InstrumentPartySubID_291("STRING_1913180439");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_291);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubID_291.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_291(1549818304);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_291);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubIDType_291.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_138;
      FIX::InstrumentPartyID InstrumentPartyID_138("STRING_987282460");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_138);
      InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyID_138.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_138('6');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_138);
      InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyIDSource_138.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_138(736452361);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_138);
      InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyRole_138.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_138);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292;
        FIX::InstrumentPartySubID InstrumentPartySubID_292("STRING_77591405");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_292);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubID_292.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_292(635965124);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_292);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubIDType_292.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293;
        FIX::InstrumentPartySubID InstrumentPartySubID_293("STRING_1826411379");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_293);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubID_293.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_293(1483859976);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_293);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubIDType_293.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_146;
      FIX::SecurityAltID SecurityAltID_146("STRING_1841430362");
      noSecurityAltID_0_1_0.set(SecurityAltID_146);
      SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltID_146.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_146("STRING_1132545114");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_146);
      SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltIDSource_146.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_146);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_147;
      FIX::SecurityAltID SecurityAltID_147("STRING_1125272388");
      noSecurityAltID_0_1_1.set(SecurityAltID_147);
      SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltID_147.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_147("STRING_1090332762");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_147);
      SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltIDSource_147.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_147);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_132;
    FIX::SecurityXML SecurityXML_133("XMLDATA_1451357375");
    noQuoteEntries_0_0.set(SecurityXML_133);
    FIX::SecurityXMLLen SecurityXMLLen_66(1907335739);
    noQuoteEntries_0_0.set(SecurityXMLLen_66);
    FIX::SecurityXMLSchema SecurityXMLSchema_66("STRING_359658030");
    noQuoteEntries_0_0.set(SecurityXMLSchema_66);
    SecurityXML_132.insert(SecurityXMLSchema_66.getString());
    all_values.push_back(SecurityXML_132);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_92;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_92("DATA_688911190");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingIssuer_92.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_92(2134946826);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingIssuerLen_92.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_92("DATA_1247553538");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDesc_92.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_92(1054569245);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDescLen_92.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_92;
      UnderlyingAdjustedQuantity_92.setString("11135737");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_92);
      UnderlyingInstrument_92.insert(UnderlyingAdjustedQuantity_92.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_92;
      UnderlyingAllocationPercent_92.setString("32.810000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_92);
      UnderlyingInstrument_92.insert(UnderlyingAllocationPercent_92.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_92;
      UnderlyingAttachmentPoint_92.setString("32.820000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_92);
      UnderlyingInstrument_92.insert(UnderlyingAttachmentPoint_92.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_92("STRING_189050295");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_92);
      UnderlyingInstrument_92.insert(UnderlyingCFICode_92.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_92("STRING_1218148936");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_92);
      UnderlyingInstrument_92.insert(UnderlyingCPProgram_92.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_92("STRING_1533352279");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_92);
      UnderlyingInstrument_92.insert(UnderlyingCPRegType_92.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_92;
      UnderlyingCapValue_92.setString("7373867");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_92);
      UnderlyingInstrument_92.insert(UnderlyingCapValue_92.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_92;
      UnderlyingCashAmount_92.setString("2914621");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_92);
      UnderlyingInstrument_92.insert(UnderlyingCashAmount_92.getString());
      FIX::UnderlyingCashType UnderlyingCashType_92("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_92);
      UnderlyingInstrument_92.insert(UnderlyingCashType_92.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_92;
      UnderlyingContractMultiplier_92.setString("1397213");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_92);
      UnderlyingInstrument_92.insert(UnderlyingContractMultiplier_92.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_92(1278744569);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_92);
      UnderlyingInstrument_92.insert(UnderlyingContractMultiplierUnit_92.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_92("COUNTRY_1983927745");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingCountryOfIssue_92.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_92("LOCALMKTDATE_876173729");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_92);
      UnderlyingInstrument_92.insert(UnderlyingCouponPaymentDate_92.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_92;
      UnderlyingCouponRate_92.setString("63.850000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_92);
      UnderlyingInstrument_92.insert(UnderlyingCouponRate_92.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_92("STRING_2061519150");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_92);
      UnderlyingInstrument_92.insert(UnderlyingCreditRating_92.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_92("GBP");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_92);
      UnderlyingInstrument_92.insert(UnderlyingCurrency_92.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_92;
      UnderlyingCurrentValue_92.setString("13978954");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_92);
      UnderlyingInstrument_92.insert(UnderlyingCurrentValue_92.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_92;
      UnderlyingDetachmentPoint_92.setString("46.440000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_92);
      UnderlyingInstrument_92.insert(UnderlyingDetachmentPoint_92.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_92;
      UnderlyingDirtyPrice_92.setString("9748808");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_92);
      UnderlyingInstrument_92.insert(UnderlyingDirtyPrice_92.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_92;
      UnderlyingEndPrice_92.setString("3829569");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_92);
      UnderlyingInstrument_92.insert(UnderlyingEndPrice_92.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_92;
      UnderlyingEndValue_92.setString("847333");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_92);
      UnderlyingInstrument_92.insert(UnderlyingEndValue_92.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_92(2065213593);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_92);
      UnderlyingInstrument_92.insert(UnderlyingExerciseStyle_92.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_92;
      UnderlyingFXRate_92.setString("18343143");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_92);
      UnderlyingInstrument_92.insert(UnderlyingFXRate_92.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_92('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_92);
      UnderlyingInstrument_92.insert(UnderlyingFXRateCalc_92.getString());
      FIX::UnderlyingFactor UnderlyingFactor_92;
      UnderlyingFactor_92.setString("2773879");
      noUnderlyings_0_1_0.set(UnderlyingFactor_92);
      UnderlyingInstrument_92.insert(UnderlyingFactor_92.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_92(852545711);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_92);
      UnderlyingInstrument_92.insert(UnderlyingFlowScheduleType_92.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_92("STRING_533496665");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_92);
      UnderlyingInstrument_92.insert(UnderlyingInstrRegistry_92.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_92("LOCALMKTDATE_264851153");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_92);
      UnderlyingInstrument_92.insert(UnderlyingIssueDate_92.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_92("STRING_2100099249");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_92);
      UnderlyingInstrument_92.insert(UnderlyingIssuer_92.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_92("STRING_1588065910");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingLocaleOfIssue_92.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_92("LOCALMKTDATE_1378424893");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityDate_92.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_92("MONTHYEAR_1344598883");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityMonthYear_92.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_92("TZTIMEONLY_2059479192");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityTime_92.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_92;
      UnderlyingNotionalPercentageOutstanding_92.setString("51.880000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_92);
      UnderlyingInstrument_92.insert(UnderlyingNotionalPercentageOutstanding_92.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_92('4');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_92);
      UnderlyingInstrument_92.insert(UnderlyingOptAttribute_92.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_92;
      UnderlyingOriginalNotionalPercentageOutstanding_92.setString("78.240000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_92);
      UnderlyingInstrument_92.insert(UnderlyingOriginalNotionalPercentageOutstanding_92.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_92("STRING_157378252");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_92);
      UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasure_92.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_92;
      UnderlyingPriceUnitOfMeasureQty_92.setString("7067262");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_92);
      UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasureQty_92.getString());
      FIX::UnderlyingProduct UnderlyingProduct_92(596913247);
      noUnderlyings_0_1_0.set(UnderlyingProduct_92);
      UnderlyingInstrument_92.insert(UnderlyingProduct_92.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_92(297099620);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_92);
      UnderlyingInstrument_92.insert(UnderlyingPutOrCall_92.getString());
      FIX::UnderlyingPx UnderlyingPx_92;
      UnderlyingPx_92.setString("19854708");
      noUnderlyings_0_1_0.set(UnderlyingPx_92);
      UnderlyingInstrument_92.insert(UnderlyingPx_92.getString());
      FIX::UnderlyingQty UnderlyingQty_92;
      UnderlyingQty_92.setString("4333573");
      noUnderlyings_0_1_0.set(UnderlyingQty_92);
      UnderlyingInstrument_92.insert(UnderlyingQty_92.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_92("LOCALMKTDATE_1173273349");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_92);
      UnderlyingInstrument_92.insert(UnderlyingRedemptionDate_92.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_92("STRING_1439993587");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_92);
      UnderlyingInstrument_92.insert(UnderlyingRepoCollateralSecurityType_92.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_92;
      UnderlyingRepurchaseRate_92.setString("28.470000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_92);
      UnderlyingInstrument_92.insert(UnderlyingRepurchaseRate_92.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_92(537928554);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_92);
      UnderlyingInstrument_92.insert(UnderlyingRepurchaseTerm_92.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_92("STRING_573444056");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_92);
      UnderlyingInstrument_92.insert(UnderlyingRestructuringType_92.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_92("STRING_1745288326");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityDesc_92.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_92("EXCHANGE_1644873199");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityExchange_92.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_92("STRING_1548324887");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityID_92.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_92("STRING_2128245271");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityIDSource_92.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_92("STRING_1729606583");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_92);
      UnderlyingInstrument_92.insert(UnderlyingSecuritySubType_92.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_92("STRING_1466054832");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityType_92.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_92("STRING_1815075944");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_92);
      UnderlyingInstrument_92.insert(UnderlyingSeniority_92.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_92("STRING_1574192059");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_92);
      UnderlyingInstrument_92.insert(UnderlyingSettlMethod_92.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_92(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_92);
      UnderlyingInstrument_92.insert(UnderlyingSettlementType_92.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_92;
      UnderlyingStartValue_92.setString("5201380");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_92);
      UnderlyingInstrument_92.insert(UnderlyingStartValue_92.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_92("STRING_2107688724");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingStateOrProvinceOfIssue_92.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_92("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_92);
      UnderlyingInstrument_92.insert(UnderlyingStrikeCurrency_92.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_92;
      UnderlyingStrikePrice_92.setString("15482709");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_92);
      UnderlyingInstrument_92.insert(UnderlyingStrikePrice_92.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_92("STRING_1239235205");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_92);
      UnderlyingInstrument_92.insert(UnderlyingSymbol_92.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_92("STRING_1817352492");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_92);
      UnderlyingInstrument_92.insert(UnderlyingSymbolSfx_92.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_92("STRING_1460266531");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_92);
      UnderlyingInstrument_92.insert(UnderlyingTimeUnit_92.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_92("STRING_659226746");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_92);
      UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasure_92.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_92;
      UnderlyingUnitOfMeasureQty_92.setString("851330");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_92);
      UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasureQty_92.getString());
      all_values.push_back(UnderlyingInstrument_92);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_183;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_183("STRING_816604998");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_183);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltID_183.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_183("STRING_791859296");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_183);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltIDSource_183.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_184;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_184("STRING_1355043954");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_184);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltID_184.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_184("STRING_1113704619");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_184);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltIDSource_184.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_185;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_185("STRING_629846499");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_185);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltID_185.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_185("STRING_1788401299");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_185);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltIDSource_185.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_169;
        FIX::UnderlyingStipType UnderlyingStipType_169("STRING_2069840086");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_169);
        UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipType_169.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_169("STRING_2135794146");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_169);
        UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipValue_169.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_169);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_170;
        FIX::UnderlyingStipType UnderlyingStipType_170("STRING_677422875");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_170);
        UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipType_170.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_170("STRING_495800494");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_170);
        UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipValue_170.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_170);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_171;
        FIX::UnderlyingStipType UnderlyingStipType_171("STRING_1733598824");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_171);
        UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipType_171.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_171("STRING_174812426");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_171);
        UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipValue_171.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_171);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_193;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_193("STRING_1714360447");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyID_193.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_193('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyIDSource_193.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_193(1362696565);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyRole_193.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_193);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_370("STRING_1331127420");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubID_370.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_370(958655724);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubIDType_370.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_371("STRING_1902090751");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubID_371.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_371(1291332497);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubIDType_371.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_372("STRING_819466036");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubID_372.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_372(227360712);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubIDType_372.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_93;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_93("DATA_692119836");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingIssuer_93.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_93(2058701242);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingIssuerLen_93.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_93("DATA_2044713204");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDesc_93.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_93(4902719);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDescLen_93.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_93;
      UnderlyingAdjustedQuantity_93.setString("5704443");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_93);
      UnderlyingInstrument_93.insert(UnderlyingAdjustedQuantity_93.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_93;
      UnderlyingAllocationPercent_93.setString("62.200000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_93);
      UnderlyingInstrument_93.insert(UnderlyingAllocationPercent_93.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_93;
      UnderlyingAttachmentPoint_93.setString("34.270000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_93);
      UnderlyingInstrument_93.insert(UnderlyingAttachmentPoint_93.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_93("STRING_1387049338");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_93);
      UnderlyingInstrument_93.insert(UnderlyingCFICode_93.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_93("STRING_774221868");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_93);
      UnderlyingInstrument_93.insert(UnderlyingCPProgram_93.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_93("STRING_2118077381");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_93);
      UnderlyingInstrument_93.insert(UnderlyingCPRegType_93.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_93;
      UnderlyingCapValue_93.setString("3532703");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_93);
      UnderlyingInstrument_93.insert(UnderlyingCapValue_93.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_93;
      UnderlyingCashAmount_93.setString("14040683");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_93);
      UnderlyingInstrument_93.insert(UnderlyingCashAmount_93.getString());
      FIX::UnderlyingCashType UnderlyingCashType_93("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_93);
      UnderlyingInstrument_93.insert(UnderlyingCashType_93.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_93;
      UnderlyingContractMultiplier_93.setString("4927646");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_93);
      UnderlyingInstrument_93.insert(UnderlyingContractMultiplier_93.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_93(1326424806);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_93);
      UnderlyingInstrument_93.insert(UnderlyingContractMultiplierUnit_93.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_93("COUNTRY_1747305530");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingCountryOfIssue_93.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_93("LOCALMKTDATE_1170187505");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_93);
      UnderlyingInstrument_93.insert(UnderlyingCouponPaymentDate_93.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_93;
      UnderlyingCouponRate_93.setString("53.000000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_93);
      UnderlyingInstrument_93.insert(UnderlyingCouponRate_93.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_93("STRING_1333420706");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_93);
      UnderlyingInstrument_93.insert(UnderlyingCreditRating_93.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_93("USD");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_93);
      UnderlyingInstrument_93.insert(UnderlyingCurrency_93.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_93;
      UnderlyingCurrentValue_93.setString("9002975");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_93);
      UnderlyingInstrument_93.insert(UnderlyingCurrentValue_93.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_93;
      UnderlyingDetachmentPoint_93.setString("52.920000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_93);
      UnderlyingInstrument_93.insert(UnderlyingDetachmentPoint_93.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_93;
      UnderlyingDirtyPrice_93.setString("9340799");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_93);
      UnderlyingInstrument_93.insert(UnderlyingDirtyPrice_93.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_93;
      UnderlyingEndPrice_93.setString("1347666");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_93);
      UnderlyingInstrument_93.insert(UnderlyingEndPrice_93.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_93;
      UnderlyingEndValue_93.setString("2855790");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_93);
      UnderlyingInstrument_93.insert(UnderlyingEndValue_93.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_93(1892735676);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_93);
      UnderlyingInstrument_93.insert(UnderlyingExerciseStyle_93.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_93;
      UnderlyingFXRate_93.setString("20368573");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_93);
      UnderlyingInstrument_93.insert(UnderlyingFXRate_93.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_93('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_93);
      UnderlyingInstrument_93.insert(UnderlyingFXRateCalc_93.getString());
      FIX::UnderlyingFactor UnderlyingFactor_93;
      UnderlyingFactor_93.setString("5647180");
      noUnderlyings_0_1_1.set(UnderlyingFactor_93);
      UnderlyingInstrument_93.insert(UnderlyingFactor_93.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_93(116734418);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_93);
      UnderlyingInstrument_93.insert(UnderlyingFlowScheduleType_93.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_93("STRING_121547750");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_93);
      UnderlyingInstrument_93.insert(UnderlyingInstrRegistry_93.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_93("LOCALMKTDATE_475935658");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_93);
      UnderlyingInstrument_93.insert(UnderlyingIssueDate_93.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_93("STRING_13963974");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_93);
      UnderlyingInstrument_93.insert(UnderlyingIssuer_93.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_93("STRING_126450469");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingLocaleOfIssue_93.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_93("LOCALMKTDATE_1046379998");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityDate_93.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_93("MONTHYEAR_2143810194");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityMonthYear_93.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_93("TZTIMEONLY_889483896");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityTime_93.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_93;
      UnderlyingNotionalPercentageOutstanding_93.setString("56.890000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_93);
      UnderlyingInstrument_93.insert(UnderlyingNotionalPercentageOutstanding_93.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_93('7');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_93);
      UnderlyingInstrument_93.insert(UnderlyingOptAttribute_93.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_93;
      UnderlyingOriginalNotionalPercentageOutstanding_93.setString("76.300000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_93);
      UnderlyingInstrument_93.insert(UnderlyingOriginalNotionalPercentageOutstanding_93.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_93("STRING_639215998");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_93);
      UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasure_93.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_93;
      UnderlyingPriceUnitOfMeasureQty_93.setString("271331");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_93);
      UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasureQty_93.getString());
      FIX::UnderlyingProduct UnderlyingProduct_93(471589014);
      noUnderlyings_0_1_1.set(UnderlyingProduct_93);
      UnderlyingInstrument_93.insert(UnderlyingProduct_93.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_93(1131980628);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_93);
      UnderlyingInstrument_93.insert(UnderlyingPutOrCall_93.getString());
      FIX::UnderlyingPx UnderlyingPx_93;
      UnderlyingPx_93.setString("13535579");
      noUnderlyings_0_1_1.set(UnderlyingPx_93);
      UnderlyingInstrument_93.insert(UnderlyingPx_93.getString());
      FIX::UnderlyingQty UnderlyingQty_93;
      UnderlyingQty_93.setString("714108");
      noUnderlyings_0_1_1.set(UnderlyingQty_93);
      UnderlyingInstrument_93.insert(UnderlyingQty_93.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_93("LOCALMKTDATE_154684485");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_93);
      UnderlyingInstrument_93.insert(UnderlyingRedemptionDate_93.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_93("STRING_1028299593");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_93);
      UnderlyingInstrument_93.insert(UnderlyingRepoCollateralSecurityType_93.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_93;
      UnderlyingRepurchaseRate_93.setString("16.030000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_93);
      UnderlyingInstrument_93.insert(UnderlyingRepurchaseRate_93.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_93(1499684416);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_93);
      UnderlyingInstrument_93.insert(UnderlyingRepurchaseTerm_93.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_93("STRING_599682979");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_93);
      UnderlyingInstrument_93.insert(UnderlyingRestructuringType_93.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_93("STRING_157645461");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityDesc_93.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_93("EXCHANGE_454136061");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityExchange_93.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_93("STRING_1533762930");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityID_93.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_93("STRING_292412063");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityIDSource_93.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_93("STRING_739715126");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_93);
      UnderlyingInstrument_93.insert(UnderlyingSecuritySubType_93.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_93("STRING_1279014958");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityType_93.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_93("STRING_181785769");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_93);
      UnderlyingInstrument_93.insert(UnderlyingSeniority_93.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_93("STRING_169143040");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_93);
      UnderlyingInstrument_93.insert(UnderlyingSettlMethod_93.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_93(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_93);
      UnderlyingInstrument_93.insert(UnderlyingSettlementType_93.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_93;
      UnderlyingStartValue_93.setString("2985201");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_93);
      UnderlyingInstrument_93.insert(UnderlyingStartValue_93.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_93("STRING_290690790");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingStateOrProvinceOfIssue_93.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_93("CHF");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_93);
      UnderlyingInstrument_93.insert(UnderlyingStrikeCurrency_93.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_93;
      UnderlyingStrikePrice_93.setString("4171412");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_93);
      UnderlyingInstrument_93.insert(UnderlyingStrikePrice_93.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_93("STRING_1218565032");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_93);
      UnderlyingInstrument_93.insert(UnderlyingSymbol_93.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_93("STRING_308810708");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_93);
      UnderlyingInstrument_93.insert(UnderlyingSymbolSfx_93.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_93("STRING_1306625156");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_93);
      UnderlyingInstrument_93.insert(UnderlyingTimeUnit_93.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_93("STRING_1504510721");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_93);
      UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasure_93.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_93;
      UnderlyingUnitOfMeasureQty_93.setString("10793591");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_93);
      UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasureQty_93.getString());
      all_values.push_back(UnderlyingInstrument_93);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_186;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_186("STRING_2143726719");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_186);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltID_186.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_186("STRING_1106492257");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_186);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltIDSource_186.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_187;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_187("STRING_490808152");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_187);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltID_187.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_187("STRING_1128223700");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_187);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltIDSource_187.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_172;
        FIX::UnderlyingStipType UnderlyingStipType_172("STRING_562219049");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_172);
        UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipType_172.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_172("STRING_1282908185");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_172);
        UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipValue_172.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_172);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_194;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_194("STRING_1967050653");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyID_194.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_194('6');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyIDSource_194.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_194(1940549122);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyRole_194.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_194);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_373("STRING_1089245015");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubID_373.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_373(1326828404);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubIDType_373.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_1);
    }
    msg.addGroup(noQuoteEntries_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_1;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_18;
    FIX::AgreementCurrency AgreementCurrency_18("EUR");
    noQuoteEntries_0_1.set(AgreementCurrency_18);
    FinancingDetails_18.insert(AgreementCurrency_18.getString());
    FIX::AgreementDate AgreementDate_18("LOCALMKTDATE_458359715");
    noQuoteEntries_0_1.set(AgreementDate_18);
    FinancingDetails_18.insert(AgreementDate_18.getString());
    FIX::AgreementDesc AgreementDesc_18("STRING_451410299");
    noQuoteEntries_0_1.set(AgreementDesc_18);
    FinancingDetails_18.insert(AgreementDesc_18.getString());
    FIX::AgreementID AgreementID_18("STRING_1998103181");
    noQuoteEntries_0_1.set(AgreementID_18);
    FinancingDetails_18.insert(AgreementID_18.getString());
    FIX::DeliveryType DeliveryType_18(2);
    noQuoteEntries_0_1.set(DeliveryType_18);
    FinancingDetails_18.insert(DeliveryType_18.getString());
    FIX::EndDate EndDate_18("LOCALMKTDATE_749930486");
    noQuoteEntries_0_1.set(EndDate_18);
    FinancingDetails_18.insert(EndDate_18.getString());
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("3.230000");
    noQuoteEntries_0_1.set(MarginRatio_18);
    FinancingDetails_18.insert(MarginRatio_18.getString());
    FIX::StartDate StartDate_18("LOCALMKTDATE_326794123");
    noQuoteEntries_0_1.set(StartDate_18);
    FinancingDetails_18.insert(StartDate_18.getString());
    FIX::TerminationType TerminationType_18(4);
    noQuoteEntries_0_1.set(TerminationType_18);
    FinancingDetails_18.insert(TerminationType_18.getString());
    all_values.push_back(FinancingDetails_18);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_101;
      FIX::EncodedLegIssuer EncodedLegIssuer_101("DATA_1545359155");
      noLegs_1_1_0.set(EncodedLegIssuer_101);
      InstrumentLeg_101.insert(EncodedLegIssuer_101.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_101(1371225355);
      noLegs_1_1_0.set(EncodedLegIssuerLen_101);
      InstrumentLeg_101.insert(EncodedLegIssuerLen_101.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_101("DATA_1865076738");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_101);
      InstrumentLeg_101.insert(EncodedLegSecurityDesc_101.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_101(902386228);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_101);
      InstrumentLeg_101.insert(EncodedLegSecurityDescLen_101.getString());
      FIX::LegCFICode LegCFICode_101("STRING_303100830");
      noLegs_1_1_0.set(LegCFICode_101);
      InstrumentLeg_101.insert(LegCFICode_101.getString());
      FIX::LegContractMultiplier LegContractMultiplier_101;
      LegContractMultiplier_101.setString("18842958");
      noLegs_1_1_0.set(LegContractMultiplier_101);
      InstrumentLeg_101.insert(LegContractMultiplier_101.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_101(898629300);
      noLegs_1_1_0.set(LegContractMultiplierUnit_101);
      InstrumentLeg_101.insert(LegContractMultiplierUnit_101.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_101("MONTHYEAR_1409593088");
      noLegs_1_1_0.set(LegContractSettlMonth_101);
      InstrumentLeg_101.insert(LegContractSettlMonth_101.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_101("COUNTRY_227620381");
      noLegs_1_1_0.set(LegCountryOfIssue_101);
      InstrumentLeg_101.insert(LegCountryOfIssue_101.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_101("LOCALMKTDATE_2026853000");
      noLegs_1_1_0.set(LegCouponPaymentDate_101);
      InstrumentLeg_101.insert(LegCouponPaymentDate_101.getString());
      FIX::LegCouponRate LegCouponRate_101;
      LegCouponRate_101.setString("96.380000");
      noLegs_1_1_0.set(LegCouponRate_101);
      InstrumentLeg_101.insert(LegCouponRate_101.getString());
      FIX::LegCreditRating LegCreditRating_101("STRING_789839430");
      noLegs_1_1_0.set(LegCreditRating_101);
      InstrumentLeg_101.insert(LegCreditRating_101.getString());
      FIX::LegCurrency LegCurrency_101("CHF");
      noLegs_1_1_0.set(LegCurrency_101);
      InstrumentLeg_101.insert(LegCurrency_101.getString());
      FIX::LegDatedDate LegDatedDate_101("LOCALMKTDATE_609406435");
      noLegs_1_1_0.set(LegDatedDate_101);
      InstrumentLeg_101.insert(LegDatedDate_101.getString());
      FIX::LegExerciseStyle LegExerciseStyle_101(1797386491);
      noLegs_1_1_0.set(LegExerciseStyle_101);
      InstrumentLeg_101.insert(LegExerciseStyle_101.getString());
      FIX::LegFactor LegFactor_101;
      LegFactor_101.setString("7086076");
      noLegs_1_1_0.set(LegFactor_101);
      InstrumentLeg_101.insert(LegFactor_101.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_101(586618902);
      noLegs_1_1_0.set(LegFlowScheduleType_101);
      InstrumentLeg_101.insert(LegFlowScheduleType_101.getString());
      FIX::LegInstrRegistry LegInstrRegistry_101("STRING_739147858");
      noLegs_1_1_0.set(LegInstrRegistry_101);
      InstrumentLeg_101.insert(LegInstrRegistry_101.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_101("LOCALMKTDATE_2035436011");
      noLegs_1_1_0.set(LegInterestAccrualDate_101);
      InstrumentLeg_101.insert(LegInterestAccrualDate_101.getString());
      FIX::LegIssueDate LegIssueDate_101("LOCALMKTDATE_856243432");
      noLegs_1_1_0.set(LegIssueDate_101);
      InstrumentLeg_101.insert(LegIssueDate_101.getString());
      FIX::LegIssuer LegIssuer_101("STRING_420624351");
      noLegs_1_1_0.set(LegIssuer_101);
      InstrumentLeg_101.insert(LegIssuer_101.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_101("STRING_346312078");
      noLegs_1_1_0.set(LegLocaleOfIssue_101);
      InstrumentLeg_101.insert(LegLocaleOfIssue_101.getString());
      FIX::LegMaturityDate LegMaturityDate_101("LOCALMKTDATE_1307653731");
      noLegs_1_1_0.set(LegMaturityDate_101);
      InstrumentLeg_101.insert(LegMaturityDate_101.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_101("MONTHYEAR_271243884");
      noLegs_1_1_0.set(LegMaturityMonthYear_101);
      InstrumentLeg_101.insert(LegMaturityMonthYear_101.getString());
      FIX::LegMaturityTime LegMaturityTime_101("TZTIMEONLY_500921168");
      noLegs_1_1_0.set(LegMaturityTime_101);
      InstrumentLeg_101.insert(LegMaturityTime_101.getString());
      FIX::LegOptAttribute LegOptAttribute_101('2');
      noLegs_1_1_0.set(LegOptAttribute_101);
      InstrumentLeg_101.insert(LegOptAttribute_101.getString());
      FIX::LegOptionRatio LegOptionRatio_101;
      LegOptionRatio_101.setString("4125542");
      noLegs_1_1_0.set(LegOptionRatio_101);
      InstrumentLeg_101.insert(LegOptionRatio_101.getString());
      FIX::LegPool LegPool_101("STRING_827715292");
      noLegs_1_1_0.set(LegPool_101);
      InstrumentLeg_101.insert(LegPool_101.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_101("STRING_972515216");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_101);
      InstrumentLeg_101.insert(LegPriceUnitOfMeasure_101.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_101;
      LegPriceUnitOfMeasureQty_101.setString("9710057");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_101);
      InstrumentLeg_101.insert(LegPriceUnitOfMeasureQty_101.getString());
      FIX::LegProduct LegProduct_101(225590799);
      noLegs_1_1_0.set(LegProduct_101);
      InstrumentLeg_101.insert(LegProduct_101.getString());
      FIX::LegPutOrCall LegPutOrCall_101(196256924);
      noLegs_1_1_0.set(LegPutOrCall_101);
      InstrumentLeg_101.insert(LegPutOrCall_101.getString());
      FIX::LegRatioQty LegRatioQty_101;
      LegRatioQty_101.setString("6885988");
      noLegs_1_1_0.set(LegRatioQty_101);
      InstrumentLeg_101.insert(LegRatioQty_101.getString());
      FIX::LegRedemptionDate LegRedemptionDate_101("LOCALMKTDATE_1127977028");
      noLegs_1_1_0.set(LegRedemptionDate_101);
      InstrumentLeg_101.insert(LegRedemptionDate_101.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_101("STRING_499357754");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_101);
      InstrumentLeg_101.insert(LegRepoCollateralSecurityType_101.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_101;
      LegRepurchaseRate_101.setString("11.090000");
      noLegs_1_1_0.set(LegRepurchaseRate_101);
      InstrumentLeg_101.insert(LegRepurchaseRate_101.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_101(2026606328);
      noLegs_1_1_0.set(LegRepurchaseTerm_101);
      InstrumentLeg_101.insert(LegRepurchaseTerm_101.getString());
      FIX::LegSecurityDesc LegSecurityDesc_101("STRING_1908950842");
      noLegs_1_1_0.set(LegSecurityDesc_101);
      InstrumentLeg_101.insert(LegSecurityDesc_101.getString());
      FIX::LegSecurityExchange LegSecurityExchange_101("EXCHANGE_653031490");
      noLegs_1_1_0.set(LegSecurityExchange_101);
      InstrumentLeg_101.insert(LegSecurityExchange_101.getString());
      FIX::LegSecurityID LegSecurityID_101("STRING_1905975680");
      noLegs_1_1_0.set(LegSecurityID_101);
      InstrumentLeg_101.insert(LegSecurityID_101.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_101("STRING_1483626832");
      noLegs_1_1_0.set(LegSecurityIDSource_101);
      InstrumentLeg_101.insert(LegSecurityIDSource_101.getString());
      FIX::LegSecuritySubType LegSecuritySubType_101("STRING_1442870920");
      noLegs_1_1_0.set(LegSecuritySubType_101);
      InstrumentLeg_101.insert(LegSecuritySubType_101.getString());
      FIX::LegSecurityType LegSecurityType_101("STRING_920769569");
      noLegs_1_1_0.set(LegSecurityType_101);
      InstrumentLeg_101.insert(LegSecurityType_101.getString());
      FIX::LegSide LegSide_101('2');
      noLegs_1_1_0.set(LegSide_101);
      InstrumentLeg_101.insert(LegSide_101.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_101("STRING_2052277356");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_101);
      InstrumentLeg_101.insert(LegStateOrProvinceOfIssue_101.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_101("JPY");
      noLegs_1_1_0.set(LegStrikeCurrency_101);
      InstrumentLeg_101.insert(LegStrikeCurrency_101.getString());
      FIX::LegStrikePrice LegStrikePrice_101;
      LegStrikePrice_101.setString("4914126");
      noLegs_1_1_0.set(LegStrikePrice_101);
      InstrumentLeg_101.insert(LegStrikePrice_101.getString());
      FIX::LegSymbol LegSymbol_101("STRING_1309820271");
      noLegs_1_1_0.set(LegSymbol_101);
      InstrumentLeg_101.insert(LegSymbol_101.getString());
      FIX::LegSymbolSfx LegSymbolSfx_101("STRING_848245288");
      noLegs_1_1_0.set(LegSymbolSfx_101);
      InstrumentLeg_101.insert(LegSymbolSfx_101.getString());
      FIX::LegTimeUnit LegTimeUnit_101("STRING_1347656042");
      noLegs_1_1_0.set(LegTimeUnit_101);
      InstrumentLeg_101.insert(LegTimeUnit_101.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_101("STRING_1730444623");
      noLegs_1_1_0.set(LegUnitOfMeasure_101);
      InstrumentLeg_101.insert(LegUnitOfMeasure_101.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_101;
      LegUnitOfMeasureQty_101.setString("11945573");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_101);
      InstrumentLeg_101.insert(LegUnitOfMeasureQty_101.getString());
      all_values.push_back(InstrumentLeg_101);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_199;
        FIX::LegSecurityAltID LegSecurityAltID_199("STRING_2001688507");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_199);
        LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltID_199.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_199("STRING_1695478535");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_199);
        LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltIDSource_199.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_199);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_102;
      FIX::EncodedLegIssuer EncodedLegIssuer_102("DATA_417926694");
      noLegs_1_1_1.set(EncodedLegIssuer_102);
      InstrumentLeg_102.insert(EncodedLegIssuer_102.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_102(266759067);
      noLegs_1_1_1.set(EncodedLegIssuerLen_102);
      InstrumentLeg_102.insert(EncodedLegIssuerLen_102.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_102("DATA_375710179");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_102);
      InstrumentLeg_102.insert(EncodedLegSecurityDesc_102.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_102(1390441910);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_102);
      InstrumentLeg_102.insert(EncodedLegSecurityDescLen_102.getString());
      FIX::LegCFICode LegCFICode_102("STRING_1237764857");
      noLegs_1_1_1.set(LegCFICode_102);
      InstrumentLeg_102.insert(LegCFICode_102.getString());
      FIX::LegContractMultiplier LegContractMultiplier_102;
      LegContractMultiplier_102.setString("6013009");
      noLegs_1_1_1.set(LegContractMultiplier_102);
      InstrumentLeg_102.insert(LegContractMultiplier_102.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_102(1586698834);
      noLegs_1_1_1.set(LegContractMultiplierUnit_102);
      InstrumentLeg_102.insert(LegContractMultiplierUnit_102.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_102("MONTHYEAR_1926363737");
      noLegs_1_1_1.set(LegContractSettlMonth_102);
      InstrumentLeg_102.insert(LegContractSettlMonth_102.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_102("COUNTRY_1729278006");
      noLegs_1_1_1.set(LegCountryOfIssue_102);
      InstrumentLeg_102.insert(LegCountryOfIssue_102.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_102("LOCALMKTDATE_2086056589");
      noLegs_1_1_1.set(LegCouponPaymentDate_102);
      InstrumentLeg_102.insert(LegCouponPaymentDate_102.getString());
      FIX::LegCouponRate LegCouponRate_102;
      LegCouponRate_102.setString("11.980000");
      noLegs_1_1_1.set(LegCouponRate_102);
      InstrumentLeg_102.insert(LegCouponRate_102.getString());
      FIX::LegCreditRating LegCreditRating_102("STRING_1608400686");
      noLegs_1_1_1.set(LegCreditRating_102);
      InstrumentLeg_102.insert(LegCreditRating_102.getString());
      FIX::LegCurrency LegCurrency_102("JPY");
      noLegs_1_1_1.set(LegCurrency_102);
      InstrumentLeg_102.insert(LegCurrency_102.getString());
      FIX::LegDatedDate LegDatedDate_102("LOCALMKTDATE_1366892718");
      noLegs_1_1_1.set(LegDatedDate_102);
      InstrumentLeg_102.insert(LegDatedDate_102.getString());
      FIX::LegExerciseStyle LegExerciseStyle_102(1183666968);
      noLegs_1_1_1.set(LegExerciseStyle_102);
      InstrumentLeg_102.insert(LegExerciseStyle_102.getString());
      FIX::LegFactor LegFactor_102;
      LegFactor_102.setString("1527099");
      noLegs_1_1_1.set(LegFactor_102);
      InstrumentLeg_102.insert(LegFactor_102.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_102(140178640);
      noLegs_1_1_1.set(LegFlowScheduleType_102);
      InstrumentLeg_102.insert(LegFlowScheduleType_102.getString());
      FIX::LegInstrRegistry LegInstrRegistry_102("STRING_1435352285");
      noLegs_1_1_1.set(LegInstrRegistry_102);
      InstrumentLeg_102.insert(LegInstrRegistry_102.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_102("LOCALMKTDATE_57503669");
      noLegs_1_1_1.set(LegInterestAccrualDate_102);
      InstrumentLeg_102.insert(LegInterestAccrualDate_102.getString());
      FIX::LegIssueDate LegIssueDate_102("LOCALMKTDATE_710851053");
      noLegs_1_1_1.set(LegIssueDate_102);
      InstrumentLeg_102.insert(LegIssueDate_102.getString());
      FIX::LegIssuer LegIssuer_102("STRING_248161562");
      noLegs_1_1_1.set(LegIssuer_102);
      InstrumentLeg_102.insert(LegIssuer_102.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_102("STRING_548916279");
      noLegs_1_1_1.set(LegLocaleOfIssue_102);
      InstrumentLeg_102.insert(LegLocaleOfIssue_102.getString());
      FIX::LegMaturityDate LegMaturityDate_102("LOCALMKTDATE_2020671324");
      noLegs_1_1_1.set(LegMaturityDate_102);
      InstrumentLeg_102.insert(LegMaturityDate_102.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_102("MONTHYEAR_1096406850");
      noLegs_1_1_1.set(LegMaturityMonthYear_102);
      InstrumentLeg_102.insert(LegMaturityMonthYear_102.getString());
      FIX::LegMaturityTime LegMaturityTime_102("TZTIMEONLY_1896572321");
      noLegs_1_1_1.set(LegMaturityTime_102);
      InstrumentLeg_102.insert(LegMaturityTime_102.getString());
      FIX::LegOptAttribute LegOptAttribute_102('1');
      noLegs_1_1_1.set(LegOptAttribute_102);
      InstrumentLeg_102.insert(LegOptAttribute_102.getString());
      FIX::LegOptionRatio LegOptionRatio_102;
      LegOptionRatio_102.setString("1434805");
      noLegs_1_1_1.set(LegOptionRatio_102);
      InstrumentLeg_102.insert(LegOptionRatio_102.getString());
      FIX::LegPool LegPool_102("STRING_256914798");
      noLegs_1_1_1.set(LegPool_102);
      InstrumentLeg_102.insert(LegPool_102.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_102("STRING_1457837159");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_102);
      InstrumentLeg_102.insert(LegPriceUnitOfMeasure_102.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_102;
      LegPriceUnitOfMeasureQty_102.setString("18389591");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_102);
      InstrumentLeg_102.insert(LegPriceUnitOfMeasureQty_102.getString());
      FIX::LegProduct LegProduct_102(674841492);
      noLegs_1_1_1.set(LegProduct_102);
      InstrumentLeg_102.insert(LegProduct_102.getString());
      FIX::LegPutOrCall LegPutOrCall_102(1724596226);
      noLegs_1_1_1.set(LegPutOrCall_102);
      InstrumentLeg_102.insert(LegPutOrCall_102.getString());
      FIX::LegRatioQty LegRatioQty_102;
      LegRatioQty_102.setString("671856");
      noLegs_1_1_1.set(LegRatioQty_102);
      InstrumentLeg_102.insert(LegRatioQty_102.getString());
      FIX::LegRedemptionDate LegRedemptionDate_102("LOCALMKTDATE_2065283402");
      noLegs_1_1_1.set(LegRedemptionDate_102);
      InstrumentLeg_102.insert(LegRedemptionDate_102.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_102("STRING_814877435");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_102);
      InstrumentLeg_102.insert(LegRepoCollateralSecurityType_102.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_102;
      LegRepurchaseRate_102.setString("66.130000");
      noLegs_1_1_1.set(LegRepurchaseRate_102);
      InstrumentLeg_102.insert(LegRepurchaseRate_102.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_102(1504498589);
      noLegs_1_1_1.set(LegRepurchaseTerm_102);
      InstrumentLeg_102.insert(LegRepurchaseTerm_102.getString());
      FIX::LegSecurityDesc LegSecurityDesc_102("STRING_593757524");
      noLegs_1_1_1.set(LegSecurityDesc_102);
      InstrumentLeg_102.insert(LegSecurityDesc_102.getString());
      FIX::LegSecurityExchange LegSecurityExchange_102("EXCHANGE_250280971");
      noLegs_1_1_1.set(LegSecurityExchange_102);
      InstrumentLeg_102.insert(LegSecurityExchange_102.getString());
      FIX::LegSecurityID LegSecurityID_102("STRING_1443071530");
      noLegs_1_1_1.set(LegSecurityID_102);
      InstrumentLeg_102.insert(LegSecurityID_102.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_102("STRING_798048723");
      noLegs_1_1_1.set(LegSecurityIDSource_102);
      InstrumentLeg_102.insert(LegSecurityIDSource_102.getString());
      FIX::LegSecuritySubType LegSecuritySubType_102("STRING_1858681658");
      noLegs_1_1_1.set(LegSecuritySubType_102);
      InstrumentLeg_102.insert(LegSecuritySubType_102.getString());
      FIX::LegSecurityType LegSecurityType_102("STRING_1143111665");
      noLegs_1_1_1.set(LegSecurityType_102);
      InstrumentLeg_102.insert(LegSecurityType_102.getString());
      FIX::LegSide LegSide_102('1');
      noLegs_1_1_1.set(LegSide_102);
      InstrumentLeg_102.insert(LegSide_102.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_102("STRING_1078090728");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_102);
      InstrumentLeg_102.insert(LegStateOrProvinceOfIssue_102.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_102("GBP");
      noLegs_1_1_1.set(LegStrikeCurrency_102);
      InstrumentLeg_102.insert(LegStrikeCurrency_102.getString());
      FIX::LegStrikePrice LegStrikePrice_102;
      LegStrikePrice_102.setString("12182693");
      noLegs_1_1_1.set(LegStrikePrice_102);
      InstrumentLeg_102.insert(LegStrikePrice_102.getString());
      FIX::LegSymbol LegSymbol_102("STRING_1614647271");
      noLegs_1_1_1.set(LegSymbol_102);
      InstrumentLeg_102.insert(LegSymbol_102.getString());
      FIX::LegSymbolSfx LegSymbolSfx_102("STRING_1865585041");
      noLegs_1_1_1.set(LegSymbolSfx_102);
      InstrumentLeg_102.insert(LegSymbolSfx_102.getString());
      FIX::LegTimeUnit LegTimeUnit_102("STRING_1929120421");
      noLegs_1_1_1.set(LegTimeUnit_102);
      InstrumentLeg_102.insert(LegTimeUnit_102.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_102("STRING_1862808833");
      noLegs_1_1_1.set(LegUnitOfMeasure_102);
      InstrumentLeg_102.insert(LegUnitOfMeasure_102.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_102;
      LegUnitOfMeasureQty_102.setString("2670176");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_102);
      InstrumentLeg_102.insert(LegUnitOfMeasureQty_102.getString());
      all_values.push_back(InstrumentLeg_102);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_200;
        FIX::LegSecurityAltID LegSecurityAltID_200("STRING_811732035");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_200);
        LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltID_200.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_200("STRING_16106345");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_200);
        LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltIDSource_200.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_200);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_67;
    FIX::AttachmentPoint AttachmentPoint_67;
    AttachmentPoint_67.setString("67.490000");
    noQuoteEntries_0_1.set(AttachmentPoint_67);
    Instrument_67.insert(AttachmentPoint_67.getString());
    FIX::CFICode CFICode_67("STRING_955212603");
    noQuoteEntries_0_1.set(CFICode_67);
    Instrument_67.insert(CFICode_67.getString());
    FIX::CPProgram CPProgram_67(99);
    noQuoteEntries_0_1.set(CPProgram_67);
    Instrument_67.insert(CPProgram_67.getString());
    FIX::CPRegType CPRegType_67("STRING_568810260");
    noQuoteEntries_0_1.set(CPRegType_67);
    Instrument_67.insert(CPRegType_67.getString());
    FIX::CapPrice CapPrice_67;
    CapPrice_67.setString("6466880");
    noQuoteEntries_0_1.set(CapPrice_67);
    Instrument_67.insert(CapPrice_67.getString());
    FIX::ContractMultiplier ContractMultiplier_67;
    ContractMultiplier_67.setString("9478626");
    noQuoteEntries_0_1.set(ContractMultiplier_67);
    Instrument_67.insert(ContractMultiplier_67.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_67(0);
    noQuoteEntries_0_1.set(ContractMultiplierUnit_67);
    Instrument_67.insert(ContractMultiplierUnit_67.getString());
    FIX::ContractSettlMonth ContractSettlMonth_67("MONTHYEAR_713873693");
    noQuoteEntries_0_1.set(ContractSettlMonth_67);
    Instrument_67.insert(ContractSettlMonth_67.getString());
    FIX::CountryOfIssue CountryOfIssue_67("COUNTRY_865662390");
    noQuoteEntries_0_1.set(CountryOfIssue_67);
    Instrument_67.insert(CountryOfIssue_67.getString());
    FIX::CouponPaymentDate CouponPaymentDate_67("LOCALMKTDATE_960800273");
    noQuoteEntries_0_1.set(CouponPaymentDate_67);
    Instrument_67.insert(CouponPaymentDate_67.getString());
    FIX::CouponRate CouponRate_67;
    CouponRate_67.setString("3.060000");
    noQuoteEntries_0_1.set(CouponRate_67);
    Instrument_67.insert(CouponRate_67.getString());
    FIX::CreditRating CreditRating_67("STRING_222677331");
    noQuoteEntries_0_1.set(CreditRating_67);
    Instrument_67.insert(CreditRating_67.getString());
    FIX::DatedDate DatedDate_67("LOCALMKTDATE_1554557798");
    noQuoteEntries_0_1.set(DatedDate_67);
    Instrument_67.insert(DatedDate_67.getString());
    FIX::DetachmentPoint DetachmentPoint_67;
    DetachmentPoint_67.setString("12.780000");
    noQuoteEntries_0_1.set(DetachmentPoint_67);
    Instrument_67.insert(DetachmentPoint_67.getString());
    FIX::EncodedIssuer EncodedIssuer_67("DATA_1665748861");
    noQuoteEntries_0_1.set(EncodedIssuer_67);
    Instrument_67.insert(EncodedIssuer_67.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_67(205122873);
    noQuoteEntries_0_1.set(EncodedIssuerLen_67);
    Instrument_67.insert(EncodedIssuerLen_67.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_67("DATA_1343839288");
    noQuoteEntries_0_1.set(EncodedSecurityDesc_67);
    Instrument_67.insert(EncodedSecurityDesc_67.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_67(661376878);
    noQuoteEntries_0_1.set(EncodedSecurityDescLen_67);
    Instrument_67.insert(EncodedSecurityDescLen_67.getString());
    FIX::ExerciseStyle ExerciseStyle_67(1);
    noQuoteEntries_0_1.set(ExerciseStyle_67);
    Instrument_67.insert(ExerciseStyle_67.getString());
    FIX::Factor Factor_67;
    Factor_67.setString("2744463");
    noQuoteEntries_0_1.set(Factor_67);
    Instrument_67.insert(Factor_67.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_67(true);
    noQuoteEntries_0_1.set(FlexProductEligibilityIndicator_67);
    Instrument_67.insert(FlexProductEligibilityIndicator_67.getString());
    FIX::FlexibleIndicator FlexibleIndicator_67(false);
    noQuoteEntries_0_1.set(FlexibleIndicator_67);
    Instrument_67.insert(FlexibleIndicator_67.getString());
    FIX::FloorPrice FloorPrice_67;
    FloorPrice_67.setString("14927157");
    noQuoteEntries_0_1.set(FloorPrice_67);
    Instrument_67.insert(FloorPrice_67.getString());
    FIX::FlowScheduleType FlowScheduleType_67(2);
    noQuoteEntries_0_1.set(FlowScheduleType_67);
    Instrument_67.insert(FlowScheduleType_67.getString());
    FIX::InstrRegistry InstrRegistry_67("STRING_1239193402");
    noQuoteEntries_0_1.set(InstrRegistry_67);
    Instrument_67.insert(InstrRegistry_67.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_67('1');
    noQuoteEntries_0_1.set(InstrmtAssignmentMethod_67);
    Instrument_67.insert(InstrmtAssignmentMethod_67.getString());
    FIX::InterestAccrualDate InterestAccrualDate_67("LOCALMKTDATE_23160672");
    noQuoteEntries_0_1.set(InterestAccrualDate_67);
    Instrument_67.insert(InterestAccrualDate_67.getString());
    FIX::IssueDate IssueDate_67("LOCALMKTDATE_1506211075");
    noQuoteEntries_0_1.set(IssueDate_67);
    Instrument_67.insert(IssueDate_67.getString());
    FIX::Issuer Issuer_67("STRING_929176960");
    noQuoteEntries_0_1.set(Issuer_67);
    Instrument_67.insert(Issuer_67.getString());
    FIX::ListMethod ListMethod_67(1);
    noQuoteEntries_0_1.set(ListMethod_67);
    Instrument_67.insert(ListMethod_67.getString());
    FIX::LocaleOfIssue LocaleOfIssue_67("STRING_1522317420");
    noQuoteEntries_0_1.set(LocaleOfIssue_67);
    Instrument_67.insert(LocaleOfIssue_67.getString());
    FIX::MaturityDate MaturityDate_67("LOCALMKTDATE_40150062");
    noQuoteEntries_0_1.set(MaturityDate_67);
    Instrument_67.insert(MaturityDate_67.getString());
    FIX::MaturityMonthYear MaturityMonthYear_67("MONTHYEAR_1790105310");
    noQuoteEntries_0_1.set(MaturityMonthYear_67);
    Instrument_67.insert(MaturityMonthYear_67.getString());
    FIX::MaturityTime MaturityTime_67("TZTIMEONLY_1795338564");
    noQuoteEntries_0_1.set(MaturityTime_67);
    Instrument_67.insert(MaturityTime_67.getString());
    FIX::MinPriceIncrement MinPriceIncrement_67;
    MinPriceIncrement_67.setString("6089603");
    noQuoteEntries_0_1.set(MinPriceIncrement_67);
    Instrument_67.insert(MinPriceIncrement_67.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_67;
    MinPriceIncrementAmount_67.setString("2893097");
    noQuoteEntries_0_1.set(MinPriceIncrementAmount_67);
    Instrument_67.insert(MinPriceIncrementAmount_67.getString());
    FIX::NTPositionLimit NTPositionLimit_67(595717551);
    noQuoteEntries_0_1.set(NTPositionLimit_67);
    Instrument_67.insert(NTPositionLimit_67.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_67;
    NotionalPercentageOutstanding_67.setString("31.610000");
    noQuoteEntries_0_1.set(NotionalPercentageOutstanding_67);
    Instrument_67.insert(NotionalPercentageOutstanding_67.getString());
    FIX::OptAttribute OptAttribute_67('1');
    noQuoteEntries_0_1.set(OptAttribute_67);
    Instrument_67.insert(OptAttribute_67.getString());
    FIX::OptPayoutAmount OptPayoutAmount_67;
    OptPayoutAmount_67.setString("14613799");
    noQuoteEntries_0_1.set(OptPayoutAmount_67);
    Instrument_67.insert(OptPayoutAmount_67.getString());
    FIX::OptPayoutType OptPayoutType_67(1);
    noQuoteEntries_0_1.set(OptPayoutType_67);
    Instrument_67.insert(OptPayoutType_67.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_67;
    OriginalNotionalPercentageOutstanding_67.setString("0.730000");
    noQuoteEntries_0_1.set(OriginalNotionalPercentageOutstanding_67);
    Instrument_67.insert(OriginalNotionalPercentageOutstanding_67.getString());
    FIX::Pool Pool_67("STRING_1684057272");
    noQuoteEntries_0_1.set(Pool_67);
    Instrument_67.insert(Pool_67.getString());
    FIX::PositionLimit PositionLimit_67(1122757584);
    noQuoteEntries_0_1.set(PositionLimit_67);
    Instrument_67.insert(PositionLimit_67.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_67("STRING_PCTPAR");
    noQuoteEntries_0_1.set(PriceQuoteMethod_67);
    Instrument_67.insert(PriceQuoteMethod_67.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_67("STRING_1202322485");
    noQuoteEntries_0_1.set(PriceUnitOfMeasure_67);
    Instrument_67.insert(PriceUnitOfMeasure_67.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_67;
    PriceUnitOfMeasureQty_67.setString("13278804");
    noQuoteEntries_0_1.set(PriceUnitOfMeasureQty_67);
    Instrument_67.insert(PriceUnitOfMeasureQty_67.getString());
    FIX::Product Product_69(1);
    noQuoteEntries_0_1.set(Product_69);
    Instrument_67.insert(Product_69.getString());
    FIX::ProductComplex ProductComplex_67("STRING_1863699364");
    noQuoteEntries_0_1.set(ProductComplex_67);
    Instrument_67.insert(ProductComplex_67.getString());
    FIX::PutOrCall PutOrCall_67(0);
    noQuoteEntries_0_1.set(PutOrCall_67);
    Instrument_67.insert(PutOrCall_67.getString());
    FIX::RedemptionDate RedemptionDate_67("LOCALMKTDATE_1341503360");
    noQuoteEntries_0_1.set(RedemptionDate_67);
    Instrument_67.insert(RedemptionDate_67.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_67("STRING_556887580");
    noQuoteEntries_0_1.set(RepoCollateralSecurityType_67);
    Instrument_67.insert(RepoCollateralSecurityType_67.getString());
    FIX::RepurchaseRate RepurchaseRate_67;
    RepurchaseRate_67.setString("94.550000");
    noQuoteEntries_0_1.set(RepurchaseRate_67);
    Instrument_67.insert(RepurchaseRate_67.getString());
    FIX::RepurchaseTerm RepurchaseTerm_67(686735449);
    noQuoteEntries_0_1.set(RepurchaseTerm_67);
    Instrument_67.insert(RepurchaseTerm_67.getString());
    FIX::RestructuringType RestructuringType_67("STRING_XR");
    noQuoteEntries_0_1.set(RestructuringType_67);
    Instrument_67.insert(RestructuringType_67.getString());
    FIX::SecurityDesc SecurityDesc_67("STRING_1653692857");
    noQuoteEntries_0_1.set(SecurityDesc_67);
    Instrument_67.insert(SecurityDesc_67.getString());
    FIX::SecurityExchange SecurityExchange_67("EXCHANGE_1961087959");
    noQuoteEntries_0_1.set(SecurityExchange_67);
    Instrument_67.insert(SecurityExchange_67.getString());
    FIX::SecurityGroup SecurityGroup_67("STRING_887883739");
    noQuoteEntries_0_1.set(SecurityGroup_67);
    Instrument_67.insert(SecurityGroup_67.getString());
    FIX::SecurityID SecurityID_67("STRING_1012420284");
    noQuoteEntries_0_1.set(SecurityID_67);
    Instrument_67.insert(SecurityID_67.getString());
    FIX::SecurityIDSource SecurityIDSource_67("STRING_3");
    noQuoteEntries_0_1.set(SecurityIDSource_67);
    Instrument_67.insert(SecurityIDSource_67.getString());
    FIX::SecurityStatus SecurityStatus_67("STRING_1");
    noQuoteEntries_0_1.set(SecurityStatus_67);
    Instrument_67.insert(SecurityStatus_67.getString());
    FIX::SecuritySubType SecuritySubType_68("STRING_387254057");
    noQuoteEntries_0_1.set(SecuritySubType_68);
    Instrument_67.insert(SecuritySubType_68.getString());
    FIX::SecurityType SecurityType_69("STRING_PROV");
    noQuoteEntries_0_1.set(SecurityType_69);
    Instrument_67.insert(SecurityType_69.getString());
    FIX::Seniority Seniority_67("STRING_SB");
    noQuoteEntries_0_1.set(Seniority_67);
    Instrument_67.insert(Seniority_67.getString());
    FIX::SettlMethod SettlMethod_67('P');
    noQuoteEntries_0_1.set(SettlMethod_67);
    Instrument_67.insert(SettlMethod_67.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_67("STRING_1391891656");
    noQuoteEntries_0_1.set(SettleOnOpenFlag_67);
    Instrument_67.insert(SettleOnOpenFlag_67.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_67("STRING_1654707830");
    noQuoteEntries_0_1.set(StateOrProvinceOfIssue_67);
    Instrument_67.insert(StateOrProvinceOfIssue_67.getString());
    FIX::StrikeCurrency StrikeCurrency_67("CAN");
    noQuoteEntries_0_1.set(StrikeCurrency_67);
    Instrument_67.insert(StrikeCurrency_67.getString());
    FIX::StrikeMultiplier StrikeMultiplier_67;
    StrikeMultiplier_67.setString("5104075");
    noQuoteEntries_0_1.set(StrikeMultiplier_67);
    Instrument_67.insert(StrikeMultiplier_67.getString());
    FIX::StrikePrice StrikePrice_67;
    StrikePrice_67.setString("20922064");
    noQuoteEntries_0_1.set(StrikePrice_67);
    Instrument_67.insert(StrikePrice_67.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_67(5);
    noQuoteEntries_0_1.set(StrikePriceBoundaryMethod_67);
    Instrument_67.insert(StrikePriceBoundaryMethod_67.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_67;
    StrikePriceBoundaryPrecision_67.setString("76.700000");
    noQuoteEntries_0_1.set(StrikePriceBoundaryPrecision_67);
    Instrument_67.insert(StrikePriceBoundaryPrecision_67.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_67(3);
    noQuoteEntries_0_1.set(StrikePriceDeterminationMethod_67);
    Instrument_67.insert(StrikePriceDeterminationMethod_67.getString());
    FIX::StrikeValue StrikeValue_67;
    StrikeValue_67.setString("6902485");
    noQuoteEntries_0_1.set(StrikeValue_67);
    Instrument_67.insert(StrikeValue_67.getString());
    FIX::Symbol Symbol_67("STRING_471685374");
    noQuoteEntries_0_1.set(Symbol_67);
    Instrument_67.insert(Symbol_67.getString());
    FIX::SymbolSfx SymbolSfx_67("STRING_CD");
    noQuoteEntries_0_1.set(SymbolSfx_67);
    Instrument_67.insert(SymbolSfx_67.getString());
    FIX::TimeUnit TimeUnit_67("STRING_Wk");
    noQuoteEntries_0_1.set(TimeUnit_67);
    Instrument_67.insert(TimeUnit_67.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_67(2);
    noQuoteEntries_0_1.set(UnderlyingPriceDeterminationMethod_67);
    Instrument_67.insert(UnderlyingPriceDeterminationMethod_67.getString());
    FIX::UnitOfMeasure UnitOfMeasure_67("STRING_MMbbl");
    noQuoteEntries_0_1.set(UnitOfMeasure_67);
    Instrument_67.insert(UnitOfMeasure_67.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_67;
    UnitOfMeasureQty_67.setString("9115364");
    noQuoteEntries_0_1.set(UnitOfMeasureQty_67);
    Instrument_67.insert(UnitOfMeasureQty_67.getString());
    FIX::ValuationMethod ValuationMethod_67("STRING_FUTDA");
    noQuoteEntries_0_1.set(ValuationMethod_67);
    Instrument_67.insert(ValuationMethod_67.getString());
    all_values.push_back(Instrument_67);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_131;
      FIX::ComplexEventCondition ComplexEventCondition_131(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventCondition_131.getString());
      FIX::ComplexEventPrice ComplexEventPrice_131;
      ComplexEventPrice_131.setString("14194975");
      noComplexEvents_1_1_0.set(ComplexEventPrice_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPrice_131.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_131(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryMethod_131.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_131;
      ComplexEventPriceBoundaryPrecision_131.setString("51.080000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryPrecision_131.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_131(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceTimeType_131.getString());
      FIX::ComplexEventType ComplexEventType_131(7);
      noComplexEvents_1_1_0.set(ComplexEventType_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventType_131.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_131;
      ComplexOptPayoutAmount_131.setString("18446653");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexOptPayoutAmount_131.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_131);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_269;
        FIX::ComplexEventEndDate ComplexEventEndDate_269(FIX::UTCTIMESTAMP(10, 36, 28, 7, 5, 2016));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_269);
        ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventEndDate_269.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_269(FIX::UTCTIMESTAMP(14, 27, 57, 2, 7, 2010));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_269);
        ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventStartDate_269.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_269);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_538;
          FIX::ComplexEventEndTime ComplexEventEndTime_538(FIX::UTCTIMEONLY(16, 28, 29));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_538);
          ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventEndTime_538.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_538(FIX::UTCTIMEONLY(0, 39, 28));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_538);
          ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventStartTime_538.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_538);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_539;
          FIX::ComplexEventEndTime ComplexEventEndTime_539(FIX::UTCTIMEONLY(9, 59, 24));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_539);
          ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventEndTime_539.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_539(FIX::UTCTIMEONLY(21, 29, 57));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_539);
          ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventStartTime_539.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_539);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_270;
        FIX::ComplexEventEndDate ComplexEventEndDate_270(FIX::UTCTIMESTAMP(3, 33, 21, 2, 7, 2006));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_270);
        ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventEndDate_270.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_270(FIX::UTCTIMESTAMP(12, 43, 55, 22, 2, 2011));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_270);
        ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventStartDate_270.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_270);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_540;
          FIX::ComplexEventEndTime ComplexEventEndTime_540(FIX::UTCTIMEONLY(3, 33, 59));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_540);
          ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventEndTime_540.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_540(FIX::UTCTIMEONLY(9, 38, 35));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_540);
          ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventStartTime_540.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_540);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_137;
      FIX::EventDate EventDate_137("LOCALMKTDATE_1583341575");
      noEvents_1_1_0.set(EventDate_137);
      EvntGrp_NoEvents_137.insert(EventDate_137.getString());
      FIX::EventPx EventPx_137;
      EventPx_137.setString("657803");
      noEvents_1_1_0.set(EventPx_137);
      EvntGrp_NoEvents_137.insert(EventPx_137.getString());
      FIX::EventText EventText_137("STRING_617897989");
      noEvents_1_1_0.set(EventText_137);
      EvntGrp_NoEvents_137.insert(EventText_137.getString());
      FIX::EventTime EventTime_137(FIX::UTCTIMESTAMP(23, 18, 0, 24, 10, 2008));
      noEvents_1_1_0.set(EventTime_137);
      EvntGrp_NoEvents_137.insert(EventTime_137.getString());
      FIX::EventType EventType_137(6);
      noEvents_1_1_0.set(EventType_137);
      EvntGrp_NoEvents_137.insert(EventType_137.getString());
      all_values.push_back(EvntGrp_NoEvents_137);

      noQuoteEntries_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_139;
      FIX::InstrumentPartyID InstrumentPartyID_139("STRING_592385316");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_139);
      InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyID_139.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_139('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_139);
      InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyIDSource_139.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_139(2124904072);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_139);
      InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyRole_139.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_139);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294;
        FIX::InstrumentPartySubID InstrumentPartySubID_294("STRING_1596144973");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_294);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubID_294.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_294(82313139);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_294);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubIDType_294.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_140;
      FIX::InstrumentPartyID InstrumentPartyID_140("STRING_612368622");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_140);
      InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyID_140.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_140('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_140);
      InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyIDSource_140.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_140(363596414);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_140);
      InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyRole_140.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_140);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295;
        FIX::InstrumentPartySubID InstrumentPartySubID_295("STRING_642853856");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_295);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubID_295.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_295(1504889177);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_295);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubIDType_295.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_141;
      FIX::InstrumentPartyID InstrumentPartyID_141("STRING_263826619");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_141);
      InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyID_141.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_141('1');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_141);
      InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyIDSource_141.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_141(1758542424);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_141);
      InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyRole_141.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_141);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296;
        FIX::InstrumentPartySubID InstrumentPartySubID_296("STRING_967450825");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_296);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubID_296.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_296(2081278379);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_296);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubIDType_296.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297;
        FIX::InstrumentPartySubID InstrumentPartySubID_297("STRING_1762105482");
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubID_297);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubID_297.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_297(403308752);
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubIDType_297);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubIDType_297.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298;
        FIX::InstrumentPartySubID InstrumentPartySubID_298("STRING_2147058685");
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubID_298);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubID_298.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_298(232519823);
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubIDType_298);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubIDType_298.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_2);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_148;
      FIX::SecurityAltID SecurityAltID_148("STRING_370245076");
      noSecurityAltID_1_1_0.set(SecurityAltID_148);
      SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltID_148.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_148("STRING_1453348181");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_148);
      SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltIDSource_148.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_148);

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_149;
      FIX::SecurityAltID SecurityAltID_149("STRING_621862348");
      noSecurityAltID_1_1_1.set(SecurityAltID_149);
      SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltID_149.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_149("STRING_1182943028");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_149);
      SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltIDSource_149.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_149);

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_150;
      FIX::SecurityAltID SecurityAltID_150("STRING_1214059062");
      noSecurityAltID_1_1_2.set(SecurityAltID_150);
      SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltID_150.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_150("STRING_1844288274");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_150);
      SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltIDSource_150.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_150);

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_134;
    FIX::SecurityXML SecurityXML_135("XMLDATA_1792721534");
    noQuoteEntries_0_1.set(SecurityXML_135);
    FIX::SecurityXMLLen SecurityXMLLen_67(1781680889);
    noQuoteEntries_0_1.set(SecurityXMLLen_67);
    FIX::SecurityXMLSchema SecurityXMLSchema_67("STRING_289189942");
    noQuoteEntries_0_1.set(SecurityXMLSchema_67);
    SecurityXML_134.insert(SecurityXMLSchema_67.getString());
    all_values.push_back(SecurityXML_134);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_94;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_94("DATA_1759101313");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingIssuer_94.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_94(106564622);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingIssuerLen_94.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_94("DATA_510518740");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDesc_94.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_94(1841414453);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDescLen_94.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_94;
      UnderlyingAdjustedQuantity_94.setString("7189332");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_94);
      UnderlyingInstrument_94.insert(UnderlyingAdjustedQuantity_94.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_94;
      UnderlyingAllocationPercent_94.setString("75.990000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_94);
      UnderlyingInstrument_94.insert(UnderlyingAllocationPercent_94.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_94;
      UnderlyingAttachmentPoint_94.setString("72.190000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_94);
      UnderlyingInstrument_94.insert(UnderlyingAttachmentPoint_94.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_94("STRING_91581630");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_94);
      UnderlyingInstrument_94.insert(UnderlyingCFICode_94.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_94("STRING_902711455");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_94);
      UnderlyingInstrument_94.insert(UnderlyingCPProgram_94.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_94("STRING_1562416397");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_94);
      UnderlyingInstrument_94.insert(UnderlyingCPRegType_94.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_94;
      UnderlyingCapValue_94.setString("3554082");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_94);
      UnderlyingInstrument_94.insert(UnderlyingCapValue_94.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_94;
      UnderlyingCashAmount_94.setString("2756928");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_94);
      UnderlyingInstrument_94.insert(UnderlyingCashAmount_94.getString());
      FIX::UnderlyingCashType UnderlyingCashType_94("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_94);
      UnderlyingInstrument_94.insert(UnderlyingCashType_94.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_94;
      UnderlyingContractMultiplier_94.setString("2578807");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_94);
      UnderlyingInstrument_94.insert(UnderlyingContractMultiplier_94.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_94(1243143667);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_94);
      UnderlyingInstrument_94.insert(UnderlyingContractMultiplierUnit_94.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_94("COUNTRY_1107269905");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingCountryOfIssue_94.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_94("LOCALMKTDATE_2019986201");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_94);
      UnderlyingInstrument_94.insert(UnderlyingCouponPaymentDate_94.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_94;
      UnderlyingCouponRate_94.setString("24.190000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_94);
      UnderlyingInstrument_94.insert(UnderlyingCouponRate_94.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_94("STRING_1106844942");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_94);
      UnderlyingInstrument_94.insert(UnderlyingCreditRating_94.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_94("EUR");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_94);
      UnderlyingInstrument_94.insert(UnderlyingCurrency_94.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_94;
      UnderlyingCurrentValue_94.setString("14770900");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_94);
      UnderlyingInstrument_94.insert(UnderlyingCurrentValue_94.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_94;
      UnderlyingDetachmentPoint_94.setString("5.570000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_94);
      UnderlyingInstrument_94.insert(UnderlyingDetachmentPoint_94.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_94;
      UnderlyingDirtyPrice_94.setString("11819717");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_94);
      UnderlyingInstrument_94.insert(UnderlyingDirtyPrice_94.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_94;
      UnderlyingEndPrice_94.setString("5125493");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_94);
      UnderlyingInstrument_94.insert(UnderlyingEndPrice_94.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_94;
      UnderlyingEndValue_94.setString("6249459");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_94);
      UnderlyingInstrument_94.insert(UnderlyingEndValue_94.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_94(878776401);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_94);
      UnderlyingInstrument_94.insert(UnderlyingExerciseStyle_94.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_94;
      UnderlyingFXRate_94.setString("1577872");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_94);
      UnderlyingInstrument_94.insert(UnderlyingFXRate_94.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_94('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_94);
      UnderlyingInstrument_94.insert(UnderlyingFXRateCalc_94.getString());
      FIX::UnderlyingFactor UnderlyingFactor_94;
      UnderlyingFactor_94.setString("11679663");
      noUnderlyings_1_1_0.set(UnderlyingFactor_94);
      UnderlyingInstrument_94.insert(UnderlyingFactor_94.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_94(1219644701);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_94);
      UnderlyingInstrument_94.insert(UnderlyingFlowScheduleType_94.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_94("STRING_2018244525");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_94);
      UnderlyingInstrument_94.insert(UnderlyingInstrRegistry_94.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_94("LOCALMKTDATE_1274530965");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_94);
      UnderlyingInstrument_94.insert(UnderlyingIssueDate_94.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_94("STRING_1730163441");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_94);
      UnderlyingInstrument_94.insert(UnderlyingIssuer_94.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_94("STRING_1712175330");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingLocaleOfIssue_94.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_94("LOCALMKTDATE_1993464209");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityDate_94.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_94("MONTHYEAR_1990021040");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityMonthYear_94.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_94("TZTIMEONLY_1769702550");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityTime_94.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_94;
      UnderlyingNotionalPercentageOutstanding_94.setString("58.390000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_94);
      UnderlyingInstrument_94.insert(UnderlyingNotionalPercentageOutstanding_94.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_94('7');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_94);
      UnderlyingInstrument_94.insert(UnderlyingOptAttribute_94.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_94;
      UnderlyingOriginalNotionalPercentageOutstanding_94.setString("52.990000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_94);
      UnderlyingInstrument_94.insert(UnderlyingOriginalNotionalPercentageOutstanding_94.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_94("STRING_292970441");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_94);
      UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasure_94.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_94;
      UnderlyingPriceUnitOfMeasureQty_94.setString("10209416");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_94);
      UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasureQty_94.getString());
      FIX::UnderlyingProduct UnderlyingProduct_94(210626824);
      noUnderlyings_1_1_0.set(UnderlyingProduct_94);
      UnderlyingInstrument_94.insert(UnderlyingProduct_94.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_94(550851160);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_94);
      UnderlyingInstrument_94.insert(UnderlyingPutOrCall_94.getString());
      FIX::UnderlyingPx UnderlyingPx_94;
      UnderlyingPx_94.setString("1166017");
      noUnderlyings_1_1_0.set(UnderlyingPx_94);
      UnderlyingInstrument_94.insert(UnderlyingPx_94.getString());
      FIX::UnderlyingQty UnderlyingQty_94;
      UnderlyingQty_94.setString("13178967");
      noUnderlyings_1_1_0.set(UnderlyingQty_94);
      UnderlyingInstrument_94.insert(UnderlyingQty_94.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_94("LOCALMKTDATE_423353713");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_94);
      UnderlyingInstrument_94.insert(UnderlyingRedemptionDate_94.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_94("STRING_1763054128");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_94);
      UnderlyingInstrument_94.insert(UnderlyingRepoCollateralSecurityType_94.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_94;
      UnderlyingRepurchaseRate_94.setString("80.240000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_94);
      UnderlyingInstrument_94.insert(UnderlyingRepurchaseRate_94.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_94(528376089);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_94);
      UnderlyingInstrument_94.insert(UnderlyingRepurchaseTerm_94.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_94("STRING_175679907");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_94);
      UnderlyingInstrument_94.insert(UnderlyingRestructuringType_94.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_94("STRING_1754348043");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityDesc_94.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_94("EXCHANGE_2086746646");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityExchange_94.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_94("STRING_1357651682");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityID_94.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_94("STRING_119413794");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityIDSource_94.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_94("STRING_564208969");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_94);
      UnderlyingInstrument_94.insert(UnderlyingSecuritySubType_94.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_94("STRING_88944435");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityType_94.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_94("STRING_277201080");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_94);
      UnderlyingInstrument_94.insert(UnderlyingSeniority_94.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_94("STRING_823352181");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_94);
      UnderlyingInstrument_94.insert(UnderlyingSettlMethod_94.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_94(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_94);
      UnderlyingInstrument_94.insert(UnderlyingSettlementType_94.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_94;
      UnderlyingStartValue_94.setString("14968457");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_94);
      UnderlyingInstrument_94.insert(UnderlyingStartValue_94.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_94("STRING_694113059");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingStateOrProvinceOfIssue_94.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_94("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_94);
      UnderlyingInstrument_94.insert(UnderlyingStrikeCurrency_94.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_94;
      UnderlyingStrikePrice_94.setString("2588047");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_94);
      UnderlyingInstrument_94.insert(UnderlyingStrikePrice_94.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_94("STRING_229938656");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_94);
      UnderlyingInstrument_94.insert(UnderlyingSymbol_94.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_94("STRING_922062967");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_94);
      UnderlyingInstrument_94.insert(UnderlyingSymbolSfx_94.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_94("STRING_2028507291");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_94);
      UnderlyingInstrument_94.insert(UnderlyingTimeUnit_94.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_94("STRING_167500847");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_94);
      UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasure_94.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_94;
      UnderlyingUnitOfMeasureQty_94.setString("16673118");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_94);
      UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasureQty_94.getString());
      all_values.push_back(UnderlyingInstrument_94);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_188;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_188("STRING_460471289");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_188);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltID_188.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_188("STRING_540769856");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_188);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltIDSource_188.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_189;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_189("STRING_1276285767");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_189);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltID_189.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_189("STRING_1011322449");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_189);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltIDSource_189.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_173;
        FIX::UnderlyingStipType UnderlyingStipType_173("STRING_446698848");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_173);
        UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipType_173.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_173("STRING_1434676163");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_173);
        UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipValue_173.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_173);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_174;
        FIX::UnderlyingStipType UnderlyingStipType_174("STRING_272942044");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_174);
        UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipType_174.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_174("STRING_723956872");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_174);
        UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipValue_174.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_174);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_175;
        FIX::UnderlyingStipType UnderlyingStipType_175("STRING_1963052252");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_175);
        UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipType_175.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_175("STRING_448621951");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_175);
        UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipValue_175.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_175);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_195;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_195("STRING_1902315251");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyID_195.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_195('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyIDSource_195.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_195(450235062);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyRole_195.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_195);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_374("STRING_1895218068");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubID_374.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_374(727436142);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubIDType_374.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_375("STRING_1142392754");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubID_375.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_375(1004645198);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubIDType_375.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_196;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_196("STRING_76798275");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyID_196.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_196('1');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyIDSource_196.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_196(1388603293);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyRole_196.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_196);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_376("STRING_2095310554");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubID_376.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_376(1618541949);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubIDType_376.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_197;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_197("STRING_2078386816");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyID_197.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_197('1');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyIDSource_197.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_197(1786042797);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyRole_197.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_197);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_377("STRING_894509492");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubID_377.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_377(99030438);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubIDType_377.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_378("STRING_2138984839");
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubID_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubID_378.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_378(23311611);
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubIDType_378.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_379("STRING_1110352887");
          noUndlyInstrumentPartySubIDs_1_0_2_3_2.set(UnderlyingInstrumentPartySubID_379);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubID_379.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_379(648872755);
          noUndlyInstrumentPartySubIDs_1_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_379);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubIDType_379.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_95;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_95("DATA_470010460");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingIssuer_95.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_95(397545402);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingIssuerLen_95.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_95("DATA_921814800");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDesc_95.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_95(1193967332);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDescLen_95.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_95;
      UnderlyingAdjustedQuantity_95.setString("2131140");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_95);
      UnderlyingInstrument_95.insert(UnderlyingAdjustedQuantity_95.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_95;
      UnderlyingAllocationPercent_95.setString("67.510000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_95);
      UnderlyingInstrument_95.insert(UnderlyingAllocationPercent_95.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_95;
      UnderlyingAttachmentPoint_95.setString("86.000000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_95);
      UnderlyingInstrument_95.insert(UnderlyingAttachmentPoint_95.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_95("STRING_2115429258");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_95);
      UnderlyingInstrument_95.insert(UnderlyingCFICode_95.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_95("STRING_1029226737");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_95);
      UnderlyingInstrument_95.insert(UnderlyingCPProgram_95.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_95("STRING_1975023662");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_95);
      UnderlyingInstrument_95.insert(UnderlyingCPRegType_95.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_95;
      UnderlyingCapValue_95.setString("2869861");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_95);
      UnderlyingInstrument_95.insert(UnderlyingCapValue_95.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_95;
      UnderlyingCashAmount_95.setString("7769611");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_95);
      UnderlyingInstrument_95.insert(UnderlyingCashAmount_95.getString());
      FIX::UnderlyingCashType UnderlyingCashType_95("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_95);
      UnderlyingInstrument_95.insert(UnderlyingCashType_95.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_95;
      UnderlyingContractMultiplier_95.setString("14293789");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_95);
      UnderlyingInstrument_95.insert(UnderlyingContractMultiplier_95.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_95(1781606356);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_95);
      UnderlyingInstrument_95.insert(UnderlyingContractMultiplierUnit_95.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_95("COUNTRY_631774431");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingCountryOfIssue_95.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_95("LOCALMKTDATE_1118401101");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_95);
      UnderlyingInstrument_95.insert(UnderlyingCouponPaymentDate_95.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_95;
      UnderlyingCouponRate_95.setString("60.010000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_95);
      UnderlyingInstrument_95.insert(UnderlyingCouponRate_95.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_95("STRING_1788098280");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_95);
      UnderlyingInstrument_95.insert(UnderlyingCreditRating_95.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_95("CAN");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_95);
      UnderlyingInstrument_95.insert(UnderlyingCurrency_95.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_95;
      UnderlyingCurrentValue_95.setString("17190014");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_95);
      UnderlyingInstrument_95.insert(UnderlyingCurrentValue_95.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_95;
      UnderlyingDetachmentPoint_95.setString("85.580000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_95);
      UnderlyingInstrument_95.insert(UnderlyingDetachmentPoint_95.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_95;
      UnderlyingDirtyPrice_95.setString("1323434");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_95);
      UnderlyingInstrument_95.insert(UnderlyingDirtyPrice_95.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_95;
      UnderlyingEndPrice_95.setString("11697327");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_95);
      UnderlyingInstrument_95.insert(UnderlyingEndPrice_95.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_95;
      UnderlyingEndValue_95.setString("17895880");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_95);
      UnderlyingInstrument_95.insert(UnderlyingEndValue_95.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_95(231373890);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_95);
      UnderlyingInstrument_95.insert(UnderlyingExerciseStyle_95.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_95;
      UnderlyingFXRate_95.setString("11612339");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_95);
      UnderlyingInstrument_95.insert(UnderlyingFXRate_95.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_95('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_95);
      UnderlyingInstrument_95.insert(UnderlyingFXRateCalc_95.getString());
      FIX::UnderlyingFactor UnderlyingFactor_95;
      UnderlyingFactor_95.setString("13417267");
      noUnderlyings_1_1_1.set(UnderlyingFactor_95);
      UnderlyingInstrument_95.insert(UnderlyingFactor_95.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_95(1810106730);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_95);
      UnderlyingInstrument_95.insert(UnderlyingFlowScheduleType_95.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_95("STRING_135426474");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_95);
      UnderlyingInstrument_95.insert(UnderlyingInstrRegistry_95.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_95("LOCALMKTDATE_1739272180");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_95);
      UnderlyingInstrument_95.insert(UnderlyingIssueDate_95.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_95("STRING_584437882");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_95);
      UnderlyingInstrument_95.insert(UnderlyingIssuer_95.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_95("STRING_1329393806");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingLocaleOfIssue_95.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_95("LOCALMKTDATE_1952386187");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityDate_95.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_95("MONTHYEAR_1954874634");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityMonthYear_95.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_95("TZTIMEONLY_706698758");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityTime_95.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_95;
      UnderlyingNotionalPercentageOutstanding_95.setString("17.970000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_95);
      UnderlyingInstrument_95.insert(UnderlyingNotionalPercentageOutstanding_95.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_95('8');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_95);
      UnderlyingInstrument_95.insert(UnderlyingOptAttribute_95.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_95;
      UnderlyingOriginalNotionalPercentageOutstanding_95.setString("87.720000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_95);
      UnderlyingInstrument_95.insert(UnderlyingOriginalNotionalPercentageOutstanding_95.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_95("STRING_59834331");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_95);
      UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasure_95.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_95;
      UnderlyingPriceUnitOfMeasureQty_95.setString("16135788");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_95);
      UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasureQty_95.getString());
      FIX::UnderlyingProduct UnderlyingProduct_95(1089214928);
      noUnderlyings_1_1_1.set(UnderlyingProduct_95);
      UnderlyingInstrument_95.insert(UnderlyingProduct_95.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_95(1489213268);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_95);
      UnderlyingInstrument_95.insert(UnderlyingPutOrCall_95.getString());
      FIX::UnderlyingPx UnderlyingPx_95;
      UnderlyingPx_95.setString("12477015");
      noUnderlyings_1_1_1.set(UnderlyingPx_95);
      UnderlyingInstrument_95.insert(UnderlyingPx_95.getString());
      FIX::UnderlyingQty UnderlyingQty_95;
      UnderlyingQty_95.setString("17209893");
      noUnderlyings_1_1_1.set(UnderlyingQty_95);
      UnderlyingInstrument_95.insert(UnderlyingQty_95.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_95("LOCALMKTDATE_460130721");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_95);
      UnderlyingInstrument_95.insert(UnderlyingRedemptionDate_95.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_95("STRING_122943942");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_95);
      UnderlyingInstrument_95.insert(UnderlyingRepoCollateralSecurityType_95.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_95;
      UnderlyingRepurchaseRate_95.setString("39.920000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_95);
      UnderlyingInstrument_95.insert(UnderlyingRepurchaseRate_95.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_95(1526358729);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_95);
      UnderlyingInstrument_95.insert(UnderlyingRepurchaseTerm_95.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_95("STRING_616728245");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_95);
      UnderlyingInstrument_95.insert(UnderlyingRestructuringType_95.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_95("STRING_933121793");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityDesc_95.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_95("EXCHANGE_273953639");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityExchange_95.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_95("STRING_749071697");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityID_95.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_95("STRING_2102854577");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityIDSource_95.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_95("STRING_2063541690");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_95);
      UnderlyingInstrument_95.insert(UnderlyingSecuritySubType_95.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_95("STRING_980445587");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityType_95.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_95("STRING_1116604904");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_95);
      UnderlyingInstrument_95.insert(UnderlyingSeniority_95.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_95("STRING_1728957704");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_95);
      UnderlyingInstrument_95.insert(UnderlyingSettlMethod_95.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_95(2);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_95);
      UnderlyingInstrument_95.insert(UnderlyingSettlementType_95.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_95;
      UnderlyingStartValue_95.setString("7792279");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_95);
      UnderlyingInstrument_95.insert(UnderlyingStartValue_95.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_95("STRING_1864384178");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingStateOrProvinceOfIssue_95.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_95("CAN");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_95);
      UnderlyingInstrument_95.insert(UnderlyingStrikeCurrency_95.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_95;
      UnderlyingStrikePrice_95.setString("10462943");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_95);
      UnderlyingInstrument_95.insert(UnderlyingStrikePrice_95.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_95("STRING_1718863435");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_95);
      UnderlyingInstrument_95.insert(UnderlyingSymbol_95.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_95("STRING_1171056855");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_95);
      UnderlyingInstrument_95.insert(UnderlyingSymbolSfx_95.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_95("STRING_1752993095");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_95);
      UnderlyingInstrument_95.insert(UnderlyingTimeUnit_95.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_95("STRING_1491711584");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_95);
      UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasure_95.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_95;
      UnderlyingUnitOfMeasureQty_95.setString("20076745");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_95);
      UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasureQty_95.getString());
      all_values.push_back(UnderlyingInstrument_95);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_190;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_190("STRING_1551545916");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_190);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltID_190.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_190("STRING_1473769810");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_190);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltIDSource_190.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_191;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_191("STRING_1228963148");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_191);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltID_191.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_191("STRING_893275536");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_191);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltIDSource_191.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_192;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_192("STRING_573987751");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_192);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltID_192.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_192("STRING_802468859");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_192);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltIDSource_192.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_176;
        FIX::UnderlyingStipType UnderlyingStipType_176("STRING_696931693");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_176);
        UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipType_176.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_176("STRING_16589203");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_176);
        UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipValue_176.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_176);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_198;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_198("STRING_1313659938");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyID_198.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_198('9');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyIDSource_198.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_198(1006234978);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyRole_198.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_198);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_380("STRING_905081925");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_380);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubID_380.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_380(922293020);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_380);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubIDType_380.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_381("STRING_895693574");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_381);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubID_381.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_381(2021686829);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_381);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubIDType_381.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_382("STRING_503767076");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_382);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubID_382.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_382(1070382290);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_382);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubIDType_382.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_199;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_199("STRING_653431168");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyID_199.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_199('2');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyIDSource_199.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_199(836859539);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyRole_199.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_199);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_383("STRING_1266961943");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_383);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubID_383.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_383(408239326);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_383);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubIDType_383.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_200;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_200("STRING_1040670244");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_200);
        UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyID_200.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_200('8');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_200);
        UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyIDSource_200.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_200(1899950911);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_200);
        UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyRole_200.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_200);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_384("STRING_1012219609");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_384);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubID_384.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_384(1304013179);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_384);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubIDType_384.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_96;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_96("DATA_227147336");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingIssuer_96.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_96(93699109);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingIssuerLen_96.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_96("DATA_49805067");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDesc_96.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_96(801135087);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDescLen_96.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_96;
      UnderlyingAdjustedQuantity_96.setString("8961679");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_96);
      UnderlyingInstrument_96.insert(UnderlyingAdjustedQuantity_96.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_96;
      UnderlyingAllocationPercent_96.setString("13.240000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_96);
      UnderlyingInstrument_96.insert(UnderlyingAllocationPercent_96.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_96;
      UnderlyingAttachmentPoint_96.setString("67.800000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_96);
      UnderlyingInstrument_96.insert(UnderlyingAttachmentPoint_96.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_96("STRING_912757172");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_96);
      UnderlyingInstrument_96.insert(UnderlyingCFICode_96.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_96("STRING_2135492663");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_96);
      UnderlyingInstrument_96.insert(UnderlyingCPProgram_96.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_96("STRING_664243070");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_96);
      UnderlyingInstrument_96.insert(UnderlyingCPRegType_96.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_96;
      UnderlyingCapValue_96.setString("18624681");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_96);
      UnderlyingInstrument_96.insert(UnderlyingCapValue_96.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_96;
      UnderlyingCashAmount_96.setString("9942439");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_96);
      UnderlyingInstrument_96.insert(UnderlyingCashAmount_96.getString());
      FIX::UnderlyingCashType UnderlyingCashType_96("STRING_DIFF");
      noUnderlyings_1_1_2.set(UnderlyingCashType_96);
      UnderlyingInstrument_96.insert(UnderlyingCashType_96.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_96;
      UnderlyingContractMultiplier_96.setString("6200664");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_96);
      UnderlyingInstrument_96.insert(UnderlyingContractMultiplier_96.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_96(1916537014);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_96);
      UnderlyingInstrument_96.insert(UnderlyingContractMultiplierUnit_96.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_96("COUNTRY_1475184631");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingCountryOfIssue_96.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_96("LOCALMKTDATE_494269628");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_96);
      UnderlyingInstrument_96.insert(UnderlyingCouponPaymentDate_96.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_96;
      UnderlyingCouponRate_96.setString("4.430000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_96);
      UnderlyingInstrument_96.insert(UnderlyingCouponRate_96.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_96("STRING_398083274");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_96);
      UnderlyingInstrument_96.insert(UnderlyingCreditRating_96.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_96("EUR");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_96);
      UnderlyingInstrument_96.insert(UnderlyingCurrency_96.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_96;
      UnderlyingCurrentValue_96.setString("12349428");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_96);
      UnderlyingInstrument_96.insert(UnderlyingCurrentValue_96.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_96;
      UnderlyingDetachmentPoint_96.setString("41.850000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_96);
      UnderlyingInstrument_96.insert(UnderlyingDetachmentPoint_96.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_96;
      UnderlyingDirtyPrice_96.setString("17604499");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_96);
      UnderlyingInstrument_96.insert(UnderlyingDirtyPrice_96.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_96;
      UnderlyingEndPrice_96.setString("16431821");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_96);
      UnderlyingInstrument_96.insert(UnderlyingEndPrice_96.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_96;
      UnderlyingEndValue_96.setString("20579844");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_96);
      UnderlyingInstrument_96.insert(UnderlyingEndValue_96.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_96(485437734);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_96);
      UnderlyingInstrument_96.insert(UnderlyingExerciseStyle_96.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_96;
      UnderlyingFXRate_96.setString("13956494");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_96);
      UnderlyingInstrument_96.insert(UnderlyingFXRate_96.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_96('M');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_96);
      UnderlyingInstrument_96.insert(UnderlyingFXRateCalc_96.getString());
      FIX::UnderlyingFactor UnderlyingFactor_96;
      UnderlyingFactor_96.setString("14976573");
      noUnderlyings_1_1_2.set(UnderlyingFactor_96);
      UnderlyingInstrument_96.insert(UnderlyingFactor_96.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_96(552178933);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_96);
      UnderlyingInstrument_96.insert(UnderlyingFlowScheduleType_96.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_96("STRING_1038509291");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_96);
      UnderlyingInstrument_96.insert(UnderlyingInstrRegistry_96.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_96("LOCALMKTDATE_1591356453");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_96);
      UnderlyingInstrument_96.insert(UnderlyingIssueDate_96.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_96("STRING_601984000");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_96);
      UnderlyingInstrument_96.insert(UnderlyingIssuer_96.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_96("STRING_1839644379");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingLocaleOfIssue_96.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_96("LOCALMKTDATE_340040774");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityDate_96.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_96("MONTHYEAR_2005195325");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityMonthYear_96.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_96("TZTIMEONLY_1190227511");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityTime_96.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_96;
      UnderlyingNotionalPercentageOutstanding_96.setString("79.470000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_96);
      UnderlyingInstrument_96.insert(UnderlyingNotionalPercentageOutstanding_96.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_96('1');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_96);
      UnderlyingInstrument_96.insert(UnderlyingOptAttribute_96.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_96;
      UnderlyingOriginalNotionalPercentageOutstanding_96.setString("5.820000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_96);
      UnderlyingInstrument_96.insert(UnderlyingOriginalNotionalPercentageOutstanding_96.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_96("STRING_967782468");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_96);
      UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasure_96.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_96;
      UnderlyingPriceUnitOfMeasureQty_96.setString("8399646");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_96);
      UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasureQty_96.getString());
      FIX::UnderlyingProduct UnderlyingProduct_96(286477991);
      noUnderlyings_1_1_2.set(UnderlyingProduct_96);
      UnderlyingInstrument_96.insert(UnderlyingProduct_96.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_96(1587848914);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_96);
      UnderlyingInstrument_96.insert(UnderlyingPutOrCall_96.getString());
      FIX::UnderlyingPx UnderlyingPx_96;
      UnderlyingPx_96.setString("6090180");
      noUnderlyings_1_1_2.set(UnderlyingPx_96);
      UnderlyingInstrument_96.insert(UnderlyingPx_96.getString());
      FIX::UnderlyingQty UnderlyingQty_96;
      UnderlyingQty_96.setString("17616626");
      noUnderlyings_1_1_2.set(UnderlyingQty_96);
      UnderlyingInstrument_96.insert(UnderlyingQty_96.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_96("LOCALMKTDATE_2082118542");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_96);
      UnderlyingInstrument_96.insert(UnderlyingRedemptionDate_96.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_96("STRING_881838496");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_96);
      UnderlyingInstrument_96.insert(UnderlyingRepoCollateralSecurityType_96.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_96;
      UnderlyingRepurchaseRate_96.setString("22.490000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_96);
      UnderlyingInstrument_96.insert(UnderlyingRepurchaseRate_96.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_96(1082335690);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_96);
      UnderlyingInstrument_96.insert(UnderlyingRepurchaseTerm_96.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_96("STRING_1375326545");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_96);
      UnderlyingInstrument_96.insert(UnderlyingRestructuringType_96.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_96("STRING_1247205062");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityDesc_96.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_96("EXCHANGE_2099649875");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityExchange_96.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_96("STRING_988292890");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityID_96.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_96("STRING_742903553");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityIDSource_96.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_96("STRING_2010150656");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_96);
      UnderlyingInstrument_96.insert(UnderlyingSecuritySubType_96.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_96("STRING_1473730624");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityType_96.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_96("STRING_2138552956");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_96);
      UnderlyingInstrument_96.insert(UnderlyingSeniority_96.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_96("STRING_674028963");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_96);
      UnderlyingInstrument_96.insert(UnderlyingSettlMethod_96.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_96(4);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_96);
      UnderlyingInstrument_96.insert(UnderlyingSettlementType_96.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_96;
      UnderlyingStartValue_96.setString("5432482");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_96);
      UnderlyingInstrument_96.insert(UnderlyingStartValue_96.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_96("STRING_1712538255");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingStateOrProvinceOfIssue_96.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_96("GBP");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_96);
      UnderlyingInstrument_96.insert(UnderlyingStrikeCurrency_96.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_96;
      UnderlyingStrikePrice_96.setString("14046989");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_96);
      UnderlyingInstrument_96.insert(UnderlyingStrikePrice_96.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_96("STRING_607817900");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_96);
      UnderlyingInstrument_96.insert(UnderlyingSymbol_96.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_96("STRING_1002943919");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_96);
      UnderlyingInstrument_96.insert(UnderlyingSymbolSfx_96.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_96("STRING_447442849");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_96);
      UnderlyingInstrument_96.insert(UnderlyingTimeUnit_96.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_96("STRING_1860615847");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_96);
      UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasure_96.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_96;
      UnderlyingUnitOfMeasureQty_96.setString("8486646");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_96);
      UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasureQty_96.getString());
      all_values.push_back(UnderlyingInstrument_96);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_193;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_193("STRING_680914667");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_193);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltID_193.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_193("STRING_1688629298");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_193);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltIDSource_193.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_194;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_194("STRING_440907775");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltID_194.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_194("STRING_121279934");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltIDSource_194.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_177;
        FIX::UnderlyingStipType UnderlyingStipType_177("STRING_55086750");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_177);
        UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipType_177.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_177("STRING_55914828");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_177);
        UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipValue_177.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_177);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_178;
        FIX::UnderlyingStipType UnderlyingStipType_178("STRING_1032002199");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipType_178);
        UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipType_178.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_178("STRING_67348999");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipValue_178);
        UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipValue_178.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_178);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_179;
        FIX::UnderlyingStipType UnderlyingStipType_179("STRING_1138250519");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipType_179);
        UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipType_179.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_179("STRING_259845096");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipValue_179);
        UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipValue_179.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_179);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_201;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_201("STRING_1090416746");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_201);
        UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyID_201.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_201('1');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_201);
        UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyIDSource_201.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_201(2057457614);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_201);
        UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyRole_201.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_201);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_385("STRING_574384963");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_385);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubID_385.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_385(2048526922);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_385);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubIDType_385.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_2);
    }
    msg.addGroup(noQuoteEntries_0_1);
  }
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_2;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_19;
    FIX::AgreementCurrency AgreementCurrency_19("CAN");
    noQuoteEntries_0_2.set(AgreementCurrency_19);
    FinancingDetails_19.insert(AgreementCurrency_19.getString());
    FIX::AgreementDate AgreementDate_19("LOCALMKTDATE_444291516");
    noQuoteEntries_0_2.set(AgreementDate_19);
    FinancingDetails_19.insert(AgreementDate_19.getString());
    FIX::AgreementDesc AgreementDesc_19("STRING_1192167325");
    noQuoteEntries_0_2.set(AgreementDesc_19);
    FinancingDetails_19.insert(AgreementDesc_19.getString());
    FIX::AgreementID AgreementID_19("STRING_1666066409");
    noQuoteEntries_0_2.set(AgreementID_19);
    FinancingDetails_19.insert(AgreementID_19.getString());
    FIX::DeliveryType DeliveryType_19(2);
    noQuoteEntries_0_2.set(DeliveryType_19);
    FinancingDetails_19.insert(DeliveryType_19.getString());
    FIX::EndDate EndDate_19("LOCALMKTDATE_449382663");
    noQuoteEntries_0_2.set(EndDate_19);
    FinancingDetails_19.insert(EndDate_19.getString());
    FIX::MarginRatio MarginRatio_19;
    MarginRatio_19.setString("6.620000");
    noQuoteEntries_0_2.set(MarginRatio_19);
    FinancingDetails_19.insert(MarginRatio_19.getString());
    FIX::StartDate StartDate_19("LOCALMKTDATE_444984029");
    noQuoteEntries_0_2.set(StartDate_19);
    FinancingDetails_19.insert(StartDate_19.getString());
    FIX::TerminationType TerminationType_19(2);
    noQuoteEntries_0_2.set(TerminationType_19);
    FinancingDetails_19.insert(TerminationType_19.getString());
    all_values.push_back(FinancingDetails_19);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_103;
      FIX::EncodedLegIssuer EncodedLegIssuer_103("DATA_1293648640");
      noLegs_2_1_0.set(EncodedLegIssuer_103);
      InstrumentLeg_103.insert(EncodedLegIssuer_103.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_103(1051255296);
      noLegs_2_1_0.set(EncodedLegIssuerLen_103);
      InstrumentLeg_103.insert(EncodedLegIssuerLen_103.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_103("DATA_520447529");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_103);
      InstrumentLeg_103.insert(EncodedLegSecurityDesc_103.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_103(834794290);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_103);
      InstrumentLeg_103.insert(EncodedLegSecurityDescLen_103.getString());
      FIX::LegCFICode LegCFICode_103("STRING_1492163071");
      noLegs_2_1_0.set(LegCFICode_103);
      InstrumentLeg_103.insert(LegCFICode_103.getString());
      FIX::LegContractMultiplier LegContractMultiplier_103;
      LegContractMultiplier_103.setString("6417274");
      noLegs_2_1_0.set(LegContractMultiplier_103);
      InstrumentLeg_103.insert(LegContractMultiplier_103.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_103(984957993);
      noLegs_2_1_0.set(LegContractMultiplierUnit_103);
      InstrumentLeg_103.insert(LegContractMultiplierUnit_103.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_103("MONTHYEAR_1547249821");
      noLegs_2_1_0.set(LegContractSettlMonth_103);
      InstrumentLeg_103.insert(LegContractSettlMonth_103.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_103("COUNTRY_697642291");
      noLegs_2_1_0.set(LegCountryOfIssue_103);
      InstrumentLeg_103.insert(LegCountryOfIssue_103.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_103("LOCALMKTDATE_2016960192");
      noLegs_2_1_0.set(LegCouponPaymentDate_103);
      InstrumentLeg_103.insert(LegCouponPaymentDate_103.getString());
      FIX::LegCouponRate LegCouponRate_103;
      LegCouponRate_103.setString("88.200000");
      noLegs_2_1_0.set(LegCouponRate_103);
      InstrumentLeg_103.insert(LegCouponRate_103.getString());
      FIX::LegCreditRating LegCreditRating_103("STRING_1835892810");
      noLegs_2_1_0.set(LegCreditRating_103);
      InstrumentLeg_103.insert(LegCreditRating_103.getString());
      FIX::LegCurrency LegCurrency_103("CHF");
      noLegs_2_1_0.set(LegCurrency_103);
      InstrumentLeg_103.insert(LegCurrency_103.getString());
      FIX::LegDatedDate LegDatedDate_103("LOCALMKTDATE_778825909");
      noLegs_2_1_0.set(LegDatedDate_103);
      InstrumentLeg_103.insert(LegDatedDate_103.getString());
      FIX::LegExerciseStyle LegExerciseStyle_103(1377459627);
      noLegs_2_1_0.set(LegExerciseStyle_103);
      InstrumentLeg_103.insert(LegExerciseStyle_103.getString());
      FIX::LegFactor LegFactor_103;
      LegFactor_103.setString("6916432");
      noLegs_2_1_0.set(LegFactor_103);
      InstrumentLeg_103.insert(LegFactor_103.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_103(1731909664);
      noLegs_2_1_0.set(LegFlowScheduleType_103);
      InstrumentLeg_103.insert(LegFlowScheduleType_103.getString());
      FIX::LegInstrRegistry LegInstrRegistry_103("STRING_1951844590");
      noLegs_2_1_0.set(LegInstrRegistry_103);
      InstrumentLeg_103.insert(LegInstrRegistry_103.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_103("LOCALMKTDATE_592686474");
      noLegs_2_1_0.set(LegInterestAccrualDate_103);
      InstrumentLeg_103.insert(LegInterestAccrualDate_103.getString());
      FIX::LegIssueDate LegIssueDate_103("LOCALMKTDATE_1211538734");
      noLegs_2_1_0.set(LegIssueDate_103);
      InstrumentLeg_103.insert(LegIssueDate_103.getString());
      FIX::LegIssuer LegIssuer_103("STRING_1202650226");
      noLegs_2_1_0.set(LegIssuer_103);
      InstrumentLeg_103.insert(LegIssuer_103.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_103("STRING_1036977990");
      noLegs_2_1_0.set(LegLocaleOfIssue_103);
      InstrumentLeg_103.insert(LegLocaleOfIssue_103.getString());
      FIX::LegMaturityDate LegMaturityDate_103("LOCALMKTDATE_256222412");
      noLegs_2_1_0.set(LegMaturityDate_103);
      InstrumentLeg_103.insert(LegMaturityDate_103.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_103("MONTHYEAR_721232987");
      noLegs_2_1_0.set(LegMaturityMonthYear_103);
      InstrumentLeg_103.insert(LegMaturityMonthYear_103.getString());
      FIX::LegMaturityTime LegMaturityTime_103("TZTIMEONLY_479018100");
      noLegs_2_1_0.set(LegMaturityTime_103);
      InstrumentLeg_103.insert(LegMaturityTime_103.getString());
      FIX::LegOptAttribute LegOptAttribute_103('7');
      noLegs_2_1_0.set(LegOptAttribute_103);
      InstrumentLeg_103.insert(LegOptAttribute_103.getString());
      FIX::LegOptionRatio LegOptionRatio_103;
      LegOptionRatio_103.setString("8476336");
      noLegs_2_1_0.set(LegOptionRatio_103);
      InstrumentLeg_103.insert(LegOptionRatio_103.getString());
      FIX::LegPool LegPool_103("STRING_924002129");
      noLegs_2_1_0.set(LegPool_103);
      InstrumentLeg_103.insert(LegPool_103.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_103("STRING_1602430588");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_103);
      InstrumentLeg_103.insert(LegPriceUnitOfMeasure_103.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_103;
      LegPriceUnitOfMeasureQty_103.setString("6871665");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_103);
      InstrumentLeg_103.insert(LegPriceUnitOfMeasureQty_103.getString());
      FIX::LegProduct LegProduct_103(70167122);
      noLegs_2_1_0.set(LegProduct_103);
      InstrumentLeg_103.insert(LegProduct_103.getString());
      FIX::LegPutOrCall LegPutOrCall_103(506202237);
      noLegs_2_1_0.set(LegPutOrCall_103);
      InstrumentLeg_103.insert(LegPutOrCall_103.getString());
      FIX::LegRatioQty LegRatioQty_103;
      LegRatioQty_103.setString("12076140");
      noLegs_2_1_0.set(LegRatioQty_103);
      InstrumentLeg_103.insert(LegRatioQty_103.getString());
      FIX::LegRedemptionDate LegRedemptionDate_103("LOCALMKTDATE_904961412");
      noLegs_2_1_0.set(LegRedemptionDate_103);
      InstrumentLeg_103.insert(LegRedemptionDate_103.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_103("STRING_1998365308");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_103);
      InstrumentLeg_103.insert(LegRepoCollateralSecurityType_103.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_103;
      LegRepurchaseRate_103.setString("15.030000");
      noLegs_2_1_0.set(LegRepurchaseRate_103);
      InstrumentLeg_103.insert(LegRepurchaseRate_103.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_103(1889919406);
      noLegs_2_1_0.set(LegRepurchaseTerm_103);
      InstrumentLeg_103.insert(LegRepurchaseTerm_103.getString());
      FIX::LegSecurityDesc LegSecurityDesc_103("STRING_1398131482");
      noLegs_2_1_0.set(LegSecurityDesc_103);
      InstrumentLeg_103.insert(LegSecurityDesc_103.getString());
      FIX::LegSecurityExchange LegSecurityExchange_103("EXCHANGE_399500146");
      noLegs_2_1_0.set(LegSecurityExchange_103);
      InstrumentLeg_103.insert(LegSecurityExchange_103.getString());
      FIX::LegSecurityID LegSecurityID_103("STRING_1759395950");
      noLegs_2_1_0.set(LegSecurityID_103);
      InstrumentLeg_103.insert(LegSecurityID_103.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_103("STRING_865246654");
      noLegs_2_1_0.set(LegSecurityIDSource_103);
      InstrumentLeg_103.insert(LegSecurityIDSource_103.getString());
      FIX::LegSecuritySubType LegSecuritySubType_103("STRING_87909309");
      noLegs_2_1_0.set(LegSecuritySubType_103);
      InstrumentLeg_103.insert(LegSecuritySubType_103.getString());
      FIX::LegSecurityType LegSecurityType_103("STRING_1888717591");
      noLegs_2_1_0.set(LegSecurityType_103);
      InstrumentLeg_103.insert(LegSecurityType_103.getString());
      FIX::LegSide LegSide_103('1');
      noLegs_2_1_0.set(LegSide_103);
      InstrumentLeg_103.insert(LegSide_103.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_103("STRING_866735218");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_103);
      InstrumentLeg_103.insert(LegStateOrProvinceOfIssue_103.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_103("JPY");
      noLegs_2_1_0.set(LegStrikeCurrency_103);
      InstrumentLeg_103.insert(LegStrikeCurrency_103.getString());
      FIX::LegStrikePrice LegStrikePrice_103;
      LegStrikePrice_103.setString("4511612");
      noLegs_2_1_0.set(LegStrikePrice_103);
      InstrumentLeg_103.insert(LegStrikePrice_103.getString());
      FIX::LegSymbol LegSymbol_103("STRING_923054513");
      noLegs_2_1_0.set(LegSymbol_103);
      InstrumentLeg_103.insert(LegSymbol_103.getString());
      FIX::LegSymbolSfx LegSymbolSfx_103("STRING_783761914");
      noLegs_2_1_0.set(LegSymbolSfx_103);
      InstrumentLeg_103.insert(LegSymbolSfx_103.getString());
      FIX::LegTimeUnit LegTimeUnit_103("STRING_1662699968");
      noLegs_2_1_0.set(LegTimeUnit_103);
      InstrumentLeg_103.insert(LegTimeUnit_103.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_103("STRING_2125704739");
      noLegs_2_1_0.set(LegUnitOfMeasure_103);
      InstrumentLeg_103.insert(LegUnitOfMeasure_103.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_103;
      LegUnitOfMeasureQty_103.setString("18207399");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_103);
      InstrumentLeg_103.insert(LegUnitOfMeasureQty_103.getString());
      all_values.push_back(InstrumentLeg_103);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_201;
        FIX::LegSecurityAltID LegSecurityAltID_201("STRING_699454079");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_201);
        LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltID_201.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_201("STRING_152274357");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_201);
        LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltIDSource_201.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_201);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_202;
        FIX::LegSecurityAltID LegSecurityAltID_202("STRING_477043808");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_202);
        LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltID_202.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_202("STRING_1547087728");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_202);
        LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltIDSource_202.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_202);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      noQuoteEntries_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_104;
      FIX::EncodedLegIssuer EncodedLegIssuer_104("DATA_1076276487");
      noLegs_2_1_1.set(EncodedLegIssuer_104);
      InstrumentLeg_104.insert(EncodedLegIssuer_104.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_104(2079474396);
      noLegs_2_1_1.set(EncodedLegIssuerLen_104);
      InstrumentLeg_104.insert(EncodedLegIssuerLen_104.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_104("DATA_86770591");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_104);
      InstrumentLeg_104.insert(EncodedLegSecurityDesc_104.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_104(1146443609);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_104);
      InstrumentLeg_104.insert(EncodedLegSecurityDescLen_104.getString());
      FIX::LegCFICode LegCFICode_104("STRING_438192985");
      noLegs_2_1_1.set(LegCFICode_104);
      InstrumentLeg_104.insert(LegCFICode_104.getString());
      FIX::LegContractMultiplier LegContractMultiplier_104;
      LegContractMultiplier_104.setString("12943846");
      noLegs_2_1_1.set(LegContractMultiplier_104);
      InstrumentLeg_104.insert(LegContractMultiplier_104.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_104(2051405021);
      noLegs_2_1_1.set(LegContractMultiplierUnit_104);
      InstrumentLeg_104.insert(LegContractMultiplierUnit_104.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_104("MONTHYEAR_289074646");
      noLegs_2_1_1.set(LegContractSettlMonth_104);
      InstrumentLeg_104.insert(LegContractSettlMonth_104.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_104("COUNTRY_996242486");
      noLegs_2_1_1.set(LegCountryOfIssue_104);
      InstrumentLeg_104.insert(LegCountryOfIssue_104.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_104("LOCALMKTDATE_1793840779");
      noLegs_2_1_1.set(LegCouponPaymentDate_104);
      InstrumentLeg_104.insert(LegCouponPaymentDate_104.getString());
      FIX::LegCouponRate LegCouponRate_104;
      LegCouponRate_104.setString("61.280000");
      noLegs_2_1_1.set(LegCouponRate_104);
      InstrumentLeg_104.insert(LegCouponRate_104.getString());
      FIX::LegCreditRating LegCreditRating_104("STRING_1395742633");
      noLegs_2_1_1.set(LegCreditRating_104);
      InstrumentLeg_104.insert(LegCreditRating_104.getString());
      FIX::LegCurrency LegCurrency_104("JPY");
      noLegs_2_1_1.set(LegCurrency_104);
      InstrumentLeg_104.insert(LegCurrency_104.getString());
      FIX::LegDatedDate LegDatedDate_104("LOCALMKTDATE_1483651942");
      noLegs_2_1_1.set(LegDatedDate_104);
      InstrumentLeg_104.insert(LegDatedDate_104.getString());
      FIX::LegExerciseStyle LegExerciseStyle_104(1146987025);
      noLegs_2_1_1.set(LegExerciseStyle_104);
      InstrumentLeg_104.insert(LegExerciseStyle_104.getString());
      FIX::LegFactor LegFactor_104;
      LegFactor_104.setString("20518850");
      noLegs_2_1_1.set(LegFactor_104);
      InstrumentLeg_104.insert(LegFactor_104.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_104(202903512);
      noLegs_2_1_1.set(LegFlowScheduleType_104);
      InstrumentLeg_104.insert(LegFlowScheduleType_104.getString());
      FIX::LegInstrRegistry LegInstrRegistry_104("STRING_118196948");
      noLegs_2_1_1.set(LegInstrRegistry_104);
      InstrumentLeg_104.insert(LegInstrRegistry_104.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_104("LOCALMKTDATE_95476814");
      noLegs_2_1_1.set(LegInterestAccrualDate_104);
      InstrumentLeg_104.insert(LegInterestAccrualDate_104.getString());
      FIX::LegIssueDate LegIssueDate_104("LOCALMKTDATE_654064746");
      noLegs_2_1_1.set(LegIssueDate_104);
      InstrumentLeg_104.insert(LegIssueDate_104.getString());
      FIX::LegIssuer LegIssuer_104("STRING_1041251462");
      noLegs_2_1_1.set(LegIssuer_104);
      InstrumentLeg_104.insert(LegIssuer_104.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_104("STRING_879238729");
      noLegs_2_1_1.set(LegLocaleOfIssue_104);
      InstrumentLeg_104.insert(LegLocaleOfIssue_104.getString());
      FIX::LegMaturityDate LegMaturityDate_104("LOCALMKTDATE_169281066");
      noLegs_2_1_1.set(LegMaturityDate_104);
      InstrumentLeg_104.insert(LegMaturityDate_104.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_104("MONTHYEAR_1019472553");
      noLegs_2_1_1.set(LegMaturityMonthYear_104);
      InstrumentLeg_104.insert(LegMaturityMonthYear_104.getString());
      FIX::LegMaturityTime LegMaturityTime_104("TZTIMEONLY_552494986");
      noLegs_2_1_1.set(LegMaturityTime_104);
      InstrumentLeg_104.insert(LegMaturityTime_104.getString());
      FIX::LegOptAttribute LegOptAttribute_104('2');
      noLegs_2_1_1.set(LegOptAttribute_104);
      InstrumentLeg_104.insert(LegOptAttribute_104.getString());
      FIX::LegOptionRatio LegOptionRatio_104;
      LegOptionRatio_104.setString("17189266");
      noLegs_2_1_1.set(LegOptionRatio_104);
      InstrumentLeg_104.insert(LegOptionRatio_104.getString());
      FIX::LegPool LegPool_104("STRING_704769343");
      noLegs_2_1_1.set(LegPool_104);
      InstrumentLeg_104.insert(LegPool_104.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_104("STRING_417763607");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_104);
      InstrumentLeg_104.insert(LegPriceUnitOfMeasure_104.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_104;
      LegPriceUnitOfMeasureQty_104.setString("11185307");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_104);
      InstrumentLeg_104.insert(LegPriceUnitOfMeasureQty_104.getString());
      FIX::LegProduct LegProduct_104(1781045830);
      noLegs_2_1_1.set(LegProduct_104);
      InstrumentLeg_104.insert(LegProduct_104.getString());
      FIX::LegPutOrCall LegPutOrCall_104(349754355);
      noLegs_2_1_1.set(LegPutOrCall_104);
      InstrumentLeg_104.insert(LegPutOrCall_104.getString());
      FIX::LegRatioQty LegRatioQty_104;
      LegRatioQty_104.setString("12053013");
      noLegs_2_1_1.set(LegRatioQty_104);
      InstrumentLeg_104.insert(LegRatioQty_104.getString());
      FIX::LegRedemptionDate LegRedemptionDate_104("LOCALMKTDATE_780005791");
      noLegs_2_1_1.set(LegRedemptionDate_104);
      InstrumentLeg_104.insert(LegRedemptionDate_104.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_104("STRING_787947341");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_104);
      InstrumentLeg_104.insert(LegRepoCollateralSecurityType_104.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_104;
      LegRepurchaseRate_104.setString("22.880000");
      noLegs_2_1_1.set(LegRepurchaseRate_104);
      InstrumentLeg_104.insert(LegRepurchaseRate_104.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_104(683927165);
      noLegs_2_1_1.set(LegRepurchaseTerm_104);
      InstrumentLeg_104.insert(LegRepurchaseTerm_104.getString());
      FIX::LegSecurityDesc LegSecurityDesc_104("STRING_1077021987");
      noLegs_2_1_1.set(LegSecurityDesc_104);
      InstrumentLeg_104.insert(LegSecurityDesc_104.getString());
      FIX::LegSecurityExchange LegSecurityExchange_104("EXCHANGE_1348444774");
      noLegs_2_1_1.set(LegSecurityExchange_104);
      InstrumentLeg_104.insert(LegSecurityExchange_104.getString());
      FIX::LegSecurityID LegSecurityID_104("STRING_330284296");
      noLegs_2_1_1.set(LegSecurityID_104);
      InstrumentLeg_104.insert(LegSecurityID_104.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_104("STRING_616744467");
      noLegs_2_1_1.set(LegSecurityIDSource_104);
      InstrumentLeg_104.insert(LegSecurityIDSource_104.getString());
      FIX::LegSecuritySubType LegSecuritySubType_104("STRING_596703759");
      noLegs_2_1_1.set(LegSecuritySubType_104);
      InstrumentLeg_104.insert(LegSecuritySubType_104.getString());
      FIX::LegSecurityType LegSecurityType_104("STRING_1736037378");
      noLegs_2_1_1.set(LegSecurityType_104);
      InstrumentLeg_104.insert(LegSecurityType_104.getString());
      FIX::LegSide LegSide_104('1');
      noLegs_2_1_1.set(LegSide_104);
      InstrumentLeg_104.insert(LegSide_104.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_104("STRING_2080355701");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_104);
      InstrumentLeg_104.insert(LegStateOrProvinceOfIssue_104.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_104("USD");
      noLegs_2_1_1.set(LegStrikeCurrency_104);
      InstrumentLeg_104.insert(LegStrikeCurrency_104.getString());
      FIX::LegStrikePrice LegStrikePrice_104;
      LegStrikePrice_104.setString("1357755");
      noLegs_2_1_1.set(LegStrikePrice_104);
      InstrumentLeg_104.insert(LegStrikePrice_104.getString());
      FIX::LegSymbol LegSymbol_104("STRING_853737704");
      noLegs_2_1_1.set(LegSymbol_104);
      InstrumentLeg_104.insert(LegSymbol_104.getString());
      FIX::LegSymbolSfx LegSymbolSfx_104("STRING_1021591790");
      noLegs_2_1_1.set(LegSymbolSfx_104);
      InstrumentLeg_104.insert(LegSymbolSfx_104.getString());
      FIX::LegTimeUnit LegTimeUnit_104("STRING_789840311");
      noLegs_2_1_1.set(LegTimeUnit_104);
      InstrumentLeg_104.insert(LegTimeUnit_104.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_104("STRING_1894989166");
      noLegs_2_1_1.set(LegUnitOfMeasure_104);
      InstrumentLeg_104.insert(LegUnitOfMeasure_104.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_104;
      LegUnitOfMeasureQty_104.setString("19008305");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_104);
      InstrumentLeg_104.insert(LegUnitOfMeasureQty_104.getString());
      all_values.push_back(InstrumentLeg_104);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_203;
        FIX::LegSecurityAltID LegSecurityAltID_203("STRING_766978072");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_203);
        LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltID_203.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_203("STRING_305841857");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_203);
        LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltIDSource_203.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_203);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      noQuoteEntries_0_2.addGroup(noLegs_2_1_1);
    }
    // Instrument
    multiset<string> Instrument_68;
    FIX::AttachmentPoint AttachmentPoint_68;
    AttachmentPoint_68.setString("11.770000");
    noQuoteEntries_0_2.set(AttachmentPoint_68);
    Instrument_68.insert(AttachmentPoint_68.getString());
    FIX::CFICode CFICode_68("STRING_338421056");
    noQuoteEntries_0_2.set(CFICode_68);
    Instrument_68.insert(CFICode_68.getString());
    FIX::CPProgram CPProgram_68(2);
    noQuoteEntries_0_2.set(CPProgram_68);
    Instrument_68.insert(CPProgram_68.getString());
    FIX::CPRegType CPRegType_68("STRING_1317604784");
    noQuoteEntries_0_2.set(CPRegType_68);
    Instrument_68.insert(CPRegType_68.getString());
    FIX::CapPrice CapPrice_68;
    CapPrice_68.setString("14569517");
    noQuoteEntries_0_2.set(CapPrice_68);
    Instrument_68.insert(CapPrice_68.getString());
    FIX::ContractMultiplier ContractMultiplier_68;
    ContractMultiplier_68.setString("6441733");
    noQuoteEntries_0_2.set(ContractMultiplier_68);
    Instrument_68.insert(ContractMultiplier_68.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_68(2);
    noQuoteEntries_0_2.set(ContractMultiplierUnit_68);
    Instrument_68.insert(ContractMultiplierUnit_68.getString());
    FIX::ContractSettlMonth ContractSettlMonth_68("MONTHYEAR_514769426");
    noQuoteEntries_0_2.set(ContractSettlMonth_68);
    Instrument_68.insert(ContractSettlMonth_68.getString());
    FIX::CountryOfIssue CountryOfIssue_68("COUNTRY_1424179175");
    noQuoteEntries_0_2.set(CountryOfIssue_68);
    Instrument_68.insert(CountryOfIssue_68.getString());
    FIX::CouponPaymentDate CouponPaymentDate_68("LOCALMKTDATE_307822832");
    noQuoteEntries_0_2.set(CouponPaymentDate_68);
    Instrument_68.insert(CouponPaymentDate_68.getString());
    FIX::CouponRate CouponRate_68;
    CouponRate_68.setString("17.140000");
    noQuoteEntries_0_2.set(CouponRate_68);
    Instrument_68.insert(CouponRate_68.getString());
    FIX::CreditRating CreditRating_68("STRING_2108106340");
    noQuoteEntries_0_2.set(CreditRating_68);
    Instrument_68.insert(CreditRating_68.getString());
    FIX::DatedDate DatedDate_68("LOCALMKTDATE_1384844819");
    noQuoteEntries_0_2.set(DatedDate_68);
    Instrument_68.insert(DatedDate_68.getString());
    FIX::DetachmentPoint DetachmentPoint_68;
    DetachmentPoint_68.setString("28.400000");
    noQuoteEntries_0_2.set(DetachmentPoint_68);
    Instrument_68.insert(DetachmentPoint_68.getString());
    FIX::EncodedIssuer EncodedIssuer_68("DATA_290906988");
    noQuoteEntries_0_2.set(EncodedIssuer_68);
    Instrument_68.insert(EncodedIssuer_68.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_68(2001589286);
    noQuoteEntries_0_2.set(EncodedIssuerLen_68);
    Instrument_68.insert(EncodedIssuerLen_68.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_68("DATA_664636600");
    noQuoteEntries_0_2.set(EncodedSecurityDesc_68);
    Instrument_68.insert(EncodedSecurityDesc_68.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_68(2026944367);
    noQuoteEntries_0_2.set(EncodedSecurityDescLen_68);
    Instrument_68.insert(EncodedSecurityDescLen_68.getString());
    FIX::ExerciseStyle ExerciseStyle_68(2);
    noQuoteEntries_0_2.set(ExerciseStyle_68);
    Instrument_68.insert(ExerciseStyle_68.getString());
    FIX::Factor Factor_68;
    Factor_68.setString("5975086");
    noQuoteEntries_0_2.set(Factor_68);
    Instrument_68.insert(Factor_68.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_68(false);
    noQuoteEntries_0_2.set(FlexProductEligibilityIndicator_68);
    Instrument_68.insert(FlexProductEligibilityIndicator_68.getString());
    FIX::FlexibleIndicator FlexibleIndicator_68(true);
    noQuoteEntries_0_2.set(FlexibleIndicator_68);
    Instrument_68.insert(FlexibleIndicator_68.getString());
    FIX::FloorPrice FloorPrice_68;
    FloorPrice_68.setString("7332842");
    noQuoteEntries_0_2.set(FloorPrice_68);
    Instrument_68.insert(FloorPrice_68.getString());
    FIX::FlowScheduleType FlowScheduleType_68(4);
    noQuoteEntries_0_2.set(FlowScheduleType_68);
    Instrument_68.insert(FlowScheduleType_68.getString());
    FIX::InstrRegistry InstrRegistry_68("STRING_676042358");
    noQuoteEntries_0_2.set(InstrRegistry_68);
    Instrument_68.insert(InstrRegistry_68.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_68('1');
    noQuoteEntries_0_2.set(InstrmtAssignmentMethod_68);
    Instrument_68.insert(InstrmtAssignmentMethod_68.getString());
    FIX::InterestAccrualDate InterestAccrualDate_68("LOCALMKTDATE_1216244698");
    noQuoteEntries_0_2.set(InterestAccrualDate_68);
    Instrument_68.insert(InterestAccrualDate_68.getString());
    FIX::IssueDate IssueDate_68("LOCALMKTDATE_429389230");
    noQuoteEntries_0_2.set(IssueDate_68);
    Instrument_68.insert(IssueDate_68.getString());
    FIX::Issuer Issuer_68("STRING_334762260");
    noQuoteEntries_0_2.set(Issuer_68);
    Instrument_68.insert(Issuer_68.getString());
    FIX::ListMethod ListMethod_68(0);
    noQuoteEntries_0_2.set(ListMethod_68);
    Instrument_68.insert(ListMethod_68.getString());
    FIX::LocaleOfIssue LocaleOfIssue_68("STRING_735231087");
    noQuoteEntries_0_2.set(LocaleOfIssue_68);
    Instrument_68.insert(LocaleOfIssue_68.getString());
    FIX::MaturityDate MaturityDate_68("LOCALMKTDATE_1234603437");
    noQuoteEntries_0_2.set(MaturityDate_68);
    Instrument_68.insert(MaturityDate_68.getString());
    FIX::MaturityMonthYear MaturityMonthYear_68("MONTHYEAR_174160178");
    noQuoteEntries_0_2.set(MaturityMonthYear_68);
    Instrument_68.insert(MaturityMonthYear_68.getString());
    FIX::MaturityTime MaturityTime_68("TZTIMEONLY_1745842288");
    noQuoteEntries_0_2.set(MaturityTime_68);
    Instrument_68.insert(MaturityTime_68.getString());
    FIX::MinPriceIncrement MinPriceIncrement_68;
    MinPriceIncrement_68.setString("4047245");
    noQuoteEntries_0_2.set(MinPriceIncrement_68);
    Instrument_68.insert(MinPriceIncrement_68.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
    MinPriceIncrementAmount_68.setString("16311119");
    noQuoteEntries_0_2.set(MinPriceIncrementAmount_68);
    Instrument_68.insert(MinPriceIncrementAmount_68.getString());
    FIX::NTPositionLimit NTPositionLimit_68(242532024);
    noQuoteEntries_0_2.set(NTPositionLimit_68);
    Instrument_68.insert(NTPositionLimit_68.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
    NotionalPercentageOutstanding_68.setString("37.130000");
    noQuoteEntries_0_2.set(NotionalPercentageOutstanding_68);
    Instrument_68.insert(NotionalPercentageOutstanding_68.getString());
    FIX::OptAttribute OptAttribute_68('2');
    noQuoteEntries_0_2.set(OptAttribute_68);
    Instrument_68.insert(OptAttribute_68.getString());
    FIX::OptPayoutAmount OptPayoutAmount_68;
    OptPayoutAmount_68.setString("16667111");
    noQuoteEntries_0_2.set(OptPayoutAmount_68);
    Instrument_68.insert(OptPayoutAmount_68.getString());
    FIX::OptPayoutType OptPayoutType_68(1);
    noQuoteEntries_0_2.set(OptPayoutType_68);
    Instrument_68.insert(OptPayoutType_68.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
    OriginalNotionalPercentageOutstanding_68.setString("94.400000");
    noQuoteEntries_0_2.set(OriginalNotionalPercentageOutstanding_68);
    Instrument_68.insert(OriginalNotionalPercentageOutstanding_68.getString());
    FIX::Pool Pool_68("STRING_1627333891");
    noQuoteEntries_0_2.set(Pool_68);
    Instrument_68.insert(Pool_68.getString());
    FIX::PositionLimit PositionLimit_68(1617267717);
    noQuoteEntries_0_2.set(PositionLimit_68);
    Instrument_68.insert(PositionLimit_68.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_68("STRING_STD");
    noQuoteEntries_0_2.set(PriceQuoteMethod_68);
    Instrument_68.insert(PriceQuoteMethod_68.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_68("STRING_1918240879");
    noQuoteEntries_0_2.set(PriceUnitOfMeasure_68);
    Instrument_68.insert(PriceUnitOfMeasure_68.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
    PriceUnitOfMeasureQty_68.setString("14713733");
    noQuoteEntries_0_2.set(PriceUnitOfMeasureQty_68);
    Instrument_68.insert(PriceUnitOfMeasureQty_68.getString());
    FIX::Product Product_70(6);
    noQuoteEntries_0_2.set(Product_70);
    Instrument_68.insert(Product_70.getString());
    FIX::ProductComplex ProductComplex_68("STRING_1797701598");
    noQuoteEntries_0_2.set(ProductComplex_68);
    Instrument_68.insert(ProductComplex_68.getString());
    FIX::PutOrCall PutOrCall_68(1);
    noQuoteEntries_0_2.set(PutOrCall_68);
    Instrument_68.insert(PutOrCall_68.getString());
    FIX::RedemptionDate RedemptionDate_68("LOCALMKTDATE_47963886");
    noQuoteEntries_0_2.set(RedemptionDate_68);
    Instrument_68.insert(RedemptionDate_68.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_68("STRING_265219425");
    noQuoteEntries_0_2.set(RepoCollateralSecurityType_68);
    Instrument_68.insert(RepoCollateralSecurityType_68.getString());
    FIX::RepurchaseRate RepurchaseRate_68;
    RepurchaseRate_68.setString("31.630000");
    noQuoteEntries_0_2.set(RepurchaseRate_68);
    Instrument_68.insert(RepurchaseRate_68.getString());
    FIX::RepurchaseTerm RepurchaseTerm_68(781248105);
    noQuoteEntries_0_2.set(RepurchaseTerm_68);
    Instrument_68.insert(RepurchaseTerm_68.getString());
    FIX::RestructuringType RestructuringType_68("STRING_MR");
    noQuoteEntries_0_2.set(RestructuringType_68);
    Instrument_68.insert(RestructuringType_68.getString());
    FIX::SecurityDesc SecurityDesc_68("STRING_530201874");
    noQuoteEntries_0_2.set(SecurityDesc_68);
    Instrument_68.insert(SecurityDesc_68.getString());
    FIX::SecurityExchange SecurityExchange_68("EXCHANGE_156888987");
    noQuoteEntries_0_2.set(SecurityExchange_68);
    Instrument_68.insert(SecurityExchange_68.getString());
    FIX::SecurityGroup SecurityGroup_68("STRING_802719655");
    noQuoteEntries_0_2.set(SecurityGroup_68);
    Instrument_68.insert(SecurityGroup_68.getString());
    FIX::SecurityID SecurityID_68("STRING_959591104");
    noQuoteEntries_0_2.set(SecurityID_68);
    Instrument_68.insert(SecurityID_68.getString());
    FIX::SecurityIDSource SecurityIDSource_68("STRING_1");
    noQuoteEntries_0_2.set(SecurityIDSource_68);
    Instrument_68.insert(SecurityIDSource_68.getString());
    FIX::SecurityStatus SecurityStatus_68("STRING_2");
    noQuoteEntries_0_2.set(SecurityStatus_68);
    Instrument_68.insert(SecurityStatus_68.getString());
    FIX::SecuritySubType SecuritySubType_69("STRING_1694822191");
    noQuoteEntries_0_2.set(SecuritySubType_69);
    Instrument_68.insert(SecuritySubType_69.getString());
    FIX::SecurityType SecurityType_70("STRING_FXSWAP");
    noQuoteEntries_0_2.set(SecurityType_70);
    Instrument_68.insert(SecurityType_70.getString());
    FIX::Seniority Seniority_68("STRING_SD");
    noQuoteEntries_0_2.set(Seniority_68);
    Instrument_68.insert(Seniority_68.getString());
    FIX::SettlMethod SettlMethod_68('C');
    noQuoteEntries_0_2.set(SettlMethod_68);
    Instrument_68.insert(SettlMethod_68.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_68("STRING_2130979259");
    noQuoteEntries_0_2.set(SettleOnOpenFlag_68);
    Instrument_68.insert(SettleOnOpenFlag_68.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_68("STRING_296247255");
    noQuoteEntries_0_2.set(StateOrProvinceOfIssue_68);
    Instrument_68.insert(StateOrProvinceOfIssue_68.getString());
    FIX::StrikeCurrency StrikeCurrency_68("USD");
    noQuoteEntries_0_2.set(StrikeCurrency_68);
    Instrument_68.insert(StrikeCurrency_68.getString());
    FIX::StrikeMultiplier StrikeMultiplier_68;
    StrikeMultiplier_68.setString("2946449");
    noQuoteEntries_0_2.set(StrikeMultiplier_68);
    Instrument_68.insert(StrikeMultiplier_68.getString());
    FIX::StrikePrice StrikePrice_68;
    StrikePrice_68.setString("10549404");
    noQuoteEntries_0_2.set(StrikePrice_68);
    Instrument_68.insert(StrikePrice_68.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_68(4);
    noQuoteEntries_0_2.set(StrikePriceBoundaryMethod_68);
    Instrument_68.insert(StrikePriceBoundaryMethod_68.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
    StrikePriceBoundaryPrecision_68.setString("44.210000");
    noQuoteEntries_0_2.set(StrikePriceBoundaryPrecision_68);
    Instrument_68.insert(StrikePriceBoundaryPrecision_68.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_68(3);
    noQuoteEntries_0_2.set(StrikePriceDeterminationMethod_68);
    Instrument_68.insert(StrikePriceDeterminationMethod_68.getString());
    FIX::StrikeValue StrikeValue_68;
    StrikeValue_68.setString("17577862");
    noQuoteEntries_0_2.set(StrikeValue_68);
    Instrument_68.insert(StrikeValue_68.getString());
    FIX::Symbol Symbol_68("STRING_2093316702");
    noQuoteEntries_0_2.set(Symbol_68);
    Instrument_68.insert(Symbol_68.getString());
    FIX::SymbolSfx SymbolSfx_68("STRING_WI");
    noQuoteEntries_0_2.set(SymbolSfx_68);
    Instrument_68.insert(SymbolSfx_68.getString());
    FIX::TimeUnit TimeUnit_68("STRING_Wk");
    noQuoteEntries_0_2.set(TimeUnit_68);
    Instrument_68.insert(TimeUnit_68.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_68(3);
    noQuoteEntries_0_2.set(UnderlyingPriceDeterminationMethod_68);
    Instrument_68.insert(UnderlyingPriceDeterminationMethod_68.getString());
    FIX::UnitOfMeasure UnitOfMeasure_68("STRING_Gal");
    noQuoteEntries_0_2.set(UnitOfMeasure_68);
    Instrument_68.insert(UnitOfMeasure_68.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
    UnitOfMeasureQty_68.setString("12813849");
    noQuoteEntries_0_2.set(UnitOfMeasureQty_68);
    Instrument_68.insert(UnitOfMeasureQty_68.getString());
    FIX::ValuationMethod ValuationMethod_68("STRING_EQTY");
    noQuoteEntries_0_2.set(ValuationMethod_68);
    Instrument_68.insert(ValuationMethod_68.getString());
    all_values.push_back(Instrument_68);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_132;
      FIX::ComplexEventCondition ComplexEventCondition_132(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventCondition_132.getString());
      FIX::ComplexEventPrice ComplexEventPrice_132;
      ComplexEventPrice_132.setString("2255002");
      noComplexEvents_2_1_0.set(ComplexEventPrice_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPrice_132.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_132(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryMethod_132.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_132;
      ComplexEventPriceBoundaryPrecision_132.setString("63.350000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryPrecision_132.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_132(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceTimeType_132.getString());
      FIX::ComplexEventType ComplexEventType_132(3);
      noComplexEvents_2_1_0.set(ComplexEventType_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventType_132.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_132;
      ComplexOptPayoutAmount_132.setString("4778537");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexOptPayoutAmount_132.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_132);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_271;
        FIX::ComplexEventEndDate ComplexEventEndDate_271(FIX::UTCTIMESTAMP(14, 10, 22, 26, 2, 2017));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_271);
        ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventEndDate_271.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_271(FIX::UTCTIMESTAMP(5, 11, 21, 23, 5, 2007));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_271);
        ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventStartDate_271.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_271);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_541;
          FIX::ComplexEventEndTime ComplexEventEndTime_541(FIX::UTCTIMEONLY(1, 51, 33));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_541);
          ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventEndTime_541.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_541(FIX::UTCTIMEONLY(5, 45, 54));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_541);
          ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventStartTime_541.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_541);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_272;
        FIX::ComplexEventEndDate ComplexEventEndDate_272(FIX::UTCTIMESTAMP(19, 29, 17, 20, 11, 2014));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_272);
        ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventEndDate_272.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_272(FIX::UTCTIMESTAMP(21, 22, 3, 11, 10, 2017));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_272);
        ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventStartDate_272.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_272);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_542;
          FIX::ComplexEventEndTime ComplexEventEndTime_542(FIX::UTCTIMEONLY(10, 51, 49));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_542);
          ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventEndTime_542.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_542(FIX::UTCTIMEONLY(12, 32, 27));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_542);
          ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventStartTime_542.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_542);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_543;
          FIX::ComplexEventEndTime ComplexEventEndTime_543(FIX::UTCTIMEONLY(9, 10, 27));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_543);
          ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventEndTime_543.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_543(FIX::UTCTIMEONLY(3, 13, 1));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_543);
          ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventStartTime_543.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_543);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_273;
        FIX::ComplexEventEndDate ComplexEventEndDate_273(FIX::UTCTIMESTAMP(8, 30, 18, 12, 5, 2012));
        noComplexEventDates_2_0_2_2.set(ComplexEventEndDate_273);
        ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventEndDate_273.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_273(FIX::UTCTIMESTAMP(1, 41, 52, 4, 7, 2003));
        noComplexEventDates_2_0_2_2.set(ComplexEventStartDate_273);
        ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventStartDate_273.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_273);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_544;
          FIX::ComplexEventEndTime ComplexEventEndTime_544(FIX::UTCTIMEONLY(12, 0, 10));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventEndTime_544);
          ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventEndTime_544.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_544(FIX::UTCTIMEONLY(12, 43, 24));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventStartTime_544);
          ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventStartTime_544.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_544);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_2);
      }
      noQuoteEntries_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_133;
      FIX::ComplexEventCondition ComplexEventCondition_133(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventCondition_133.getString());
      FIX::ComplexEventPrice ComplexEventPrice_133;
      ComplexEventPrice_133.setString("11364431");
      noComplexEvents_2_1_1.set(ComplexEventPrice_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPrice_133.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_133(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryMethod_133.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_133;
      ComplexEventPriceBoundaryPrecision_133.setString("1.380000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryPrecision_133.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_133(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceTimeType_133.getString());
      FIX::ComplexEventType ComplexEventType_133(7);
      noComplexEvents_2_1_1.set(ComplexEventType_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventType_133.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_133;
      ComplexOptPayoutAmount_133.setString("9506747");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexOptPayoutAmount_133.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_133);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_274;
        FIX::ComplexEventEndDate ComplexEventEndDate_274(FIX::UTCTIMESTAMP(15, 2, 18, 15, 7, 2001));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_274);
        ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventEndDate_274.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_274(FIX::UTCTIMESTAMP(12, 10, 21, 24, 5, 2004));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_274);
        ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventStartDate_274.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_274);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_545;
          FIX::ComplexEventEndTime ComplexEventEndTime_545(FIX::UTCTIMEONLY(22, 18, 36));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_545);
          ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventEndTime_545.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_545(FIX::UTCTIMEONLY(10, 11, 44));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_545);
          ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventStartTime_545.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_545);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_546;
          FIX::ComplexEventEndTime ComplexEventEndTime_546(FIX::UTCTIMEONLY(19, 11, 8));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_546);
          ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventEndTime_546.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_546(FIX::UTCTIMEONLY(6, 3, 54));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_546);
          ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventStartTime_546.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_546);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_547;
          FIX::ComplexEventEndTime ComplexEventEndTime_547(FIX::UTCTIMEONLY(7, 48, 36));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventEndTime_547);
          ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventEndTime_547.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_547(FIX::UTCTIMEONLY(23, 13, 3));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventStartTime_547);
          ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventStartTime_547.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_547);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_275;
        FIX::ComplexEventEndDate ComplexEventEndDate_275(FIX::UTCTIMESTAMP(11, 24, 7, 15, 11, 2011));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_275);
        ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventEndDate_275.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_275(FIX::UTCTIMESTAMP(9, 35, 21, 13, 10, 2006));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_275);
        ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventStartDate_275.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_275);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_548;
          FIX::ComplexEventEndTime ComplexEventEndTime_548(FIX::UTCTIMEONLY(11, 57, 31));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_548);
          ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventEndTime_548.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_548(FIX::UTCTIMEONLY(19, 34, 0));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_548);
          ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventStartTime_548.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_548);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_549;
          FIX::ComplexEventEndTime ComplexEventEndTime_549(FIX::UTCTIMEONLY(17, 49, 53));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_549);
          ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventEndTime_549.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_549(FIX::UTCTIMEONLY(12, 7, 7));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_549);
          ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventStartTime_549.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_549);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_550;
          FIX::ComplexEventEndTime ComplexEventEndTime_550(FIX::UTCTIMEONLY(10, 23, 50));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventEndTime_550);
          ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventEndTime_550.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_550(FIX::UTCTIMEONLY(21, 7, 19));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventStartTime_550);
          ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventStartTime_550.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_550);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noQuoteEntries_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_138;
      FIX::EventDate EventDate_138("LOCALMKTDATE_1903478022");
      noEvents_2_1_0.set(EventDate_138);
      EvntGrp_NoEvents_138.insert(EventDate_138.getString());
      FIX::EventPx EventPx_138;
      EventPx_138.setString("9886872");
      noEvents_2_1_0.set(EventPx_138);
      EvntGrp_NoEvents_138.insert(EventPx_138.getString());
      FIX::EventText EventText_138("STRING_370309855");
      noEvents_2_1_0.set(EventText_138);
      EvntGrp_NoEvents_138.insert(EventText_138.getString());
      FIX::EventTime EventTime_138(FIX::UTCTIMESTAMP(20, 49, 19, 27, 11, 2014));
      noEvents_2_1_0.set(EventTime_138);
      EvntGrp_NoEvents_138.insert(EventTime_138.getString());
      FIX::EventType EventType_138(2);
      noEvents_2_1_0.set(EventType_138);
      EvntGrp_NoEvents_138.insert(EventType_138.getString());
      all_values.push_back(EvntGrp_NoEvents_138);

      noQuoteEntries_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_139;
      FIX::EventDate EventDate_139("LOCALMKTDATE_153428805");
      noEvents_2_1_1.set(EventDate_139);
      EvntGrp_NoEvents_139.insert(EventDate_139.getString());
      FIX::EventPx EventPx_139;
      EventPx_139.setString("14861009");
      noEvents_2_1_1.set(EventPx_139);
      EvntGrp_NoEvents_139.insert(EventPx_139.getString());
      FIX::EventText EventText_139("STRING_1466706002");
      noEvents_2_1_1.set(EventText_139);
      EvntGrp_NoEvents_139.insert(EventText_139.getString());
      FIX::EventTime EventTime_139(FIX::UTCTIMESTAMP(22, 43, 3, 14, 8, 2008));
      noEvents_2_1_1.set(EventTime_139);
      EvntGrp_NoEvents_139.insert(EventTime_139.getString());
      FIX::EventType EventType_139(10);
      noEvents_2_1_1.set(EventType_139);
      EvntGrp_NoEvents_139.insert(EventType_139.getString());
      all_values.push_back(EvntGrp_NoEvents_139);

      noQuoteEntries_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_142;
      FIX::InstrumentPartyID InstrumentPartyID_142("STRING_657256397");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyID_142.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_142('2');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyIDSource_142.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_142(152230576);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyRole_142.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_142);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299;
        FIX::InstrumentPartySubID InstrumentPartySubID_299("STRING_1292983261");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_299);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubID_299.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_299(760688604);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_299);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubIDType_299.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noQuoteEntries_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_143;
      FIX::InstrumentPartyID InstrumentPartyID_143("STRING_1605514690");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyID_143.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_143('2');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyIDSource_143.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_143(516682978);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyRole_143.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_143);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300;
        FIX::InstrumentPartySubID InstrumentPartySubID_300("STRING_281554115");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_300);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubID_300.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_300(2040873534);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_300);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubIDType_300.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301;
        FIX::InstrumentPartySubID InstrumentPartySubID_301("STRING_2082241770");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_301);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubID_301.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_301(1818957504);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_301);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubIDType_301.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      noQuoteEntries_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_151;
      FIX::SecurityAltID SecurityAltID_151("STRING_1864293617");
      noSecurityAltID_2_1_0.set(SecurityAltID_151);
      SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltID_151.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_151("STRING_1602216122");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_151);
      SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltIDSource_151.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_151);

      noQuoteEntries_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_152;
      FIX::SecurityAltID SecurityAltID_152("STRING_1453292935");
      noSecurityAltID_2_1_1.set(SecurityAltID_152);
      SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltID_152.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_152("STRING_401625851");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_152);
      SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltIDSource_152.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_152);

      noQuoteEntries_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_153;
      FIX::SecurityAltID SecurityAltID_153("STRING_1755644927");
      noSecurityAltID_2_1_2.set(SecurityAltID_153);
      SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltID_153.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_153("STRING_791910252");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_153);
      SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltIDSource_153.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_153);

      noQuoteEntries_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_136;
    FIX::SecurityXML SecurityXML_137("XMLDATA_1868331853");
    noQuoteEntries_0_2.set(SecurityXML_137);
    FIX::SecurityXMLLen SecurityXMLLen_68(1097425009);
    noQuoteEntries_0_2.set(SecurityXMLLen_68);
    FIX::SecurityXMLSchema SecurityXMLSchema_68("STRING_1466580658");
    noQuoteEntries_0_2.set(SecurityXMLSchema_68);
    SecurityXML_136.insert(SecurityXMLSchema_68.getString());
    all_values.push_back(SecurityXML_136);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_97;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_97("DATA_637426845");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingIssuer_97.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_97(1506096820);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingIssuerLen_97.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_97("DATA_843987391");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDesc_97.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_97(1927561247);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDescLen_97.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_97;
      UnderlyingAdjustedQuantity_97.setString("10299910");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_97);
      UnderlyingInstrument_97.insert(UnderlyingAdjustedQuantity_97.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_97;
      UnderlyingAllocationPercent_97.setString("39.370000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_97);
      UnderlyingInstrument_97.insert(UnderlyingAllocationPercent_97.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_97;
      UnderlyingAttachmentPoint_97.setString("39.960000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_97);
      UnderlyingInstrument_97.insert(UnderlyingAttachmentPoint_97.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_97("STRING_929366905");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_97);
      UnderlyingInstrument_97.insert(UnderlyingCFICode_97.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_97("STRING_571954513");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_97);
      UnderlyingInstrument_97.insert(UnderlyingCPProgram_97.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_97("STRING_1042781087");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_97);
      UnderlyingInstrument_97.insert(UnderlyingCPRegType_97.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_97;
      UnderlyingCapValue_97.setString("748665");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_97);
      UnderlyingInstrument_97.insert(UnderlyingCapValue_97.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_97;
      UnderlyingCashAmount_97.setString("13326431");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_97);
      UnderlyingInstrument_97.insert(UnderlyingCashAmount_97.getString());
      FIX::UnderlyingCashType UnderlyingCashType_97("STRING_DIFF");
      noUnderlyings_2_1_0.set(UnderlyingCashType_97);
      UnderlyingInstrument_97.insert(UnderlyingCashType_97.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_97;
      UnderlyingContractMultiplier_97.setString("21335944");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_97);
      UnderlyingInstrument_97.insert(UnderlyingContractMultiplier_97.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_97(1849326096);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_97);
      UnderlyingInstrument_97.insert(UnderlyingContractMultiplierUnit_97.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_97("COUNTRY_947530463");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingCountryOfIssue_97.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_97("LOCALMKTDATE_267664894");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_97);
      UnderlyingInstrument_97.insert(UnderlyingCouponPaymentDate_97.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_97;
      UnderlyingCouponRate_97.setString("59.820000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_97);
      UnderlyingInstrument_97.insert(UnderlyingCouponRate_97.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_97("STRING_882288585");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_97);
      UnderlyingInstrument_97.insert(UnderlyingCreditRating_97.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_97("GBP");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_97);
      UnderlyingInstrument_97.insert(UnderlyingCurrency_97.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_97;
      UnderlyingCurrentValue_97.setString("5990985");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_97);
      UnderlyingInstrument_97.insert(UnderlyingCurrentValue_97.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_97;
      UnderlyingDetachmentPoint_97.setString("48.730000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_97);
      UnderlyingInstrument_97.insert(UnderlyingDetachmentPoint_97.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_97;
      UnderlyingDirtyPrice_97.setString("15287467");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_97);
      UnderlyingInstrument_97.insert(UnderlyingDirtyPrice_97.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_97;
      UnderlyingEndPrice_97.setString("10007244");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_97);
      UnderlyingInstrument_97.insert(UnderlyingEndPrice_97.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_97;
      UnderlyingEndValue_97.setString("11495161");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_97);
      UnderlyingInstrument_97.insert(UnderlyingEndValue_97.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_97(173173399);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_97);
      UnderlyingInstrument_97.insert(UnderlyingExerciseStyle_97.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_97;
      UnderlyingFXRate_97.setString("7215726");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_97);
      UnderlyingInstrument_97.insert(UnderlyingFXRate_97.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_97('D');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_97);
      UnderlyingInstrument_97.insert(UnderlyingFXRateCalc_97.getString());
      FIX::UnderlyingFactor UnderlyingFactor_97;
      UnderlyingFactor_97.setString("16397540");
      noUnderlyings_2_1_0.set(UnderlyingFactor_97);
      UnderlyingInstrument_97.insert(UnderlyingFactor_97.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_97(587924159);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_97);
      UnderlyingInstrument_97.insert(UnderlyingFlowScheduleType_97.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_97("STRING_736884359");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_97);
      UnderlyingInstrument_97.insert(UnderlyingInstrRegistry_97.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_97("LOCALMKTDATE_998367229");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_97);
      UnderlyingInstrument_97.insert(UnderlyingIssueDate_97.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_97("STRING_1431911550");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_97);
      UnderlyingInstrument_97.insert(UnderlyingIssuer_97.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_97("STRING_516961958");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingLocaleOfIssue_97.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_97("LOCALMKTDATE_2028358270");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityDate_97.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_97("MONTHYEAR_1851635487");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityMonthYear_97.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_97("TZTIMEONLY_954295955");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityTime_97.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_97;
      UnderlyingNotionalPercentageOutstanding_97.setString("15.270000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_97);
      UnderlyingInstrument_97.insert(UnderlyingNotionalPercentageOutstanding_97.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_97('2');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_97);
      UnderlyingInstrument_97.insert(UnderlyingOptAttribute_97.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_97;
      UnderlyingOriginalNotionalPercentageOutstanding_97.setString("70.420000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_97);
      UnderlyingInstrument_97.insert(UnderlyingOriginalNotionalPercentageOutstanding_97.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_97("STRING_885108046");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_97);
      UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasure_97.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_97;
      UnderlyingPriceUnitOfMeasureQty_97.setString("16087494");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_97);
      UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasureQty_97.getString());
      FIX::UnderlyingProduct UnderlyingProduct_97(350405524);
      noUnderlyings_2_1_0.set(UnderlyingProduct_97);
      UnderlyingInstrument_97.insert(UnderlyingProduct_97.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_97(871218824);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_97);
      UnderlyingInstrument_97.insert(UnderlyingPutOrCall_97.getString());
      FIX::UnderlyingPx UnderlyingPx_97;
      UnderlyingPx_97.setString("13105919");
      noUnderlyings_2_1_0.set(UnderlyingPx_97);
      UnderlyingInstrument_97.insert(UnderlyingPx_97.getString());
      FIX::UnderlyingQty UnderlyingQty_97;
      UnderlyingQty_97.setString("12979359");
      noUnderlyings_2_1_0.set(UnderlyingQty_97);
      UnderlyingInstrument_97.insert(UnderlyingQty_97.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_97("LOCALMKTDATE_1138883718");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_97);
      UnderlyingInstrument_97.insert(UnderlyingRedemptionDate_97.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_97("STRING_905824252");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_97);
      UnderlyingInstrument_97.insert(UnderlyingRepoCollateralSecurityType_97.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_97;
      UnderlyingRepurchaseRate_97.setString("9.250000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_97);
      UnderlyingInstrument_97.insert(UnderlyingRepurchaseRate_97.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_97(1078022469);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_97);
      UnderlyingInstrument_97.insert(UnderlyingRepurchaseTerm_97.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_97("STRING_981278112");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_97);
      UnderlyingInstrument_97.insert(UnderlyingRestructuringType_97.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_97("STRING_631839480");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityDesc_97.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_97("EXCHANGE_471893694");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityExchange_97.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_97("STRING_362541260");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityID_97.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_97("STRING_1632563886");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityIDSource_97.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_97("STRING_1621409846");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_97);
      UnderlyingInstrument_97.insert(UnderlyingSecuritySubType_97.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_97("STRING_535714659");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityType_97.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_97("STRING_206652849");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_97);
      UnderlyingInstrument_97.insert(UnderlyingSeniority_97.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_97("STRING_1720867360");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_97);
      UnderlyingInstrument_97.insert(UnderlyingSettlMethod_97.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_97(4);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_97);
      UnderlyingInstrument_97.insert(UnderlyingSettlementType_97.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_97;
      UnderlyingStartValue_97.setString("7945770");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_97);
      UnderlyingInstrument_97.insert(UnderlyingStartValue_97.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_97("STRING_310268071");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingStateOrProvinceOfIssue_97.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_97("USD");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_97);
      UnderlyingInstrument_97.insert(UnderlyingStrikeCurrency_97.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_97;
      UnderlyingStrikePrice_97.setString("8272300");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_97);
      UnderlyingInstrument_97.insert(UnderlyingStrikePrice_97.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_97("STRING_907226921");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_97);
      UnderlyingInstrument_97.insert(UnderlyingSymbol_97.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_97("STRING_1930640397");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_97);
      UnderlyingInstrument_97.insert(UnderlyingSymbolSfx_97.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_97("STRING_1781525985");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_97);
      UnderlyingInstrument_97.insert(UnderlyingTimeUnit_97.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_97("STRING_1717468448");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_97);
      UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasure_97.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_97;
      UnderlyingUnitOfMeasureQty_97.setString("592631");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_97);
      UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasureQty_97.getString());
      all_values.push_back(UnderlyingInstrument_97);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_195;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_195("STRING_455092846");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltID_195.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_195("STRING_1668012571");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltIDSource_195.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_196("STRING_1981524903");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltID_196.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_196("STRING_1326311671");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltIDSource_196.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_197("STRING_831120841");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltID_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltID_197.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_197("STRING_1131977243");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltIDSource_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltIDSource_197.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_180;
        FIX::UnderlyingStipType UnderlyingStipType_180("STRING_1736945094");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_180);
        UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipType_180.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_180("STRING_1164718168");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_180);
        UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipValue_180.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_180);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_181;
        FIX::UnderlyingStipType UnderlyingStipType_181("STRING_1395734210");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_181);
        UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipType_181.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_181("STRING_570739558");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_181);
        UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipValue_181.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_181);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_182;
        FIX::UnderlyingStipType UnderlyingStipType_182("STRING_1796557648");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipType_182);
        UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipType_182.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_182("STRING_1867627904");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipValue_182);
        UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipValue_182.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_182);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_202;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_202("STRING_1281637886");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyID_202.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_202('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyIDSource_202.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_202(1468995478);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyRole_202.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_202);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_386("STRING_914937815");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_386);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubID_386.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_386(1496980547);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_386);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubIDType_386.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_387("STRING_135384095");
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubID_387);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubID_387.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_387(1225205887);
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_387);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubIDType_387.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_388("STRING_375849197");
          noUndlyInstrumentPartySubIDs_2_0_0_3_2.set(UnderlyingInstrumentPartySubID_388);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubID_388.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_388(214389005);
          noUndlyInstrumentPartySubIDs_2_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_388);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubIDType_388.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_2);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      noQuoteEntries_0_2.addGroup(noUnderlyings_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_2_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_98;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_98("DATA_2052435917");
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuer_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingIssuer_98.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_98(1283076118);
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuerLen_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingIssuerLen_98.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_98("DATA_2145029402");
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDesc_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDesc_98.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_98(1686478254);
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDescLen_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDescLen_98.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_98;
      UnderlyingAdjustedQuantity_98.setString("8530609");
      noUnderlyings_2_1_1.set(UnderlyingAdjustedQuantity_98);
      UnderlyingInstrument_98.insert(UnderlyingAdjustedQuantity_98.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_98;
      UnderlyingAllocationPercent_98.setString("88.550000");
      noUnderlyings_2_1_1.set(UnderlyingAllocationPercent_98);
      UnderlyingInstrument_98.insert(UnderlyingAllocationPercent_98.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_98;
      UnderlyingAttachmentPoint_98.setString("39.850000");
      noUnderlyings_2_1_1.set(UnderlyingAttachmentPoint_98);
      UnderlyingInstrument_98.insert(UnderlyingAttachmentPoint_98.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_98("STRING_1308153765");
      noUnderlyings_2_1_1.set(UnderlyingCFICode_98);
      UnderlyingInstrument_98.insert(UnderlyingCFICode_98.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_98("STRING_1724821427");
      noUnderlyings_2_1_1.set(UnderlyingCPProgram_98);
      UnderlyingInstrument_98.insert(UnderlyingCPProgram_98.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_98("STRING_1004155241");
      noUnderlyings_2_1_1.set(UnderlyingCPRegType_98);
      UnderlyingInstrument_98.insert(UnderlyingCPRegType_98.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_98;
      UnderlyingCapValue_98.setString("4869817");
      noUnderlyings_2_1_1.set(UnderlyingCapValue_98);
      UnderlyingInstrument_98.insert(UnderlyingCapValue_98.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_98;
      UnderlyingCashAmount_98.setString("4084586");
      noUnderlyings_2_1_1.set(UnderlyingCashAmount_98);
      UnderlyingInstrument_98.insert(UnderlyingCashAmount_98.getString());
      FIX::UnderlyingCashType UnderlyingCashType_98("STRING_FIXED");
      noUnderlyings_2_1_1.set(UnderlyingCashType_98);
      UnderlyingInstrument_98.insert(UnderlyingCashType_98.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_98;
      UnderlyingContractMultiplier_98.setString("8046935");
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplier_98);
      UnderlyingInstrument_98.insert(UnderlyingContractMultiplier_98.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_98(2145403714);
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplierUnit_98);
      UnderlyingInstrument_98.insert(UnderlyingContractMultiplierUnit_98.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_98("COUNTRY_1153367004");
      noUnderlyings_2_1_1.set(UnderlyingCountryOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingCountryOfIssue_98.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_98("LOCALMKTDATE_52944092");
      noUnderlyings_2_1_1.set(UnderlyingCouponPaymentDate_98);
      UnderlyingInstrument_98.insert(UnderlyingCouponPaymentDate_98.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_98;
      UnderlyingCouponRate_98.setString("96.250000");
      noUnderlyings_2_1_1.set(UnderlyingCouponRate_98);
      UnderlyingInstrument_98.insert(UnderlyingCouponRate_98.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_98("STRING_802441004");
      noUnderlyings_2_1_1.set(UnderlyingCreditRating_98);
      UnderlyingInstrument_98.insert(UnderlyingCreditRating_98.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_98("EUR");
      noUnderlyings_2_1_1.set(UnderlyingCurrency_98);
      UnderlyingInstrument_98.insert(UnderlyingCurrency_98.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_98;
      UnderlyingCurrentValue_98.setString("20840788");
      noUnderlyings_2_1_1.set(UnderlyingCurrentValue_98);
      UnderlyingInstrument_98.insert(UnderlyingCurrentValue_98.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_98;
      UnderlyingDetachmentPoint_98.setString("24.520000");
      noUnderlyings_2_1_1.set(UnderlyingDetachmentPoint_98);
      UnderlyingInstrument_98.insert(UnderlyingDetachmentPoint_98.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_98;
      UnderlyingDirtyPrice_98.setString("8234522");
      noUnderlyings_2_1_1.set(UnderlyingDirtyPrice_98);
      UnderlyingInstrument_98.insert(UnderlyingDirtyPrice_98.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_98;
      UnderlyingEndPrice_98.setString("14248859");
      noUnderlyings_2_1_1.set(UnderlyingEndPrice_98);
      UnderlyingInstrument_98.insert(UnderlyingEndPrice_98.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_98;
      UnderlyingEndValue_98.setString("20295802");
      noUnderlyings_2_1_1.set(UnderlyingEndValue_98);
      UnderlyingInstrument_98.insert(UnderlyingEndValue_98.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_98(172949172);
      noUnderlyings_2_1_1.set(UnderlyingExerciseStyle_98);
      UnderlyingInstrument_98.insert(UnderlyingExerciseStyle_98.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_98;
      UnderlyingFXRate_98.setString("15602700");
      noUnderlyings_2_1_1.set(UnderlyingFXRate_98);
      UnderlyingInstrument_98.insert(UnderlyingFXRate_98.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_98('D');
      noUnderlyings_2_1_1.set(UnderlyingFXRateCalc_98);
      UnderlyingInstrument_98.insert(UnderlyingFXRateCalc_98.getString());
      FIX::UnderlyingFactor UnderlyingFactor_98;
      UnderlyingFactor_98.setString("5487983");
      noUnderlyings_2_1_1.set(UnderlyingFactor_98);
      UnderlyingInstrument_98.insert(UnderlyingFactor_98.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_98(1774659077);
      noUnderlyings_2_1_1.set(UnderlyingFlowScheduleType_98);
      UnderlyingInstrument_98.insert(UnderlyingFlowScheduleType_98.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_98("STRING_1012254775");
      noUnderlyings_2_1_1.set(UnderlyingInstrRegistry_98);
      UnderlyingInstrument_98.insert(UnderlyingInstrRegistry_98.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_98("LOCALMKTDATE_1831874488");
      noUnderlyings_2_1_1.set(UnderlyingIssueDate_98);
      UnderlyingInstrument_98.insert(UnderlyingIssueDate_98.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_98("STRING_1772204831");
      noUnderlyings_2_1_1.set(UnderlyingIssuer_98);
      UnderlyingInstrument_98.insert(UnderlyingIssuer_98.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_98("STRING_551249381");
      noUnderlyings_2_1_1.set(UnderlyingLocaleOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingLocaleOfIssue_98.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_98("LOCALMKTDATE_537451759");
      noUnderlyings_2_1_1.set(UnderlyingMaturityDate_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityDate_98.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_98("MONTHYEAR_1829013686");
      noUnderlyings_2_1_1.set(UnderlyingMaturityMonthYear_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityMonthYear_98.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_98("TZTIMEONLY_1721363367");
      noUnderlyings_2_1_1.set(UnderlyingMaturityTime_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityTime_98.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_98;
      UnderlyingNotionalPercentageOutstanding_98.setString("55.250000");
      noUnderlyings_2_1_1.set(UnderlyingNotionalPercentageOutstanding_98);
      UnderlyingInstrument_98.insert(UnderlyingNotionalPercentageOutstanding_98.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_98('1');
      noUnderlyings_2_1_1.set(UnderlyingOptAttribute_98);
      UnderlyingInstrument_98.insert(UnderlyingOptAttribute_98.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_98;
      UnderlyingOriginalNotionalPercentageOutstanding_98.setString("49.600000");
      noUnderlyings_2_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_98);
      UnderlyingInstrument_98.insert(UnderlyingOriginalNotionalPercentageOutstanding_98.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_98("STRING_185103665");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasure_98);
      UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasure_98.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_98;
      UnderlyingPriceUnitOfMeasureQty_98.setString("18148100");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasureQty_98);
      UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasureQty_98.getString());
      FIX::UnderlyingProduct UnderlyingProduct_98(566683796);
      noUnderlyings_2_1_1.set(UnderlyingProduct_98);
      UnderlyingInstrument_98.insert(UnderlyingProduct_98.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_98(989797195);
      noUnderlyings_2_1_1.set(UnderlyingPutOrCall_98);
      UnderlyingInstrument_98.insert(UnderlyingPutOrCall_98.getString());
      FIX::UnderlyingPx UnderlyingPx_98;
      UnderlyingPx_98.setString("18127301");
      noUnderlyings_2_1_1.set(UnderlyingPx_98);
      UnderlyingInstrument_98.insert(UnderlyingPx_98.getString());
      FIX::UnderlyingQty UnderlyingQty_98;
      UnderlyingQty_98.setString("17200508");
      noUnderlyings_2_1_1.set(UnderlyingQty_98);
      UnderlyingInstrument_98.insert(UnderlyingQty_98.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_98("LOCALMKTDATE_1042741288");
      noUnderlyings_2_1_1.set(UnderlyingRedemptionDate_98);
      UnderlyingInstrument_98.insert(UnderlyingRedemptionDate_98.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_98("STRING_233906129");
      noUnderlyings_2_1_1.set(UnderlyingRepoCollateralSecurityType_98);
      UnderlyingInstrument_98.insert(UnderlyingRepoCollateralSecurityType_98.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_98;
      UnderlyingRepurchaseRate_98.setString("81.560000");
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseRate_98);
      UnderlyingInstrument_98.insert(UnderlyingRepurchaseRate_98.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_98(815829637);
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseTerm_98);
      UnderlyingInstrument_98.insert(UnderlyingRepurchaseTerm_98.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_98("STRING_1735846573");
      noUnderlyings_2_1_1.set(UnderlyingRestructuringType_98);
      UnderlyingInstrument_98.insert(UnderlyingRestructuringType_98.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_98("STRING_311603398");
      noUnderlyings_2_1_1.set(UnderlyingSecurityDesc_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityDesc_98.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_98("EXCHANGE_1930472089");
      noUnderlyings_2_1_1.set(UnderlyingSecurityExchange_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityExchange_98.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_98("STRING_411815198");
      noUnderlyings_2_1_1.set(UnderlyingSecurityID_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityID_98.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_98("STRING_1736489375");
      noUnderlyings_2_1_1.set(UnderlyingSecurityIDSource_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityIDSource_98.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_98("STRING_1812568708");
      noUnderlyings_2_1_1.set(UnderlyingSecuritySubType_98);
      UnderlyingInstrument_98.insert(UnderlyingSecuritySubType_98.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_98("STRING_584764371");
      noUnderlyings_2_1_1.set(UnderlyingSecurityType_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityType_98.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_98("STRING_1149275799");
      noUnderlyings_2_1_1.set(UnderlyingSeniority_98);
      UnderlyingInstrument_98.insert(UnderlyingSeniority_98.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_98("STRING_772387567");
      noUnderlyings_2_1_1.set(UnderlyingSettlMethod_98);
      UnderlyingInstrument_98.insert(UnderlyingSettlMethod_98.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_98(2);
      noUnderlyings_2_1_1.set(UnderlyingSettlementType_98);
      UnderlyingInstrument_98.insert(UnderlyingSettlementType_98.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_98;
      UnderlyingStartValue_98.setString("7764512");
      noUnderlyings_2_1_1.set(UnderlyingStartValue_98);
      UnderlyingInstrument_98.insert(UnderlyingStartValue_98.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_98("STRING_1784642342");
      noUnderlyings_2_1_1.set(UnderlyingStateOrProvinceOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingStateOrProvinceOfIssue_98.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_98("CHF");
      noUnderlyings_2_1_1.set(UnderlyingStrikeCurrency_98);
      UnderlyingInstrument_98.insert(UnderlyingStrikeCurrency_98.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_98;
      UnderlyingStrikePrice_98.setString("1884080");
      noUnderlyings_2_1_1.set(UnderlyingStrikePrice_98);
      UnderlyingInstrument_98.insert(UnderlyingStrikePrice_98.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_98("STRING_1355405341");
      noUnderlyings_2_1_1.set(UnderlyingSymbol_98);
      UnderlyingInstrument_98.insert(UnderlyingSymbol_98.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_98("STRING_82702449");
      noUnderlyings_2_1_1.set(UnderlyingSymbolSfx_98);
      UnderlyingInstrument_98.insert(UnderlyingSymbolSfx_98.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_98("STRING_1909771443");
      noUnderlyings_2_1_1.set(UnderlyingTimeUnit_98);
      UnderlyingInstrument_98.insert(UnderlyingTimeUnit_98.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_98("STRING_1053527218");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasure_98);
      UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasure_98.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_98;
      UnderlyingUnitOfMeasureQty_98.setString("14890539");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasureQty_98);
      UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasureQty_98.getString());
      all_values.push_back(UnderlyingInstrument_98);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_198("STRING_1238630883");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltID_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltID_198.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_198("STRING_1156380353");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltIDSource_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltIDSource_198.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_199("STRING_907006551");
        noUnderlyingSecurityAltID_2_1_2_1.set(UnderlyingSecurityAltID_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltID_199.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_199("STRING_80944431");
        noUnderlyingSecurityAltID_2_1_2_1.set(UnderlyingSecurityAltIDSource_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltIDSource_199.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_183;
        FIX::UnderlyingStipType UnderlyingStipType_183("STRING_479573703");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipType_183);
        UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipType_183.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_183("STRING_1123685719");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipValue_183);
        UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipValue_183.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_183);

        noUnderlyings_2_1_1.addGroup(noUnderlyingStips_2_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_203;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_203("STRING_854581859");
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyID_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyID_203.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_203('1');
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyIDSource_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyIDSource_203.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_203(643895912);
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyRole_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyRole_203.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_203);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_389("STRING_1722503797");
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubID_389);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubID_389.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_389(1055711110);
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_389);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubIDType_389.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);

          noUndlyInstrumentParties_2_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_1_0_3_0);
        }
        noUnderlyings_2_1_1.addGroup(noUndlyInstrumentParties_2_1_2_0);
      }
      noQuoteEntries_0_2.addGroup(noUnderlyings_2_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_2_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_99;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_99("DATA_755190984");
      noUnderlyings_2_1_2.set(EncodedUnderlyingIssuer_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingIssuer_99.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_99(1387588857);
      noUnderlyings_2_1_2.set(EncodedUnderlyingIssuerLen_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingIssuerLen_99.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_99("DATA_1640475481");
      noUnderlyings_2_1_2.set(EncodedUnderlyingSecurityDesc_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDesc_99.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_99(1904466783);
      noUnderlyings_2_1_2.set(EncodedUnderlyingSecurityDescLen_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDescLen_99.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_99;
      UnderlyingAdjustedQuantity_99.setString("124927");
      noUnderlyings_2_1_2.set(UnderlyingAdjustedQuantity_99);
      UnderlyingInstrument_99.insert(UnderlyingAdjustedQuantity_99.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_99;
      UnderlyingAllocationPercent_99.setString("45.740000");
      noUnderlyings_2_1_2.set(UnderlyingAllocationPercent_99);
      UnderlyingInstrument_99.insert(UnderlyingAllocationPercent_99.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_99;
      UnderlyingAttachmentPoint_99.setString("43.630000");
      noUnderlyings_2_1_2.set(UnderlyingAttachmentPoint_99);
      UnderlyingInstrument_99.insert(UnderlyingAttachmentPoint_99.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_99("STRING_1797135119");
      noUnderlyings_2_1_2.set(UnderlyingCFICode_99);
      UnderlyingInstrument_99.insert(UnderlyingCFICode_99.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_99("STRING_1444508156");
      noUnderlyings_2_1_2.set(UnderlyingCPProgram_99);
      UnderlyingInstrument_99.insert(UnderlyingCPProgram_99.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_99("STRING_934606774");
      noUnderlyings_2_1_2.set(UnderlyingCPRegType_99);
      UnderlyingInstrument_99.insert(UnderlyingCPRegType_99.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_99;
      UnderlyingCapValue_99.setString("19855431");
      noUnderlyings_2_1_2.set(UnderlyingCapValue_99);
      UnderlyingInstrument_99.insert(UnderlyingCapValue_99.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_99;
      UnderlyingCashAmount_99.setString("6524298");
      noUnderlyings_2_1_2.set(UnderlyingCashAmount_99);
      UnderlyingInstrument_99.insert(UnderlyingCashAmount_99.getString());
      FIX::UnderlyingCashType UnderlyingCashType_99("STRING_DIFF");
      noUnderlyings_2_1_2.set(UnderlyingCashType_99);
      UnderlyingInstrument_99.insert(UnderlyingCashType_99.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_99;
      UnderlyingContractMultiplier_99.setString("17478309");
      noUnderlyings_2_1_2.set(UnderlyingContractMultiplier_99);
      UnderlyingInstrument_99.insert(UnderlyingContractMultiplier_99.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_99(1705957067);
      noUnderlyings_2_1_2.set(UnderlyingContractMultiplierUnit_99);
      UnderlyingInstrument_99.insert(UnderlyingContractMultiplierUnit_99.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_99("COUNTRY_358879490");
      noUnderlyings_2_1_2.set(UnderlyingCountryOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingCountryOfIssue_99.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_99("LOCALMKTDATE_2088153745");
      noUnderlyings_2_1_2.set(UnderlyingCouponPaymentDate_99);
      UnderlyingInstrument_99.insert(UnderlyingCouponPaymentDate_99.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_99;
      UnderlyingCouponRate_99.setString("43.020000");
      noUnderlyings_2_1_2.set(UnderlyingCouponRate_99);
      UnderlyingInstrument_99.insert(UnderlyingCouponRate_99.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_99("STRING_1515259843");
      noUnderlyings_2_1_2.set(UnderlyingCreditRating_99);
      UnderlyingInstrument_99.insert(UnderlyingCreditRating_99.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_99("CHF");
      noUnderlyings_2_1_2.set(UnderlyingCurrency_99);
      UnderlyingInstrument_99.insert(UnderlyingCurrency_99.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_99;
      UnderlyingCurrentValue_99.setString("1894030");
      noUnderlyings_2_1_2.set(UnderlyingCurrentValue_99);
      UnderlyingInstrument_99.insert(UnderlyingCurrentValue_99.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_99;
      UnderlyingDetachmentPoint_99.setString("3.510000");
      noUnderlyings_2_1_2.set(UnderlyingDetachmentPoint_99);
      UnderlyingInstrument_99.insert(UnderlyingDetachmentPoint_99.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_99;
      UnderlyingDirtyPrice_99.setString("20017344");
      noUnderlyings_2_1_2.set(UnderlyingDirtyPrice_99);
      UnderlyingInstrument_99.insert(UnderlyingDirtyPrice_99.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_99;
      UnderlyingEndPrice_99.setString("12449360");
      noUnderlyings_2_1_2.set(UnderlyingEndPrice_99);
      UnderlyingInstrument_99.insert(UnderlyingEndPrice_99.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_99;
      UnderlyingEndValue_99.setString("343485");
      noUnderlyings_2_1_2.set(UnderlyingEndValue_99);
      UnderlyingInstrument_99.insert(UnderlyingEndValue_99.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_99(1793766160);
      noUnderlyings_2_1_2.set(UnderlyingExerciseStyle_99);
      UnderlyingInstrument_99.insert(UnderlyingExerciseStyle_99.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_99;
      UnderlyingFXRate_99.setString("18888319");
      noUnderlyings_2_1_2.set(UnderlyingFXRate_99);
      UnderlyingInstrument_99.insert(UnderlyingFXRate_99.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_99('M');
      noUnderlyings_2_1_2.set(UnderlyingFXRateCalc_99);
      UnderlyingInstrument_99.insert(UnderlyingFXRateCalc_99.getString());
      FIX::UnderlyingFactor UnderlyingFactor_99;
      UnderlyingFactor_99.setString("13687863");
      noUnderlyings_2_1_2.set(UnderlyingFactor_99);
      UnderlyingInstrument_99.insert(UnderlyingFactor_99.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_99(797059414);
      noUnderlyings_2_1_2.set(UnderlyingFlowScheduleType_99);
      UnderlyingInstrument_99.insert(UnderlyingFlowScheduleType_99.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_99("STRING_1955724803");
      noUnderlyings_2_1_2.set(UnderlyingInstrRegistry_99);
      UnderlyingInstrument_99.insert(UnderlyingInstrRegistry_99.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_99("LOCALMKTDATE_608891519");
      noUnderlyings_2_1_2.set(UnderlyingIssueDate_99);
      UnderlyingInstrument_99.insert(UnderlyingIssueDate_99.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_99("STRING_290051248");
      noUnderlyings_2_1_2.set(UnderlyingIssuer_99);
      UnderlyingInstrument_99.insert(UnderlyingIssuer_99.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_99("STRING_1712707938");
      noUnderlyings_2_1_2.set(UnderlyingLocaleOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingLocaleOfIssue_99.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_99("LOCALMKTDATE_621384295");
      noUnderlyings_2_1_2.set(UnderlyingMaturityDate_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityDate_99.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_99("MONTHYEAR_916605822");
      noUnderlyings_2_1_2.set(UnderlyingMaturityMonthYear_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityMonthYear_99.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_99("TZTIMEONLY_98658653");
      noUnderlyings_2_1_2.set(UnderlyingMaturityTime_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityTime_99.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_99;
      UnderlyingNotionalPercentageOutstanding_99.setString("57.660000");
      noUnderlyings_2_1_2.set(UnderlyingNotionalPercentageOutstanding_99);
      UnderlyingInstrument_99.insert(UnderlyingNotionalPercentageOutstanding_99.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_99('2');
      noUnderlyings_2_1_2.set(UnderlyingOptAttribute_99);
      UnderlyingInstrument_99.insert(UnderlyingOptAttribute_99.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_99;
      UnderlyingOriginalNotionalPercentageOutstanding_99.setString("54.270000");
      noUnderlyings_2_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_99);
      UnderlyingInstrument_99.insert(UnderlyingOriginalNotionalPercentageOutstanding_99.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_99("STRING_109095313");
      noUnderlyings_2_1_2.set(UnderlyingPriceUnitOfMeasure_99);
      UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasure_99.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_99;
      UnderlyingPriceUnitOfMeasureQty_99.setString("8660601");
      noUnderlyings_2_1_2.set(UnderlyingPriceUnitOfMeasureQty_99);
      UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasureQty_99.getString());
      FIX::UnderlyingProduct UnderlyingProduct_99(2050574650);
      noUnderlyings_2_1_2.set(UnderlyingProduct_99);
      UnderlyingInstrument_99.insert(UnderlyingProduct_99.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_99(1856926303);
      noUnderlyings_2_1_2.set(UnderlyingPutOrCall_99);
      UnderlyingInstrument_99.insert(UnderlyingPutOrCall_99.getString());
      FIX::UnderlyingPx UnderlyingPx_99;
      UnderlyingPx_99.setString("4245335");
      noUnderlyings_2_1_2.set(UnderlyingPx_99);
      UnderlyingInstrument_99.insert(UnderlyingPx_99.getString());
      FIX::UnderlyingQty UnderlyingQty_99;
      UnderlyingQty_99.setString("2619704");
      noUnderlyings_2_1_2.set(UnderlyingQty_99);
      UnderlyingInstrument_99.insert(UnderlyingQty_99.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_99("LOCALMKTDATE_1797596400");
      noUnderlyings_2_1_2.set(UnderlyingRedemptionDate_99);
      UnderlyingInstrument_99.insert(UnderlyingRedemptionDate_99.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_99("STRING_1221637901");
      noUnderlyings_2_1_2.set(UnderlyingRepoCollateralSecurityType_99);
      UnderlyingInstrument_99.insert(UnderlyingRepoCollateralSecurityType_99.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_99;
      UnderlyingRepurchaseRate_99.setString("3.360000");
      noUnderlyings_2_1_2.set(UnderlyingRepurchaseRate_99);
      UnderlyingInstrument_99.insert(UnderlyingRepurchaseRate_99.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_99(497789400);
      noUnderlyings_2_1_2.set(UnderlyingRepurchaseTerm_99);
      UnderlyingInstrument_99.insert(UnderlyingRepurchaseTerm_99.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_99("STRING_2099686634");
      noUnderlyings_2_1_2.set(UnderlyingRestructuringType_99);
      UnderlyingInstrument_99.insert(UnderlyingRestructuringType_99.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_99("STRING_1966633389");
      noUnderlyings_2_1_2.set(UnderlyingSecurityDesc_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityDesc_99.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_99("EXCHANGE_1825039751");
      noUnderlyings_2_1_2.set(UnderlyingSecurityExchange_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityExchange_99.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_99("STRING_1953937439");
      noUnderlyings_2_1_2.set(UnderlyingSecurityID_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityID_99.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_99("STRING_1064085781");
      noUnderlyings_2_1_2.set(UnderlyingSecurityIDSource_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityIDSource_99.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_99("STRING_1859388313");
      noUnderlyings_2_1_2.set(UnderlyingSecuritySubType_99);
      UnderlyingInstrument_99.insert(UnderlyingSecuritySubType_99.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_99("STRING_1600219951");
      noUnderlyings_2_1_2.set(UnderlyingSecurityType_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityType_99.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_99("STRING_805434085");
      noUnderlyings_2_1_2.set(UnderlyingSeniority_99);
      UnderlyingInstrument_99.insert(UnderlyingSeniority_99.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_99("STRING_912438484");
      noUnderlyings_2_1_2.set(UnderlyingSettlMethod_99);
      UnderlyingInstrument_99.insert(UnderlyingSettlMethod_99.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_99(2);
      noUnderlyings_2_1_2.set(UnderlyingSettlementType_99);
      UnderlyingInstrument_99.insert(UnderlyingSettlementType_99.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_99;
      UnderlyingStartValue_99.setString("16024935");
      noUnderlyings_2_1_2.set(UnderlyingStartValue_99);
      UnderlyingInstrument_99.insert(UnderlyingStartValue_99.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_99("STRING_720679639");
      noUnderlyings_2_1_2.set(UnderlyingStateOrProvinceOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingStateOrProvinceOfIssue_99.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_99("JPY");
      noUnderlyings_2_1_2.set(UnderlyingStrikeCurrency_99);
      UnderlyingInstrument_99.insert(UnderlyingStrikeCurrency_99.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_99;
      UnderlyingStrikePrice_99.setString("2859039");
      noUnderlyings_2_1_2.set(UnderlyingStrikePrice_99);
      UnderlyingInstrument_99.insert(UnderlyingStrikePrice_99.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_99("STRING_2051798427");
      noUnderlyings_2_1_2.set(UnderlyingSymbol_99);
      UnderlyingInstrument_99.insert(UnderlyingSymbol_99.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_99("STRING_661666922");
      noUnderlyings_2_1_2.set(UnderlyingSymbolSfx_99);
      UnderlyingInstrument_99.insert(UnderlyingSymbolSfx_99.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_99("STRING_384562582");
      noUnderlyings_2_1_2.set(UnderlyingTimeUnit_99);
      UnderlyingInstrument_99.insert(UnderlyingTimeUnit_99.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_99("STRING_175350546");
      noUnderlyings_2_1_2.set(UnderlyingUnitOfMeasure_99);
      UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasure_99.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_99;
      UnderlyingUnitOfMeasureQty_99.setString("8752972");
      noUnderlyings_2_1_2.set(UnderlyingUnitOfMeasureQty_99);
      UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasureQty_99.getString());
      all_values.push_back(UnderlyingInstrument_99);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_200("STRING_284445859");
        noUnderlyingSecurityAltID_2_2_2_0.set(UnderlyingSecurityAltID_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltID_200.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_200("STRING_1741357432");
        noUnderlyingSecurityAltID_2_2_2_0.set(UnderlyingSecurityAltIDSource_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltIDSource_200.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);

        noUnderlyings_2_1_2.addGroup(noUnderlyingSecurityAltID_2_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_201("STRING_1320919012");
        noUnderlyingSecurityAltID_2_2_2_1.set(UnderlyingSecurityAltID_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltID_201.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_201("STRING_2141372163");
        noUnderlyingSecurityAltID_2_2_2_1.set(UnderlyingSecurityAltIDSource_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltIDSource_201.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);

        noUnderlyings_2_1_2.addGroup(noUnderlyingSecurityAltID_2_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_184;
        FIX::UnderlyingStipType UnderlyingStipType_184("STRING_1582889505");
        noUnderlyingStips_2_2_2_0.set(UnderlyingStipType_184);
        UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipType_184.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_184("STRING_1791484915");
        noUnderlyingStips_2_2_2_0.set(UnderlyingStipValue_184);
        UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipValue_184.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_184);

        noUnderlyings_2_1_2.addGroup(noUnderlyingStips_2_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_185;
        FIX::UnderlyingStipType UnderlyingStipType_185("STRING_1240045284");
        noUnderlyingStips_2_2_2_1.set(UnderlyingStipType_185);
        UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipType_185.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_185("STRING_1212636193");
        noUnderlyingStips_2_2_2_1.set(UnderlyingStipValue_185);
        UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipValue_185.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_185);

        noUnderlyings_2_1_2.addGroup(noUnderlyingStips_2_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_204;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_204("STRING_1192248270");
        noUndlyInstrumentParties_2_2_2_0.set(UnderlyingInstrumentPartyID_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyID_204.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_204('1');
        noUndlyInstrumentParties_2_2_2_0.set(UnderlyingInstrumentPartyIDSource_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyIDSource_204.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_204(1966830419);
        noUndlyInstrumentParties_2_2_2_0.set(UnderlyingInstrumentPartyRole_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyRole_204.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_204);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_390("STRING_2095871716");
          noUndlyInstrumentPartySubIDs_2_2_0_3_0.set(UnderlyingInstrumentPartySubID_390);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubID_390.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_390(1678735085);
          noUndlyInstrumentPartySubIDs_2_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_390);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubIDType_390.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);

          noUndlyInstrumentParties_2_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_2_0_3_0);
        }
        noUnderlyings_2_1_2.addGroup(noUndlyInstrumentParties_2_2_2_0);
      }
      noQuoteEntries_0_2.addGroup(noUnderlyings_2_1_2);
    }
    msg.addGroup(noQuoteEntries_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_12;
    FIX::TargetPartyID TargetPartyID_12("STRING_753822154");
    noTargetPartyIDs_0_0.set(TargetPartyID_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyID_12.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_12('4');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyIDSource_12.getString());
    FIX::TargetPartyRole TargetPartyRole_12(1272960978);
    noTargetPartyIDs_0_0.set(TargetPartyRole_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyRole_12.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_12);

    msg.addGroup(noTargetPartyIDs_0_0);
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
