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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteCancel msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteCancel_0;
  FIX::Account Account_31("STRING_1914555224");
  msg.set(Account_31);
  QuoteCancel_0.insert(Account_31.getString());
  FIX::AccountType AccountType_26(8);
  msg.set(AccountType_26);
  QuoteCancel_0.insert(AccountType_26.getString());
  FIX::AcctIDSource AcctIDSource_24(2);
  msg.set(AcctIDSource_24);
  QuoteCancel_0.insert(AcctIDSource_24.getString());
  FIX::QuoteCancelType QuoteCancelType_1(6);
  msg.set(QuoteCancelType_1);
  QuoteCancel_0.insert(QuoteCancelType_1.getString());
  FIX::QuoteID QuoteID_9("STRING_423466101");
  msg.set(QuoteID_9);
  QuoteCancel_0.insert(QuoteID_9.getString());
  FIX::QuoteMsgID QuoteMsgID_1("STRING_1405773162");
  msg.set(QuoteMsgID_1);
  QuoteCancel_0.insert(QuoteMsgID_1.getString());
  FIX::QuoteReqID QuoteReqID_3("STRING_1330615312");
  msg.set(QuoteReqID_3);
  QuoteCancel_0.insert(QuoteReqID_3.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_3(2);
  msg.set(QuoteResponseLevel_3);
  QuoteCancel_0.insert(QuoteResponseLevel_3.getString());
  FIX::QuoteType QuoteType_5(2);
  msg.set(QuoteType_5);
  QuoteCancel_0.insert(QuoteType_5.getString());
  FIX::TradingSessionID TradingSessionID_65("STRING_5");
  msg.set(TradingSessionID_65);
  QuoteCancel_0.insert(TradingSessionID_65.getString());
  FIX::TradingSessionSubID TradingSessionSubID_65("STRING_7");
  msg.set(TradingSessionSubID_65);
  QuoteCancel_0.insert(TradingSessionSubID_65.getString());
  all_values.push_back(QuoteCancel_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_109;
    FIX::PartyID PartyID_109("STRING_1473817481");
    noPartyIDs_0_0.set(PartyID_109);
    Parties_NoPartyIDs_109.insert(PartyID_109.getString());
    FIX::PartyIDSource PartyIDSource_109('1');
    noPartyIDs_0_0.set(PartyIDSource_109);
    Parties_NoPartyIDs_109.insert(PartyIDSource_109.getString());
    FIX::PartyRole PartyRole_109(55);
    noPartyIDs_0_0.set(PartyRole_109);
    Parties_NoPartyIDs_109.insert(PartyRole_109.getString());
    all_values.push_back(Parties_NoPartyIDs_109);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_219;
      FIX::PartySubID PartySubID_219("STRING_1911661778");
      noPartySubIDs_0_1_0.set(PartySubID_219);
      PtysSubGrp_NoPartySubIDs_219.insert(PartySubID_219.getString());
      FIX::PartySubIDType PartySubIDType_219(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_219);
      PtysSubGrp_NoPartySubIDs_219.insert(PartySubIDType_219.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_219);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_220;
      FIX::PartySubID PartySubID_220("STRING_1714162648");
      noPartySubIDs_0_1_1.set(PartySubID_220);
      PtysSubGrp_NoPartySubIDs_220.insert(PartySubID_220.getString());
      FIX::PartySubIDType PartySubIDType_220(21);
      noPartySubIDs_0_1_1.set(PartySubIDType_220);
      PtysSubGrp_NoPartySubIDs_220.insert(PartySubIDType_220.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_220);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_221;
      FIX::PartySubID PartySubID_221("STRING_1775106076");
      noPartySubIDs_0_1_2.set(PartySubID_221);
      PtysSubGrp_NoPartySubIDs_221.insert(PartySubID_221.getString());
      FIX::PartySubIDType PartySubIDType_221(1);
      noPartySubIDs_0_1_2.set(PartySubIDType_221);
      PtysSubGrp_NoPartySubIDs_221.insert(PartySubIDType_221.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_221);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
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
    FIX::AgreementCurrency AgreementCurrency_17("JPY");
    noQuoteEntries_0_0.set(AgreementCurrency_17);
    FinancingDetails_17.insert(AgreementCurrency_17.getString());
    FIX::AgreementDate AgreementDate_17("LOCALMKTDATE_1186326732");
    noQuoteEntries_0_0.set(AgreementDate_17);
    FinancingDetails_17.insert(AgreementDate_17.getString());
    FIX::AgreementDesc AgreementDesc_17("STRING_761667400");
    noQuoteEntries_0_0.set(AgreementDesc_17);
    FinancingDetails_17.insert(AgreementDesc_17.getString());
    FIX::AgreementID AgreementID_17("STRING_867198311");
    noQuoteEntries_0_0.set(AgreementID_17);
    FinancingDetails_17.insert(AgreementID_17.getString());
    FIX::DeliveryType DeliveryType_17(3);
    noQuoteEntries_0_0.set(DeliveryType_17);
    FinancingDetails_17.insert(DeliveryType_17.getString());
    FIX::EndDate EndDate_17("LOCALMKTDATE_617396003");
    noQuoteEntries_0_0.set(EndDate_17);
    FinancingDetails_17.insert(EndDate_17.getString());
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("79.440000");
    noQuoteEntries_0_0.set(MarginRatio_17);
    FinancingDetails_17.insert(MarginRatio_17.getString());
    FIX::StartDate StartDate_17("LOCALMKTDATE_283883959");
    noQuoteEntries_0_0.set(StartDate_17);
    FinancingDetails_17.insert(StartDate_17.getString());
    FIX::TerminationType TerminationType_17(4);
    noQuoteEntries_0_0.set(TerminationType_17);
    FinancingDetails_17.insert(TerminationType_17.getString());
    all_values.push_back(FinancingDetails_17);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_91;
      FIX::EncodedLegIssuer EncodedLegIssuer_91("DATA_1524182612");
      noLegs_0_1_0.set(EncodedLegIssuer_91);
      InstrumentLeg_91.insert(EncodedLegIssuer_91.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_91(1307716236);
      noLegs_0_1_0.set(EncodedLegIssuerLen_91);
      InstrumentLeg_91.insert(EncodedLegIssuerLen_91.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_91("DATA_1859179694");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_91);
      InstrumentLeg_91.insert(EncodedLegSecurityDesc_91.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_91(707314277);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_91);
      InstrumentLeg_91.insert(EncodedLegSecurityDescLen_91.getString());
      FIX::LegCFICode LegCFICode_91("STRING_732762738");
      noLegs_0_1_0.set(LegCFICode_91);
      InstrumentLeg_91.insert(LegCFICode_91.getString());
      FIX::LegContractMultiplier LegContractMultiplier_91;
      LegContractMultiplier_91.setString("7044140");
      noLegs_0_1_0.set(LegContractMultiplier_91);
      InstrumentLeg_91.insert(LegContractMultiplier_91.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_91(847487175);
      noLegs_0_1_0.set(LegContractMultiplierUnit_91);
      InstrumentLeg_91.insert(LegContractMultiplierUnit_91.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_91("MONTHYEAR_530488817");
      noLegs_0_1_0.set(LegContractSettlMonth_91);
      InstrumentLeg_91.insert(LegContractSettlMonth_91.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_91("COUNTRY_357433891");
      noLegs_0_1_0.set(LegCountryOfIssue_91);
      InstrumentLeg_91.insert(LegCountryOfIssue_91.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_91("LOCALMKTDATE_173821009");
      noLegs_0_1_0.set(LegCouponPaymentDate_91);
      InstrumentLeg_91.insert(LegCouponPaymentDate_91.getString());
      FIX::LegCouponRate LegCouponRate_91;
      LegCouponRate_91.setString("58.760000");
      noLegs_0_1_0.set(LegCouponRate_91);
      InstrumentLeg_91.insert(LegCouponRate_91.getString());
      FIX::LegCreditRating LegCreditRating_91("STRING_587311200");
      noLegs_0_1_0.set(LegCreditRating_91);
      InstrumentLeg_91.insert(LegCreditRating_91.getString());
      FIX::LegCurrency LegCurrency_91("CHF");
      noLegs_0_1_0.set(LegCurrency_91);
      InstrumentLeg_91.insert(LegCurrency_91.getString());
      FIX::LegDatedDate LegDatedDate_91("LOCALMKTDATE_358081769");
      noLegs_0_1_0.set(LegDatedDate_91);
      InstrumentLeg_91.insert(LegDatedDate_91.getString());
      FIX::LegExerciseStyle LegExerciseStyle_91(752510303);
      noLegs_0_1_0.set(LegExerciseStyle_91);
      InstrumentLeg_91.insert(LegExerciseStyle_91.getString());
      FIX::LegFactor LegFactor_91;
      LegFactor_91.setString("16129473");
      noLegs_0_1_0.set(LegFactor_91);
      InstrumentLeg_91.insert(LegFactor_91.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_91(2133187845);
      noLegs_0_1_0.set(LegFlowScheduleType_91);
      InstrumentLeg_91.insert(LegFlowScheduleType_91.getString());
      FIX::LegInstrRegistry LegInstrRegistry_91("STRING_2116323413");
      noLegs_0_1_0.set(LegInstrRegistry_91);
      InstrumentLeg_91.insert(LegInstrRegistry_91.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_91("LOCALMKTDATE_2113455561");
      noLegs_0_1_0.set(LegInterestAccrualDate_91);
      InstrumentLeg_91.insert(LegInterestAccrualDate_91.getString());
      FIX::LegIssueDate LegIssueDate_91("LOCALMKTDATE_168566378");
      noLegs_0_1_0.set(LegIssueDate_91);
      InstrumentLeg_91.insert(LegIssueDate_91.getString());
      FIX::LegIssuer LegIssuer_91("STRING_1591766977");
      noLegs_0_1_0.set(LegIssuer_91);
      InstrumentLeg_91.insert(LegIssuer_91.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_91("STRING_1152298645");
      noLegs_0_1_0.set(LegLocaleOfIssue_91);
      InstrumentLeg_91.insert(LegLocaleOfIssue_91.getString());
      FIX::LegMaturityDate LegMaturityDate_91("LOCALMKTDATE_930233778");
      noLegs_0_1_0.set(LegMaturityDate_91);
      InstrumentLeg_91.insert(LegMaturityDate_91.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_91("MONTHYEAR_311481640");
      noLegs_0_1_0.set(LegMaturityMonthYear_91);
      InstrumentLeg_91.insert(LegMaturityMonthYear_91.getString());
      FIX::LegMaturityTime LegMaturityTime_91("TZTIMEONLY_1669111028");
      noLegs_0_1_0.set(LegMaturityTime_91);
      InstrumentLeg_91.insert(LegMaturityTime_91.getString());
      FIX::LegOptAttribute LegOptAttribute_91('1');
      noLegs_0_1_0.set(LegOptAttribute_91);
      InstrumentLeg_91.insert(LegOptAttribute_91.getString());
      FIX::LegOptionRatio LegOptionRatio_91;
      LegOptionRatio_91.setString("15028995");
      noLegs_0_1_0.set(LegOptionRatio_91);
      InstrumentLeg_91.insert(LegOptionRatio_91.getString());
      FIX::LegPool LegPool_91("STRING_1952994988");
      noLegs_0_1_0.set(LegPool_91);
      InstrumentLeg_91.insert(LegPool_91.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_91("STRING_284396269");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_91);
      InstrumentLeg_91.insert(LegPriceUnitOfMeasure_91.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_91;
      LegPriceUnitOfMeasureQty_91.setString("19563061");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_91);
      InstrumentLeg_91.insert(LegPriceUnitOfMeasureQty_91.getString());
      FIX::LegProduct LegProduct_91(1329693952);
      noLegs_0_1_0.set(LegProduct_91);
      InstrumentLeg_91.insert(LegProduct_91.getString());
      FIX::LegPutOrCall LegPutOrCall_91(1592112505);
      noLegs_0_1_0.set(LegPutOrCall_91);
      InstrumentLeg_91.insert(LegPutOrCall_91.getString());
      FIX::LegRatioQty LegRatioQty_91;
      LegRatioQty_91.setString("16680021");
      noLegs_0_1_0.set(LegRatioQty_91);
      InstrumentLeg_91.insert(LegRatioQty_91.getString());
      FIX::LegRedemptionDate LegRedemptionDate_91("LOCALMKTDATE_2037008229");
      noLegs_0_1_0.set(LegRedemptionDate_91);
      InstrumentLeg_91.insert(LegRedemptionDate_91.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_91("STRING_177391596");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_91);
      InstrumentLeg_91.insert(LegRepoCollateralSecurityType_91.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_91;
      LegRepurchaseRate_91.setString("25.400000");
      noLegs_0_1_0.set(LegRepurchaseRate_91);
      InstrumentLeg_91.insert(LegRepurchaseRate_91.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_91(737011757);
      noLegs_0_1_0.set(LegRepurchaseTerm_91);
      InstrumentLeg_91.insert(LegRepurchaseTerm_91.getString());
      FIX::LegSecurityDesc LegSecurityDesc_91("STRING_707880413");
      noLegs_0_1_0.set(LegSecurityDesc_91);
      InstrumentLeg_91.insert(LegSecurityDesc_91.getString());
      FIX::LegSecurityExchange LegSecurityExchange_91("EXCHANGE_582366431");
      noLegs_0_1_0.set(LegSecurityExchange_91);
      InstrumentLeg_91.insert(LegSecurityExchange_91.getString());
      FIX::LegSecurityID LegSecurityID_91("STRING_910832766");
      noLegs_0_1_0.set(LegSecurityID_91);
      InstrumentLeg_91.insert(LegSecurityID_91.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_91("STRING_962976290");
      noLegs_0_1_0.set(LegSecurityIDSource_91);
      InstrumentLeg_91.insert(LegSecurityIDSource_91.getString());
      FIX::LegSecuritySubType LegSecuritySubType_91("STRING_1169677631");
      noLegs_0_1_0.set(LegSecuritySubType_91);
      InstrumentLeg_91.insert(LegSecuritySubType_91.getString());
      FIX::LegSecurityType LegSecurityType_91("STRING_2096664069");
      noLegs_0_1_0.set(LegSecurityType_91);
      InstrumentLeg_91.insert(LegSecurityType_91.getString());
      FIX::LegSide LegSide_91('9');
      noLegs_0_1_0.set(LegSide_91);
      InstrumentLeg_91.insert(LegSide_91.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_91("STRING_1527759400");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_91);
      InstrumentLeg_91.insert(LegStateOrProvinceOfIssue_91.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_91("CAN");
      noLegs_0_1_0.set(LegStrikeCurrency_91);
      InstrumentLeg_91.insert(LegStrikeCurrency_91.getString());
      FIX::LegStrikePrice LegStrikePrice_91;
      LegStrikePrice_91.setString("15134635");
      noLegs_0_1_0.set(LegStrikePrice_91);
      InstrumentLeg_91.insert(LegStrikePrice_91.getString());
      FIX::LegSymbol LegSymbol_91("STRING_670530489");
      noLegs_0_1_0.set(LegSymbol_91);
      InstrumentLeg_91.insert(LegSymbol_91.getString());
      FIX::LegSymbolSfx LegSymbolSfx_91("STRING_413685912");
      noLegs_0_1_0.set(LegSymbolSfx_91);
      InstrumentLeg_91.insert(LegSymbolSfx_91.getString());
      FIX::LegTimeUnit LegTimeUnit_91("STRING_1682029976");
      noLegs_0_1_0.set(LegTimeUnit_91);
      InstrumentLeg_91.insert(LegTimeUnit_91.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_91("STRING_114813819");
      noLegs_0_1_0.set(LegUnitOfMeasure_91);
      InstrumentLeg_91.insert(LegUnitOfMeasure_91.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_91;
      LegUnitOfMeasureQty_91.setString("15659845");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_91);
      InstrumentLeg_91.insert(LegUnitOfMeasureQty_91.getString());
      all_values.push_back(InstrumentLeg_91);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_183;
        FIX::LegSecurityAltID LegSecurityAltID_183("STRING_426295459");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_183);
        LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltID_183.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_183("STRING_1087611938");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_183);
        LegSecAltIDGrp_NoLegSecurityAltID_183.insert(LegSecurityAltIDSource_183.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_183);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_92;
      FIX::EncodedLegIssuer EncodedLegIssuer_92("DATA_2012409887");
      noLegs_0_1_1.set(EncodedLegIssuer_92);
      InstrumentLeg_92.insert(EncodedLegIssuer_92.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_92(1929195044);
      noLegs_0_1_1.set(EncodedLegIssuerLen_92);
      InstrumentLeg_92.insert(EncodedLegIssuerLen_92.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_92("DATA_893123278");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_92);
      InstrumentLeg_92.insert(EncodedLegSecurityDesc_92.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_92(149322508);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_92);
      InstrumentLeg_92.insert(EncodedLegSecurityDescLen_92.getString());
      FIX::LegCFICode LegCFICode_92("STRING_1738017513");
      noLegs_0_1_1.set(LegCFICode_92);
      InstrumentLeg_92.insert(LegCFICode_92.getString());
      FIX::LegContractMultiplier LegContractMultiplier_92;
      LegContractMultiplier_92.setString("753335");
      noLegs_0_1_1.set(LegContractMultiplier_92);
      InstrumentLeg_92.insert(LegContractMultiplier_92.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_92(1741435014);
      noLegs_0_1_1.set(LegContractMultiplierUnit_92);
      InstrumentLeg_92.insert(LegContractMultiplierUnit_92.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_92("MONTHYEAR_1258536029");
      noLegs_0_1_1.set(LegContractSettlMonth_92);
      InstrumentLeg_92.insert(LegContractSettlMonth_92.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_92("COUNTRY_2112341812");
      noLegs_0_1_1.set(LegCountryOfIssue_92);
      InstrumentLeg_92.insert(LegCountryOfIssue_92.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_92("LOCALMKTDATE_1918826610");
      noLegs_0_1_1.set(LegCouponPaymentDate_92);
      InstrumentLeg_92.insert(LegCouponPaymentDate_92.getString());
      FIX::LegCouponRate LegCouponRate_92;
      LegCouponRate_92.setString("85.690000");
      noLegs_0_1_1.set(LegCouponRate_92);
      InstrumentLeg_92.insert(LegCouponRate_92.getString());
      FIX::LegCreditRating LegCreditRating_92("STRING_701869921");
      noLegs_0_1_1.set(LegCreditRating_92);
      InstrumentLeg_92.insert(LegCreditRating_92.getString());
      FIX::LegCurrency LegCurrency_92("GBP");
      noLegs_0_1_1.set(LegCurrency_92);
      InstrumentLeg_92.insert(LegCurrency_92.getString());
      FIX::LegDatedDate LegDatedDate_92("LOCALMKTDATE_1612702687");
      noLegs_0_1_1.set(LegDatedDate_92);
      InstrumentLeg_92.insert(LegDatedDate_92.getString());
      FIX::LegExerciseStyle LegExerciseStyle_92(1442199665);
      noLegs_0_1_1.set(LegExerciseStyle_92);
      InstrumentLeg_92.insert(LegExerciseStyle_92.getString());
      FIX::LegFactor LegFactor_92;
      LegFactor_92.setString("10880289");
      noLegs_0_1_1.set(LegFactor_92);
      InstrumentLeg_92.insert(LegFactor_92.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_92(1561883108);
      noLegs_0_1_1.set(LegFlowScheduleType_92);
      InstrumentLeg_92.insert(LegFlowScheduleType_92.getString());
      FIX::LegInstrRegistry LegInstrRegistry_92("STRING_276966314");
      noLegs_0_1_1.set(LegInstrRegistry_92);
      InstrumentLeg_92.insert(LegInstrRegistry_92.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_92("LOCALMKTDATE_468304735");
      noLegs_0_1_1.set(LegInterestAccrualDate_92);
      InstrumentLeg_92.insert(LegInterestAccrualDate_92.getString());
      FIX::LegIssueDate LegIssueDate_92("LOCALMKTDATE_116090184");
      noLegs_0_1_1.set(LegIssueDate_92);
      InstrumentLeg_92.insert(LegIssueDate_92.getString());
      FIX::LegIssuer LegIssuer_92("STRING_724680314");
      noLegs_0_1_1.set(LegIssuer_92);
      InstrumentLeg_92.insert(LegIssuer_92.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_92("STRING_1981768333");
      noLegs_0_1_1.set(LegLocaleOfIssue_92);
      InstrumentLeg_92.insert(LegLocaleOfIssue_92.getString());
      FIX::LegMaturityDate LegMaturityDate_92("LOCALMKTDATE_786620673");
      noLegs_0_1_1.set(LegMaturityDate_92);
      InstrumentLeg_92.insert(LegMaturityDate_92.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_92("MONTHYEAR_1138366226");
      noLegs_0_1_1.set(LegMaturityMonthYear_92);
      InstrumentLeg_92.insert(LegMaturityMonthYear_92.getString());
      FIX::LegMaturityTime LegMaturityTime_92("TZTIMEONLY_1516314661");
      noLegs_0_1_1.set(LegMaturityTime_92);
      InstrumentLeg_92.insert(LegMaturityTime_92.getString());
      FIX::LegOptAttribute LegOptAttribute_92('9');
      noLegs_0_1_1.set(LegOptAttribute_92);
      InstrumentLeg_92.insert(LegOptAttribute_92.getString());
      FIX::LegOptionRatio LegOptionRatio_92;
      LegOptionRatio_92.setString("5568671");
      noLegs_0_1_1.set(LegOptionRatio_92);
      InstrumentLeg_92.insert(LegOptionRatio_92.getString());
      FIX::LegPool LegPool_92("STRING_1981094767");
      noLegs_0_1_1.set(LegPool_92);
      InstrumentLeg_92.insert(LegPool_92.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_92("STRING_1327729952");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_92);
      InstrumentLeg_92.insert(LegPriceUnitOfMeasure_92.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_92;
      LegPriceUnitOfMeasureQty_92.setString("16444790");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_92);
      InstrumentLeg_92.insert(LegPriceUnitOfMeasureQty_92.getString());
      FIX::LegProduct LegProduct_92(1846021007);
      noLegs_0_1_1.set(LegProduct_92);
      InstrumentLeg_92.insert(LegProduct_92.getString());
      FIX::LegPutOrCall LegPutOrCall_92(1109441348);
      noLegs_0_1_1.set(LegPutOrCall_92);
      InstrumentLeg_92.insert(LegPutOrCall_92.getString());
      FIX::LegRatioQty LegRatioQty_92;
      LegRatioQty_92.setString("3901187");
      noLegs_0_1_1.set(LegRatioQty_92);
      InstrumentLeg_92.insert(LegRatioQty_92.getString());
      FIX::LegRedemptionDate LegRedemptionDate_92("LOCALMKTDATE_1995343515");
      noLegs_0_1_1.set(LegRedemptionDate_92);
      InstrumentLeg_92.insert(LegRedemptionDate_92.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_92("STRING_699975214");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_92);
      InstrumentLeg_92.insert(LegRepoCollateralSecurityType_92.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_92;
      LegRepurchaseRate_92.setString("22.860000");
      noLegs_0_1_1.set(LegRepurchaseRate_92);
      InstrumentLeg_92.insert(LegRepurchaseRate_92.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_92(1589294881);
      noLegs_0_1_1.set(LegRepurchaseTerm_92);
      InstrumentLeg_92.insert(LegRepurchaseTerm_92.getString());
      FIX::LegSecurityDesc LegSecurityDesc_92("STRING_1958511243");
      noLegs_0_1_1.set(LegSecurityDesc_92);
      InstrumentLeg_92.insert(LegSecurityDesc_92.getString());
      FIX::LegSecurityExchange LegSecurityExchange_92("EXCHANGE_430310450");
      noLegs_0_1_1.set(LegSecurityExchange_92);
      InstrumentLeg_92.insert(LegSecurityExchange_92.getString());
      FIX::LegSecurityID LegSecurityID_92("STRING_1360637843");
      noLegs_0_1_1.set(LegSecurityID_92);
      InstrumentLeg_92.insert(LegSecurityID_92.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_92("STRING_1294496164");
      noLegs_0_1_1.set(LegSecurityIDSource_92);
      InstrumentLeg_92.insert(LegSecurityIDSource_92.getString());
      FIX::LegSecuritySubType LegSecuritySubType_92("STRING_1132180371");
      noLegs_0_1_1.set(LegSecuritySubType_92);
      InstrumentLeg_92.insert(LegSecuritySubType_92.getString());
      FIX::LegSecurityType LegSecurityType_92("STRING_1839861219");
      noLegs_0_1_1.set(LegSecurityType_92);
      InstrumentLeg_92.insert(LegSecurityType_92.getString());
      FIX::LegSide LegSide_92('1');
      noLegs_0_1_1.set(LegSide_92);
      InstrumentLeg_92.insert(LegSide_92.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_92("STRING_597399410");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_92);
      InstrumentLeg_92.insert(LegStateOrProvinceOfIssue_92.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_92("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_92);
      InstrumentLeg_92.insert(LegStrikeCurrency_92.getString());
      FIX::LegStrikePrice LegStrikePrice_92;
      LegStrikePrice_92.setString("117988");
      noLegs_0_1_1.set(LegStrikePrice_92);
      InstrumentLeg_92.insert(LegStrikePrice_92.getString());
      FIX::LegSymbol LegSymbol_92("STRING_1411543551");
      noLegs_0_1_1.set(LegSymbol_92);
      InstrumentLeg_92.insert(LegSymbol_92.getString());
      FIX::LegSymbolSfx LegSymbolSfx_92("STRING_621697586");
      noLegs_0_1_1.set(LegSymbolSfx_92);
      InstrumentLeg_92.insert(LegSymbolSfx_92.getString());
      FIX::LegTimeUnit LegTimeUnit_92("STRING_127889054");
      noLegs_0_1_1.set(LegTimeUnit_92);
      InstrumentLeg_92.insert(LegTimeUnit_92.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_92("STRING_2136223865");
      noLegs_0_1_1.set(LegUnitOfMeasure_92);
      InstrumentLeg_92.insert(LegUnitOfMeasure_92.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_92;
      LegUnitOfMeasureQty_92.setString("4559822");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_92);
      InstrumentLeg_92.insert(LegUnitOfMeasureQty_92.getString());
      all_values.push_back(InstrumentLeg_92);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_184;
        FIX::LegSecurityAltID LegSecurityAltID_184("STRING_1127106443");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_184);
        LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltID_184.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_184("STRING_1972296933");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_184);
        LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltIDSource_184.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_184);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_93;
      FIX::EncodedLegIssuer EncodedLegIssuer_93("DATA_1815944220");
      noLegs_0_1_2.set(EncodedLegIssuer_93);
      InstrumentLeg_93.insert(EncodedLegIssuer_93.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_93(1683973579);
      noLegs_0_1_2.set(EncodedLegIssuerLen_93);
      InstrumentLeg_93.insert(EncodedLegIssuerLen_93.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_93("DATA_1805908053");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_93);
      InstrumentLeg_93.insert(EncodedLegSecurityDesc_93.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_93(996190524);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_93);
      InstrumentLeg_93.insert(EncodedLegSecurityDescLen_93.getString());
      FIX::LegCFICode LegCFICode_93("STRING_1180969005");
      noLegs_0_1_2.set(LegCFICode_93);
      InstrumentLeg_93.insert(LegCFICode_93.getString());
      FIX::LegContractMultiplier LegContractMultiplier_93;
      LegContractMultiplier_93.setString("15044454");
      noLegs_0_1_2.set(LegContractMultiplier_93);
      InstrumentLeg_93.insert(LegContractMultiplier_93.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_93(2105631873);
      noLegs_0_1_2.set(LegContractMultiplierUnit_93);
      InstrumentLeg_93.insert(LegContractMultiplierUnit_93.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_93("MONTHYEAR_1571087709");
      noLegs_0_1_2.set(LegContractSettlMonth_93);
      InstrumentLeg_93.insert(LegContractSettlMonth_93.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_93("COUNTRY_1352305279");
      noLegs_0_1_2.set(LegCountryOfIssue_93);
      InstrumentLeg_93.insert(LegCountryOfIssue_93.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_93("LOCALMKTDATE_658123439");
      noLegs_0_1_2.set(LegCouponPaymentDate_93);
      InstrumentLeg_93.insert(LegCouponPaymentDate_93.getString());
      FIX::LegCouponRate LegCouponRate_93;
      LegCouponRate_93.setString("99.960000");
      noLegs_0_1_2.set(LegCouponRate_93);
      InstrumentLeg_93.insert(LegCouponRate_93.getString());
      FIX::LegCreditRating LegCreditRating_93("STRING_794116513");
      noLegs_0_1_2.set(LegCreditRating_93);
      InstrumentLeg_93.insert(LegCreditRating_93.getString());
      FIX::LegCurrency LegCurrency_93("JPY");
      noLegs_0_1_2.set(LegCurrency_93);
      InstrumentLeg_93.insert(LegCurrency_93.getString());
      FIX::LegDatedDate LegDatedDate_93("LOCALMKTDATE_7270708");
      noLegs_0_1_2.set(LegDatedDate_93);
      InstrumentLeg_93.insert(LegDatedDate_93.getString());
      FIX::LegExerciseStyle LegExerciseStyle_93(1763647198);
      noLegs_0_1_2.set(LegExerciseStyle_93);
      InstrumentLeg_93.insert(LegExerciseStyle_93.getString());
      FIX::LegFactor LegFactor_93;
      LegFactor_93.setString("14515471");
      noLegs_0_1_2.set(LegFactor_93);
      InstrumentLeg_93.insert(LegFactor_93.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_93(1847131927);
      noLegs_0_1_2.set(LegFlowScheduleType_93);
      InstrumentLeg_93.insert(LegFlowScheduleType_93.getString());
      FIX::LegInstrRegistry LegInstrRegistry_93("STRING_829011066");
      noLegs_0_1_2.set(LegInstrRegistry_93);
      InstrumentLeg_93.insert(LegInstrRegistry_93.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_93("LOCALMKTDATE_2048946580");
      noLegs_0_1_2.set(LegInterestAccrualDate_93);
      InstrumentLeg_93.insert(LegInterestAccrualDate_93.getString());
      FIX::LegIssueDate LegIssueDate_93("LOCALMKTDATE_834225516");
      noLegs_0_1_2.set(LegIssueDate_93);
      InstrumentLeg_93.insert(LegIssueDate_93.getString());
      FIX::LegIssuer LegIssuer_93("STRING_982403917");
      noLegs_0_1_2.set(LegIssuer_93);
      InstrumentLeg_93.insert(LegIssuer_93.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_93("STRING_2060745451");
      noLegs_0_1_2.set(LegLocaleOfIssue_93);
      InstrumentLeg_93.insert(LegLocaleOfIssue_93.getString());
      FIX::LegMaturityDate LegMaturityDate_93("LOCALMKTDATE_98285419");
      noLegs_0_1_2.set(LegMaturityDate_93);
      InstrumentLeg_93.insert(LegMaturityDate_93.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_93("MONTHYEAR_1604101503");
      noLegs_0_1_2.set(LegMaturityMonthYear_93);
      InstrumentLeg_93.insert(LegMaturityMonthYear_93.getString());
      FIX::LegMaturityTime LegMaturityTime_93("TZTIMEONLY_41150857");
      noLegs_0_1_2.set(LegMaturityTime_93);
      InstrumentLeg_93.insert(LegMaturityTime_93.getString());
      FIX::LegOptAttribute LegOptAttribute_93('8');
      noLegs_0_1_2.set(LegOptAttribute_93);
      InstrumentLeg_93.insert(LegOptAttribute_93.getString());
      FIX::LegOptionRatio LegOptionRatio_93;
      LegOptionRatio_93.setString("20600837");
      noLegs_0_1_2.set(LegOptionRatio_93);
      InstrumentLeg_93.insert(LegOptionRatio_93.getString());
      FIX::LegPool LegPool_93("STRING_955660585");
      noLegs_0_1_2.set(LegPool_93);
      InstrumentLeg_93.insert(LegPool_93.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_93("STRING_1214132079");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_93);
      InstrumentLeg_93.insert(LegPriceUnitOfMeasure_93.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_93;
      LegPriceUnitOfMeasureQty_93.setString("18848970");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_93);
      InstrumentLeg_93.insert(LegPriceUnitOfMeasureQty_93.getString());
      FIX::LegProduct LegProduct_93(624121158);
      noLegs_0_1_2.set(LegProduct_93);
      InstrumentLeg_93.insert(LegProduct_93.getString());
      FIX::LegPutOrCall LegPutOrCall_93(750622011);
      noLegs_0_1_2.set(LegPutOrCall_93);
      InstrumentLeg_93.insert(LegPutOrCall_93.getString());
      FIX::LegRatioQty LegRatioQty_93;
      LegRatioQty_93.setString("15433214");
      noLegs_0_1_2.set(LegRatioQty_93);
      InstrumentLeg_93.insert(LegRatioQty_93.getString());
      FIX::LegRedemptionDate LegRedemptionDate_93("LOCALMKTDATE_1620311682");
      noLegs_0_1_2.set(LegRedemptionDate_93);
      InstrumentLeg_93.insert(LegRedemptionDate_93.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_93("STRING_1931591016");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_93);
      InstrumentLeg_93.insert(LegRepoCollateralSecurityType_93.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_93;
      LegRepurchaseRate_93.setString("32.300000");
      noLegs_0_1_2.set(LegRepurchaseRate_93);
      InstrumentLeg_93.insert(LegRepurchaseRate_93.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_93(1578459907);
      noLegs_0_1_2.set(LegRepurchaseTerm_93);
      InstrumentLeg_93.insert(LegRepurchaseTerm_93.getString());
      FIX::LegSecurityDesc LegSecurityDesc_93("STRING_1355195078");
      noLegs_0_1_2.set(LegSecurityDesc_93);
      InstrumentLeg_93.insert(LegSecurityDesc_93.getString());
      FIX::LegSecurityExchange LegSecurityExchange_93("EXCHANGE_105104861");
      noLegs_0_1_2.set(LegSecurityExchange_93);
      InstrumentLeg_93.insert(LegSecurityExchange_93.getString());
      FIX::LegSecurityID LegSecurityID_93("STRING_89099698");
      noLegs_0_1_2.set(LegSecurityID_93);
      InstrumentLeg_93.insert(LegSecurityID_93.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_93("STRING_1244251426");
      noLegs_0_1_2.set(LegSecurityIDSource_93);
      InstrumentLeg_93.insert(LegSecurityIDSource_93.getString());
      FIX::LegSecuritySubType LegSecuritySubType_93("STRING_899221374");
      noLegs_0_1_2.set(LegSecuritySubType_93);
      InstrumentLeg_93.insert(LegSecuritySubType_93.getString());
      FIX::LegSecurityType LegSecurityType_93("STRING_558250732");
      noLegs_0_1_2.set(LegSecurityType_93);
      InstrumentLeg_93.insert(LegSecurityType_93.getString());
      FIX::LegSide LegSide_93('1');
      noLegs_0_1_2.set(LegSide_93);
      InstrumentLeg_93.insert(LegSide_93.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_93("STRING_906492083");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_93);
      InstrumentLeg_93.insert(LegStateOrProvinceOfIssue_93.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_93("GBP");
      noLegs_0_1_2.set(LegStrikeCurrency_93);
      InstrumentLeg_93.insert(LegStrikeCurrency_93.getString());
      FIX::LegStrikePrice LegStrikePrice_93;
      LegStrikePrice_93.setString("6061403");
      noLegs_0_1_2.set(LegStrikePrice_93);
      InstrumentLeg_93.insert(LegStrikePrice_93.getString());
      FIX::LegSymbol LegSymbol_93("STRING_1003425348");
      noLegs_0_1_2.set(LegSymbol_93);
      InstrumentLeg_93.insert(LegSymbol_93.getString());
      FIX::LegSymbolSfx LegSymbolSfx_93("STRING_769144679");
      noLegs_0_1_2.set(LegSymbolSfx_93);
      InstrumentLeg_93.insert(LegSymbolSfx_93.getString());
      FIX::LegTimeUnit LegTimeUnit_93("STRING_1440365878");
      noLegs_0_1_2.set(LegTimeUnit_93);
      InstrumentLeg_93.insert(LegTimeUnit_93.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_93("STRING_1985829265");
      noLegs_0_1_2.set(LegUnitOfMeasure_93);
      InstrumentLeg_93.insert(LegUnitOfMeasure_93.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_93;
      LegUnitOfMeasureQty_93.setString("6824064");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_93);
      InstrumentLeg_93.insert(LegUnitOfMeasureQty_93.getString());
      all_values.push_back(InstrumentLeg_93);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_185;
        FIX::LegSecurityAltID LegSecurityAltID_185("STRING_1442447121");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_185);
        LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltID_185.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_185("STRING_723557339");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_185);
        LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltIDSource_185.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_185);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_186;
        FIX::LegSecurityAltID LegSecurityAltID_186("STRING_1625676933");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_186);
        LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltID_186.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_186("STRING_1355047248");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_186);
        LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltIDSource_186.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_186);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_187;
        FIX::LegSecurityAltID LegSecurityAltID_187("STRING_1679217925");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltID_187);
        LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltID_187.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_187("STRING_692325365");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltIDSource_187);
        LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltIDSource_187.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_187);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_61;
    FIX::AttachmentPoint AttachmentPoint_61;
    AttachmentPoint_61.setString("6.610000");
    noQuoteEntries_0_0.set(AttachmentPoint_61);
    Instrument_61.insert(AttachmentPoint_61.getString());
    FIX::CFICode CFICode_61("STRING_155855435");
    noQuoteEntries_0_0.set(CFICode_61);
    Instrument_61.insert(CFICode_61.getString());
    FIX::CPProgram CPProgram_61(99);
    noQuoteEntries_0_0.set(CPProgram_61);
    Instrument_61.insert(CPProgram_61.getString());
    FIX::CPRegType CPRegType_61("STRING_488298479");
    noQuoteEntries_0_0.set(CPRegType_61);
    Instrument_61.insert(CPRegType_61.getString());
    FIX::CapPrice CapPrice_61;
    CapPrice_61.setString("17761671");
    noQuoteEntries_0_0.set(CapPrice_61);
    Instrument_61.insert(CapPrice_61.getString());
    FIX::ContractMultiplier ContractMultiplier_61;
    ContractMultiplier_61.setString("12270547");
    noQuoteEntries_0_0.set(ContractMultiplier_61);
    Instrument_61.insert(ContractMultiplier_61.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_61(2);
    noQuoteEntries_0_0.set(ContractMultiplierUnit_61);
    Instrument_61.insert(ContractMultiplierUnit_61.getString());
    FIX::ContractSettlMonth ContractSettlMonth_61("MONTHYEAR_1207143377");
    noQuoteEntries_0_0.set(ContractSettlMonth_61);
    Instrument_61.insert(ContractSettlMonth_61.getString());
    FIX::CountryOfIssue CountryOfIssue_61("COUNTRY_434766174");
    noQuoteEntries_0_0.set(CountryOfIssue_61);
    Instrument_61.insert(CountryOfIssue_61.getString());
    FIX::CouponPaymentDate CouponPaymentDate_61("LOCALMKTDATE_1493686571");
    noQuoteEntries_0_0.set(CouponPaymentDate_61);
    Instrument_61.insert(CouponPaymentDate_61.getString());
    FIX::CouponRate CouponRate_61;
    CouponRate_61.setString("30.750000");
    noQuoteEntries_0_0.set(CouponRate_61);
    Instrument_61.insert(CouponRate_61.getString());
    FIX::CreditRating CreditRating_61("STRING_1679017600");
    noQuoteEntries_0_0.set(CreditRating_61);
    Instrument_61.insert(CreditRating_61.getString());
    FIX::DatedDate DatedDate_61("LOCALMKTDATE_245424297");
    noQuoteEntries_0_0.set(DatedDate_61);
    Instrument_61.insert(DatedDate_61.getString());
    FIX::DetachmentPoint DetachmentPoint_61;
    DetachmentPoint_61.setString("38.080000");
    noQuoteEntries_0_0.set(DetachmentPoint_61);
    Instrument_61.insert(DetachmentPoint_61.getString());
    FIX::EncodedIssuer EncodedIssuer_61("DATA_1095152177");
    noQuoteEntries_0_0.set(EncodedIssuer_61);
    Instrument_61.insert(EncodedIssuer_61.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_61(1151916380);
    noQuoteEntries_0_0.set(EncodedIssuerLen_61);
    Instrument_61.insert(EncodedIssuerLen_61.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_61("DATA_2028908090");
    noQuoteEntries_0_0.set(EncodedSecurityDesc_61);
    Instrument_61.insert(EncodedSecurityDesc_61.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_61(1962833923);
    noQuoteEntries_0_0.set(EncodedSecurityDescLen_61);
    Instrument_61.insert(EncodedSecurityDescLen_61.getString());
    FIX::ExerciseStyle ExerciseStyle_61(1);
    noQuoteEntries_0_0.set(ExerciseStyle_61);
    Instrument_61.insert(ExerciseStyle_61.getString());
    FIX::Factor Factor_61;
    Factor_61.setString("8848497");
    noQuoteEntries_0_0.set(Factor_61);
    Instrument_61.insert(Factor_61.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_61(true);
    noQuoteEntries_0_0.set(FlexProductEligibilityIndicator_61);
    Instrument_61.insert(FlexProductEligibilityIndicator_61.getString());
    FIX::FlexibleIndicator FlexibleIndicator_61(false);
    noQuoteEntries_0_0.set(FlexibleIndicator_61);
    Instrument_61.insert(FlexibleIndicator_61.getString());
    FIX::FloorPrice FloorPrice_61;
    FloorPrice_61.setString("7231954");
    noQuoteEntries_0_0.set(FloorPrice_61);
    Instrument_61.insert(FloorPrice_61.getString());
    FIX::FlowScheduleType FlowScheduleType_61(1);
    noQuoteEntries_0_0.set(FlowScheduleType_61);
    Instrument_61.insert(FlowScheduleType_61.getString());
    FIX::InstrRegistry InstrRegistry_61("STRING_442106623");
    noQuoteEntries_0_0.set(InstrRegistry_61);
    Instrument_61.insert(InstrRegistry_61.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_61('1');
    noQuoteEntries_0_0.set(InstrmtAssignmentMethod_61);
    Instrument_61.insert(InstrmtAssignmentMethod_61.getString());
    FIX::InterestAccrualDate InterestAccrualDate_61("LOCALMKTDATE_1990458776");
    noQuoteEntries_0_0.set(InterestAccrualDate_61);
    Instrument_61.insert(InterestAccrualDate_61.getString());
    FIX::IssueDate IssueDate_61("LOCALMKTDATE_2067783556");
    noQuoteEntries_0_0.set(IssueDate_61);
    Instrument_61.insert(IssueDate_61.getString());
    FIX::Issuer Issuer_61("STRING_1373206130");
    noQuoteEntries_0_0.set(Issuer_61);
    Instrument_61.insert(Issuer_61.getString());
    FIX::ListMethod ListMethod_61(1);
    noQuoteEntries_0_0.set(ListMethod_61);
    Instrument_61.insert(ListMethod_61.getString());
    FIX::LocaleOfIssue LocaleOfIssue_61("STRING_612625273");
    noQuoteEntries_0_0.set(LocaleOfIssue_61);
    Instrument_61.insert(LocaleOfIssue_61.getString());
    FIX::MaturityDate MaturityDate_61("LOCALMKTDATE_318183143");
    noQuoteEntries_0_0.set(MaturityDate_61);
    Instrument_61.insert(MaturityDate_61.getString());
    FIX::MaturityMonthYear MaturityMonthYear_61("MONTHYEAR_1678048488");
    noQuoteEntries_0_0.set(MaturityMonthYear_61);
    Instrument_61.insert(MaturityMonthYear_61.getString());
    FIX::MaturityTime MaturityTime_61("TZTIMEONLY_2055572649");
    noQuoteEntries_0_0.set(MaturityTime_61);
    Instrument_61.insert(MaturityTime_61.getString());
    FIX::MinPriceIncrement MinPriceIncrement_61;
    MinPriceIncrement_61.setString("8064816");
    noQuoteEntries_0_0.set(MinPriceIncrement_61);
    Instrument_61.insert(MinPriceIncrement_61.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_61;
    MinPriceIncrementAmount_61.setString("13067319");
    noQuoteEntries_0_0.set(MinPriceIncrementAmount_61);
    Instrument_61.insert(MinPriceIncrementAmount_61.getString());
    FIX::NTPositionLimit NTPositionLimit_61(1135143746);
    noQuoteEntries_0_0.set(NTPositionLimit_61);
    Instrument_61.insert(NTPositionLimit_61.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_61;
    NotionalPercentageOutstanding_61.setString("96.840000");
    noQuoteEntries_0_0.set(NotionalPercentageOutstanding_61);
    Instrument_61.insert(NotionalPercentageOutstanding_61.getString());
    FIX::OptAttribute OptAttribute_61('3');
    noQuoteEntries_0_0.set(OptAttribute_61);
    Instrument_61.insert(OptAttribute_61.getString());
    FIX::OptPayoutAmount OptPayoutAmount_61;
    OptPayoutAmount_61.setString("15699099");
    noQuoteEntries_0_0.set(OptPayoutAmount_61);
    Instrument_61.insert(OptPayoutAmount_61.getString());
    FIX::OptPayoutType OptPayoutType_61(2);
    noQuoteEntries_0_0.set(OptPayoutType_61);
    Instrument_61.insert(OptPayoutType_61.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_61;
    OriginalNotionalPercentageOutstanding_61.setString("47.620000");
    noQuoteEntries_0_0.set(OriginalNotionalPercentageOutstanding_61);
    Instrument_61.insert(OriginalNotionalPercentageOutstanding_61.getString());
    FIX::Pool Pool_61("STRING_1101443873");
    noQuoteEntries_0_0.set(Pool_61);
    Instrument_61.insert(Pool_61.getString());
    FIX::PositionLimit PositionLimit_61(1786690553);
    noQuoteEntries_0_0.set(PositionLimit_61);
    Instrument_61.insert(PositionLimit_61.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_61("STRING_INT");
    noQuoteEntries_0_0.set(PriceQuoteMethod_61);
    Instrument_61.insert(PriceQuoteMethod_61.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_61("STRING_49112402");
    noQuoteEntries_0_0.set(PriceUnitOfMeasure_61);
    Instrument_61.insert(PriceUnitOfMeasure_61.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_61;
    PriceUnitOfMeasureQty_61.setString("7911232");
    noQuoteEntries_0_0.set(PriceUnitOfMeasureQty_61);
    Instrument_61.insert(PriceUnitOfMeasureQty_61.getString());
    FIX::Product Product_63(13);
    noQuoteEntries_0_0.set(Product_63);
    Instrument_61.insert(Product_63.getString());
    FIX::ProductComplex ProductComplex_61("STRING_2011946325");
    noQuoteEntries_0_0.set(ProductComplex_61);
    Instrument_61.insert(ProductComplex_61.getString());
    FIX::PutOrCall PutOrCall_61(0);
    noQuoteEntries_0_0.set(PutOrCall_61);
    Instrument_61.insert(PutOrCall_61.getString());
    FIX::RedemptionDate RedemptionDate_61("LOCALMKTDATE_2135919155");
    noQuoteEntries_0_0.set(RedemptionDate_61);
    Instrument_61.insert(RedemptionDate_61.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_61("STRING_448957632");
    noQuoteEntries_0_0.set(RepoCollateralSecurityType_61);
    Instrument_61.insert(RepoCollateralSecurityType_61.getString());
    FIX::RepurchaseRate RepurchaseRate_61;
    RepurchaseRate_61.setString("53.540000");
    noQuoteEntries_0_0.set(RepurchaseRate_61);
    Instrument_61.insert(RepurchaseRate_61.getString());
    FIX::RepurchaseTerm RepurchaseTerm_61(711630916);
    noQuoteEntries_0_0.set(RepurchaseTerm_61);
    Instrument_61.insert(RepurchaseTerm_61.getString());
    FIX::RestructuringType RestructuringType_61("STRING_FR");
    noQuoteEntries_0_0.set(RestructuringType_61);
    Instrument_61.insert(RestructuringType_61.getString());
    FIX::SecurityDesc SecurityDesc_61("STRING_1894741977");
    noQuoteEntries_0_0.set(SecurityDesc_61);
    Instrument_61.insert(SecurityDesc_61.getString());
    FIX::SecurityExchange SecurityExchange_61("EXCHANGE_729789797");
    noQuoteEntries_0_0.set(SecurityExchange_61);
    Instrument_61.insert(SecurityExchange_61.getString());
    FIX::SecurityGroup SecurityGroup_61("STRING_1558834196");
    noQuoteEntries_0_0.set(SecurityGroup_61);
    Instrument_61.insert(SecurityGroup_61.getString());
    FIX::SecurityID SecurityID_61("STRING_1815041885");
    noQuoteEntries_0_0.set(SecurityID_61);
    Instrument_61.insert(SecurityID_61.getString());
    FIX::SecurityIDSource SecurityIDSource_61("STRING_M");
    noQuoteEntries_0_0.set(SecurityIDSource_61);
    Instrument_61.insert(SecurityIDSource_61.getString());
    FIX::SecurityStatus SecurityStatus_61("STRING_2");
    noQuoteEntries_0_0.set(SecurityStatus_61);
    Instrument_61.insert(SecurityStatus_61.getString());
    FIX::SecuritySubType SecuritySubType_62("STRING_280183511");
    noQuoteEntries_0_0.set(SecuritySubType_62);
    Instrument_61.insert(SecuritySubType_62.getString());
    FIX::SecurityType SecurityType_63("STRING_MPO");
    noQuoteEntries_0_0.set(SecurityType_63);
    Instrument_61.insert(SecurityType_63.getString());
    FIX::Seniority Seniority_61("STRING_SB");
    noQuoteEntries_0_0.set(Seniority_61);
    Instrument_61.insert(Seniority_61.getString());
    FIX::SettlMethod SettlMethod_61('C');
    noQuoteEntries_0_0.set(SettlMethod_61);
    Instrument_61.insert(SettlMethod_61.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_61("STRING_1080177046");
    noQuoteEntries_0_0.set(SettleOnOpenFlag_61);
    Instrument_61.insert(SettleOnOpenFlag_61.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_61("STRING_1770840399");
    noQuoteEntries_0_0.set(StateOrProvinceOfIssue_61);
    Instrument_61.insert(StateOrProvinceOfIssue_61.getString());
    FIX::StrikeCurrency StrikeCurrency_61("USD");
    noQuoteEntries_0_0.set(StrikeCurrency_61);
    Instrument_61.insert(StrikeCurrency_61.getString());
    FIX::StrikeMultiplier StrikeMultiplier_61;
    StrikeMultiplier_61.setString("21372320");
    noQuoteEntries_0_0.set(StrikeMultiplier_61);
    Instrument_61.insert(StrikeMultiplier_61.getString());
    FIX::StrikePrice StrikePrice_61;
    StrikePrice_61.setString("7458425");
    noQuoteEntries_0_0.set(StrikePrice_61);
    Instrument_61.insert(StrikePrice_61.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_61(4);
    noQuoteEntries_0_0.set(StrikePriceBoundaryMethod_61);
    Instrument_61.insert(StrikePriceBoundaryMethod_61.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_61;
    StrikePriceBoundaryPrecision_61.setString("31.990000");
    noQuoteEntries_0_0.set(StrikePriceBoundaryPrecision_61);
    Instrument_61.insert(StrikePriceBoundaryPrecision_61.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_61(1);
    noQuoteEntries_0_0.set(StrikePriceDeterminationMethod_61);
    Instrument_61.insert(StrikePriceDeterminationMethod_61.getString());
    FIX::StrikeValue StrikeValue_61;
    StrikeValue_61.setString("1607462");
    noQuoteEntries_0_0.set(StrikeValue_61);
    Instrument_61.insert(StrikeValue_61.getString());
    FIX::Symbol Symbol_61("STRING_874544473");
    noQuoteEntries_0_0.set(Symbol_61);
    Instrument_61.insert(Symbol_61.getString());
    FIX::SymbolSfx SymbolSfx_61("STRING_CD");
    noQuoteEntries_0_0.set(SymbolSfx_61);
    Instrument_61.insert(SymbolSfx_61.getString());
    FIX::TimeUnit TimeUnit_61("STRING_Min");
    noQuoteEntries_0_0.set(TimeUnit_61);
    Instrument_61.insert(TimeUnit_61.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_61(3);
    noQuoteEntries_0_0.set(UnderlyingPriceDeterminationMethod_61);
    Instrument_61.insert(UnderlyingPriceDeterminationMethod_61.getString());
    FIX::UnitOfMeasure UnitOfMeasure_61("STRING_Bbl");
    noQuoteEntries_0_0.set(UnitOfMeasure_61);
    Instrument_61.insert(UnitOfMeasure_61.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_61;
    UnitOfMeasureQty_61.setString("13535659");
    noQuoteEntries_0_0.set(UnitOfMeasureQty_61);
    Instrument_61.insert(UnitOfMeasureQty_61.getString());
    FIX::ValuationMethod ValuationMethod_61("STRING_EQTY");
    noQuoteEntries_0_0.set(ValuationMethod_61);
    Instrument_61.insert(ValuationMethod_61.getString());
    all_values.push_back(Instrument_61);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_119;
      FIX::ComplexEventCondition ComplexEventCondition_119(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexEventCondition_119.getString());
      FIX::ComplexEventPrice ComplexEventPrice_119;
      ComplexEventPrice_119.setString("6781966");
      noComplexEvents_0_1_0.set(ComplexEventPrice_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexEventPrice_119.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_119(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryMethod_119.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_119;
      ComplexEventPriceBoundaryPrecision_119.setString("59.440000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryPrecision_119.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_119(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceTimeType_119.getString());
      FIX::ComplexEventType ComplexEventType_119(1);
      noComplexEvents_0_1_0.set(ComplexEventType_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexEventType_119.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_119;
      ComplexOptPayoutAmount_119.setString("735341");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_119);
      ComplexEvents_NoComplexEvents_119.insert(ComplexOptPayoutAmount_119.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_119);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_246;
        FIX::ComplexEventEndDate ComplexEventEndDate_246(FIX::UTCTIMESTAMP(4, 33, 59, 1, 12, 2012));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_246);
        ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventEndDate_246.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_246(FIX::UTCTIMESTAMP(18, 8, 26, 24, 8, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_246);
        ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventStartDate_246.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_246);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_501;
          FIX::ComplexEventEndTime ComplexEventEndTime_501(FIX::UTCTIMEONLY(12, 3, 23));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_501);
          ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventEndTime_501.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_501(FIX::UTCTIMEONLY(20, 0, 31));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_501);
          ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventStartTime_501.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_501);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_502;
          FIX::ComplexEventEndTime ComplexEventEndTime_502(FIX::UTCTIMEONLY(18, 59, 23));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_502);
          ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventEndTime_502.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_502(FIX::UTCTIMEONLY(16, 5, 7));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_502);
          ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventStartTime_502.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_502);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_247;
        FIX::ComplexEventEndDate ComplexEventEndDate_247(FIX::UTCTIMESTAMP(21, 33, 33, 10, 9, 2004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_247);
        ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventEndDate_247.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_247(FIX::UTCTIMESTAMP(18, 12, 56, 6, 12, 2011));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_247);
        ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventStartDate_247.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_247);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_503;
          FIX::ComplexEventEndTime ComplexEventEndTime_503(FIX::UTCTIMEONLY(15, 1, 47));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_503);
          ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventEndTime_503.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_503(FIX::UTCTIMEONLY(9, 48, 7));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_503);
          ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventStartTime_503.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_503);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_504;
          FIX::ComplexEventEndTime ComplexEventEndTime_504(FIX::UTCTIMEONLY(10, 58, 40));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_504);
          ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventEndTime_504.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_504(FIX::UTCTIMEONLY(14, 37, 30));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_504);
          ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventStartTime_504.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_504);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_505;
          FIX::ComplexEventEndTime ComplexEventEndTime_505(FIX::UTCTIMEONLY(15, 3, 14));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_505);
          ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventEndTime_505.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_505(FIX::UTCTIMEONLY(16, 18, 51));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_505);
          ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventStartTime_505.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_505);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_117;
      FIX::EventDate EventDate_117("LOCALMKTDATE_162853342");
      noEvents_0_1_0.set(EventDate_117);
      EvntGrp_NoEvents_117.insert(EventDate_117.getString());
      FIX::EventPx EventPx_117;
      EventPx_117.setString("12231774");
      noEvents_0_1_0.set(EventPx_117);
      EvntGrp_NoEvents_117.insert(EventPx_117.getString());
      FIX::EventText EventText_117("STRING_1734179641");
      noEvents_0_1_0.set(EventText_117);
      EvntGrp_NoEvents_117.insert(EventText_117.getString());
      FIX::EventTime EventTime_117(FIX::UTCTIMESTAMP(11, 58, 58, 26, 12, 2007));
      noEvents_0_1_0.set(EventTime_117);
      EvntGrp_NoEvents_117.insert(EventTime_117.getString());
      FIX::EventType EventType_117(15);
      noEvents_0_1_0.set(EventType_117);
      EvntGrp_NoEvents_117.insert(EventType_117.getString());
      all_values.push_back(EvntGrp_NoEvents_117);

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_118;
      FIX::EventDate EventDate_118("LOCALMKTDATE_682458397");
      noEvents_0_1_1.set(EventDate_118);
      EvntGrp_NoEvents_118.insert(EventDate_118.getString());
      FIX::EventPx EventPx_118;
      EventPx_118.setString("3519311");
      noEvents_0_1_1.set(EventPx_118);
      EvntGrp_NoEvents_118.insert(EventPx_118.getString());
      FIX::EventText EventText_118("STRING_2088970861");
      noEvents_0_1_1.set(EventText_118);
      EvntGrp_NoEvents_118.insert(EventText_118.getString());
      FIX::EventTime EventTime_118(FIX::UTCTIMESTAMP(15, 51, 34, 14, 11, 2004));
      noEvents_0_1_1.set(EventTime_118);
      EvntGrp_NoEvents_118.insert(EventTime_118.getString());
      FIX::EventType EventType_118(6);
      noEvents_0_1_1.set(EventType_118);
      EvntGrp_NoEvents_118.insert(EventType_118.getString());
      all_values.push_back(EvntGrp_NoEvents_118);

      noQuoteEntries_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_119;
      FIX::EventDate EventDate_119("LOCALMKTDATE_2040080926");
      noEvents_0_1_2.set(EventDate_119);
      EvntGrp_NoEvents_119.insert(EventDate_119.getString());
      FIX::EventPx EventPx_119;
      EventPx_119.setString("10850862");
      noEvents_0_1_2.set(EventPx_119);
      EvntGrp_NoEvents_119.insert(EventPx_119.getString());
      FIX::EventText EventText_119("STRING_1882289988");
      noEvents_0_1_2.set(EventText_119);
      EvntGrp_NoEvents_119.insert(EventText_119.getString());
      FIX::EventTime EventTime_119(FIX::UTCTIMESTAMP(4, 20, 10, 4, 12, 2008));
      noEvents_0_1_2.set(EventTime_119);
      EvntGrp_NoEvents_119.insert(EventTime_119.getString());
      FIX::EventType EventType_119(5);
      noEvents_0_1_2.set(EventType_119);
      EvntGrp_NoEvents_119.insert(EventType_119.getString());
      all_values.push_back(EvntGrp_NoEvents_119);

      noQuoteEntries_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_118;
      FIX::InstrumentPartyID InstrumentPartyID_118("STRING_422711278");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_118);
      InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyID_118.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_118('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_118);
      InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyIDSource_118.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_118(2106957062);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_118);
      InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyRole_118.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_118);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248;
        FIX::InstrumentPartySubID InstrumentPartySubID_248("STRING_1625475501");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_248);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubID_248.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_248(1769124114);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_248);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubIDType_248.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249;
        FIX::InstrumentPartySubID InstrumentPartySubID_249("STRING_647522485");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_249);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubID_249.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_249(1918315575);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_249);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubIDType_249.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250;
        FIX::InstrumentPartySubID InstrumentPartySubID_250("STRING_304098863");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_250);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubID_250.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_250(999453643);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_250);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubIDType_250.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_119;
      FIX::InstrumentPartyID InstrumentPartyID_119("STRING_1859802788");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_119);
      InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyID_119.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_119('9');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_119);
      InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyIDSource_119.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_119(1976048674);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_119);
      InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyRole_119.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_119);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251;
        FIX::InstrumentPartySubID InstrumentPartySubID_251("STRING_742393363");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_251);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubID_251.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_251(1745481889);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_251);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubIDType_251.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252;
        FIX::InstrumentPartySubID InstrumentPartySubID_252("STRING_901377170");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_252);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubID_252.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_252(1334463047);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_252);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubIDType_252.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_134;
      FIX::SecurityAltID SecurityAltID_134("STRING_793974448");
      noSecurityAltID_0_1_0.set(SecurityAltID_134);
      SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltID_134.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_134("STRING_272065690");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_134);
      SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltIDSource_134.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_134);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_135;
      FIX::SecurityAltID SecurityAltID_135("STRING_1721716274");
      noSecurityAltID_0_1_1.set(SecurityAltID_135);
      SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltID_135.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_135("STRING_1170407481");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_135);
      SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltIDSource_135.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_135);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_122;
    FIX::SecurityXML SecurityXML_123("XMLDATA_2127018543");
    noQuoteEntries_0_0.set(SecurityXML_123);
    FIX::SecurityXMLLen SecurityXMLLen_61(541171887);
    noQuoteEntries_0_0.set(SecurityXMLLen_61);
    FIX::SecurityXMLSchema SecurityXMLSchema_61("STRING_770033903");
    noQuoteEntries_0_0.set(SecurityXMLSchema_61);
    SecurityXML_122.insert(SecurityXMLSchema_61.getString());
    all_values.push_back(SecurityXML_122);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_91;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_91("DATA_1881675638");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingIssuer_91.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_91(532513668);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingIssuerLen_91.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_91("DATA_2146929415");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDesc_91.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_91(661391734);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDescLen_91.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_91;
      UnderlyingAdjustedQuantity_91.setString("9552249");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_91);
      UnderlyingInstrument_91.insert(UnderlyingAdjustedQuantity_91.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_91;
      UnderlyingAllocationPercent_91.setString("17.700000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_91);
      UnderlyingInstrument_91.insert(UnderlyingAllocationPercent_91.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_91;
      UnderlyingAttachmentPoint_91.setString("51.480000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_91);
      UnderlyingInstrument_91.insert(UnderlyingAttachmentPoint_91.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_91("STRING_820324954");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_91);
      UnderlyingInstrument_91.insert(UnderlyingCFICode_91.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_91("STRING_870523623");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_91);
      UnderlyingInstrument_91.insert(UnderlyingCPProgram_91.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_91("STRING_242505614");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_91);
      UnderlyingInstrument_91.insert(UnderlyingCPRegType_91.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_91;
      UnderlyingCapValue_91.setString("14678474");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_91);
      UnderlyingInstrument_91.insert(UnderlyingCapValue_91.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_91;
      UnderlyingCashAmount_91.setString("6413555");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_91);
      UnderlyingInstrument_91.insert(UnderlyingCashAmount_91.getString());
      FIX::UnderlyingCashType UnderlyingCashType_91("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_91);
      UnderlyingInstrument_91.insert(UnderlyingCashType_91.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_91;
      UnderlyingContractMultiplier_91.setString("3198174");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_91);
      UnderlyingInstrument_91.insert(UnderlyingContractMultiplier_91.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_91(353674691);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_91);
      UnderlyingInstrument_91.insert(UnderlyingContractMultiplierUnit_91.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_91("COUNTRY_1455085014");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_91);
      UnderlyingInstrument_91.insert(UnderlyingCountryOfIssue_91.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_91("LOCALMKTDATE_148382461");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_91);
      UnderlyingInstrument_91.insert(UnderlyingCouponPaymentDate_91.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_91;
      UnderlyingCouponRate_91.setString("92.830000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_91);
      UnderlyingInstrument_91.insert(UnderlyingCouponRate_91.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_91("STRING_49994730");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_91);
      UnderlyingInstrument_91.insert(UnderlyingCreditRating_91.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_91("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_91);
      UnderlyingInstrument_91.insert(UnderlyingCurrency_91.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_91;
      UnderlyingCurrentValue_91.setString("13844577");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_91);
      UnderlyingInstrument_91.insert(UnderlyingCurrentValue_91.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_91;
      UnderlyingDetachmentPoint_91.setString("6.360000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_91);
      UnderlyingInstrument_91.insert(UnderlyingDetachmentPoint_91.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_91;
      UnderlyingDirtyPrice_91.setString("5703872");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_91);
      UnderlyingInstrument_91.insert(UnderlyingDirtyPrice_91.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_91;
      UnderlyingEndPrice_91.setString("16565234");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_91);
      UnderlyingInstrument_91.insert(UnderlyingEndPrice_91.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_91;
      UnderlyingEndValue_91.setString("13075232");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_91);
      UnderlyingInstrument_91.insert(UnderlyingEndValue_91.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_91(1740794735);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_91);
      UnderlyingInstrument_91.insert(UnderlyingExerciseStyle_91.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_91;
      UnderlyingFXRate_91.setString("16360583");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_91);
      UnderlyingInstrument_91.insert(UnderlyingFXRate_91.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_91('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_91);
      UnderlyingInstrument_91.insert(UnderlyingFXRateCalc_91.getString());
      FIX::UnderlyingFactor UnderlyingFactor_91;
      UnderlyingFactor_91.setString("3633449");
      noUnderlyings_0_1_0.set(UnderlyingFactor_91);
      UnderlyingInstrument_91.insert(UnderlyingFactor_91.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_91(2087701794);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_91);
      UnderlyingInstrument_91.insert(UnderlyingFlowScheduleType_91.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_91("STRING_1582887139");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_91);
      UnderlyingInstrument_91.insert(UnderlyingInstrRegistry_91.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_91("LOCALMKTDATE_895858658");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_91);
      UnderlyingInstrument_91.insert(UnderlyingIssueDate_91.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_91("STRING_2087147561");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_91);
      UnderlyingInstrument_91.insert(UnderlyingIssuer_91.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_91("STRING_96795225");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_91);
      UnderlyingInstrument_91.insert(UnderlyingLocaleOfIssue_91.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_91("LOCALMKTDATE_1851083604");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_91);
      UnderlyingInstrument_91.insert(UnderlyingMaturityDate_91.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_91("MONTHYEAR_1332195683");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_91);
      UnderlyingInstrument_91.insert(UnderlyingMaturityMonthYear_91.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_91("TZTIMEONLY_717660374");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_91);
      UnderlyingInstrument_91.insert(UnderlyingMaturityTime_91.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_91;
      UnderlyingNotionalPercentageOutstanding_91.setString("49.100000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_91);
      UnderlyingInstrument_91.insert(UnderlyingNotionalPercentageOutstanding_91.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_91('5');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_91);
      UnderlyingInstrument_91.insert(UnderlyingOptAttribute_91.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_91;
      UnderlyingOriginalNotionalPercentageOutstanding_91.setString("59.880000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_91);
      UnderlyingInstrument_91.insert(UnderlyingOriginalNotionalPercentageOutstanding_91.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_91("STRING_1991772350");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_91);
      UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasure_91.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_91;
      UnderlyingPriceUnitOfMeasureQty_91.setString("6965912");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_91);
      UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasureQty_91.getString());
      FIX::UnderlyingProduct UnderlyingProduct_91(1506770466);
      noUnderlyings_0_1_0.set(UnderlyingProduct_91);
      UnderlyingInstrument_91.insert(UnderlyingProduct_91.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_91(164106136);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_91);
      UnderlyingInstrument_91.insert(UnderlyingPutOrCall_91.getString());
      FIX::UnderlyingPx UnderlyingPx_91;
      UnderlyingPx_91.setString("10502659");
      noUnderlyings_0_1_0.set(UnderlyingPx_91);
      UnderlyingInstrument_91.insert(UnderlyingPx_91.getString());
      FIX::UnderlyingQty UnderlyingQty_91;
      UnderlyingQty_91.setString("8143718");
      noUnderlyings_0_1_0.set(UnderlyingQty_91);
      UnderlyingInstrument_91.insert(UnderlyingQty_91.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_91("LOCALMKTDATE_312488597");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_91);
      UnderlyingInstrument_91.insert(UnderlyingRedemptionDate_91.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_91("STRING_2072785184");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_91);
      UnderlyingInstrument_91.insert(UnderlyingRepoCollateralSecurityType_91.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_91;
      UnderlyingRepurchaseRate_91.setString("65.620000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_91);
      UnderlyingInstrument_91.insert(UnderlyingRepurchaseRate_91.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_91(58869299);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_91);
      UnderlyingInstrument_91.insert(UnderlyingRepurchaseTerm_91.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_91("STRING_1849197990");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_91);
      UnderlyingInstrument_91.insert(UnderlyingRestructuringType_91.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_91("STRING_101340692");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityDesc_91.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_91("EXCHANGE_1792159935");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityExchange_91.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_91("STRING_272101596");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityID_91.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_91("STRING_1757864160");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityIDSource_91.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_91("STRING_952199550");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_91);
      UnderlyingInstrument_91.insert(UnderlyingSecuritySubType_91.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_91("STRING_2012896331");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityType_91.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_91("STRING_1246438875");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_91);
      UnderlyingInstrument_91.insert(UnderlyingSeniority_91.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_91("STRING_653411051");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_91);
      UnderlyingInstrument_91.insert(UnderlyingSettlMethod_91.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_91(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_91);
      UnderlyingInstrument_91.insert(UnderlyingSettlementType_91.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_91;
      UnderlyingStartValue_91.setString("11866570");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_91);
      UnderlyingInstrument_91.insert(UnderlyingStartValue_91.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_91("STRING_88814543");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_91);
      UnderlyingInstrument_91.insert(UnderlyingStateOrProvinceOfIssue_91.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_91("JPY");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_91);
      UnderlyingInstrument_91.insert(UnderlyingStrikeCurrency_91.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_91;
      UnderlyingStrikePrice_91.setString("1856097");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_91);
      UnderlyingInstrument_91.insert(UnderlyingStrikePrice_91.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_91("STRING_828216288");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_91);
      UnderlyingInstrument_91.insert(UnderlyingSymbol_91.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_91("STRING_311032969");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_91);
      UnderlyingInstrument_91.insert(UnderlyingSymbolSfx_91.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_91("STRING_903270142");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_91);
      UnderlyingInstrument_91.insert(UnderlyingTimeUnit_91.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_91("STRING_1352141199");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_91);
      UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasure_91.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_91;
      UnderlyingUnitOfMeasureQty_91.setString("3662686");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_91);
      UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasureQty_91.getString());
      all_values.push_back(UnderlyingInstrument_91);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_190;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_190("STRING_1196429901");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_190);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltID_190.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_190("STRING_1062859837");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_190);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltIDSource_190.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_177;
        FIX::UnderlyingStipType UnderlyingStipType_177("STRING_1360536037");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_177);
        UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipType_177.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_177("STRING_2113125738");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_177);
        UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipValue_177.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_177);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_178;
        FIX::UnderlyingStipType UnderlyingStipType_178("STRING_2037094781");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_178);
        UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipType_178.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_178("STRING_1673024635");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_178);
        UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipValue_178.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_178);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_181;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_181("STRING_753977696");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyID_181.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_181('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyIDSource_181.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_181(1740141616);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyRole_181.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_181);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_365("STRING_1376570222");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_365);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubID_365.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_365(2012243212);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_365);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubIDType_365.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_366("STRING_465698900");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_366);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubID_366.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_366(181286124);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_366);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubIDType_366.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_92;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_92("DATA_1877655895");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingIssuer_92.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_92(1712137775);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingIssuerLen_92.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_92("DATA_834697175");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDesc_92.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_92(2106413569);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDescLen_92.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_92;
      UnderlyingAdjustedQuantity_92.setString("7513111");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_92);
      UnderlyingInstrument_92.insert(UnderlyingAdjustedQuantity_92.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_92;
      UnderlyingAllocationPercent_92.setString("17.180000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_92);
      UnderlyingInstrument_92.insert(UnderlyingAllocationPercent_92.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_92;
      UnderlyingAttachmentPoint_92.setString("62.530000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_92);
      UnderlyingInstrument_92.insert(UnderlyingAttachmentPoint_92.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_92("STRING_1877632082");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_92);
      UnderlyingInstrument_92.insert(UnderlyingCFICode_92.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_92("STRING_1109121487");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_92);
      UnderlyingInstrument_92.insert(UnderlyingCPProgram_92.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_92("STRING_1911762541");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_92);
      UnderlyingInstrument_92.insert(UnderlyingCPRegType_92.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_92;
      UnderlyingCapValue_92.setString("411814");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_92);
      UnderlyingInstrument_92.insert(UnderlyingCapValue_92.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_92;
      UnderlyingCashAmount_92.setString("20123916");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_92);
      UnderlyingInstrument_92.insert(UnderlyingCashAmount_92.getString());
      FIX::UnderlyingCashType UnderlyingCashType_92("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_92);
      UnderlyingInstrument_92.insert(UnderlyingCashType_92.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_92;
      UnderlyingContractMultiplier_92.setString("4074500");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_92);
      UnderlyingInstrument_92.insert(UnderlyingContractMultiplier_92.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_92(1728344112);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_92);
      UnderlyingInstrument_92.insert(UnderlyingContractMultiplierUnit_92.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_92("COUNTRY_165366345");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingCountryOfIssue_92.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_92("LOCALMKTDATE_1470309867");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_92);
      UnderlyingInstrument_92.insert(UnderlyingCouponPaymentDate_92.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_92;
      UnderlyingCouponRate_92.setString("34.130000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_92);
      UnderlyingInstrument_92.insert(UnderlyingCouponRate_92.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_92("STRING_1525902383");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_92);
      UnderlyingInstrument_92.insert(UnderlyingCreditRating_92.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_92("CHF");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_92);
      UnderlyingInstrument_92.insert(UnderlyingCurrency_92.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_92;
      UnderlyingCurrentValue_92.setString("10514433");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_92);
      UnderlyingInstrument_92.insert(UnderlyingCurrentValue_92.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_92;
      UnderlyingDetachmentPoint_92.setString("55.840000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_92);
      UnderlyingInstrument_92.insert(UnderlyingDetachmentPoint_92.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_92;
      UnderlyingDirtyPrice_92.setString("14471722");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_92);
      UnderlyingInstrument_92.insert(UnderlyingDirtyPrice_92.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_92;
      UnderlyingEndPrice_92.setString("6358536");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_92);
      UnderlyingInstrument_92.insert(UnderlyingEndPrice_92.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_92;
      UnderlyingEndValue_92.setString("9195535");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_92);
      UnderlyingInstrument_92.insert(UnderlyingEndValue_92.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_92(155006983);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_92);
      UnderlyingInstrument_92.insert(UnderlyingExerciseStyle_92.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_92;
      UnderlyingFXRate_92.setString("20124238");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_92);
      UnderlyingInstrument_92.insert(UnderlyingFXRate_92.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_92('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_92);
      UnderlyingInstrument_92.insert(UnderlyingFXRateCalc_92.getString());
      FIX::UnderlyingFactor UnderlyingFactor_92;
      UnderlyingFactor_92.setString("6207058");
      noUnderlyings_0_1_1.set(UnderlyingFactor_92);
      UnderlyingInstrument_92.insert(UnderlyingFactor_92.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_92(46226354);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_92);
      UnderlyingInstrument_92.insert(UnderlyingFlowScheduleType_92.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_92("STRING_514485364");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_92);
      UnderlyingInstrument_92.insert(UnderlyingInstrRegistry_92.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_92("LOCALMKTDATE_185360010");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_92);
      UnderlyingInstrument_92.insert(UnderlyingIssueDate_92.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_92("STRING_880923530");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_92);
      UnderlyingInstrument_92.insert(UnderlyingIssuer_92.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_92("STRING_473415285");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingLocaleOfIssue_92.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_92("LOCALMKTDATE_936671158");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityDate_92.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_92("MONTHYEAR_1804435248");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityMonthYear_92.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_92("TZTIMEONLY_1556961538");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityTime_92.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_92;
      UnderlyingNotionalPercentageOutstanding_92.setString("95.920000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_92);
      UnderlyingInstrument_92.insert(UnderlyingNotionalPercentageOutstanding_92.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_92('7');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_92);
      UnderlyingInstrument_92.insert(UnderlyingOptAttribute_92.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_92;
      UnderlyingOriginalNotionalPercentageOutstanding_92.setString("4.320000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_92);
      UnderlyingInstrument_92.insert(UnderlyingOriginalNotionalPercentageOutstanding_92.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_92("STRING_708000995");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_92);
      UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasure_92.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_92;
      UnderlyingPriceUnitOfMeasureQty_92.setString("6309810");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_92);
      UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasureQty_92.getString());
      FIX::UnderlyingProduct UnderlyingProduct_92(290176876);
      noUnderlyings_0_1_1.set(UnderlyingProduct_92);
      UnderlyingInstrument_92.insert(UnderlyingProduct_92.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_92(1115451025);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_92);
      UnderlyingInstrument_92.insert(UnderlyingPutOrCall_92.getString());
      FIX::UnderlyingPx UnderlyingPx_92;
      UnderlyingPx_92.setString("2118415");
      noUnderlyings_0_1_1.set(UnderlyingPx_92);
      UnderlyingInstrument_92.insert(UnderlyingPx_92.getString());
      FIX::UnderlyingQty UnderlyingQty_92;
      UnderlyingQty_92.setString("4555432");
      noUnderlyings_0_1_1.set(UnderlyingQty_92);
      UnderlyingInstrument_92.insert(UnderlyingQty_92.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_92("LOCALMKTDATE_438277245");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_92);
      UnderlyingInstrument_92.insert(UnderlyingRedemptionDate_92.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_92("STRING_1015424947");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_92);
      UnderlyingInstrument_92.insert(UnderlyingRepoCollateralSecurityType_92.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_92;
      UnderlyingRepurchaseRate_92.setString("56.050000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_92);
      UnderlyingInstrument_92.insert(UnderlyingRepurchaseRate_92.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_92(1874229202);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_92);
      UnderlyingInstrument_92.insert(UnderlyingRepurchaseTerm_92.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_92("STRING_1708619494");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_92);
      UnderlyingInstrument_92.insert(UnderlyingRestructuringType_92.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_92("STRING_885405327");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityDesc_92.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_92("EXCHANGE_1053641138");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityExchange_92.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_92("STRING_1008308089");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityID_92.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_92("STRING_1521258983");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityIDSource_92.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_92("STRING_1973194691");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_92);
      UnderlyingInstrument_92.insert(UnderlyingSecuritySubType_92.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_92("STRING_1163315072");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityType_92.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_92("STRING_1386199214");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_92);
      UnderlyingInstrument_92.insert(UnderlyingSeniority_92.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_92("STRING_610024160");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_92);
      UnderlyingInstrument_92.insert(UnderlyingSettlMethod_92.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_92(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_92);
      UnderlyingInstrument_92.insert(UnderlyingSettlementType_92.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_92;
      UnderlyingStartValue_92.setString("14324255");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_92);
      UnderlyingInstrument_92.insert(UnderlyingStartValue_92.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_92("STRING_1124509524");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingStateOrProvinceOfIssue_92.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_92("JPY");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_92);
      UnderlyingInstrument_92.insert(UnderlyingStrikeCurrency_92.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_92;
      UnderlyingStrikePrice_92.setString("15979248");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_92);
      UnderlyingInstrument_92.insert(UnderlyingStrikePrice_92.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_92("STRING_758568475");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_92);
      UnderlyingInstrument_92.insert(UnderlyingSymbol_92.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_92("STRING_1970300699");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_92);
      UnderlyingInstrument_92.insert(UnderlyingSymbolSfx_92.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_92("STRING_1007402700");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_92);
      UnderlyingInstrument_92.insert(UnderlyingTimeUnit_92.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_92("STRING_1425388067");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_92);
      UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasure_92.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_92;
      UnderlyingUnitOfMeasureQty_92.setString("5888901");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_92);
      UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasureQty_92.getString());
      all_values.push_back(UnderlyingInstrument_92);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_191;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_191("STRING_2133389062");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_191);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltID_191.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_191("STRING_1219871207");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_191);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltIDSource_191.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_192;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_192("STRING_471336361");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_192);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltID_192.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_192("STRING_1101356439");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_192);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltIDSource_192.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_193;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_193("STRING_1431712741");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltID_193);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltID_193.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_193("STRING_926879583");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltIDSource_193);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltIDSource_193.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_179;
        FIX::UnderlyingStipType UnderlyingStipType_179("STRING_299654040");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_179);
        UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipType_179.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_179("STRING_760841540");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_179);
        UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipValue_179.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_179);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_182;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_182("STRING_2008273534");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyID_182.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_182('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyIDSource_182.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_182(172536729);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyRole_182.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_182);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_367("STRING_1020022202");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_367);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubID_367.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_367(2145731420);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_367);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubIDType_367.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_1);
    }
    msg.addGroup(noQuoteEntries_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_12;
    FIX::TargetPartyID TargetPartyID_12("STRING_258737768");
    noTargetPartyIDs_0_0.set(TargetPartyID_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyID_12.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_12('6');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyIDSource_12.getString());
    FIX::TargetPartyRole TargetPartyRole_12(1668950354);
    noTargetPartyIDs_0_0.set(TargetPartyRole_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyRole_12.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_12);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    FIX::TargetPartyID TargetPartyID_13("STRING_1691163337");
    noTargetPartyIDs_0_1.set(TargetPartyID_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyID_13.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_13('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyIDSource_13.getString());
    FIX::TargetPartyRole TargetPartyRole_13(1490847671);
    noTargetPartyIDs_0_1.set(TargetPartyRole_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyRole_13.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_14;
    FIX::TargetPartyID TargetPartyID_14("STRING_1857028787");
    noTargetPartyIDs_0_2.set(TargetPartyID_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyID_14.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_14('1');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyIDSource_14.getString());
    FIX::TargetPartyRole TargetPartyRole_14(101932498);
    noTargetPartyIDs_0_2.set(TargetPartyRole_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyRole_14.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_14);

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
