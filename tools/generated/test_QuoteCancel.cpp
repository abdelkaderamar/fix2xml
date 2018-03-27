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
  FIX::Account Account_32("STRING_1586163309");
  msg.set(Account_32);
  QuoteCancel_0.insert(Account_32.getString());
  FIX::AccountType AccountType_28(6);
  msg.set(AccountType_28);
  QuoteCancel_0.insert(AccountType_28.getString());
  FIX::AcctIDSource AcctIDSource_25(1);
  msg.set(AcctIDSource_25);
  QuoteCancel_0.insert(AcctIDSource_25.getString());
  FIX::QuoteCancelType QuoteCancelType_1(8);
  msg.set(QuoteCancelType_1);
  QuoteCancel_0.insert(QuoteCancelType_1.getString());
  FIX::QuoteID QuoteID_11("STRING_183701161");
  msg.set(QuoteID_11);
  QuoteCancel_0.insert(QuoteID_11.getString());
  FIX::QuoteMsgID QuoteMsgID_1("STRING_21931001");
  msg.set(QuoteMsgID_1);
  QuoteCancel_0.insert(QuoteMsgID_1.getString());
  FIX::QuoteReqID QuoteReqID_3("STRING_61144115");
  msg.set(QuoteReqID_3);
  QuoteCancel_0.insert(QuoteReqID_3.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_3(2);
  msg.set(QuoteResponseLevel_3);
  QuoteCancel_0.insert(QuoteResponseLevel_3.getString());
  FIX::QuoteType QuoteType_5(0);
  msg.set(QuoteType_5);
  QuoteCancel_0.insert(QuoteType_5.getString());
  FIX::TradingSessionID TradingSessionID_61("STRING_4");
  msg.set(TradingSessionID_61);
  QuoteCancel_0.insert(TradingSessionID_61.getString());
  FIX::TradingSessionSubID TradingSessionSubID_61("STRING_7");
  msg.set(TradingSessionSubID_61);
  QuoteCancel_0.insert(TradingSessionSubID_61.getString());
  all_values.push_back(QuoteCancel_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_107;
    FIX::PartyID PartyID_107("STRING_1893999233");
    noPartyIDs_0_0.set(PartyID_107);
    Parties_NoPartyIDs_107.insert(PartyID_107.getString());
    FIX::PartyIDSource PartyIDSource_107('4');
    noPartyIDs_0_0.set(PartyIDSource_107);
    Parties_NoPartyIDs_107.insert(PartyIDSource_107.getString());
    FIX::PartyRole PartyRole_107(13);
    noPartyIDs_0_0.set(PartyRole_107);
    Parties_NoPartyIDs_107.insert(PartyRole_107.getString());
    all_values.push_back(Parties_NoPartyIDs_107);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_208;
      FIX::PartySubID PartySubID_208("STRING_767809596");
      noPartySubIDs_0_1_0.set(PartySubID_208);
      PtysSubGrp_NoPartySubIDs_208.insert(PartySubID_208.getString());
      FIX::PartySubIDType PartySubIDType_208(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_208);
      PtysSubGrp_NoPartySubIDs_208.insert(PartySubIDType_208.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_208);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_108;
    FIX::PartyID PartyID_108("STRING_1056299034");
    noPartyIDs_0_1.set(PartyID_108);
    Parties_NoPartyIDs_108.insert(PartyID_108.getString());
    FIX::PartyIDSource PartyIDSource_108('5');
    noPartyIDs_0_1.set(PartyIDSource_108);
    Parties_NoPartyIDs_108.insert(PartyIDSource_108.getString());
    FIX::PartyRole PartyRole_108(39);
    noPartyIDs_0_1.set(PartyRole_108);
    Parties_NoPartyIDs_108.insert(PartyRole_108.getString());
    all_values.push_back(Parties_NoPartyIDs_108);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_209;
      FIX::PartySubID PartySubID_209("STRING_1915836688");
      noPartySubIDs_1_1_0.set(PartySubID_209);
      PtysSubGrp_NoPartySubIDs_209.insert(PartySubID_209.getString());
      FIX::PartySubIDType PartySubIDType_209(11);
      noPartySubIDs_1_1_0.set(PartySubIDType_209);
      PtysSubGrp_NoPartySubIDs_209.insert(PartySubIDType_209.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_209);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_210;
      FIX::PartySubID PartySubID_210("STRING_671965768");
      noPartySubIDs_1_1_1.set(PartySubID_210);
      PtysSubGrp_NoPartySubIDs_210.insert(PartySubID_210.getString());
      FIX::PartySubIDType PartySubIDType_210(9);
      noPartySubIDs_1_1_1.set(PartySubIDType_210);
      PtysSubGrp_NoPartySubIDs_210.insert(PartySubIDType_210.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_210);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_211;
      FIX::PartySubID PartySubID_211("STRING_273378579");
      noPartySubIDs_1_1_2.set(PartySubID_211);
      PtysSubGrp_NoPartySubIDs_211.insert(PartySubID_211.getString());
      FIX::PartySubIDType PartySubIDType_211(10);
      noPartySubIDs_1_1_2.set(PartySubIDType_211);
      PtysSubGrp_NoPartySubIDs_211.insert(PartySubIDType_211.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_211);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_109;
    FIX::PartyID PartyID_109("STRING_882466191");
    noPartyIDs_0_2.set(PartyID_109);
    Parties_NoPartyIDs_109.insert(PartyID_109.getString());
    FIX::PartyIDSource PartyIDSource_109('D');
    noPartyIDs_0_2.set(PartyIDSource_109);
    Parties_NoPartyIDs_109.insert(PartyIDSource_109.getString());
    FIX::PartyRole PartyRole_109(49);
    noPartyIDs_0_2.set(PartyRole_109);
    Parties_NoPartyIDs_109.insert(PartyRole_109.getString());
    all_values.push_back(Parties_NoPartyIDs_109);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_212;
      FIX::PartySubID PartySubID_212("STRING_1137142190");
      noPartySubIDs_2_1_0.set(PartySubID_212);
      PtysSubGrp_NoPartySubIDs_212.insert(PartySubID_212.getString());
      FIX::PartySubIDType PartySubIDType_212(19);
      noPartySubIDs_2_1_0.set(PartySubIDType_212);
      PtysSubGrp_NoPartySubIDs_212.insert(PartySubIDType_212.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_212);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_213;
      FIX::PartySubID PartySubID_213("STRING_965406812");
      noPartySubIDs_2_1_1.set(PartySubID_213);
      PtysSubGrp_NoPartySubIDs_213.insert(PartySubID_213.getString());
      FIX::PartySubIDType PartySubIDType_213(5);
      noPartySubIDs_2_1_1.set(PartySubIDType_213);
      PtysSubGrp_NoPartySubIDs_213.insert(PartySubIDType_213.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_213);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_214;
      FIX::PartySubID PartySubID_214("STRING_1161403562");
      noPartySubIDs_2_1_2.set(PartySubID_214);
      PtysSubGrp_NoPartySubIDs_214.insert(PartySubID_214.getString());
      FIX::PartySubIDType PartySubIDType_214(29);
      noPartySubIDs_2_1_2.set(PartySubIDType_214);
      PtysSubGrp_NoPartySubIDs_214.insert(PartySubIDType_214.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_214);

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
    FIX::AgreementCurrency AgreementCurrency_17("JPY");
    noQuoteEntries_0_0.set(AgreementCurrency_17);
    FinancingDetails_17.insert(AgreementCurrency_17.getString());
    FIX::AgreementDate AgreementDate_17("LOCALMKTDATE_1236022813");
    noQuoteEntries_0_0.set(AgreementDate_17);
    FinancingDetails_17.insert(AgreementDate_17.getString());
    FIX::AgreementDesc AgreementDesc_17("STRING_1042876442");
    noQuoteEntries_0_0.set(AgreementDesc_17);
    FinancingDetails_17.insert(AgreementDesc_17.getString());
    FIX::AgreementID AgreementID_17("STRING_1820842454");
    noQuoteEntries_0_0.set(AgreementID_17);
    FinancingDetails_17.insert(AgreementID_17.getString());
    FIX::DeliveryType DeliveryType_17(1);
    noQuoteEntries_0_0.set(DeliveryType_17);
    FinancingDetails_17.insert(DeliveryType_17.getString());
    FIX::EndDate EndDate_17("LOCALMKTDATE_1861264178");
    noQuoteEntries_0_0.set(EndDate_17);
    FinancingDetails_17.insert(EndDate_17.getString());
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("43.080000");
    noQuoteEntries_0_0.set(MarginRatio_17);
    FinancingDetails_17.insert(MarginRatio_17.getString());
    FIX::StartDate StartDate_17("LOCALMKTDATE_60722534");
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
      multiset<string> InstrumentLeg_71;
      FIX::EncodedLegIssuer EncodedLegIssuer_71("DATA_1107983279");
      noLegs_0_1_0.set(EncodedLegIssuer_71);
      InstrumentLeg_71.insert(EncodedLegIssuer_71.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_71(922244563);
      noLegs_0_1_0.set(EncodedLegIssuerLen_71);
      InstrumentLeg_71.insert(EncodedLegIssuerLen_71.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_71("DATA_64241283");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_71);
      InstrumentLeg_71.insert(EncodedLegSecurityDesc_71.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_71(876336319);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_71);
      InstrumentLeg_71.insert(EncodedLegSecurityDescLen_71.getString());
      FIX::LegCFICode LegCFICode_71("STRING_1755900804");
      noLegs_0_1_0.set(LegCFICode_71);
      InstrumentLeg_71.insert(LegCFICode_71.getString());
      FIX::LegContractMultiplier LegContractMultiplier_71;
      LegContractMultiplier_71.setString("7362070");
      noLegs_0_1_0.set(LegContractMultiplier_71);
      InstrumentLeg_71.insert(LegContractMultiplier_71.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_71(1409339556);
      noLegs_0_1_0.set(LegContractMultiplierUnit_71);
      InstrumentLeg_71.insert(LegContractMultiplierUnit_71.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_71("MONTHYEAR_2029279383");
      noLegs_0_1_0.set(LegContractSettlMonth_71);
      InstrumentLeg_71.insert(LegContractSettlMonth_71.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_71("COUNTRY_1530469211");
      noLegs_0_1_0.set(LegCountryOfIssue_71);
      InstrumentLeg_71.insert(LegCountryOfIssue_71.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_71("LOCALMKTDATE_144322100");
      noLegs_0_1_0.set(LegCouponPaymentDate_71);
      InstrumentLeg_71.insert(LegCouponPaymentDate_71.getString());
      FIX::LegCouponRate LegCouponRate_71;
      LegCouponRate_71.setString("69.690000");
      noLegs_0_1_0.set(LegCouponRate_71);
      InstrumentLeg_71.insert(LegCouponRate_71.getString());
      FIX::LegCreditRating LegCreditRating_71("STRING_1501603286");
      noLegs_0_1_0.set(LegCreditRating_71);
      InstrumentLeg_71.insert(LegCreditRating_71.getString());
      FIX::LegCurrency LegCurrency_71("CAN");
      noLegs_0_1_0.set(LegCurrency_71);
      InstrumentLeg_71.insert(LegCurrency_71.getString());
      FIX::LegDatedDate LegDatedDate_71("LOCALMKTDATE_493592199");
      noLegs_0_1_0.set(LegDatedDate_71);
      InstrumentLeg_71.insert(LegDatedDate_71.getString());
      FIX::LegExerciseStyle LegExerciseStyle_71(1430874765);
      noLegs_0_1_0.set(LegExerciseStyle_71);
      InstrumentLeg_71.insert(LegExerciseStyle_71.getString());
      FIX::LegFactor LegFactor_71;
      LegFactor_71.setString("3682888");
      noLegs_0_1_0.set(LegFactor_71);
      InstrumentLeg_71.insert(LegFactor_71.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_71(1654995762);
      noLegs_0_1_0.set(LegFlowScheduleType_71);
      InstrumentLeg_71.insert(LegFlowScheduleType_71.getString());
      FIX::LegInstrRegistry LegInstrRegistry_71("STRING_309942044");
      noLegs_0_1_0.set(LegInstrRegistry_71);
      InstrumentLeg_71.insert(LegInstrRegistry_71.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_71("LOCALMKTDATE_584288730");
      noLegs_0_1_0.set(LegInterestAccrualDate_71);
      InstrumentLeg_71.insert(LegInterestAccrualDate_71.getString());
      FIX::LegIssueDate LegIssueDate_71("LOCALMKTDATE_62466001");
      noLegs_0_1_0.set(LegIssueDate_71);
      InstrumentLeg_71.insert(LegIssueDate_71.getString());
      FIX::LegIssuer LegIssuer_71("STRING_236785264");
      noLegs_0_1_0.set(LegIssuer_71);
      InstrumentLeg_71.insert(LegIssuer_71.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_71("STRING_1820311543");
      noLegs_0_1_0.set(LegLocaleOfIssue_71);
      InstrumentLeg_71.insert(LegLocaleOfIssue_71.getString());
      FIX::LegMaturityDate LegMaturityDate_71("LOCALMKTDATE_1105342443");
      noLegs_0_1_0.set(LegMaturityDate_71);
      InstrumentLeg_71.insert(LegMaturityDate_71.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_71("MONTHYEAR_2057627718");
      noLegs_0_1_0.set(LegMaturityMonthYear_71);
      InstrumentLeg_71.insert(LegMaturityMonthYear_71.getString());
      FIX::LegMaturityTime LegMaturityTime_71("TZTIMEONLY_1113224481");
      noLegs_0_1_0.set(LegMaturityTime_71);
      InstrumentLeg_71.insert(LegMaturityTime_71.getString());
      FIX::LegOptAttribute LegOptAttribute_71('8');
      noLegs_0_1_0.set(LegOptAttribute_71);
      InstrumentLeg_71.insert(LegOptAttribute_71.getString());
      FIX::LegOptionRatio LegOptionRatio_71;
      LegOptionRatio_71.setString("3522583");
      noLegs_0_1_0.set(LegOptionRatio_71);
      InstrumentLeg_71.insert(LegOptionRatio_71.getString());
      FIX::LegPool LegPool_71("STRING_1173947015");
      noLegs_0_1_0.set(LegPool_71);
      InstrumentLeg_71.insert(LegPool_71.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_71("STRING_419563827");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_71);
      InstrumentLeg_71.insert(LegPriceUnitOfMeasure_71.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_71;
      LegPriceUnitOfMeasureQty_71.setString("18506717");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_71);
      InstrumentLeg_71.insert(LegPriceUnitOfMeasureQty_71.getString());
      FIX::LegProduct LegProduct_71(134446646);
      noLegs_0_1_0.set(LegProduct_71);
      InstrumentLeg_71.insert(LegProduct_71.getString());
      FIX::LegPutOrCall LegPutOrCall_71(1341808391);
      noLegs_0_1_0.set(LegPutOrCall_71);
      InstrumentLeg_71.insert(LegPutOrCall_71.getString());
      FIX::LegRatioQty LegRatioQty_71;
      LegRatioQty_71.setString("19149130");
      noLegs_0_1_0.set(LegRatioQty_71);
      InstrumentLeg_71.insert(LegRatioQty_71.getString());
      FIX::LegRedemptionDate LegRedemptionDate_71("LOCALMKTDATE_1010782966");
      noLegs_0_1_0.set(LegRedemptionDate_71);
      InstrumentLeg_71.insert(LegRedemptionDate_71.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_71("STRING_950225547");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_71);
      InstrumentLeg_71.insert(LegRepoCollateralSecurityType_71.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_71;
      LegRepurchaseRate_71.setString("64.080000");
      noLegs_0_1_0.set(LegRepurchaseRate_71);
      InstrumentLeg_71.insert(LegRepurchaseRate_71.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_71(272638874);
      noLegs_0_1_0.set(LegRepurchaseTerm_71);
      InstrumentLeg_71.insert(LegRepurchaseTerm_71.getString());
      FIX::LegSecurityDesc LegSecurityDesc_71("STRING_832021282");
      noLegs_0_1_0.set(LegSecurityDesc_71);
      InstrumentLeg_71.insert(LegSecurityDesc_71.getString());
      FIX::LegSecurityExchange LegSecurityExchange_71("EXCHANGE_2034105619");
      noLegs_0_1_0.set(LegSecurityExchange_71);
      InstrumentLeg_71.insert(LegSecurityExchange_71.getString());
      FIX::LegSecurityID LegSecurityID_71("STRING_416960974");
      noLegs_0_1_0.set(LegSecurityID_71);
      InstrumentLeg_71.insert(LegSecurityID_71.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_71("STRING_889808251");
      noLegs_0_1_0.set(LegSecurityIDSource_71);
      InstrumentLeg_71.insert(LegSecurityIDSource_71.getString());
      FIX::LegSecuritySubType LegSecuritySubType_71("STRING_1388225257");
      noLegs_0_1_0.set(LegSecuritySubType_71);
      InstrumentLeg_71.insert(LegSecuritySubType_71.getString());
      FIX::LegSecurityType LegSecurityType_71("STRING_882428927");
      noLegs_0_1_0.set(LegSecurityType_71);
      InstrumentLeg_71.insert(LegSecurityType_71.getString());
      FIX::LegSide LegSide_71('2');
      noLegs_0_1_0.set(LegSide_71);
      InstrumentLeg_71.insert(LegSide_71.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_71("STRING_1881817457");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_71);
      InstrumentLeg_71.insert(LegStateOrProvinceOfIssue_71.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_71("USD");
      noLegs_0_1_0.set(LegStrikeCurrency_71);
      InstrumentLeg_71.insert(LegStrikeCurrency_71.getString());
      FIX::LegStrikePrice LegStrikePrice_71;
      LegStrikePrice_71.setString("13893295");
      noLegs_0_1_0.set(LegStrikePrice_71);
      InstrumentLeg_71.insert(LegStrikePrice_71.getString());
      FIX::LegSymbol LegSymbol_71("STRING_475762088");
      noLegs_0_1_0.set(LegSymbol_71);
      InstrumentLeg_71.insert(LegSymbol_71.getString());
      FIX::LegSymbolSfx LegSymbolSfx_71("STRING_889831356");
      noLegs_0_1_0.set(LegSymbolSfx_71);
      InstrumentLeg_71.insert(LegSymbolSfx_71.getString());
      FIX::LegTimeUnit LegTimeUnit_71("STRING_1451795572");
      noLegs_0_1_0.set(LegTimeUnit_71);
      InstrumentLeg_71.insert(LegTimeUnit_71.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_71("STRING_712547353");
      noLegs_0_1_0.set(LegUnitOfMeasure_71);
      InstrumentLeg_71.insert(LegUnitOfMeasure_71.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_71;
      LegUnitOfMeasureQty_71.setString("5626592");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_71);
      InstrumentLeg_71.insert(LegUnitOfMeasureQty_71.getString());
      all_values.push_back(InstrumentLeg_71);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_125;
        FIX::LegSecurityAltID LegSecurityAltID_125("STRING_622691423");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_125);
        LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltID_125.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_125("STRING_1675883733");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_125);
        LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltIDSource_125.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_125);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_126;
        FIX::LegSecurityAltID LegSecurityAltID_126("STRING_1228777340");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_126);
        LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltID_126.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_126("STRING_974949802");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_126);
        LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltIDSource_126.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_126);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_127;
        FIX::LegSecurityAltID LegSecurityAltID_127("STRING_702347100");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_127);
        LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltID_127.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_127("STRING_1648341168");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_127);
        LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltIDSource_127.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_127);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_57;
    FIX::AttachmentPoint AttachmentPoint_57;
    AttachmentPoint_57.setString("78.760000");
    noQuoteEntries_0_0.set(AttachmentPoint_57);
    Instrument_57.insert(AttachmentPoint_57.getString());
    FIX::CFICode CFICode_57("STRING_836793746");
    noQuoteEntries_0_0.set(CFICode_57);
    Instrument_57.insert(CFICode_57.getString());
    FIX::CPProgram CPProgram_57(1);
    noQuoteEntries_0_0.set(CPProgram_57);
    Instrument_57.insert(CPProgram_57.getString());
    FIX::CPRegType CPRegType_57("STRING_445567233");
    noQuoteEntries_0_0.set(CPRegType_57);
    Instrument_57.insert(CPRegType_57.getString());
    FIX::CapPrice CapPrice_57;
    CapPrice_57.setString("18475767");
    noQuoteEntries_0_0.set(CapPrice_57);
    Instrument_57.insert(CapPrice_57.getString());
    FIX::ContractMultiplier ContractMultiplier_57;
    ContractMultiplier_57.setString("17928914");
    noQuoteEntries_0_0.set(ContractMultiplier_57);
    Instrument_57.insert(ContractMultiplier_57.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_57(2);
    noQuoteEntries_0_0.set(ContractMultiplierUnit_57);
    Instrument_57.insert(ContractMultiplierUnit_57.getString());
    FIX::ContractSettlMonth ContractSettlMonth_57("MONTHYEAR_2120215587");
    noQuoteEntries_0_0.set(ContractSettlMonth_57);
    Instrument_57.insert(ContractSettlMonth_57.getString());
    FIX::CountryOfIssue CountryOfIssue_57("COUNTRY_477429092");
    noQuoteEntries_0_0.set(CountryOfIssue_57);
    Instrument_57.insert(CountryOfIssue_57.getString());
    FIX::CouponPaymentDate CouponPaymentDate_57("LOCALMKTDATE_835825613");
    noQuoteEntries_0_0.set(CouponPaymentDate_57);
    Instrument_57.insert(CouponPaymentDate_57.getString());
    FIX::CouponRate CouponRate_57;
    CouponRate_57.setString("29.130000");
    noQuoteEntries_0_0.set(CouponRate_57);
    Instrument_57.insert(CouponRate_57.getString());
    FIX::CreditRating CreditRating_57("STRING_1367237344");
    noQuoteEntries_0_0.set(CreditRating_57);
    Instrument_57.insert(CreditRating_57.getString());
    FIX::DatedDate DatedDate_57("LOCALMKTDATE_76567222");
    noQuoteEntries_0_0.set(DatedDate_57);
    Instrument_57.insert(DatedDate_57.getString());
    FIX::DetachmentPoint DetachmentPoint_57;
    DetachmentPoint_57.setString("18.410000");
    noQuoteEntries_0_0.set(DetachmentPoint_57);
    Instrument_57.insert(DetachmentPoint_57.getString());
    FIX::EncodedIssuer EncodedIssuer_57("DATA_1304491107");
    noQuoteEntries_0_0.set(EncodedIssuer_57);
    Instrument_57.insert(EncodedIssuer_57.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_57(1958384679);
    noQuoteEntries_0_0.set(EncodedIssuerLen_57);
    Instrument_57.insert(EncodedIssuerLen_57.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_57("DATA_1437941885");
    noQuoteEntries_0_0.set(EncodedSecurityDesc_57);
    Instrument_57.insert(EncodedSecurityDesc_57.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_57(1610033733);
    noQuoteEntries_0_0.set(EncodedSecurityDescLen_57);
    Instrument_57.insert(EncodedSecurityDescLen_57.getString());
    FIX::ExerciseStyle ExerciseStyle_57(1);
    noQuoteEntries_0_0.set(ExerciseStyle_57);
    Instrument_57.insert(ExerciseStyle_57.getString());
    FIX::Factor Factor_57;
    Factor_57.setString("19137039");
    noQuoteEntries_0_0.set(Factor_57);
    Instrument_57.insert(Factor_57.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_57(true);
    noQuoteEntries_0_0.set(FlexProductEligibilityIndicator_57);
    Instrument_57.insert(FlexProductEligibilityIndicator_57.getString());
    FIX::FlexibleIndicator FlexibleIndicator_57(true);
    noQuoteEntries_0_0.set(FlexibleIndicator_57);
    Instrument_57.insert(FlexibleIndicator_57.getString());
    FIX::FloorPrice FloorPrice_57;
    FloorPrice_57.setString("4787676");
    noQuoteEntries_0_0.set(FloorPrice_57);
    Instrument_57.insert(FloorPrice_57.getString());
    FIX::FlowScheduleType FlowScheduleType_57(4);
    noQuoteEntries_0_0.set(FlowScheduleType_57);
    Instrument_57.insert(FlowScheduleType_57.getString());
    FIX::InstrRegistry InstrRegistry_57("STRING_914196893");
    noQuoteEntries_0_0.set(InstrRegistry_57);
    Instrument_57.insert(InstrRegistry_57.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_57('1');
    noQuoteEntries_0_0.set(InstrmtAssignmentMethod_57);
    Instrument_57.insert(InstrmtAssignmentMethod_57.getString());
    FIX::InterestAccrualDate InterestAccrualDate_57("LOCALMKTDATE_443440779");
    noQuoteEntries_0_0.set(InterestAccrualDate_57);
    Instrument_57.insert(InterestAccrualDate_57.getString());
    FIX::IssueDate IssueDate_57("LOCALMKTDATE_2142974234");
    noQuoteEntries_0_0.set(IssueDate_57);
    Instrument_57.insert(IssueDate_57.getString());
    FIX::Issuer Issuer_57("STRING_2076408905");
    noQuoteEntries_0_0.set(Issuer_57);
    Instrument_57.insert(Issuer_57.getString());
    FIX::ListMethod ListMethod_57(1);
    noQuoteEntries_0_0.set(ListMethod_57);
    Instrument_57.insert(ListMethod_57.getString());
    FIX::LocaleOfIssue LocaleOfIssue_57("STRING_1643831754");
    noQuoteEntries_0_0.set(LocaleOfIssue_57);
    Instrument_57.insert(LocaleOfIssue_57.getString());
    FIX::MaturityDate MaturityDate_57("LOCALMKTDATE_607063133");
    noQuoteEntries_0_0.set(MaturityDate_57);
    Instrument_57.insert(MaturityDate_57.getString());
    FIX::MaturityMonthYear MaturityMonthYear_57("MONTHYEAR_1982581625");
    noQuoteEntries_0_0.set(MaturityMonthYear_57);
    Instrument_57.insert(MaturityMonthYear_57.getString());
    FIX::MaturityTime MaturityTime_57("TZTIMEONLY_339014017");
    noQuoteEntries_0_0.set(MaturityTime_57);
    Instrument_57.insert(MaturityTime_57.getString());
    FIX::MinPriceIncrement MinPriceIncrement_57;
    MinPriceIncrement_57.setString("10526303");
    noQuoteEntries_0_0.set(MinPriceIncrement_57);
    Instrument_57.insert(MinPriceIncrement_57.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_57;
    MinPriceIncrementAmount_57.setString("16826746");
    noQuoteEntries_0_0.set(MinPriceIncrementAmount_57);
    Instrument_57.insert(MinPriceIncrementAmount_57.getString());
    FIX::NTPositionLimit NTPositionLimit_57(2131905475);
    noQuoteEntries_0_0.set(NTPositionLimit_57);
    Instrument_57.insert(NTPositionLimit_57.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_57;
    NotionalPercentageOutstanding_57.setString("40.070000");
    noQuoteEntries_0_0.set(NotionalPercentageOutstanding_57);
    Instrument_57.insert(NotionalPercentageOutstanding_57.getString());
    FIX::OptAttribute OptAttribute_57('1');
    noQuoteEntries_0_0.set(OptAttribute_57);
    Instrument_57.insert(OptAttribute_57.getString());
    FIX::OptPayoutAmount OptPayoutAmount_57;
    OptPayoutAmount_57.setString("4618509");
    noQuoteEntries_0_0.set(OptPayoutAmount_57);
    Instrument_57.insert(OptPayoutAmount_57.getString());
    FIX::OptPayoutType OptPayoutType_57(2);
    noQuoteEntries_0_0.set(OptPayoutType_57);
    Instrument_57.insert(OptPayoutType_57.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_57;
    OriginalNotionalPercentageOutstanding_57.setString("95.420000");
    noQuoteEntries_0_0.set(OriginalNotionalPercentageOutstanding_57);
    Instrument_57.insert(OriginalNotionalPercentageOutstanding_57.getString());
    FIX::Pool Pool_57("STRING_1829088263");
    noQuoteEntries_0_0.set(Pool_57);
    Instrument_57.insert(Pool_57.getString());
    FIX::PositionLimit PositionLimit_57(766743195);
    noQuoteEntries_0_0.set(PositionLimit_57);
    Instrument_57.insert(PositionLimit_57.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_57("STRING_PCTPAR");
    noQuoteEntries_0_0.set(PriceQuoteMethod_57);
    Instrument_57.insert(PriceQuoteMethod_57.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_57("STRING_986095722");
    noQuoteEntries_0_0.set(PriceUnitOfMeasure_57);
    Instrument_57.insert(PriceUnitOfMeasure_57.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_57;
    PriceUnitOfMeasureQty_57.setString("5776442");
    noQuoteEntries_0_0.set(PriceUnitOfMeasureQty_57);
    Instrument_57.insert(PriceUnitOfMeasureQty_57.getString());
    FIX::Product Product_59(4);
    noQuoteEntries_0_0.set(Product_59);
    Instrument_57.insert(Product_59.getString());
    FIX::ProductComplex ProductComplex_57("STRING_448645808");
    noQuoteEntries_0_0.set(ProductComplex_57);
    Instrument_57.insert(ProductComplex_57.getString());
    FIX::PutOrCall PutOrCall_57(1);
    noQuoteEntries_0_0.set(PutOrCall_57);
    Instrument_57.insert(PutOrCall_57.getString());
    FIX::RedemptionDate RedemptionDate_57("LOCALMKTDATE_226416299");
    noQuoteEntries_0_0.set(RedemptionDate_57);
    Instrument_57.insert(RedemptionDate_57.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_57("STRING_801027250");
    noQuoteEntries_0_0.set(RepoCollateralSecurityType_57);
    Instrument_57.insert(RepoCollateralSecurityType_57.getString());
    FIX::RepurchaseRate RepurchaseRate_57;
    RepurchaseRate_57.setString("37.070000");
    noQuoteEntries_0_0.set(RepurchaseRate_57);
    Instrument_57.insert(RepurchaseRate_57.getString());
    FIX::RepurchaseTerm RepurchaseTerm_57(705183978);
    noQuoteEntries_0_0.set(RepurchaseTerm_57);
    Instrument_57.insert(RepurchaseTerm_57.getString());
    FIX::RestructuringType RestructuringType_57("STRING_FR");
    noQuoteEntries_0_0.set(RestructuringType_57);
    Instrument_57.insert(RestructuringType_57.getString());
    FIX::SecurityDesc SecurityDesc_57("STRING_1049130601");
    noQuoteEntries_0_0.set(SecurityDesc_57);
    Instrument_57.insert(SecurityDesc_57.getString());
    FIX::SecurityExchange SecurityExchange_57("EXCHANGE_1806643080");
    noQuoteEntries_0_0.set(SecurityExchange_57);
    Instrument_57.insert(SecurityExchange_57.getString());
    FIX::SecurityGroup SecurityGroup_57("STRING_12025075");
    noQuoteEntries_0_0.set(SecurityGroup_57);
    Instrument_57.insert(SecurityGroup_57.getString());
    FIX::SecurityID SecurityID_57("STRING_1044621187");
    noQuoteEntries_0_0.set(SecurityID_57);
    Instrument_57.insert(SecurityID_57.getString());
    FIX::SecurityIDSource SecurityIDSource_57("STRING_K");
    noQuoteEntries_0_0.set(SecurityIDSource_57);
    Instrument_57.insert(SecurityIDSource_57.getString());
    FIX::SecurityStatus SecurityStatus_57("STRING_1");
    noQuoteEntries_0_0.set(SecurityStatus_57);
    Instrument_57.insert(SecurityStatus_57.getString());
    FIX::SecuritySubType SecuritySubType_58("STRING_540969293");
    noQuoteEntries_0_0.set(SecuritySubType_58);
    Instrument_57.insert(SecuritySubType_58.getString());
    FIX::SecurityType SecurityType_59("STRING_EUFRN");
    noQuoteEntries_0_0.set(SecurityType_59);
    Instrument_57.insert(SecurityType_59.getString());
    FIX::Seniority Seniority_57("STRING_SR");
    noQuoteEntries_0_0.set(Seniority_57);
    Instrument_57.insert(Seniority_57.getString());
    FIX::SettlMethod SettlMethod_57('C');
    noQuoteEntries_0_0.set(SettlMethod_57);
    Instrument_57.insert(SettlMethod_57.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_57("STRING_1247778188");
    noQuoteEntries_0_0.set(SettleOnOpenFlag_57);
    Instrument_57.insert(SettleOnOpenFlag_57.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_57("STRING_528101973");
    noQuoteEntries_0_0.set(StateOrProvinceOfIssue_57);
    Instrument_57.insert(StateOrProvinceOfIssue_57.getString());
    FIX::StrikeCurrency StrikeCurrency_57("GBP");
    noQuoteEntries_0_0.set(StrikeCurrency_57);
    Instrument_57.insert(StrikeCurrency_57.getString());
    FIX::StrikeMultiplier StrikeMultiplier_57;
    StrikeMultiplier_57.setString("360249");
    noQuoteEntries_0_0.set(StrikeMultiplier_57);
    Instrument_57.insert(StrikeMultiplier_57.getString());
    FIX::StrikePrice StrikePrice_57;
    StrikePrice_57.setString("13262560");
    noQuoteEntries_0_0.set(StrikePrice_57);
    Instrument_57.insert(StrikePrice_57.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_57(1);
    noQuoteEntries_0_0.set(StrikePriceBoundaryMethod_57);
    Instrument_57.insert(StrikePriceBoundaryMethod_57.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_57;
    StrikePriceBoundaryPrecision_57.setString("44.970000");
    noQuoteEntries_0_0.set(StrikePriceBoundaryPrecision_57);
    Instrument_57.insert(StrikePriceBoundaryPrecision_57.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_57(1);
    noQuoteEntries_0_0.set(StrikePriceDeterminationMethod_57);
    Instrument_57.insert(StrikePriceDeterminationMethod_57.getString());
    FIX::StrikeValue StrikeValue_57;
    StrikeValue_57.setString("4115640");
    noQuoteEntries_0_0.set(StrikeValue_57);
    Instrument_57.insert(StrikeValue_57.getString());
    FIX::Symbol Symbol_57("STRING_1103378584");
    noQuoteEntries_0_0.set(Symbol_57);
    Instrument_57.insert(Symbol_57.getString());
    FIX::SymbolSfx SymbolSfx_57("STRING_CD");
    noQuoteEntries_0_0.set(SymbolSfx_57);
    Instrument_57.insert(SymbolSfx_57.getString());
    FIX::TimeUnit TimeUnit_57("STRING_Wk");
    noQuoteEntries_0_0.set(TimeUnit_57);
    Instrument_57.insert(TimeUnit_57.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_57(2);
    noQuoteEntries_0_0.set(UnderlyingPriceDeterminationMethod_57);
    Instrument_57.insert(UnderlyingPriceDeterminationMethod_57.getString());
    FIX::UnitOfMeasure UnitOfMeasure_57("STRING_MWh");
    noQuoteEntries_0_0.set(UnitOfMeasure_57);
    Instrument_57.insert(UnitOfMeasure_57.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_57;
    UnitOfMeasureQty_57.setString("6195994");
    noQuoteEntries_0_0.set(UnitOfMeasureQty_57);
    Instrument_57.insert(UnitOfMeasureQty_57.getString());
    FIX::ValuationMethod ValuationMethod_57("STRING_FUT");
    noQuoteEntries_0_0.set(ValuationMethod_57);
    Instrument_57.insert(ValuationMethod_57.getString());
    all_values.push_back(Instrument_57);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_109;
      FIX::ComplexEventCondition ComplexEventCondition_109(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventCondition_109.getString());
      FIX::ComplexEventPrice ComplexEventPrice_109;
      ComplexEventPrice_109.setString("3476911");
      noComplexEvents_0_1_0.set(ComplexEventPrice_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPrice_109.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_109(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryMethod_109.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_109;
      ComplexEventPriceBoundaryPrecision_109.setString("37.830000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryPrecision_109.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_109(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceTimeType_109.getString());
      FIX::ComplexEventType ComplexEventType_109(5);
      noComplexEvents_0_1_0.set(ComplexEventType_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexEventType_109.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_109;
      ComplexOptPayoutAmount_109.setString("7008013");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_109);
      ComplexEvents_NoComplexEvents_109.insert(ComplexOptPayoutAmount_109.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_109);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_225;
        FIX::ComplexEventEndDate ComplexEventEndDate_225(FIX::UTCTIMESTAMP(7, 39, 53, 25, 42008));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_225);
        ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventEndDate_225.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_225(FIX::UTCTIMESTAMP(11, 21, 3, 20, 72001));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_225);
        ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventStartDate_225.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_225);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_444;
          FIX::ComplexEventEndTime ComplexEventEndTime_444(FIX::UTCTIMEONLY(9, 33, 24));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_444);
          ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventEndTime_444.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_444(FIX::UTCTIMEONLY(16, 12, 32));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_444);
          ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventStartTime_444.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_444);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_226;
        FIX::ComplexEventEndDate ComplexEventEndDate_226(FIX::UTCTIMESTAMP(7, 33, 26, 18, 52003));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_226);
        ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventEndDate_226.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_226(FIX::UTCTIMESTAMP(14, 16, 37, 7, 112017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_226);
        ComplexEventDates_NoComplexEventDates_226.insert(ComplexEventStartDate_226.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_226);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_445;
          FIX::ComplexEventEndTime ComplexEventEndTime_445(FIX::UTCTIMEONLY(20, 22, 3));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_445);
          ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventEndTime_445.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_445(FIX::UTCTIMEONLY(8, 58, 8));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_445);
          ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventStartTime_445.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_445);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_446;
          FIX::ComplexEventEndTime ComplexEventEndTime_446(FIX::UTCTIMEONLY(12, 33, 27));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_446);
          ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventEndTime_446.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_446(FIX::UTCTIMEONLY(6, 31, 40));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_446);
          ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventStartTime_446.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_446);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_227;
        FIX::ComplexEventEndDate ComplexEventEndDate_227(FIX::UTCTIMESTAMP(14, 5, 35, 16, 112008));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_227);
        ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventEndDate_227.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_227(FIX::UTCTIMESTAMP(16, 5, 36, 15, 82009));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_227);
        ComplexEventDates_NoComplexEventDates_227.insert(ComplexEventStartDate_227.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_227);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_447;
          FIX::ComplexEventEndTime ComplexEventEndTime_447(FIX::UTCTIMEONLY(22, 7, 35));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_447);
          ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventEndTime_447.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_447(FIX::UTCTIMEONLY(19, 25, 54));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_447);
          ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventStartTime_447.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_447);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_448;
          FIX::ComplexEventEndTime ComplexEventEndTime_448(FIX::UTCTIMEONLY(1, 28, 13));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_448);
          ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventEndTime_448.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_448(FIX::UTCTIMEONLY(10, 45, 18));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_448);
          ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventStartTime_448.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_448);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_110;
      FIX::ComplexEventCondition ComplexEventCondition_110(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexEventCondition_110.getString());
      FIX::ComplexEventPrice ComplexEventPrice_110;
      ComplexEventPrice_110.setString("19643154");
      noComplexEvents_0_1_1.set(ComplexEventPrice_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexEventPrice_110.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_110(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryMethod_110.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_110;
      ComplexEventPriceBoundaryPrecision_110.setString("86.660000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryPrecision_110.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_110(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceTimeType_110.getString());
      FIX::ComplexEventType ComplexEventType_110(5);
      noComplexEvents_0_1_1.set(ComplexEventType_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexEventType_110.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_110;
      ComplexOptPayoutAmount_110.setString("12535626");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_110);
      ComplexEvents_NoComplexEvents_110.insert(ComplexOptPayoutAmount_110.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_110);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_228;
        FIX::ComplexEventEndDate ComplexEventEndDate_228(FIX::UTCTIMESTAMP(20, 55, 48, 15, 102011));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_228);
        ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventEndDate_228.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_228(FIX::UTCTIMESTAMP(19, 40, 29, 9, 122001));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_228);
        ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventStartDate_228.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_228);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_449;
          FIX::ComplexEventEndTime ComplexEventEndTime_449(FIX::UTCTIMEONLY(0, 8, 23));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_449);
          ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventEndTime_449.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_449(FIX::UTCTIMEONLY(6, 8, 12));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_449);
          ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventStartTime_449.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_449);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_111;
      FIX::ComplexEventCondition ComplexEventCondition_111(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexEventCondition_111.getString());
      FIX::ComplexEventPrice ComplexEventPrice_111;
      ComplexEventPrice_111.setString("8281617");
      noComplexEvents_0_1_2.set(ComplexEventPrice_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexEventPrice_111.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_111(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryMethod_111.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_111;
      ComplexEventPriceBoundaryPrecision_111.setString("46.070000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryPrecision_111.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_111(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceTimeType_111.getString());
      FIX::ComplexEventType ComplexEventType_111(7);
      noComplexEvents_0_1_2.set(ComplexEventType_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexEventType_111.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_111;
      ComplexOptPayoutAmount_111.setString("11017036");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_111);
      ComplexEvents_NoComplexEvents_111.insert(ComplexOptPayoutAmount_111.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_111);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_229;
        FIX::ComplexEventEndDate ComplexEventEndDate_229(FIX::UTCTIMESTAMP(2, 18, 55, 9, 82016));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_229);
        ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventEndDate_229.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_229(FIX::UTCTIMESTAMP(14, 0, 57, 16, 122010));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_229);
        ComplexEventDates_NoComplexEventDates_229.insert(ComplexEventStartDate_229.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_229);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_450;
          FIX::ComplexEventEndTime ComplexEventEndTime_450(FIX::UTCTIMEONLY(9, 32, 49));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_450);
          ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventEndTime_450.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_450(FIX::UTCTIMEONLY(18, 57, 15));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_450);
          ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventStartTime_450.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_450);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_230;
        FIX::ComplexEventEndDate ComplexEventEndDate_230(FIX::UTCTIMESTAMP(1, 42, 46, 13, 82001));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_230);
        ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventEndDate_230.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_230(FIX::UTCTIMESTAMP(14, 43, 55, 1, 62008));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_230);
        ComplexEventDates_NoComplexEventDates_230.insert(ComplexEventStartDate_230.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_230);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_451;
          FIX::ComplexEventEndTime ComplexEventEndTime_451(FIX::UTCTIMEONLY(21, 57, 34));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_451);
          ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventEndTime_451.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_451(FIX::UTCTIMEONLY(12, 19, 13));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_451);
          ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventStartTime_451.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_451);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_231;
        FIX::ComplexEventEndDate ComplexEventEndDate_231(FIX::UTCTIMESTAMP(4, 45, 27, 7, 82004));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_231);
        ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventEndDate_231.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_231(FIX::UTCTIMESTAMP(18, 42, 28, 8, 42006));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_231);
        ComplexEventDates_NoComplexEventDates_231.insert(ComplexEventStartDate_231.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_231);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_452;
          FIX::ComplexEventEndTime ComplexEventEndTime_452(FIX::UTCTIMEONLY(6, 29, 27));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_452);
          ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventEndTime_452.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_452(FIX::UTCTIMEONLY(14, 5, 20));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_452);
          ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventStartTime_452.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_452);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
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
      multiset<string> EvntGrp_NoEvents_115;
      FIX::EventDate EventDate_115("LOCALMKTDATE_1073136678");
      noEvents_0_1_0.set(EventDate_115);
      EvntGrp_NoEvents_115.insert(EventDate_115.getString());
      FIX::EventPx EventPx_115;
      EventPx_115.setString("9641318");
      noEvents_0_1_0.set(EventPx_115);
      EvntGrp_NoEvents_115.insert(EventPx_115.getString());
      FIX::EventText EventText_115("STRING_1492478689");
      noEvents_0_1_0.set(EventText_115);
      EvntGrp_NoEvents_115.insert(EventText_115.getString());
      FIX::EventTime EventTime_115(FIX::UTCTIMESTAMP(5, 8, 20, 19, 52011));
      noEvents_0_1_0.set(EventTime_115);
      EvntGrp_NoEvents_115.insert(EventTime_115.getString());
      FIX::EventType EventType_115(7);
      noEvents_0_1_0.set(EventType_115);
      EvntGrp_NoEvents_115.insert(EventType_115.getString());
      all_values.push_back(EvntGrp_NoEvents_115);

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_104;
      FIX::InstrumentPartyID InstrumentPartyID_104("STRING_2117968596");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_104);
      InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyID_104.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_104('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_104);
      InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyIDSource_104.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_104(1219854405);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_104);
      InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyRole_104.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_104);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205;
        FIX::InstrumentPartySubID InstrumentPartySubID_205("STRING_913358777");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_205);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubID_205.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_205(932949006);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_205);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubIDType_205.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206;
        FIX::InstrumentPartySubID InstrumentPartySubID_206("STRING_935861023");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_206);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubID_206.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_206(474175692);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_206);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubIDType_206.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_105;
      FIX::InstrumentPartyID InstrumentPartyID_105("STRING_705806110");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_105);
      InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyID_105.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_105('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_105);
      InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyIDSource_105.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_105(1584341692);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_105);
      InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyRole_105.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_105);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207;
        FIX::InstrumentPartySubID InstrumentPartySubID_207("STRING_2097825049");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_207);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubID_207.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_207(2051291239);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_207);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubIDType_207.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208;
        FIX::InstrumentPartySubID InstrumentPartySubID_208("STRING_1446701427");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_208);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubID_208.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_208(1347619999);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_208);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubIDType_208.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_106;
      FIX::InstrumentPartyID InstrumentPartyID_106("STRING_1981426217");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_106);
      InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyID_106.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_106('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_106);
      InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyIDSource_106.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_106(291273806);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_106);
      InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyRole_106.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_106);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209;
        FIX::InstrumentPartySubID InstrumentPartySubID_209("STRING_398794196");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_209);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubID_209.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_209(1783752496);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_209);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubIDType_209.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_114;
      FIX::SecurityAltID SecurityAltID_114("STRING_1687996585");
      noSecurityAltID_0_1_0.set(SecurityAltID_114);
      SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltID_114.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_114("STRING_1514479756");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_114);
      SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltIDSource_114.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_114);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_115;
      FIX::SecurityAltID SecurityAltID_115("STRING_1075943635");
      noSecurityAltID_0_1_1.set(SecurityAltID_115);
      SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltID_115.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_115("STRING_1213148845");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_115);
      SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltIDSource_115.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_115);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_116;
      FIX::SecurityAltID SecurityAltID_116("STRING_2098291605");
      noSecurityAltID_0_1_2.set(SecurityAltID_116);
      SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltID_116.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_116("STRING_544109453");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_116);
      SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltIDSource_116.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_116);

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_114;
    FIX::SecurityXML SecurityXML_115("XMLDATA_1949349411");
    noQuoteEntries_0_0.set(SecurityXML_115);
    FIX::SecurityXMLLen SecurityXMLLen_57(712019916);
    noQuoteEntries_0_0.set(SecurityXMLLen_57);
    FIX::SecurityXMLSchema SecurityXMLSchema_57("STRING_514594401");
    noQuoteEntries_0_0.set(SecurityXMLSchema_57);
    SecurityXML_114.insert(SecurityXMLSchema_57.getString());
    all_values.push_back(SecurityXML_114);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_88;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_88("DATA_1931874322");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_88);
      UnderlyingInstrument_88.insert(EncodedUnderlyingIssuer_88.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_88(1740758648);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_88);
      UnderlyingInstrument_88.insert(EncodedUnderlyingIssuerLen_88.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_88("DATA_206450915");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_88);
      UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDesc_88.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_88(717339680);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_88);
      UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDescLen_88.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_88;
      UnderlyingAdjustedQuantity_88.setString("5291360");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_88);
      UnderlyingInstrument_88.insert(UnderlyingAdjustedQuantity_88.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_88;
      UnderlyingAllocationPercent_88.setString("66.080000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_88);
      UnderlyingInstrument_88.insert(UnderlyingAllocationPercent_88.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_88;
      UnderlyingAttachmentPoint_88.setString("57.900000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_88);
      UnderlyingInstrument_88.insert(UnderlyingAttachmentPoint_88.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_88("STRING_730414923");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_88);
      UnderlyingInstrument_88.insert(UnderlyingCFICode_88.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_88("STRING_117484652");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_88);
      UnderlyingInstrument_88.insert(UnderlyingCPProgram_88.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_88("STRING_968997026");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_88);
      UnderlyingInstrument_88.insert(UnderlyingCPRegType_88.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_88;
      UnderlyingCapValue_88.setString("6807563");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_88);
      UnderlyingInstrument_88.insert(UnderlyingCapValue_88.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_88;
      UnderlyingCashAmount_88.setString("212922");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_88);
      UnderlyingInstrument_88.insert(UnderlyingCashAmount_88.getString());
      FIX::UnderlyingCashType UnderlyingCashType_88("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_88);
      UnderlyingInstrument_88.insert(UnderlyingCashType_88.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_88;
      UnderlyingContractMultiplier_88.setString("20283763");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_88);
      UnderlyingInstrument_88.insert(UnderlyingContractMultiplier_88.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_88(2002718461);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_88);
      UnderlyingInstrument_88.insert(UnderlyingContractMultiplierUnit_88.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_88("COUNTRY_1850360792");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_88);
      UnderlyingInstrument_88.insert(UnderlyingCountryOfIssue_88.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_88("LOCALMKTDATE_172166483");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_88);
      UnderlyingInstrument_88.insert(UnderlyingCouponPaymentDate_88.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_88;
      UnderlyingCouponRate_88.setString("40.600000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_88);
      UnderlyingInstrument_88.insert(UnderlyingCouponRate_88.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_88("STRING_101671340");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_88);
      UnderlyingInstrument_88.insert(UnderlyingCreditRating_88.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_88("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_88);
      UnderlyingInstrument_88.insert(UnderlyingCurrency_88.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_88;
      UnderlyingCurrentValue_88.setString("17896679");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_88);
      UnderlyingInstrument_88.insert(UnderlyingCurrentValue_88.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_88;
      UnderlyingDetachmentPoint_88.setString("50.870000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_88);
      UnderlyingInstrument_88.insert(UnderlyingDetachmentPoint_88.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_88;
      UnderlyingDirtyPrice_88.setString("6462131");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_88);
      UnderlyingInstrument_88.insert(UnderlyingDirtyPrice_88.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_88;
      UnderlyingEndPrice_88.setString("8553331");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_88);
      UnderlyingInstrument_88.insert(UnderlyingEndPrice_88.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_88;
      UnderlyingEndValue_88.setString("12737230");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_88);
      UnderlyingInstrument_88.insert(UnderlyingEndValue_88.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_88(1190322576);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_88);
      UnderlyingInstrument_88.insert(UnderlyingExerciseStyle_88.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_88;
      UnderlyingFXRate_88.setString("6571988");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_88);
      UnderlyingInstrument_88.insert(UnderlyingFXRate_88.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_88('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_88);
      UnderlyingInstrument_88.insert(UnderlyingFXRateCalc_88.getString());
      FIX::UnderlyingFactor UnderlyingFactor_88;
      UnderlyingFactor_88.setString("17049169");
      noUnderlyings_0_1_0.set(UnderlyingFactor_88);
      UnderlyingInstrument_88.insert(UnderlyingFactor_88.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_88(2097774672);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_88);
      UnderlyingInstrument_88.insert(UnderlyingFlowScheduleType_88.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_88("STRING_1770133635");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_88);
      UnderlyingInstrument_88.insert(UnderlyingInstrRegistry_88.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_88("LOCALMKTDATE_1298191977");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_88);
      UnderlyingInstrument_88.insert(UnderlyingIssueDate_88.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_88("STRING_156741940");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_88);
      UnderlyingInstrument_88.insert(UnderlyingIssuer_88.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_88("STRING_339989667");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_88);
      UnderlyingInstrument_88.insert(UnderlyingLocaleOfIssue_88.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_88("LOCALMKTDATE_1827328000");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_88);
      UnderlyingInstrument_88.insert(UnderlyingMaturityDate_88.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_88("MONTHYEAR_837368548");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_88);
      UnderlyingInstrument_88.insert(UnderlyingMaturityMonthYear_88.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_88("TZTIMEONLY_1763135457");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_88);
      UnderlyingInstrument_88.insert(UnderlyingMaturityTime_88.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_88;
      UnderlyingNotionalPercentageOutstanding_88.setString("92.760000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_88);
      UnderlyingInstrument_88.insert(UnderlyingNotionalPercentageOutstanding_88.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_88('9');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_88);
      UnderlyingInstrument_88.insert(UnderlyingOptAttribute_88.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_88;
      UnderlyingOriginalNotionalPercentageOutstanding_88.setString("88.350000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_88);
      UnderlyingInstrument_88.insert(UnderlyingOriginalNotionalPercentageOutstanding_88.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_88("STRING_1091015601");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_88);
      UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasure_88.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_88;
      UnderlyingPriceUnitOfMeasureQty_88.setString("9761454");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_88);
      UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasureQty_88.getString());
      FIX::UnderlyingProduct UnderlyingProduct_88(852863640);
      noUnderlyings_0_1_0.set(UnderlyingProduct_88);
      UnderlyingInstrument_88.insert(UnderlyingProduct_88.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_88(971908277);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_88);
      UnderlyingInstrument_88.insert(UnderlyingPutOrCall_88.getString());
      FIX::UnderlyingPx UnderlyingPx_88;
      UnderlyingPx_88.setString("8313802");
      noUnderlyings_0_1_0.set(UnderlyingPx_88);
      UnderlyingInstrument_88.insert(UnderlyingPx_88.getString());
      FIX::UnderlyingQty UnderlyingQty_88;
      UnderlyingQty_88.setString("5557407");
      noUnderlyings_0_1_0.set(UnderlyingQty_88);
      UnderlyingInstrument_88.insert(UnderlyingQty_88.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_88("LOCALMKTDATE_1144074760");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_88);
      UnderlyingInstrument_88.insert(UnderlyingRedemptionDate_88.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_88("STRING_1593694318");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_88);
      UnderlyingInstrument_88.insert(UnderlyingRepoCollateralSecurityType_88.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_88;
      UnderlyingRepurchaseRate_88.setString("21.240000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_88);
      UnderlyingInstrument_88.insert(UnderlyingRepurchaseRate_88.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_88(952510091);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_88);
      UnderlyingInstrument_88.insert(UnderlyingRepurchaseTerm_88.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_88("STRING_1163963805");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_88);
      UnderlyingInstrument_88.insert(UnderlyingRestructuringType_88.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_88("STRING_299596401");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_88);
      UnderlyingInstrument_88.insert(UnderlyingSecurityDesc_88.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_88("EXCHANGE_127941531");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_88);
      UnderlyingInstrument_88.insert(UnderlyingSecurityExchange_88.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_88("STRING_1810176928");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_88);
      UnderlyingInstrument_88.insert(UnderlyingSecurityID_88.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_88("STRING_1154929524");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_88);
      UnderlyingInstrument_88.insert(UnderlyingSecurityIDSource_88.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_88("STRING_1401664575");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_88);
      UnderlyingInstrument_88.insert(UnderlyingSecuritySubType_88.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_88("STRING_853015856");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_88);
      UnderlyingInstrument_88.insert(UnderlyingSecurityType_88.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_88("STRING_1812128410");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_88);
      UnderlyingInstrument_88.insert(UnderlyingSeniority_88.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_88("STRING_1239923888");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_88);
      UnderlyingInstrument_88.insert(UnderlyingSettlMethod_88.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_88(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_88);
      UnderlyingInstrument_88.insert(UnderlyingSettlementType_88.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_88;
      UnderlyingStartValue_88.setString("17624194");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_88);
      UnderlyingInstrument_88.insert(UnderlyingStartValue_88.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_88("STRING_862573875");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_88);
      UnderlyingInstrument_88.insert(UnderlyingStateOrProvinceOfIssue_88.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_88("USD");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_88);
      UnderlyingInstrument_88.insert(UnderlyingStrikeCurrency_88.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_88;
      UnderlyingStrikePrice_88.setString("12025635");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_88);
      UnderlyingInstrument_88.insert(UnderlyingStrikePrice_88.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_88("STRING_1388485516");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_88);
      UnderlyingInstrument_88.insert(UnderlyingSymbol_88.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_88("STRING_609046274");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_88);
      UnderlyingInstrument_88.insert(UnderlyingSymbolSfx_88.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_88("STRING_818215351");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_88);
      UnderlyingInstrument_88.insert(UnderlyingTimeUnit_88.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_88("STRING_1798744792");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_88);
      UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasure_88.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_88;
      UnderlyingUnitOfMeasureQty_88.setString("15638994");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_88);
      UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasureQty_88.getString());
      all_values.push_back(UnderlyingInstrument_88);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_178;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_178("STRING_742276745");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_178);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltID_178.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_178("STRING_392561271");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_178);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_178.insert(UnderlyingSecurityAltIDSource_178.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_178);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_179;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_179("STRING_108244178");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_179);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltID_179.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_179("STRING_1714185022");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_179);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_179.insert(UnderlyingSecurityAltIDSource_179.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_166;
        FIX::UnderlyingStipType UnderlyingStipType_166("STRING_663984962");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_166);
        UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipType_166.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_166("STRING_710776135");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_166);
        UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipValue_166.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_166);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_167;
        FIX::UnderlyingStipType UnderlyingStipType_167("STRING_670152199");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_167);
        UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipType_167.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_167("STRING_1321397086");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_167);
        UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipValue_167.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_167);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_168;
        FIX::UnderlyingStipType UnderlyingStipType_168("STRING_1663286226");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_168);
        UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipType_168.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_168("STRING_1834116004");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_168);
        UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipValue_168.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_168);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_180;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_180("STRING_1791227757");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_180);
        UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyID_180.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_180('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_180);
        UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyIDSource_180.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_180(628439364);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_180);
        UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyRole_180.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_180);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_354("STRING_202341493");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_354);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubID_354.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_354(293084126);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_354);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubIDType_354.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_355("STRING_137848925");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_355);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubID_355.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_355(612790679);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_355);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubIDType_355.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_356("STRING_2055503560");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_356);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubID_356.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_356(1000422801);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_356);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubIDType_356.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_181;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_181("STRING_173948195");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyID_181.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_181('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyIDSource_181.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_181(55502695);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_181);
        UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyRole_181.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_181);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_357("STRING_288743913");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_357);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubID_357.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_357(873718047);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_357);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubIDType_357.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_182;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_182("STRING_1213694855");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyID_182.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_182('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyIDSource_182.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_182(129098585);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_182);
        UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyRole_182.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_182);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_358("STRING_97721012");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_358);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubID_358.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_358(237342764);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_358);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubIDType_358.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_359("STRING_1522672974");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_359);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubID_359.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_359(1321662541);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_359);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubIDType_359.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_89;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_89("DATA_901327726");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_89);
      UnderlyingInstrument_89.insert(EncodedUnderlyingIssuer_89.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_89(85965461);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_89);
      UnderlyingInstrument_89.insert(EncodedUnderlyingIssuerLen_89.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_89("DATA_1991814740");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_89);
      UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDesc_89.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_89(75241165);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_89);
      UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDescLen_89.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_89;
      UnderlyingAdjustedQuantity_89.setString("17492516");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_89);
      UnderlyingInstrument_89.insert(UnderlyingAdjustedQuantity_89.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_89;
      UnderlyingAllocationPercent_89.setString("70.960000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_89);
      UnderlyingInstrument_89.insert(UnderlyingAllocationPercent_89.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_89;
      UnderlyingAttachmentPoint_89.setString("46.530000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_89);
      UnderlyingInstrument_89.insert(UnderlyingAttachmentPoint_89.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_89("STRING_1392995797");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_89);
      UnderlyingInstrument_89.insert(UnderlyingCFICode_89.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_89("STRING_1027772733");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_89);
      UnderlyingInstrument_89.insert(UnderlyingCPProgram_89.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_89("STRING_177190369");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_89);
      UnderlyingInstrument_89.insert(UnderlyingCPRegType_89.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_89;
      UnderlyingCapValue_89.setString("2909208");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_89);
      UnderlyingInstrument_89.insert(UnderlyingCapValue_89.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_89;
      UnderlyingCashAmount_89.setString("12301142");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_89);
      UnderlyingInstrument_89.insert(UnderlyingCashAmount_89.getString());
      FIX::UnderlyingCashType UnderlyingCashType_89("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_89);
      UnderlyingInstrument_89.insert(UnderlyingCashType_89.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_89;
      UnderlyingContractMultiplier_89.setString("4287697");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_89);
      UnderlyingInstrument_89.insert(UnderlyingContractMultiplier_89.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_89(1842904906);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_89);
      UnderlyingInstrument_89.insert(UnderlyingContractMultiplierUnit_89.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_89("COUNTRY_378294407");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_89);
      UnderlyingInstrument_89.insert(UnderlyingCountryOfIssue_89.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_89("LOCALMKTDATE_1429192561");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_89);
      UnderlyingInstrument_89.insert(UnderlyingCouponPaymentDate_89.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_89;
      UnderlyingCouponRate_89.setString("31.010000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_89);
      UnderlyingInstrument_89.insert(UnderlyingCouponRate_89.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_89("STRING_57992046");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_89);
      UnderlyingInstrument_89.insert(UnderlyingCreditRating_89.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_89("JPY");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_89);
      UnderlyingInstrument_89.insert(UnderlyingCurrency_89.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_89;
      UnderlyingCurrentValue_89.setString("3467359");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_89);
      UnderlyingInstrument_89.insert(UnderlyingCurrentValue_89.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_89;
      UnderlyingDetachmentPoint_89.setString("96.550000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_89);
      UnderlyingInstrument_89.insert(UnderlyingDetachmentPoint_89.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_89;
      UnderlyingDirtyPrice_89.setString("4980143");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_89);
      UnderlyingInstrument_89.insert(UnderlyingDirtyPrice_89.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_89;
      UnderlyingEndPrice_89.setString("518957");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_89);
      UnderlyingInstrument_89.insert(UnderlyingEndPrice_89.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_89;
      UnderlyingEndValue_89.setString("3400282");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_89);
      UnderlyingInstrument_89.insert(UnderlyingEndValue_89.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_89(306502323);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_89);
      UnderlyingInstrument_89.insert(UnderlyingExerciseStyle_89.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_89;
      UnderlyingFXRate_89.setString("1496167");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_89);
      UnderlyingInstrument_89.insert(UnderlyingFXRate_89.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_89('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_89);
      UnderlyingInstrument_89.insert(UnderlyingFXRateCalc_89.getString());
      FIX::UnderlyingFactor UnderlyingFactor_89;
      UnderlyingFactor_89.setString("18291752");
      noUnderlyings_0_1_1.set(UnderlyingFactor_89);
      UnderlyingInstrument_89.insert(UnderlyingFactor_89.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_89(1471279253);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_89);
      UnderlyingInstrument_89.insert(UnderlyingFlowScheduleType_89.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_89("STRING_1478698731");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_89);
      UnderlyingInstrument_89.insert(UnderlyingInstrRegistry_89.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_89("LOCALMKTDATE_1915140759");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_89);
      UnderlyingInstrument_89.insert(UnderlyingIssueDate_89.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_89("STRING_1315610345");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_89);
      UnderlyingInstrument_89.insert(UnderlyingIssuer_89.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_89("STRING_1553939896");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_89);
      UnderlyingInstrument_89.insert(UnderlyingLocaleOfIssue_89.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_89("LOCALMKTDATE_1516908799");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_89);
      UnderlyingInstrument_89.insert(UnderlyingMaturityDate_89.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_89("MONTHYEAR_846573794");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_89);
      UnderlyingInstrument_89.insert(UnderlyingMaturityMonthYear_89.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_89("TZTIMEONLY_1102690901");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_89);
      UnderlyingInstrument_89.insert(UnderlyingMaturityTime_89.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_89;
      UnderlyingNotionalPercentageOutstanding_89.setString("9.490000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_89);
      UnderlyingInstrument_89.insert(UnderlyingNotionalPercentageOutstanding_89.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_89('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_89);
      UnderlyingInstrument_89.insert(UnderlyingOptAttribute_89.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_89;
      UnderlyingOriginalNotionalPercentageOutstanding_89.setString("12.700000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_89);
      UnderlyingInstrument_89.insert(UnderlyingOriginalNotionalPercentageOutstanding_89.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_89("STRING_1053341783");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_89);
      UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasure_89.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_89;
      UnderlyingPriceUnitOfMeasureQty_89.setString("9569771");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_89);
      UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasureQty_89.getString());
      FIX::UnderlyingProduct UnderlyingProduct_89(1750155765);
      noUnderlyings_0_1_1.set(UnderlyingProduct_89);
      UnderlyingInstrument_89.insert(UnderlyingProduct_89.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_89(1482111543);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_89);
      UnderlyingInstrument_89.insert(UnderlyingPutOrCall_89.getString());
      FIX::UnderlyingPx UnderlyingPx_89;
      UnderlyingPx_89.setString("6523983");
      noUnderlyings_0_1_1.set(UnderlyingPx_89);
      UnderlyingInstrument_89.insert(UnderlyingPx_89.getString());
      FIX::UnderlyingQty UnderlyingQty_89;
      UnderlyingQty_89.setString("21284501");
      noUnderlyings_0_1_1.set(UnderlyingQty_89);
      UnderlyingInstrument_89.insert(UnderlyingQty_89.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_89("LOCALMKTDATE_763820456");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_89);
      UnderlyingInstrument_89.insert(UnderlyingRedemptionDate_89.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_89("STRING_521767818");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_89);
      UnderlyingInstrument_89.insert(UnderlyingRepoCollateralSecurityType_89.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_89;
      UnderlyingRepurchaseRate_89.setString("85.710000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_89);
      UnderlyingInstrument_89.insert(UnderlyingRepurchaseRate_89.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_89(101032065);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_89);
      UnderlyingInstrument_89.insert(UnderlyingRepurchaseTerm_89.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_89("STRING_1953570983");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_89);
      UnderlyingInstrument_89.insert(UnderlyingRestructuringType_89.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_89("STRING_385694531");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_89);
      UnderlyingInstrument_89.insert(UnderlyingSecurityDesc_89.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_89("EXCHANGE_311961720");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_89);
      UnderlyingInstrument_89.insert(UnderlyingSecurityExchange_89.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_89("STRING_304101706");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_89);
      UnderlyingInstrument_89.insert(UnderlyingSecurityID_89.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_89("STRING_437590232");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_89);
      UnderlyingInstrument_89.insert(UnderlyingSecurityIDSource_89.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_89("STRING_651989961");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_89);
      UnderlyingInstrument_89.insert(UnderlyingSecuritySubType_89.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_89("STRING_610604030");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_89);
      UnderlyingInstrument_89.insert(UnderlyingSecurityType_89.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_89("STRING_587206944");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_89);
      UnderlyingInstrument_89.insert(UnderlyingSeniority_89.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_89("STRING_1229360966");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_89);
      UnderlyingInstrument_89.insert(UnderlyingSettlMethod_89.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_89(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_89);
      UnderlyingInstrument_89.insert(UnderlyingSettlementType_89.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_89;
      UnderlyingStartValue_89.setString("20584861");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_89);
      UnderlyingInstrument_89.insert(UnderlyingStartValue_89.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_89("STRING_560576050");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_89);
      UnderlyingInstrument_89.insert(UnderlyingStateOrProvinceOfIssue_89.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_89("CHF");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_89);
      UnderlyingInstrument_89.insert(UnderlyingStrikeCurrency_89.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_89;
      UnderlyingStrikePrice_89.setString("21145159");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_89);
      UnderlyingInstrument_89.insert(UnderlyingStrikePrice_89.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_89("STRING_1576861591");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_89);
      UnderlyingInstrument_89.insert(UnderlyingSymbol_89.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_89("STRING_2073186689");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_89);
      UnderlyingInstrument_89.insert(UnderlyingSymbolSfx_89.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_89("STRING_1069723200");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_89);
      UnderlyingInstrument_89.insert(UnderlyingTimeUnit_89.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_89("STRING_191798892");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_89);
      UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasure_89.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_89;
      UnderlyingUnitOfMeasureQty_89.setString("18000495");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_89);
      UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasureQty_89.getString());
      all_values.push_back(UnderlyingInstrument_89);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_180;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_180("STRING_1245140675");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_180);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltID_180.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_180("STRING_609543027");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_180);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_180.insert(UnderlyingSecurityAltIDSource_180.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_181;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_181("STRING_1952276588");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_181);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltID_181.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_181("STRING_579768571");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_181);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltIDSource_181.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_169;
        FIX::UnderlyingStipType UnderlyingStipType_169("STRING_1933243113");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_169);
        UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipType_169.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_169("STRING_1343589027");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_169);
        UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipValue_169.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_169);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_170;
        FIX::UnderlyingStipType UnderlyingStipType_170("STRING_1783709211");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_170);
        UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipType_170.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_170("STRING_1972201684");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_170);
        UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipValue_170.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_170);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_171;
        FIX::UnderlyingStipType UnderlyingStipType_171("STRING_1444621092");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipType_171);
        UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipType_171.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_171("STRING_1589796546");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipValue_171);
        UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipValue_171.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_171);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_183;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_183("STRING_1756582813");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyID_183.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_183('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyIDSource_183.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_183(648002800);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyRole_183.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_183);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_360("STRING_357018634");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_360);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubID_360.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_360(1235209744);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_360);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubIDType_360.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_361("STRING_1490450093");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_361);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubID_361.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_361(649314314);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_361);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubIDType_361.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_362("STRING_1146212294");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_362);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubID_362.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_362(2051026143);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_362);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubIDType_362.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_184;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_184("STRING_709267106");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyID_184.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_184('2');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyIDSource_184.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_184(2018058441);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyRole_184.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_184);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_363("STRING_151044583");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_363);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubID_363.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_363(940297993);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_363);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubIDType_363.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_364("STRING_330443941");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_364);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubID_364.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_364(1951094152);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_364);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubIDType_364.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_185;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_185("STRING_1142418816");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyID_185.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_185('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyIDSource_185.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_185(413153532);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyRole_185.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_185);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_365("STRING_7869539");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_365);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubID_365.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_365(1675094924);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_365);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365.insert(UnderlyingInstrumentPartySubIDType_365.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_90;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_90("DATA_732971221");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_90);
      UnderlyingInstrument_90.insert(EncodedUnderlyingIssuer_90.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_90(1351458567);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_90);
      UnderlyingInstrument_90.insert(EncodedUnderlyingIssuerLen_90.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_90("DATA_1311320487");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_90);
      UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDesc_90.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_90(557689257);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_90);
      UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDescLen_90.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_90;
      UnderlyingAdjustedQuantity_90.setString("6485960");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_90);
      UnderlyingInstrument_90.insert(UnderlyingAdjustedQuantity_90.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_90;
      UnderlyingAllocationPercent_90.setString("33.850000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_90);
      UnderlyingInstrument_90.insert(UnderlyingAllocationPercent_90.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_90;
      UnderlyingAttachmentPoint_90.setString("18.250000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_90);
      UnderlyingInstrument_90.insert(UnderlyingAttachmentPoint_90.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_90("STRING_257695176");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_90);
      UnderlyingInstrument_90.insert(UnderlyingCFICode_90.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_90("STRING_500047990");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_90);
      UnderlyingInstrument_90.insert(UnderlyingCPProgram_90.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_90("STRING_1416104625");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_90);
      UnderlyingInstrument_90.insert(UnderlyingCPRegType_90.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_90;
      UnderlyingCapValue_90.setString("5187843");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_90);
      UnderlyingInstrument_90.insert(UnderlyingCapValue_90.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_90;
      UnderlyingCashAmount_90.setString("8570666");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_90);
      UnderlyingInstrument_90.insert(UnderlyingCashAmount_90.getString());
      FIX::UnderlyingCashType UnderlyingCashType_90("STRING_FIXED");
      noUnderlyings_0_1_2.set(UnderlyingCashType_90);
      UnderlyingInstrument_90.insert(UnderlyingCashType_90.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_90;
      UnderlyingContractMultiplier_90.setString("20092343");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_90);
      UnderlyingInstrument_90.insert(UnderlyingContractMultiplier_90.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_90(1506380939);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_90);
      UnderlyingInstrument_90.insert(UnderlyingContractMultiplierUnit_90.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_90("COUNTRY_1650043016");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_90);
      UnderlyingInstrument_90.insert(UnderlyingCountryOfIssue_90.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_90("LOCALMKTDATE_1912776891");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_90);
      UnderlyingInstrument_90.insert(UnderlyingCouponPaymentDate_90.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_90;
      UnderlyingCouponRate_90.setString("43.970000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_90);
      UnderlyingInstrument_90.insert(UnderlyingCouponRate_90.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_90("STRING_1875384558");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_90);
      UnderlyingInstrument_90.insert(UnderlyingCreditRating_90.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_90("USD");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_90);
      UnderlyingInstrument_90.insert(UnderlyingCurrency_90.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_90;
      UnderlyingCurrentValue_90.setString("20264291");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_90);
      UnderlyingInstrument_90.insert(UnderlyingCurrentValue_90.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_90;
      UnderlyingDetachmentPoint_90.setString("60.300000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_90);
      UnderlyingInstrument_90.insert(UnderlyingDetachmentPoint_90.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_90;
      UnderlyingDirtyPrice_90.setString("5372533");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_90);
      UnderlyingInstrument_90.insert(UnderlyingDirtyPrice_90.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_90;
      UnderlyingEndPrice_90.setString("18300396");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_90);
      UnderlyingInstrument_90.insert(UnderlyingEndPrice_90.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_90;
      UnderlyingEndValue_90.setString("17185848");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_90);
      UnderlyingInstrument_90.insert(UnderlyingEndValue_90.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_90(2112838003);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_90);
      UnderlyingInstrument_90.insert(UnderlyingExerciseStyle_90.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_90;
      UnderlyingFXRate_90.setString("957095");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_90);
      UnderlyingInstrument_90.insert(UnderlyingFXRate_90.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_90('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_90);
      UnderlyingInstrument_90.insert(UnderlyingFXRateCalc_90.getString());
      FIX::UnderlyingFactor UnderlyingFactor_90;
      UnderlyingFactor_90.setString("21207075");
      noUnderlyings_0_1_2.set(UnderlyingFactor_90);
      UnderlyingInstrument_90.insert(UnderlyingFactor_90.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_90(1770804455);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_90);
      UnderlyingInstrument_90.insert(UnderlyingFlowScheduleType_90.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_90("STRING_1251284175");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_90);
      UnderlyingInstrument_90.insert(UnderlyingInstrRegistry_90.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_90("LOCALMKTDATE_1324682462");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_90);
      UnderlyingInstrument_90.insert(UnderlyingIssueDate_90.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_90("STRING_934641294");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_90);
      UnderlyingInstrument_90.insert(UnderlyingIssuer_90.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_90("STRING_1808973432");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_90);
      UnderlyingInstrument_90.insert(UnderlyingLocaleOfIssue_90.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_90("LOCALMKTDATE_1973278473");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_90);
      UnderlyingInstrument_90.insert(UnderlyingMaturityDate_90.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_90("MONTHYEAR_1688274680");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_90);
      UnderlyingInstrument_90.insert(UnderlyingMaturityMonthYear_90.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_90("TZTIMEONLY_429591610");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_90);
      UnderlyingInstrument_90.insert(UnderlyingMaturityTime_90.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_90;
      UnderlyingNotionalPercentageOutstanding_90.setString("0.020000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_90);
      UnderlyingInstrument_90.insert(UnderlyingNotionalPercentageOutstanding_90.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_90('4');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_90);
      UnderlyingInstrument_90.insert(UnderlyingOptAttribute_90.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_90;
      UnderlyingOriginalNotionalPercentageOutstanding_90.setString("62.350000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_90);
      UnderlyingInstrument_90.insert(UnderlyingOriginalNotionalPercentageOutstanding_90.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_90("STRING_602274305");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_90);
      UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasure_90.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_90;
      UnderlyingPriceUnitOfMeasureQty_90.setString("8979056");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_90);
      UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasureQty_90.getString());
      FIX::UnderlyingProduct UnderlyingProduct_90(202043309);
      noUnderlyings_0_1_2.set(UnderlyingProduct_90);
      UnderlyingInstrument_90.insert(UnderlyingProduct_90.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_90(464025053);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_90);
      UnderlyingInstrument_90.insert(UnderlyingPutOrCall_90.getString());
      FIX::UnderlyingPx UnderlyingPx_90;
      UnderlyingPx_90.setString("2568029");
      noUnderlyings_0_1_2.set(UnderlyingPx_90);
      UnderlyingInstrument_90.insert(UnderlyingPx_90.getString());
      FIX::UnderlyingQty UnderlyingQty_90;
      UnderlyingQty_90.setString("18520863");
      noUnderlyings_0_1_2.set(UnderlyingQty_90);
      UnderlyingInstrument_90.insert(UnderlyingQty_90.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_90("LOCALMKTDATE_229318296");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_90);
      UnderlyingInstrument_90.insert(UnderlyingRedemptionDate_90.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_90("STRING_324967334");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_90);
      UnderlyingInstrument_90.insert(UnderlyingRepoCollateralSecurityType_90.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_90;
      UnderlyingRepurchaseRate_90.setString("72.360000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_90);
      UnderlyingInstrument_90.insert(UnderlyingRepurchaseRate_90.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_90(2012669980);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_90);
      UnderlyingInstrument_90.insert(UnderlyingRepurchaseTerm_90.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_90("STRING_531776780");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_90);
      UnderlyingInstrument_90.insert(UnderlyingRestructuringType_90.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_90("STRING_1458932730");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_90);
      UnderlyingInstrument_90.insert(UnderlyingSecurityDesc_90.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_90("EXCHANGE_441352362");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_90);
      UnderlyingInstrument_90.insert(UnderlyingSecurityExchange_90.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_90("STRING_1069030167");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_90);
      UnderlyingInstrument_90.insert(UnderlyingSecurityID_90.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_90("STRING_1141488729");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_90);
      UnderlyingInstrument_90.insert(UnderlyingSecurityIDSource_90.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_90("STRING_12453560");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_90);
      UnderlyingInstrument_90.insert(UnderlyingSecuritySubType_90.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_90("STRING_1034384523");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_90);
      UnderlyingInstrument_90.insert(UnderlyingSecurityType_90.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_90("STRING_1237198259");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_90);
      UnderlyingInstrument_90.insert(UnderlyingSeniority_90.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_90("STRING_530766514");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_90);
      UnderlyingInstrument_90.insert(UnderlyingSettlMethod_90.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_90(5);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_90);
      UnderlyingInstrument_90.insert(UnderlyingSettlementType_90.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_90;
      UnderlyingStartValue_90.setString("8605190");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_90);
      UnderlyingInstrument_90.insert(UnderlyingStartValue_90.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_90("STRING_1782050689");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_90);
      UnderlyingInstrument_90.insert(UnderlyingStateOrProvinceOfIssue_90.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_90("CHF");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_90);
      UnderlyingInstrument_90.insert(UnderlyingStrikeCurrency_90.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_90;
      UnderlyingStrikePrice_90.setString("14435404");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_90);
      UnderlyingInstrument_90.insert(UnderlyingStrikePrice_90.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_90("STRING_10602057");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_90);
      UnderlyingInstrument_90.insert(UnderlyingSymbol_90.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_90("STRING_1335951393");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_90);
      UnderlyingInstrument_90.insert(UnderlyingSymbolSfx_90.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_90("STRING_1873132084");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_90);
      UnderlyingInstrument_90.insert(UnderlyingTimeUnit_90.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_90("STRING_94092059");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_90);
      UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasure_90.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_90;
      UnderlyingUnitOfMeasureQty_90.setString("13767904");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_90);
      UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasureQty_90.getString());
      all_values.push_back(UnderlyingInstrument_90);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_182;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_182("STRING_696366364");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_182);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltID_182.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_182("STRING_127212413");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_182);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltIDSource_182.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_172;
        FIX::UnderlyingStipType UnderlyingStipType_172("STRING_1160391417");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_172);
        UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipType_172.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_172("STRING_384015351");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_172);
        UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipValue_172.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_172);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_186;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_186("STRING_1389709713");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyID_186.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_186('7');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyIDSource_186.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_186(910494247);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyRole_186.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_186);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_366("STRING_1240759466");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_366);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubID_366.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_366(221943330);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_366);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366.insert(UnderlyingInstrumentPartySubIDType_366.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_2);
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
    FIX::AgreementDate AgreementDate_18("LOCALMKTDATE_1363432059");
    noQuoteEntries_0_1.set(AgreementDate_18);
    FinancingDetails_18.insert(AgreementDate_18.getString());
    FIX::AgreementDesc AgreementDesc_18("STRING_1708701969");
    noQuoteEntries_0_1.set(AgreementDesc_18);
    FinancingDetails_18.insert(AgreementDesc_18.getString());
    FIX::AgreementID AgreementID_18("STRING_1196690508");
    noQuoteEntries_0_1.set(AgreementID_18);
    FinancingDetails_18.insert(AgreementID_18.getString());
    FIX::DeliveryType DeliveryType_18(2);
    noQuoteEntries_0_1.set(DeliveryType_18);
    FinancingDetails_18.insert(DeliveryType_18.getString());
    FIX::EndDate EndDate_18("LOCALMKTDATE_91984835");
    noQuoteEntries_0_1.set(EndDate_18);
    FinancingDetails_18.insert(EndDate_18.getString());
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("52.780000");
    noQuoteEntries_0_1.set(MarginRatio_18);
    FinancingDetails_18.insert(MarginRatio_18.getString());
    FIX::StartDate StartDate_18("LOCALMKTDATE_1313665737");
    noQuoteEntries_0_1.set(StartDate_18);
    FinancingDetails_18.insert(StartDate_18.getString());
    FIX::TerminationType TerminationType_18(2);
    noQuoteEntries_0_1.set(TerminationType_18);
    FinancingDetails_18.insert(TerminationType_18.getString());
    all_values.push_back(FinancingDetails_18);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_72;
      FIX::EncodedLegIssuer EncodedLegIssuer_72("DATA_961342450");
      noLegs_1_1_0.set(EncodedLegIssuer_72);
      InstrumentLeg_72.insert(EncodedLegIssuer_72.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_72(1170092351);
      noLegs_1_1_0.set(EncodedLegIssuerLen_72);
      InstrumentLeg_72.insert(EncodedLegIssuerLen_72.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_72("DATA_252224568");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_72);
      InstrumentLeg_72.insert(EncodedLegSecurityDesc_72.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_72(149810195);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_72);
      InstrumentLeg_72.insert(EncodedLegSecurityDescLen_72.getString());
      FIX::LegCFICode LegCFICode_72("STRING_895740787");
      noLegs_1_1_0.set(LegCFICode_72);
      InstrumentLeg_72.insert(LegCFICode_72.getString());
      FIX::LegContractMultiplier LegContractMultiplier_72;
      LegContractMultiplier_72.setString("3463166");
      noLegs_1_1_0.set(LegContractMultiplier_72);
      InstrumentLeg_72.insert(LegContractMultiplier_72.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_72(1526600610);
      noLegs_1_1_0.set(LegContractMultiplierUnit_72);
      InstrumentLeg_72.insert(LegContractMultiplierUnit_72.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_72("MONTHYEAR_319601810");
      noLegs_1_1_0.set(LegContractSettlMonth_72);
      InstrumentLeg_72.insert(LegContractSettlMonth_72.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_72("COUNTRY_1042682992");
      noLegs_1_1_0.set(LegCountryOfIssue_72);
      InstrumentLeg_72.insert(LegCountryOfIssue_72.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_72("LOCALMKTDATE_1653813023");
      noLegs_1_1_0.set(LegCouponPaymentDate_72);
      InstrumentLeg_72.insert(LegCouponPaymentDate_72.getString());
      FIX::LegCouponRate LegCouponRate_72;
      LegCouponRate_72.setString("97.910000");
      noLegs_1_1_0.set(LegCouponRate_72);
      InstrumentLeg_72.insert(LegCouponRate_72.getString());
      FIX::LegCreditRating LegCreditRating_72("STRING_55590761");
      noLegs_1_1_0.set(LegCreditRating_72);
      InstrumentLeg_72.insert(LegCreditRating_72.getString());
      FIX::LegCurrency LegCurrency_72("USD");
      noLegs_1_1_0.set(LegCurrency_72);
      InstrumentLeg_72.insert(LegCurrency_72.getString());
      FIX::LegDatedDate LegDatedDate_72("LOCALMKTDATE_1445300475");
      noLegs_1_1_0.set(LegDatedDate_72);
      InstrumentLeg_72.insert(LegDatedDate_72.getString());
      FIX::LegExerciseStyle LegExerciseStyle_72(599327412);
      noLegs_1_1_0.set(LegExerciseStyle_72);
      InstrumentLeg_72.insert(LegExerciseStyle_72.getString());
      FIX::LegFactor LegFactor_72;
      LegFactor_72.setString("1865074");
      noLegs_1_1_0.set(LegFactor_72);
      InstrumentLeg_72.insert(LegFactor_72.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_72(552712873);
      noLegs_1_1_0.set(LegFlowScheduleType_72);
      InstrumentLeg_72.insert(LegFlowScheduleType_72.getString());
      FIX::LegInstrRegistry LegInstrRegistry_72("STRING_1840086878");
      noLegs_1_1_0.set(LegInstrRegistry_72);
      InstrumentLeg_72.insert(LegInstrRegistry_72.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_72("LOCALMKTDATE_408450732");
      noLegs_1_1_0.set(LegInterestAccrualDate_72);
      InstrumentLeg_72.insert(LegInterestAccrualDate_72.getString());
      FIX::LegIssueDate LegIssueDate_72("LOCALMKTDATE_101477633");
      noLegs_1_1_0.set(LegIssueDate_72);
      InstrumentLeg_72.insert(LegIssueDate_72.getString());
      FIX::LegIssuer LegIssuer_72("STRING_2002392863");
      noLegs_1_1_0.set(LegIssuer_72);
      InstrumentLeg_72.insert(LegIssuer_72.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_72("STRING_1771882791");
      noLegs_1_1_0.set(LegLocaleOfIssue_72);
      InstrumentLeg_72.insert(LegLocaleOfIssue_72.getString());
      FIX::LegMaturityDate LegMaturityDate_72("LOCALMKTDATE_1810179602");
      noLegs_1_1_0.set(LegMaturityDate_72);
      InstrumentLeg_72.insert(LegMaturityDate_72.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_72("MONTHYEAR_1051599724");
      noLegs_1_1_0.set(LegMaturityMonthYear_72);
      InstrumentLeg_72.insert(LegMaturityMonthYear_72.getString());
      FIX::LegMaturityTime LegMaturityTime_72("TZTIMEONLY_77545813");
      noLegs_1_1_0.set(LegMaturityTime_72);
      InstrumentLeg_72.insert(LegMaturityTime_72.getString());
      FIX::LegOptAttribute LegOptAttribute_72('1');
      noLegs_1_1_0.set(LegOptAttribute_72);
      InstrumentLeg_72.insert(LegOptAttribute_72.getString());
      FIX::LegOptionRatio LegOptionRatio_72;
      LegOptionRatio_72.setString("11084150");
      noLegs_1_1_0.set(LegOptionRatio_72);
      InstrumentLeg_72.insert(LegOptionRatio_72.getString());
      FIX::LegPool LegPool_72("STRING_1391211550");
      noLegs_1_1_0.set(LegPool_72);
      InstrumentLeg_72.insert(LegPool_72.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_72("STRING_1628716315");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_72);
      InstrumentLeg_72.insert(LegPriceUnitOfMeasure_72.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_72;
      LegPriceUnitOfMeasureQty_72.setString("13500375");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_72);
      InstrumentLeg_72.insert(LegPriceUnitOfMeasureQty_72.getString());
      FIX::LegProduct LegProduct_72(205070352);
      noLegs_1_1_0.set(LegProduct_72);
      InstrumentLeg_72.insert(LegProduct_72.getString());
      FIX::LegPutOrCall LegPutOrCall_72(651325018);
      noLegs_1_1_0.set(LegPutOrCall_72);
      InstrumentLeg_72.insert(LegPutOrCall_72.getString());
      FIX::LegRatioQty LegRatioQty_72;
      LegRatioQty_72.setString("16022620");
      noLegs_1_1_0.set(LegRatioQty_72);
      InstrumentLeg_72.insert(LegRatioQty_72.getString());
      FIX::LegRedemptionDate LegRedemptionDate_72("LOCALMKTDATE_354880547");
      noLegs_1_1_0.set(LegRedemptionDate_72);
      InstrumentLeg_72.insert(LegRedemptionDate_72.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_72("STRING_1547065805");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_72);
      InstrumentLeg_72.insert(LegRepoCollateralSecurityType_72.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_72;
      LegRepurchaseRate_72.setString("87.080000");
      noLegs_1_1_0.set(LegRepurchaseRate_72);
      InstrumentLeg_72.insert(LegRepurchaseRate_72.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_72(1881481157);
      noLegs_1_1_0.set(LegRepurchaseTerm_72);
      InstrumentLeg_72.insert(LegRepurchaseTerm_72.getString());
      FIX::LegSecurityDesc LegSecurityDesc_72("STRING_1866667615");
      noLegs_1_1_0.set(LegSecurityDesc_72);
      InstrumentLeg_72.insert(LegSecurityDesc_72.getString());
      FIX::LegSecurityExchange LegSecurityExchange_72("EXCHANGE_843778052");
      noLegs_1_1_0.set(LegSecurityExchange_72);
      InstrumentLeg_72.insert(LegSecurityExchange_72.getString());
      FIX::LegSecurityID LegSecurityID_72("STRING_1387810533");
      noLegs_1_1_0.set(LegSecurityID_72);
      InstrumentLeg_72.insert(LegSecurityID_72.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_72("STRING_1812173759");
      noLegs_1_1_0.set(LegSecurityIDSource_72);
      InstrumentLeg_72.insert(LegSecurityIDSource_72.getString());
      FIX::LegSecuritySubType LegSecuritySubType_72("STRING_899368814");
      noLegs_1_1_0.set(LegSecuritySubType_72);
      InstrumentLeg_72.insert(LegSecuritySubType_72.getString());
      FIX::LegSecurityType LegSecurityType_72("STRING_1278155259");
      noLegs_1_1_0.set(LegSecurityType_72);
      InstrumentLeg_72.insert(LegSecurityType_72.getString());
      FIX::LegSide LegSide_72('1');
      noLegs_1_1_0.set(LegSide_72);
      InstrumentLeg_72.insert(LegSide_72.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_72("STRING_197185641");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_72);
      InstrumentLeg_72.insert(LegStateOrProvinceOfIssue_72.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_72("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_72);
      InstrumentLeg_72.insert(LegStrikeCurrency_72.getString());
      FIX::LegStrikePrice LegStrikePrice_72;
      LegStrikePrice_72.setString("7498985");
      noLegs_1_1_0.set(LegStrikePrice_72);
      InstrumentLeg_72.insert(LegStrikePrice_72.getString());
      FIX::LegSymbol LegSymbol_72("STRING_1570085901");
      noLegs_1_1_0.set(LegSymbol_72);
      InstrumentLeg_72.insert(LegSymbol_72.getString());
      FIX::LegSymbolSfx LegSymbolSfx_72("STRING_1683145047");
      noLegs_1_1_0.set(LegSymbolSfx_72);
      InstrumentLeg_72.insert(LegSymbolSfx_72.getString());
      FIX::LegTimeUnit LegTimeUnit_72("STRING_851376147");
      noLegs_1_1_0.set(LegTimeUnit_72);
      InstrumentLeg_72.insert(LegTimeUnit_72.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_72("STRING_1424995117");
      noLegs_1_1_0.set(LegUnitOfMeasure_72);
      InstrumentLeg_72.insert(LegUnitOfMeasure_72.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_72;
      LegUnitOfMeasureQty_72.setString("13075441");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_72);
      InstrumentLeg_72.insert(LegUnitOfMeasureQty_72.getString());
      all_values.push_back(InstrumentLeg_72);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_128;
        FIX::LegSecurityAltID LegSecurityAltID_128("STRING_329111193");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_128);
        LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltID_128.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_128("STRING_1385090004");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_128);
        LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltIDSource_128.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_128);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_129;
        FIX::LegSecurityAltID LegSecurityAltID_129("STRING_268752892");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_129);
        LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltID_129.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_129("STRING_1437526195");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_129);
        LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltIDSource_129.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_129);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_73;
      FIX::EncodedLegIssuer EncodedLegIssuer_73("DATA_628817906");
      noLegs_1_1_1.set(EncodedLegIssuer_73);
      InstrumentLeg_73.insert(EncodedLegIssuer_73.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_73(1897469207);
      noLegs_1_1_1.set(EncodedLegIssuerLen_73);
      InstrumentLeg_73.insert(EncodedLegIssuerLen_73.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_73("DATA_640080060");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_73);
      InstrumentLeg_73.insert(EncodedLegSecurityDesc_73.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_73(833888259);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_73);
      InstrumentLeg_73.insert(EncodedLegSecurityDescLen_73.getString());
      FIX::LegCFICode LegCFICode_73("STRING_401310577");
      noLegs_1_1_1.set(LegCFICode_73);
      InstrumentLeg_73.insert(LegCFICode_73.getString());
      FIX::LegContractMultiplier LegContractMultiplier_73;
      LegContractMultiplier_73.setString("948584");
      noLegs_1_1_1.set(LegContractMultiplier_73);
      InstrumentLeg_73.insert(LegContractMultiplier_73.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_73(1188768806);
      noLegs_1_1_1.set(LegContractMultiplierUnit_73);
      InstrumentLeg_73.insert(LegContractMultiplierUnit_73.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_73("MONTHYEAR_1948376382");
      noLegs_1_1_1.set(LegContractSettlMonth_73);
      InstrumentLeg_73.insert(LegContractSettlMonth_73.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_73("COUNTRY_2043437202");
      noLegs_1_1_1.set(LegCountryOfIssue_73);
      InstrumentLeg_73.insert(LegCountryOfIssue_73.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_73("LOCALMKTDATE_922766316");
      noLegs_1_1_1.set(LegCouponPaymentDate_73);
      InstrumentLeg_73.insert(LegCouponPaymentDate_73.getString());
      FIX::LegCouponRate LegCouponRate_73;
      LegCouponRate_73.setString("3.490000");
      noLegs_1_1_1.set(LegCouponRate_73);
      InstrumentLeg_73.insert(LegCouponRate_73.getString());
      FIX::LegCreditRating LegCreditRating_73("STRING_739731606");
      noLegs_1_1_1.set(LegCreditRating_73);
      InstrumentLeg_73.insert(LegCreditRating_73.getString());
      FIX::LegCurrency LegCurrency_73("GBP");
      noLegs_1_1_1.set(LegCurrency_73);
      InstrumentLeg_73.insert(LegCurrency_73.getString());
      FIX::LegDatedDate LegDatedDate_73("LOCALMKTDATE_1639100420");
      noLegs_1_1_1.set(LegDatedDate_73);
      InstrumentLeg_73.insert(LegDatedDate_73.getString());
      FIX::LegExerciseStyle LegExerciseStyle_73(1441248460);
      noLegs_1_1_1.set(LegExerciseStyle_73);
      InstrumentLeg_73.insert(LegExerciseStyle_73.getString());
      FIX::LegFactor LegFactor_73;
      LegFactor_73.setString("2729537");
      noLegs_1_1_1.set(LegFactor_73);
      InstrumentLeg_73.insert(LegFactor_73.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_73(1836286061);
      noLegs_1_1_1.set(LegFlowScheduleType_73);
      InstrumentLeg_73.insert(LegFlowScheduleType_73.getString());
      FIX::LegInstrRegistry LegInstrRegistry_73("STRING_1171247484");
      noLegs_1_1_1.set(LegInstrRegistry_73);
      InstrumentLeg_73.insert(LegInstrRegistry_73.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_73("LOCALMKTDATE_1547648041");
      noLegs_1_1_1.set(LegInterestAccrualDate_73);
      InstrumentLeg_73.insert(LegInterestAccrualDate_73.getString());
      FIX::LegIssueDate LegIssueDate_73("LOCALMKTDATE_438700927");
      noLegs_1_1_1.set(LegIssueDate_73);
      InstrumentLeg_73.insert(LegIssueDate_73.getString());
      FIX::LegIssuer LegIssuer_73("STRING_593849737");
      noLegs_1_1_1.set(LegIssuer_73);
      InstrumentLeg_73.insert(LegIssuer_73.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_73("STRING_1083309441");
      noLegs_1_1_1.set(LegLocaleOfIssue_73);
      InstrumentLeg_73.insert(LegLocaleOfIssue_73.getString());
      FIX::LegMaturityDate LegMaturityDate_73("LOCALMKTDATE_1290077075");
      noLegs_1_1_1.set(LegMaturityDate_73);
      InstrumentLeg_73.insert(LegMaturityDate_73.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_73("MONTHYEAR_2018844854");
      noLegs_1_1_1.set(LegMaturityMonthYear_73);
      InstrumentLeg_73.insert(LegMaturityMonthYear_73.getString());
      FIX::LegMaturityTime LegMaturityTime_73("TZTIMEONLY_243369983");
      noLegs_1_1_1.set(LegMaturityTime_73);
      InstrumentLeg_73.insert(LegMaturityTime_73.getString());
      FIX::LegOptAttribute LegOptAttribute_73('1');
      noLegs_1_1_1.set(LegOptAttribute_73);
      InstrumentLeg_73.insert(LegOptAttribute_73.getString());
      FIX::LegOptionRatio LegOptionRatio_73;
      LegOptionRatio_73.setString("2004723");
      noLegs_1_1_1.set(LegOptionRatio_73);
      InstrumentLeg_73.insert(LegOptionRatio_73.getString());
      FIX::LegPool LegPool_73("STRING_1628459987");
      noLegs_1_1_1.set(LegPool_73);
      InstrumentLeg_73.insert(LegPool_73.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_73("STRING_2072902069");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_73);
      InstrumentLeg_73.insert(LegPriceUnitOfMeasure_73.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_73;
      LegPriceUnitOfMeasureQty_73.setString("16379985");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_73);
      InstrumentLeg_73.insert(LegPriceUnitOfMeasureQty_73.getString());
      FIX::LegProduct LegProduct_73(109794246);
      noLegs_1_1_1.set(LegProduct_73);
      InstrumentLeg_73.insert(LegProduct_73.getString());
      FIX::LegPutOrCall LegPutOrCall_73(1822887628);
      noLegs_1_1_1.set(LegPutOrCall_73);
      InstrumentLeg_73.insert(LegPutOrCall_73.getString());
      FIX::LegRatioQty LegRatioQty_73;
      LegRatioQty_73.setString("1305950");
      noLegs_1_1_1.set(LegRatioQty_73);
      InstrumentLeg_73.insert(LegRatioQty_73.getString());
      FIX::LegRedemptionDate LegRedemptionDate_73("LOCALMKTDATE_943682505");
      noLegs_1_1_1.set(LegRedemptionDate_73);
      InstrumentLeg_73.insert(LegRedemptionDate_73.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_73("STRING_76714557");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_73);
      InstrumentLeg_73.insert(LegRepoCollateralSecurityType_73.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_73;
      LegRepurchaseRate_73.setString("35.010000");
      noLegs_1_1_1.set(LegRepurchaseRate_73);
      InstrumentLeg_73.insert(LegRepurchaseRate_73.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_73(2132451311);
      noLegs_1_1_1.set(LegRepurchaseTerm_73);
      InstrumentLeg_73.insert(LegRepurchaseTerm_73.getString());
      FIX::LegSecurityDesc LegSecurityDesc_73("STRING_2025090939");
      noLegs_1_1_1.set(LegSecurityDesc_73);
      InstrumentLeg_73.insert(LegSecurityDesc_73.getString());
      FIX::LegSecurityExchange LegSecurityExchange_73("EXCHANGE_121407055");
      noLegs_1_1_1.set(LegSecurityExchange_73);
      InstrumentLeg_73.insert(LegSecurityExchange_73.getString());
      FIX::LegSecurityID LegSecurityID_73("STRING_907733979");
      noLegs_1_1_1.set(LegSecurityID_73);
      InstrumentLeg_73.insert(LegSecurityID_73.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_73("STRING_1545167640");
      noLegs_1_1_1.set(LegSecurityIDSource_73);
      InstrumentLeg_73.insert(LegSecurityIDSource_73.getString());
      FIX::LegSecuritySubType LegSecuritySubType_73("STRING_861138661");
      noLegs_1_1_1.set(LegSecuritySubType_73);
      InstrumentLeg_73.insert(LegSecuritySubType_73.getString());
      FIX::LegSecurityType LegSecurityType_73("STRING_1070827180");
      noLegs_1_1_1.set(LegSecurityType_73);
      InstrumentLeg_73.insert(LegSecurityType_73.getString());
      FIX::LegSide LegSide_73('7');
      noLegs_1_1_1.set(LegSide_73);
      InstrumentLeg_73.insert(LegSide_73.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_73("STRING_352755434");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_73);
      InstrumentLeg_73.insert(LegStateOrProvinceOfIssue_73.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_73("CAN");
      noLegs_1_1_1.set(LegStrikeCurrency_73);
      InstrumentLeg_73.insert(LegStrikeCurrency_73.getString());
      FIX::LegStrikePrice LegStrikePrice_73;
      LegStrikePrice_73.setString("415578");
      noLegs_1_1_1.set(LegStrikePrice_73);
      InstrumentLeg_73.insert(LegStrikePrice_73.getString());
      FIX::LegSymbol LegSymbol_73("STRING_1535839477");
      noLegs_1_1_1.set(LegSymbol_73);
      InstrumentLeg_73.insert(LegSymbol_73.getString());
      FIX::LegSymbolSfx LegSymbolSfx_73("STRING_403052572");
      noLegs_1_1_1.set(LegSymbolSfx_73);
      InstrumentLeg_73.insert(LegSymbolSfx_73.getString());
      FIX::LegTimeUnit LegTimeUnit_73("STRING_480258775");
      noLegs_1_1_1.set(LegTimeUnit_73);
      InstrumentLeg_73.insert(LegTimeUnit_73.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_73("STRING_2129689214");
      noLegs_1_1_1.set(LegUnitOfMeasure_73);
      InstrumentLeg_73.insert(LegUnitOfMeasure_73.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_73;
      LegUnitOfMeasureQty_73.setString("14863620");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_73);
      InstrumentLeg_73.insert(LegUnitOfMeasureQty_73.getString());
      all_values.push_back(InstrumentLeg_73);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_130;
        FIX::LegSecurityAltID LegSecurityAltID_130("STRING_2001050421");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_130);
        LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltID_130.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_130("STRING_1729731997");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_130);
        LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltIDSource_130.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_130);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_74;
      FIX::EncodedLegIssuer EncodedLegIssuer_74("DATA_1427001379");
      noLegs_1_1_2.set(EncodedLegIssuer_74);
      InstrumentLeg_74.insert(EncodedLegIssuer_74.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_74(54039172);
      noLegs_1_1_2.set(EncodedLegIssuerLen_74);
      InstrumentLeg_74.insert(EncodedLegIssuerLen_74.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_74("DATA_1210708336");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_74);
      InstrumentLeg_74.insert(EncodedLegSecurityDesc_74.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_74(1352419800);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_74);
      InstrumentLeg_74.insert(EncodedLegSecurityDescLen_74.getString());
      FIX::LegCFICode LegCFICode_74("STRING_1692037767");
      noLegs_1_1_2.set(LegCFICode_74);
      InstrumentLeg_74.insert(LegCFICode_74.getString());
      FIX::LegContractMultiplier LegContractMultiplier_74;
      LegContractMultiplier_74.setString("13205025");
      noLegs_1_1_2.set(LegContractMultiplier_74);
      InstrumentLeg_74.insert(LegContractMultiplier_74.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_74(1027823780);
      noLegs_1_1_2.set(LegContractMultiplierUnit_74);
      InstrumentLeg_74.insert(LegContractMultiplierUnit_74.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_74("MONTHYEAR_1822632775");
      noLegs_1_1_2.set(LegContractSettlMonth_74);
      InstrumentLeg_74.insert(LegContractSettlMonth_74.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_74("COUNTRY_116701439");
      noLegs_1_1_2.set(LegCountryOfIssue_74);
      InstrumentLeg_74.insert(LegCountryOfIssue_74.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_74("LOCALMKTDATE_1104538337");
      noLegs_1_1_2.set(LegCouponPaymentDate_74);
      InstrumentLeg_74.insert(LegCouponPaymentDate_74.getString());
      FIX::LegCouponRate LegCouponRate_74;
      LegCouponRate_74.setString("62.760000");
      noLegs_1_1_2.set(LegCouponRate_74);
      InstrumentLeg_74.insert(LegCouponRate_74.getString());
      FIX::LegCreditRating LegCreditRating_74("STRING_101669103");
      noLegs_1_1_2.set(LegCreditRating_74);
      InstrumentLeg_74.insert(LegCreditRating_74.getString());
      FIX::LegCurrency LegCurrency_74("CHF");
      noLegs_1_1_2.set(LegCurrency_74);
      InstrumentLeg_74.insert(LegCurrency_74.getString());
      FIX::LegDatedDate LegDatedDate_74("LOCALMKTDATE_1009403082");
      noLegs_1_1_2.set(LegDatedDate_74);
      InstrumentLeg_74.insert(LegDatedDate_74.getString());
      FIX::LegExerciseStyle LegExerciseStyle_74(379829620);
      noLegs_1_1_2.set(LegExerciseStyle_74);
      InstrumentLeg_74.insert(LegExerciseStyle_74.getString());
      FIX::LegFactor LegFactor_74;
      LegFactor_74.setString("8831483");
      noLegs_1_1_2.set(LegFactor_74);
      InstrumentLeg_74.insert(LegFactor_74.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_74(2080230263);
      noLegs_1_1_2.set(LegFlowScheduleType_74);
      InstrumentLeg_74.insert(LegFlowScheduleType_74.getString());
      FIX::LegInstrRegistry LegInstrRegistry_74("STRING_1109764073");
      noLegs_1_1_2.set(LegInstrRegistry_74);
      InstrumentLeg_74.insert(LegInstrRegistry_74.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_74("LOCALMKTDATE_1235903778");
      noLegs_1_1_2.set(LegInterestAccrualDate_74);
      InstrumentLeg_74.insert(LegInterestAccrualDate_74.getString());
      FIX::LegIssueDate LegIssueDate_74("LOCALMKTDATE_297338608");
      noLegs_1_1_2.set(LegIssueDate_74);
      InstrumentLeg_74.insert(LegIssueDate_74.getString());
      FIX::LegIssuer LegIssuer_74("STRING_2112652252");
      noLegs_1_1_2.set(LegIssuer_74);
      InstrumentLeg_74.insert(LegIssuer_74.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_74("STRING_1277461626");
      noLegs_1_1_2.set(LegLocaleOfIssue_74);
      InstrumentLeg_74.insert(LegLocaleOfIssue_74.getString());
      FIX::LegMaturityDate LegMaturityDate_74("LOCALMKTDATE_1833178085");
      noLegs_1_1_2.set(LegMaturityDate_74);
      InstrumentLeg_74.insert(LegMaturityDate_74.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_74("MONTHYEAR_368221177");
      noLegs_1_1_2.set(LegMaturityMonthYear_74);
      InstrumentLeg_74.insert(LegMaturityMonthYear_74.getString());
      FIX::LegMaturityTime LegMaturityTime_74("TZTIMEONLY_1757720401");
      noLegs_1_1_2.set(LegMaturityTime_74);
      InstrumentLeg_74.insert(LegMaturityTime_74.getString());
      FIX::LegOptAttribute LegOptAttribute_74('1');
      noLegs_1_1_2.set(LegOptAttribute_74);
      InstrumentLeg_74.insert(LegOptAttribute_74.getString());
      FIX::LegOptionRatio LegOptionRatio_74;
      LegOptionRatio_74.setString("18545831");
      noLegs_1_1_2.set(LegOptionRatio_74);
      InstrumentLeg_74.insert(LegOptionRatio_74.getString());
      FIX::LegPool LegPool_74("STRING_1380572603");
      noLegs_1_1_2.set(LegPool_74);
      InstrumentLeg_74.insert(LegPool_74.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_74("STRING_1668950424");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_74);
      InstrumentLeg_74.insert(LegPriceUnitOfMeasure_74.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_74;
      LegPriceUnitOfMeasureQty_74.setString("14368315");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_74);
      InstrumentLeg_74.insert(LegPriceUnitOfMeasureQty_74.getString());
      FIX::LegProduct LegProduct_74(660090334);
      noLegs_1_1_2.set(LegProduct_74);
      InstrumentLeg_74.insert(LegProduct_74.getString());
      FIX::LegPutOrCall LegPutOrCall_74(1722989597);
      noLegs_1_1_2.set(LegPutOrCall_74);
      InstrumentLeg_74.insert(LegPutOrCall_74.getString());
      FIX::LegRatioQty LegRatioQty_74;
      LegRatioQty_74.setString("5000562");
      noLegs_1_1_2.set(LegRatioQty_74);
      InstrumentLeg_74.insert(LegRatioQty_74.getString());
      FIX::LegRedemptionDate LegRedemptionDate_74("LOCALMKTDATE_2012510134");
      noLegs_1_1_2.set(LegRedemptionDate_74);
      InstrumentLeg_74.insert(LegRedemptionDate_74.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_74("STRING_1267543716");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_74);
      InstrumentLeg_74.insert(LegRepoCollateralSecurityType_74.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_74;
      LegRepurchaseRate_74.setString("88.100000");
      noLegs_1_1_2.set(LegRepurchaseRate_74);
      InstrumentLeg_74.insert(LegRepurchaseRate_74.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_74(892850266);
      noLegs_1_1_2.set(LegRepurchaseTerm_74);
      InstrumentLeg_74.insert(LegRepurchaseTerm_74.getString());
      FIX::LegSecurityDesc LegSecurityDesc_74("STRING_942692843");
      noLegs_1_1_2.set(LegSecurityDesc_74);
      InstrumentLeg_74.insert(LegSecurityDesc_74.getString());
      FIX::LegSecurityExchange LegSecurityExchange_74("EXCHANGE_1937260250");
      noLegs_1_1_2.set(LegSecurityExchange_74);
      InstrumentLeg_74.insert(LegSecurityExchange_74.getString());
      FIX::LegSecurityID LegSecurityID_74("STRING_1997388603");
      noLegs_1_1_2.set(LegSecurityID_74);
      InstrumentLeg_74.insert(LegSecurityID_74.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_74("STRING_843295471");
      noLegs_1_1_2.set(LegSecurityIDSource_74);
      InstrumentLeg_74.insert(LegSecurityIDSource_74.getString());
      FIX::LegSecuritySubType LegSecuritySubType_74("STRING_2038929353");
      noLegs_1_1_2.set(LegSecuritySubType_74);
      InstrumentLeg_74.insert(LegSecuritySubType_74.getString());
      FIX::LegSecurityType LegSecurityType_74("STRING_832050583");
      noLegs_1_1_2.set(LegSecurityType_74);
      InstrumentLeg_74.insert(LegSecurityType_74.getString());
      FIX::LegSide LegSide_74('8');
      noLegs_1_1_2.set(LegSide_74);
      InstrumentLeg_74.insert(LegSide_74.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_74("STRING_900848787");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_74);
      InstrumentLeg_74.insert(LegStateOrProvinceOfIssue_74.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_74("CHF");
      noLegs_1_1_2.set(LegStrikeCurrency_74);
      InstrumentLeg_74.insert(LegStrikeCurrency_74.getString());
      FIX::LegStrikePrice LegStrikePrice_74;
      LegStrikePrice_74.setString("8335954");
      noLegs_1_1_2.set(LegStrikePrice_74);
      InstrumentLeg_74.insert(LegStrikePrice_74.getString());
      FIX::LegSymbol LegSymbol_74("STRING_174160629");
      noLegs_1_1_2.set(LegSymbol_74);
      InstrumentLeg_74.insert(LegSymbol_74.getString());
      FIX::LegSymbolSfx LegSymbolSfx_74("STRING_836873629");
      noLegs_1_1_2.set(LegSymbolSfx_74);
      InstrumentLeg_74.insert(LegSymbolSfx_74.getString());
      FIX::LegTimeUnit LegTimeUnit_74("STRING_1130934010");
      noLegs_1_1_2.set(LegTimeUnit_74);
      InstrumentLeg_74.insert(LegTimeUnit_74.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_74("STRING_139329233");
      noLegs_1_1_2.set(LegUnitOfMeasure_74);
      InstrumentLeg_74.insert(LegUnitOfMeasure_74.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_74;
      LegUnitOfMeasureQty_74.setString("21143352");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_74);
      InstrumentLeg_74.insert(LegUnitOfMeasureQty_74.getString());
      all_values.push_back(InstrumentLeg_74);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_131;
        FIX::LegSecurityAltID LegSecurityAltID_131("STRING_507550410");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_131);
        LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltID_131.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_131("STRING_1724572008");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_131);
        LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltIDSource_131.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_131);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_132;
        FIX::LegSecurityAltID LegSecurityAltID_132("STRING_484528451");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltID_132);
        LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltID_132.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_132("STRING_214649953");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltIDSource_132);
        LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltIDSource_132.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_132);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_1);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_2);
    }
    // Instrument
    multiset<string> Instrument_58;
    FIX::AttachmentPoint AttachmentPoint_58;
    AttachmentPoint_58.setString("9.630000");
    noQuoteEntries_0_1.set(AttachmentPoint_58);
    Instrument_58.insert(AttachmentPoint_58.getString());
    FIX::CFICode CFICode_58("STRING_5995227");
    noQuoteEntries_0_1.set(CFICode_58);
    Instrument_58.insert(CFICode_58.getString());
    FIX::CPProgram CPProgram_58(99);
    noQuoteEntries_0_1.set(CPProgram_58);
    Instrument_58.insert(CPProgram_58.getString());
    FIX::CPRegType CPRegType_58("STRING_1617751297");
    noQuoteEntries_0_1.set(CPRegType_58);
    Instrument_58.insert(CPRegType_58.getString());
    FIX::CapPrice CapPrice_58;
    CapPrice_58.setString("17289848");
    noQuoteEntries_0_1.set(CapPrice_58);
    Instrument_58.insert(CapPrice_58.getString());
    FIX::ContractMultiplier ContractMultiplier_58;
    ContractMultiplier_58.setString("40540");
    noQuoteEntries_0_1.set(ContractMultiplier_58);
    Instrument_58.insert(ContractMultiplier_58.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_58(0);
    noQuoteEntries_0_1.set(ContractMultiplierUnit_58);
    Instrument_58.insert(ContractMultiplierUnit_58.getString());
    FIX::ContractSettlMonth ContractSettlMonth_58("MONTHYEAR_849044893");
    noQuoteEntries_0_1.set(ContractSettlMonth_58);
    Instrument_58.insert(ContractSettlMonth_58.getString());
    FIX::CountryOfIssue CountryOfIssue_58("COUNTRY_1824612883");
    noQuoteEntries_0_1.set(CountryOfIssue_58);
    Instrument_58.insert(CountryOfIssue_58.getString());
    FIX::CouponPaymentDate CouponPaymentDate_58("LOCALMKTDATE_228144401");
    noQuoteEntries_0_1.set(CouponPaymentDate_58);
    Instrument_58.insert(CouponPaymentDate_58.getString());
    FIX::CouponRate CouponRate_58;
    CouponRate_58.setString("77.360000");
    noQuoteEntries_0_1.set(CouponRate_58);
    Instrument_58.insert(CouponRate_58.getString());
    FIX::CreditRating CreditRating_58("STRING_1614389485");
    noQuoteEntries_0_1.set(CreditRating_58);
    Instrument_58.insert(CreditRating_58.getString());
    FIX::DatedDate DatedDate_58("LOCALMKTDATE_78049356");
    noQuoteEntries_0_1.set(DatedDate_58);
    Instrument_58.insert(DatedDate_58.getString());
    FIX::DetachmentPoint DetachmentPoint_58;
    DetachmentPoint_58.setString("95.600000");
    noQuoteEntries_0_1.set(DetachmentPoint_58);
    Instrument_58.insert(DetachmentPoint_58.getString());
    FIX::EncodedIssuer EncodedIssuer_58("DATA_1505835190");
    noQuoteEntries_0_1.set(EncodedIssuer_58);
    Instrument_58.insert(EncodedIssuer_58.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_58(910099939);
    noQuoteEntries_0_1.set(EncodedIssuerLen_58);
    Instrument_58.insert(EncodedIssuerLen_58.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_58("DATA_1352854714");
    noQuoteEntries_0_1.set(EncodedSecurityDesc_58);
    Instrument_58.insert(EncodedSecurityDesc_58.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_58(259200329);
    noQuoteEntries_0_1.set(EncodedSecurityDescLen_58);
    Instrument_58.insert(EncodedSecurityDescLen_58.getString());
    FIX::ExerciseStyle ExerciseStyle_58(1);
    noQuoteEntries_0_1.set(ExerciseStyle_58);
    Instrument_58.insert(ExerciseStyle_58.getString());
    FIX::Factor Factor_58;
    Factor_58.setString("9538245");
    noQuoteEntries_0_1.set(Factor_58);
    Instrument_58.insert(Factor_58.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_58(true);
    noQuoteEntries_0_1.set(FlexProductEligibilityIndicator_58);
    Instrument_58.insert(FlexProductEligibilityIndicator_58.getString());
    FIX::FlexibleIndicator FlexibleIndicator_58(true);
    noQuoteEntries_0_1.set(FlexibleIndicator_58);
    Instrument_58.insert(FlexibleIndicator_58.getString());
    FIX::FloorPrice FloorPrice_58;
    FloorPrice_58.setString("17906981");
    noQuoteEntries_0_1.set(FloorPrice_58);
    Instrument_58.insert(FloorPrice_58.getString());
    FIX::FlowScheduleType FlowScheduleType_58(4);
    noQuoteEntries_0_1.set(FlowScheduleType_58);
    Instrument_58.insert(FlowScheduleType_58.getString());
    FIX::InstrRegistry InstrRegistry_58("STRING_287986357");
    noQuoteEntries_0_1.set(InstrRegistry_58);
    Instrument_58.insert(InstrRegistry_58.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_58('1');
    noQuoteEntries_0_1.set(InstrmtAssignmentMethod_58);
    Instrument_58.insert(InstrmtAssignmentMethod_58.getString());
    FIX::InterestAccrualDate InterestAccrualDate_58("LOCALMKTDATE_892874542");
    noQuoteEntries_0_1.set(InterestAccrualDate_58);
    Instrument_58.insert(InterestAccrualDate_58.getString());
    FIX::IssueDate IssueDate_58("LOCALMKTDATE_795536768");
    noQuoteEntries_0_1.set(IssueDate_58);
    Instrument_58.insert(IssueDate_58.getString());
    FIX::Issuer Issuer_58("STRING_1334638163");
    noQuoteEntries_0_1.set(Issuer_58);
    Instrument_58.insert(Issuer_58.getString());
    FIX::ListMethod ListMethod_58(1);
    noQuoteEntries_0_1.set(ListMethod_58);
    Instrument_58.insert(ListMethod_58.getString());
    FIX::LocaleOfIssue LocaleOfIssue_58("STRING_1010186721");
    noQuoteEntries_0_1.set(LocaleOfIssue_58);
    Instrument_58.insert(LocaleOfIssue_58.getString());
    FIX::MaturityDate MaturityDate_58("LOCALMKTDATE_144815478");
    noQuoteEntries_0_1.set(MaturityDate_58);
    Instrument_58.insert(MaturityDate_58.getString());
    FIX::MaturityMonthYear MaturityMonthYear_58("MONTHYEAR_1383398220");
    noQuoteEntries_0_1.set(MaturityMonthYear_58);
    Instrument_58.insert(MaturityMonthYear_58.getString());
    FIX::MaturityTime MaturityTime_58("TZTIMEONLY_514184565");
    noQuoteEntries_0_1.set(MaturityTime_58);
    Instrument_58.insert(MaturityTime_58.getString());
    FIX::MinPriceIncrement MinPriceIncrement_58;
    MinPriceIncrement_58.setString("17625667");
    noQuoteEntries_0_1.set(MinPriceIncrement_58);
    Instrument_58.insert(MinPriceIncrement_58.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_58;
    MinPriceIncrementAmount_58.setString("9648993");
    noQuoteEntries_0_1.set(MinPriceIncrementAmount_58);
    Instrument_58.insert(MinPriceIncrementAmount_58.getString());
    FIX::NTPositionLimit NTPositionLimit_58(518238638);
    noQuoteEntries_0_1.set(NTPositionLimit_58);
    Instrument_58.insert(NTPositionLimit_58.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_58;
    NotionalPercentageOutstanding_58.setString("9.110000");
    noQuoteEntries_0_1.set(NotionalPercentageOutstanding_58);
    Instrument_58.insert(NotionalPercentageOutstanding_58.getString());
    FIX::OptAttribute OptAttribute_58('1');
    noQuoteEntries_0_1.set(OptAttribute_58);
    Instrument_58.insert(OptAttribute_58.getString());
    FIX::OptPayoutAmount OptPayoutAmount_58;
    OptPayoutAmount_58.setString("1953678");
    noQuoteEntries_0_1.set(OptPayoutAmount_58);
    Instrument_58.insert(OptPayoutAmount_58.getString());
    FIX::OptPayoutType OptPayoutType_58(1);
    noQuoteEntries_0_1.set(OptPayoutType_58);
    Instrument_58.insert(OptPayoutType_58.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_58;
    OriginalNotionalPercentageOutstanding_58.setString("83.780000");
    noQuoteEntries_0_1.set(OriginalNotionalPercentageOutstanding_58);
    Instrument_58.insert(OriginalNotionalPercentageOutstanding_58.getString());
    FIX::Pool Pool_58("STRING_1809757358");
    noQuoteEntries_0_1.set(Pool_58);
    Instrument_58.insert(Pool_58.getString());
    FIX::PositionLimit PositionLimit_58(1404054669);
    noQuoteEntries_0_1.set(PositionLimit_58);
    Instrument_58.insert(PositionLimit_58.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_58("STRING_INT");
    noQuoteEntries_0_1.set(PriceQuoteMethod_58);
    Instrument_58.insert(PriceQuoteMethod_58.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_58("STRING_1168108900");
    noQuoteEntries_0_1.set(PriceUnitOfMeasure_58);
    Instrument_58.insert(PriceUnitOfMeasure_58.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_58;
    PriceUnitOfMeasureQty_58.setString("1666709");
    noQuoteEntries_0_1.set(PriceUnitOfMeasureQty_58);
    Instrument_58.insert(PriceUnitOfMeasureQty_58.getString());
    FIX::Product Product_60(11);
    noQuoteEntries_0_1.set(Product_60);
    Instrument_58.insert(Product_60.getString());
    FIX::ProductComplex ProductComplex_58("STRING_1427309229");
    noQuoteEntries_0_1.set(ProductComplex_58);
    Instrument_58.insert(ProductComplex_58.getString());
    FIX::PutOrCall PutOrCall_58(0);
    noQuoteEntries_0_1.set(PutOrCall_58);
    Instrument_58.insert(PutOrCall_58.getString());
    FIX::RedemptionDate RedemptionDate_58("LOCALMKTDATE_2104943570");
    noQuoteEntries_0_1.set(RedemptionDate_58);
    Instrument_58.insert(RedemptionDate_58.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_58("STRING_372621313");
    noQuoteEntries_0_1.set(RepoCollateralSecurityType_58);
    Instrument_58.insert(RepoCollateralSecurityType_58.getString());
    FIX::RepurchaseRate RepurchaseRate_58;
    RepurchaseRate_58.setString("45.800000");
    noQuoteEntries_0_1.set(RepurchaseRate_58);
    Instrument_58.insert(RepurchaseRate_58.getString());
    FIX::RepurchaseTerm RepurchaseTerm_58(1748158117);
    noQuoteEntries_0_1.set(RepurchaseTerm_58);
    Instrument_58.insert(RepurchaseTerm_58.getString());
    FIX::RestructuringType RestructuringType_58("STRING_FR");
    noQuoteEntries_0_1.set(RestructuringType_58);
    Instrument_58.insert(RestructuringType_58.getString());
    FIX::SecurityDesc SecurityDesc_58("STRING_577810937");
    noQuoteEntries_0_1.set(SecurityDesc_58);
    Instrument_58.insert(SecurityDesc_58.getString());
    FIX::SecurityExchange SecurityExchange_58("EXCHANGE_1358224272");
    noQuoteEntries_0_1.set(SecurityExchange_58);
    Instrument_58.insert(SecurityExchange_58.getString());
    FIX::SecurityGroup SecurityGroup_58("STRING_1341741950");
    noQuoteEntries_0_1.set(SecurityGroup_58);
    Instrument_58.insert(SecurityGroup_58.getString());
    FIX::SecurityID SecurityID_58("STRING_1373347705");
    noQuoteEntries_0_1.set(SecurityID_58);
    Instrument_58.insert(SecurityID_58.getString());
    FIX::SecurityIDSource SecurityIDSource_58("STRING_K");
    noQuoteEntries_0_1.set(SecurityIDSource_58);
    Instrument_58.insert(SecurityIDSource_58.getString());
    FIX::SecurityStatus SecurityStatus_58("STRING_2");
    noQuoteEntries_0_1.set(SecurityStatus_58);
    Instrument_58.insert(SecurityStatus_58.getString());
    FIX::SecuritySubType SecuritySubType_59("STRING_236050778");
    noQuoteEntries_0_1.set(SecuritySubType_59);
    Instrument_58.insert(SecuritySubType_59.getString());
    FIX::SecurityType SecurityType_60("STRING_NONE");
    noQuoteEntries_0_1.set(SecurityType_60);
    Instrument_58.insert(SecurityType_60.getString());
    FIX::Seniority Seniority_58("STRING_SD");
    noQuoteEntries_0_1.set(Seniority_58);
    Instrument_58.insert(Seniority_58.getString());
    FIX::SettlMethod SettlMethod_58('C');
    noQuoteEntries_0_1.set(SettlMethod_58);
    Instrument_58.insert(SettlMethod_58.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_58("STRING_305277393");
    noQuoteEntries_0_1.set(SettleOnOpenFlag_58);
    Instrument_58.insert(SettleOnOpenFlag_58.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_58("STRING_772475264");
    noQuoteEntries_0_1.set(StateOrProvinceOfIssue_58);
    Instrument_58.insert(StateOrProvinceOfIssue_58.getString());
    FIX::StrikeCurrency StrikeCurrency_58("EUR");
    noQuoteEntries_0_1.set(StrikeCurrency_58);
    Instrument_58.insert(StrikeCurrency_58.getString());
    FIX::StrikeMultiplier StrikeMultiplier_58;
    StrikeMultiplier_58.setString("4389359");
    noQuoteEntries_0_1.set(StrikeMultiplier_58);
    Instrument_58.insert(StrikeMultiplier_58.getString());
    FIX::StrikePrice StrikePrice_58;
    StrikePrice_58.setString("14638418");
    noQuoteEntries_0_1.set(StrikePrice_58);
    Instrument_58.insert(StrikePrice_58.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_58(1);
    noQuoteEntries_0_1.set(StrikePriceBoundaryMethod_58);
    Instrument_58.insert(StrikePriceBoundaryMethod_58.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_58;
    StrikePriceBoundaryPrecision_58.setString("42.850000");
    noQuoteEntries_0_1.set(StrikePriceBoundaryPrecision_58);
    Instrument_58.insert(StrikePriceBoundaryPrecision_58.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_58(2);
    noQuoteEntries_0_1.set(StrikePriceDeterminationMethod_58);
    Instrument_58.insert(StrikePriceDeterminationMethod_58.getString());
    FIX::StrikeValue StrikeValue_58;
    StrikeValue_58.setString("19857146");
    noQuoteEntries_0_1.set(StrikeValue_58);
    Instrument_58.insert(StrikeValue_58.getString());
    FIX::Symbol Symbol_58("STRING_1695398575");
    noQuoteEntries_0_1.set(Symbol_58);
    Instrument_58.insert(Symbol_58.getString());
    FIX::SymbolSfx SymbolSfx_58("STRING_WI");
    noQuoteEntries_0_1.set(SymbolSfx_58);
    Instrument_58.insert(SymbolSfx_58.getString());
    FIX::TimeUnit TimeUnit_58("STRING_Yr");
    noQuoteEntries_0_1.set(TimeUnit_58);
    Instrument_58.insert(TimeUnit_58.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_58(1);
    noQuoteEntries_0_1.set(UnderlyingPriceDeterminationMethod_58);
    Instrument_58.insert(UnderlyingPriceDeterminationMethod_58.getString());
    FIX::UnitOfMeasure UnitOfMeasure_58("STRING_tn");
    noQuoteEntries_0_1.set(UnitOfMeasure_58);
    Instrument_58.insert(UnitOfMeasure_58.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_58;
    UnitOfMeasureQty_58.setString("1460694");
    noQuoteEntries_0_1.set(UnitOfMeasureQty_58);
    Instrument_58.insert(UnitOfMeasureQty_58.getString());
    FIX::ValuationMethod ValuationMethod_58("STRING_EQTY");
    noQuoteEntries_0_1.set(ValuationMethod_58);
    Instrument_58.insert(ValuationMethod_58.getString());
    all_values.push_back(Instrument_58);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_112;
      FIX::ComplexEventCondition ComplexEventCondition_112(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexEventCondition_112.getString());
      FIX::ComplexEventPrice ComplexEventPrice_112;
      ComplexEventPrice_112.setString("2571683");
      noComplexEvents_1_1_0.set(ComplexEventPrice_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexEventPrice_112.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_112(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryMethod_112.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_112;
      ComplexEventPriceBoundaryPrecision_112.setString("49.260000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceBoundaryPrecision_112.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_112(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexEventPriceTimeType_112.getString());
      FIX::ComplexEventType ComplexEventType_112(9);
      noComplexEvents_1_1_0.set(ComplexEventType_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexEventType_112.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_112;
      ComplexOptPayoutAmount_112.setString("2395689");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_112);
      ComplexEvents_NoComplexEvents_112.insert(ComplexOptPayoutAmount_112.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_112);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_232;
        FIX::ComplexEventEndDate ComplexEventEndDate_232(FIX::UTCTIMESTAMP(2, 1, 12, 14, 112001));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_232);
        ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventEndDate_232.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_232(FIX::UTCTIMESTAMP(3, 15, 35, 9, 52006));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_232);
        ComplexEventDates_NoComplexEventDates_232.insert(ComplexEventStartDate_232.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_232);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_453;
          FIX::ComplexEventEndTime ComplexEventEndTime_453(FIX::UTCTIMEONLY(5, 45, 12));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_453);
          ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventEndTime_453.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_453(FIX::UTCTIMEONLY(6, 27, 19));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_453);
          ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventStartTime_453.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_453);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_113;
      FIX::ComplexEventCondition ComplexEventCondition_113(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexEventCondition_113.getString());
      FIX::ComplexEventPrice ComplexEventPrice_113;
      ComplexEventPrice_113.setString("19432234");
      noComplexEvents_1_1_1.set(ComplexEventPrice_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexEventPrice_113.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_113(5);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryMethod_113.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_113;
      ComplexEventPriceBoundaryPrecision_113.setString("16.400000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryPrecision_113.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_113(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceTimeType_113.getString());
      FIX::ComplexEventType ComplexEventType_113(7);
      noComplexEvents_1_1_1.set(ComplexEventType_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexEventType_113.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_113;
      ComplexOptPayoutAmount_113.setString("3769606");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_113);
      ComplexEvents_NoComplexEvents_113.insert(ComplexOptPayoutAmount_113.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_113);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_233;
        FIX::ComplexEventEndDate ComplexEventEndDate_233(FIX::UTCTIMESTAMP(18, 17, 11, 0, 82010));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_233);
        ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventEndDate_233.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_233(FIX::UTCTIMESTAMP(11, 7, 19, 4, 12005));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_233);
        ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventStartDate_233.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_233);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_454;
          FIX::ComplexEventEndTime ComplexEventEndTime_454(FIX::UTCTIMEONLY(4, 27, 44));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_454);
          ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventEndTime_454.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_454(FIX::UTCTIMEONLY(1, 4, 51));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_454);
          ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventStartTime_454.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_454);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_455;
          FIX::ComplexEventEndTime ComplexEventEndTime_455(FIX::UTCTIMEONLY(20, 10, 36));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_455);
          ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventEndTime_455.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_455(FIX::UTCTIMEONLY(0, 40, 16));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_455);
          ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventStartTime_455.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_455);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_456;
          FIX::ComplexEventEndTime ComplexEventEndTime_456(FIX::UTCTIMEONLY(14, 25, 21));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_456);
          ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventEndTime_456.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_456(FIX::UTCTIMEONLY(1, 5, 46));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_456);
          ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventStartTime_456.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_456);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_234;
        FIX::ComplexEventEndDate ComplexEventEndDate_234(FIX::UTCTIMESTAMP(1, 57, 44, 5, 92014));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_234);
        ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventEndDate_234.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_234(FIX::UTCTIMESTAMP(4, 45, 13, 27, 112017));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_234);
        ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventStartDate_234.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_234);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_457;
          FIX::ComplexEventEndTime ComplexEventEndTime_457(FIX::UTCTIMEONLY(17, 37, 21));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_457);
          ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventEndTime_457.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_457(FIX::UTCTIMEONLY(13, 53, 34));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_457);
          ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventStartTime_457.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_457);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_458;
          FIX::ComplexEventEndTime ComplexEventEndTime_458(FIX::UTCTIMEONLY(7, 52, 13));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_458);
          ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventEndTime_458.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_458(FIX::UTCTIMEONLY(17, 18, 11));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_458);
          ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventStartTime_458.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_458);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_459;
          FIX::ComplexEventEndTime ComplexEventEndTime_459(FIX::UTCTIMEONLY(23, 8, 5));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_459);
          ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventEndTime_459.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_459(FIX::UTCTIMEONLY(8, 23, 57));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_459);
          ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventStartTime_459.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_459);

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
      multiset<string> EvntGrp_NoEvents_116;
      FIX::EventDate EventDate_116("LOCALMKTDATE_250584840");
      noEvents_1_1_0.set(EventDate_116);
      EvntGrp_NoEvents_116.insert(EventDate_116.getString());
      FIX::EventPx EventPx_116;
      EventPx_116.setString("7112075");
      noEvents_1_1_0.set(EventPx_116);
      EvntGrp_NoEvents_116.insert(EventPx_116.getString());
      FIX::EventText EventText_116("STRING_334384672");
      noEvents_1_1_0.set(EventText_116);
      EvntGrp_NoEvents_116.insert(EventText_116.getString());
      FIX::EventTime EventTime_116(FIX::UTCTIMESTAMP(12, 18, 44, 6, 122009));
      noEvents_1_1_0.set(EventTime_116);
      EvntGrp_NoEvents_116.insert(EventTime_116.getString());
      FIX::EventType EventType_116(9);
      noEvents_1_1_0.set(EventType_116);
      EvntGrp_NoEvents_116.insert(EventType_116.getString());
      all_values.push_back(EvntGrp_NoEvents_116);

      noQuoteEntries_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_107;
      FIX::InstrumentPartyID InstrumentPartyID_107("STRING_616221823");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_107);
      InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyID_107.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_107('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_107);
      InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyIDSource_107.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_107(1493093428);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_107);
      InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyRole_107.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_107);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210;
        FIX::InstrumentPartySubID InstrumentPartySubID_210("STRING_440501886");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_210);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubID_210.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_210(962939133);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_210);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubIDType_210.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_117;
      FIX::SecurityAltID SecurityAltID_117("STRING_1193815199");
      noSecurityAltID_1_1_0.set(SecurityAltID_117);
      SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltID_117.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_117("STRING_573773083");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_117);
      SecAltIDGrp_NoSecurityAltID_117.insert(SecurityAltIDSource_117.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_117);

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_118;
      FIX::SecurityAltID SecurityAltID_118("STRING_1466402263");
      noSecurityAltID_1_1_1.set(SecurityAltID_118);
      SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltID_118.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_118("STRING_1207642460");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_118);
      SecAltIDGrp_NoSecurityAltID_118.insert(SecurityAltIDSource_118.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_118);

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_119;
      FIX::SecurityAltID SecurityAltID_119("STRING_1640290867");
      noSecurityAltID_1_1_2.set(SecurityAltID_119);
      SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltID_119.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_119("STRING_876424904");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_119);
      SecAltIDGrp_NoSecurityAltID_119.insert(SecurityAltIDSource_119.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_119);

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_116;
    FIX::SecurityXML SecurityXML_117("XMLDATA_434165958");
    noQuoteEntries_0_1.set(SecurityXML_117);
    FIX::SecurityXMLLen SecurityXMLLen_58(1964833167);
    noQuoteEntries_0_1.set(SecurityXMLLen_58);
    FIX::SecurityXMLSchema SecurityXMLSchema_58("STRING_1670624104");
    noQuoteEntries_0_1.set(SecurityXMLSchema_58);
    SecurityXML_116.insert(SecurityXMLSchema_58.getString());
    all_values.push_back(SecurityXML_116);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_91;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_91("DATA_1827751637");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingIssuer_91.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_91(1220412741);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingIssuerLen_91.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_91("DATA_1907941482");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDesc_91.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_91(391475532);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_91);
      UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDescLen_91.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_91;
      UnderlyingAdjustedQuantity_91.setString("15547974");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_91);
      UnderlyingInstrument_91.insert(UnderlyingAdjustedQuantity_91.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_91;
      UnderlyingAllocationPercent_91.setString("74.720000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_91);
      UnderlyingInstrument_91.insert(UnderlyingAllocationPercent_91.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_91;
      UnderlyingAttachmentPoint_91.setString("28.640000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_91);
      UnderlyingInstrument_91.insert(UnderlyingAttachmentPoint_91.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_91("STRING_569631563");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_91);
      UnderlyingInstrument_91.insert(UnderlyingCFICode_91.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_91("STRING_816411968");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_91);
      UnderlyingInstrument_91.insert(UnderlyingCPProgram_91.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_91("STRING_1105984134");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_91);
      UnderlyingInstrument_91.insert(UnderlyingCPRegType_91.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_91;
      UnderlyingCapValue_91.setString("8656051");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_91);
      UnderlyingInstrument_91.insert(UnderlyingCapValue_91.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_91;
      UnderlyingCashAmount_91.setString("335203");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_91);
      UnderlyingInstrument_91.insert(UnderlyingCashAmount_91.getString());
      FIX::UnderlyingCashType UnderlyingCashType_91("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_91);
      UnderlyingInstrument_91.insert(UnderlyingCashType_91.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_91;
      UnderlyingContractMultiplier_91.setString("6006236");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_91);
      UnderlyingInstrument_91.insert(UnderlyingContractMultiplier_91.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_91(649742141);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_91);
      UnderlyingInstrument_91.insert(UnderlyingContractMultiplierUnit_91.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_91("COUNTRY_1502976477");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_91);
      UnderlyingInstrument_91.insert(UnderlyingCountryOfIssue_91.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_91("LOCALMKTDATE_2093717107");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_91);
      UnderlyingInstrument_91.insert(UnderlyingCouponPaymentDate_91.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_91;
      UnderlyingCouponRate_91.setString("1.470000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_91);
      UnderlyingInstrument_91.insert(UnderlyingCouponRate_91.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_91("STRING_1943478363");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_91);
      UnderlyingInstrument_91.insert(UnderlyingCreditRating_91.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_91("EUR");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_91);
      UnderlyingInstrument_91.insert(UnderlyingCurrency_91.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_91;
      UnderlyingCurrentValue_91.setString("9898099");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_91);
      UnderlyingInstrument_91.insert(UnderlyingCurrentValue_91.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_91;
      UnderlyingDetachmentPoint_91.setString("56.760000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_91);
      UnderlyingInstrument_91.insert(UnderlyingDetachmentPoint_91.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_91;
      UnderlyingDirtyPrice_91.setString("9033711");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_91);
      UnderlyingInstrument_91.insert(UnderlyingDirtyPrice_91.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_91;
      UnderlyingEndPrice_91.setString("499687");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_91);
      UnderlyingInstrument_91.insert(UnderlyingEndPrice_91.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_91;
      UnderlyingEndValue_91.setString("9757528");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_91);
      UnderlyingInstrument_91.insert(UnderlyingEndValue_91.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_91(1779796059);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_91);
      UnderlyingInstrument_91.insert(UnderlyingExerciseStyle_91.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_91;
      UnderlyingFXRate_91.setString("4841346");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_91);
      UnderlyingInstrument_91.insert(UnderlyingFXRate_91.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_91('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_91);
      UnderlyingInstrument_91.insert(UnderlyingFXRateCalc_91.getString());
      FIX::UnderlyingFactor UnderlyingFactor_91;
      UnderlyingFactor_91.setString("13029365");
      noUnderlyings_1_1_0.set(UnderlyingFactor_91);
      UnderlyingInstrument_91.insert(UnderlyingFactor_91.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_91(2141491327);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_91);
      UnderlyingInstrument_91.insert(UnderlyingFlowScheduleType_91.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_91("STRING_473370403");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_91);
      UnderlyingInstrument_91.insert(UnderlyingInstrRegistry_91.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_91("LOCALMKTDATE_375865608");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_91);
      UnderlyingInstrument_91.insert(UnderlyingIssueDate_91.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_91("STRING_1901949161");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_91);
      UnderlyingInstrument_91.insert(UnderlyingIssuer_91.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_91("STRING_864845935");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_91);
      UnderlyingInstrument_91.insert(UnderlyingLocaleOfIssue_91.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_91("LOCALMKTDATE_1930663021");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_91);
      UnderlyingInstrument_91.insert(UnderlyingMaturityDate_91.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_91("MONTHYEAR_953872985");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_91);
      UnderlyingInstrument_91.insert(UnderlyingMaturityMonthYear_91.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_91("TZTIMEONLY_1516818800");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_91);
      UnderlyingInstrument_91.insert(UnderlyingMaturityTime_91.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_91;
      UnderlyingNotionalPercentageOutstanding_91.setString("9.370000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_91);
      UnderlyingInstrument_91.insert(UnderlyingNotionalPercentageOutstanding_91.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_91('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_91);
      UnderlyingInstrument_91.insert(UnderlyingOptAttribute_91.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_91;
      UnderlyingOriginalNotionalPercentageOutstanding_91.setString("92.860000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_91);
      UnderlyingInstrument_91.insert(UnderlyingOriginalNotionalPercentageOutstanding_91.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_91("STRING_1218416128");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_91);
      UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasure_91.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_91;
      UnderlyingPriceUnitOfMeasureQty_91.setString("18038052");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_91);
      UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasureQty_91.getString());
      FIX::UnderlyingProduct UnderlyingProduct_91(2136701509);
      noUnderlyings_1_1_0.set(UnderlyingProduct_91);
      UnderlyingInstrument_91.insert(UnderlyingProduct_91.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_91(1819039807);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_91);
      UnderlyingInstrument_91.insert(UnderlyingPutOrCall_91.getString());
      FIX::UnderlyingPx UnderlyingPx_91;
      UnderlyingPx_91.setString("3060637");
      noUnderlyings_1_1_0.set(UnderlyingPx_91);
      UnderlyingInstrument_91.insert(UnderlyingPx_91.getString());
      FIX::UnderlyingQty UnderlyingQty_91;
      UnderlyingQty_91.setString("14921943");
      noUnderlyings_1_1_0.set(UnderlyingQty_91);
      UnderlyingInstrument_91.insert(UnderlyingQty_91.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_91("LOCALMKTDATE_1765273267");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_91);
      UnderlyingInstrument_91.insert(UnderlyingRedemptionDate_91.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_91("STRING_1327763912");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_91);
      UnderlyingInstrument_91.insert(UnderlyingRepoCollateralSecurityType_91.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_91;
      UnderlyingRepurchaseRate_91.setString("90.530000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_91);
      UnderlyingInstrument_91.insert(UnderlyingRepurchaseRate_91.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_91(526962211);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_91);
      UnderlyingInstrument_91.insert(UnderlyingRepurchaseTerm_91.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_91("STRING_764732804");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_91);
      UnderlyingInstrument_91.insert(UnderlyingRestructuringType_91.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_91("STRING_130515320");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityDesc_91.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_91("EXCHANGE_2009907887");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityExchange_91.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_91("STRING_1668103959");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityID_91.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_91("STRING_180484048");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityIDSource_91.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_91("STRING_838177134");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_91);
      UnderlyingInstrument_91.insert(UnderlyingSecuritySubType_91.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_91("STRING_1300416370");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_91);
      UnderlyingInstrument_91.insert(UnderlyingSecurityType_91.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_91("STRING_664618733");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_91);
      UnderlyingInstrument_91.insert(UnderlyingSeniority_91.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_91("STRING_1631279549");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_91);
      UnderlyingInstrument_91.insert(UnderlyingSettlMethod_91.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_91(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_91);
      UnderlyingInstrument_91.insert(UnderlyingSettlementType_91.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_91;
      UnderlyingStartValue_91.setString("6586264");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_91);
      UnderlyingInstrument_91.insert(UnderlyingStartValue_91.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_91("STRING_2104649952");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_91);
      UnderlyingInstrument_91.insert(UnderlyingStateOrProvinceOfIssue_91.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_91("EUR");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_91);
      UnderlyingInstrument_91.insert(UnderlyingStrikeCurrency_91.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_91;
      UnderlyingStrikePrice_91.setString("8220122");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_91);
      UnderlyingInstrument_91.insert(UnderlyingStrikePrice_91.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_91("STRING_614914219");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_91);
      UnderlyingInstrument_91.insert(UnderlyingSymbol_91.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_91("STRING_1366964911");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_91);
      UnderlyingInstrument_91.insert(UnderlyingSymbolSfx_91.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_91("STRING_191347392");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_91);
      UnderlyingInstrument_91.insert(UnderlyingTimeUnit_91.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_91("STRING_967725156");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_91);
      UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasure_91.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_91;
      UnderlyingUnitOfMeasureQty_91.setString("9897662");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_91);
      UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasureQty_91.getString());
      all_values.push_back(UnderlyingInstrument_91);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_183;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_183("STRING_38657636");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_183);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltID_183.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_183("STRING_646087841");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_183);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltIDSource_183.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_173;
        FIX::UnderlyingStipType UnderlyingStipType_173("STRING_1857697444");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_173);
        UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipType_173.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_173("STRING_952151606");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_173);
        UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipValue_173.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_173);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_174;
        FIX::UnderlyingStipType UnderlyingStipType_174("STRING_595229");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_174);
        UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipType_174.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_174("STRING_1475487063");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_174);
        UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipValue_174.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_174);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_175;
        FIX::UnderlyingStipType UnderlyingStipType_175("STRING_132431870");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_175);
        UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipType_175.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_175("STRING_1288784283");
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
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_187;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_187("STRING_897164674");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyID_187.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_187('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyIDSource_187.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_187(1864873514);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyRole_187.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_187);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_367("STRING_1599783651");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_367);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubID_367.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_367(555567000);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_367);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubIDType_367.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_368("STRING_1718201355");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_368);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubID_368.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_368(116918737);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_368);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubIDType_368.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_369("STRING_39362901");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_369);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubID_369.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_369(26586945);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_369);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubIDType_369.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_188;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_188("STRING_775545149");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyID_188.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_188('2');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyIDSource_188.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_188(858321791);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyRole_188.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_188);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_370("STRING_818541446");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubID_370.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_370(1473236010);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubIDType_370.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_371("STRING_408118338");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubID_371.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_371(1009888838);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubIDType_371.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_92;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_92("DATA_293477519");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingIssuer_92.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_92(1397884555);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingIssuerLen_92.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_92("DATA_1676555516");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDesc_92.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_92(332135155);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_92);
      UnderlyingInstrument_92.insert(EncodedUnderlyingSecurityDescLen_92.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_92;
      UnderlyingAdjustedQuantity_92.setString("20439723");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_92);
      UnderlyingInstrument_92.insert(UnderlyingAdjustedQuantity_92.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_92;
      UnderlyingAllocationPercent_92.setString("64.080000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_92);
      UnderlyingInstrument_92.insert(UnderlyingAllocationPercent_92.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_92;
      UnderlyingAttachmentPoint_92.setString("89.510000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_92);
      UnderlyingInstrument_92.insert(UnderlyingAttachmentPoint_92.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_92("STRING_848640354");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_92);
      UnderlyingInstrument_92.insert(UnderlyingCFICode_92.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_92("STRING_185551637");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_92);
      UnderlyingInstrument_92.insert(UnderlyingCPProgram_92.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_92("STRING_1517836014");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_92);
      UnderlyingInstrument_92.insert(UnderlyingCPRegType_92.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_92;
      UnderlyingCapValue_92.setString("9810722");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_92);
      UnderlyingInstrument_92.insert(UnderlyingCapValue_92.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_92;
      UnderlyingCashAmount_92.setString("14743359");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_92);
      UnderlyingInstrument_92.insert(UnderlyingCashAmount_92.getString());
      FIX::UnderlyingCashType UnderlyingCashType_92("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_92);
      UnderlyingInstrument_92.insert(UnderlyingCashType_92.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_92;
      UnderlyingContractMultiplier_92.setString("18782368");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_92);
      UnderlyingInstrument_92.insert(UnderlyingContractMultiplier_92.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_92(746151876);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_92);
      UnderlyingInstrument_92.insert(UnderlyingContractMultiplierUnit_92.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_92("COUNTRY_1090191507");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingCountryOfIssue_92.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_92("LOCALMKTDATE_148538236");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_92);
      UnderlyingInstrument_92.insert(UnderlyingCouponPaymentDate_92.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_92;
      UnderlyingCouponRate_92.setString("18.790000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_92);
      UnderlyingInstrument_92.insert(UnderlyingCouponRate_92.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_92("STRING_1645758507");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_92);
      UnderlyingInstrument_92.insert(UnderlyingCreditRating_92.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_92("GBP");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_92);
      UnderlyingInstrument_92.insert(UnderlyingCurrency_92.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_92;
      UnderlyingCurrentValue_92.setString("16851214");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_92);
      UnderlyingInstrument_92.insert(UnderlyingCurrentValue_92.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_92;
      UnderlyingDetachmentPoint_92.setString("65.370000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_92);
      UnderlyingInstrument_92.insert(UnderlyingDetachmentPoint_92.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_92;
      UnderlyingDirtyPrice_92.setString("10909157");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_92);
      UnderlyingInstrument_92.insert(UnderlyingDirtyPrice_92.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_92;
      UnderlyingEndPrice_92.setString("16816506");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_92);
      UnderlyingInstrument_92.insert(UnderlyingEndPrice_92.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_92;
      UnderlyingEndValue_92.setString("6041646");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_92);
      UnderlyingInstrument_92.insert(UnderlyingEndValue_92.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_92(132069193);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_92);
      UnderlyingInstrument_92.insert(UnderlyingExerciseStyle_92.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_92;
      UnderlyingFXRate_92.setString("3527084");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_92);
      UnderlyingInstrument_92.insert(UnderlyingFXRate_92.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_92('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_92);
      UnderlyingInstrument_92.insert(UnderlyingFXRateCalc_92.getString());
      FIX::UnderlyingFactor UnderlyingFactor_92;
      UnderlyingFactor_92.setString("5401875");
      noUnderlyings_1_1_1.set(UnderlyingFactor_92);
      UnderlyingInstrument_92.insert(UnderlyingFactor_92.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_92(1362597251);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_92);
      UnderlyingInstrument_92.insert(UnderlyingFlowScheduleType_92.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_92("STRING_223394561");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_92);
      UnderlyingInstrument_92.insert(UnderlyingInstrRegistry_92.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_92("LOCALMKTDATE_1938072086");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_92);
      UnderlyingInstrument_92.insert(UnderlyingIssueDate_92.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_92("STRING_891669119");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_92);
      UnderlyingInstrument_92.insert(UnderlyingIssuer_92.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_92("STRING_555529717");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingLocaleOfIssue_92.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_92("LOCALMKTDATE_1834560834");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityDate_92.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_92("MONTHYEAR_1076625527");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityMonthYear_92.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_92("TZTIMEONLY_597878668");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_92);
      UnderlyingInstrument_92.insert(UnderlyingMaturityTime_92.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_92;
      UnderlyingNotionalPercentageOutstanding_92.setString("75.400000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_92);
      UnderlyingInstrument_92.insert(UnderlyingNotionalPercentageOutstanding_92.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_92('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_92);
      UnderlyingInstrument_92.insert(UnderlyingOptAttribute_92.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_92;
      UnderlyingOriginalNotionalPercentageOutstanding_92.setString("46.830000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_92);
      UnderlyingInstrument_92.insert(UnderlyingOriginalNotionalPercentageOutstanding_92.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_92("STRING_1516789764");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_92);
      UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasure_92.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_92;
      UnderlyingPriceUnitOfMeasureQty_92.setString("5890294");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_92);
      UnderlyingInstrument_92.insert(UnderlyingPriceUnitOfMeasureQty_92.getString());
      FIX::UnderlyingProduct UnderlyingProduct_92(1341032676);
      noUnderlyings_1_1_1.set(UnderlyingProduct_92);
      UnderlyingInstrument_92.insert(UnderlyingProduct_92.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_92(1247543015);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_92);
      UnderlyingInstrument_92.insert(UnderlyingPutOrCall_92.getString());
      FIX::UnderlyingPx UnderlyingPx_92;
      UnderlyingPx_92.setString("13351813");
      noUnderlyings_1_1_1.set(UnderlyingPx_92);
      UnderlyingInstrument_92.insert(UnderlyingPx_92.getString());
      FIX::UnderlyingQty UnderlyingQty_92;
      UnderlyingQty_92.setString("2837405");
      noUnderlyings_1_1_1.set(UnderlyingQty_92);
      UnderlyingInstrument_92.insert(UnderlyingQty_92.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_92("LOCALMKTDATE_1396081252");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_92);
      UnderlyingInstrument_92.insert(UnderlyingRedemptionDate_92.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_92("STRING_1533633193");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_92);
      UnderlyingInstrument_92.insert(UnderlyingRepoCollateralSecurityType_92.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_92;
      UnderlyingRepurchaseRate_92.setString("90.420000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_92);
      UnderlyingInstrument_92.insert(UnderlyingRepurchaseRate_92.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_92(1115337196);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_92);
      UnderlyingInstrument_92.insert(UnderlyingRepurchaseTerm_92.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_92("STRING_1849003809");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_92);
      UnderlyingInstrument_92.insert(UnderlyingRestructuringType_92.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_92("STRING_1467136803");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityDesc_92.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_92("EXCHANGE_861180085");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityExchange_92.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_92("STRING_792435927");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityID_92.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_92("STRING_1001303770");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityIDSource_92.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_92("STRING_1465344765");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_92);
      UnderlyingInstrument_92.insert(UnderlyingSecuritySubType_92.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_92("STRING_924505120");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_92);
      UnderlyingInstrument_92.insert(UnderlyingSecurityType_92.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_92("STRING_1354012183");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_92);
      UnderlyingInstrument_92.insert(UnderlyingSeniority_92.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_92("STRING_1395261807");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_92);
      UnderlyingInstrument_92.insert(UnderlyingSettlMethod_92.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_92(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_92);
      UnderlyingInstrument_92.insert(UnderlyingSettlementType_92.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_92;
      UnderlyingStartValue_92.setString("5691257");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_92);
      UnderlyingInstrument_92.insert(UnderlyingStartValue_92.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_92("STRING_1618656369");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_92);
      UnderlyingInstrument_92.insert(UnderlyingStateOrProvinceOfIssue_92.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_92("JPY");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_92);
      UnderlyingInstrument_92.insert(UnderlyingStrikeCurrency_92.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_92;
      UnderlyingStrikePrice_92.setString("267024");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_92);
      UnderlyingInstrument_92.insert(UnderlyingStrikePrice_92.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_92("STRING_942358275");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_92);
      UnderlyingInstrument_92.insert(UnderlyingSymbol_92.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_92("STRING_389936785");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_92);
      UnderlyingInstrument_92.insert(UnderlyingSymbolSfx_92.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_92("STRING_624581106");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_92);
      UnderlyingInstrument_92.insert(UnderlyingTimeUnit_92.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_92("STRING_1478075815");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_92);
      UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasure_92.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_92;
      UnderlyingUnitOfMeasureQty_92.setString("16521139");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_92);
      UnderlyingInstrument_92.insert(UnderlyingUnitOfMeasureQty_92.getString());
      all_values.push_back(UnderlyingInstrument_92);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_184;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_184("STRING_847381932");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_184);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltID_184.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_184("STRING_93659740");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_184);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltIDSource_184.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_176;
        FIX::UnderlyingStipType UnderlyingStipType_176("STRING_2094924947");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_176);
        UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipType_176.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_176("STRING_1428841053");
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
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_189;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_189("STRING_1343522551");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyID_189.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_189('8');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyIDSource_189.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_189(1999600747);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyRole_189.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_189);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_372("STRING_516510760");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubID_372.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_372(1319253902);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubIDType_372.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_190;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_190("STRING_1172556184");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_190);
        UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyID_190.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_190('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_190);
        UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyIDSource_190.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_190(173074025);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_190);
        UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyRole_190.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_190);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_373("STRING_85968160");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubID_373.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_373(1527086208);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubIDType_373.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_374("STRING_1885679109");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubID_374.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_374(1550660811);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubIDType_374.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_375("STRING_2096211995");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubID_375.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_375(1356851830);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubIDType_375.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_191;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_191("STRING_658458253");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_191);
        UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyID_191.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_191('1');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_191);
        UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyIDSource_191.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_191(1383554268);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_191);
        UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyRole_191.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_191);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_376("STRING_1799460038");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubID_376.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_376(2008135374);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubIDType_376.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_377("STRING_931408696");
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubID_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubID_377.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_377(1304090341);
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubIDType_377.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_93;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_93("DATA_453463868");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingIssuer_93.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_93(1778790628);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingIssuerLen_93.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_93("DATA_1397750081");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDesc_93.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_93(239825037);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDescLen_93.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_93;
      UnderlyingAdjustedQuantity_93.setString("17262319");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_93);
      UnderlyingInstrument_93.insert(UnderlyingAdjustedQuantity_93.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_93;
      UnderlyingAllocationPercent_93.setString("74.860000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_93);
      UnderlyingInstrument_93.insert(UnderlyingAllocationPercent_93.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_93;
      UnderlyingAttachmentPoint_93.setString("67.420000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_93);
      UnderlyingInstrument_93.insert(UnderlyingAttachmentPoint_93.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_93("STRING_922270831");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_93);
      UnderlyingInstrument_93.insert(UnderlyingCFICode_93.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_93("STRING_1494098085");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_93);
      UnderlyingInstrument_93.insert(UnderlyingCPProgram_93.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_93("STRING_162043841");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_93);
      UnderlyingInstrument_93.insert(UnderlyingCPRegType_93.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_93;
      UnderlyingCapValue_93.setString("12336469");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_93);
      UnderlyingInstrument_93.insert(UnderlyingCapValue_93.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_93;
      UnderlyingCashAmount_93.setString("20106088");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_93);
      UnderlyingInstrument_93.insert(UnderlyingCashAmount_93.getString());
      FIX::UnderlyingCashType UnderlyingCashType_93("STRING_DIFF");
      noUnderlyings_1_1_2.set(UnderlyingCashType_93);
      UnderlyingInstrument_93.insert(UnderlyingCashType_93.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_93;
      UnderlyingContractMultiplier_93.setString("2587194");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_93);
      UnderlyingInstrument_93.insert(UnderlyingContractMultiplier_93.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_93(1172071884);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_93);
      UnderlyingInstrument_93.insert(UnderlyingContractMultiplierUnit_93.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_93("COUNTRY_1654371768");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingCountryOfIssue_93.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_93("LOCALMKTDATE_749136768");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_93);
      UnderlyingInstrument_93.insert(UnderlyingCouponPaymentDate_93.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_93;
      UnderlyingCouponRate_93.setString("0.440000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_93);
      UnderlyingInstrument_93.insert(UnderlyingCouponRate_93.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_93("STRING_1033974329");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_93);
      UnderlyingInstrument_93.insert(UnderlyingCreditRating_93.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_93("USD");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_93);
      UnderlyingInstrument_93.insert(UnderlyingCurrency_93.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_93;
      UnderlyingCurrentValue_93.setString("9827026");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_93);
      UnderlyingInstrument_93.insert(UnderlyingCurrentValue_93.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_93;
      UnderlyingDetachmentPoint_93.setString("40.590000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_93);
      UnderlyingInstrument_93.insert(UnderlyingDetachmentPoint_93.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_93;
      UnderlyingDirtyPrice_93.setString("13196754");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_93);
      UnderlyingInstrument_93.insert(UnderlyingDirtyPrice_93.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_93;
      UnderlyingEndPrice_93.setString("2447422");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_93);
      UnderlyingInstrument_93.insert(UnderlyingEndPrice_93.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_93;
      UnderlyingEndValue_93.setString("10802546");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_93);
      UnderlyingInstrument_93.insert(UnderlyingEndValue_93.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_93(773008341);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_93);
      UnderlyingInstrument_93.insert(UnderlyingExerciseStyle_93.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_93;
      UnderlyingFXRate_93.setString("20442023");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_93);
      UnderlyingInstrument_93.insert(UnderlyingFXRate_93.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_93('D');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_93);
      UnderlyingInstrument_93.insert(UnderlyingFXRateCalc_93.getString());
      FIX::UnderlyingFactor UnderlyingFactor_93;
      UnderlyingFactor_93.setString("17044170");
      noUnderlyings_1_1_2.set(UnderlyingFactor_93);
      UnderlyingInstrument_93.insert(UnderlyingFactor_93.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_93(1200809012);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_93);
      UnderlyingInstrument_93.insert(UnderlyingFlowScheduleType_93.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_93("STRING_1394370274");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_93);
      UnderlyingInstrument_93.insert(UnderlyingInstrRegistry_93.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_93("LOCALMKTDATE_1335724017");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_93);
      UnderlyingInstrument_93.insert(UnderlyingIssueDate_93.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_93("STRING_451075445");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_93);
      UnderlyingInstrument_93.insert(UnderlyingIssuer_93.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_93("STRING_1634195311");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingLocaleOfIssue_93.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_93("LOCALMKTDATE_914472297");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityDate_93.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_93("MONTHYEAR_1130182932");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityMonthYear_93.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_93("TZTIMEONLY_1944122053");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityTime_93.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_93;
      UnderlyingNotionalPercentageOutstanding_93.setString("31.280000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_93);
      UnderlyingInstrument_93.insert(UnderlyingNotionalPercentageOutstanding_93.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_93('4');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_93);
      UnderlyingInstrument_93.insert(UnderlyingOptAttribute_93.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_93;
      UnderlyingOriginalNotionalPercentageOutstanding_93.setString("58.940000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_93);
      UnderlyingInstrument_93.insert(UnderlyingOriginalNotionalPercentageOutstanding_93.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_93("STRING_922906410");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_93);
      UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasure_93.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_93;
      UnderlyingPriceUnitOfMeasureQty_93.setString("3399225");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_93);
      UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasureQty_93.getString());
      FIX::UnderlyingProduct UnderlyingProduct_93(1439979990);
      noUnderlyings_1_1_2.set(UnderlyingProduct_93);
      UnderlyingInstrument_93.insert(UnderlyingProduct_93.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_93(1181625877);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_93);
      UnderlyingInstrument_93.insert(UnderlyingPutOrCall_93.getString());
      FIX::UnderlyingPx UnderlyingPx_93;
      UnderlyingPx_93.setString("15119944");
      noUnderlyings_1_1_2.set(UnderlyingPx_93);
      UnderlyingInstrument_93.insert(UnderlyingPx_93.getString());
      FIX::UnderlyingQty UnderlyingQty_93;
      UnderlyingQty_93.setString("9468681");
      noUnderlyings_1_1_2.set(UnderlyingQty_93);
      UnderlyingInstrument_93.insert(UnderlyingQty_93.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_93("LOCALMKTDATE_1930762646");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_93);
      UnderlyingInstrument_93.insert(UnderlyingRedemptionDate_93.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_93("STRING_622550847");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_93);
      UnderlyingInstrument_93.insert(UnderlyingRepoCollateralSecurityType_93.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_93;
      UnderlyingRepurchaseRate_93.setString("24.390000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_93);
      UnderlyingInstrument_93.insert(UnderlyingRepurchaseRate_93.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_93(270611227);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_93);
      UnderlyingInstrument_93.insert(UnderlyingRepurchaseTerm_93.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_93("STRING_1283768055");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_93);
      UnderlyingInstrument_93.insert(UnderlyingRestructuringType_93.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_93("STRING_816061467");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityDesc_93.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_93("EXCHANGE_2114795287");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityExchange_93.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_93("STRING_455959868");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityID_93.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_93("STRING_1060803748");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityIDSource_93.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_93("STRING_1047566318");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_93);
      UnderlyingInstrument_93.insert(UnderlyingSecuritySubType_93.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_93("STRING_1228968209");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityType_93.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_93("STRING_957522420");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_93);
      UnderlyingInstrument_93.insert(UnderlyingSeniority_93.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_93("STRING_1988472724");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_93);
      UnderlyingInstrument_93.insert(UnderlyingSettlMethod_93.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_93(5);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_93);
      UnderlyingInstrument_93.insert(UnderlyingSettlementType_93.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_93;
      UnderlyingStartValue_93.setString("108477");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_93);
      UnderlyingInstrument_93.insert(UnderlyingStartValue_93.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_93("STRING_1235359350");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingStateOrProvinceOfIssue_93.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_93("USD");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_93);
      UnderlyingInstrument_93.insert(UnderlyingStrikeCurrency_93.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_93;
      UnderlyingStrikePrice_93.setString("7220710");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_93);
      UnderlyingInstrument_93.insert(UnderlyingStrikePrice_93.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_93("STRING_888614265");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_93);
      UnderlyingInstrument_93.insert(UnderlyingSymbol_93.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_93("STRING_1592106162");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_93);
      UnderlyingInstrument_93.insert(UnderlyingSymbolSfx_93.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_93("STRING_518709419");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_93);
      UnderlyingInstrument_93.insert(UnderlyingTimeUnit_93.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_93("STRING_577873745");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_93);
      UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasure_93.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_93;
      UnderlyingUnitOfMeasureQty_93.setString("20689035");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_93);
      UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasureQty_93.getString());
      all_values.push_back(UnderlyingInstrument_93);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_185;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_185("STRING_1500780156");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_185);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltID_185.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_185("STRING_261342449");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_185);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltIDSource_185.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_186;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_186("STRING_1917371656");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_186);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltID_186.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_186("STRING_534922385");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_186);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltIDSource_186.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_177;
        FIX::UnderlyingStipType UnderlyingStipType_177("STRING_716756118");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_177);
        UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipType_177.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_177("STRING_318201383");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_177);
        UnderlyingStipulations_NoUnderlyingStips_177.insert(UnderlyingStipValue_177.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_177);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_178;
        FIX::UnderlyingStipType UnderlyingStipType_178("STRING_248404098");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipType_178);
        UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipType_178.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_178("STRING_550114910");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipValue_178);
        UnderlyingStipulations_NoUnderlyingStips_178.insert(UnderlyingStipValue_178.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_178);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_179;
        FIX::UnderlyingStipType UnderlyingStipType_179("STRING_588812611");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipType_179);
        UnderlyingStipulations_NoUnderlyingStips_179.insert(UnderlyingStipType_179.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_179("STRING_1532172153");
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
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_192;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_192("STRING_556124250");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_192);
        UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyID_192.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_192('1');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_192);
        UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyIDSource_192.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_192(279496478);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_192);
        UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyRole_192.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_192);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_378("STRING_1069616583");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubID_378.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_378(1237018898);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubIDType_378.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_379("STRING_1444679645");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_379);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubID_379.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_379(1855518182);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_379);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubIDType_379.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_380("STRING_1247866682");
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubID_380);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubID_380.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_380(532555347);
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubIDType_380);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubIDType_380.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_193;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_193("STRING_1829660150");
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyID_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyID_193.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_193('1');
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyIDSource_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyIDSource_193.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_193(1254626361);
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyRole_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyRole_193.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_193);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_381("STRING_1154412426");
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubID_381);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubID_381.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_381(1773335781);
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_381);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubIDType_381.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_382("STRING_1148664513");
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubID_382);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubID_382.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_382(1075832309);
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_382);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubIDType_382.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_194;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_194("STRING_103243799");
        noUndlyInstrumentParties_1_2_2_2.set(UnderlyingInstrumentPartyID_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyID_194.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_194('5');
        noUndlyInstrumentParties_1_2_2_2.set(UnderlyingInstrumentPartyIDSource_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyIDSource_194.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_194(1337174758);
        noUndlyInstrumentParties_1_2_2_2.set(UnderlyingInstrumentPartyRole_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyRole_194.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_194);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_383("STRING_1036883407");
          noUndlyInstrumentPartySubIDs_1_2_2_3_0.set(UnderlyingInstrumentPartySubID_383);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubID_383.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_383(963028010);
          noUndlyInstrumentPartySubIDs_1_2_2_3_0.set(UnderlyingInstrumentPartySubIDType_383);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubIDType_383.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_2);
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
    multiset<string> TargetParties_NoTargetPartyIDs_14;
    FIX::TargetPartyID TargetPartyID_14("STRING_1355084790");
    noTargetPartyIDs_0_0.set(TargetPartyID_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyID_14.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_14('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyIDSource_14.getString());
    FIX::TargetPartyRole TargetPartyRole_14(1140002835);
    noTargetPartyIDs_0_0.set(TargetPartyRole_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyRole_14.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_14);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_15;
    FIX::TargetPartyID TargetPartyID_15("STRING_1943897401");
    noTargetPartyIDs_0_1.set(TargetPartyID_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyID_15.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_15('5');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyIDSource_15.getString());
    FIX::TargetPartyRole TargetPartyRole_15(358695565);
    noTargetPartyIDs_0_1.set(TargetPartyRole_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyRole_15.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_15);

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
