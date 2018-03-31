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
  multiset<string> all_compo_names;
  multiset<string> QuoteCancel_0;
  FIX::Account Account_31("STRING_1416673581");
  msg.set(Account_31);
  QuoteCancel_0.insert(Account_31.getString());
  FIX::AccountType AccountType_26(1);
  msg.set(AccountType_26);
  QuoteCancel_0.insert(AccountType_26.getString());
  FIX::AcctIDSource AcctIDSource_24(5);
  msg.set(AcctIDSource_24);
  QuoteCancel_0.insert(AcctIDSource_24.getString());
  FIX::QuoteCancelType QuoteCancelType_1(2);
  msg.set(QuoteCancelType_1);
  QuoteCancel_0.insert(QuoteCancelType_1.getString());
  FIX::QuoteID QuoteID_11("STRING_698402814");
  msg.set(QuoteID_11);
  QuoteCancel_0.insert(QuoteID_11.getString());
  FIX::QuoteMsgID QuoteMsgID_1("STRING_899349571");
  msg.set(QuoteMsgID_1);
  QuoteCancel_0.insert(QuoteMsgID_1.getString());
  FIX::QuoteReqID QuoteReqID_3("STRING_357900426");
  msg.set(QuoteReqID_3);
  QuoteCancel_0.insert(QuoteReqID_3.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_3(3);
  msg.set(QuoteResponseLevel_3);
  QuoteCancel_0.insert(QuoteResponseLevel_3.getString());
  FIX::QuoteType QuoteType_6(1);
  msg.set(QuoteType_6);
  QuoteCancel_0.insert(QuoteType_6.getString());
  FIX::TradingSessionID TradingSessionID_73("STRING_4");
  msg.set(TradingSessionID_73);
  QuoteCancel_0.insert(TradingSessionID_73.getString());
  FIX::TradingSessionSubID TradingSessionSubID_73("STRING_6");
  msg.set(TradingSessionSubID_73);
  QuoteCancel_0.insert(TradingSessionSubID_73.getString());
  all_values.push_back(QuoteCancel_0);

  all_compo_names.insert("QuoteCancel");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_113;
    FIX::PartyID PartyID_113("STRING_804336917");
    noPartyIDs_0_0.set(PartyID_113);
    Parties_NoPartyIDs_113.insert(PartyID_113.getString());
    FIX::PartyIDSource PartyIDSource_113('F');
    noPartyIDs_0_0.set(PartyIDSource_113);
    Parties_NoPartyIDs_113.insert(PartyIDSource_113.getString());
    FIX::PartyRole PartyRole_113(15);
    noPartyIDs_0_0.set(PartyRole_113);
    Parties_NoPartyIDs_113.insert(PartyRole_113.getString());
    all_values.push_back(Parties_NoPartyIDs_113);
    all_compo_names.insert("..NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_234;
      FIX::PartySubID PartySubID_234("STRING_1276368426");
      noPartySubIDs_0_1_0.set(PartySubID_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubID_234.getString());
      FIX::PartySubIDType PartySubIDType_234(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubIDType_234.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_234);
      all_compo_names.insert("..NoPartyIDs..NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotCxlEntriesGrp
  // Group QuotCxlEntriesGrp.NoQuoteEntries
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_0;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_17;
    FIX::AgreementCurrency AgreementCurrency_17("EUR");
    noQuoteEntries_0_0.set(AgreementCurrency_17);
    FinancingDetails_17.insert(AgreementCurrency_17.getString());
    FIX::AgreementDate AgreementDate_17("LOCALMKTDATE_1347562575");
    noQuoteEntries_0_0.set(AgreementDate_17);
    FinancingDetails_17.insert(AgreementDate_17.getString());
    FIX::AgreementDesc AgreementDesc_17("STRING_1544971881");
    noQuoteEntries_0_0.set(AgreementDesc_17);
    FinancingDetails_17.insert(AgreementDesc_17.getString());
    FIX::AgreementID AgreementID_17("STRING_1059123389");
    noQuoteEntries_0_0.set(AgreementID_17);
    FinancingDetails_17.insert(AgreementID_17.getString());
    FIX::DeliveryType DeliveryType_17(1);
    noQuoteEntries_0_0.set(DeliveryType_17);
    FinancingDetails_17.insert(DeliveryType_17.getString());
    FIX::EndDate EndDate_17("LOCALMKTDATE_95029160");
    noQuoteEntries_0_0.set(EndDate_17);
    FinancingDetails_17.insert(EndDate_17.getString());
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("4.720000");
    noQuoteEntries_0_0.set(MarginRatio_17);
    FinancingDetails_17.insert(MarginRatio_17.getString());
    FIX::StartDate StartDate_17("LOCALMKTDATE_1426883108");
    noQuoteEntries_0_0.set(StartDate_17);
    FinancingDetails_17.insert(StartDate_17.getString());
    FIX::TerminationType TerminationType_17(3);
    noQuoteEntries_0_0.set(TerminationType_17);
    FinancingDetails_17.insert(TerminationType_17.getString());
    all_values.push_back(FinancingDetails_17);
    all_compo_names.insert("..NoQuoteEntries.");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_97;
      FIX::EncodedLegIssuer EncodedLegIssuer_97("DATA_273467268");
      noLegs_0_1_0.set(EncodedLegIssuer_97);
      InstrumentLeg_97.insert(EncodedLegIssuer_97.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_97(2019779455);
      noLegs_0_1_0.set(EncodedLegIssuerLen_97);
      InstrumentLeg_97.insert(EncodedLegIssuerLen_97.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_97("DATA_1212452859");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_97);
      InstrumentLeg_97.insert(EncodedLegSecurityDesc_97.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_97(655756973);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_97);
      InstrumentLeg_97.insert(EncodedLegSecurityDescLen_97.getString());
      FIX::LegCFICode LegCFICode_97("STRING_1212374880");
      noLegs_0_1_0.set(LegCFICode_97);
      InstrumentLeg_97.insert(LegCFICode_97.getString());
      FIX::LegContractMultiplier LegContractMultiplier_97;
      LegContractMultiplier_97.setString("19108556");
      noLegs_0_1_0.set(LegContractMultiplier_97);
      InstrumentLeg_97.insert(LegContractMultiplier_97.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_97(1555106544);
      noLegs_0_1_0.set(LegContractMultiplierUnit_97);
      InstrumentLeg_97.insert(LegContractMultiplierUnit_97.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_97("MONTHYEAR_1570275306");
      noLegs_0_1_0.set(LegContractSettlMonth_97);
      InstrumentLeg_97.insert(LegContractSettlMonth_97.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_97("COUNTRY_1965599405");
      noLegs_0_1_0.set(LegCountryOfIssue_97);
      InstrumentLeg_97.insert(LegCountryOfIssue_97.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_97("LOCALMKTDATE_513381949");
      noLegs_0_1_0.set(LegCouponPaymentDate_97);
      InstrumentLeg_97.insert(LegCouponPaymentDate_97.getString());
      FIX::LegCouponRate LegCouponRate_97;
      LegCouponRate_97.setString("0.010000");
      noLegs_0_1_0.set(LegCouponRate_97);
      InstrumentLeg_97.insert(LegCouponRate_97.getString());
      FIX::LegCreditRating LegCreditRating_97("STRING_332134687");
      noLegs_0_1_0.set(LegCreditRating_97);
      InstrumentLeg_97.insert(LegCreditRating_97.getString());
      FIX::LegCurrency LegCurrency_97("EUR");
      noLegs_0_1_0.set(LegCurrency_97);
      InstrumentLeg_97.insert(LegCurrency_97.getString());
      FIX::LegDatedDate LegDatedDate_97("LOCALMKTDATE_194401436");
      noLegs_0_1_0.set(LegDatedDate_97);
      InstrumentLeg_97.insert(LegDatedDate_97.getString());
      FIX::LegExerciseStyle LegExerciseStyle_97(1734613450);
      noLegs_0_1_0.set(LegExerciseStyle_97);
      InstrumentLeg_97.insert(LegExerciseStyle_97.getString());
      FIX::LegFactor LegFactor_97;
      LegFactor_97.setString("9179392");
      noLegs_0_1_0.set(LegFactor_97);
      InstrumentLeg_97.insert(LegFactor_97.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_97(1470769863);
      noLegs_0_1_0.set(LegFlowScheduleType_97);
      InstrumentLeg_97.insert(LegFlowScheduleType_97.getString());
      FIX::LegInstrRegistry LegInstrRegistry_97("STRING_336686709");
      noLegs_0_1_0.set(LegInstrRegistry_97);
      InstrumentLeg_97.insert(LegInstrRegistry_97.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_97("LOCALMKTDATE_2094926313");
      noLegs_0_1_0.set(LegInterestAccrualDate_97);
      InstrumentLeg_97.insert(LegInterestAccrualDate_97.getString());
      FIX::LegIssueDate LegIssueDate_97("LOCALMKTDATE_114361633");
      noLegs_0_1_0.set(LegIssueDate_97);
      InstrumentLeg_97.insert(LegIssueDate_97.getString());
      FIX::LegIssuer LegIssuer_97("STRING_1295164312");
      noLegs_0_1_0.set(LegIssuer_97);
      InstrumentLeg_97.insert(LegIssuer_97.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_97("STRING_1295005241");
      noLegs_0_1_0.set(LegLocaleOfIssue_97);
      InstrumentLeg_97.insert(LegLocaleOfIssue_97.getString());
      FIX::LegMaturityDate LegMaturityDate_97("LOCALMKTDATE_1659333514");
      noLegs_0_1_0.set(LegMaturityDate_97);
      InstrumentLeg_97.insert(LegMaturityDate_97.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_97("MONTHYEAR_206804054");
      noLegs_0_1_0.set(LegMaturityMonthYear_97);
      InstrumentLeg_97.insert(LegMaturityMonthYear_97.getString());
      FIX::LegMaturityTime LegMaturityTime_97("TZTIMEONLY_209207650");
      noLegs_0_1_0.set(LegMaturityTime_97);
      InstrumentLeg_97.insert(LegMaturityTime_97.getString());
      FIX::LegOptAttribute LegOptAttribute_97('1');
      noLegs_0_1_0.set(LegOptAttribute_97);
      InstrumentLeg_97.insert(LegOptAttribute_97.getString());
      FIX::LegOptionRatio LegOptionRatio_97;
      LegOptionRatio_97.setString("4540745");
      noLegs_0_1_0.set(LegOptionRatio_97);
      InstrumentLeg_97.insert(LegOptionRatio_97.getString());
      FIX::LegPool LegPool_97("STRING_1636090759");
      noLegs_0_1_0.set(LegPool_97);
      InstrumentLeg_97.insert(LegPool_97.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_97("STRING_209984900");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_97);
      InstrumentLeg_97.insert(LegPriceUnitOfMeasure_97.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
      LegPriceUnitOfMeasureQty_97.setString("5648317");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_97);
      InstrumentLeg_97.insert(LegPriceUnitOfMeasureQty_97.getString());
      FIX::LegProduct LegProduct_97(1909558027);
      noLegs_0_1_0.set(LegProduct_97);
      InstrumentLeg_97.insert(LegProduct_97.getString());
      FIX::LegPutOrCall LegPutOrCall_97(82280708);
      noLegs_0_1_0.set(LegPutOrCall_97);
      InstrumentLeg_97.insert(LegPutOrCall_97.getString());
      FIX::LegRatioQty LegRatioQty_97;
      LegRatioQty_97.setString("17772846");
      noLegs_0_1_0.set(LegRatioQty_97);
      InstrumentLeg_97.insert(LegRatioQty_97.getString());
      FIX::LegRedemptionDate LegRedemptionDate_97("LOCALMKTDATE_417831352");
      noLegs_0_1_0.set(LegRedemptionDate_97);
      InstrumentLeg_97.insert(LegRedemptionDate_97.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_97("STRING_1294655588");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_97);
      InstrumentLeg_97.insert(LegRepoCollateralSecurityType_97.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_97;
      LegRepurchaseRate_97.setString("66.830000");
      noLegs_0_1_0.set(LegRepurchaseRate_97);
      InstrumentLeg_97.insert(LegRepurchaseRate_97.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_97(1972937897);
      noLegs_0_1_0.set(LegRepurchaseTerm_97);
      InstrumentLeg_97.insert(LegRepurchaseTerm_97.getString());
      FIX::LegSecurityDesc LegSecurityDesc_97("STRING_717447247");
      noLegs_0_1_0.set(LegSecurityDesc_97);
      InstrumentLeg_97.insert(LegSecurityDesc_97.getString());
      FIX::LegSecurityExchange LegSecurityExchange_97("EXCHANGE_1358772440");
      noLegs_0_1_0.set(LegSecurityExchange_97);
      InstrumentLeg_97.insert(LegSecurityExchange_97.getString());
      FIX::LegSecurityID LegSecurityID_97("STRING_338836198");
      noLegs_0_1_0.set(LegSecurityID_97);
      InstrumentLeg_97.insert(LegSecurityID_97.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_97("STRING_1927137248");
      noLegs_0_1_0.set(LegSecurityIDSource_97);
      InstrumentLeg_97.insert(LegSecurityIDSource_97.getString());
      FIX::LegSecuritySubType LegSecuritySubType_97("STRING_1690907128");
      noLegs_0_1_0.set(LegSecuritySubType_97);
      InstrumentLeg_97.insert(LegSecuritySubType_97.getString());
      FIX::LegSecurityType LegSecurityType_97("STRING_1314288882");
      noLegs_0_1_0.set(LegSecurityType_97);
      InstrumentLeg_97.insert(LegSecurityType_97.getString());
      FIX::LegSide LegSide_97('1');
      noLegs_0_1_0.set(LegSide_97);
      InstrumentLeg_97.insert(LegSide_97.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_97("STRING_1885308564");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_97);
      InstrumentLeg_97.insert(LegStateOrProvinceOfIssue_97.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_97("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_97);
      InstrumentLeg_97.insert(LegStrikeCurrency_97.getString());
      FIX::LegStrikePrice LegStrikePrice_97;
      LegStrikePrice_97.setString("12085947");
      noLegs_0_1_0.set(LegStrikePrice_97);
      InstrumentLeg_97.insert(LegStrikePrice_97.getString());
      FIX::LegSymbol LegSymbol_97("STRING_1238105394");
      noLegs_0_1_0.set(LegSymbol_97);
      InstrumentLeg_97.insert(LegSymbol_97.getString());
      FIX::LegSymbolSfx LegSymbolSfx_97("STRING_511578777");
      noLegs_0_1_0.set(LegSymbolSfx_97);
      InstrumentLeg_97.insert(LegSymbolSfx_97.getString());
      FIX::LegTimeUnit LegTimeUnit_97("STRING_1322956412");
      noLegs_0_1_0.set(LegTimeUnit_97);
      InstrumentLeg_97.insert(LegTimeUnit_97.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_97("STRING_385786058");
      noLegs_0_1_0.set(LegUnitOfMeasure_97);
      InstrumentLeg_97.insert(LegUnitOfMeasure_97.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
      LegUnitOfMeasureQty_97.setString("18065840");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_97);
      InstrumentLeg_97.insert(LegUnitOfMeasureQty_97.getString());
      all_values.push_back(InstrumentLeg_97);
      all_compo_names.insert("..NoQuoteEntries..NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
        FIX::LegSecurityAltID LegSecurityAltID_190("STRING_592590112");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_190);
        LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltID_190.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_190("STRING_2015791668");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_190);
        LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltIDSource_190.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
        FIX::LegSecurityAltID LegSecurityAltID_191("STRING_441685305");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_191);
        LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltID_191.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_191("STRING_1046664639");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_191);
        LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltIDSource_191.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
        FIX::LegSecurityAltID LegSecurityAltID_192("STRING_1504398779");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_192);
        LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltID_192.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_192("STRING_651670206");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_192);
        LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltIDSource_192.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_98;
      FIX::EncodedLegIssuer EncodedLegIssuer_98("DATA_1611496436");
      noLegs_0_1_1.set(EncodedLegIssuer_98);
      InstrumentLeg_98.insert(EncodedLegIssuer_98.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_98(1266473159);
      noLegs_0_1_1.set(EncodedLegIssuerLen_98);
      InstrumentLeg_98.insert(EncodedLegIssuerLen_98.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_98("DATA_733950914");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_98);
      InstrumentLeg_98.insert(EncodedLegSecurityDesc_98.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_98(1241297445);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_98);
      InstrumentLeg_98.insert(EncodedLegSecurityDescLen_98.getString());
      FIX::LegCFICode LegCFICode_98("STRING_1684304511");
      noLegs_0_1_1.set(LegCFICode_98);
      InstrumentLeg_98.insert(LegCFICode_98.getString());
      FIX::LegContractMultiplier LegContractMultiplier_98;
      LegContractMultiplier_98.setString("20286065");
      noLegs_0_1_1.set(LegContractMultiplier_98);
      InstrumentLeg_98.insert(LegContractMultiplier_98.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_98(634470480);
      noLegs_0_1_1.set(LegContractMultiplierUnit_98);
      InstrumentLeg_98.insert(LegContractMultiplierUnit_98.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_98("MONTHYEAR_1509758760");
      noLegs_0_1_1.set(LegContractSettlMonth_98);
      InstrumentLeg_98.insert(LegContractSettlMonth_98.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_98("COUNTRY_598570101");
      noLegs_0_1_1.set(LegCountryOfIssue_98);
      InstrumentLeg_98.insert(LegCountryOfIssue_98.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_98("LOCALMKTDATE_1993242921");
      noLegs_0_1_1.set(LegCouponPaymentDate_98);
      InstrumentLeg_98.insert(LegCouponPaymentDate_98.getString());
      FIX::LegCouponRate LegCouponRate_98;
      LegCouponRate_98.setString("49.590000");
      noLegs_0_1_1.set(LegCouponRate_98);
      InstrumentLeg_98.insert(LegCouponRate_98.getString());
      FIX::LegCreditRating LegCreditRating_98("STRING_378223702");
      noLegs_0_1_1.set(LegCreditRating_98);
      InstrumentLeg_98.insert(LegCreditRating_98.getString());
      FIX::LegCurrency LegCurrency_98("CHF");
      noLegs_0_1_1.set(LegCurrency_98);
      InstrumentLeg_98.insert(LegCurrency_98.getString());
      FIX::LegDatedDate LegDatedDate_98("LOCALMKTDATE_24420573");
      noLegs_0_1_1.set(LegDatedDate_98);
      InstrumentLeg_98.insert(LegDatedDate_98.getString());
      FIX::LegExerciseStyle LegExerciseStyle_98(1274491317);
      noLegs_0_1_1.set(LegExerciseStyle_98);
      InstrumentLeg_98.insert(LegExerciseStyle_98.getString());
      FIX::LegFactor LegFactor_98;
      LegFactor_98.setString("19168188");
      noLegs_0_1_1.set(LegFactor_98);
      InstrumentLeg_98.insert(LegFactor_98.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_98(588556685);
      noLegs_0_1_1.set(LegFlowScheduleType_98);
      InstrumentLeg_98.insert(LegFlowScheduleType_98.getString());
      FIX::LegInstrRegistry LegInstrRegistry_98("STRING_335602449");
      noLegs_0_1_1.set(LegInstrRegistry_98);
      InstrumentLeg_98.insert(LegInstrRegistry_98.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_98("LOCALMKTDATE_1007440624");
      noLegs_0_1_1.set(LegInterestAccrualDate_98);
      InstrumentLeg_98.insert(LegInterestAccrualDate_98.getString());
      FIX::LegIssueDate LegIssueDate_98("LOCALMKTDATE_1100135462");
      noLegs_0_1_1.set(LegIssueDate_98);
      InstrumentLeg_98.insert(LegIssueDate_98.getString());
      FIX::LegIssuer LegIssuer_98("STRING_1658558861");
      noLegs_0_1_1.set(LegIssuer_98);
      InstrumentLeg_98.insert(LegIssuer_98.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_98("STRING_1393226683");
      noLegs_0_1_1.set(LegLocaleOfIssue_98);
      InstrumentLeg_98.insert(LegLocaleOfIssue_98.getString());
      FIX::LegMaturityDate LegMaturityDate_98("LOCALMKTDATE_759235832");
      noLegs_0_1_1.set(LegMaturityDate_98);
      InstrumentLeg_98.insert(LegMaturityDate_98.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_98("MONTHYEAR_345881492");
      noLegs_0_1_1.set(LegMaturityMonthYear_98);
      InstrumentLeg_98.insert(LegMaturityMonthYear_98.getString());
      FIX::LegMaturityTime LegMaturityTime_98("TZTIMEONLY_1985816795");
      noLegs_0_1_1.set(LegMaturityTime_98);
      InstrumentLeg_98.insert(LegMaturityTime_98.getString());
      FIX::LegOptAttribute LegOptAttribute_98('6');
      noLegs_0_1_1.set(LegOptAttribute_98);
      InstrumentLeg_98.insert(LegOptAttribute_98.getString());
      FIX::LegOptionRatio LegOptionRatio_98;
      LegOptionRatio_98.setString("7875667");
      noLegs_0_1_1.set(LegOptionRatio_98);
      InstrumentLeg_98.insert(LegOptionRatio_98.getString());
      FIX::LegPool LegPool_98("STRING_884997786");
      noLegs_0_1_1.set(LegPool_98);
      InstrumentLeg_98.insert(LegPool_98.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_98("STRING_2131942632");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_98);
      InstrumentLeg_98.insert(LegPriceUnitOfMeasure_98.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
      LegPriceUnitOfMeasureQty_98.setString("14392370");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_98);
      InstrumentLeg_98.insert(LegPriceUnitOfMeasureQty_98.getString());
      FIX::LegProduct LegProduct_98(349010575);
      noLegs_0_1_1.set(LegProduct_98);
      InstrumentLeg_98.insert(LegProduct_98.getString());
      FIX::LegPutOrCall LegPutOrCall_98(1250932143);
      noLegs_0_1_1.set(LegPutOrCall_98);
      InstrumentLeg_98.insert(LegPutOrCall_98.getString());
      FIX::LegRatioQty LegRatioQty_98;
      LegRatioQty_98.setString("257042");
      noLegs_0_1_1.set(LegRatioQty_98);
      InstrumentLeg_98.insert(LegRatioQty_98.getString());
      FIX::LegRedemptionDate LegRedemptionDate_98("LOCALMKTDATE_1590308020");
      noLegs_0_1_1.set(LegRedemptionDate_98);
      InstrumentLeg_98.insert(LegRedemptionDate_98.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_98("STRING_787753006");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_98);
      InstrumentLeg_98.insert(LegRepoCollateralSecurityType_98.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_98;
      LegRepurchaseRate_98.setString("7.720000");
      noLegs_0_1_1.set(LegRepurchaseRate_98);
      InstrumentLeg_98.insert(LegRepurchaseRate_98.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_98(77294853);
      noLegs_0_1_1.set(LegRepurchaseTerm_98);
      InstrumentLeg_98.insert(LegRepurchaseTerm_98.getString());
      FIX::LegSecurityDesc LegSecurityDesc_98("STRING_150028119");
      noLegs_0_1_1.set(LegSecurityDesc_98);
      InstrumentLeg_98.insert(LegSecurityDesc_98.getString());
      FIX::LegSecurityExchange LegSecurityExchange_98("EXCHANGE_505397226");
      noLegs_0_1_1.set(LegSecurityExchange_98);
      InstrumentLeg_98.insert(LegSecurityExchange_98.getString());
      FIX::LegSecurityID LegSecurityID_98("STRING_2070537774");
      noLegs_0_1_1.set(LegSecurityID_98);
      InstrumentLeg_98.insert(LegSecurityID_98.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_98("STRING_1998623078");
      noLegs_0_1_1.set(LegSecurityIDSource_98);
      InstrumentLeg_98.insert(LegSecurityIDSource_98.getString());
      FIX::LegSecuritySubType LegSecuritySubType_98("STRING_883620928");
      noLegs_0_1_1.set(LegSecuritySubType_98);
      InstrumentLeg_98.insert(LegSecuritySubType_98.getString());
      FIX::LegSecurityType LegSecurityType_98("STRING_1459720527");
      noLegs_0_1_1.set(LegSecurityType_98);
      InstrumentLeg_98.insert(LegSecurityType_98.getString());
      FIX::LegSide LegSide_98('8');
      noLegs_0_1_1.set(LegSide_98);
      InstrumentLeg_98.insert(LegSide_98.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_98("STRING_908041501");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_98);
      InstrumentLeg_98.insert(LegStateOrProvinceOfIssue_98.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_98("GBP");
      noLegs_0_1_1.set(LegStrikeCurrency_98);
      InstrumentLeg_98.insert(LegStrikeCurrency_98.getString());
      FIX::LegStrikePrice LegStrikePrice_98;
      LegStrikePrice_98.setString("14965981");
      noLegs_0_1_1.set(LegStrikePrice_98);
      InstrumentLeg_98.insert(LegStrikePrice_98.getString());
      FIX::LegSymbol LegSymbol_98("STRING_922330645");
      noLegs_0_1_1.set(LegSymbol_98);
      InstrumentLeg_98.insert(LegSymbol_98.getString());
      FIX::LegSymbolSfx LegSymbolSfx_98("STRING_1643315478");
      noLegs_0_1_1.set(LegSymbolSfx_98);
      InstrumentLeg_98.insert(LegSymbolSfx_98.getString());
      FIX::LegTimeUnit LegTimeUnit_98("STRING_449250000");
      noLegs_0_1_1.set(LegTimeUnit_98);
      InstrumentLeg_98.insert(LegTimeUnit_98.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_98("STRING_433405859");
      noLegs_0_1_1.set(LegUnitOfMeasure_98);
      InstrumentLeg_98.insert(LegUnitOfMeasure_98.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
      LegUnitOfMeasureQty_98.setString("8890585");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_98);
      InstrumentLeg_98.insert(LegUnitOfMeasureQty_98.getString());
      all_values.push_back(InstrumentLeg_98);
      all_compo_names.insert("..NoQuoteEntries..NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
        FIX::LegSecurityAltID LegSecurityAltID_193("STRING_779287351");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_193);
        LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltID_193.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_193("STRING_727391661");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_193);
        LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltIDSource_193.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
        FIX::LegSecurityAltID LegSecurityAltID_194("STRING_1836029685");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltID_194.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_194("STRING_1566854149");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltIDSource_194.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
        FIX::LegSecurityAltID LegSecurityAltID_195("STRING_1612389447");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltID_195.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_195("STRING_1820488669");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltIDSource_195.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_68;
    FIX::AttachmentPoint AttachmentPoint_68;
    AttachmentPoint_68.setString("75.050000");
    noQuoteEntries_0_0.set(AttachmentPoint_68);
    Instrument_68.insert(AttachmentPoint_68.getString());
    FIX::CFICode CFICode_68("STRING_1961400022");
    noQuoteEntries_0_0.set(CFICode_68);
    Instrument_68.insert(CFICode_68.getString());
    FIX::CPProgram CPProgram_68(99);
    noQuoteEntries_0_0.set(CPProgram_68);
    Instrument_68.insert(CPProgram_68.getString());
    FIX::CPRegType CPRegType_68("STRING_884311775");
    noQuoteEntries_0_0.set(CPRegType_68);
    Instrument_68.insert(CPRegType_68.getString());
    FIX::CapPrice CapPrice_68;
    CapPrice_68.setString("14042243");
    noQuoteEntries_0_0.set(CapPrice_68);
    Instrument_68.insert(CapPrice_68.getString());
    FIX::ContractMultiplier ContractMultiplier_68;
    ContractMultiplier_68.setString("17116901");
    noQuoteEntries_0_0.set(ContractMultiplier_68);
    Instrument_68.insert(ContractMultiplier_68.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_68(2);
    noQuoteEntries_0_0.set(ContractMultiplierUnit_68);
    Instrument_68.insert(ContractMultiplierUnit_68.getString());
    FIX::ContractSettlMonth ContractSettlMonth_68("MONTHYEAR_1481519248");
    noQuoteEntries_0_0.set(ContractSettlMonth_68);
    Instrument_68.insert(ContractSettlMonth_68.getString());
    FIX::CountryOfIssue CountryOfIssue_68("COUNTRY_1861718289");
    noQuoteEntries_0_0.set(CountryOfIssue_68);
    Instrument_68.insert(CountryOfIssue_68.getString());
    FIX::CouponPaymentDate CouponPaymentDate_68("LOCALMKTDATE_1296536126");
    noQuoteEntries_0_0.set(CouponPaymentDate_68);
    Instrument_68.insert(CouponPaymentDate_68.getString());
    FIX::CouponRate CouponRate_68;
    CouponRate_68.setString("33.740000");
    noQuoteEntries_0_0.set(CouponRate_68);
    Instrument_68.insert(CouponRate_68.getString());
    FIX::CreditRating CreditRating_68("STRING_1712857719");
    noQuoteEntries_0_0.set(CreditRating_68);
    Instrument_68.insert(CreditRating_68.getString());
    FIX::DatedDate DatedDate_68("LOCALMKTDATE_32673406");
    noQuoteEntries_0_0.set(DatedDate_68);
    Instrument_68.insert(DatedDate_68.getString());
    FIX::DetachmentPoint DetachmentPoint_68;
    DetachmentPoint_68.setString("2.530000");
    noQuoteEntries_0_0.set(DetachmentPoint_68);
    Instrument_68.insert(DetachmentPoint_68.getString());
    FIX::EncodedIssuer EncodedIssuer_68("DATA_431913695");
    noQuoteEntries_0_0.set(EncodedIssuer_68);
    Instrument_68.insert(EncodedIssuer_68.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_68(940714907);
    noQuoteEntries_0_0.set(EncodedIssuerLen_68);
    Instrument_68.insert(EncodedIssuerLen_68.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_68("DATA_1303538449");
    noQuoteEntries_0_0.set(EncodedSecurityDesc_68);
    Instrument_68.insert(EncodedSecurityDesc_68.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_68(1067788549);
    noQuoteEntries_0_0.set(EncodedSecurityDescLen_68);
    Instrument_68.insert(EncodedSecurityDescLen_68.getString());
    FIX::ExerciseStyle ExerciseStyle_68(1);
    noQuoteEntries_0_0.set(ExerciseStyle_68);
    Instrument_68.insert(ExerciseStyle_68.getString());
    FIX::Factor Factor_68;
    Factor_68.setString("783854");
    noQuoteEntries_0_0.set(Factor_68);
    Instrument_68.insert(Factor_68.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_68(false);
    noQuoteEntries_0_0.set(FlexProductEligibilityIndicator_68);
    Instrument_68.insert(FlexProductEligibilityIndicator_68.getString());
    FIX::FlexibleIndicator FlexibleIndicator_68(true);
    noQuoteEntries_0_0.set(FlexibleIndicator_68);
    Instrument_68.insert(FlexibleIndicator_68.getString());
    FIX::FloorPrice FloorPrice_68;
    FloorPrice_68.setString("5117913");
    noQuoteEntries_0_0.set(FloorPrice_68);
    Instrument_68.insert(FloorPrice_68.getString());
    FIX::FlowScheduleType FlowScheduleType_68(3);
    noQuoteEntries_0_0.set(FlowScheduleType_68);
    Instrument_68.insert(FlowScheduleType_68.getString());
    FIX::InstrRegistry InstrRegistry_68("STRING_1947565279");
    noQuoteEntries_0_0.set(InstrRegistry_68);
    Instrument_68.insert(InstrRegistry_68.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_68('1');
    noQuoteEntries_0_0.set(InstrmtAssignmentMethod_68);
    Instrument_68.insert(InstrmtAssignmentMethod_68.getString());
    FIX::InterestAccrualDate InterestAccrualDate_68("LOCALMKTDATE_32586906");
    noQuoteEntries_0_0.set(InterestAccrualDate_68);
    Instrument_68.insert(InterestAccrualDate_68.getString());
    FIX::IssueDate IssueDate_68("LOCALMKTDATE_1636111316");
    noQuoteEntries_0_0.set(IssueDate_68);
    Instrument_68.insert(IssueDate_68.getString());
    FIX::Issuer Issuer_68("STRING_710449159");
    noQuoteEntries_0_0.set(Issuer_68);
    Instrument_68.insert(Issuer_68.getString());
    FIX::ListMethod ListMethod_68(1);
    noQuoteEntries_0_0.set(ListMethod_68);
    Instrument_68.insert(ListMethod_68.getString());
    FIX::LocaleOfIssue LocaleOfIssue_68("STRING_1309116337");
    noQuoteEntries_0_0.set(LocaleOfIssue_68);
    Instrument_68.insert(LocaleOfIssue_68.getString());
    FIX::MaturityDate MaturityDate_68("LOCALMKTDATE_1569056664");
    noQuoteEntries_0_0.set(MaturityDate_68);
    Instrument_68.insert(MaturityDate_68.getString());
    FIX::MaturityMonthYear MaturityMonthYear_68("MONTHYEAR_1458892728");
    noQuoteEntries_0_0.set(MaturityMonthYear_68);
    Instrument_68.insert(MaturityMonthYear_68.getString());
    FIX::MaturityTime MaturityTime_68("TZTIMEONLY_85569853");
    noQuoteEntries_0_0.set(MaturityTime_68);
    Instrument_68.insert(MaturityTime_68.getString());
    FIX::MinPriceIncrement MinPriceIncrement_68;
    MinPriceIncrement_68.setString("3058847");
    noQuoteEntries_0_0.set(MinPriceIncrement_68);
    Instrument_68.insert(MinPriceIncrement_68.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
    MinPriceIncrementAmount_68.setString("7156334");
    noQuoteEntries_0_0.set(MinPriceIncrementAmount_68);
    Instrument_68.insert(MinPriceIncrementAmount_68.getString());
    FIX::NTPositionLimit NTPositionLimit_68(1797260023);
    noQuoteEntries_0_0.set(NTPositionLimit_68);
    Instrument_68.insert(NTPositionLimit_68.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
    NotionalPercentageOutstanding_68.setString("36.920000");
    noQuoteEntries_0_0.set(NotionalPercentageOutstanding_68);
    Instrument_68.insert(NotionalPercentageOutstanding_68.getString());
    FIX::OptAttribute OptAttribute_68('4');
    noQuoteEntries_0_0.set(OptAttribute_68);
    Instrument_68.insert(OptAttribute_68.getString());
    FIX::OptPayoutAmount OptPayoutAmount_68;
    OptPayoutAmount_68.setString("15114946");
    noQuoteEntries_0_0.set(OptPayoutAmount_68);
    Instrument_68.insert(OptPayoutAmount_68.getString());
    FIX::OptPayoutType OptPayoutType_68(1);
    noQuoteEntries_0_0.set(OptPayoutType_68);
    Instrument_68.insert(OptPayoutType_68.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
    OriginalNotionalPercentageOutstanding_68.setString("24.490000");
    noQuoteEntries_0_0.set(OriginalNotionalPercentageOutstanding_68);
    Instrument_68.insert(OriginalNotionalPercentageOutstanding_68.getString());
    FIX::Pool Pool_68("STRING_1076868736");
    noQuoteEntries_0_0.set(Pool_68);
    Instrument_68.insert(Pool_68.getString());
    FIX::PositionLimit PositionLimit_68(278749576);
    noQuoteEntries_0_0.set(PositionLimit_68);
    Instrument_68.insert(PositionLimit_68.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_68("STRING_INT");
    noQuoteEntries_0_0.set(PriceQuoteMethod_68);
    Instrument_68.insert(PriceQuoteMethod_68.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_68("STRING_1508782431");
    noQuoteEntries_0_0.set(PriceUnitOfMeasure_68);
    Instrument_68.insert(PriceUnitOfMeasure_68.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
    PriceUnitOfMeasureQty_68.setString("12194644");
    noQuoteEntries_0_0.set(PriceUnitOfMeasureQty_68);
    Instrument_68.insert(PriceUnitOfMeasureQty_68.getString());
    FIX::Product Product_70(8);
    noQuoteEntries_0_0.set(Product_70);
    Instrument_68.insert(Product_70.getString());
    FIX::ProductComplex ProductComplex_68("STRING_429087332");
    noQuoteEntries_0_0.set(ProductComplex_68);
    Instrument_68.insert(ProductComplex_68.getString());
    FIX::PutOrCall PutOrCall_68(1);
    noQuoteEntries_0_0.set(PutOrCall_68);
    Instrument_68.insert(PutOrCall_68.getString());
    FIX::RedemptionDate RedemptionDate_68("LOCALMKTDATE_1405492950");
    noQuoteEntries_0_0.set(RedemptionDate_68);
    Instrument_68.insert(RedemptionDate_68.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_68("STRING_992707712");
    noQuoteEntries_0_0.set(RepoCollateralSecurityType_68);
    Instrument_68.insert(RepoCollateralSecurityType_68.getString());
    FIX::RepurchaseRate RepurchaseRate_68;
    RepurchaseRate_68.setString("97.280000");
    noQuoteEntries_0_0.set(RepurchaseRate_68);
    Instrument_68.insert(RepurchaseRate_68.getString());
    FIX::RepurchaseTerm RepurchaseTerm_68(1917284256);
    noQuoteEntries_0_0.set(RepurchaseTerm_68);
    Instrument_68.insert(RepurchaseTerm_68.getString());
    FIX::RestructuringType RestructuringType_68("STRING_MR");
    noQuoteEntries_0_0.set(RestructuringType_68);
    Instrument_68.insert(RestructuringType_68.getString());
    FIX::SecurityDesc SecurityDesc_68("STRING_2048455007");
    noQuoteEntries_0_0.set(SecurityDesc_68);
    Instrument_68.insert(SecurityDesc_68.getString());
    FIX::SecurityExchange SecurityExchange_68("EXCHANGE_1060879266");
    noQuoteEntries_0_0.set(SecurityExchange_68);
    Instrument_68.insert(SecurityExchange_68.getString());
    FIX::SecurityGroup SecurityGroup_68("STRING_330489863");
    noQuoteEntries_0_0.set(SecurityGroup_68);
    Instrument_68.insert(SecurityGroup_68.getString());
    FIX::SecurityID SecurityID_68("STRING_1537082675");
    noQuoteEntries_0_0.set(SecurityID_68);
    Instrument_68.insert(SecurityID_68.getString());
    FIX::SecurityIDSource SecurityIDSource_68("STRING_A");
    noQuoteEntries_0_0.set(SecurityIDSource_68);
    Instrument_68.insert(SecurityIDSource_68.getString());
    FIX::SecurityStatus SecurityStatus_68("STRING_1");
    noQuoteEntries_0_0.set(SecurityStatus_68);
    Instrument_68.insert(SecurityStatus_68.getString());
    FIX::SecuritySubType SecuritySubType_69("STRING_698715364");
    noQuoteEntries_0_0.set(SecuritySubType_69);
    Instrument_68.insert(SecuritySubType_69.getString());
    FIX::SecurityType SecurityType_70("STRING_BUYSELL");
    noQuoteEntries_0_0.set(SecurityType_70);
    Instrument_68.insert(SecurityType_70.getString());
    FIX::Seniority Seniority_68("STRING_SD");
    noQuoteEntries_0_0.set(Seniority_68);
    Instrument_68.insert(Seniority_68.getString());
    FIX::SettlMethod SettlMethod_68('P');
    noQuoteEntries_0_0.set(SettlMethod_68);
    Instrument_68.insert(SettlMethod_68.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_68("STRING_1498786233");
    noQuoteEntries_0_0.set(SettleOnOpenFlag_68);
    Instrument_68.insert(SettleOnOpenFlag_68.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_68("STRING_2002508771");
    noQuoteEntries_0_0.set(StateOrProvinceOfIssue_68);
    Instrument_68.insert(StateOrProvinceOfIssue_68.getString());
    FIX::StrikeCurrency StrikeCurrency_68("EUR");
    noQuoteEntries_0_0.set(StrikeCurrency_68);
    Instrument_68.insert(StrikeCurrency_68.getString());
    FIX::StrikeMultiplier StrikeMultiplier_68;
    StrikeMultiplier_68.setString("20521778");
    noQuoteEntries_0_0.set(StrikeMultiplier_68);
    Instrument_68.insert(StrikeMultiplier_68.getString());
    FIX::StrikePrice StrikePrice_68;
    StrikePrice_68.setString("19455562");
    noQuoteEntries_0_0.set(StrikePrice_68);
    Instrument_68.insert(StrikePrice_68.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_68(3);
    noQuoteEntries_0_0.set(StrikePriceBoundaryMethod_68);
    Instrument_68.insert(StrikePriceBoundaryMethod_68.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
    StrikePriceBoundaryPrecision_68.setString("66.470000");
    noQuoteEntries_0_0.set(StrikePriceBoundaryPrecision_68);
    Instrument_68.insert(StrikePriceBoundaryPrecision_68.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_68(3);
    noQuoteEntries_0_0.set(StrikePriceDeterminationMethod_68);
    Instrument_68.insert(StrikePriceDeterminationMethod_68.getString());
    FIX::StrikeValue StrikeValue_68;
    StrikeValue_68.setString("9731520");
    noQuoteEntries_0_0.set(StrikeValue_68);
    Instrument_68.insert(StrikeValue_68.getString());
    FIX::Symbol Symbol_68("STRING_1382505701");
    noQuoteEntries_0_0.set(Symbol_68);
    Instrument_68.insert(Symbol_68.getString());
    FIX::SymbolSfx SymbolSfx_68("STRING_WI");
    noQuoteEntries_0_0.set(SymbolSfx_68);
    Instrument_68.insert(SymbolSfx_68.getString());
    FIX::TimeUnit TimeUnit_68("STRING_S");
    noQuoteEntries_0_0.set(TimeUnit_68);
    Instrument_68.insert(TimeUnit_68.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_68(2);
    noQuoteEntries_0_0.set(UnderlyingPriceDeterminationMethod_68);
    Instrument_68.insert(UnderlyingPriceDeterminationMethod_68.getString());
    FIX::UnitOfMeasure UnitOfMeasure_68("STRING_Gal");
    noQuoteEntries_0_0.set(UnitOfMeasure_68);
    Instrument_68.insert(UnitOfMeasure_68.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
    UnitOfMeasureQty_68.setString("15544267");
    noQuoteEntries_0_0.set(UnitOfMeasureQty_68);
    Instrument_68.insert(UnitOfMeasureQty_68.getString());
    FIX::ValuationMethod ValuationMethod_68("STRING_FUTDA");
    noQuoteEntries_0_0.set(ValuationMethod_68);
    Instrument_68.insert(ValuationMethod_68.getString());
    all_values.push_back(Instrument_68);
    all_compo_names.insert("..NoQuoteEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_147;
      FIX::ComplexEventCondition ComplexEventCondition_147(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventCondition_147.getString());
      FIX::ComplexEventPrice ComplexEventPrice_147;
      ComplexEventPrice_147.setString("17374231");
      noComplexEvents_0_1_0.set(ComplexEventPrice_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPrice_147.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_147(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryMethod_147.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
      ComplexEventPriceBoundaryPrecision_147.setString("78.750000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryPrecision_147.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_147(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceTimeType_147.getString());
      FIX::ComplexEventType ComplexEventType_147(7);
      noComplexEvents_0_1_0.set(ComplexEventType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventType_147.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
      ComplexOptPayoutAmount_147.setString("9458869");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexOptPayoutAmount_147.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_147);
      all_compo_names.insert("..NoQuoteEntries...NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_280;
        FIX::ComplexEventEndDate ComplexEventEndDate_280(FIX::UTCTIMESTAMP(10, 52, 31, 27, 7, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_280);
        ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventEndDate_280.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_280(FIX::UTCTIMESTAMP(7, 33, 17, 11, 9, 2009));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_280);
        ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventStartDate_280.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_280);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
          FIX::ComplexEventEndTime ComplexEventEndTime_571(FIX::UTCTIMEONLY(9, 37, 3));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_571);
          ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventEndTime_571.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_571(FIX::UTCTIMEONLY(14, 30, 1));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_571);
          ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventStartTime_571.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_281;
        FIX::ComplexEventEndDate ComplexEventEndDate_281(FIX::UTCTIMESTAMP(6, 44, 22, 12, 3, 2008));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_281);
        ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventEndDate_281.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_281(FIX::UTCTIMESTAMP(20, 43, 8, 7, 3, 2006));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_281);
        ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventStartDate_281.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_281);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
          FIX::ComplexEventEndTime ComplexEventEndTime_572(FIX::UTCTIMEONLY(13, 7, 36));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_572);
          ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventEndTime_572.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_572(FIX::UTCTIMEONLY(15, 31, 19));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_572);
          ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventStartTime_572.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_282;
        FIX::ComplexEventEndDate ComplexEventEndDate_282(FIX::UTCTIMESTAMP(4, 56, 48, 11, 11, 2017));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_282);
        ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventEndDate_282.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_282(FIX::UTCTIMESTAMP(5, 29, 0, 19, 11, 2000));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_282);
        ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventStartDate_282.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_282);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
          FIX::ComplexEventEndTime ComplexEventEndTime_573(FIX::UTCTIMEONLY(7, 34, 49));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_573);
          ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventEndTime_573.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_573(FIX::UTCTIMEONLY(17, 59, 0));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_573);
          ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventStartTime_573.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_148;
      FIX::ComplexEventCondition ComplexEventCondition_148(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventCondition_148.getString());
      FIX::ComplexEventPrice ComplexEventPrice_148;
      ComplexEventPrice_148.setString("91339");
      noComplexEvents_0_1_1.set(ComplexEventPrice_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPrice_148.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_148(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryMethod_148.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
      ComplexEventPriceBoundaryPrecision_148.setString("4.110000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryPrecision_148.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_148(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceTimeType_148.getString());
      FIX::ComplexEventType ComplexEventType_148(7);
      noComplexEvents_0_1_1.set(ComplexEventType_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventType_148.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
      ComplexOptPayoutAmount_148.setString("18294767");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexOptPayoutAmount_148.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_148);
      all_compo_names.insert("..NoQuoteEntries...NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_283;
        FIX::ComplexEventEndDate ComplexEventEndDate_283(FIX::UTCTIMESTAMP(19, 21, 13, 27, 8, 2006));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_283);
        ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventEndDate_283.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_283(FIX::UTCTIMESTAMP(4, 45, 52, 11, 12, 2016));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_283);
        ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventStartDate_283.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_283);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
          FIX::ComplexEventEndTime ComplexEventEndTime_574(FIX::UTCTIMEONLY(17, 41, 34));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_574);
          ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventEndTime_574.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_574(FIX::UTCTIMEONLY(14, 26, 12));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_574);
          ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventStartTime_574.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_284;
        FIX::ComplexEventEndDate ComplexEventEndDate_284(FIX::UTCTIMESTAMP(7, 12, 37, 20, 4, 2010));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_284);
        ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventEndDate_284.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_284(FIX::UTCTIMESTAMP(19, 12, 30, 4, 12, 2011));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_284);
        ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventStartDate_284.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_284);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
          FIX::ComplexEventEndTime ComplexEventEndTime_575(FIX::UTCTIMEONLY(14, 14, 30));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_575);
          ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventEndTime_575.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_575(FIX::UTCTIMEONLY(17, 57, 8));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_575);
          ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventStartTime_575.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
          FIX::ComplexEventEndTime ComplexEventEndTime_576(FIX::UTCTIMEONLY(14, 50, 29));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_576);
          ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventEndTime_576.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_576(FIX::UTCTIMEONLY(8, 55, 7));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_576);
          ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventStartTime_576.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_285;
        FIX::ComplexEventEndDate ComplexEventEndDate_285(FIX::UTCTIMESTAMP(14, 11, 44, 14, 7, 2006));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_285);
        ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventEndDate_285.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_285(FIX::UTCTIMESTAMP(13, 40, 33, 26, 8, 2001));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_285);
        ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventStartDate_285.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_285);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
          FIX::ComplexEventEndTime ComplexEventEndTime_577(FIX::UTCTIMEONLY(9, 40, 20));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_577);
          ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventEndTime_577.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_577(FIX::UTCTIMEONLY(10, 17, 23));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_577);
          ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventStartTime_577.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
          FIX::ComplexEventEndTime ComplexEventEndTime_578(FIX::UTCTIMEONLY(8, 5, 21));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_578);
          ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventEndTime_578.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_578(FIX::UTCTIMEONLY(5, 8, 1));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_578);
          ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventStartTime_578.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_139;
      FIX::EventDate EventDate_139("LOCALMKTDATE_1877911894");
      noEvents_0_1_0.set(EventDate_139);
      EvntGrp_NoEvents_139.insert(EventDate_139.getString());
      FIX::EventPx EventPx_139;
      EventPx_139.setString("3159077");
      noEvents_0_1_0.set(EventPx_139);
      EvntGrp_NoEvents_139.insert(EventPx_139.getString());
      FIX::EventText EventText_139("STRING_21832140");
      noEvents_0_1_0.set(EventText_139);
      EvntGrp_NoEvents_139.insert(EventText_139.getString());
      FIX::EventTime EventTime_139(FIX::UTCTIMESTAMP(10, 36, 40, 20, 10, 2000));
      noEvents_0_1_0.set(EventTime_139);
      EvntGrp_NoEvents_139.insert(EventTime_139.getString());
      FIX::EventType EventType_139(19);
      noEvents_0_1_0.set(EventType_139);
      EvntGrp_NoEvents_139.insert(EventType_139.getString());
      all_values.push_back(EvntGrp_NoEvents_139);
      all_compo_names.insert("..NoQuoteEntries...NoEvents");

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_142;
      FIX::InstrumentPartyID InstrumentPartyID_142("STRING_131142221");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyID_142.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_142('9');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyIDSource_142.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_142(788134098);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyRole_142.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_142);
      all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284;
        FIX::InstrumentPartySubID InstrumentPartySubID_284("STRING_1344621373");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_284);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubID_284.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_284(1092896079);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_284);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubIDType_284.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
        FIX::InstrumentPartySubID InstrumentPartySubID_285("STRING_854947028");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_285);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubID_285.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_285(1183288383);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_285);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubIDType_285.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
        FIX::InstrumentPartySubID InstrumentPartySubID_286("STRING_1417695176");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_286);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubID_286.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_286(739137383);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_286);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubIDType_286.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_143;
      FIX::InstrumentPartyID InstrumentPartyID_143("STRING_210741647");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyID_143.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_143('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyIDSource_143.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_143(597507140);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyRole_143.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_143);
      all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
        FIX::InstrumentPartySubID InstrumentPartySubID_287("STRING_1033536351");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_287);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubID_287.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_287(1470501098);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_287);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubIDType_287.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
        FIX::InstrumentPartySubID InstrumentPartySubID_288("STRING_1103346249");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_288);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubID_288.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_288(466623104);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_288);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubIDType_288.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_128;
      FIX::SecurityAltID SecurityAltID_128("STRING_833774496");
      noSecurityAltID_0_1_0.set(SecurityAltID_128);
      SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltID_128.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_128("STRING_782530849");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_128);
      SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltIDSource_128.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);
      all_compo_names.insert("..NoQuoteEntries...NoSecurityAltID");

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_136;
    FIX::SecurityXML SecurityXML_137("XMLDATA_495128754");
    noQuoteEntries_0_0.set(SecurityXML_137);
    FIX::SecurityXMLLen SecurityXMLLen_68(972797825);
    noQuoteEntries_0_0.set(SecurityXMLLen_68);
    FIX::SecurityXMLSchema SecurityXMLSchema_68("STRING_1807213667");
    noQuoteEntries_0_0.set(SecurityXMLSchema_68);
    SecurityXML_136.insert(SecurityXMLSchema_68.getString());
    all_values.push_back(SecurityXML_136);
    all_compo_names.insert("..NoQuoteEntries..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_102;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_102("DATA_628271137");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuer_102.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_102(226581331);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuerLen_102.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_102("DATA_505528711");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDesc_102.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_102(1762968763);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDescLen_102.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
      UnderlyingAdjustedQuantity_102.setString("8271228");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_102);
      UnderlyingInstrument_102.insert(UnderlyingAdjustedQuantity_102.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
      UnderlyingAllocationPercent_102.setString("2.400000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_102);
      UnderlyingInstrument_102.insert(UnderlyingAllocationPercent_102.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
      UnderlyingAttachmentPoint_102.setString("9.840000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingAttachmentPoint_102.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_102("STRING_1808991122");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_102);
      UnderlyingInstrument_102.insert(UnderlyingCFICode_102.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_102("STRING_628750690");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_102);
      UnderlyingInstrument_102.insert(UnderlyingCPProgram_102.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_102("STRING_1572449598");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_102);
      UnderlyingInstrument_102.insert(UnderlyingCPRegType_102.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_102;
      UnderlyingCapValue_102.setString("10061288");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCapValue_102.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
      UnderlyingCashAmount_102.setString("17216467");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_102);
      UnderlyingInstrument_102.insert(UnderlyingCashAmount_102.getString());
      FIX::UnderlyingCashType UnderlyingCashType_102("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_102);
      UnderlyingInstrument_102.insert(UnderlyingCashType_102.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
      UnderlyingContractMultiplier_102.setString("419335");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplier_102.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_102(991858298);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplierUnit_102.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_102("COUNTRY_1019050362");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingCountryOfIssue_102.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_102("LOCALMKTDATE_252675229");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponPaymentDate_102.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
      UnderlyingCouponRate_102.setString("13.460000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponRate_102.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_102("STRING_1616557503");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_102);
      UnderlyingInstrument_102.insert(UnderlyingCreditRating_102.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_102("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrency_102.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
      UnderlyingCurrentValue_102.setString("9395749");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrentValue_102.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
      UnderlyingDetachmentPoint_102.setString("13.200000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingDetachmentPoint_102.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
      UnderlyingDirtyPrice_102.setString("15282108");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingDirtyPrice_102.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
      UnderlyingEndPrice_102.setString("14128715");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingEndPrice_102.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_102;
      UnderlyingEndValue_102.setString("2258021");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_102);
      UnderlyingInstrument_102.insert(UnderlyingEndValue_102.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_102(163258003);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_102);
      UnderlyingInstrument_102.insert(UnderlyingExerciseStyle_102.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_102;
      UnderlyingFXRate_102.setString("19080003");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRate_102.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_102('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRateCalc_102.getString());
      FIX::UnderlyingFactor UnderlyingFactor_102;
      UnderlyingFactor_102.setString("19704716");
      noUnderlyings_0_1_0.set(UnderlyingFactor_102);
      UnderlyingInstrument_102.insert(UnderlyingFactor_102.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_102(1720258663);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_102);
      UnderlyingInstrument_102.insert(UnderlyingFlowScheduleType_102.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_102("STRING_1826871130");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_102);
      UnderlyingInstrument_102.insert(UnderlyingInstrRegistry_102.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_102("LOCALMKTDATE_49569354");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_102);
      UnderlyingInstrument_102.insert(UnderlyingIssueDate_102.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_102("STRING_78303727");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(UnderlyingIssuer_102.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_102("STRING_1442356246");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingLocaleOfIssue_102.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_102("LOCALMKTDATE_876692183");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityDate_102.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_102("MONTHYEAR_2066403967");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityMonthYear_102.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_102("TZTIMEONLY_1188983582");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityTime_102.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
      UnderlyingNotionalPercentageOutstanding_102.setString("96.570000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_102('5');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_102);
      UnderlyingInstrument_102.insert(UnderlyingOptAttribute_102.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
      UnderlyingOriginalNotionalPercentageOutstanding_102.setString("95.330000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingOriginalNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_102("STRING_1544328504");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasure_102.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
      UnderlyingPriceUnitOfMeasureQty_102.setString("1218341");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasureQty_102.getString());
      FIX::UnderlyingProduct UnderlyingProduct_102(893862512);
      noUnderlyings_0_1_0.set(UnderlyingProduct_102);
      UnderlyingInstrument_102.insert(UnderlyingProduct_102.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_102(1586262086);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_102);
      UnderlyingInstrument_102.insert(UnderlyingPutOrCall_102.getString());
      FIX::UnderlyingPx UnderlyingPx_102;
      UnderlyingPx_102.setString("11136924");
      noUnderlyings_0_1_0.set(UnderlyingPx_102);
      UnderlyingInstrument_102.insert(UnderlyingPx_102.getString());
      FIX::UnderlyingQty UnderlyingQty_102;
      UnderlyingQty_102.setString("19129128");
      noUnderlyings_0_1_0.set(UnderlyingQty_102);
      UnderlyingInstrument_102.insert(UnderlyingQty_102.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_102("LOCALMKTDATE_1838937316");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_102);
      UnderlyingInstrument_102.insert(UnderlyingRedemptionDate_102.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_102("STRING_1141743775");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingRepoCollateralSecurityType_102.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
      UnderlyingRepurchaseRate_102.setString("67.290000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseRate_102.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_102(127618738);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseTerm_102.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_102("STRING_55847825");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_102);
      UnderlyingInstrument_102.insert(UnderlyingRestructuringType_102.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_102("STRING_174078034");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityDesc_102.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_102("EXCHANGE_1667130058");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityExchange_102.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_102("STRING_1584058627");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityID_102.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_102("STRING_1586949601");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityIDSource_102.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_102("STRING_1892932226");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecuritySubType_102.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_102("STRING_1747316630");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityType_102.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_102("STRING_1347466274");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_102);
      UnderlyingInstrument_102.insert(UnderlyingSeniority_102.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_102("STRING_944048571");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlMethod_102.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_102(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlementType_102.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_102;
      UnderlyingStartValue_102.setString("9202412");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_102);
      UnderlyingInstrument_102.insert(UnderlyingStartValue_102.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_102("STRING_623436054");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingStateOrProvinceOfIssue_102.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_102("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikeCurrency_102.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
      UnderlyingStrikePrice_102.setString("20657923");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikePrice_102.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_102("STRING_349082542");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbol_102.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_102("STRING_917465336");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbolSfx_102.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_102("STRING_1107292234");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingTimeUnit_102.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_102("STRING_887282199");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasure_102.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
      UnderlyingUnitOfMeasureQty_102.setString("14651363");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasureQty_102.getString());
      all_values.push_back(UnderlyingInstrument_102);
      all_compo_names.insert("..NoQuoteEntries..NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_196("STRING_284127056");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltID_196.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_196("STRING_1586970476");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltIDSource_196.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_197("STRING_467620631");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltID_197.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_197("STRING_1870389142");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltIDSource_197.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_198("STRING_553179257");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltID_198.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_198("STRING_233049858");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltIDSource_198.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
        FIX::UnderlyingStipType UnderlyingStipType_213("STRING_1694923033");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_213);
        UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipType_213.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_213("STRING_1615036587");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_213);
        UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipValue_213.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_205("STRING_1750770858");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyID_205.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_205('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyIDSource_205.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_205(1209107959);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyRole_205.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_413("STRING_1228580575");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_413);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubID_413.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_413(954556538);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_413);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubIDType_413.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_414("STRING_787178819");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_414);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubID_414.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_414(428563202);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_414);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubIDType_414.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_415("STRING_1898605109");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_415);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubID_415.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_415(209999823);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_415);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubIDType_415.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_206("STRING_1348804492");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyID_206.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_206('3');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyIDSource_206.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_206(1829873830);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyRole_206.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_416("STRING_292866167");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_416);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubID_416.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_416(31472724);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_416);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubIDType_416.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_417("STRING_1117331197");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_417);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubID_417.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_417(1400158402);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_417);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubIDType_417.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_418("STRING_918754923");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_418);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubID_418.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_418(434983894);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_418);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubIDType_418.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_207("STRING_973916521");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyID_207.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_207('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyIDSource_207.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_207(2021954371);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyRole_207.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_419("STRING_925787474");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_419);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubID_419.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_419(427649980);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_419);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubIDType_419.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_420("STRING_1674587011");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_420);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubID_420.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_420(340146636);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_420);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubIDType_420.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noQuoteEntries_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_1;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_18;
    FIX::AgreementCurrency AgreementCurrency_18("GBP");
    noQuoteEntries_0_1.set(AgreementCurrency_18);
    FinancingDetails_18.insert(AgreementCurrency_18.getString());
    FIX::AgreementDate AgreementDate_18("LOCALMKTDATE_2029608185");
    noQuoteEntries_0_1.set(AgreementDate_18);
    FinancingDetails_18.insert(AgreementDate_18.getString());
    FIX::AgreementDesc AgreementDesc_18("STRING_1725860223");
    noQuoteEntries_0_1.set(AgreementDesc_18);
    FinancingDetails_18.insert(AgreementDesc_18.getString());
    FIX::AgreementID AgreementID_18("STRING_783770924");
    noQuoteEntries_0_1.set(AgreementID_18);
    FinancingDetails_18.insert(AgreementID_18.getString());
    FIX::DeliveryType DeliveryType_18(1);
    noQuoteEntries_0_1.set(DeliveryType_18);
    FinancingDetails_18.insert(DeliveryType_18.getString());
    FIX::EndDate EndDate_18("LOCALMKTDATE_765722412");
    noQuoteEntries_0_1.set(EndDate_18);
    FinancingDetails_18.insert(EndDate_18.getString());
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("15.000000");
    noQuoteEntries_0_1.set(MarginRatio_18);
    FinancingDetails_18.insert(MarginRatio_18.getString());
    FIX::StartDate StartDate_18("LOCALMKTDATE_2045789035");
    noQuoteEntries_0_1.set(StartDate_18);
    FinancingDetails_18.insert(StartDate_18.getString());
    FIX::TerminationType TerminationType_18(4);
    noQuoteEntries_0_1.set(TerminationType_18);
    FinancingDetails_18.insert(TerminationType_18.getString());
    all_values.push_back(FinancingDetails_18);
    all_compo_names.insert("..NoQuoteEntries.");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_99;
      FIX::EncodedLegIssuer EncodedLegIssuer_99("DATA_1796910496");
      noLegs_1_1_0.set(EncodedLegIssuer_99);
      InstrumentLeg_99.insert(EncodedLegIssuer_99.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_99(1762901055);
      noLegs_1_1_0.set(EncodedLegIssuerLen_99);
      InstrumentLeg_99.insert(EncodedLegIssuerLen_99.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_99("DATA_1642235546");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_99);
      InstrumentLeg_99.insert(EncodedLegSecurityDesc_99.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_99(23984364);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_99);
      InstrumentLeg_99.insert(EncodedLegSecurityDescLen_99.getString());
      FIX::LegCFICode LegCFICode_99("STRING_1445291237");
      noLegs_1_1_0.set(LegCFICode_99);
      InstrumentLeg_99.insert(LegCFICode_99.getString());
      FIX::LegContractMultiplier LegContractMultiplier_99;
      LegContractMultiplier_99.setString("18421014");
      noLegs_1_1_0.set(LegContractMultiplier_99);
      InstrumentLeg_99.insert(LegContractMultiplier_99.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_99(316850531);
      noLegs_1_1_0.set(LegContractMultiplierUnit_99);
      InstrumentLeg_99.insert(LegContractMultiplierUnit_99.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_99("MONTHYEAR_1476763961");
      noLegs_1_1_0.set(LegContractSettlMonth_99);
      InstrumentLeg_99.insert(LegContractSettlMonth_99.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_99("COUNTRY_811948956");
      noLegs_1_1_0.set(LegCountryOfIssue_99);
      InstrumentLeg_99.insert(LegCountryOfIssue_99.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_99("LOCALMKTDATE_1717008933");
      noLegs_1_1_0.set(LegCouponPaymentDate_99);
      InstrumentLeg_99.insert(LegCouponPaymentDate_99.getString());
      FIX::LegCouponRate LegCouponRate_99;
      LegCouponRate_99.setString("52.360000");
      noLegs_1_1_0.set(LegCouponRate_99);
      InstrumentLeg_99.insert(LegCouponRate_99.getString());
      FIX::LegCreditRating LegCreditRating_99("STRING_1246932850");
      noLegs_1_1_0.set(LegCreditRating_99);
      InstrumentLeg_99.insert(LegCreditRating_99.getString());
      FIX::LegCurrency LegCurrency_99("USD");
      noLegs_1_1_0.set(LegCurrency_99);
      InstrumentLeg_99.insert(LegCurrency_99.getString());
      FIX::LegDatedDate LegDatedDate_99("LOCALMKTDATE_1121403573");
      noLegs_1_1_0.set(LegDatedDate_99);
      InstrumentLeg_99.insert(LegDatedDate_99.getString());
      FIX::LegExerciseStyle LegExerciseStyle_99(1984978960);
      noLegs_1_1_0.set(LegExerciseStyle_99);
      InstrumentLeg_99.insert(LegExerciseStyle_99.getString());
      FIX::LegFactor LegFactor_99;
      LegFactor_99.setString("2292210");
      noLegs_1_1_0.set(LegFactor_99);
      InstrumentLeg_99.insert(LegFactor_99.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_99(1549053554);
      noLegs_1_1_0.set(LegFlowScheduleType_99);
      InstrumentLeg_99.insert(LegFlowScheduleType_99.getString());
      FIX::LegInstrRegistry LegInstrRegistry_99("STRING_1512082323");
      noLegs_1_1_0.set(LegInstrRegistry_99);
      InstrumentLeg_99.insert(LegInstrRegistry_99.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_99("LOCALMKTDATE_569367678");
      noLegs_1_1_0.set(LegInterestAccrualDate_99);
      InstrumentLeg_99.insert(LegInterestAccrualDate_99.getString());
      FIX::LegIssueDate LegIssueDate_99("LOCALMKTDATE_1524142919");
      noLegs_1_1_0.set(LegIssueDate_99);
      InstrumentLeg_99.insert(LegIssueDate_99.getString());
      FIX::LegIssuer LegIssuer_99("STRING_506738625");
      noLegs_1_1_0.set(LegIssuer_99);
      InstrumentLeg_99.insert(LegIssuer_99.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_99("STRING_451492216");
      noLegs_1_1_0.set(LegLocaleOfIssue_99);
      InstrumentLeg_99.insert(LegLocaleOfIssue_99.getString());
      FIX::LegMaturityDate LegMaturityDate_99("LOCALMKTDATE_1102519495");
      noLegs_1_1_0.set(LegMaturityDate_99);
      InstrumentLeg_99.insert(LegMaturityDate_99.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_99("MONTHYEAR_1290509550");
      noLegs_1_1_0.set(LegMaturityMonthYear_99);
      InstrumentLeg_99.insert(LegMaturityMonthYear_99.getString());
      FIX::LegMaturityTime LegMaturityTime_99("TZTIMEONLY_1542724713");
      noLegs_1_1_0.set(LegMaturityTime_99);
      InstrumentLeg_99.insert(LegMaturityTime_99.getString());
      FIX::LegOptAttribute LegOptAttribute_99('1');
      noLegs_1_1_0.set(LegOptAttribute_99);
      InstrumentLeg_99.insert(LegOptAttribute_99.getString());
      FIX::LegOptionRatio LegOptionRatio_99;
      LegOptionRatio_99.setString("11553774");
      noLegs_1_1_0.set(LegOptionRatio_99);
      InstrumentLeg_99.insert(LegOptionRatio_99.getString());
      FIX::LegPool LegPool_99("STRING_1441030100");
      noLegs_1_1_0.set(LegPool_99);
      InstrumentLeg_99.insert(LegPool_99.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_99("STRING_1273659491");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_99);
      InstrumentLeg_99.insert(LegPriceUnitOfMeasure_99.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
      LegPriceUnitOfMeasureQty_99.setString("14488084");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_99);
      InstrumentLeg_99.insert(LegPriceUnitOfMeasureQty_99.getString());
      FIX::LegProduct LegProduct_99(1090456948);
      noLegs_1_1_0.set(LegProduct_99);
      InstrumentLeg_99.insert(LegProduct_99.getString());
      FIX::LegPutOrCall LegPutOrCall_99(889076898);
      noLegs_1_1_0.set(LegPutOrCall_99);
      InstrumentLeg_99.insert(LegPutOrCall_99.getString());
      FIX::LegRatioQty LegRatioQty_99;
      LegRatioQty_99.setString("9435603");
      noLegs_1_1_0.set(LegRatioQty_99);
      InstrumentLeg_99.insert(LegRatioQty_99.getString());
      FIX::LegRedemptionDate LegRedemptionDate_99("LOCALMKTDATE_1114441312");
      noLegs_1_1_0.set(LegRedemptionDate_99);
      InstrumentLeg_99.insert(LegRedemptionDate_99.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_99("STRING_186884487");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_99);
      InstrumentLeg_99.insert(LegRepoCollateralSecurityType_99.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_99;
      LegRepurchaseRate_99.setString("81.130000");
      noLegs_1_1_0.set(LegRepurchaseRate_99);
      InstrumentLeg_99.insert(LegRepurchaseRate_99.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_99(1431291844);
      noLegs_1_1_0.set(LegRepurchaseTerm_99);
      InstrumentLeg_99.insert(LegRepurchaseTerm_99.getString());
      FIX::LegSecurityDesc LegSecurityDesc_99("STRING_1663648448");
      noLegs_1_1_0.set(LegSecurityDesc_99);
      InstrumentLeg_99.insert(LegSecurityDesc_99.getString());
      FIX::LegSecurityExchange LegSecurityExchange_99("EXCHANGE_1450127069");
      noLegs_1_1_0.set(LegSecurityExchange_99);
      InstrumentLeg_99.insert(LegSecurityExchange_99.getString());
      FIX::LegSecurityID LegSecurityID_99("STRING_1000817129");
      noLegs_1_1_0.set(LegSecurityID_99);
      InstrumentLeg_99.insert(LegSecurityID_99.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_99("STRING_1911683684");
      noLegs_1_1_0.set(LegSecurityIDSource_99);
      InstrumentLeg_99.insert(LegSecurityIDSource_99.getString());
      FIX::LegSecuritySubType LegSecuritySubType_99("STRING_549576271");
      noLegs_1_1_0.set(LegSecuritySubType_99);
      InstrumentLeg_99.insert(LegSecuritySubType_99.getString());
      FIX::LegSecurityType LegSecurityType_99("STRING_1544258936");
      noLegs_1_1_0.set(LegSecurityType_99);
      InstrumentLeg_99.insert(LegSecurityType_99.getString());
      FIX::LegSide LegSide_99('1');
      noLegs_1_1_0.set(LegSide_99);
      InstrumentLeg_99.insert(LegSide_99.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_99("STRING_1670979845");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_99);
      InstrumentLeg_99.insert(LegStateOrProvinceOfIssue_99.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_99("USD");
      noLegs_1_1_0.set(LegStrikeCurrency_99);
      InstrumentLeg_99.insert(LegStrikeCurrency_99.getString());
      FIX::LegStrikePrice LegStrikePrice_99;
      LegStrikePrice_99.setString("10725497");
      noLegs_1_1_0.set(LegStrikePrice_99);
      InstrumentLeg_99.insert(LegStrikePrice_99.getString());
      FIX::LegSymbol LegSymbol_99("STRING_746352923");
      noLegs_1_1_0.set(LegSymbol_99);
      InstrumentLeg_99.insert(LegSymbol_99.getString());
      FIX::LegSymbolSfx LegSymbolSfx_99("STRING_2013705973");
      noLegs_1_1_0.set(LegSymbolSfx_99);
      InstrumentLeg_99.insert(LegSymbolSfx_99.getString());
      FIX::LegTimeUnit LegTimeUnit_99("STRING_449209022");
      noLegs_1_1_0.set(LegTimeUnit_99);
      InstrumentLeg_99.insert(LegTimeUnit_99.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_99("STRING_1253091549");
      noLegs_1_1_0.set(LegUnitOfMeasure_99);
      InstrumentLeg_99.insert(LegUnitOfMeasure_99.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
      LegUnitOfMeasureQty_99.setString("3177145");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_99);
      InstrumentLeg_99.insert(LegUnitOfMeasureQty_99.getString());
      all_values.push_back(InstrumentLeg_99);
      all_compo_names.insert("..NoQuoteEntries..NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
        FIX::LegSecurityAltID LegSecurityAltID_196("STRING_396117451");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltID_196.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_196("STRING_1860439254");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltIDSource_196.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_100;
      FIX::EncodedLegIssuer EncodedLegIssuer_100("DATA_1272486777");
      noLegs_1_1_1.set(EncodedLegIssuer_100);
      InstrumentLeg_100.insert(EncodedLegIssuer_100.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_100(1551494853);
      noLegs_1_1_1.set(EncodedLegIssuerLen_100);
      InstrumentLeg_100.insert(EncodedLegIssuerLen_100.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_100("DATA_1153985706");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_100);
      InstrumentLeg_100.insert(EncodedLegSecurityDesc_100.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_100(398662620);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_100);
      InstrumentLeg_100.insert(EncodedLegSecurityDescLen_100.getString());
      FIX::LegCFICode LegCFICode_100("STRING_852819661");
      noLegs_1_1_1.set(LegCFICode_100);
      InstrumentLeg_100.insert(LegCFICode_100.getString());
      FIX::LegContractMultiplier LegContractMultiplier_100;
      LegContractMultiplier_100.setString("969590");
      noLegs_1_1_1.set(LegContractMultiplier_100);
      InstrumentLeg_100.insert(LegContractMultiplier_100.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_100(1287739518);
      noLegs_1_1_1.set(LegContractMultiplierUnit_100);
      InstrumentLeg_100.insert(LegContractMultiplierUnit_100.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_100("MONTHYEAR_1796380015");
      noLegs_1_1_1.set(LegContractSettlMonth_100);
      InstrumentLeg_100.insert(LegContractSettlMonth_100.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_100("COUNTRY_1211400319");
      noLegs_1_1_1.set(LegCountryOfIssue_100);
      InstrumentLeg_100.insert(LegCountryOfIssue_100.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_100("LOCALMKTDATE_1474624005");
      noLegs_1_1_1.set(LegCouponPaymentDate_100);
      InstrumentLeg_100.insert(LegCouponPaymentDate_100.getString());
      FIX::LegCouponRate LegCouponRate_100;
      LegCouponRate_100.setString("44.800000");
      noLegs_1_1_1.set(LegCouponRate_100);
      InstrumentLeg_100.insert(LegCouponRate_100.getString());
      FIX::LegCreditRating LegCreditRating_100("STRING_495208515");
      noLegs_1_1_1.set(LegCreditRating_100);
      InstrumentLeg_100.insert(LegCreditRating_100.getString());
      FIX::LegCurrency LegCurrency_100("CHF");
      noLegs_1_1_1.set(LegCurrency_100);
      InstrumentLeg_100.insert(LegCurrency_100.getString());
      FIX::LegDatedDate LegDatedDate_100("LOCALMKTDATE_1496025644");
      noLegs_1_1_1.set(LegDatedDate_100);
      InstrumentLeg_100.insert(LegDatedDate_100.getString());
      FIX::LegExerciseStyle LegExerciseStyle_100(754988841);
      noLegs_1_1_1.set(LegExerciseStyle_100);
      InstrumentLeg_100.insert(LegExerciseStyle_100.getString());
      FIX::LegFactor LegFactor_100;
      LegFactor_100.setString("1392941");
      noLegs_1_1_1.set(LegFactor_100);
      InstrumentLeg_100.insert(LegFactor_100.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_100(892800933);
      noLegs_1_1_1.set(LegFlowScheduleType_100);
      InstrumentLeg_100.insert(LegFlowScheduleType_100.getString());
      FIX::LegInstrRegistry LegInstrRegistry_100("STRING_1970106094");
      noLegs_1_1_1.set(LegInstrRegistry_100);
      InstrumentLeg_100.insert(LegInstrRegistry_100.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_100("LOCALMKTDATE_1810274017");
      noLegs_1_1_1.set(LegInterestAccrualDate_100);
      InstrumentLeg_100.insert(LegInterestAccrualDate_100.getString());
      FIX::LegIssueDate LegIssueDate_100("LOCALMKTDATE_127071533");
      noLegs_1_1_1.set(LegIssueDate_100);
      InstrumentLeg_100.insert(LegIssueDate_100.getString());
      FIX::LegIssuer LegIssuer_100("STRING_1266960740");
      noLegs_1_1_1.set(LegIssuer_100);
      InstrumentLeg_100.insert(LegIssuer_100.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_100("STRING_735340120");
      noLegs_1_1_1.set(LegLocaleOfIssue_100);
      InstrumentLeg_100.insert(LegLocaleOfIssue_100.getString());
      FIX::LegMaturityDate LegMaturityDate_100("LOCALMKTDATE_873424457");
      noLegs_1_1_1.set(LegMaturityDate_100);
      InstrumentLeg_100.insert(LegMaturityDate_100.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_100("MONTHYEAR_1133183065");
      noLegs_1_1_1.set(LegMaturityMonthYear_100);
      InstrumentLeg_100.insert(LegMaturityMonthYear_100.getString());
      FIX::LegMaturityTime LegMaturityTime_100("TZTIMEONLY_1184549143");
      noLegs_1_1_1.set(LegMaturityTime_100);
      InstrumentLeg_100.insert(LegMaturityTime_100.getString());
      FIX::LegOptAttribute LegOptAttribute_100('2');
      noLegs_1_1_1.set(LegOptAttribute_100);
      InstrumentLeg_100.insert(LegOptAttribute_100.getString());
      FIX::LegOptionRatio LegOptionRatio_100;
      LegOptionRatio_100.setString("14508976");
      noLegs_1_1_1.set(LegOptionRatio_100);
      InstrumentLeg_100.insert(LegOptionRatio_100.getString());
      FIX::LegPool LegPool_100("STRING_588794012");
      noLegs_1_1_1.set(LegPool_100);
      InstrumentLeg_100.insert(LegPool_100.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_100("STRING_375149809");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_100);
      InstrumentLeg_100.insert(LegPriceUnitOfMeasure_100.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
      LegPriceUnitOfMeasureQty_100.setString("11638532");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_100);
      InstrumentLeg_100.insert(LegPriceUnitOfMeasureQty_100.getString());
      FIX::LegProduct LegProduct_100(1861280789);
      noLegs_1_1_1.set(LegProduct_100);
      InstrumentLeg_100.insert(LegProduct_100.getString());
      FIX::LegPutOrCall LegPutOrCall_100(1926644662);
      noLegs_1_1_1.set(LegPutOrCall_100);
      InstrumentLeg_100.insert(LegPutOrCall_100.getString());
      FIX::LegRatioQty LegRatioQty_100;
      LegRatioQty_100.setString("1703552");
      noLegs_1_1_1.set(LegRatioQty_100);
      InstrumentLeg_100.insert(LegRatioQty_100.getString());
      FIX::LegRedemptionDate LegRedemptionDate_100("LOCALMKTDATE_112459761");
      noLegs_1_1_1.set(LegRedemptionDate_100);
      InstrumentLeg_100.insert(LegRedemptionDate_100.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_100("STRING_631980675");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_100);
      InstrumentLeg_100.insert(LegRepoCollateralSecurityType_100.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_100;
      LegRepurchaseRate_100.setString("42.770000");
      noLegs_1_1_1.set(LegRepurchaseRate_100);
      InstrumentLeg_100.insert(LegRepurchaseRate_100.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_100(1400199279);
      noLegs_1_1_1.set(LegRepurchaseTerm_100);
      InstrumentLeg_100.insert(LegRepurchaseTerm_100.getString());
      FIX::LegSecurityDesc LegSecurityDesc_100("STRING_280877042");
      noLegs_1_1_1.set(LegSecurityDesc_100);
      InstrumentLeg_100.insert(LegSecurityDesc_100.getString());
      FIX::LegSecurityExchange LegSecurityExchange_100("EXCHANGE_1478714596");
      noLegs_1_1_1.set(LegSecurityExchange_100);
      InstrumentLeg_100.insert(LegSecurityExchange_100.getString());
      FIX::LegSecurityID LegSecurityID_100("STRING_727339636");
      noLegs_1_1_1.set(LegSecurityID_100);
      InstrumentLeg_100.insert(LegSecurityID_100.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_100("STRING_567951522");
      noLegs_1_1_1.set(LegSecurityIDSource_100);
      InstrumentLeg_100.insert(LegSecurityIDSource_100.getString());
      FIX::LegSecuritySubType LegSecuritySubType_100("STRING_1973923111");
      noLegs_1_1_1.set(LegSecuritySubType_100);
      InstrumentLeg_100.insert(LegSecuritySubType_100.getString());
      FIX::LegSecurityType LegSecurityType_100("STRING_1718128441");
      noLegs_1_1_1.set(LegSecurityType_100);
      InstrumentLeg_100.insert(LegSecurityType_100.getString());
      FIX::LegSide LegSide_100('1');
      noLegs_1_1_1.set(LegSide_100);
      InstrumentLeg_100.insert(LegSide_100.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_100("STRING_1322465107");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_100);
      InstrumentLeg_100.insert(LegStateOrProvinceOfIssue_100.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_100("CHF");
      noLegs_1_1_1.set(LegStrikeCurrency_100);
      InstrumentLeg_100.insert(LegStrikeCurrency_100.getString());
      FIX::LegStrikePrice LegStrikePrice_100;
      LegStrikePrice_100.setString("677823");
      noLegs_1_1_1.set(LegStrikePrice_100);
      InstrumentLeg_100.insert(LegStrikePrice_100.getString());
      FIX::LegSymbol LegSymbol_100("STRING_148256081");
      noLegs_1_1_1.set(LegSymbol_100);
      InstrumentLeg_100.insert(LegSymbol_100.getString());
      FIX::LegSymbolSfx LegSymbolSfx_100("STRING_2107237613");
      noLegs_1_1_1.set(LegSymbolSfx_100);
      InstrumentLeg_100.insert(LegSymbolSfx_100.getString());
      FIX::LegTimeUnit LegTimeUnit_100("STRING_194853926");
      noLegs_1_1_1.set(LegTimeUnit_100);
      InstrumentLeg_100.insert(LegTimeUnit_100.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_100("STRING_1415216821");
      noLegs_1_1_1.set(LegUnitOfMeasure_100);
      InstrumentLeg_100.insert(LegUnitOfMeasure_100.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
      LegUnitOfMeasureQty_100.setString("6950940");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_100);
      InstrumentLeg_100.insert(LegUnitOfMeasureQty_100.getString());
      all_values.push_back(InstrumentLeg_100);
      all_compo_names.insert("..NoQuoteEntries..NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
        FIX::LegSecurityAltID LegSecurityAltID_197("STRING_400916239");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltID_197.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_197("STRING_1879643228");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltIDSource_197.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
        FIX::LegSecurityAltID LegSecurityAltID_198("STRING_1047310741");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltID_198.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_198("STRING_1851813845");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltIDSource_198.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);
        all_compo_names.insert("..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_69;
    FIX::AttachmentPoint AttachmentPoint_69;
    AttachmentPoint_69.setString("35.930000");
    noQuoteEntries_0_1.set(AttachmentPoint_69);
    Instrument_69.insert(AttachmentPoint_69.getString());
    FIX::CFICode CFICode_69("STRING_1422460550");
    noQuoteEntries_0_1.set(CFICode_69);
    Instrument_69.insert(CFICode_69.getString());
    FIX::CPProgram CPProgram_69(1);
    noQuoteEntries_0_1.set(CPProgram_69);
    Instrument_69.insert(CPProgram_69.getString());
    FIX::CPRegType CPRegType_69("STRING_34750734");
    noQuoteEntries_0_1.set(CPRegType_69);
    Instrument_69.insert(CPRegType_69.getString());
    FIX::CapPrice CapPrice_69;
    CapPrice_69.setString("12016215");
    noQuoteEntries_0_1.set(CapPrice_69);
    Instrument_69.insert(CapPrice_69.getString());
    FIX::ContractMultiplier ContractMultiplier_69;
    ContractMultiplier_69.setString("10385386");
    noQuoteEntries_0_1.set(ContractMultiplier_69);
    Instrument_69.insert(ContractMultiplier_69.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_69(1);
    noQuoteEntries_0_1.set(ContractMultiplierUnit_69);
    Instrument_69.insert(ContractMultiplierUnit_69.getString());
    FIX::ContractSettlMonth ContractSettlMonth_69("MONTHYEAR_1833602239");
    noQuoteEntries_0_1.set(ContractSettlMonth_69);
    Instrument_69.insert(ContractSettlMonth_69.getString());
    FIX::CountryOfIssue CountryOfIssue_69("COUNTRY_1305852957");
    noQuoteEntries_0_1.set(CountryOfIssue_69);
    Instrument_69.insert(CountryOfIssue_69.getString());
    FIX::CouponPaymentDate CouponPaymentDate_69("LOCALMKTDATE_1547409775");
    noQuoteEntries_0_1.set(CouponPaymentDate_69);
    Instrument_69.insert(CouponPaymentDate_69.getString());
    FIX::CouponRate CouponRate_69;
    CouponRate_69.setString("92.810000");
    noQuoteEntries_0_1.set(CouponRate_69);
    Instrument_69.insert(CouponRate_69.getString());
    FIX::CreditRating CreditRating_69("STRING_637083905");
    noQuoteEntries_0_1.set(CreditRating_69);
    Instrument_69.insert(CreditRating_69.getString());
    FIX::DatedDate DatedDate_69("LOCALMKTDATE_127265764");
    noQuoteEntries_0_1.set(DatedDate_69);
    Instrument_69.insert(DatedDate_69.getString());
    FIX::DetachmentPoint DetachmentPoint_69;
    DetachmentPoint_69.setString("71.550000");
    noQuoteEntries_0_1.set(DetachmentPoint_69);
    Instrument_69.insert(DetachmentPoint_69.getString());
    FIX::EncodedIssuer EncodedIssuer_69("DATA_463523368");
    noQuoteEntries_0_1.set(EncodedIssuer_69);
    Instrument_69.insert(EncodedIssuer_69.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_69(1845394205);
    noQuoteEntries_0_1.set(EncodedIssuerLen_69);
    Instrument_69.insert(EncodedIssuerLen_69.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_69("DATA_692616578");
    noQuoteEntries_0_1.set(EncodedSecurityDesc_69);
    Instrument_69.insert(EncodedSecurityDesc_69.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_69(1785988476);
    noQuoteEntries_0_1.set(EncodedSecurityDescLen_69);
    Instrument_69.insert(EncodedSecurityDescLen_69.getString());
    FIX::ExerciseStyle ExerciseStyle_69(0);
    noQuoteEntries_0_1.set(ExerciseStyle_69);
    Instrument_69.insert(ExerciseStyle_69.getString());
    FIX::Factor Factor_69;
    Factor_69.setString("9895801");
    noQuoteEntries_0_1.set(Factor_69);
    Instrument_69.insert(Factor_69.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_69(true);
    noQuoteEntries_0_1.set(FlexProductEligibilityIndicator_69);
    Instrument_69.insert(FlexProductEligibilityIndicator_69.getString());
    FIX::FlexibleIndicator FlexibleIndicator_69(false);
    noQuoteEntries_0_1.set(FlexibleIndicator_69);
    Instrument_69.insert(FlexibleIndicator_69.getString());
    FIX::FloorPrice FloorPrice_69;
    FloorPrice_69.setString("9493341");
    noQuoteEntries_0_1.set(FloorPrice_69);
    Instrument_69.insert(FloorPrice_69.getString());
    FIX::FlowScheduleType FlowScheduleType_69(4);
    noQuoteEntries_0_1.set(FlowScheduleType_69);
    Instrument_69.insert(FlowScheduleType_69.getString());
    FIX::InstrRegistry InstrRegistry_69("STRING_1587017095");
    noQuoteEntries_0_1.set(InstrRegistry_69);
    Instrument_69.insert(InstrRegistry_69.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_69('1');
    noQuoteEntries_0_1.set(InstrmtAssignmentMethod_69);
    Instrument_69.insert(InstrmtAssignmentMethod_69.getString());
    FIX::InterestAccrualDate InterestAccrualDate_69("LOCALMKTDATE_969419529");
    noQuoteEntries_0_1.set(InterestAccrualDate_69);
    Instrument_69.insert(InterestAccrualDate_69.getString());
    FIX::IssueDate IssueDate_69("LOCALMKTDATE_1987933334");
    noQuoteEntries_0_1.set(IssueDate_69);
    Instrument_69.insert(IssueDate_69.getString());
    FIX::Issuer Issuer_69("STRING_1376587804");
    noQuoteEntries_0_1.set(Issuer_69);
    Instrument_69.insert(Issuer_69.getString());
    FIX::ListMethod ListMethod_69(0);
    noQuoteEntries_0_1.set(ListMethod_69);
    Instrument_69.insert(ListMethod_69.getString());
    FIX::LocaleOfIssue LocaleOfIssue_69("STRING_1692263531");
    noQuoteEntries_0_1.set(LocaleOfIssue_69);
    Instrument_69.insert(LocaleOfIssue_69.getString());
    FIX::MaturityDate MaturityDate_69("LOCALMKTDATE_1697541397");
    noQuoteEntries_0_1.set(MaturityDate_69);
    Instrument_69.insert(MaturityDate_69.getString());
    FIX::MaturityMonthYear MaturityMonthYear_69("MONTHYEAR_1291707172");
    noQuoteEntries_0_1.set(MaturityMonthYear_69);
    Instrument_69.insert(MaturityMonthYear_69.getString());
    FIX::MaturityTime MaturityTime_69("TZTIMEONLY_412963293");
    noQuoteEntries_0_1.set(MaturityTime_69);
    Instrument_69.insert(MaturityTime_69.getString());
    FIX::MinPriceIncrement MinPriceIncrement_69;
    MinPriceIncrement_69.setString("17322921");
    noQuoteEntries_0_1.set(MinPriceIncrement_69);
    Instrument_69.insert(MinPriceIncrement_69.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
    MinPriceIncrementAmount_69.setString("3458450");
    noQuoteEntries_0_1.set(MinPriceIncrementAmount_69);
    Instrument_69.insert(MinPriceIncrementAmount_69.getString());
    FIX::NTPositionLimit NTPositionLimit_69(1451501974);
    noQuoteEntries_0_1.set(NTPositionLimit_69);
    Instrument_69.insert(NTPositionLimit_69.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
    NotionalPercentageOutstanding_69.setString("26.280000");
    noQuoteEntries_0_1.set(NotionalPercentageOutstanding_69);
    Instrument_69.insert(NotionalPercentageOutstanding_69.getString());
    FIX::OptAttribute OptAttribute_69('3');
    noQuoteEntries_0_1.set(OptAttribute_69);
    Instrument_69.insert(OptAttribute_69.getString());
    FIX::OptPayoutAmount OptPayoutAmount_69;
    OptPayoutAmount_69.setString("6098712");
    noQuoteEntries_0_1.set(OptPayoutAmount_69);
    Instrument_69.insert(OptPayoutAmount_69.getString());
    FIX::OptPayoutType OptPayoutType_69(3);
    noQuoteEntries_0_1.set(OptPayoutType_69);
    Instrument_69.insert(OptPayoutType_69.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
    OriginalNotionalPercentageOutstanding_69.setString("29.600000");
    noQuoteEntries_0_1.set(OriginalNotionalPercentageOutstanding_69);
    Instrument_69.insert(OriginalNotionalPercentageOutstanding_69.getString());
    FIX::Pool Pool_69("STRING_1246955189");
    noQuoteEntries_0_1.set(Pool_69);
    Instrument_69.insert(Pool_69.getString());
    FIX::PositionLimit PositionLimit_69(1406694519);
    noQuoteEntries_0_1.set(PositionLimit_69);
    Instrument_69.insert(PositionLimit_69.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_69("STRING_PCTPAR");
    noQuoteEntries_0_1.set(PriceQuoteMethod_69);
    Instrument_69.insert(PriceQuoteMethod_69.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_69("STRING_1710478557");
    noQuoteEntries_0_1.set(PriceUnitOfMeasure_69);
    Instrument_69.insert(PriceUnitOfMeasure_69.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
    PriceUnitOfMeasureQty_69.setString("11046050");
    noQuoteEntries_0_1.set(PriceUnitOfMeasureQty_69);
    Instrument_69.insert(PriceUnitOfMeasureQty_69.getString());
    FIX::Product Product_71(8);
    noQuoteEntries_0_1.set(Product_71);
    Instrument_69.insert(Product_71.getString());
    FIX::ProductComplex ProductComplex_69("STRING_1348983385");
    noQuoteEntries_0_1.set(ProductComplex_69);
    Instrument_69.insert(ProductComplex_69.getString());
    FIX::PutOrCall PutOrCall_69(1);
    noQuoteEntries_0_1.set(PutOrCall_69);
    Instrument_69.insert(PutOrCall_69.getString());
    FIX::RedemptionDate RedemptionDate_69("LOCALMKTDATE_68619571");
    noQuoteEntries_0_1.set(RedemptionDate_69);
    Instrument_69.insert(RedemptionDate_69.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_69("STRING_1055270606");
    noQuoteEntries_0_1.set(RepoCollateralSecurityType_69);
    Instrument_69.insert(RepoCollateralSecurityType_69.getString());
    FIX::RepurchaseRate RepurchaseRate_69;
    RepurchaseRate_69.setString("95.430000");
    noQuoteEntries_0_1.set(RepurchaseRate_69);
    Instrument_69.insert(RepurchaseRate_69.getString());
    FIX::RepurchaseTerm RepurchaseTerm_69(1017953709);
    noQuoteEntries_0_1.set(RepurchaseTerm_69);
    Instrument_69.insert(RepurchaseTerm_69.getString());
    FIX::RestructuringType RestructuringType_69("STRING_FR");
    noQuoteEntries_0_1.set(RestructuringType_69);
    Instrument_69.insert(RestructuringType_69.getString());
    FIX::SecurityDesc SecurityDesc_69("STRING_739482990");
    noQuoteEntries_0_1.set(SecurityDesc_69);
    Instrument_69.insert(SecurityDesc_69.getString());
    FIX::SecurityExchange SecurityExchange_69("EXCHANGE_514898285");
    noQuoteEntries_0_1.set(SecurityExchange_69);
    Instrument_69.insert(SecurityExchange_69.getString());
    FIX::SecurityGroup SecurityGroup_69("STRING_1925831282");
    noQuoteEntries_0_1.set(SecurityGroup_69);
    Instrument_69.insert(SecurityGroup_69.getString());
    FIX::SecurityID SecurityID_69("STRING_579932676");
    noQuoteEntries_0_1.set(SecurityID_69);
    Instrument_69.insert(SecurityID_69.getString());
    FIX::SecurityIDSource SecurityIDSource_69("STRING_B");
    noQuoteEntries_0_1.set(SecurityIDSource_69);
    Instrument_69.insert(SecurityIDSource_69.getString());
    FIX::SecurityStatus SecurityStatus_69("STRING_1");
    noQuoteEntries_0_1.set(SecurityStatus_69);
    Instrument_69.insert(SecurityStatus_69.getString());
    FIX::SecuritySubType SecuritySubType_70("STRING_124712559");
    noQuoteEntries_0_1.set(SecuritySubType_70);
    Instrument_69.insert(SecuritySubType_70.getString());
    FIX::SecurityType SecurityType_71("STRING_CS");
    noQuoteEntries_0_1.set(SecurityType_71);
    Instrument_69.insert(SecurityType_71.getString());
    FIX::Seniority Seniority_69("STRING_SR");
    noQuoteEntries_0_1.set(Seniority_69);
    Instrument_69.insert(Seniority_69.getString());
    FIX::SettlMethod SettlMethod_69('P');
    noQuoteEntries_0_1.set(SettlMethod_69);
    Instrument_69.insert(SettlMethod_69.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_69("STRING_1026352323");
    noQuoteEntries_0_1.set(SettleOnOpenFlag_69);
    Instrument_69.insert(SettleOnOpenFlag_69.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_69("STRING_1285146517");
    noQuoteEntries_0_1.set(StateOrProvinceOfIssue_69);
    Instrument_69.insert(StateOrProvinceOfIssue_69.getString());
    FIX::StrikeCurrency StrikeCurrency_69("EUR");
    noQuoteEntries_0_1.set(StrikeCurrency_69);
    Instrument_69.insert(StrikeCurrency_69.getString());
    FIX::StrikeMultiplier StrikeMultiplier_69;
    StrikeMultiplier_69.setString("13171101");
    noQuoteEntries_0_1.set(StrikeMultiplier_69);
    Instrument_69.insert(StrikeMultiplier_69.getString());
    FIX::StrikePrice StrikePrice_69;
    StrikePrice_69.setString("4515654");
    noQuoteEntries_0_1.set(StrikePrice_69);
    Instrument_69.insert(StrikePrice_69.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_69(5);
    noQuoteEntries_0_1.set(StrikePriceBoundaryMethod_69);
    Instrument_69.insert(StrikePriceBoundaryMethod_69.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
    StrikePriceBoundaryPrecision_69.setString("95.090000");
    noQuoteEntries_0_1.set(StrikePriceBoundaryPrecision_69);
    Instrument_69.insert(StrikePriceBoundaryPrecision_69.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_69(4);
    noQuoteEntries_0_1.set(StrikePriceDeterminationMethod_69);
    Instrument_69.insert(StrikePriceDeterminationMethod_69.getString());
    FIX::StrikeValue StrikeValue_69;
    StrikeValue_69.setString("12970109");
    noQuoteEntries_0_1.set(StrikeValue_69);
    Instrument_69.insert(StrikeValue_69.getString());
    FIX::Symbol Symbol_69("STRING_1849975977");
    noQuoteEntries_0_1.set(Symbol_69);
    Instrument_69.insert(Symbol_69.getString());
    FIX::SymbolSfx SymbolSfx_69("STRING_WI");
    noQuoteEntries_0_1.set(SymbolSfx_69);
    Instrument_69.insert(SymbolSfx_69.getString());
    FIX::TimeUnit TimeUnit_69("STRING_Mo");
    noQuoteEntries_0_1.set(TimeUnit_69);
    Instrument_69.insert(TimeUnit_69.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_69(3);
    noQuoteEntries_0_1.set(UnderlyingPriceDeterminationMethod_69);
    Instrument_69.insert(UnderlyingPriceDeterminationMethod_69.getString());
    FIX::UnitOfMeasure UnitOfMeasure_69("STRING_Bu");
    noQuoteEntries_0_1.set(UnitOfMeasure_69);
    Instrument_69.insert(UnitOfMeasure_69.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
    UnitOfMeasureQty_69.setString("13822816");
    noQuoteEntries_0_1.set(UnitOfMeasureQty_69);
    Instrument_69.insert(UnitOfMeasureQty_69.getString());
    FIX::ValuationMethod ValuationMethod_69("STRING_EQTY");
    noQuoteEntries_0_1.set(ValuationMethod_69);
    Instrument_69.insert(ValuationMethod_69.getString());
    all_values.push_back(Instrument_69);
    all_compo_names.insert("..NoQuoteEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_149;
      FIX::ComplexEventCondition ComplexEventCondition_149(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventCondition_149.getString());
      FIX::ComplexEventPrice ComplexEventPrice_149;
      ComplexEventPrice_149.setString("20155886");
      noComplexEvents_1_1_0.set(ComplexEventPrice_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPrice_149.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_149(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryMethod_149.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_149;
      ComplexEventPriceBoundaryPrecision_149.setString("5.140000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryPrecision_149.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_149(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceTimeType_149.getString());
      FIX::ComplexEventType ComplexEventType_149(5);
      noComplexEvents_1_1_0.set(ComplexEventType_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventType_149.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_149;
      ComplexOptPayoutAmount_149.setString("18541631");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexOptPayoutAmount_149.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_149);
      all_compo_names.insert("..NoQuoteEntries...NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_286;
        FIX::ComplexEventEndDate ComplexEventEndDate_286(FIX::UTCTIMESTAMP(5, 54, 28, 10, 2, 2006));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_286);
        ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventEndDate_286.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_286(FIX::UTCTIMESTAMP(9, 35, 16, 16, 5, 2015));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_286);
        ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventStartDate_286.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_286);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
          FIX::ComplexEventEndTime ComplexEventEndTime_579(FIX::UTCTIMEONLY(0, 46, 40));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_579);
          ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventEndTime_579.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_579(FIX::UTCTIMEONLY(19, 45, 35));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_579);
          ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventStartTime_579.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
          FIX::ComplexEventEndTime ComplexEventEndTime_580(FIX::UTCTIMEONLY(16, 24, 45));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventEndTime_580.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_580(FIX::UTCTIMEONLY(7, 27, 11));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventStartTime_580.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
          FIX::ComplexEventEndTime ComplexEventEndTime_581(FIX::UTCTIMEONLY(12, 5, 7));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_581);
          ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventEndTime_581.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_581(FIX::UTCTIMEONLY(11, 13, 36));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_581);
          ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventStartTime_581.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_287;
        FIX::ComplexEventEndDate ComplexEventEndDate_287(FIX::UTCTIMESTAMP(4, 44, 56, 9, 1, 2010));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventEndDate_287.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_287(FIX::UTCTIMESTAMP(0, 8, 34, 11, 8, 2008));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventStartDate_287.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_287);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
          FIX::ComplexEventEndTime ComplexEventEndTime_582(FIX::UTCTIMEONLY(16, 39, 3));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_582);
          ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventEndTime_582.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_582(FIX::UTCTIMEONLY(11, 30, 13));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_582);
          ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventStartTime_582.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
          FIX::ComplexEventEndTime ComplexEventEndTime_583(FIX::UTCTIMEONLY(11, 10, 33));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_583);
          ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventEndTime_583.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_583(FIX::UTCTIMEONLY(21, 39, 2));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_583);
          ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventStartTime_583.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
          FIX::ComplexEventEndTime ComplexEventEndTime_584(FIX::UTCTIMEONLY(23, 47, 5));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_584);
          ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventEndTime_584.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_584(FIX::UTCTIMEONLY(23, 28, 3));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_584);
          ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventStartTime_584.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_288;
        FIX::ComplexEventEndDate ComplexEventEndDate_288(FIX::UTCTIMESTAMP(4, 37, 15, 8, 2, 2002));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventEndDate_288.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_288(FIX::UTCTIMESTAMP(10, 9, 54, 19, 1, 2016));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventStartDate_288.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_288);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
          FIX::ComplexEventEndTime ComplexEventEndTime_585(FIX::UTCTIMEONLY(3, 55, 40));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_585);
          ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventEndTime_585.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_585(FIX::UTCTIMEONLY(8, 19, 48));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_585);
          ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventStartTime_585.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
          FIX::ComplexEventEndTime ComplexEventEndTime_586(FIX::UTCTIMEONLY(10, 27, 51));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_586);
          ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventEndTime_586.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_586(FIX::UTCTIMEONLY(18, 19, 26));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_586);
          ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventStartTime_586.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_150;
      FIX::ComplexEventCondition ComplexEventCondition_150(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexEventCondition_150.getString());
      FIX::ComplexEventPrice ComplexEventPrice_150;
      ComplexEventPrice_150.setString("20310840");
      noComplexEvents_1_1_1.set(ComplexEventPrice_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexEventPrice_150.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_150(4);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryMethod_150.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
      ComplexEventPriceBoundaryPrecision_150.setString("43.240000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryPrecision_150.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_150(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceTimeType_150.getString());
      FIX::ComplexEventType ComplexEventType_150(6);
      noComplexEvents_1_1_1.set(ComplexEventType_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexEventType_150.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
      ComplexOptPayoutAmount_150.setString("15855550");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_150);
      ComplexEvents_NoComplexEvents_150.insert(ComplexOptPayoutAmount_150.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_150);
      all_compo_names.insert("..NoQuoteEntries...NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_289;
        FIX::ComplexEventEndDate ComplexEventEndDate_289(FIX::UTCTIMESTAMP(20, 32, 10, 4, 2, 2007));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_289);
        ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventEndDate_289.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_289(FIX::UTCTIMESTAMP(20, 50, 11, 14, 3, 2004));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_289);
        ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventStartDate_289.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_289);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
          FIX::ComplexEventEndTime ComplexEventEndTime_587(FIX::UTCTIMEONLY(8, 1, 4));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_587);
          ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventEndTime_587.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_587(FIX::UTCTIMEONLY(11, 15, 41));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_587);
          ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventStartTime_587.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
          FIX::ComplexEventEndTime ComplexEventEndTime_588(FIX::UTCTIMEONLY(19, 37, 9));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_588);
          ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventEndTime_588.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_588(FIX::UTCTIMEONLY(10, 43, 46));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_588);
          ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventStartTime_588.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_290;
        FIX::ComplexEventEndDate ComplexEventEndDate_290(FIX::UTCTIMESTAMP(19, 18, 3, 8, 12, 2004));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_290);
        ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventEndDate_290.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_290(FIX::UTCTIMESTAMP(12, 40, 26, 2, 8, 2000));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_290);
        ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventStartDate_290.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_290);
        all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
          FIX::ComplexEventEndTime ComplexEventEndTime_589(FIX::UTCTIMEONLY(20, 13, 23));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_589);
          ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventEndTime_589.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_589(FIX::UTCTIMEONLY(0, 31, 13));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_589);
          ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventStartTime_589.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
          FIX::ComplexEventEndTime ComplexEventEndTime_590(FIX::UTCTIMEONLY(14, 50, 57));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_590);
          ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventEndTime_590.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_590(FIX::UTCTIMEONLY(4, 33, 4));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_590);
          ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventStartTime_590.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
          FIX::ComplexEventEndTime ComplexEventEndTime_591(FIX::UTCTIMEONLY(8, 22, 53));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_591);
          ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventEndTime_591.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_591(FIX::UTCTIMEONLY(2, 51, 35));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_591);
          ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventStartTime_591.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);
          all_compo_names.insert("..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_140;
      FIX::EventDate EventDate_140("LOCALMKTDATE_546278244");
      noEvents_1_1_0.set(EventDate_140);
      EvntGrp_NoEvents_140.insert(EventDate_140.getString());
      FIX::EventPx EventPx_140;
      EventPx_140.setString("8328156");
      noEvents_1_1_0.set(EventPx_140);
      EvntGrp_NoEvents_140.insert(EventPx_140.getString());
      FIX::EventText EventText_140("STRING_1230867412");
      noEvents_1_1_0.set(EventText_140);
      EvntGrp_NoEvents_140.insert(EventText_140.getString());
      FIX::EventTime EventTime_140(FIX::UTCTIMESTAMP(13, 4, 42, 26, 6, 2016));
      noEvents_1_1_0.set(EventTime_140);
      EvntGrp_NoEvents_140.insert(EventTime_140.getString());
      FIX::EventType EventType_140(15);
      noEvents_1_1_0.set(EventType_140);
      EvntGrp_NoEvents_140.insert(EventType_140.getString());
      all_values.push_back(EvntGrp_NoEvents_140);
      all_compo_names.insert("..NoQuoteEntries...NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_144;
      FIX::InstrumentPartyID InstrumentPartyID_144("STRING_1565182889");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyID_144.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_144('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyIDSource_144.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_144(944261425);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyRole_144.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_144);
      all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
        FIX::InstrumentPartySubID InstrumentPartySubID_289("STRING_809847830");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_289);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubID_289.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_289(852748575);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_289);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubIDType_289.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
        FIX::InstrumentPartySubID InstrumentPartySubID_290("STRING_1138192453");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_290);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubID_290.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_290(1110481554);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_290);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubIDType_290.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
        all_compo_names.insert("..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_129;
      FIX::SecurityAltID SecurityAltID_129("STRING_1578294497");
      noSecurityAltID_1_1_0.set(SecurityAltID_129);
      SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltID_129.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_129("STRING_240230504");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_129);
      SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltIDSource_129.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);
      all_compo_names.insert("..NoQuoteEntries...NoSecurityAltID");

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_130;
      FIX::SecurityAltID SecurityAltID_130("STRING_1053421284");
      noSecurityAltID_1_1_1.set(SecurityAltID_130);
      SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltID_130.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_130("STRING_1514432252");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_130);
      SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltIDSource_130.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);
      all_compo_names.insert("..NoQuoteEntries...NoSecurityAltID");

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_138;
    FIX::SecurityXML SecurityXML_139("XMLDATA_598242517");
    noQuoteEntries_0_1.set(SecurityXML_139);
    FIX::SecurityXMLLen SecurityXMLLen_69(889875645);
    noQuoteEntries_0_1.set(SecurityXMLLen_69);
    FIX::SecurityXMLSchema SecurityXMLSchema_69("STRING_749983958");
    noQuoteEntries_0_1.set(SecurityXMLSchema_69);
    SecurityXML_138.insert(SecurityXMLSchema_69.getString());
    all_values.push_back(SecurityXML_138);
    all_compo_names.insert("..NoQuoteEntries..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_103;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_103("DATA_1182452480");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuer_103.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_103(1200816644);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuerLen_103.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_103("DATA_757333604");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDesc_103.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_103(2015268082);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDescLen_103.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
      UnderlyingAdjustedQuantity_103.setString("2842004");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_103);
      UnderlyingInstrument_103.insert(UnderlyingAdjustedQuantity_103.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
      UnderlyingAllocationPercent_103.setString("34.270000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_103);
      UnderlyingInstrument_103.insert(UnderlyingAllocationPercent_103.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
      UnderlyingAttachmentPoint_103.setString("43.430000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingAttachmentPoint_103.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_103("STRING_1001551592");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_103);
      UnderlyingInstrument_103.insert(UnderlyingCFICode_103.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_103("STRING_1978892330");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_103);
      UnderlyingInstrument_103.insert(UnderlyingCPProgram_103.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_103("STRING_1458460697");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_103);
      UnderlyingInstrument_103.insert(UnderlyingCPRegType_103.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_103;
      UnderlyingCapValue_103.setString("7226267");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCapValue_103.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
      UnderlyingCashAmount_103.setString("11576350");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_103);
      UnderlyingInstrument_103.insert(UnderlyingCashAmount_103.getString());
      FIX::UnderlyingCashType UnderlyingCashType_103("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_103);
      UnderlyingInstrument_103.insert(UnderlyingCashType_103.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
      UnderlyingContractMultiplier_103.setString("18342051");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplier_103.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_103(575334241);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplierUnit_103.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_103("COUNTRY_1372065611");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingCountryOfIssue_103.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_103("LOCALMKTDATE_630982963");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponPaymentDate_103.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
      UnderlyingCouponRate_103.setString("96.080000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponRate_103.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_103("STRING_34429793");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_103);
      UnderlyingInstrument_103.insert(UnderlyingCreditRating_103.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_103("GBP");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrency_103.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
      UnderlyingCurrentValue_103.setString("11449113");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrentValue_103.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
      UnderlyingDetachmentPoint_103.setString("27.980000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingDetachmentPoint_103.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
      UnderlyingDirtyPrice_103.setString("9719229");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingDirtyPrice_103.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
      UnderlyingEndPrice_103.setString("13851418");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingEndPrice_103.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_103;
      UnderlyingEndValue_103.setString("6647804");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_103);
      UnderlyingInstrument_103.insert(UnderlyingEndValue_103.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_103(338871515);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_103);
      UnderlyingInstrument_103.insert(UnderlyingExerciseStyle_103.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_103;
      UnderlyingFXRate_103.setString("19833843");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRate_103.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_103('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRateCalc_103.getString());
      FIX::UnderlyingFactor UnderlyingFactor_103;
      UnderlyingFactor_103.setString("10888554");
      noUnderlyings_1_1_0.set(UnderlyingFactor_103);
      UnderlyingInstrument_103.insert(UnderlyingFactor_103.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_103(46956081);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_103);
      UnderlyingInstrument_103.insert(UnderlyingFlowScheduleType_103.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_103("STRING_589624912");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_103);
      UnderlyingInstrument_103.insert(UnderlyingInstrRegistry_103.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_103("LOCALMKTDATE_142188469");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_103);
      UnderlyingInstrument_103.insert(UnderlyingIssueDate_103.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_103("STRING_804289685");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(UnderlyingIssuer_103.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_103("STRING_457409346");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingLocaleOfIssue_103.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_103("LOCALMKTDATE_426388877");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityDate_103.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_103("MONTHYEAR_1408583113");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityMonthYear_103.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_103("TZTIMEONLY_1771033690");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityTime_103.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
      UnderlyingNotionalPercentageOutstanding_103.setString("4.690000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_103('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_103);
      UnderlyingInstrument_103.insert(UnderlyingOptAttribute_103.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
      UnderlyingOriginalNotionalPercentageOutstanding_103.setString("7.390000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingOriginalNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_103("STRING_3083602");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasure_103.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
      UnderlyingPriceUnitOfMeasureQty_103.setString("2501431");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasureQty_103.getString());
      FIX::UnderlyingProduct UnderlyingProduct_103(1135717403);
      noUnderlyings_1_1_0.set(UnderlyingProduct_103);
      UnderlyingInstrument_103.insert(UnderlyingProduct_103.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_103(1837288788);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_103);
      UnderlyingInstrument_103.insert(UnderlyingPutOrCall_103.getString());
      FIX::UnderlyingPx UnderlyingPx_103;
      UnderlyingPx_103.setString("8254773");
      noUnderlyings_1_1_0.set(UnderlyingPx_103);
      UnderlyingInstrument_103.insert(UnderlyingPx_103.getString());
      FIX::UnderlyingQty UnderlyingQty_103;
      UnderlyingQty_103.setString("3602993");
      noUnderlyings_1_1_0.set(UnderlyingQty_103);
      UnderlyingInstrument_103.insert(UnderlyingQty_103.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_103("LOCALMKTDATE_320788104");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_103);
      UnderlyingInstrument_103.insert(UnderlyingRedemptionDate_103.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_103("STRING_1228396996");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingRepoCollateralSecurityType_103.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
      UnderlyingRepurchaseRate_103.setString("91.590000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseRate_103.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_103(1804519642);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseTerm_103.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_103("STRING_622025410");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_103);
      UnderlyingInstrument_103.insert(UnderlyingRestructuringType_103.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_103("STRING_1539640506");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityDesc_103.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_103("EXCHANGE_1415878793");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityExchange_103.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_103("STRING_1593948322");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityID_103.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_103("STRING_777298710");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityIDSource_103.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_103("STRING_2080659228");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecuritySubType_103.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_103("STRING_1932819837");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityType_103.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_103("STRING_613199430");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_103);
      UnderlyingInstrument_103.insert(UnderlyingSeniority_103.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_103("STRING_1487831660");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlMethod_103.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_103(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlementType_103.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_103;
      UnderlyingStartValue_103.setString("6601555");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_103);
      UnderlyingInstrument_103.insert(UnderlyingStartValue_103.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_103("STRING_2077456572");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingStateOrProvinceOfIssue_103.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_103("CHF");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikeCurrency_103.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
      UnderlyingStrikePrice_103.setString("3873822");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikePrice_103.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_103("STRING_1442769010");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbol_103.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_103("STRING_725544662");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbolSfx_103.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_103("STRING_10932313");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingTimeUnit_103.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_103("STRING_723225831");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasure_103.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
      UnderlyingUnitOfMeasureQty_103.setString("19655364");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasureQty_103.getString());
      all_values.push_back(UnderlyingInstrument_103);
      all_compo_names.insert("..NoQuoteEntries..NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_199("STRING_726309434");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltID_199.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_199("STRING_68195956");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltIDSource_199.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_200("STRING_81176807");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltID_200.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_200("STRING_416114574");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltIDSource_200.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_201("STRING_893673344");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltID_201.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_201("STRING_441476173");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltIDSource_201.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
        FIX::UnderlyingStipType UnderlyingStipType_214("STRING_2122070340");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_214);
        UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipType_214.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_214("STRING_836205332");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_214);
        UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipValue_214.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_208("STRING_596612103");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyID_208.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_208('2');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyIDSource_208.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_208(1809817466);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyRole_208.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_421("STRING_1005660901");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_421);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubID_421.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_421(1742993046);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_421);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubIDType_421.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_422("STRING_1975896614");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_422);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubID_422.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_422(1618860331);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_422);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubIDType_422.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_423("STRING_1083341058");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_423);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubID_423.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_423(702604629);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_423);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubIDType_423.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_104;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_104("DATA_131532195");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuer_104.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_104(1013313982);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuerLen_104.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_104("DATA_1718984762");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDesc_104.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_104(1595977392);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDescLen_104.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
      UnderlyingAdjustedQuantity_104.setString("14006962");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_104);
      UnderlyingInstrument_104.insert(UnderlyingAdjustedQuantity_104.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
      UnderlyingAllocationPercent_104.setString("1.240000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_104);
      UnderlyingInstrument_104.insert(UnderlyingAllocationPercent_104.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
      UnderlyingAttachmentPoint_104.setString("84.060000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingAttachmentPoint_104.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_104("STRING_1411628566");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_104);
      UnderlyingInstrument_104.insert(UnderlyingCFICode_104.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_104("STRING_1737495955");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_104);
      UnderlyingInstrument_104.insert(UnderlyingCPProgram_104.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_104("STRING_2139574863");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_104);
      UnderlyingInstrument_104.insert(UnderlyingCPRegType_104.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_104;
      UnderlyingCapValue_104.setString("3570879");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCapValue_104.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
      UnderlyingCashAmount_104.setString("3163217");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_104);
      UnderlyingInstrument_104.insert(UnderlyingCashAmount_104.getString());
      FIX::UnderlyingCashType UnderlyingCashType_104("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_104);
      UnderlyingInstrument_104.insert(UnderlyingCashType_104.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
      UnderlyingContractMultiplier_104.setString("4382647");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplier_104.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_104(732436316);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplierUnit_104.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_104("COUNTRY_953960515");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingCountryOfIssue_104.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_104("LOCALMKTDATE_879740952");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponPaymentDate_104.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
      UnderlyingCouponRate_104.setString("89.940000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponRate_104.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_104("STRING_928547207");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_104);
      UnderlyingInstrument_104.insert(UnderlyingCreditRating_104.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_104("CAN");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrency_104.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
      UnderlyingCurrentValue_104.setString("15251593");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrentValue_104.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
      UnderlyingDetachmentPoint_104.setString("84.750000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingDetachmentPoint_104.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
      UnderlyingDirtyPrice_104.setString("15256114");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingDirtyPrice_104.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
      UnderlyingEndPrice_104.setString("15682360");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingEndPrice_104.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_104;
      UnderlyingEndValue_104.setString("8024857");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_104);
      UnderlyingInstrument_104.insert(UnderlyingEndValue_104.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_104(1121120883);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_104);
      UnderlyingInstrument_104.insert(UnderlyingExerciseStyle_104.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_104;
      UnderlyingFXRate_104.setString("13966490");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRate_104.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_104('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRateCalc_104.getString());
      FIX::UnderlyingFactor UnderlyingFactor_104;
      UnderlyingFactor_104.setString("569782");
      noUnderlyings_1_1_1.set(UnderlyingFactor_104);
      UnderlyingInstrument_104.insert(UnderlyingFactor_104.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_104(2099253683);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_104);
      UnderlyingInstrument_104.insert(UnderlyingFlowScheduleType_104.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_104("STRING_405394607");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_104);
      UnderlyingInstrument_104.insert(UnderlyingInstrRegistry_104.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_104("LOCALMKTDATE_1070292276");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_104);
      UnderlyingInstrument_104.insert(UnderlyingIssueDate_104.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_104("STRING_1670754797");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(UnderlyingIssuer_104.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_104("STRING_2001371999");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingLocaleOfIssue_104.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_104("LOCALMKTDATE_323504881");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityDate_104.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_104("MONTHYEAR_537541273");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityMonthYear_104.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_104("TZTIMEONLY_27926757");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityTime_104.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
      UnderlyingNotionalPercentageOutstanding_104.setString("34.480000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_104('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_104);
      UnderlyingInstrument_104.insert(UnderlyingOptAttribute_104.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
      UnderlyingOriginalNotionalPercentageOutstanding_104.setString("79.720000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingOriginalNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_104("STRING_2092221419");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasure_104.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
      UnderlyingPriceUnitOfMeasureQty_104.setString("4438753");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasureQty_104.getString());
      FIX::UnderlyingProduct UnderlyingProduct_104(80305143);
      noUnderlyings_1_1_1.set(UnderlyingProduct_104);
      UnderlyingInstrument_104.insert(UnderlyingProduct_104.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_104(383002549);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_104);
      UnderlyingInstrument_104.insert(UnderlyingPutOrCall_104.getString());
      FIX::UnderlyingPx UnderlyingPx_104;
      UnderlyingPx_104.setString("11763116");
      noUnderlyings_1_1_1.set(UnderlyingPx_104);
      UnderlyingInstrument_104.insert(UnderlyingPx_104.getString());
      FIX::UnderlyingQty UnderlyingQty_104;
      UnderlyingQty_104.setString("10342656");
      noUnderlyings_1_1_1.set(UnderlyingQty_104);
      UnderlyingInstrument_104.insert(UnderlyingQty_104.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_104("LOCALMKTDATE_1262743501");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_104);
      UnderlyingInstrument_104.insert(UnderlyingRedemptionDate_104.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_104("STRING_498166985");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingRepoCollateralSecurityType_104.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
      UnderlyingRepurchaseRate_104.setString("28.650000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseRate_104.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_104(831206138);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseTerm_104.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_104("STRING_213961004");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_104);
      UnderlyingInstrument_104.insert(UnderlyingRestructuringType_104.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_104("STRING_1340488528");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityDesc_104.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_104("EXCHANGE_628030965");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityExchange_104.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_104("STRING_1739572490");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityID_104.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_104("STRING_761240967");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityIDSource_104.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_104("STRING_1430516694");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecuritySubType_104.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_104("STRING_713209725");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityType_104.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_104("STRING_10406373");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_104);
      UnderlyingInstrument_104.insert(UnderlyingSeniority_104.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_104("STRING_1704379106");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlMethod_104.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_104(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlementType_104.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_104;
      UnderlyingStartValue_104.setString("21096600");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_104);
      UnderlyingInstrument_104.insert(UnderlyingStartValue_104.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_104("STRING_2109773713");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingStateOrProvinceOfIssue_104.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_104("USD");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikeCurrency_104.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
      UnderlyingStrikePrice_104.setString("19636620");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikePrice_104.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_104("STRING_16501528");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbol_104.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_104("STRING_22988832");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbolSfx_104.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_104("STRING_1991588821");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingTimeUnit_104.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_104("STRING_1751634976");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasure_104.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
      UnderlyingUnitOfMeasureQty_104.setString("1505424");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasureQty_104.getString());
      all_values.push_back(UnderlyingInstrument_104);
      all_compo_names.insert("..NoQuoteEntries..NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_202("STRING_1696372747");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltID_202.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_202("STRING_594417735");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltIDSource_202.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_203("STRING_2091911936");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltID_203.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_203("STRING_2079375297");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltIDSource_203.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_204("STRING_1770729374");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_204);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltID_204.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_204("STRING_978693946");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_204);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltIDSource_204.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
        FIX::UnderlyingStipType UnderlyingStipType_215("STRING_121412711");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_215);
        UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipType_215.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_215("STRING_794023163");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_215);
        UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipValue_215.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
        FIX::UnderlyingStipType UnderlyingStipType_216("STRING_2025841288");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_216);
        UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipType_216.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_216("STRING_335373715");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_216);
        UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipValue_216.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
        FIX::UnderlyingStipType UnderlyingStipType_217("STRING_2134511691");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipType_217);
        UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipType_217.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_217("STRING_506388606");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipValue_217);
        UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipValue_217.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_209("STRING_748269011");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyID_209.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_209('1');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyIDSource_209.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_209(640672283);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyRole_209.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_424("STRING_1493800758");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_424);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubID_424.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_424(1410860302);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_424);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubIDType_424.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_425("STRING_720851793");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_425);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubID_425.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_425(1456090823);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_425);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubIDType_425.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_426("STRING_1103856949");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_426);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubID_426.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_426(206299352);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_426);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubIDType_426.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_105;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_105("DATA_1272269239");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuer_105.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_105(1120358477);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuerLen_105.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_105("DATA_229288184");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDesc_105.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_105(1116374412);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDescLen_105.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
      UnderlyingAdjustedQuantity_105.setString("7245098");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_105);
      UnderlyingInstrument_105.insert(UnderlyingAdjustedQuantity_105.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
      UnderlyingAllocationPercent_105.setString("5.970000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_105);
      UnderlyingInstrument_105.insert(UnderlyingAllocationPercent_105.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
      UnderlyingAttachmentPoint_105.setString("75.570000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingAttachmentPoint_105.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_105("STRING_273398905");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_105);
      UnderlyingInstrument_105.insert(UnderlyingCFICode_105.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_105("STRING_974248332");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_105);
      UnderlyingInstrument_105.insert(UnderlyingCPProgram_105.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_105("STRING_924925845");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_105);
      UnderlyingInstrument_105.insert(UnderlyingCPRegType_105.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_105;
      UnderlyingCapValue_105.setString("2052905");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCapValue_105.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
      UnderlyingCashAmount_105.setString("5974940");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_105);
      UnderlyingInstrument_105.insert(UnderlyingCashAmount_105.getString());
      FIX::UnderlyingCashType UnderlyingCashType_105("STRING_DIFF");
      noUnderlyings_1_1_2.set(UnderlyingCashType_105);
      UnderlyingInstrument_105.insert(UnderlyingCashType_105.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
      UnderlyingContractMultiplier_105.setString("13999257");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplier_105.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_105(718906769);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplierUnit_105.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_105("COUNTRY_550159306");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingCountryOfIssue_105.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_105("LOCALMKTDATE_1278283345");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponPaymentDate_105.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
      UnderlyingCouponRate_105.setString("4.850000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponRate_105.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_105("STRING_537187350");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_105);
      UnderlyingInstrument_105.insert(UnderlyingCreditRating_105.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_105("GBP");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrency_105.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
      UnderlyingCurrentValue_105.setString("12854563");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrentValue_105.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
      UnderlyingDetachmentPoint_105.setString("36.030000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingDetachmentPoint_105.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
      UnderlyingDirtyPrice_105.setString("16224153");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingDirtyPrice_105.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
      UnderlyingEndPrice_105.setString("20441317");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingEndPrice_105.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_105;
      UnderlyingEndValue_105.setString("9204107");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_105);
      UnderlyingInstrument_105.insert(UnderlyingEndValue_105.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_105(885791979);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_105);
      UnderlyingInstrument_105.insert(UnderlyingExerciseStyle_105.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_105;
      UnderlyingFXRate_105.setString("6174998");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRate_105.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_105('D');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRateCalc_105.getString());
      FIX::UnderlyingFactor UnderlyingFactor_105;
      UnderlyingFactor_105.setString("19896489");
      noUnderlyings_1_1_2.set(UnderlyingFactor_105);
      UnderlyingInstrument_105.insert(UnderlyingFactor_105.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_105(823799243);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_105);
      UnderlyingInstrument_105.insert(UnderlyingFlowScheduleType_105.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_105("STRING_1501287127");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_105);
      UnderlyingInstrument_105.insert(UnderlyingInstrRegistry_105.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_105("LOCALMKTDATE_962523758");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_105);
      UnderlyingInstrument_105.insert(UnderlyingIssueDate_105.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_105("STRING_1053087427");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(UnderlyingIssuer_105.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_105("STRING_470177891");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingLocaleOfIssue_105.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_105("LOCALMKTDATE_1687033564");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityDate_105.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_105("MONTHYEAR_1432918024");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityMonthYear_105.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_105("TZTIMEONLY_1450675448");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityTime_105.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
      UnderlyingNotionalPercentageOutstanding_105.setString("24.690000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_105('2');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_105);
      UnderlyingInstrument_105.insert(UnderlyingOptAttribute_105.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
      UnderlyingOriginalNotionalPercentageOutstanding_105.setString("76.450000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingOriginalNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_105("STRING_18239376");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasure_105.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
      UnderlyingPriceUnitOfMeasureQty_105.setString("8571767");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasureQty_105.getString());
      FIX::UnderlyingProduct UnderlyingProduct_105(2131737436);
      noUnderlyings_1_1_2.set(UnderlyingProduct_105);
      UnderlyingInstrument_105.insert(UnderlyingProduct_105.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_105(1418165081);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_105);
      UnderlyingInstrument_105.insert(UnderlyingPutOrCall_105.getString());
      FIX::UnderlyingPx UnderlyingPx_105;
      UnderlyingPx_105.setString("15760835");
      noUnderlyings_1_1_2.set(UnderlyingPx_105);
      UnderlyingInstrument_105.insert(UnderlyingPx_105.getString());
      FIX::UnderlyingQty UnderlyingQty_105;
      UnderlyingQty_105.setString("5344130");
      noUnderlyings_1_1_2.set(UnderlyingQty_105);
      UnderlyingInstrument_105.insert(UnderlyingQty_105.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_105("LOCALMKTDATE_548964778");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_105);
      UnderlyingInstrument_105.insert(UnderlyingRedemptionDate_105.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_105("STRING_482880373");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingRepoCollateralSecurityType_105.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
      UnderlyingRepurchaseRate_105.setString("4.450000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseRate_105.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_105(186153082);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseTerm_105.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_105("STRING_1464623416");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_105);
      UnderlyingInstrument_105.insert(UnderlyingRestructuringType_105.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_105("STRING_209573158");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityDesc_105.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_105("EXCHANGE_1760246685");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityExchange_105.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_105("STRING_939555093");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityID_105.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_105("STRING_106221255");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityIDSource_105.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_105("STRING_533173751");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecuritySubType_105.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_105("STRING_1825347073");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityType_105.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_105("STRING_723721146");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_105);
      UnderlyingInstrument_105.insert(UnderlyingSeniority_105.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_105("STRING_762191639");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlMethod_105.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_105(2);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlementType_105.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_105;
      UnderlyingStartValue_105.setString("15475203");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_105);
      UnderlyingInstrument_105.insert(UnderlyingStartValue_105.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_105("STRING_115995119");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingStateOrProvinceOfIssue_105.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_105("JPY");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikeCurrency_105.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
      UnderlyingStrikePrice_105.setString("5861730");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikePrice_105.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_105("STRING_22102379");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbol_105.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_105("STRING_1886042192");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbolSfx_105.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_105("STRING_2036848459");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingTimeUnit_105.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_105("STRING_1982534849");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasure_105.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
      UnderlyingUnitOfMeasureQty_105.setString("21457249");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasureQty_105.getString());
      all_values.push_back(UnderlyingInstrument_105);
      all_compo_names.insert("..NoQuoteEntries..NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_205("STRING_2000774225");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_205);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltID_205.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_205("STRING_855418020");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_205);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltIDSource_205.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_206("STRING_101736245");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_206);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltID_206.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_206("STRING_1271455658");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_206);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltIDSource_206.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_207("STRING_284017908");
        noUnderlyingSecurityAltID_1_2_2_2.set(UnderlyingSecurityAltID_207);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltID_207.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_207("STRING_636149340");
        noUnderlyingSecurityAltID_1_2_2_2.set(UnderlyingSecurityAltIDSource_207);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltIDSource_207.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
        FIX::UnderlyingStipType UnderlyingStipType_218("STRING_766898282");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_218);
        UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipType_218.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_218("STRING_1707749785");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_218);
        UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipValue_218.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_210("STRING_84038050");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyID_210.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_210('1');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyIDSource_210.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_210(1619336556);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyRole_210.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_427("STRING_2023544198");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_427);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubID_427.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_427(5026659);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_427);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubIDType_427.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_428("STRING_701456568");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_428);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubID_428.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_428(599781697);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_428);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubIDType_428.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_211("STRING_767218298");
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyID_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyID_211.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_211('2');
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyIDSource_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyIDSource_211.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_211(2147302086);
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyRole_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyRole_211.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_429("STRING_704037737");
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubID_429);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubID_429.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_429(452942607);
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_429);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubIDType_429.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_430("STRING_1469386428");
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubID_430);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubID_430.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_430(726140117);
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_430);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubIDType_430.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
          all_compo_names.insert("..NoQuoteEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_2);
    }
    msg.addGroup(noQuoteEntries_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    FIX::TargetPartyID TargetPartyID_13("STRING_1358751239");
    noTargetPartyIDs_0_0.set(TargetPartyID_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyID_13.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_13('5');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyIDSource_13.getString());
    FIX::TargetPartyRole TargetPartyRole_13(189742404);
    noTargetPartyIDs_0_0.set(TargetPartyRole_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyRole_13.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);
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
}
