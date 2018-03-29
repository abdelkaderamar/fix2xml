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
  FIX::Account Account_34("STRING_392398448");
  msg.set(Account_34);
  QuoteCancel_0.insert(Account_34.getString());
  FIX::AccountType AccountType_29(6);
  msg.set(AccountType_29);
  QuoteCancel_0.insert(AccountType_29.getString());
  FIX::AcctIDSource AcctIDSource_27(4);
  msg.set(AcctIDSource_27);
  QuoteCancel_0.insert(AcctIDSource_27.getString());
  FIX::QuoteCancelType QuoteCancelType_1(3);
  msg.set(QuoteCancelType_1);
  QuoteCancel_0.insert(QuoteCancelType_1.getString());
  FIX::QuoteID QuoteID_11("STRING_954800182");
  msg.set(QuoteID_11);
  QuoteCancel_0.insert(QuoteID_11.getString());
  FIX::QuoteMsgID QuoteMsgID_1("STRING_1082383244");
  msg.set(QuoteMsgID_1);
  QuoteCancel_0.insert(QuoteMsgID_1.getString());
  FIX::QuoteReqID QuoteReqID_3("STRING_1402129730");
  msg.set(QuoteReqID_3);
  QuoteCancel_0.insert(QuoteReqID_3.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_3(0);
  msg.set(QuoteResponseLevel_3);
  QuoteCancel_0.insert(QuoteResponseLevel_3.getString());
  FIX::QuoteType QuoteType_5(0);
  msg.set(QuoteType_5);
  QuoteCancel_0.insert(QuoteType_5.getString());
  FIX::TradingSessionID TradingSessionID_81("STRING_1");
  msg.set(TradingSessionID_81);
  QuoteCancel_0.insert(TradingSessionID_81.getString());
  FIX::TradingSessionSubID TradingSessionSubID_81("STRING_4");
  msg.set(TradingSessionSubID_81);
  QuoteCancel_0.insert(TradingSessionSubID_81.getString());
  all_values.push_back(QuoteCancel_0);

  all_compo_names.insert("QuoteCancel");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_103;
    FIX::PartyID PartyID_103("STRING_1042749895");
    noPartyIDs_0_0.set(PartyID_103);
    Parties_NoPartyIDs_103.insert(PartyID_103.getString());
    FIX::PartyIDSource PartyIDSource_103('F');
    noPartyIDs_0_0.set(PartyIDSource_103);
    Parties_NoPartyIDs_103.insert(PartyIDSource_103.getString());
    FIX::PartyRole PartyRole_103(67);
    noPartyIDs_0_0.set(PartyRole_103);
    Parties_NoPartyIDs_103.insert(PartyRole_103.getString());
    all_values.push_back(Parties_NoPartyIDs_103);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_229;
      FIX::PartySubID PartySubID_229("STRING_836705664");
      noPartySubIDs_0_1_0.set(PartySubID_229);
      PtysSubGrp_NoPartySubIDs_229.insert(PartySubID_229.getString());
      FIX::PartySubIDType PartySubIDType_229(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_229);
      PtysSubGrp_NoPartySubIDs_229.insert(PartySubIDType_229.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_229);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_230;
      FIX::PartySubID PartySubID_230("STRING_1706847438");
      noPartySubIDs_0_1_1.set(PartySubID_230);
      PtysSubGrp_NoPartySubIDs_230.insert(PartySubID_230.getString());
      FIX::PartySubIDType PartySubIDType_230(4);
      noPartySubIDs_0_1_1.set(PartySubIDType_230);
      PtysSubGrp_NoPartySubIDs_230.insert(PartySubIDType_230.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_230);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_231;
      FIX::PartySubID PartySubID_231("STRING_283458075");
      noPartySubIDs_0_1_2.set(PartySubID_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubID_231.getString());
      FIX::PartySubIDType PartySubIDType_231(33);
      noPartySubIDs_0_1_2.set(PartySubIDType_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubIDType_231.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_231);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

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
    FIX::AgreementCurrency AgreementCurrency_17("USD");
    noQuoteEntries_0_0.set(AgreementCurrency_17);
    FinancingDetails_17.insert(AgreementCurrency_17.getString());
    FIX::AgreementDate AgreementDate_17("LOCALMKTDATE_980800220");
    noQuoteEntries_0_0.set(AgreementDate_17);
    FinancingDetails_17.insert(AgreementDate_17.getString());
    FIX::AgreementDesc AgreementDesc_17("STRING_2075837130");
    noQuoteEntries_0_0.set(AgreementDesc_17);
    FinancingDetails_17.insert(AgreementDesc_17.getString());
    FIX::AgreementID AgreementID_17("STRING_2128219648");
    noQuoteEntries_0_0.set(AgreementID_17);
    FinancingDetails_17.insert(AgreementID_17.getString());
    FIX::DeliveryType DeliveryType_17(3);
    noQuoteEntries_0_0.set(DeliveryType_17);
    FinancingDetails_17.insert(DeliveryType_17.getString());
    FIX::EndDate EndDate_17("LOCALMKTDATE_356031551");
    noQuoteEntries_0_0.set(EndDate_17);
    FinancingDetails_17.insert(EndDate_17.getString());
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("2.950000");
    noQuoteEntries_0_0.set(MarginRatio_17);
    FinancingDetails_17.insert(MarginRatio_17.getString());
    FIX::StartDate StartDate_17("LOCALMKTDATE_94542215");
    noQuoteEntries_0_0.set(StartDate_17);
    FinancingDetails_17.insert(StartDate_17.getString());
    FIX::TerminationType TerminationType_17(2);
    noQuoteEntries_0_0.set(TerminationType_17);
    FinancingDetails_17.insert(TerminationType_17.getString());
    all_values.push_back(FinancingDetails_17);
    all_compo_names.insert("FinancingDetails");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_102;
      FIX::EncodedLegIssuer EncodedLegIssuer_102("DATA_1622058658");
      noLegs_0_1_0.set(EncodedLegIssuer_102);
      InstrumentLeg_102.insert(EncodedLegIssuer_102.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_102(540558596);
      noLegs_0_1_0.set(EncodedLegIssuerLen_102);
      InstrumentLeg_102.insert(EncodedLegIssuerLen_102.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_102("DATA_1497866527");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_102);
      InstrumentLeg_102.insert(EncodedLegSecurityDesc_102.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_102(876704740);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_102);
      InstrumentLeg_102.insert(EncodedLegSecurityDescLen_102.getString());
      FIX::LegCFICode LegCFICode_102("STRING_166119128");
      noLegs_0_1_0.set(LegCFICode_102);
      InstrumentLeg_102.insert(LegCFICode_102.getString());
      FIX::LegContractMultiplier LegContractMultiplier_102;
      LegContractMultiplier_102.setString("1377676");
      noLegs_0_1_0.set(LegContractMultiplier_102);
      InstrumentLeg_102.insert(LegContractMultiplier_102.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_102(1187146438);
      noLegs_0_1_0.set(LegContractMultiplierUnit_102);
      InstrumentLeg_102.insert(LegContractMultiplierUnit_102.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_102("MONTHYEAR_1361502075");
      noLegs_0_1_0.set(LegContractSettlMonth_102);
      InstrumentLeg_102.insert(LegContractSettlMonth_102.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_102("COUNTRY_390497530");
      noLegs_0_1_0.set(LegCountryOfIssue_102);
      InstrumentLeg_102.insert(LegCountryOfIssue_102.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_102("LOCALMKTDATE_82412685");
      noLegs_0_1_0.set(LegCouponPaymentDate_102);
      InstrumentLeg_102.insert(LegCouponPaymentDate_102.getString());
      FIX::LegCouponRate LegCouponRate_102;
      LegCouponRate_102.setString("95.340000");
      noLegs_0_1_0.set(LegCouponRate_102);
      InstrumentLeg_102.insert(LegCouponRate_102.getString());
      FIX::LegCreditRating LegCreditRating_102("STRING_2010178707");
      noLegs_0_1_0.set(LegCreditRating_102);
      InstrumentLeg_102.insert(LegCreditRating_102.getString());
      FIX::LegCurrency LegCurrency_102("JPY");
      noLegs_0_1_0.set(LegCurrency_102);
      InstrumentLeg_102.insert(LegCurrency_102.getString());
      FIX::LegDatedDate LegDatedDate_102("LOCALMKTDATE_125620205");
      noLegs_0_1_0.set(LegDatedDate_102);
      InstrumentLeg_102.insert(LegDatedDate_102.getString());
      FIX::LegExerciseStyle LegExerciseStyle_102(344848363);
      noLegs_0_1_0.set(LegExerciseStyle_102);
      InstrumentLeg_102.insert(LegExerciseStyle_102.getString());
      FIX::LegFactor LegFactor_102;
      LegFactor_102.setString("11811394");
      noLegs_0_1_0.set(LegFactor_102);
      InstrumentLeg_102.insert(LegFactor_102.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_102(409078280);
      noLegs_0_1_0.set(LegFlowScheduleType_102);
      InstrumentLeg_102.insert(LegFlowScheduleType_102.getString());
      FIX::LegInstrRegistry LegInstrRegistry_102("STRING_1910593555");
      noLegs_0_1_0.set(LegInstrRegistry_102);
      InstrumentLeg_102.insert(LegInstrRegistry_102.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_102("LOCALMKTDATE_154068471");
      noLegs_0_1_0.set(LegInterestAccrualDate_102);
      InstrumentLeg_102.insert(LegInterestAccrualDate_102.getString());
      FIX::LegIssueDate LegIssueDate_102("LOCALMKTDATE_1029395200");
      noLegs_0_1_0.set(LegIssueDate_102);
      InstrumentLeg_102.insert(LegIssueDate_102.getString());
      FIX::LegIssuer LegIssuer_102("STRING_603146285");
      noLegs_0_1_0.set(LegIssuer_102);
      InstrumentLeg_102.insert(LegIssuer_102.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_102("STRING_1134868691");
      noLegs_0_1_0.set(LegLocaleOfIssue_102);
      InstrumentLeg_102.insert(LegLocaleOfIssue_102.getString());
      FIX::LegMaturityDate LegMaturityDate_102("LOCALMKTDATE_957748682");
      noLegs_0_1_0.set(LegMaturityDate_102);
      InstrumentLeg_102.insert(LegMaturityDate_102.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_102("MONTHYEAR_583882286");
      noLegs_0_1_0.set(LegMaturityMonthYear_102);
      InstrumentLeg_102.insert(LegMaturityMonthYear_102.getString());
      FIX::LegMaturityTime LegMaturityTime_102("TZTIMEONLY_837012458");
      noLegs_0_1_0.set(LegMaturityTime_102);
      InstrumentLeg_102.insert(LegMaturityTime_102.getString());
      FIX::LegOptAttribute LegOptAttribute_102('1');
      noLegs_0_1_0.set(LegOptAttribute_102);
      InstrumentLeg_102.insert(LegOptAttribute_102.getString());
      FIX::LegOptionRatio LegOptionRatio_102;
      LegOptionRatio_102.setString("14733425");
      noLegs_0_1_0.set(LegOptionRatio_102);
      InstrumentLeg_102.insert(LegOptionRatio_102.getString());
      FIX::LegPool LegPool_102("STRING_931554674");
      noLegs_0_1_0.set(LegPool_102);
      InstrumentLeg_102.insert(LegPool_102.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_102("STRING_899538647");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_102);
      InstrumentLeg_102.insert(LegPriceUnitOfMeasure_102.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_102;
      LegPriceUnitOfMeasureQty_102.setString("18888258");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_102);
      InstrumentLeg_102.insert(LegPriceUnitOfMeasureQty_102.getString());
      FIX::LegProduct LegProduct_102(406129684);
      noLegs_0_1_0.set(LegProduct_102);
      InstrumentLeg_102.insert(LegProduct_102.getString());
      FIX::LegPutOrCall LegPutOrCall_102(1440097243);
      noLegs_0_1_0.set(LegPutOrCall_102);
      InstrumentLeg_102.insert(LegPutOrCall_102.getString());
      FIX::LegRatioQty LegRatioQty_102;
      LegRatioQty_102.setString("12392087");
      noLegs_0_1_0.set(LegRatioQty_102);
      InstrumentLeg_102.insert(LegRatioQty_102.getString());
      FIX::LegRedemptionDate LegRedemptionDate_102("LOCALMKTDATE_1282834424");
      noLegs_0_1_0.set(LegRedemptionDate_102);
      InstrumentLeg_102.insert(LegRedemptionDate_102.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_102("STRING_1606216371");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_102);
      InstrumentLeg_102.insert(LegRepoCollateralSecurityType_102.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_102;
      LegRepurchaseRate_102.setString("64.390000");
      noLegs_0_1_0.set(LegRepurchaseRate_102);
      InstrumentLeg_102.insert(LegRepurchaseRate_102.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_102(322497214);
      noLegs_0_1_0.set(LegRepurchaseTerm_102);
      InstrumentLeg_102.insert(LegRepurchaseTerm_102.getString());
      FIX::LegSecurityDesc LegSecurityDesc_102("STRING_820234798");
      noLegs_0_1_0.set(LegSecurityDesc_102);
      InstrumentLeg_102.insert(LegSecurityDesc_102.getString());
      FIX::LegSecurityExchange LegSecurityExchange_102("EXCHANGE_1767473969");
      noLegs_0_1_0.set(LegSecurityExchange_102);
      InstrumentLeg_102.insert(LegSecurityExchange_102.getString());
      FIX::LegSecurityID LegSecurityID_102("STRING_404909899");
      noLegs_0_1_0.set(LegSecurityID_102);
      InstrumentLeg_102.insert(LegSecurityID_102.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_102("STRING_909654332");
      noLegs_0_1_0.set(LegSecurityIDSource_102);
      InstrumentLeg_102.insert(LegSecurityIDSource_102.getString());
      FIX::LegSecuritySubType LegSecuritySubType_102("STRING_1630169028");
      noLegs_0_1_0.set(LegSecuritySubType_102);
      InstrumentLeg_102.insert(LegSecuritySubType_102.getString());
      FIX::LegSecurityType LegSecurityType_102("STRING_1190394472");
      noLegs_0_1_0.set(LegSecurityType_102);
      InstrumentLeg_102.insert(LegSecurityType_102.getString());
      FIX::LegSide LegSide_102('1');
      noLegs_0_1_0.set(LegSide_102);
      InstrumentLeg_102.insert(LegSide_102.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_102("STRING_1755789234");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_102);
      InstrumentLeg_102.insert(LegStateOrProvinceOfIssue_102.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_102("CAN");
      noLegs_0_1_0.set(LegStrikeCurrency_102);
      InstrumentLeg_102.insert(LegStrikeCurrency_102.getString());
      FIX::LegStrikePrice LegStrikePrice_102;
      LegStrikePrice_102.setString("173838");
      noLegs_0_1_0.set(LegStrikePrice_102);
      InstrumentLeg_102.insert(LegStrikePrice_102.getString());
      FIX::LegSymbol LegSymbol_102("STRING_1298352743");
      noLegs_0_1_0.set(LegSymbol_102);
      InstrumentLeg_102.insert(LegSymbol_102.getString());
      FIX::LegSymbolSfx LegSymbolSfx_102("STRING_1023503787");
      noLegs_0_1_0.set(LegSymbolSfx_102);
      InstrumentLeg_102.insert(LegSymbolSfx_102.getString());
      FIX::LegTimeUnit LegTimeUnit_102("STRING_1046779067");
      noLegs_0_1_0.set(LegTimeUnit_102);
      InstrumentLeg_102.insert(LegTimeUnit_102.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_102("STRING_1901499028");
      noLegs_0_1_0.set(LegUnitOfMeasure_102);
      InstrumentLeg_102.insert(LegUnitOfMeasure_102.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_102;
      LegUnitOfMeasureQty_102.setString("108888");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_102);
      InstrumentLeg_102.insert(LegUnitOfMeasureQty_102.getString());
      all_values.push_back(InstrumentLeg_102);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_210;
        FIX::LegSecurityAltID LegSecurityAltID_210("STRING_337897666");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_210);
        LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltID_210.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_210("STRING_847901289");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_210);
        LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltIDSource_210.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_210);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_211;
        FIX::LegSecurityAltID LegSecurityAltID_211("STRING_1170824335");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_211);
        LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltID_211.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_211("STRING_1811240248");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_211);
        LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltIDSource_211.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_211);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_103;
      FIX::EncodedLegIssuer EncodedLegIssuer_103("DATA_1779455963");
      noLegs_0_1_1.set(EncodedLegIssuer_103);
      InstrumentLeg_103.insert(EncodedLegIssuer_103.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_103(2070362982);
      noLegs_0_1_1.set(EncodedLegIssuerLen_103);
      InstrumentLeg_103.insert(EncodedLegIssuerLen_103.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_103("DATA_1552582464");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_103);
      InstrumentLeg_103.insert(EncodedLegSecurityDesc_103.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_103(38101999);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_103);
      InstrumentLeg_103.insert(EncodedLegSecurityDescLen_103.getString());
      FIX::LegCFICode LegCFICode_103("STRING_1362976577");
      noLegs_0_1_1.set(LegCFICode_103);
      InstrumentLeg_103.insert(LegCFICode_103.getString());
      FIX::LegContractMultiplier LegContractMultiplier_103;
      LegContractMultiplier_103.setString("6443075");
      noLegs_0_1_1.set(LegContractMultiplier_103);
      InstrumentLeg_103.insert(LegContractMultiplier_103.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_103(1320936423);
      noLegs_0_1_1.set(LegContractMultiplierUnit_103);
      InstrumentLeg_103.insert(LegContractMultiplierUnit_103.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_103("MONTHYEAR_821709300");
      noLegs_0_1_1.set(LegContractSettlMonth_103);
      InstrumentLeg_103.insert(LegContractSettlMonth_103.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_103("COUNTRY_2021284000");
      noLegs_0_1_1.set(LegCountryOfIssue_103);
      InstrumentLeg_103.insert(LegCountryOfIssue_103.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_103("LOCALMKTDATE_1643433637");
      noLegs_0_1_1.set(LegCouponPaymentDate_103);
      InstrumentLeg_103.insert(LegCouponPaymentDate_103.getString());
      FIX::LegCouponRate LegCouponRate_103;
      LegCouponRate_103.setString("40.980000");
      noLegs_0_1_1.set(LegCouponRate_103);
      InstrumentLeg_103.insert(LegCouponRate_103.getString());
      FIX::LegCreditRating LegCreditRating_103("STRING_1641274321");
      noLegs_0_1_1.set(LegCreditRating_103);
      InstrumentLeg_103.insert(LegCreditRating_103.getString());
      FIX::LegCurrency LegCurrency_103("JPY");
      noLegs_0_1_1.set(LegCurrency_103);
      InstrumentLeg_103.insert(LegCurrency_103.getString());
      FIX::LegDatedDate LegDatedDate_103("LOCALMKTDATE_1123959702");
      noLegs_0_1_1.set(LegDatedDate_103);
      InstrumentLeg_103.insert(LegDatedDate_103.getString());
      FIX::LegExerciseStyle LegExerciseStyle_103(1091254361);
      noLegs_0_1_1.set(LegExerciseStyle_103);
      InstrumentLeg_103.insert(LegExerciseStyle_103.getString());
      FIX::LegFactor LegFactor_103;
      LegFactor_103.setString("924106");
      noLegs_0_1_1.set(LegFactor_103);
      InstrumentLeg_103.insert(LegFactor_103.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_103(732265288);
      noLegs_0_1_1.set(LegFlowScheduleType_103);
      InstrumentLeg_103.insert(LegFlowScheduleType_103.getString());
      FIX::LegInstrRegistry LegInstrRegistry_103("STRING_479013549");
      noLegs_0_1_1.set(LegInstrRegistry_103);
      InstrumentLeg_103.insert(LegInstrRegistry_103.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_103("LOCALMKTDATE_961845979");
      noLegs_0_1_1.set(LegInterestAccrualDate_103);
      InstrumentLeg_103.insert(LegInterestAccrualDate_103.getString());
      FIX::LegIssueDate LegIssueDate_103("LOCALMKTDATE_749649154");
      noLegs_0_1_1.set(LegIssueDate_103);
      InstrumentLeg_103.insert(LegIssueDate_103.getString());
      FIX::LegIssuer LegIssuer_103("STRING_1777366292");
      noLegs_0_1_1.set(LegIssuer_103);
      InstrumentLeg_103.insert(LegIssuer_103.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_103("STRING_1985349766");
      noLegs_0_1_1.set(LegLocaleOfIssue_103);
      InstrumentLeg_103.insert(LegLocaleOfIssue_103.getString());
      FIX::LegMaturityDate LegMaturityDate_103("LOCALMKTDATE_1796428221");
      noLegs_0_1_1.set(LegMaturityDate_103);
      InstrumentLeg_103.insert(LegMaturityDate_103.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_103("MONTHYEAR_1531381672");
      noLegs_0_1_1.set(LegMaturityMonthYear_103);
      InstrumentLeg_103.insert(LegMaturityMonthYear_103.getString());
      FIX::LegMaturityTime LegMaturityTime_103("TZTIMEONLY_1996238597");
      noLegs_0_1_1.set(LegMaturityTime_103);
      InstrumentLeg_103.insert(LegMaturityTime_103.getString());
      FIX::LegOptAttribute LegOptAttribute_103('1');
      noLegs_0_1_1.set(LegOptAttribute_103);
      InstrumentLeg_103.insert(LegOptAttribute_103.getString());
      FIX::LegOptionRatio LegOptionRatio_103;
      LegOptionRatio_103.setString("18692793");
      noLegs_0_1_1.set(LegOptionRatio_103);
      InstrumentLeg_103.insert(LegOptionRatio_103.getString());
      FIX::LegPool LegPool_103("STRING_696656238");
      noLegs_0_1_1.set(LegPool_103);
      InstrumentLeg_103.insert(LegPool_103.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_103("STRING_676813010");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_103);
      InstrumentLeg_103.insert(LegPriceUnitOfMeasure_103.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_103;
      LegPriceUnitOfMeasureQty_103.setString("15330359");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_103);
      InstrumentLeg_103.insert(LegPriceUnitOfMeasureQty_103.getString());
      FIX::LegProduct LegProduct_103(328628553);
      noLegs_0_1_1.set(LegProduct_103);
      InstrumentLeg_103.insert(LegProduct_103.getString());
      FIX::LegPutOrCall LegPutOrCall_103(599692344);
      noLegs_0_1_1.set(LegPutOrCall_103);
      InstrumentLeg_103.insert(LegPutOrCall_103.getString());
      FIX::LegRatioQty LegRatioQty_103;
      LegRatioQty_103.setString("9381347");
      noLegs_0_1_1.set(LegRatioQty_103);
      InstrumentLeg_103.insert(LegRatioQty_103.getString());
      FIX::LegRedemptionDate LegRedemptionDate_103("LOCALMKTDATE_366730552");
      noLegs_0_1_1.set(LegRedemptionDate_103);
      InstrumentLeg_103.insert(LegRedemptionDate_103.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_103("STRING_1962668921");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_103);
      InstrumentLeg_103.insert(LegRepoCollateralSecurityType_103.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_103;
      LegRepurchaseRate_103.setString("23.160000");
      noLegs_0_1_1.set(LegRepurchaseRate_103);
      InstrumentLeg_103.insert(LegRepurchaseRate_103.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_103(1687666975);
      noLegs_0_1_1.set(LegRepurchaseTerm_103);
      InstrumentLeg_103.insert(LegRepurchaseTerm_103.getString());
      FIX::LegSecurityDesc LegSecurityDesc_103("STRING_636894573");
      noLegs_0_1_1.set(LegSecurityDesc_103);
      InstrumentLeg_103.insert(LegSecurityDesc_103.getString());
      FIX::LegSecurityExchange LegSecurityExchange_103("EXCHANGE_1456242668");
      noLegs_0_1_1.set(LegSecurityExchange_103);
      InstrumentLeg_103.insert(LegSecurityExchange_103.getString());
      FIX::LegSecurityID LegSecurityID_103("STRING_1183616964");
      noLegs_0_1_1.set(LegSecurityID_103);
      InstrumentLeg_103.insert(LegSecurityID_103.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_103("STRING_131355023");
      noLegs_0_1_1.set(LegSecurityIDSource_103);
      InstrumentLeg_103.insert(LegSecurityIDSource_103.getString());
      FIX::LegSecuritySubType LegSecuritySubType_103("STRING_950033341");
      noLegs_0_1_1.set(LegSecuritySubType_103);
      InstrumentLeg_103.insert(LegSecuritySubType_103.getString());
      FIX::LegSecurityType LegSecurityType_103("STRING_1084476852");
      noLegs_0_1_1.set(LegSecurityType_103);
      InstrumentLeg_103.insert(LegSecurityType_103.getString());
      FIX::LegSide LegSide_103('5');
      noLegs_0_1_1.set(LegSide_103);
      InstrumentLeg_103.insert(LegSide_103.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_103("STRING_2073993043");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_103);
      InstrumentLeg_103.insert(LegStateOrProvinceOfIssue_103.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_103("CAN");
      noLegs_0_1_1.set(LegStrikeCurrency_103);
      InstrumentLeg_103.insert(LegStrikeCurrency_103.getString());
      FIX::LegStrikePrice LegStrikePrice_103;
      LegStrikePrice_103.setString("6587746");
      noLegs_0_1_1.set(LegStrikePrice_103);
      InstrumentLeg_103.insert(LegStrikePrice_103.getString());
      FIX::LegSymbol LegSymbol_103("STRING_507261114");
      noLegs_0_1_1.set(LegSymbol_103);
      InstrumentLeg_103.insert(LegSymbol_103.getString());
      FIX::LegSymbolSfx LegSymbolSfx_103("STRING_1589726448");
      noLegs_0_1_1.set(LegSymbolSfx_103);
      InstrumentLeg_103.insert(LegSymbolSfx_103.getString());
      FIX::LegTimeUnit LegTimeUnit_103("STRING_1408423838");
      noLegs_0_1_1.set(LegTimeUnit_103);
      InstrumentLeg_103.insert(LegTimeUnit_103.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_103("STRING_137143758");
      noLegs_0_1_1.set(LegUnitOfMeasure_103);
      InstrumentLeg_103.insert(LegUnitOfMeasure_103.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_103;
      LegUnitOfMeasureQty_103.setString("14275925");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_103);
      InstrumentLeg_103.insert(LegUnitOfMeasureQty_103.getString());
      all_values.push_back(InstrumentLeg_103);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_212;
        FIX::LegSecurityAltID LegSecurityAltID_212("STRING_1668525431");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_212);
        LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltID_212.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_212("STRING_1276347516");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_212);
        LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltIDSource_212.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_212);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_104;
      FIX::EncodedLegIssuer EncodedLegIssuer_104("DATA_563357086");
      noLegs_0_1_2.set(EncodedLegIssuer_104);
      InstrumentLeg_104.insert(EncodedLegIssuer_104.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_104(1390321122);
      noLegs_0_1_2.set(EncodedLegIssuerLen_104);
      InstrumentLeg_104.insert(EncodedLegIssuerLen_104.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_104("DATA_1973003754");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_104);
      InstrumentLeg_104.insert(EncodedLegSecurityDesc_104.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_104(1240170096);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_104);
      InstrumentLeg_104.insert(EncodedLegSecurityDescLen_104.getString());
      FIX::LegCFICode LegCFICode_104("STRING_775873413");
      noLegs_0_1_2.set(LegCFICode_104);
      InstrumentLeg_104.insert(LegCFICode_104.getString());
      FIX::LegContractMultiplier LegContractMultiplier_104;
      LegContractMultiplier_104.setString("1541486");
      noLegs_0_1_2.set(LegContractMultiplier_104);
      InstrumentLeg_104.insert(LegContractMultiplier_104.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_104(1839862440);
      noLegs_0_1_2.set(LegContractMultiplierUnit_104);
      InstrumentLeg_104.insert(LegContractMultiplierUnit_104.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_104("MONTHYEAR_1714008168");
      noLegs_0_1_2.set(LegContractSettlMonth_104);
      InstrumentLeg_104.insert(LegContractSettlMonth_104.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_104("COUNTRY_520879211");
      noLegs_0_1_2.set(LegCountryOfIssue_104);
      InstrumentLeg_104.insert(LegCountryOfIssue_104.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_104("LOCALMKTDATE_1655047713");
      noLegs_0_1_2.set(LegCouponPaymentDate_104);
      InstrumentLeg_104.insert(LegCouponPaymentDate_104.getString());
      FIX::LegCouponRate LegCouponRate_104;
      LegCouponRate_104.setString("68.360000");
      noLegs_0_1_2.set(LegCouponRate_104);
      InstrumentLeg_104.insert(LegCouponRate_104.getString());
      FIX::LegCreditRating LegCreditRating_104("STRING_61062538");
      noLegs_0_1_2.set(LegCreditRating_104);
      InstrumentLeg_104.insert(LegCreditRating_104.getString());
      FIX::LegCurrency LegCurrency_104("JPY");
      noLegs_0_1_2.set(LegCurrency_104);
      InstrumentLeg_104.insert(LegCurrency_104.getString());
      FIX::LegDatedDate LegDatedDate_104("LOCALMKTDATE_1244679502");
      noLegs_0_1_2.set(LegDatedDate_104);
      InstrumentLeg_104.insert(LegDatedDate_104.getString());
      FIX::LegExerciseStyle LegExerciseStyle_104(275813661);
      noLegs_0_1_2.set(LegExerciseStyle_104);
      InstrumentLeg_104.insert(LegExerciseStyle_104.getString());
      FIX::LegFactor LegFactor_104;
      LegFactor_104.setString("14077591");
      noLegs_0_1_2.set(LegFactor_104);
      InstrumentLeg_104.insert(LegFactor_104.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_104(181672706);
      noLegs_0_1_2.set(LegFlowScheduleType_104);
      InstrumentLeg_104.insert(LegFlowScheduleType_104.getString());
      FIX::LegInstrRegistry LegInstrRegistry_104("STRING_811283466");
      noLegs_0_1_2.set(LegInstrRegistry_104);
      InstrumentLeg_104.insert(LegInstrRegistry_104.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_104("LOCALMKTDATE_1334268593");
      noLegs_0_1_2.set(LegInterestAccrualDate_104);
      InstrumentLeg_104.insert(LegInterestAccrualDate_104.getString());
      FIX::LegIssueDate LegIssueDate_104("LOCALMKTDATE_209920272");
      noLegs_0_1_2.set(LegIssueDate_104);
      InstrumentLeg_104.insert(LegIssueDate_104.getString());
      FIX::LegIssuer LegIssuer_104("STRING_1439163935");
      noLegs_0_1_2.set(LegIssuer_104);
      InstrumentLeg_104.insert(LegIssuer_104.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_104("STRING_1993043277");
      noLegs_0_1_2.set(LegLocaleOfIssue_104);
      InstrumentLeg_104.insert(LegLocaleOfIssue_104.getString());
      FIX::LegMaturityDate LegMaturityDate_104("LOCALMKTDATE_717181386");
      noLegs_0_1_2.set(LegMaturityDate_104);
      InstrumentLeg_104.insert(LegMaturityDate_104.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_104("MONTHYEAR_881406736");
      noLegs_0_1_2.set(LegMaturityMonthYear_104);
      InstrumentLeg_104.insert(LegMaturityMonthYear_104.getString());
      FIX::LegMaturityTime LegMaturityTime_104("TZTIMEONLY_1253983467");
      noLegs_0_1_2.set(LegMaturityTime_104);
      InstrumentLeg_104.insert(LegMaturityTime_104.getString());
      FIX::LegOptAttribute LegOptAttribute_104('8');
      noLegs_0_1_2.set(LegOptAttribute_104);
      InstrumentLeg_104.insert(LegOptAttribute_104.getString());
      FIX::LegOptionRatio LegOptionRatio_104;
      LegOptionRatio_104.setString("1615156");
      noLegs_0_1_2.set(LegOptionRatio_104);
      InstrumentLeg_104.insert(LegOptionRatio_104.getString());
      FIX::LegPool LegPool_104("STRING_163868230");
      noLegs_0_1_2.set(LegPool_104);
      InstrumentLeg_104.insert(LegPool_104.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_104("STRING_375366928");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_104);
      InstrumentLeg_104.insert(LegPriceUnitOfMeasure_104.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_104;
      LegPriceUnitOfMeasureQty_104.setString("14378631");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_104);
      InstrumentLeg_104.insert(LegPriceUnitOfMeasureQty_104.getString());
      FIX::LegProduct LegProduct_104(727225317);
      noLegs_0_1_2.set(LegProduct_104);
      InstrumentLeg_104.insert(LegProduct_104.getString());
      FIX::LegPutOrCall LegPutOrCall_104(1765688050);
      noLegs_0_1_2.set(LegPutOrCall_104);
      InstrumentLeg_104.insert(LegPutOrCall_104.getString());
      FIX::LegRatioQty LegRatioQty_104;
      LegRatioQty_104.setString("12633832");
      noLegs_0_1_2.set(LegRatioQty_104);
      InstrumentLeg_104.insert(LegRatioQty_104.getString());
      FIX::LegRedemptionDate LegRedemptionDate_104("LOCALMKTDATE_1967395413");
      noLegs_0_1_2.set(LegRedemptionDate_104);
      InstrumentLeg_104.insert(LegRedemptionDate_104.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_104("STRING_394077815");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_104);
      InstrumentLeg_104.insert(LegRepoCollateralSecurityType_104.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_104;
      LegRepurchaseRate_104.setString("19.360000");
      noLegs_0_1_2.set(LegRepurchaseRate_104);
      InstrumentLeg_104.insert(LegRepurchaseRate_104.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_104(1659774206);
      noLegs_0_1_2.set(LegRepurchaseTerm_104);
      InstrumentLeg_104.insert(LegRepurchaseTerm_104.getString());
      FIX::LegSecurityDesc LegSecurityDesc_104("STRING_2108085983");
      noLegs_0_1_2.set(LegSecurityDesc_104);
      InstrumentLeg_104.insert(LegSecurityDesc_104.getString());
      FIX::LegSecurityExchange LegSecurityExchange_104("EXCHANGE_1938411147");
      noLegs_0_1_2.set(LegSecurityExchange_104);
      InstrumentLeg_104.insert(LegSecurityExchange_104.getString());
      FIX::LegSecurityID LegSecurityID_104("STRING_1167338271");
      noLegs_0_1_2.set(LegSecurityID_104);
      InstrumentLeg_104.insert(LegSecurityID_104.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_104("STRING_1109569172");
      noLegs_0_1_2.set(LegSecurityIDSource_104);
      InstrumentLeg_104.insert(LegSecurityIDSource_104.getString());
      FIX::LegSecuritySubType LegSecuritySubType_104("STRING_1999473685");
      noLegs_0_1_2.set(LegSecuritySubType_104);
      InstrumentLeg_104.insert(LegSecuritySubType_104.getString());
      FIX::LegSecurityType LegSecurityType_104("STRING_1311796910");
      noLegs_0_1_2.set(LegSecurityType_104);
      InstrumentLeg_104.insert(LegSecurityType_104.getString());
      FIX::LegSide LegSide_104('1');
      noLegs_0_1_2.set(LegSide_104);
      InstrumentLeg_104.insert(LegSide_104.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_104("STRING_1096669539");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_104);
      InstrumentLeg_104.insert(LegStateOrProvinceOfIssue_104.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_104("JPY");
      noLegs_0_1_2.set(LegStrikeCurrency_104);
      InstrumentLeg_104.insert(LegStrikeCurrency_104.getString());
      FIX::LegStrikePrice LegStrikePrice_104;
      LegStrikePrice_104.setString("12783422");
      noLegs_0_1_2.set(LegStrikePrice_104);
      InstrumentLeg_104.insert(LegStrikePrice_104.getString());
      FIX::LegSymbol LegSymbol_104("STRING_251410390");
      noLegs_0_1_2.set(LegSymbol_104);
      InstrumentLeg_104.insert(LegSymbol_104.getString());
      FIX::LegSymbolSfx LegSymbolSfx_104("STRING_14355524");
      noLegs_0_1_2.set(LegSymbolSfx_104);
      InstrumentLeg_104.insert(LegSymbolSfx_104.getString());
      FIX::LegTimeUnit LegTimeUnit_104("STRING_1488262517");
      noLegs_0_1_2.set(LegTimeUnit_104);
      InstrumentLeg_104.insert(LegTimeUnit_104.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_104("STRING_1690574325");
      noLegs_0_1_2.set(LegUnitOfMeasure_104);
      InstrumentLeg_104.insert(LegUnitOfMeasure_104.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_104;
      LegUnitOfMeasureQty_104.setString("20073988");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_104);
      InstrumentLeg_104.insert(LegUnitOfMeasureQty_104.getString());
      all_values.push_back(InstrumentLeg_104);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_213;
        FIX::LegSecurityAltID LegSecurityAltID_213("STRING_424497413");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_213);
        LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltID_213.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_213("STRING_1113898620");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_213);
        LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltIDSource_213.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_213);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_214;
        FIX::LegSecurityAltID LegSecurityAltID_214("STRING_912285401");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_214);
        LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltID_214.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_214("STRING_586013068");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_214);
        LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltIDSource_214.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_214);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_67;
    FIX::AttachmentPoint AttachmentPoint_67;
    AttachmentPoint_67.setString("68.500000");
    noQuoteEntries_0_0.set(AttachmentPoint_67);
    Instrument_67.insert(AttachmentPoint_67.getString());
    FIX::CFICode CFICode_67("STRING_1287652329");
    noQuoteEntries_0_0.set(CFICode_67);
    Instrument_67.insert(CFICode_67.getString());
    FIX::CPProgram CPProgram_67(1);
    noQuoteEntries_0_0.set(CPProgram_67);
    Instrument_67.insert(CPProgram_67.getString());
    FIX::CPRegType CPRegType_67("STRING_2004992167");
    noQuoteEntries_0_0.set(CPRegType_67);
    Instrument_67.insert(CPRegType_67.getString());
    FIX::CapPrice CapPrice_67;
    CapPrice_67.setString("9058567");
    noQuoteEntries_0_0.set(CapPrice_67);
    Instrument_67.insert(CapPrice_67.getString());
    FIX::ContractMultiplier ContractMultiplier_67;
    ContractMultiplier_67.setString("11397758");
    noQuoteEntries_0_0.set(ContractMultiplier_67);
    Instrument_67.insert(ContractMultiplier_67.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_67(0);
    noQuoteEntries_0_0.set(ContractMultiplierUnit_67);
    Instrument_67.insert(ContractMultiplierUnit_67.getString());
    FIX::ContractSettlMonth ContractSettlMonth_67("MONTHYEAR_1299934546");
    noQuoteEntries_0_0.set(ContractSettlMonth_67);
    Instrument_67.insert(ContractSettlMonth_67.getString());
    FIX::CountryOfIssue CountryOfIssue_67("COUNTRY_409824156");
    noQuoteEntries_0_0.set(CountryOfIssue_67);
    Instrument_67.insert(CountryOfIssue_67.getString());
    FIX::CouponPaymentDate CouponPaymentDate_67("LOCALMKTDATE_1337194491");
    noQuoteEntries_0_0.set(CouponPaymentDate_67);
    Instrument_67.insert(CouponPaymentDate_67.getString());
    FIX::CouponRate CouponRate_67;
    CouponRate_67.setString("68.810000");
    noQuoteEntries_0_0.set(CouponRate_67);
    Instrument_67.insert(CouponRate_67.getString());
    FIX::CreditRating CreditRating_67("STRING_200751655");
    noQuoteEntries_0_0.set(CreditRating_67);
    Instrument_67.insert(CreditRating_67.getString());
    FIX::DatedDate DatedDate_67("LOCALMKTDATE_357049114");
    noQuoteEntries_0_0.set(DatedDate_67);
    Instrument_67.insert(DatedDate_67.getString());
    FIX::DetachmentPoint DetachmentPoint_67;
    DetachmentPoint_67.setString("24.050000");
    noQuoteEntries_0_0.set(DetachmentPoint_67);
    Instrument_67.insert(DetachmentPoint_67.getString());
    FIX::EncodedIssuer EncodedIssuer_67("DATA_52741692");
    noQuoteEntries_0_0.set(EncodedIssuer_67);
    Instrument_67.insert(EncodedIssuer_67.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_67(1668846024);
    noQuoteEntries_0_0.set(EncodedIssuerLen_67);
    Instrument_67.insert(EncodedIssuerLen_67.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_67("DATA_1789917434");
    noQuoteEntries_0_0.set(EncodedSecurityDesc_67);
    Instrument_67.insert(EncodedSecurityDesc_67.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_67(1149411231);
    noQuoteEntries_0_0.set(EncodedSecurityDescLen_67);
    Instrument_67.insert(EncodedSecurityDescLen_67.getString());
    FIX::ExerciseStyle ExerciseStyle_67(1);
    noQuoteEntries_0_0.set(ExerciseStyle_67);
    Instrument_67.insert(ExerciseStyle_67.getString());
    FIX::Factor Factor_67;
    Factor_67.setString("4700043");
    noQuoteEntries_0_0.set(Factor_67);
    Instrument_67.insert(Factor_67.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_67(false);
    noQuoteEntries_0_0.set(FlexProductEligibilityIndicator_67);
    Instrument_67.insert(FlexProductEligibilityIndicator_67.getString());
    FIX::FlexibleIndicator FlexibleIndicator_67(true);
    noQuoteEntries_0_0.set(FlexibleIndicator_67);
    Instrument_67.insert(FlexibleIndicator_67.getString());
    FIX::FloorPrice FloorPrice_67;
    FloorPrice_67.setString("4843598");
    noQuoteEntries_0_0.set(FloorPrice_67);
    Instrument_67.insert(FloorPrice_67.getString());
    FIX::FlowScheduleType FlowScheduleType_67(1);
    noQuoteEntries_0_0.set(FlowScheduleType_67);
    Instrument_67.insert(FlowScheduleType_67.getString());
    FIX::InstrRegistry InstrRegistry_67("STRING_903474015");
    noQuoteEntries_0_0.set(InstrRegistry_67);
    Instrument_67.insert(InstrRegistry_67.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_67('3');
    noQuoteEntries_0_0.set(InstrmtAssignmentMethod_67);
    Instrument_67.insert(InstrmtAssignmentMethod_67.getString());
    FIX::InterestAccrualDate InterestAccrualDate_67("LOCALMKTDATE_1826492602");
    noQuoteEntries_0_0.set(InterestAccrualDate_67);
    Instrument_67.insert(InterestAccrualDate_67.getString());
    FIX::IssueDate IssueDate_67("LOCALMKTDATE_1327971429");
    noQuoteEntries_0_0.set(IssueDate_67);
    Instrument_67.insert(IssueDate_67.getString());
    FIX::Issuer Issuer_67("STRING_1458173661");
    noQuoteEntries_0_0.set(Issuer_67);
    Instrument_67.insert(Issuer_67.getString());
    FIX::ListMethod ListMethod_67(1);
    noQuoteEntries_0_0.set(ListMethod_67);
    Instrument_67.insert(ListMethod_67.getString());
    FIX::LocaleOfIssue LocaleOfIssue_67("STRING_1913984497");
    noQuoteEntries_0_0.set(LocaleOfIssue_67);
    Instrument_67.insert(LocaleOfIssue_67.getString());
    FIX::MaturityDate MaturityDate_67("LOCALMKTDATE_588456864");
    noQuoteEntries_0_0.set(MaturityDate_67);
    Instrument_67.insert(MaturityDate_67.getString());
    FIX::MaturityMonthYear MaturityMonthYear_67("MONTHYEAR_1878946684");
    noQuoteEntries_0_0.set(MaturityMonthYear_67);
    Instrument_67.insert(MaturityMonthYear_67.getString());
    FIX::MaturityTime MaturityTime_67("TZTIMEONLY_1790377089");
    noQuoteEntries_0_0.set(MaturityTime_67);
    Instrument_67.insert(MaturityTime_67.getString());
    FIX::MinPriceIncrement MinPriceIncrement_67;
    MinPriceIncrement_67.setString("4459653");
    noQuoteEntries_0_0.set(MinPriceIncrement_67);
    Instrument_67.insert(MinPriceIncrement_67.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_67;
    MinPriceIncrementAmount_67.setString("6373197");
    noQuoteEntries_0_0.set(MinPriceIncrementAmount_67);
    Instrument_67.insert(MinPriceIncrementAmount_67.getString());
    FIX::NTPositionLimit NTPositionLimit_67(782669309);
    noQuoteEntries_0_0.set(NTPositionLimit_67);
    Instrument_67.insert(NTPositionLimit_67.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_67;
    NotionalPercentageOutstanding_67.setString("56.680000");
    noQuoteEntries_0_0.set(NotionalPercentageOutstanding_67);
    Instrument_67.insert(NotionalPercentageOutstanding_67.getString());
    FIX::OptAttribute OptAttribute_67('1');
    noQuoteEntries_0_0.set(OptAttribute_67);
    Instrument_67.insert(OptAttribute_67.getString());
    FIX::OptPayoutAmount OptPayoutAmount_67;
    OptPayoutAmount_67.setString("11924934");
    noQuoteEntries_0_0.set(OptPayoutAmount_67);
    Instrument_67.insert(OptPayoutAmount_67.getString());
    FIX::OptPayoutType OptPayoutType_67(1);
    noQuoteEntries_0_0.set(OptPayoutType_67);
    Instrument_67.insert(OptPayoutType_67.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_67;
    OriginalNotionalPercentageOutstanding_67.setString("75.470000");
    noQuoteEntries_0_0.set(OriginalNotionalPercentageOutstanding_67);
    Instrument_67.insert(OriginalNotionalPercentageOutstanding_67.getString());
    FIX::Pool Pool_67("STRING_1393245121");
    noQuoteEntries_0_0.set(Pool_67);
    Instrument_67.insert(Pool_67.getString());
    FIX::PositionLimit PositionLimit_67(1817629274);
    noQuoteEntries_0_0.set(PositionLimit_67);
    Instrument_67.insert(PositionLimit_67.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_67("STRING_STD");
    noQuoteEntries_0_0.set(PriceQuoteMethod_67);
    Instrument_67.insert(PriceQuoteMethod_67.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_67("STRING_1445986814");
    noQuoteEntries_0_0.set(PriceUnitOfMeasure_67);
    Instrument_67.insert(PriceUnitOfMeasure_67.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_67;
    PriceUnitOfMeasureQty_67.setString("13389916");
    noQuoteEntries_0_0.set(PriceUnitOfMeasureQty_67);
    Instrument_67.insert(PriceUnitOfMeasureQty_67.getString());
    FIX::Product Product_69(4);
    noQuoteEntries_0_0.set(Product_69);
    Instrument_67.insert(Product_69.getString());
    FIX::ProductComplex ProductComplex_67("STRING_447914397");
    noQuoteEntries_0_0.set(ProductComplex_67);
    Instrument_67.insert(ProductComplex_67.getString());
    FIX::PutOrCall PutOrCall_67(0);
    noQuoteEntries_0_0.set(PutOrCall_67);
    Instrument_67.insert(PutOrCall_67.getString());
    FIX::RedemptionDate RedemptionDate_67("LOCALMKTDATE_1385368103");
    noQuoteEntries_0_0.set(RedemptionDate_67);
    Instrument_67.insert(RedemptionDate_67.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_67("STRING_728184226");
    noQuoteEntries_0_0.set(RepoCollateralSecurityType_67);
    Instrument_67.insert(RepoCollateralSecurityType_67.getString());
    FIX::RepurchaseRate RepurchaseRate_67;
    RepurchaseRate_67.setString("42.880000");
    noQuoteEntries_0_0.set(RepurchaseRate_67);
    Instrument_67.insert(RepurchaseRate_67.getString());
    FIX::RepurchaseTerm RepurchaseTerm_67(1869727991);
    noQuoteEntries_0_0.set(RepurchaseTerm_67);
    Instrument_67.insert(RepurchaseTerm_67.getString());
    FIX::RestructuringType RestructuringType_67("STRING_MR");
    noQuoteEntries_0_0.set(RestructuringType_67);
    Instrument_67.insert(RestructuringType_67.getString());
    FIX::SecurityDesc SecurityDesc_67("STRING_416854656");
    noQuoteEntries_0_0.set(SecurityDesc_67);
    Instrument_67.insert(SecurityDesc_67.getString());
    FIX::SecurityExchange SecurityExchange_67("EXCHANGE_66519385");
    noQuoteEntries_0_0.set(SecurityExchange_67);
    Instrument_67.insert(SecurityExchange_67.getString());
    FIX::SecurityGroup SecurityGroup_67("STRING_28241879");
    noQuoteEntries_0_0.set(SecurityGroup_67);
    Instrument_67.insert(SecurityGroup_67.getString());
    FIX::SecurityID SecurityID_67("STRING_1744826085");
    noQuoteEntries_0_0.set(SecurityID_67);
    Instrument_67.insert(SecurityID_67.getString());
    FIX::SecurityIDSource SecurityIDSource_67("STRING_9");
    noQuoteEntries_0_0.set(SecurityIDSource_67);
    Instrument_67.insert(SecurityIDSource_67.getString());
    FIX::SecurityStatus SecurityStatus_67("STRING_2");
    noQuoteEntries_0_0.set(SecurityStatus_67);
    Instrument_67.insert(SecurityStatus_67.getString());
    FIX::SecuritySubType SecuritySubType_68("STRING_1511326934");
    noQuoteEntries_0_0.set(SecuritySubType_68);
    Instrument_67.insert(SecuritySubType_68.getString());
    FIX::SecurityType SecurityType_69("STRING_DUAL");
    noQuoteEntries_0_0.set(SecurityType_69);
    Instrument_67.insert(SecurityType_69.getString());
    FIX::Seniority Seniority_67("STRING_SD");
    noQuoteEntries_0_0.set(Seniority_67);
    Instrument_67.insert(Seniority_67.getString());
    FIX::SettlMethod SettlMethod_67('P');
    noQuoteEntries_0_0.set(SettlMethod_67);
    Instrument_67.insert(SettlMethod_67.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_67("STRING_411631646");
    noQuoteEntries_0_0.set(SettleOnOpenFlag_67);
    Instrument_67.insert(SettleOnOpenFlag_67.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_67("STRING_988319039");
    noQuoteEntries_0_0.set(StateOrProvinceOfIssue_67);
    Instrument_67.insert(StateOrProvinceOfIssue_67.getString());
    FIX::StrikeCurrency StrikeCurrency_67("GBP");
    noQuoteEntries_0_0.set(StrikeCurrency_67);
    Instrument_67.insert(StrikeCurrency_67.getString());
    FIX::StrikeMultiplier StrikeMultiplier_67;
    StrikeMultiplier_67.setString("7780897");
    noQuoteEntries_0_0.set(StrikeMultiplier_67);
    Instrument_67.insert(StrikeMultiplier_67.getString());
    FIX::StrikePrice StrikePrice_67;
    StrikePrice_67.setString("9818995");
    noQuoteEntries_0_0.set(StrikePrice_67);
    Instrument_67.insert(StrikePrice_67.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_67(5);
    noQuoteEntries_0_0.set(StrikePriceBoundaryMethod_67);
    Instrument_67.insert(StrikePriceBoundaryMethod_67.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_67;
    StrikePriceBoundaryPrecision_67.setString("72.510000");
    noQuoteEntries_0_0.set(StrikePriceBoundaryPrecision_67);
    Instrument_67.insert(StrikePriceBoundaryPrecision_67.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_67(1);
    noQuoteEntries_0_0.set(StrikePriceDeterminationMethod_67);
    Instrument_67.insert(StrikePriceDeterminationMethod_67.getString());
    FIX::StrikeValue StrikeValue_67;
    StrikeValue_67.setString("16657431");
    noQuoteEntries_0_0.set(StrikeValue_67);
    Instrument_67.insert(StrikeValue_67.getString());
    FIX::Symbol Symbol_67("STRING_953843556");
    noQuoteEntries_0_0.set(Symbol_67);
    Instrument_67.insert(Symbol_67.getString());
    FIX::SymbolSfx SymbolSfx_67("STRING_CD");
    noQuoteEntries_0_0.set(SymbolSfx_67);
    Instrument_67.insert(SymbolSfx_67.getString());
    FIX::TimeUnit TimeUnit_67("STRING_Min");
    noQuoteEntries_0_0.set(TimeUnit_67);
    Instrument_67.insert(TimeUnit_67.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_67(3);
    noQuoteEntries_0_0.set(UnderlyingPriceDeterminationMethod_67);
    Instrument_67.insert(UnderlyingPriceDeterminationMethod_67.getString());
    FIX::UnitOfMeasure UnitOfMeasure_67("STRING_Bu");
    noQuoteEntries_0_0.set(UnitOfMeasure_67);
    Instrument_67.insert(UnitOfMeasure_67.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_67;
    UnitOfMeasureQty_67.setString("11577320");
    noQuoteEntries_0_0.set(UnitOfMeasureQty_67);
    Instrument_67.insert(UnitOfMeasureQty_67.getString());
    FIX::ValuationMethod ValuationMethod_67("STRING_CDSD");
    noQuoteEntries_0_0.set(ValuationMethod_67);
    Instrument_67.insert(ValuationMethod_67.getString());
    all_values.push_back(Instrument_67);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_139;
      FIX::ComplexEventCondition ComplexEventCondition_139(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventCondition_139.getString());
      FIX::ComplexEventPrice ComplexEventPrice_139;
      ComplexEventPrice_139.setString("8293360");
      noComplexEvents_0_1_0.set(ComplexEventPrice_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPrice_139.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_139(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryMethod_139.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_139;
      ComplexEventPriceBoundaryPrecision_139.setString("73.490000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryPrecision_139.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_139(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceTimeType_139.getString());
      FIX::ComplexEventType ComplexEventType_139(3);
      noComplexEvents_0_1_0.set(ComplexEventType_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventType_139.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_139;
      ComplexOptPayoutAmount_139.setString("6853097");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexOptPayoutAmount_139.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_139);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_285;
        FIX::ComplexEventEndDate ComplexEventEndDate_285(FIX::UTCTIMESTAMP(17, 19, 57, 4, 10, 2000));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_285);
        ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventEndDate_285.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_285(FIX::UTCTIMESTAMP(11, 33, 28, 9, 9, 2003));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_285);
        ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventStartDate_285.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_285);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
          FIX::ComplexEventEndTime ComplexEventEndTime_580(FIX::UTCTIMEONLY(11, 0, 19));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventEndTime_580.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_580(FIX::UTCTIMEONLY(5, 20, 46));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventStartTime_580.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
          FIX::ComplexEventEndTime ComplexEventEndTime_581(FIX::UTCTIMEONLY(21, 57, 40));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_581);
          ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventEndTime_581.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_581(FIX::UTCTIMEONLY(12, 26, 20));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_581);
          ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventStartTime_581.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_286;
        FIX::ComplexEventEndDate ComplexEventEndDate_286(FIX::UTCTIMESTAMP(19, 39, 56, 16, 1, 2012));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_286);
        ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventEndDate_286.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_286(FIX::UTCTIMESTAMP(15, 1, 26, 5, 11, 2011));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_286);
        ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventStartDate_286.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_286);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
          FIX::ComplexEventEndTime ComplexEventEndTime_582(FIX::UTCTIMEONLY(14, 30, 33));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_582);
          ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventEndTime_582.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_582(FIX::UTCTIMEONLY(11, 46, 8));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_582);
          ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventStartTime_582.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_140;
      FIX::ComplexEventCondition ComplexEventCondition_140(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventCondition_140.getString());
      FIX::ComplexEventPrice ComplexEventPrice_140;
      ComplexEventPrice_140.setString("21457193");
      noComplexEvents_0_1_1.set(ComplexEventPrice_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPrice_140.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_140(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryMethod_140.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_140;
      ComplexEventPriceBoundaryPrecision_140.setString("24.860000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryPrecision_140.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_140(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceTimeType_140.getString());
      FIX::ComplexEventType ComplexEventType_140(1);
      noComplexEvents_0_1_1.set(ComplexEventType_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventType_140.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_140;
      ComplexOptPayoutAmount_140.setString("17189615");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexOptPayoutAmount_140.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_140);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_287;
        FIX::ComplexEventEndDate ComplexEventEndDate_287(FIX::UTCTIMESTAMP(12, 6, 52, 24, 7, 2005));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventEndDate_287.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_287(FIX::UTCTIMESTAMP(1, 30, 15, 6, 9, 2012));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventStartDate_287.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_287);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
          FIX::ComplexEventEndTime ComplexEventEndTime_583(FIX::UTCTIMEONLY(9, 31, 8));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_583);
          ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventEndTime_583.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_583(FIX::UTCTIMEONLY(23, 46, 3));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_583);
          ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventStartTime_583.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
          FIX::ComplexEventEndTime ComplexEventEndTime_584(FIX::UTCTIMEONLY(22, 8, 43));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_584);
          ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventEndTime_584.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_584(FIX::UTCTIMEONLY(18, 47, 40));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_584);
          ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventStartTime_584.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_288;
        FIX::ComplexEventEndDate ComplexEventEndDate_288(FIX::UTCTIMESTAMP(23, 46, 55, 23, 9, 2004));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventEndDate_288.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_288(FIX::UTCTIMESTAMP(21, 39, 44, 20, 12, 2009));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventStartDate_288.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_288);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
          FIX::ComplexEventEndTime ComplexEventEndTime_585(FIX::UTCTIMEONLY(12, 40, 27));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_585);
          ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventEndTime_585.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_585(FIX::UTCTIMEONLY(19, 13, 46));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_585);
          ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventStartTime_585.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
          FIX::ComplexEventEndTime ComplexEventEndTime_586(FIX::UTCTIMEONLY(23, 46, 55));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_586);
          ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventEndTime_586.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_586(FIX::UTCTIMEONLY(9, 43, 4));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_586);
          ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventStartTime_586.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
          FIX::ComplexEventEndTime ComplexEventEndTime_587(FIX::UTCTIMEONLY(22, 42, 35));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_587);
          ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventEndTime_587.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_587(FIX::UTCTIMEONLY(2, 52, 11));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_587);
          ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventStartTime_587.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_289;
        FIX::ComplexEventEndDate ComplexEventEndDate_289(FIX::UTCTIMESTAMP(23, 55, 44, 2, 11, 2011));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_289);
        ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventEndDate_289.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_289(FIX::UTCTIMESTAMP(14, 33, 8, 25, 10, 2015));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_289);
        ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventStartDate_289.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_289);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
          FIX::ComplexEventEndTime ComplexEventEndTime_588(FIX::UTCTIMEONLY(13, 58, 13));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_588);
          ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventEndTime_588.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_588(FIX::UTCTIMEONLY(23, 48, 38));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_588);
          ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventStartTime_588.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
          FIX::ComplexEventEndTime ComplexEventEndTime_589(FIX::UTCTIMEONLY(14, 20, 58));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_589);
          ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventEndTime_589.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_589(FIX::UTCTIMEONLY(11, 42, 3));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_589);
          ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventStartTime_589.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
          FIX::ComplexEventEndTime ComplexEventEndTime_590(FIX::UTCTIMEONLY(17, 59, 23));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventEndTime_590);
          ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventEndTime_590.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_590(FIX::UTCTIMEONLY(13, 16, 1));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventStartTime_590);
          ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventStartTime_590.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_141;
      FIX::ComplexEventCondition ComplexEventCondition_141(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexEventCondition_141.getString());
      FIX::ComplexEventPrice ComplexEventPrice_141;
      ComplexEventPrice_141.setString("9767641");
      noComplexEvents_0_1_2.set(ComplexEventPrice_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexEventPrice_141.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_141(5);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryMethod_141.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_141;
      ComplexEventPriceBoundaryPrecision_141.setString("75.570000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryPrecision_141.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_141(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceTimeType_141.getString());
      FIX::ComplexEventType ComplexEventType_141(8);
      noComplexEvents_0_1_2.set(ComplexEventType_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexEventType_141.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_141;
      ComplexOptPayoutAmount_141.setString("9063776");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_141);
      ComplexEvents_NoComplexEvents_141.insert(ComplexOptPayoutAmount_141.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_141);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_290;
        FIX::ComplexEventEndDate ComplexEventEndDate_290(FIX::UTCTIMESTAMP(11, 53, 21, 14, 10, 2005));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_290);
        ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventEndDate_290.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_290(FIX::UTCTIMESTAMP(23, 19, 59, 12, 7, 2000));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_290);
        ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventStartDate_290.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_290);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
          FIX::ComplexEventEndTime ComplexEventEndTime_591(FIX::UTCTIMEONLY(23, 54, 24));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_591);
          ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventEndTime_591.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_591(FIX::UTCTIMEONLY(0, 40, 0));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_591);
          ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventStartTime_591.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_592;
          FIX::ComplexEventEndTime ComplexEventEndTime_592(FIX::UTCTIMEONLY(10, 9, 41));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_592);
          ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventEndTime_592.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_592(FIX::UTCTIMEONLY(0, 54, 24));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_592);
          ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventStartTime_592.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_592);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_291;
        FIX::ComplexEventEndDate ComplexEventEndDate_291(FIX::UTCTIMESTAMP(17, 9, 24, 7, 7, 2003));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_291);
        ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventEndDate_291.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_291(FIX::UTCTIMESTAMP(22, 35, 52, 14, 10, 2008));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_291);
        ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventStartDate_291.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_291);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_593;
          FIX::ComplexEventEndTime ComplexEventEndTime_593(FIX::UTCTIMEONLY(13, 8, 31));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_593);
          ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventEndTime_593.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_593(FIX::UTCTIMEONLY(12, 4, 13));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_593);
          ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventStartTime_593.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_593);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_134;
      FIX::EventDate EventDate_134("LOCALMKTDATE_612397818");
      noEvents_0_1_0.set(EventDate_134);
      EvntGrp_NoEvents_134.insert(EventDate_134.getString());
      FIX::EventPx EventPx_134;
      EventPx_134.setString("2934115");
      noEvents_0_1_0.set(EventPx_134);
      EvntGrp_NoEvents_134.insert(EventPx_134.getString());
      FIX::EventText EventText_134("STRING_1860522713");
      noEvents_0_1_0.set(EventText_134);
      EvntGrp_NoEvents_134.insert(EventText_134.getString());
      FIX::EventTime EventTime_134(FIX::UTCTIMESTAMP(3, 40, 27, 22, 10, 2000));
      noEvents_0_1_0.set(EventTime_134);
      EvntGrp_NoEvents_134.insert(EventTime_134.getString());
      FIX::EventType EventType_134(12);
      noEvents_0_1_0.set(EventType_134);
      EvntGrp_NoEvents_134.insert(EventType_134.getString());
      all_values.push_back(EvntGrp_NoEvents_134);
      all_compo_names.insert("EvntGrp.NoEvents");

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_136;
      FIX::InstrumentPartyID InstrumentPartyID_136("STRING_1642110071");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyID_136.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_136('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyIDSource_136.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_136(1268308633);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyRole_136.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_136);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259;
        FIX::InstrumentPartySubID InstrumentPartySubID_259("STRING_2052943661");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_259);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubID_259.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_259(1074427257);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_259);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubIDType_259.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260;
        FIX::InstrumentPartySubID InstrumentPartySubID_260("STRING_1059814863");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_260);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubID_260.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_260(2109056679);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_260);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubIDType_260.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_137;
      FIX::InstrumentPartyID InstrumentPartyID_137("STRING_1361004383");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_137);
      InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyID_137.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_137('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_137);
      InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyIDSource_137.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_137(1523165498);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_137);
      InstrumentParties_NoInstrumentParties_137.insert(InstrumentPartyRole_137.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_137);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261;
        FIX::InstrumentPartySubID InstrumentPartySubID_261("STRING_577427964");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_261);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubID_261.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_261(1034865301);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_261);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubIDType_261.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262;
        FIX::InstrumentPartySubID InstrumentPartySubID_262("STRING_558312582");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_262);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubID_262.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_262(831767352);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_262);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubIDType_262.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263;
        FIX::InstrumentPartySubID InstrumentPartySubID_263("STRING_1682273885");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_263);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubID_263.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_263(887950615);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_263);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubIDType_263.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_138;
      FIX::InstrumentPartyID InstrumentPartyID_138("STRING_870129624");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_138);
      InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyID_138.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_138('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_138);
      InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyIDSource_138.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_138(1181362210);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_138);
      InstrumentParties_NoInstrumentParties_138.insert(InstrumentPartyRole_138.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_138);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264;
        FIX::InstrumentPartySubID InstrumentPartySubID_264("STRING_1139224398");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_264);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubID_264.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_264(889137341);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_264);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubIDType_264.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265;
        FIX::InstrumentPartySubID InstrumentPartySubID_265("STRING_877262210");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_265);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubID_265.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_265(546257377);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_265);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubIDType_265.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_123;
      FIX::SecurityAltID SecurityAltID_123("STRING_412917987");
      noSecurityAltID_0_1_0.set(SecurityAltID_123);
      SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltID_123.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_123("STRING_483499385");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_123);
      SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltIDSource_123.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_123);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_124;
      FIX::SecurityAltID SecurityAltID_124("STRING_1140723719");
      noSecurityAltID_0_1_1.set(SecurityAltID_124);
      SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltID_124.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_124("STRING_36422568");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_124);
      SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltIDSource_124.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_124);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_125;
      FIX::SecurityAltID SecurityAltID_125("STRING_2125609456");
      noSecurityAltID_0_1_2.set(SecurityAltID_125);
      SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltID_125.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_125("STRING_244397817");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_125);
      SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltIDSource_125.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_125);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_134;
    FIX::SecurityXML SecurityXML_135("XMLDATA_1304731202");
    noQuoteEntries_0_0.set(SecurityXML_135);
    FIX::SecurityXMLLen SecurityXMLLen_67(280940805);
    noQuoteEntries_0_0.set(SecurityXMLLen_67);
    FIX::SecurityXMLSchema SecurityXMLSchema_67("STRING_149857831");
    noQuoteEntries_0_0.set(SecurityXMLSchema_67);
    SecurityXML_134.insert(SecurityXMLSchema_67.getString());
    all_values.push_back(SecurityXML_134);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_97;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_97("DATA_1340755668");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingIssuer_97.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_97(111430862);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingIssuerLen_97.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_97("DATA_1592679195");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDesc_97.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_97(1150871405);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDescLen_97.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_97;
      UnderlyingAdjustedQuantity_97.setString("16345963");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_97);
      UnderlyingInstrument_97.insert(UnderlyingAdjustedQuantity_97.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_97;
      UnderlyingAllocationPercent_97.setString("43.040000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_97);
      UnderlyingInstrument_97.insert(UnderlyingAllocationPercent_97.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_97;
      UnderlyingAttachmentPoint_97.setString("93.690000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_97);
      UnderlyingInstrument_97.insert(UnderlyingAttachmentPoint_97.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_97("STRING_521978013");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_97);
      UnderlyingInstrument_97.insert(UnderlyingCFICode_97.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_97("STRING_335123238");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_97);
      UnderlyingInstrument_97.insert(UnderlyingCPProgram_97.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_97("STRING_412583074");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_97);
      UnderlyingInstrument_97.insert(UnderlyingCPRegType_97.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_97;
      UnderlyingCapValue_97.setString("567682");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_97);
      UnderlyingInstrument_97.insert(UnderlyingCapValue_97.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_97;
      UnderlyingCashAmount_97.setString("12230738");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_97);
      UnderlyingInstrument_97.insert(UnderlyingCashAmount_97.getString());
      FIX::UnderlyingCashType UnderlyingCashType_97("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_97);
      UnderlyingInstrument_97.insert(UnderlyingCashType_97.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_97;
      UnderlyingContractMultiplier_97.setString("2039563");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_97);
      UnderlyingInstrument_97.insert(UnderlyingContractMultiplier_97.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_97(256952416);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_97);
      UnderlyingInstrument_97.insert(UnderlyingContractMultiplierUnit_97.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_97("COUNTRY_1865881388");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingCountryOfIssue_97.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_97("LOCALMKTDATE_1343180704");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_97);
      UnderlyingInstrument_97.insert(UnderlyingCouponPaymentDate_97.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_97;
      UnderlyingCouponRate_97.setString("97.570000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_97);
      UnderlyingInstrument_97.insert(UnderlyingCouponRate_97.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_97("STRING_595659950");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_97);
      UnderlyingInstrument_97.insert(UnderlyingCreditRating_97.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_97("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_97);
      UnderlyingInstrument_97.insert(UnderlyingCurrency_97.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_97;
      UnderlyingCurrentValue_97.setString("10085779");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_97);
      UnderlyingInstrument_97.insert(UnderlyingCurrentValue_97.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_97;
      UnderlyingDetachmentPoint_97.setString("38.190000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_97);
      UnderlyingInstrument_97.insert(UnderlyingDetachmentPoint_97.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_97;
      UnderlyingDirtyPrice_97.setString("1915001");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_97);
      UnderlyingInstrument_97.insert(UnderlyingDirtyPrice_97.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_97;
      UnderlyingEndPrice_97.setString("10450005");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_97);
      UnderlyingInstrument_97.insert(UnderlyingEndPrice_97.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_97;
      UnderlyingEndValue_97.setString("2035796");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_97);
      UnderlyingInstrument_97.insert(UnderlyingEndValue_97.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_97(435897954);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_97);
      UnderlyingInstrument_97.insert(UnderlyingExerciseStyle_97.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_97;
      UnderlyingFXRate_97.setString("2022480");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_97);
      UnderlyingInstrument_97.insert(UnderlyingFXRate_97.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_97('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_97);
      UnderlyingInstrument_97.insert(UnderlyingFXRateCalc_97.getString());
      FIX::UnderlyingFactor UnderlyingFactor_97;
      UnderlyingFactor_97.setString("5857557");
      noUnderlyings_0_1_0.set(UnderlyingFactor_97);
      UnderlyingInstrument_97.insert(UnderlyingFactor_97.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_97(433922872);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_97);
      UnderlyingInstrument_97.insert(UnderlyingFlowScheduleType_97.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_97("STRING_1825276101");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_97);
      UnderlyingInstrument_97.insert(UnderlyingInstrRegistry_97.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_97("LOCALMKTDATE_697186647");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_97);
      UnderlyingInstrument_97.insert(UnderlyingIssueDate_97.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_97("STRING_2026602067");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_97);
      UnderlyingInstrument_97.insert(UnderlyingIssuer_97.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_97("STRING_828663858");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingLocaleOfIssue_97.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_97("LOCALMKTDATE_184299359");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityDate_97.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_97("MONTHYEAR_1803412723");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityMonthYear_97.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_97("TZTIMEONLY_409479580");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityTime_97.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_97;
      UnderlyingNotionalPercentageOutstanding_97.setString("73.720000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_97);
      UnderlyingInstrument_97.insert(UnderlyingNotionalPercentageOutstanding_97.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_97('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_97);
      UnderlyingInstrument_97.insert(UnderlyingOptAttribute_97.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_97;
      UnderlyingOriginalNotionalPercentageOutstanding_97.setString("26.540000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_97);
      UnderlyingInstrument_97.insert(UnderlyingOriginalNotionalPercentageOutstanding_97.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_97("STRING_763045623");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_97);
      UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasure_97.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_97;
      UnderlyingPriceUnitOfMeasureQty_97.setString("12141261");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_97);
      UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasureQty_97.getString());
      FIX::UnderlyingProduct UnderlyingProduct_97(2104775352);
      noUnderlyings_0_1_0.set(UnderlyingProduct_97);
      UnderlyingInstrument_97.insert(UnderlyingProduct_97.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_97(967001930);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_97);
      UnderlyingInstrument_97.insert(UnderlyingPutOrCall_97.getString());
      FIX::UnderlyingPx UnderlyingPx_97;
      UnderlyingPx_97.setString("14710785");
      noUnderlyings_0_1_0.set(UnderlyingPx_97);
      UnderlyingInstrument_97.insert(UnderlyingPx_97.getString());
      FIX::UnderlyingQty UnderlyingQty_97;
      UnderlyingQty_97.setString("18231730");
      noUnderlyings_0_1_0.set(UnderlyingQty_97);
      UnderlyingInstrument_97.insert(UnderlyingQty_97.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_97("LOCALMKTDATE_162698986");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_97);
      UnderlyingInstrument_97.insert(UnderlyingRedemptionDate_97.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_97("STRING_469684692");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_97);
      UnderlyingInstrument_97.insert(UnderlyingRepoCollateralSecurityType_97.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_97;
      UnderlyingRepurchaseRate_97.setString("93.950000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_97);
      UnderlyingInstrument_97.insert(UnderlyingRepurchaseRate_97.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_97(2052137068);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_97);
      UnderlyingInstrument_97.insert(UnderlyingRepurchaseTerm_97.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_97("STRING_1667944757");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_97);
      UnderlyingInstrument_97.insert(UnderlyingRestructuringType_97.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_97("STRING_1279927333");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityDesc_97.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_97("EXCHANGE_130107239");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityExchange_97.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_97("STRING_1859444894");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityID_97.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_97("STRING_177444192");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityIDSource_97.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_97("STRING_333686866");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_97);
      UnderlyingInstrument_97.insert(UnderlyingSecuritySubType_97.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_97("STRING_147859200");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityType_97.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_97("STRING_379692252");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_97);
      UnderlyingInstrument_97.insert(UnderlyingSeniority_97.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_97("STRING_818207299");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_97);
      UnderlyingInstrument_97.insert(UnderlyingSettlMethod_97.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_97(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_97);
      UnderlyingInstrument_97.insert(UnderlyingSettlementType_97.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_97;
      UnderlyingStartValue_97.setString("8136151");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_97);
      UnderlyingInstrument_97.insert(UnderlyingStartValue_97.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_97("STRING_495999753");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingStateOrProvinceOfIssue_97.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_97("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_97);
      UnderlyingInstrument_97.insert(UnderlyingStrikeCurrency_97.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_97;
      UnderlyingStrikePrice_97.setString("13246636");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_97);
      UnderlyingInstrument_97.insert(UnderlyingStrikePrice_97.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_97("STRING_1615100991");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_97);
      UnderlyingInstrument_97.insert(UnderlyingSymbol_97.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_97("STRING_348662618");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_97);
      UnderlyingInstrument_97.insert(UnderlyingSymbolSfx_97.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_97("STRING_1734143191");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_97);
      UnderlyingInstrument_97.insert(UnderlyingTimeUnit_97.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_97("STRING_173894715");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_97);
      UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasure_97.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_97;
      UnderlyingUnitOfMeasureQty_97.setString("3397149");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_97);
      UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasureQty_97.getString());
      all_values.push_back(UnderlyingInstrument_97);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_194;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_194("STRING_936940339");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltID_194.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_194("STRING_1553841098");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltIDSource_194.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_195;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_195("STRING_366013902");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltID_195.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_195("STRING_1903942269");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltIDSource_195.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_195;
        FIX::UnderlyingStipType UnderlyingStipType_195("STRING_41703347");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_195);
        UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipType_195.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_195("STRING_2066641255");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_195);
        UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipValue_195.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_195);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_196;
        FIX::UnderlyingStipType UnderlyingStipType_196("STRING_1347120724");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_196);
        UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipType_196.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_196("STRING_313052742");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_196);
        UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipValue_196.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_196);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_180;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_180("STRING_867581834");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_180);
        UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyID_180.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_180('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_180);
        UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyIDSource_180.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_180(2101401914);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_180);
        UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyRole_180.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_180);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_358("STRING_1770424268");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_358);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubID_358.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_358(287605133);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_358);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubIDType_358.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_359("STRING_727402280");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_359);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubID_359.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_359(2632872);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_359);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubIDType_359.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_360("STRING_1105812432");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_360);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubID_360.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_360(1461017265);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_360);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubIDType_360.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
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
    FIX::AgreementCurrency AgreementCurrency_18("CHF");
    noQuoteEntries_0_1.set(AgreementCurrency_18);
    FinancingDetails_18.insert(AgreementCurrency_18.getString());
    FIX::AgreementDate AgreementDate_18("LOCALMKTDATE_744335249");
    noQuoteEntries_0_1.set(AgreementDate_18);
    FinancingDetails_18.insert(AgreementDate_18.getString());
    FIX::AgreementDesc AgreementDesc_18("STRING_1508981540");
    noQuoteEntries_0_1.set(AgreementDesc_18);
    FinancingDetails_18.insert(AgreementDesc_18.getString());
    FIX::AgreementID AgreementID_18("STRING_778992149");
    noQuoteEntries_0_1.set(AgreementID_18);
    FinancingDetails_18.insert(AgreementID_18.getString());
    FIX::DeliveryType DeliveryType_18(0);
    noQuoteEntries_0_1.set(DeliveryType_18);
    FinancingDetails_18.insert(DeliveryType_18.getString());
    FIX::EndDate EndDate_18("LOCALMKTDATE_1857644159");
    noQuoteEntries_0_1.set(EndDate_18);
    FinancingDetails_18.insert(EndDate_18.getString());
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("16.920000");
    noQuoteEntries_0_1.set(MarginRatio_18);
    FinancingDetails_18.insert(MarginRatio_18.getString());
    FIX::StartDate StartDate_18("LOCALMKTDATE_385847307");
    noQuoteEntries_0_1.set(StartDate_18);
    FinancingDetails_18.insert(StartDate_18.getString());
    FIX::TerminationType TerminationType_18(3);
    noQuoteEntries_0_1.set(TerminationType_18);
    FinancingDetails_18.insert(TerminationType_18.getString());
    all_values.push_back(FinancingDetails_18);
    all_compo_names.insert("FinancingDetails");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_105;
      FIX::EncodedLegIssuer EncodedLegIssuer_105("DATA_1322787646");
      noLegs_1_1_0.set(EncodedLegIssuer_105);
      InstrumentLeg_105.insert(EncodedLegIssuer_105.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_105(1603716540);
      noLegs_1_1_0.set(EncodedLegIssuerLen_105);
      InstrumentLeg_105.insert(EncodedLegIssuerLen_105.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_105("DATA_1140387792");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_105);
      InstrumentLeg_105.insert(EncodedLegSecurityDesc_105.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_105(1079246267);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_105);
      InstrumentLeg_105.insert(EncodedLegSecurityDescLen_105.getString());
      FIX::LegCFICode LegCFICode_105("STRING_333668925");
      noLegs_1_1_0.set(LegCFICode_105);
      InstrumentLeg_105.insert(LegCFICode_105.getString());
      FIX::LegContractMultiplier LegContractMultiplier_105;
      LegContractMultiplier_105.setString("11820911");
      noLegs_1_1_0.set(LegContractMultiplier_105);
      InstrumentLeg_105.insert(LegContractMultiplier_105.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_105(998403875);
      noLegs_1_1_0.set(LegContractMultiplierUnit_105);
      InstrumentLeg_105.insert(LegContractMultiplierUnit_105.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_105("MONTHYEAR_1680789649");
      noLegs_1_1_0.set(LegContractSettlMonth_105);
      InstrumentLeg_105.insert(LegContractSettlMonth_105.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_105("COUNTRY_1495143881");
      noLegs_1_1_0.set(LegCountryOfIssue_105);
      InstrumentLeg_105.insert(LegCountryOfIssue_105.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_105("LOCALMKTDATE_822214902");
      noLegs_1_1_0.set(LegCouponPaymentDate_105);
      InstrumentLeg_105.insert(LegCouponPaymentDate_105.getString());
      FIX::LegCouponRate LegCouponRate_105;
      LegCouponRate_105.setString("78.350000");
      noLegs_1_1_0.set(LegCouponRate_105);
      InstrumentLeg_105.insert(LegCouponRate_105.getString());
      FIX::LegCreditRating LegCreditRating_105("STRING_940640309");
      noLegs_1_1_0.set(LegCreditRating_105);
      InstrumentLeg_105.insert(LegCreditRating_105.getString());
      FIX::LegCurrency LegCurrency_105("CHF");
      noLegs_1_1_0.set(LegCurrency_105);
      InstrumentLeg_105.insert(LegCurrency_105.getString());
      FIX::LegDatedDate LegDatedDate_105("LOCALMKTDATE_563580929");
      noLegs_1_1_0.set(LegDatedDate_105);
      InstrumentLeg_105.insert(LegDatedDate_105.getString());
      FIX::LegExerciseStyle LegExerciseStyle_105(1063738302);
      noLegs_1_1_0.set(LegExerciseStyle_105);
      InstrumentLeg_105.insert(LegExerciseStyle_105.getString());
      FIX::LegFactor LegFactor_105;
      LegFactor_105.setString("17078331");
      noLegs_1_1_0.set(LegFactor_105);
      InstrumentLeg_105.insert(LegFactor_105.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_105(566213802);
      noLegs_1_1_0.set(LegFlowScheduleType_105);
      InstrumentLeg_105.insert(LegFlowScheduleType_105.getString());
      FIX::LegInstrRegistry LegInstrRegistry_105("STRING_22067086");
      noLegs_1_1_0.set(LegInstrRegistry_105);
      InstrumentLeg_105.insert(LegInstrRegistry_105.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_105("LOCALMKTDATE_1021366812");
      noLegs_1_1_0.set(LegInterestAccrualDate_105);
      InstrumentLeg_105.insert(LegInterestAccrualDate_105.getString());
      FIX::LegIssueDate LegIssueDate_105("LOCALMKTDATE_1382461799");
      noLegs_1_1_0.set(LegIssueDate_105);
      InstrumentLeg_105.insert(LegIssueDate_105.getString());
      FIX::LegIssuer LegIssuer_105("STRING_1623879272");
      noLegs_1_1_0.set(LegIssuer_105);
      InstrumentLeg_105.insert(LegIssuer_105.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_105("STRING_1765702061");
      noLegs_1_1_0.set(LegLocaleOfIssue_105);
      InstrumentLeg_105.insert(LegLocaleOfIssue_105.getString());
      FIX::LegMaturityDate LegMaturityDate_105("LOCALMKTDATE_743959691");
      noLegs_1_1_0.set(LegMaturityDate_105);
      InstrumentLeg_105.insert(LegMaturityDate_105.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_105("MONTHYEAR_255387773");
      noLegs_1_1_0.set(LegMaturityMonthYear_105);
      InstrumentLeg_105.insert(LegMaturityMonthYear_105.getString());
      FIX::LegMaturityTime LegMaturityTime_105("TZTIMEONLY_1977654653");
      noLegs_1_1_0.set(LegMaturityTime_105);
      InstrumentLeg_105.insert(LegMaturityTime_105.getString());
      FIX::LegOptAttribute LegOptAttribute_105('4');
      noLegs_1_1_0.set(LegOptAttribute_105);
      InstrumentLeg_105.insert(LegOptAttribute_105.getString());
      FIX::LegOptionRatio LegOptionRatio_105;
      LegOptionRatio_105.setString("6210394");
      noLegs_1_1_0.set(LegOptionRatio_105);
      InstrumentLeg_105.insert(LegOptionRatio_105.getString());
      FIX::LegPool LegPool_105("STRING_216018313");
      noLegs_1_1_0.set(LegPool_105);
      InstrumentLeg_105.insert(LegPool_105.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_105("STRING_503995645");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_105);
      InstrumentLeg_105.insert(LegPriceUnitOfMeasure_105.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_105;
      LegPriceUnitOfMeasureQty_105.setString("13954133");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_105);
      InstrumentLeg_105.insert(LegPriceUnitOfMeasureQty_105.getString());
      FIX::LegProduct LegProduct_105(1538805959);
      noLegs_1_1_0.set(LegProduct_105);
      InstrumentLeg_105.insert(LegProduct_105.getString());
      FIX::LegPutOrCall LegPutOrCall_105(2107712185);
      noLegs_1_1_0.set(LegPutOrCall_105);
      InstrumentLeg_105.insert(LegPutOrCall_105.getString());
      FIX::LegRatioQty LegRatioQty_105;
      LegRatioQty_105.setString("3883174");
      noLegs_1_1_0.set(LegRatioQty_105);
      InstrumentLeg_105.insert(LegRatioQty_105.getString());
      FIX::LegRedemptionDate LegRedemptionDate_105("LOCALMKTDATE_470568579");
      noLegs_1_1_0.set(LegRedemptionDate_105);
      InstrumentLeg_105.insert(LegRedemptionDate_105.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_105("STRING_293897462");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_105);
      InstrumentLeg_105.insert(LegRepoCollateralSecurityType_105.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_105;
      LegRepurchaseRate_105.setString("86.380000");
      noLegs_1_1_0.set(LegRepurchaseRate_105);
      InstrumentLeg_105.insert(LegRepurchaseRate_105.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_105(1468972454);
      noLegs_1_1_0.set(LegRepurchaseTerm_105);
      InstrumentLeg_105.insert(LegRepurchaseTerm_105.getString());
      FIX::LegSecurityDesc LegSecurityDesc_105("STRING_1974687112");
      noLegs_1_1_0.set(LegSecurityDesc_105);
      InstrumentLeg_105.insert(LegSecurityDesc_105.getString());
      FIX::LegSecurityExchange LegSecurityExchange_105("EXCHANGE_918068872");
      noLegs_1_1_0.set(LegSecurityExchange_105);
      InstrumentLeg_105.insert(LegSecurityExchange_105.getString());
      FIX::LegSecurityID LegSecurityID_105("STRING_143703708");
      noLegs_1_1_0.set(LegSecurityID_105);
      InstrumentLeg_105.insert(LegSecurityID_105.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_105("STRING_228091299");
      noLegs_1_1_0.set(LegSecurityIDSource_105);
      InstrumentLeg_105.insert(LegSecurityIDSource_105.getString());
      FIX::LegSecuritySubType LegSecuritySubType_105("STRING_1858709181");
      noLegs_1_1_0.set(LegSecuritySubType_105);
      InstrumentLeg_105.insert(LegSecuritySubType_105.getString());
      FIX::LegSecurityType LegSecurityType_105("STRING_919836877");
      noLegs_1_1_0.set(LegSecurityType_105);
      InstrumentLeg_105.insert(LegSecurityType_105.getString());
      FIX::LegSide LegSide_105('1');
      noLegs_1_1_0.set(LegSide_105);
      InstrumentLeg_105.insert(LegSide_105.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_105("STRING_274806463");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_105);
      InstrumentLeg_105.insert(LegStateOrProvinceOfIssue_105.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_105("JPY");
      noLegs_1_1_0.set(LegStrikeCurrency_105);
      InstrumentLeg_105.insert(LegStrikeCurrency_105.getString());
      FIX::LegStrikePrice LegStrikePrice_105;
      LegStrikePrice_105.setString("8410202");
      noLegs_1_1_0.set(LegStrikePrice_105);
      InstrumentLeg_105.insert(LegStrikePrice_105.getString());
      FIX::LegSymbol LegSymbol_105("STRING_2005642266");
      noLegs_1_1_0.set(LegSymbol_105);
      InstrumentLeg_105.insert(LegSymbol_105.getString());
      FIX::LegSymbolSfx LegSymbolSfx_105("STRING_1790238575");
      noLegs_1_1_0.set(LegSymbolSfx_105);
      InstrumentLeg_105.insert(LegSymbolSfx_105.getString());
      FIX::LegTimeUnit LegTimeUnit_105("STRING_75998416");
      noLegs_1_1_0.set(LegTimeUnit_105);
      InstrumentLeg_105.insert(LegTimeUnit_105.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_105("STRING_1482037890");
      noLegs_1_1_0.set(LegUnitOfMeasure_105);
      InstrumentLeg_105.insert(LegUnitOfMeasure_105.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_105;
      LegUnitOfMeasureQty_105.setString("14084569");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_105);
      InstrumentLeg_105.insert(LegUnitOfMeasureQty_105.getString());
      all_values.push_back(InstrumentLeg_105);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_215;
        FIX::LegSecurityAltID LegSecurityAltID_215("STRING_1737425663");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_215);
        LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltID_215.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_215("STRING_1238627994");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_215);
        LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltIDSource_215.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_215);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_68;
    FIX::AttachmentPoint AttachmentPoint_68;
    AttachmentPoint_68.setString("83.100000");
    noQuoteEntries_0_1.set(AttachmentPoint_68);
    Instrument_68.insert(AttachmentPoint_68.getString());
    FIX::CFICode CFICode_68("STRING_210981480");
    noQuoteEntries_0_1.set(CFICode_68);
    Instrument_68.insert(CFICode_68.getString());
    FIX::CPProgram CPProgram_68(2);
    noQuoteEntries_0_1.set(CPProgram_68);
    Instrument_68.insert(CPProgram_68.getString());
    FIX::CPRegType CPRegType_68("STRING_1778073955");
    noQuoteEntries_0_1.set(CPRegType_68);
    Instrument_68.insert(CPRegType_68.getString());
    FIX::CapPrice CapPrice_68;
    CapPrice_68.setString("16063948");
    noQuoteEntries_0_1.set(CapPrice_68);
    Instrument_68.insert(CapPrice_68.getString());
    FIX::ContractMultiplier ContractMultiplier_68;
    ContractMultiplier_68.setString("8459686");
    noQuoteEntries_0_1.set(ContractMultiplier_68);
    Instrument_68.insert(ContractMultiplier_68.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_68(0);
    noQuoteEntries_0_1.set(ContractMultiplierUnit_68);
    Instrument_68.insert(ContractMultiplierUnit_68.getString());
    FIX::ContractSettlMonth ContractSettlMonth_68("MONTHYEAR_1994712335");
    noQuoteEntries_0_1.set(ContractSettlMonth_68);
    Instrument_68.insert(ContractSettlMonth_68.getString());
    FIX::CountryOfIssue CountryOfIssue_68("COUNTRY_1316537197");
    noQuoteEntries_0_1.set(CountryOfIssue_68);
    Instrument_68.insert(CountryOfIssue_68.getString());
    FIX::CouponPaymentDate CouponPaymentDate_68("LOCALMKTDATE_2032199955");
    noQuoteEntries_0_1.set(CouponPaymentDate_68);
    Instrument_68.insert(CouponPaymentDate_68.getString());
    FIX::CouponRate CouponRate_68;
    CouponRate_68.setString("73.260000");
    noQuoteEntries_0_1.set(CouponRate_68);
    Instrument_68.insert(CouponRate_68.getString());
    FIX::CreditRating CreditRating_68("STRING_638026003");
    noQuoteEntries_0_1.set(CreditRating_68);
    Instrument_68.insert(CreditRating_68.getString());
    FIX::DatedDate DatedDate_68("LOCALMKTDATE_1859403419");
    noQuoteEntries_0_1.set(DatedDate_68);
    Instrument_68.insert(DatedDate_68.getString());
    FIX::DetachmentPoint DetachmentPoint_68;
    DetachmentPoint_68.setString("25.500000");
    noQuoteEntries_0_1.set(DetachmentPoint_68);
    Instrument_68.insert(DetachmentPoint_68.getString());
    FIX::EncodedIssuer EncodedIssuer_68("DATA_781729712");
    noQuoteEntries_0_1.set(EncodedIssuer_68);
    Instrument_68.insert(EncodedIssuer_68.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_68(2087494718);
    noQuoteEntries_0_1.set(EncodedIssuerLen_68);
    Instrument_68.insert(EncodedIssuerLen_68.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_68("DATA_2046931731");
    noQuoteEntries_0_1.set(EncodedSecurityDesc_68);
    Instrument_68.insert(EncodedSecurityDesc_68.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_68(1701566589);
    noQuoteEntries_0_1.set(EncodedSecurityDescLen_68);
    Instrument_68.insert(EncodedSecurityDescLen_68.getString());
    FIX::ExerciseStyle ExerciseStyle_68(1);
    noQuoteEntries_0_1.set(ExerciseStyle_68);
    Instrument_68.insert(ExerciseStyle_68.getString());
    FIX::Factor Factor_68;
    Factor_68.setString("1742545");
    noQuoteEntries_0_1.set(Factor_68);
    Instrument_68.insert(Factor_68.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_68(false);
    noQuoteEntries_0_1.set(FlexProductEligibilityIndicator_68);
    Instrument_68.insert(FlexProductEligibilityIndicator_68.getString());
    FIX::FlexibleIndicator FlexibleIndicator_68(true);
    noQuoteEntries_0_1.set(FlexibleIndicator_68);
    Instrument_68.insert(FlexibleIndicator_68.getString());
    FIX::FloorPrice FloorPrice_68;
    FloorPrice_68.setString("10152748");
    noQuoteEntries_0_1.set(FloorPrice_68);
    Instrument_68.insert(FloorPrice_68.getString());
    FIX::FlowScheduleType FlowScheduleType_68(4);
    noQuoteEntries_0_1.set(FlowScheduleType_68);
    Instrument_68.insert(FlowScheduleType_68.getString());
    FIX::InstrRegistry InstrRegistry_68("STRING_1560159975");
    noQuoteEntries_0_1.set(InstrRegistry_68);
    Instrument_68.insert(InstrRegistry_68.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_68('1');
    noQuoteEntries_0_1.set(InstrmtAssignmentMethod_68);
    Instrument_68.insert(InstrmtAssignmentMethod_68.getString());
    FIX::InterestAccrualDate InterestAccrualDate_68("LOCALMKTDATE_730370981");
    noQuoteEntries_0_1.set(InterestAccrualDate_68);
    Instrument_68.insert(InterestAccrualDate_68.getString());
    FIX::IssueDate IssueDate_68("LOCALMKTDATE_821133315");
    noQuoteEntries_0_1.set(IssueDate_68);
    Instrument_68.insert(IssueDate_68.getString());
    FIX::Issuer Issuer_68("STRING_1911231335");
    noQuoteEntries_0_1.set(Issuer_68);
    Instrument_68.insert(Issuer_68.getString());
    FIX::ListMethod ListMethod_68(0);
    noQuoteEntries_0_1.set(ListMethod_68);
    Instrument_68.insert(ListMethod_68.getString());
    FIX::LocaleOfIssue LocaleOfIssue_68("STRING_2059761309");
    noQuoteEntries_0_1.set(LocaleOfIssue_68);
    Instrument_68.insert(LocaleOfIssue_68.getString());
    FIX::MaturityDate MaturityDate_68("LOCALMKTDATE_1037825997");
    noQuoteEntries_0_1.set(MaturityDate_68);
    Instrument_68.insert(MaturityDate_68.getString());
    FIX::MaturityMonthYear MaturityMonthYear_68("MONTHYEAR_531294476");
    noQuoteEntries_0_1.set(MaturityMonthYear_68);
    Instrument_68.insert(MaturityMonthYear_68.getString());
    FIX::MaturityTime MaturityTime_68("TZTIMEONLY_1366923968");
    noQuoteEntries_0_1.set(MaturityTime_68);
    Instrument_68.insert(MaturityTime_68.getString());
    FIX::MinPriceIncrement MinPriceIncrement_68;
    MinPriceIncrement_68.setString("6684163");
    noQuoteEntries_0_1.set(MinPriceIncrement_68);
    Instrument_68.insert(MinPriceIncrement_68.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
    MinPriceIncrementAmount_68.setString("21376893");
    noQuoteEntries_0_1.set(MinPriceIncrementAmount_68);
    Instrument_68.insert(MinPriceIncrementAmount_68.getString());
    FIX::NTPositionLimit NTPositionLimit_68(65408939);
    noQuoteEntries_0_1.set(NTPositionLimit_68);
    Instrument_68.insert(NTPositionLimit_68.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
    NotionalPercentageOutstanding_68.setString("51.480000");
    noQuoteEntries_0_1.set(NotionalPercentageOutstanding_68);
    Instrument_68.insert(NotionalPercentageOutstanding_68.getString());
    FIX::OptAttribute OptAttribute_68('1');
    noQuoteEntries_0_1.set(OptAttribute_68);
    Instrument_68.insert(OptAttribute_68.getString());
    FIX::OptPayoutAmount OptPayoutAmount_68;
    OptPayoutAmount_68.setString("13819461");
    noQuoteEntries_0_1.set(OptPayoutAmount_68);
    Instrument_68.insert(OptPayoutAmount_68.getString());
    FIX::OptPayoutType OptPayoutType_68(2);
    noQuoteEntries_0_1.set(OptPayoutType_68);
    Instrument_68.insert(OptPayoutType_68.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
    OriginalNotionalPercentageOutstanding_68.setString("16.780000");
    noQuoteEntries_0_1.set(OriginalNotionalPercentageOutstanding_68);
    Instrument_68.insert(OriginalNotionalPercentageOutstanding_68.getString());
    FIX::Pool Pool_68("STRING_2019972140");
    noQuoteEntries_0_1.set(Pool_68);
    Instrument_68.insert(Pool_68.getString());
    FIX::PositionLimit PositionLimit_68(2003354874);
    noQuoteEntries_0_1.set(PositionLimit_68);
    Instrument_68.insert(PositionLimit_68.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_68("STRING_STD");
    noQuoteEntries_0_1.set(PriceQuoteMethod_68);
    Instrument_68.insert(PriceQuoteMethod_68.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_68("STRING_654218204");
    noQuoteEntries_0_1.set(PriceUnitOfMeasure_68);
    Instrument_68.insert(PriceUnitOfMeasure_68.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
    PriceUnitOfMeasureQty_68.setString("19433659");
    noQuoteEntries_0_1.set(PriceUnitOfMeasureQty_68);
    Instrument_68.insert(PriceUnitOfMeasureQty_68.getString());
    FIX::Product Product_70(2);
    noQuoteEntries_0_1.set(Product_70);
    Instrument_68.insert(Product_70.getString());
    FIX::ProductComplex ProductComplex_68("STRING_208301145");
    noQuoteEntries_0_1.set(ProductComplex_68);
    Instrument_68.insert(ProductComplex_68.getString());
    FIX::PutOrCall PutOrCall_68(0);
    noQuoteEntries_0_1.set(PutOrCall_68);
    Instrument_68.insert(PutOrCall_68.getString());
    FIX::RedemptionDate RedemptionDate_68("LOCALMKTDATE_1516996858");
    noQuoteEntries_0_1.set(RedemptionDate_68);
    Instrument_68.insert(RedemptionDate_68.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_68("STRING_1745959266");
    noQuoteEntries_0_1.set(RepoCollateralSecurityType_68);
    Instrument_68.insert(RepoCollateralSecurityType_68.getString());
    FIX::RepurchaseRate RepurchaseRate_68;
    RepurchaseRate_68.setString("69.820000");
    noQuoteEntries_0_1.set(RepurchaseRate_68);
    Instrument_68.insert(RepurchaseRate_68.getString());
    FIX::RepurchaseTerm RepurchaseTerm_68(384788021);
    noQuoteEntries_0_1.set(RepurchaseTerm_68);
    Instrument_68.insert(RepurchaseTerm_68.getString());
    FIX::RestructuringType RestructuringType_68("STRING_MR");
    noQuoteEntries_0_1.set(RestructuringType_68);
    Instrument_68.insert(RestructuringType_68.getString());
    FIX::SecurityDesc SecurityDesc_68("STRING_127013309");
    noQuoteEntries_0_1.set(SecurityDesc_68);
    Instrument_68.insert(SecurityDesc_68.getString());
    FIX::SecurityExchange SecurityExchange_68("EXCHANGE_1476061249");
    noQuoteEntries_0_1.set(SecurityExchange_68);
    Instrument_68.insert(SecurityExchange_68.getString());
    FIX::SecurityGroup SecurityGroup_68("STRING_1724663338");
    noQuoteEntries_0_1.set(SecurityGroup_68);
    Instrument_68.insert(SecurityGroup_68.getString());
    FIX::SecurityID SecurityID_68("STRING_948146625");
    noQuoteEntries_0_1.set(SecurityID_68);
    Instrument_68.insert(SecurityID_68.getString());
    FIX::SecurityIDSource SecurityIDSource_68("STRING_F");
    noQuoteEntries_0_1.set(SecurityIDSource_68);
    Instrument_68.insert(SecurityIDSource_68.getString());
    FIX::SecurityStatus SecurityStatus_68("STRING_1");
    noQuoteEntries_0_1.set(SecurityStatus_68);
    Instrument_68.insert(SecurityStatus_68.getString());
    FIX::SecuritySubType SecuritySubType_69("STRING_860424286");
    noQuoteEntries_0_1.set(SecuritySubType_69);
    Instrument_68.insert(SecuritySubType_69.getString());
    FIX::SecurityType SecurityType_70("STRING_FXSWAP");
    noQuoteEntries_0_1.set(SecurityType_70);
    Instrument_68.insert(SecurityType_70.getString());
    FIX::Seniority Seniority_68("STRING_SR");
    noQuoteEntries_0_1.set(Seniority_68);
    Instrument_68.insert(Seniority_68.getString());
    FIX::SettlMethod SettlMethod_68('P');
    noQuoteEntries_0_1.set(SettlMethod_68);
    Instrument_68.insert(SettlMethod_68.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_68("STRING_798567589");
    noQuoteEntries_0_1.set(SettleOnOpenFlag_68);
    Instrument_68.insert(SettleOnOpenFlag_68.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_68("STRING_418992827");
    noQuoteEntries_0_1.set(StateOrProvinceOfIssue_68);
    Instrument_68.insert(StateOrProvinceOfIssue_68.getString());
    FIX::StrikeCurrency StrikeCurrency_68("EUR");
    noQuoteEntries_0_1.set(StrikeCurrency_68);
    Instrument_68.insert(StrikeCurrency_68.getString());
    FIX::StrikeMultiplier StrikeMultiplier_68;
    StrikeMultiplier_68.setString("2564271");
    noQuoteEntries_0_1.set(StrikeMultiplier_68);
    Instrument_68.insert(StrikeMultiplier_68.getString());
    FIX::StrikePrice StrikePrice_68;
    StrikePrice_68.setString("15272196");
    noQuoteEntries_0_1.set(StrikePrice_68);
    Instrument_68.insert(StrikePrice_68.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_68(4);
    noQuoteEntries_0_1.set(StrikePriceBoundaryMethod_68);
    Instrument_68.insert(StrikePriceBoundaryMethod_68.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
    StrikePriceBoundaryPrecision_68.setString("88.570000");
    noQuoteEntries_0_1.set(StrikePriceBoundaryPrecision_68);
    Instrument_68.insert(StrikePriceBoundaryPrecision_68.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_68(3);
    noQuoteEntries_0_1.set(StrikePriceDeterminationMethod_68);
    Instrument_68.insert(StrikePriceDeterminationMethod_68.getString());
    FIX::StrikeValue StrikeValue_68;
    StrikeValue_68.setString("10576254");
    noQuoteEntries_0_1.set(StrikeValue_68);
    Instrument_68.insert(StrikeValue_68.getString());
    FIX::Symbol Symbol_68("STRING_807309437");
    noQuoteEntries_0_1.set(Symbol_68);
    Instrument_68.insert(Symbol_68.getString());
    FIX::SymbolSfx SymbolSfx_68("STRING_CD");
    noQuoteEntries_0_1.set(SymbolSfx_68);
    Instrument_68.insert(SymbolSfx_68.getString());
    FIX::TimeUnit TimeUnit_68("STRING_Mo");
    noQuoteEntries_0_1.set(TimeUnit_68);
    Instrument_68.insert(TimeUnit_68.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_68(2);
    noQuoteEntries_0_1.set(UnderlyingPriceDeterminationMethod_68);
    Instrument_68.insert(UnderlyingPriceDeterminationMethod_68.getString());
    FIX::UnitOfMeasure UnitOfMeasure_68("STRING_Bcf");
    noQuoteEntries_0_1.set(UnitOfMeasure_68);
    Instrument_68.insert(UnitOfMeasure_68.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
    UnitOfMeasureQty_68.setString("17979232");
    noQuoteEntries_0_1.set(UnitOfMeasureQty_68);
    Instrument_68.insert(UnitOfMeasureQty_68.getString());
    FIX::ValuationMethod ValuationMethod_68("STRING_CDSD");
    noQuoteEntries_0_1.set(ValuationMethod_68);
    Instrument_68.insert(ValuationMethod_68.getString());
    all_values.push_back(Instrument_68);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_142;
      FIX::ComplexEventCondition ComplexEventCondition_142(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexEventCondition_142.getString());
      FIX::ComplexEventPrice ComplexEventPrice_142;
      ComplexEventPrice_142.setString("19043529");
      noComplexEvents_1_1_0.set(ComplexEventPrice_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexEventPrice_142.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_142(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryMethod_142.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_142;
      ComplexEventPriceBoundaryPrecision_142.setString("99.430000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryPrecision_142.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_142(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceTimeType_142.getString());
      FIX::ComplexEventType ComplexEventType_142(6);
      noComplexEvents_1_1_0.set(ComplexEventType_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexEventType_142.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_142;
      ComplexOptPayoutAmount_142.setString("14399365");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_142);
      ComplexEvents_NoComplexEvents_142.insert(ComplexOptPayoutAmount_142.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_142);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_292;
        FIX::ComplexEventEndDate ComplexEventEndDate_292(FIX::UTCTIMESTAMP(14, 14, 32, 17, 4, 2007));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_292);
        ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventEndDate_292.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_292(FIX::UTCTIMESTAMP(9, 39, 22, 14, 9, 2006));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_292);
        ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventStartDate_292.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_292);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_594;
          FIX::ComplexEventEndTime ComplexEventEndTime_594(FIX::UTCTIMEONLY(11, 54, 7));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_594);
          ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventEndTime_594.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_594(FIX::UTCTIMEONLY(5, 38, 49));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_594);
          ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventStartTime_594.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_594);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_595;
          FIX::ComplexEventEndTime ComplexEventEndTime_595(FIX::UTCTIMEONLY(14, 1, 41));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_595);
          ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventEndTime_595.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_595(FIX::UTCTIMEONLY(16, 21, 1));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_595);
          ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventStartTime_595.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_595);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_596;
          FIX::ComplexEventEndTime ComplexEventEndTime_596(FIX::UTCTIMEONLY(12, 8, 17));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_596);
          ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventEndTime_596.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_596(FIX::UTCTIMEONLY(11, 36, 1));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_596);
          ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventStartTime_596.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_596);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_143;
      FIX::ComplexEventCondition ComplexEventCondition_143(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventCondition_143.getString());
      FIX::ComplexEventPrice ComplexEventPrice_143;
      ComplexEventPrice_143.setString("6986130");
      noComplexEvents_1_1_1.set(ComplexEventPrice_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPrice_143.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_143(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryMethod_143.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_143;
      ComplexEventPriceBoundaryPrecision_143.setString("77.020000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryPrecision_143.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_143(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceTimeType_143.getString());
      FIX::ComplexEventType ComplexEventType_143(2);
      noComplexEvents_1_1_1.set(ComplexEventType_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventType_143.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_143;
      ComplexOptPayoutAmount_143.setString("13683675");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexOptPayoutAmount_143.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_143);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_293;
        FIX::ComplexEventEndDate ComplexEventEndDate_293(FIX::UTCTIMESTAMP(22, 41, 41, 19, 12, 2001));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_293);
        ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventEndDate_293.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_293(FIX::UTCTIMESTAMP(1, 24, 3, 1, 9, 2004));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_293);
        ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventStartDate_293.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_293);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_597;
          FIX::ComplexEventEndTime ComplexEventEndTime_597(FIX::UTCTIMEONLY(16, 47, 22));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_597);
          ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventEndTime_597.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_597(FIX::UTCTIMEONLY(14, 51, 51));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_597);
          ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventStartTime_597.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_597);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_294;
        FIX::ComplexEventEndDate ComplexEventEndDate_294(FIX::UTCTIMESTAMP(22, 6, 9, 14, 6, 2013));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_294);
        ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventEndDate_294.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_294(FIX::UTCTIMESTAMP(0, 47, 13, 17, 7, 2000));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_294);
        ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventStartDate_294.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_294);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_598;
          FIX::ComplexEventEndTime ComplexEventEndTime_598(FIX::UTCTIMEONLY(18, 9, 47));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_598);
          ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventEndTime_598.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_598(FIX::UTCTIMEONLY(17, 3, 34));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_598);
          ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventStartTime_598.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_598);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_599;
          FIX::ComplexEventEndTime ComplexEventEndTime_599(FIX::UTCTIMEONLY(12, 13, 49));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_599);
          ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventEndTime_599.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_599(FIX::UTCTIMEONLY(16, 40, 49));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_599);
          ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventStartTime_599.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_599);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_144;
      FIX::ComplexEventCondition ComplexEventCondition_144(2);
      noComplexEvents_1_1_2.set(ComplexEventCondition_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventCondition_144.getString());
      FIX::ComplexEventPrice ComplexEventPrice_144;
      ComplexEventPrice_144.setString("20560789");
      noComplexEvents_1_1_2.set(ComplexEventPrice_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPrice_144.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_144(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryMethod_144.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_144;
      ComplexEventPriceBoundaryPrecision_144.setString("85.320000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryPrecision_144.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_144(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceTimeType_144.getString());
      FIX::ComplexEventType ComplexEventType_144(2);
      noComplexEvents_1_1_2.set(ComplexEventType_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventType_144.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_144;
      ComplexOptPayoutAmount_144.setString("10744287");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexOptPayoutAmount_144.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_144);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_295;
        FIX::ComplexEventEndDate ComplexEventEndDate_295(FIX::UTCTIMESTAMP(5, 23, 42, 16, 1, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_295);
        ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventEndDate_295.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_295(FIX::UTCTIMESTAMP(10, 35, 15, 13, 6, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_295);
        ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventStartDate_295.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_295);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_600;
          FIX::ComplexEventEndTime ComplexEventEndTime_600(FIX::UTCTIMEONLY(10, 33, 21));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_600);
          ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventEndTime_600.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_600(FIX::UTCTIMEONLY(1, 2, 49));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_600);
          ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventStartTime_600.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_600);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_601;
          FIX::ComplexEventEndTime ComplexEventEndTime_601(FIX::UTCTIMEONLY(9, 36, 25));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_601);
          ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventEndTime_601.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_601(FIX::UTCTIMEONLY(9, 43, 20));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_601);
          ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventStartTime_601.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_601);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_135;
      FIX::EventDate EventDate_135("LOCALMKTDATE_1371513648");
      noEvents_1_1_0.set(EventDate_135);
      EvntGrp_NoEvents_135.insert(EventDate_135.getString());
      FIX::EventPx EventPx_135;
      EventPx_135.setString("12574843");
      noEvents_1_1_0.set(EventPx_135);
      EvntGrp_NoEvents_135.insert(EventPx_135.getString());
      FIX::EventText EventText_135("STRING_1952901191");
      noEvents_1_1_0.set(EventText_135);
      EvntGrp_NoEvents_135.insert(EventText_135.getString());
      FIX::EventTime EventTime_135(FIX::UTCTIMESTAMP(0, 38, 44, 2, 2, 2015));
      noEvents_1_1_0.set(EventTime_135);
      EvntGrp_NoEvents_135.insert(EventTime_135.getString());
      FIX::EventType EventType_135(8);
      noEvents_1_1_0.set(EventType_135);
      EvntGrp_NoEvents_135.insert(EventType_135.getString());
      all_values.push_back(EvntGrp_NoEvents_135);
      all_compo_names.insert("EvntGrp.NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_136;
      FIX::EventDate EventDate_136("LOCALMKTDATE_1072114750");
      noEvents_1_1_1.set(EventDate_136);
      EvntGrp_NoEvents_136.insert(EventDate_136.getString());
      FIX::EventPx EventPx_136;
      EventPx_136.setString("12898696");
      noEvents_1_1_1.set(EventPx_136);
      EvntGrp_NoEvents_136.insert(EventPx_136.getString());
      FIX::EventText EventText_136("STRING_974126427");
      noEvents_1_1_1.set(EventText_136);
      EvntGrp_NoEvents_136.insert(EventText_136.getString());
      FIX::EventTime EventTime_136(FIX::UTCTIMESTAMP(12, 1, 56, 17, 7, 2004));
      noEvents_1_1_1.set(EventTime_136);
      EvntGrp_NoEvents_136.insert(EventTime_136.getString());
      FIX::EventType EventType_136(3);
      noEvents_1_1_1.set(EventType_136);
      EvntGrp_NoEvents_136.insert(EventType_136.getString());
      all_values.push_back(EvntGrp_NoEvents_136);
      all_compo_names.insert("EvntGrp.NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_137;
      FIX::EventDate EventDate_137("LOCALMKTDATE_1040572043");
      noEvents_1_1_2.set(EventDate_137);
      EvntGrp_NoEvents_137.insert(EventDate_137.getString());
      FIX::EventPx EventPx_137;
      EventPx_137.setString("9496080");
      noEvents_1_1_2.set(EventPx_137);
      EvntGrp_NoEvents_137.insert(EventPx_137.getString());
      FIX::EventText EventText_137("STRING_1475469391");
      noEvents_1_1_2.set(EventText_137);
      EvntGrp_NoEvents_137.insert(EventText_137.getString());
      FIX::EventTime EventTime_137(FIX::UTCTIMESTAMP(1, 32, 23, 14, 2, 2003));
      noEvents_1_1_2.set(EventTime_137);
      EvntGrp_NoEvents_137.insert(EventTime_137.getString());
      FIX::EventType EventType_137(3);
      noEvents_1_1_2.set(EventType_137);
      EvntGrp_NoEvents_137.insert(EventType_137.getString());
      all_values.push_back(EvntGrp_NoEvents_137);
      all_compo_names.insert("EvntGrp.NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_139;
      FIX::InstrumentPartyID InstrumentPartyID_139("STRING_1213520300");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_139);
      InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyID_139.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_139('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_139);
      InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyIDSource_139.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_139(946158335);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_139);
      InstrumentParties_NoInstrumentParties_139.insert(InstrumentPartyRole_139.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_139);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266;
        FIX::InstrumentPartySubID InstrumentPartySubID_266("STRING_1956538380");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_266);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubID_266.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_266(935524600);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_266);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubIDType_266.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267;
        FIX::InstrumentPartySubID InstrumentPartySubID_267("STRING_1633569888");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_267);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubID_267.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_267(857443319);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_267);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubIDType_267.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268;
        FIX::InstrumentPartySubID InstrumentPartySubID_268("STRING_2007639351");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_268);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubID_268.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_268(775955922);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_268);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubIDType_268.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_140;
      FIX::InstrumentPartyID InstrumentPartyID_140("STRING_1831569747");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_140);
      InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyID_140.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_140('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_140);
      InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyIDSource_140.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_140(404157046);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_140);
      InstrumentParties_NoInstrumentParties_140.insert(InstrumentPartyRole_140.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_140);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269;
        FIX::InstrumentPartySubID InstrumentPartySubID_269("STRING_1308410901");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_269);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubID_269.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_269(1545603299);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_269);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubIDType_269.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270;
        FIX::InstrumentPartySubID InstrumentPartySubID_270("STRING_2123349950");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_270);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubID_270.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_270(762018311);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_270);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubIDType_270.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271;
        FIX::InstrumentPartySubID InstrumentPartySubID_271("STRING_1273916154");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_271);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubID_271.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_271(1016438345);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_271);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubIDType_271.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_141;
      FIX::InstrumentPartyID InstrumentPartyID_141("STRING_1711626394");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_141);
      InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyID_141.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_141('6');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_141);
      InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyIDSource_141.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_141(1951924845);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_141);
      InstrumentParties_NoInstrumentParties_141.insert(InstrumentPartyRole_141.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_141);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272;
        FIX::InstrumentPartySubID InstrumentPartySubID_272("STRING_647102689");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_272);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubID_272.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_272(1709270940);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_272);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubIDType_272.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273;
        FIX::InstrumentPartySubID InstrumentPartySubID_273("STRING_1786590278");
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubID_273);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubID_273.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_273(2008733570);
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubIDType_273);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubIDType_273.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_126;
      FIX::SecurityAltID SecurityAltID_126("STRING_368024992");
      noSecurityAltID_1_1_0.set(SecurityAltID_126);
      SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltID_126.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_126("STRING_1028298347");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_126);
      SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltIDSource_126.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_126);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_127;
      FIX::SecurityAltID SecurityAltID_127("STRING_1904167336");
      noSecurityAltID_1_1_1.set(SecurityAltID_127);
      SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltID_127.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_127("STRING_134088690");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_127);
      SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltIDSource_127.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_127);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_128;
      FIX::SecurityAltID SecurityAltID_128("STRING_1974456682");
      noSecurityAltID_1_1_2.set(SecurityAltID_128);
      SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltID_128.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_128("STRING_354620284");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_128);
      SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltIDSource_128.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_136;
    FIX::SecurityXML SecurityXML_137("XMLDATA_2090627070");
    noQuoteEntries_0_1.set(SecurityXML_137);
    FIX::SecurityXMLLen SecurityXMLLen_68(762497635);
    noQuoteEntries_0_1.set(SecurityXMLLen_68);
    FIX::SecurityXMLSchema SecurityXMLSchema_68("STRING_1988190172");
    noQuoteEntries_0_1.set(SecurityXMLSchema_68);
    SecurityXML_136.insert(SecurityXMLSchema_68.getString());
    all_values.push_back(SecurityXML_136);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_98;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_98("DATA_622653338");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingIssuer_98.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_98(616662446);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingIssuerLen_98.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_98("DATA_484672840");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDesc_98.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_98(1917378543);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDescLen_98.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_98;
      UnderlyingAdjustedQuantity_98.setString("10208194");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_98);
      UnderlyingInstrument_98.insert(UnderlyingAdjustedQuantity_98.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_98;
      UnderlyingAllocationPercent_98.setString("3.200000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_98);
      UnderlyingInstrument_98.insert(UnderlyingAllocationPercent_98.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_98;
      UnderlyingAttachmentPoint_98.setString("57.970000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_98);
      UnderlyingInstrument_98.insert(UnderlyingAttachmentPoint_98.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_98("STRING_418939144");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_98);
      UnderlyingInstrument_98.insert(UnderlyingCFICode_98.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_98("STRING_1488446623");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_98);
      UnderlyingInstrument_98.insert(UnderlyingCPProgram_98.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_98("STRING_1840324108");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_98);
      UnderlyingInstrument_98.insert(UnderlyingCPRegType_98.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_98;
      UnderlyingCapValue_98.setString("16928552");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_98);
      UnderlyingInstrument_98.insert(UnderlyingCapValue_98.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_98;
      UnderlyingCashAmount_98.setString("3574013");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_98);
      UnderlyingInstrument_98.insert(UnderlyingCashAmount_98.getString());
      FIX::UnderlyingCashType UnderlyingCashType_98("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_98);
      UnderlyingInstrument_98.insert(UnderlyingCashType_98.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_98;
      UnderlyingContractMultiplier_98.setString("1472735");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_98);
      UnderlyingInstrument_98.insert(UnderlyingContractMultiplier_98.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_98(161842518);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_98);
      UnderlyingInstrument_98.insert(UnderlyingContractMultiplierUnit_98.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_98("COUNTRY_1572139427");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingCountryOfIssue_98.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_98("LOCALMKTDATE_794376236");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_98);
      UnderlyingInstrument_98.insert(UnderlyingCouponPaymentDate_98.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_98;
      UnderlyingCouponRate_98.setString("34.580000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_98);
      UnderlyingInstrument_98.insert(UnderlyingCouponRate_98.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_98("STRING_1211246057");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_98);
      UnderlyingInstrument_98.insert(UnderlyingCreditRating_98.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_98("USD");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_98);
      UnderlyingInstrument_98.insert(UnderlyingCurrency_98.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_98;
      UnderlyingCurrentValue_98.setString("15792710");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_98);
      UnderlyingInstrument_98.insert(UnderlyingCurrentValue_98.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_98;
      UnderlyingDetachmentPoint_98.setString("45.060000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_98);
      UnderlyingInstrument_98.insert(UnderlyingDetachmentPoint_98.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_98;
      UnderlyingDirtyPrice_98.setString("1709605");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_98);
      UnderlyingInstrument_98.insert(UnderlyingDirtyPrice_98.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_98;
      UnderlyingEndPrice_98.setString("17133597");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_98);
      UnderlyingInstrument_98.insert(UnderlyingEndPrice_98.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_98;
      UnderlyingEndValue_98.setString("15108975");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_98);
      UnderlyingInstrument_98.insert(UnderlyingEndValue_98.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_98(525580819);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_98);
      UnderlyingInstrument_98.insert(UnderlyingExerciseStyle_98.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_98;
      UnderlyingFXRate_98.setString("16565031");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_98);
      UnderlyingInstrument_98.insert(UnderlyingFXRate_98.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_98('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_98);
      UnderlyingInstrument_98.insert(UnderlyingFXRateCalc_98.getString());
      FIX::UnderlyingFactor UnderlyingFactor_98;
      UnderlyingFactor_98.setString("3662873");
      noUnderlyings_1_1_0.set(UnderlyingFactor_98);
      UnderlyingInstrument_98.insert(UnderlyingFactor_98.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_98(309606254);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_98);
      UnderlyingInstrument_98.insert(UnderlyingFlowScheduleType_98.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_98("STRING_748564866");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_98);
      UnderlyingInstrument_98.insert(UnderlyingInstrRegistry_98.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_98("LOCALMKTDATE_982949790");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_98);
      UnderlyingInstrument_98.insert(UnderlyingIssueDate_98.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_98("STRING_794279095");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_98);
      UnderlyingInstrument_98.insert(UnderlyingIssuer_98.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_98("STRING_518459761");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingLocaleOfIssue_98.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_98("LOCALMKTDATE_2003769283");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityDate_98.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_98("MONTHYEAR_159375767");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityMonthYear_98.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_98("TZTIMEONLY_1596765558");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityTime_98.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_98;
      UnderlyingNotionalPercentageOutstanding_98.setString("47.790000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_98);
      UnderlyingInstrument_98.insert(UnderlyingNotionalPercentageOutstanding_98.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_98('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_98);
      UnderlyingInstrument_98.insert(UnderlyingOptAttribute_98.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_98;
      UnderlyingOriginalNotionalPercentageOutstanding_98.setString("60.190000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_98);
      UnderlyingInstrument_98.insert(UnderlyingOriginalNotionalPercentageOutstanding_98.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_98("STRING_1968080078");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_98);
      UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasure_98.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_98;
      UnderlyingPriceUnitOfMeasureQty_98.setString("20052237");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_98);
      UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasureQty_98.getString());
      FIX::UnderlyingProduct UnderlyingProduct_98(546589226);
      noUnderlyings_1_1_0.set(UnderlyingProduct_98);
      UnderlyingInstrument_98.insert(UnderlyingProduct_98.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_98(2115353625);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_98);
      UnderlyingInstrument_98.insert(UnderlyingPutOrCall_98.getString());
      FIX::UnderlyingPx UnderlyingPx_98;
      UnderlyingPx_98.setString("195825");
      noUnderlyings_1_1_0.set(UnderlyingPx_98);
      UnderlyingInstrument_98.insert(UnderlyingPx_98.getString());
      FIX::UnderlyingQty UnderlyingQty_98;
      UnderlyingQty_98.setString("21187286");
      noUnderlyings_1_1_0.set(UnderlyingQty_98);
      UnderlyingInstrument_98.insert(UnderlyingQty_98.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_98("LOCALMKTDATE_762246214");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_98);
      UnderlyingInstrument_98.insert(UnderlyingRedemptionDate_98.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_98("STRING_1890696039");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_98);
      UnderlyingInstrument_98.insert(UnderlyingRepoCollateralSecurityType_98.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_98;
      UnderlyingRepurchaseRate_98.setString("10.620000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_98);
      UnderlyingInstrument_98.insert(UnderlyingRepurchaseRate_98.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_98(1417872373);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_98);
      UnderlyingInstrument_98.insert(UnderlyingRepurchaseTerm_98.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_98("STRING_157489238");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_98);
      UnderlyingInstrument_98.insert(UnderlyingRestructuringType_98.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_98("STRING_614278463");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityDesc_98.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_98("EXCHANGE_954313231");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityExchange_98.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_98("STRING_328449772");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityID_98.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_98("STRING_180154554");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityIDSource_98.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_98("STRING_317727124");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_98);
      UnderlyingInstrument_98.insert(UnderlyingSecuritySubType_98.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_98("STRING_854030591");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityType_98.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_98("STRING_1836657715");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_98);
      UnderlyingInstrument_98.insert(UnderlyingSeniority_98.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_98("STRING_443638652");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_98);
      UnderlyingInstrument_98.insert(UnderlyingSettlMethod_98.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_98(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_98);
      UnderlyingInstrument_98.insert(UnderlyingSettlementType_98.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_98;
      UnderlyingStartValue_98.setString("21462639");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_98);
      UnderlyingInstrument_98.insert(UnderlyingStartValue_98.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_98("STRING_1192203518");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingStateOrProvinceOfIssue_98.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_98("GBP");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_98);
      UnderlyingInstrument_98.insert(UnderlyingStrikeCurrency_98.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_98;
      UnderlyingStrikePrice_98.setString("17106632");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_98);
      UnderlyingInstrument_98.insert(UnderlyingStrikePrice_98.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_98("STRING_2059553360");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_98);
      UnderlyingInstrument_98.insert(UnderlyingSymbol_98.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_98("STRING_952435184");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_98);
      UnderlyingInstrument_98.insert(UnderlyingSymbolSfx_98.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_98("STRING_1159945190");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_98);
      UnderlyingInstrument_98.insert(UnderlyingTimeUnit_98.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_98("STRING_187294491");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_98);
      UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasure_98.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_98;
      UnderlyingUnitOfMeasureQty_98.setString("4527739");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_98);
      UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasureQty_98.getString());
      all_values.push_back(UnderlyingInstrument_98);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_196("STRING_7890921");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltID_196.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_196("STRING_310513989");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltIDSource_196.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_197;
        FIX::UnderlyingStipType UnderlyingStipType_197("STRING_2123244547");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_197);
        UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipType_197.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_197("STRING_330096570");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_197);
        UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipValue_197.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_197);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_198;
        FIX::UnderlyingStipType UnderlyingStipType_198("STRING_819901792");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_198);
        UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipType_198.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_198("STRING_738007113");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_198);
        UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipValue_198.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_198);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_199;
        FIX::UnderlyingStipType UnderlyingStipType_199("STRING_73308962");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_199);
        UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipType_199.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_199("STRING_2002392854");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_199);
        UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipValue_199.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_199);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_181;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_181("STRING_230798200");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyID_181.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_181('4');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyIDSource_181.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_181(962709069);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyRole_181.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_181);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_361("STRING_649342223");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_361);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubID_361.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_361(1280436194);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_361);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubIDType_361.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_362("STRING_1413278564");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_362);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubID_362.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_362(338516290);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_362);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubIDType_362.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_363("STRING_1724074846");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_363);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubID_363.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_363(486112851);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_363);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubIDType_363.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_182;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_182("STRING_337296612");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyID_182.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_182('7');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyIDSource_182.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_182(541896928);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyRole_182.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_182);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_364("STRING_331974349");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_364);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubID_364.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_364(453966640);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_364);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubIDType_364.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_365("STRING_2082791212");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_365);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubID_365.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_365(1491919539);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_365);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubIDType_365.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_366("STRING_641261131");
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubID_366);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubID_366.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_366(388081491);
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_366);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubIDType_366.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_183;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_183("STRING_1793987101");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyID_183.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_183('6');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyIDSource_183.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_183(698595480);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyRole_183.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_183);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_367("STRING_624912952");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_367);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubID_367.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_367(1028692051);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_367);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubIDType_367.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_368("STRING_1315062033");
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubID_368);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubID_368.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_368(1362920065);
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_368);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubIDType_368.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_0);
    }
    msg.addGroup(noQuoteEntries_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_15;
    FIX::TargetPartyID TargetPartyID_15("STRING_1169971239");
    noTargetPartyIDs_0_0.set(TargetPartyID_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyID_15.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_15('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyIDSource_15.getString());
    FIX::TargetPartyRole TargetPartyRole_15(1332799213);
    noTargetPartyIDs_0_0.set(TargetPartyRole_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyRole_15.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_15);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

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
