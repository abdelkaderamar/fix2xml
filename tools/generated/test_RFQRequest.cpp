#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RFQRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RFQRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RFQRequest msg;

  list<multiset<string>> all_values;
  multiset<string> RFQRequest_0;
  FIX::PrivateQuote PrivateQuote_3(true);
  msg.set(PrivateQuote_3);
  RFQRequest_0.insert(PrivateQuote_3.getString());
  FIX::RFQReqID RFQReqID_2("STRING_1088670807");
  msg.set(RFQReqID_2);
  RFQRequest_0.insert(RFQReqID_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_6('2');
  msg.set(SubscriptionRequestType_6);
  RFQRequest_0.insert(SubscriptionRequestType_6.getString());
  all_values.push_back(RFQRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_114;
    FIX::PartyID PartyID_114("STRING_435367771");
    noPartyIDs_0_0.set(PartyID_114);
    Parties_NoPartyIDs_114.insert(PartyID_114.getString());
    FIX::PartyIDSource PartyIDSource_114('A');
    noPartyIDs_0_0.set(PartyIDSource_114);
    Parties_NoPartyIDs_114.insert(PartyIDSource_114.getString());
    FIX::PartyRole PartyRole_114(52);
    noPartyIDs_0_0.set(PartyRole_114);
    Parties_NoPartyIDs_114.insert(PartyRole_114.getString());
    all_values.push_back(Parties_NoPartyIDs_114);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_237;
      FIX::PartySubID PartySubID_237("STRING_1634138804");
      noPartySubIDs_0_1_0.set(PartySubID_237);
      PtysSubGrp_NoPartySubIDs_237.insert(PartySubID_237.getString());
      FIX::PartySubIDType PartySubIDType_237(9);
      noPartySubIDs_0_1_0.set(PartySubIDType_237);
      PtysSubGrp_NoPartySubIDs_237.insert(PartySubIDType_237.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_237);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_115;
    FIX::PartyID PartyID_115("STRING_2117298050");
    noPartyIDs_0_1.set(PartyID_115);
    Parties_NoPartyIDs_115.insert(PartyID_115.getString());
    FIX::PartyIDSource PartyIDSource_115('D');
    noPartyIDs_0_1.set(PartyIDSource_115);
    Parties_NoPartyIDs_115.insert(PartyIDSource_115.getString());
    FIX::PartyRole PartyRole_115(75);
    noPartyIDs_0_1.set(PartyRole_115);
    Parties_NoPartyIDs_115.insert(PartyRole_115.getString());
    all_values.push_back(Parties_NoPartyIDs_115);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_238;
      FIX::PartySubID PartySubID_238("STRING_1308574222");
      noPartySubIDs_1_1_0.set(PartySubID_238);
      PtysSubGrp_NoPartySubIDs_238.insert(PartySubID_238.getString());
      FIX::PartySubIDType PartySubIDType_238(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_238);
      PtysSubGrp_NoPartySubIDs_238.insert(PartySubIDType_238.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_238);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_239;
      FIX::PartySubID PartySubID_239("STRING_1572781722");
      noPartySubIDs_1_1_1.set(PartySubID_239);
      PtysSubGrp_NoPartySubIDs_239.insert(PartySubID_239.getString());
      FIX::PartySubIDType PartySubIDType_239(21);
      noPartySubIDs_1_1_1.set(PartySubIDType_239);
      PtysSubGrp_NoPartySubIDs_239.insert(PartySubIDType_239.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_239);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RFQReqGrp
  // Group RFQReqGrp.NoRelatedSym
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_0;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_0;
    FIX::PrevClosePx PrevClosePx_12;
    PrevClosePx_12.setString("16396284");
    noRelatedSym_0_0.set(PrevClosePx_12);
    RFQReqGrp_NoRelatedSym_0.insert(PrevClosePx_12.getString());
    FIX::QuoteRequestType QuoteRequestType_4(1);
    noRelatedSym_0_0.set(QuoteRequestType_4);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteRequestType_4.getString());
    FIX::QuoteType QuoteType_12(3);
    noRelatedSym_0_0.set(QuoteType_12);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteType_12.getString());
    FIX::TradingSessionID TradingSessionID_70("STRING_1");
    noRelatedSym_0_0.set(TradingSessionID_70);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionID_70.getString());
    FIX::TradingSessionSubID TradingSessionSubID_70("STRING_1");
    noRelatedSym_0_0.set(TradingSessionSubID_70);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_70.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_120;
      FIX::EncodedLegIssuer EncodedLegIssuer_120("DATA_87880854");
      noLegs_0_1_0.set(EncodedLegIssuer_120);
      InstrumentLeg_120.insert(EncodedLegIssuer_120.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_120(942029342);
      noLegs_0_1_0.set(EncodedLegIssuerLen_120);
      InstrumentLeg_120.insert(EncodedLegIssuerLen_120.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_120("DATA_1150314758");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_120);
      InstrumentLeg_120.insert(EncodedLegSecurityDesc_120.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_120(674597088);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_120);
      InstrumentLeg_120.insert(EncodedLegSecurityDescLen_120.getString());
      FIX::LegCFICode LegCFICode_120("STRING_1084672842");
      noLegs_0_1_0.set(LegCFICode_120);
      InstrumentLeg_120.insert(LegCFICode_120.getString());
      FIX::LegContractMultiplier LegContractMultiplier_120;
      LegContractMultiplier_120.setString("9081625");
      noLegs_0_1_0.set(LegContractMultiplier_120);
      InstrumentLeg_120.insert(LegContractMultiplier_120.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_120(1484768152);
      noLegs_0_1_0.set(LegContractMultiplierUnit_120);
      InstrumentLeg_120.insert(LegContractMultiplierUnit_120.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_120("MONTHYEAR_25860001");
      noLegs_0_1_0.set(LegContractSettlMonth_120);
      InstrumentLeg_120.insert(LegContractSettlMonth_120.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_120("COUNTRY_151052611");
      noLegs_0_1_0.set(LegCountryOfIssue_120);
      InstrumentLeg_120.insert(LegCountryOfIssue_120.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_120("LOCALMKTDATE_1134257110");
      noLegs_0_1_0.set(LegCouponPaymentDate_120);
      InstrumentLeg_120.insert(LegCouponPaymentDate_120.getString());
      FIX::LegCouponRate LegCouponRate_120;
      LegCouponRate_120.setString("77.730000");
      noLegs_0_1_0.set(LegCouponRate_120);
      InstrumentLeg_120.insert(LegCouponRate_120.getString());
      FIX::LegCreditRating LegCreditRating_120("STRING_214629822");
      noLegs_0_1_0.set(LegCreditRating_120);
      InstrumentLeg_120.insert(LegCreditRating_120.getString());
      FIX::LegCurrency LegCurrency_120("USD");
      noLegs_0_1_0.set(LegCurrency_120);
      InstrumentLeg_120.insert(LegCurrency_120.getString());
      FIX::LegDatedDate LegDatedDate_120("LOCALMKTDATE_1848768626");
      noLegs_0_1_0.set(LegDatedDate_120);
      InstrumentLeg_120.insert(LegDatedDate_120.getString());
      FIX::LegExerciseStyle LegExerciseStyle_120(401907754);
      noLegs_0_1_0.set(LegExerciseStyle_120);
      InstrumentLeg_120.insert(LegExerciseStyle_120.getString());
      FIX::LegFactor LegFactor_120;
      LegFactor_120.setString("5871471");
      noLegs_0_1_0.set(LegFactor_120);
      InstrumentLeg_120.insert(LegFactor_120.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_120(1065773875);
      noLegs_0_1_0.set(LegFlowScheduleType_120);
      InstrumentLeg_120.insert(LegFlowScheduleType_120.getString());
      FIX::LegInstrRegistry LegInstrRegistry_120("STRING_591540851");
      noLegs_0_1_0.set(LegInstrRegistry_120);
      InstrumentLeg_120.insert(LegInstrRegistry_120.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_120("LOCALMKTDATE_427064681");
      noLegs_0_1_0.set(LegInterestAccrualDate_120);
      InstrumentLeg_120.insert(LegInterestAccrualDate_120.getString());
      FIX::LegIssueDate LegIssueDate_120("LOCALMKTDATE_226864449");
      noLegs_0_1_0.set(LegIssueDate_120);
      InstrumentLeg_120.insert(LegIssueDate_120.getString());
      FIX::LegIssuer LegIssuer_120("STRING_1578446308");
      noLegs_0_1_0.set(LegIssuer_120);
      InstrumentLeg_120.insert(LegIssuer_120.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_120("STRING_1999846403");
      noLegs_0_1_0.set(LegLocaleOfIssue_120);
      InstrumentLeg_120.insert(LegLocaleOfIssue_120.getString());
      FIX::LegMaturityDate LegMaturityDate_120("LOCALMKTDATE_1828137065");
      noLegs_0_1_0.set(LegMaturityDate_120);
      InstrumentLeg_120.insert(LegMaturityDate_120.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_120("MONTHYEAR_303931217");
      noLegs_0_1_0.set(LegMaturityMonthYear_120);
      InstrumentLeg_120.insert(LegMaturityMonthYear_120.getString());
      FIX::LegMaturityTime LegMaturityTime_120("TZTIMEONLY_1491991166");
      noLegs_0_1_0.set(LegMaturityTime_120);
      InstrumentLeg_120.insert(LegMaturityTime_120.getString());
      FIX::LegOptAttribute LegOptAttribute_120('6');
      noLegs_0_1_0.set(LegOptAttribute_120);
      InstrumentLeg_120.insert(LegOptAttribute_120.getString());
      FIX::LegOptionRatio LegOptionRatio_120;
      LegOptionRatio_120.setString("9182746");
      noLegs_0_1_0.set(LegOptionRatio_120);
      InstrumentLeg_120.insert(LegOptionRatio_120.getString());
      FIX::LegPool LegPool_120("STRING_506211564");
      noLegs_0_1_0.set(LegPool_120);
      InstrumentLeg_120.insert(LegPool_120.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_120("STRING_63879298");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_120);
      InstrumentLeg_120.insert(LegPriceUnitOfMeasure_120.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_120;
      LegPriceUnitOfMeasureQty_120.setString("5854849");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_120);
      InstrumentLeg_120.insert(LegPriceUnitOfMeasureQty_120.getString());
      FIX::LegProduct LegProduct_120(594092418);
      noLegs_0_1_0.set(LegProduct_120);
      InstrumentLeg_120.insert(LegProduct_120.getString());
      FIX::LegPutOrCall LegPutOrCall_120(1005908641);
      noLegs_0_1_0.set(LegPutOrCall_120);
      InstrumentLeg_120.insert(LegPutOrCall_120.getString());
      FIX::LegRatioQty LegRatioQty_120;
      LegRatioQty_120.setString("17357997");
      noLegs_0_1_0.set(LegRatioQty_120);
      InstrumentLeg_120.insert(LegRatioQty_120.getString());
      FIX::LegRedemptionDate LegRedemptionDate_120("LOCALMKTDATE_1268689506");
      noLegs_0_1_0.set(LegRedemptionDate_120);
      InstrumentLeg_120.insert(LegRedemptionDate_120.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_120("STRING_2090581483");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_120);
      InstrumentLeg_120.insert(LegRepoCollateralSecurityType_120.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_120;
      LegRepurchaseRate_120.setString("86.370000");
      noLegs_0_1_0.set(LegRepurchaseRate_120);
      InstrumentLeg_120.insert(LegRepurchaseRate_120.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_120(605974011);
      noLegs_0_1_0.set(LegRepurchaseTerm_120);
      InstrumentLeg_120.insert(LegRepurchaseTerm_120.getString());
      FIX::LegSecurityDesc LegSecurityDesc_120("STRING_2116441485");
      noLegs_0_1_0.set(LegSecurityDesc_120);
      InstrumentLeg_120.insert(LegSecurityDesc_120.getString());
      FIX::LegSecurityExchange LegSecurityExchange_120("EXCHANGE_647531249");
      noLegs_0_1_0.set(LegSecurityExchange_120);
      InstrumentLeg_120.insert(LegSecurityExchange_120.getString());
      FIX::LegSecurityID LegSecurityID_120("STRING_1740231121");
      noLegs_0_1_0.set(LegSecurityID_120);
      InstrumentLeg_120.insert(LegSecurityID_120.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_120("STRING_430185610");
      noLegs_0_1_0.set(LegSecurityIDSource_120);
      InstrumentLeg_120.insert(LegSecurityIDSource_120.getString());
      FIX::LegSecuritySubType LegSecuritySubType_120("STRING_862161071");
      noLegs_0_1_0.set(LegSecuritySubType_120);
      InstrumentLeg_120.insert(LegSecuritySubType_120.getString());
      FIX::LegSecurityType LegSecurityType_120("STRING_608765685");
      noLegs_0_1_0.set(LegSecurityType_120);
      InstrumentLeg_120.insert(LegSecurityType_120.getString());
      FIX::LegSide LegSide_120('1');
      noLegs_0_1_0.set(LegSide_120);
      InstrumentLeg_120.insert(LegSide_120.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_120("STRING_563446049");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_120);
      InstrumentLeg_120.insert(LegStateOrProvinceOfIssue_120.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_120("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_120);
      InstrumentLeg_120.insert(LegStrikeCurrency_120.getString());
      FIX::LegStrikePrice LegStrikePrice_120;
      LegStrikePrice_120.setString("16292199");
      noLegs_0_1_0.set(LegStrikePrice_120);
      InstrumentLeg_120.insert(LegStrikePrice_120.getString());
      FIX::LegSymbol LegSymbol_120("STRING_1602214290");
      noLegs_0_1_0.set(LegSymbol_120);
      InstrumentLeg_120.insert(LegSymbol_120.getString());
      FIX::LegSymbolSfx LegSymbolSfx_120("STRING_2061730198");
      noLegs_0_1_0.set(LegSymbolSfx_120);
      InstrumentLeg_120.insert(LegSymbolSfx_120.getString());
      FIX::LegTimeUnit LegTimeUnit_120("STRING_1856084374");
      noLegs_0_1_0.set(LegTimeUnit_120);
      InstrumentLeg_120.insert(LegTimeUnit_120.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_120("STRING_1033176950");
      noLegs_0_1_0.set(LegUnitOfMeasure_120);
      InstrumentLeg_120.insert(LegUnitOfMeasure_120.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_120;
      LegUnitOfMeasureQty_120.setString("19140929");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_120);
      InstrumentLeg_120.insert(LegUnitOfMeasureQty_120.getString());
      all_values.push_back(InstrumentLeg_120);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_233;
        FIX::LegSecurityAltID LegSecurityAltID_233("STRING_1337108167");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_233);
        LegSecAltIDGrp_NoLegSecurityAltID_233.insert(LegSecurityAltID_233.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_233("STRING_1258600471");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_233);
        LegSecAltIDGrp_NoLegSecurityAltID_233.insert(LegSecurityAltIDSource_233.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_233);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_234;
        FIX::LegSecurityAltID LegSecurityAltID_234("STRING_2139810131");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_234);
        LegSecAltIDGrp_NoLegSecurityAltID_234.insert(LegSecurityAltID_234.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_234("STRING_107899175");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_234);
        LegSecAltIDGrp_NoLegSecurityAltID_234.insert(LegSecurityAltIDSource_234.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_234);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_121;
      FIX::EncodedLegIssuer EncodedLegIssuer_121("DATA_1764812035");
      noLegs_0_1_1.set(EncodedLegIssuer_121);
      InstrumentLeg_121.insert(EncodedLegIssuer_121.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_121(56205781);
      noLegs_0_1_1.set(EncodedLegIssuerLen_121);
      InstrumentLeg_121.insert(EncodedLegIssuerLen_121.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_121("DATA_693384118");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_121);
      InstrumentLeg_121.insert(EncodedLegSecurityDesc_121.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_121(211420805);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_121);
      InstrumentLeg_121.insert(EncodedLegSecurityDescLen_121.getString());
      FIX::LegCFICode LegCFICode_121("STRING_1062114422");
      noLegs_0_1_1.set(LegCFICode_121);
      InstrumentLeg_121.insert(LegCFICode_121.getString());
      FIX::LegContractMultiplier LegContractMultiplier_121;
      LegContractMultiplier_121.setString("2817001");
      noLegs_0_1_1.set(LegContractMultiplier_121);
      InstrumentLeg_121.insert(LegContractMultiplier_121.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_121(1480110312);
      noLegs_0_1_1.set(LegContractMultiplierUnit_121);
      InstrumentLeg_121.insert(LegContractMultiplierUnit_121.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_121("MONTHYEAR_1005212258");
      noLegs_0_1_1.set(LegContractSettlMonth_121);
      InstrumentLeg_121.insert(LegContractSettlMonth_121.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_121("COUNTRY_778178809");
      noLegs_0_1_1.set(LegCountryOfIssue_121);
      InstrumentLeg_121.insert(LegCountryOfIssue_121.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_121("LOCALMKTDATE_2086084323");
      noLegs_0_1_1.set(LegCouponPaymentDate_121);
      InstrumentLeg_121.insert(LegCouponPaymentDate_121.getString());
      FIX::LegCouponRate LegCouponRate_121;
      LegCouponRate_121.setString("0.950000");
      noLegs_0_1_1.set(LegCouponRate_121);
      InstrumentLeg_121.insert(LegCouponRate_121.getString());
      FIX::LegCreditRating LegCreditRating_121("STRING_1425710058");
      noLegs_0_1_1.set(LegCreditRating_121);
      InstrumentLeg_121.insert(LegCreditRating_121.getString());
      FIX::LegCurrency LegCurrency_121("EUR");
      noLegs_0_1_1.set(LegCurrency_121);
      InstrumentLeg_121.insert(LegCurrency_121.getString());
      FIX::LegDatedDate LegDatedDate_121("LOCALMKTDATE_140387481");
      noLegs_0_1_1.set(LegDatedDate_121);
      InstrumentLeg_121.insert(LegDatedDate_121.getString());
      FIX::LegExerciseStyle LegExerciseStyle_121(140113833);
      noLegs_0_1_1.set(LegExerciseStyle_121);
      InstrumentLeg_121.insert(LegExerciseStyle_121.getString());
      FIX::LegFactor LegFactor_121;
      LegFactor_121.setString("3043904");
      noLegs_0_1_1.set(LegFactor_121);
      InstrumentLeg_121.insert(LegFactor_121.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_121(703833530);
      noLegs_0_1_1.set(LegFlowScheduleType_121);
      InstrumentLeg_121.insert(LegFlowScheduleType_121.getString());
      FIX::LegInstrRegistry LegInstrRegistry_121("STRING_1150787272");
      noLegs_0_1_1.set(LegInstrRegistry_121);
      InstrumentLeg_121.insert(LegInstrRegistry_121.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_121("LOCALMKTDATE_1939055935");
      noLegs_0_1_1.set(LegInterestAccrualDate_121);
      InstrumentLeg_121.insert(LegInterestAccrualDate_121.getString());
      FIX::LegIssueDate LegIssueDate_121("LOCALMKTDATE_185569806");
      noLegs_0_1_1.set(LegIssueDate_121);
      InstrumentLeg_121.insert(LegIssueDate_121.getString());
      FIX::LegIssuer LegIssuer_121("STRING_605517914");
      noLegs_0_1_1.set(LegIssuer_121);
      InstrumentLeg_121.insert(LegIssuer_121.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_121("STRING_1853302485");
      noLegs_0_1_1.set(LegLocaleOfIssue_121);
      InstrumentLeg_121.insert(LegLocaleOfIssue_121.getString());
      FIX::LegMaturityDate LegMaturityDate_121("LOCALMKTDATE_2041654180");
      noLegs_0_1_1.set(LegMaturityDate_121);
      InstrumentLeg_121.insert(LegMaturityDate_121.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_121("MONTHYEAR_1638694864");
      noLegs_0_1_1.set(LegMaturityMonthYear_121);
      InstrumentLeg_121.insert(LegMaturityMonthYear_121.getString());
      FIX::LegMaturityTime LegMaturityTime_121("TZTIMEONLY_1619911791");
      noLegs_0_1_1.set(LegMaturityTime_121);
      InstrumentLeg_121.insert(LegMaturityTime_121.getString());
      FIX::LegOptAttribute LegOptAttribute_121('1');
      noLegs_0_1_1.set(LegOptAttribute_121);
      InstrumentLeg_121.insert(LegOptAttribute_121.getString());
      FIX::LegOptionRatio LegOptionRatio_121;
      LegOptionRatio_121.setString("8283193");
      noLegs_0_1_1.set(LegOptionRatio_121);
      InstrumentLeg_121.insert(LegOptionRatio_121.getString());
      FIX::LegPool LegPool_121("STRING_731028614");
      noLegs_0_1_1.set(LegPool_121);
      InstrumentLeg_121.insert(LegPool_121.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_121("STRING_1423234807");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_121);
      InstrumentLeg_121.insert(LegPriceUnitOfMeasure_121.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_121;
      LegPriceUnitOfMeasureQty_121.setString("9362185");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_121);
      InstrumentLeg_121.insert(LegPriceUnitOfMeasureQty_121.getString());
      FIX::LegProduct LegProduct_121(348357002);
      noLegs_0_1_1.set(LegProduct_121);
      InstrumentLeg_121.insert(LegProduct_121.getString());
      FIX::LegPutOrCall LegPutOrCall_121(1479440588);
      noLegs_0_1_1.set(LegPutOrCall_121);
      InstrumentLeg_121.insert(LegPutOrCall_121.getString());
      FIX::LegRatioQty LegRatioQty_121;
      LegRatioQty_121.setString("16296026");
      noLegs_0_1_1.set(LegRatioQty_121);
      InstrumentLeg_121.insert(LegRatioQty_121.getString());
      FIX::LegRedemptionDate LegRedemptionDate_121("LOCALMKTDATE_559777807");
      noLegs_0_1_1.set(LegRedemptionDate_121);
      InstrumentLeg_121.insert(LegRedemptionDate_121.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_121("STRING_394071363");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_121);
      InstrumentLeg_121.insert(LegRepoCollateralSecurityType_121.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_121;
      LegRepurchaseRate_121.setString("28.470000");
      noLegs_0_1_1.set(LegRepurchaseRate_121);
      InstrumentLeg_121.insert(LegRepurchaseRate_121.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_121(2039888119);
      noLegs_0_1_1.set(LegRepurchaseTerm_121);
      InstrumentLeg_121.insert(LegRepurchaseTerm_121.getString());
      FIX::LegSecurityDesc LegSecurityDesc_121("STRING_1399283621");
      noLegs_0_1_1.set(LegSecurityDesc_121);
      InstrumentLeg_121.insert(LegSecurityDesc_121.getString());
      FIX::LegSecurityExchange LegSecurityExchange_121("EXCHANGE_541998008");
      noLegs_0_1_1.set(LegSecurityExchange_121);
      InstrumentLeg_121.insert(LegSecurityExchange_121.getString());
      FIX::LegSecurityID LegSecurityID_121("STRING_1978488794");
      noLegs_0_1_1.set(LegSecurityID_121);
      InstrumentLeg_121.insert(LegSecurityID_121.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_121("STRING_225970068");
      noLegs_0_1_1.set(LegSecurityIDSource_121);
      InstrumentLeg_121.insert(LegSecurityIDSource_121.getString());
      FIX::LegSecuritySubType LegSecuritySubType_121("STRING_1967708066");
      noLegs_0_1_1.set(LegSecuritySubType_121);
      InstrumentLeg_121.insert(LegSecuritySubType_121.getString());
      FIX::LegSecurityType LegSecurityType_121("STRING_1509836942");
      noLegs_0_1_1.set(LegSecurityType_121);
      InstrumentLeg_121.insert(LegSecurityType_121.getString());
      FIX::LegSide LegSide_121('1');
      noLegs_0_1_1.set(LegSide_121);
      InstrumentLeg_121.insert(LegSide_121.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_121("STRING_2108095547");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_121);
      InstrumentLeg_121.insert(LegStateOrProvinceOfIssue_121.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_121("JPY");
      noLegs_0_1_1.set(LegStrikeCurrency_121);
      InstrumentLeg_121.insert(LegStrikeCurrency_121.getString());
      FIX::LegStrikePrice LegStrikePrice_121;
      LegStrikePrice_121.setString("6644454");
      noLegs_0_1_1.set(LegStrikePrice_121);
      InstrumentLeg_121.insert(LegStrikePrice_121.getString());
      FIX::LegSymbol LegSymbol_121("STRING_653254399");
      noLegs_0_1_1.set(LegSymbol_121);
      InstrumentLeg_121.insert(LegSymbol_121.getString());
      FIX::LegSymbolSfx LegSymbolSfx_121("STRING_1726288479");
      noLegs_0_1_1.set(LegSymbolSfx_121);
      InstrumentLeg_121.insert(LegSymbolSfx_121.getString());
      FIX::LegTimeUnit LegTimeUnit_121("STRING_850015236");
      noLegs_0_1_1.set(LegTimeUnit_121);
      InstrumentLeg_121.insert(LegTimeUnit_121.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_121("STRING_1258772313");
      noLegs_0_1_1.set(LegUnitOfMeasure_121);
      InstrumentLeg_121.insert(LegUnitOfMeasure_121.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_121;
      LegUnitOfMeasureQty_121.setString("14321073");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_121);
      InstrumentLeg_121.insert(LegUnitOfMeasureQty_121.getString());
      all_values.push_back(InstrumentLeg_121);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_235;
        FIX::LegSecurityAltID LegSecurityAltID_235("STRING_749983529");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_235);
        LegSecAltIDGrp_NoLegSecurityAltID_235.insert(LegSecurityAltID_235.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_235("STRING_904535460");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_235);
        LegSecAltIDGrp_NoLegSecurityAltID_235.insert(LegSecurityAltIDSource_235.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_235);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_236;
        FIX::LegSecurityAltID LegSecurityAltID_236("STRING_27610444");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_236);
        LegSecAltIDGrp_NoLegSecurityAltID_236.insert(LegSecurityAltID_236.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_236("STRING_1578302912");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_236);
        LegSecAltIDGrp_NoLegSecurityAltID_236.insert(LegSecurityAltIDSource_236.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_236);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_237;
        FIX::LegSecurityAltID LegSecurityAltID_237("STRING_1635564074");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_237);
        LegSecAltIDGrp_NoLegSecurityAltID_237.insert(LegSecurityAltID_237.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_237("STRING_1450845251");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_237);
        LegSecAltIDGrp_NoLegSecurityAltID_237.insert(LegSecurityAltIDSource_237.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_237);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_76;
    FIX::AttachmentPoint AttachmentPoint_76;
    AttachmentPoint_76.setString("78.220000");
    noRelatedSym_0_0.set(AttachmentPoint_76);
    Instrument_76.insert(AttachmentPoint_76.getString());
    FIX::CFICode CFICode_76("STRING_1983921076");
    noRelatedSym_0_0.set(CFICode_76);
    Instrument_76.insert(CFICode_76.getString());
    FIX::CPProgram CPProgram_76(1);
    noRelatedSym_0_0.set(CPProgram_76);
    Instrument_76.insert(CPProgram_76.getString());
    FIX::CPRegType CPRegType_76("STRING_1996640498");
    noRelatedSym_0_0.set(CPRegType_76);
    Instrument_76.insert(CPRegType_76.getString());
    FIX::CapPrice CapPrice_76;
    CapPrice_76.setString("3962152");
    noRelatedSym_0_0.set(CapPrice_76);
    Instrument_76.insert(CapPrice_76.getString());
    FIX::ContractMultiplier ContractMultiplier_76;
    ContractMultiplier_76.setString("11768735");
    noRelatedSym_0_0.set(ContractMultiplier_76);
    Instrument_76.insert(ContractMultiplier_76.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_76(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_76);
    Instrument_76.insert(ContractMultiplierUnit_76.getString());
    FIX::ContractSettlMonth ContractSettlMonth_76("MONTHYEAR_288619707");
    noRelatedSym_0_0.set(ContractSettlMonth_76);
    Instrument_76.insert(ContractSettlMonth_76.getString());
    FIX::CountryOfIssue CountryOfIssue_76("COUNTRY_428673528");
    noRelatedSym_0_0.set(CountryOfIssue_76);
    Instrument_76.insert(CountryOfIssue_76.getString());
    FIX::CouponPaymentDate CouponPaymentDate_76("LOCALMKTDATE_154974058");
    noRelatedSym_0_0.set(CouponPaymentDate_76);
    Instrument_76.insert(CouponPaymentDate_76.getString());
    FIX::CouponRate CouponRate_76;
    CouponRate_76.setString("48.540000");
    noRelatedSym_0_0.set(CouponRate_76);
    Instrument_76.insert(CouponRate_76.getString());
    FIX::CreditRating CreditRating_76("STRING_654643596");
    noRelatedSym_0_0.set(CreditRating_76);
    Instrument_76.insert(CreditRating_76.getString());
    FIX::DatedDate DatedDate_76("LOCALMKTDATE_2122682125");
    noRelatedSym_0_0.set(DatedDate_76);
    Instrument_76.insert(DatedDate_76.getString());
    FIX::DetachmentPoint DetachmentPoint_76;
    DetachmentPoint_76.setString("17.960000");
    noRelatedSym_0_0.set(DetachmentPoint_76);
    Instrument_76.insert(DetachmentPoint_76.getString());
    FIX::EncodedIssuer EncodedIssuer_76("DATA_137485721");
    noRelatedSym_0_0.set(EncodedIssuer_76);
    Instrument_76.insert(EncodedIssuer_76.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_76(2083294024);
    noRelatedSym_0_0.set(EncodedIssuerLen_76);
    Instrument_76.insert(EncodedIssuerLen_76.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_76("DATA_1131928924");
    noRelatedSym_0_0.set(EncodedSecurityDesc_76);
    Instrument_76.insert(EncodedSecurityDesc_76.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_76(2072201913);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_76);
    Instrument_76.insert(EncodedSecurityDescLen_76.getString());
    FIX::ExerciseStyle ExerciseStyle_76(2);
    noRelatedSym_0_0.set(ExerciseStyle_76);
    Instrument_76.insert(ExerciseStyle_76.getString());
    FIX::Factor Factor_76;
    Factor_76.setString("17851833");
    noRelatedSym_0_0.set(Factor_76);
    Instrument_76.insert(Factor_76.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_76(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_76);
    Instrument_76.insert(FlexProductEligibilityIndicator_76.getString());
    FIX::FlexibleIndicator FlexibleIndicator_76(true);
    noRelatedSym_0_0.set(FlexibleIndicator_76);
    Instrument_76.insert(FlexibleIndicator_76.getString());
    FIX::FloorPrice FloorPrice_76;
    FloorPrice_76.setString("8964719");
    noRelatedSym_0_0.set(FloorPrice_76);
    Instrument_76.insert(FloorPrice_76.getString());
    FIX::FlowScheduleType FlowScheduleType_76(3);
    noRelatedSym_0_0.set(FlowScheduleType_76);
    Instrument_76.insert(FlowScheduleType_76.getString());
    FIX::InstrRegistry InstrRegistry_76("STRING_46973162");
    noRelatedSym_0_0.set(InstrRegistry_76);
    Instrument_76.insert(InstrRegistry_76.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_76('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_76);
    Instrument_76.insert(InstrmtAssignmentMethod_76.getString());
    FIX::InterestAccrualDate InterestAccrualDate_76("LOCALMKTDATE_1840165873");
    noRelatedSym_0_0.set(InterestAccrualDate_76);
    Instrument_76.insert(InterestAccrualDate_76.getString());
    FIX::IssueDate IssueDate_76("LOCALMKTDATE_74583607");
    noRelatedSym_0_0.set(IssueDate_76);
    Instrument_76.insert(IssueDate_76.getString());
    FIX::Issuer Issuer_76("STRING_1077274783");
    noRelatedSym_0_0.set(Issuer_76);
    Instrument_76.insert(Issuer_76.getString());
    FIX::ListMethod ListMethod_76(0);
    noRelatedSym_0_0.set(ListMethod_76);
    Instrument_76.insert(ListMethod_76.getString());
    FIX::LocaleOfIssue LocaleOfIssue_76("STRING_1525428858");
    noRelatedSym_0_0.set(LocaleOfIssue_76);
    Instrument_76.insert(LocaleOfIssue_76.getString());
    FIX::MaturityDate MaturityDate_76("LOCALMKTDATE_1444312605");
    noRelatedSym_0_0.set(MaturityDate_76);
    Instrument_76.insert(MaturityDate_76.getString());
    FIX::MaturityMonthYear MaturityMonthYear_76("MONTHYEAR_1164683728");
    noRelatedSym_0_0.set(MaturityMonthYear_76);
    Instrument_76.insert(MaturityMonthYear_76.getString());
    FIX::MaturityTime MaturityTime_76("TZTIMEONLY_160747402");
    noRelatedSym_0_0.set(MaturityTime_76);
    Instrument_76.insert(MaturityTime_76.getString());
    FIX::MinPriceIncrement MinPriceIncrement_76;
    MinPriceIncrement_76.setString("12934694");
    noRelatedSym_0_0.set(MinPriceIncrement_76);
    Instrument_76.insert(MinPriceIncrement_76.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_76;
    MinPriceIncrementAmount_76.setString("15608989");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_76);
    Instrument_76.insert(MinPriceIncrementAmount_76.getString());
    FIX::NTPositionLimit NTPositionLimit_76(1337620957);
    noRelatedSym_0_0.set(NTPositionLimit_76);
    Instrument_76.insert(NTPositionLimit_76.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_76;
    NotionalPercentageOutstanding_76.setString("55.060000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_76);
    Instrument_76.insert(NotionalPercentageOutstanding_76.getString());
    FIX::OptAttribute OptAttribute_76('1');
    noRelatedSym_0_0.set(OptAttribute_76);
    Instrument_76.insert(OptAttribute_76.getString());
    FIX::OptPayoutAmount OptPayoutAmount_76;
    OptPayoutAmount_76.setString("17662944");
    noRelatedSym_0_0.set(OptPayoutAmount_76);
    Instrument_76.insert(OptPayoutAmount_76.getString());
    FIX::OptPayoutType OptPayoutType_76(2);
    noRelatedSym_0_0.set(OptPayoutType_76);
    Instrument_76.insert(OptPayoutType_76.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_76;
    OriginalNotionalPercentageOutstanding_76.setString("35.260000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_76);
    Instrument_76.insert(OriginalNotionalPercentageOutstanding_76.getString());
    FIX::Pool Pool_76("STRING_273454433");
    noRelatedSym_0_0.set(Pool_76);
    Instrument_76.insert(Pool_76.getString());
    FIX::PositionLimit PositionLimit_76(1036618041);
    noRelatedSym_0_0.set(PositionLimit_76);
    Instrument_76.insert(PositionLimit_76.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_76("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_76);
    Instrument_76.insert(PriceQuoteMethod_76.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_76("STRING_410940154");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_76);
    Instrument_76.insert(PriceUnitOfMeasure_76.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_76;
    PriceUnitOfMeasureQty_76.setString("9724284");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_76);
    Instrument_76.insert(PriceUnitOfMeasureQty_76.getString());
    FIX::Product Product_78(1);
    noRelatedSym_0_0.set(Product_78);
    Instrument_76.insert(Product_78.getString());
    FIX::ProductComplex ProductComplex_76("STRING_335658419");
    noRelatedSym_0_0.set(ProductComplex_76);
    Instrument_76.insert(ProductComplex_76.getString());
    FIX::PutOrCall PutOrCall_76(0);
    noRelatedSym_0_0.set(PutOrCall_76);
    Instrument_76.insert(PutOrCall_76.getString());
    FIX::RedemptionDate RedemptionDate_76("LOCALMKTDATE_73266626");
    noRelatedSym_0_0.set(RedemptionDate_76);
    Instrument_76.insert(RedemptionDate_76.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_76("STRING_1986665164");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_76);
    Instrument_76.insert(RepoCollateralSecurityType_76.getString());
    FIX::RepurchaseRate RepurchaseRate_76;
    RepurchaseRate_76.setString("16.180000");
    noRelatedSym_0_0.set(RepurchaseRate_76);
    Instrument_76.insert(RepurchaseRate_76.getString());
    FIX::RepurchaseTerm RepurchaseTerm_76(969738615);
    noRelatedSym_0_0.set(RepurchaseTerm_76);
    Instrument_76.insert(RepurchaseTerm_76.getString());
    FIX::RestructuringType RestructuringType_76("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_76);
    Instrument_76.insert(RestructuringType_76.getString());
    FIX::SecurityDesc SecurityDesc_76("STRING_922444780");
    noRelatedSym_0_0.set(SecurityDesc_76);
    Instrument_76.insert(SecurityDesc_76.getString());
    FIX::SecurityExchange SecurityExchange_76("EXCHANGE_468710485");
    noRelatedSym_0_0.set(SecurityExchange_76);
    Instrument_76.insert(SecurityExchange_76.getString());
    FIX::SecurityGroup SecurityGroup_76("STRING_467494155");
    noRelatedSym_0_0.set(SecurityGroup_76);
    Instrument_76.insert(SecurityGroup_76.getString());
    FIX::SecurityID SecurityID_76("STRING_997028387");
    noRelatedSym_0_0.set(SecurityID_76);
    Instrument_76.insert(SecurityID_76.getString());
    FIX::SecurityIDSource SecurityIDSource_76("STRING_F");
    noRelatedSym_0_0.set(SecurityIDSource_76);
    Instrument_76.insert(SecurityIDSource_76.getString());
    FIX::SecurityStatus SecurityStatus_76("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_76);
    Instrument_76.insert(SecurityStatus_76.getString());
    FIX::SecuritySubType SecuritySubType_77("STRING_374973598");
    noRelatedSym_0_0.set(SecuritySubType_77);
    Instrument_76.insert(SecuritySubType_77.getString());
    FIX::SecurityType SecurityType_78("STRING_DEFLTED");
    noRelatedSym_0_0.set(SecurityType_78);
    Instrument_76.insert(SecurityType_78.getString());
    FIX::Seniority Seniority_76("STRING_SR");
    noRelatedSym_0_0.set(Seniority_76);
    Instrument_76.insert(Seniority_76.getString());
    FIX::SettlMethod SettlMethod_76('C');
    noRelatedSym_0_0.set(SettlMethod_76);
    Instrument_76.insert(SettlMethod_76.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_76("STRING_2136283682");
    noRelatedSym_0_0.set(SettleOnOpenFlag_76);
    Instrument_76.insert(SettleOnOpenFlag_76.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_76("STRING_226355852");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_76);
    Instrument_76.insert(StateOrProvinceOfIssue_76.getString());
    FIX::StrikeCurrency StrikeCurrency_76("USD");
    noRelatedSym_0_0.set(StrikeCurrency_76);
    Instrument_76.insert(StrikeCurrency_76.getString());
    FIX::StrikeMultiplier StrikeMultiplier_76;
    StrikeMultiplier_76.setString("20758745");
    noRelatedSym_0_0.set(StrikeMultiplier_76);
    Instrument_76.insert(StrikeMultiplier_76.getString());
    FIX::StrikePrice StrikePrice_76;
    StrikePrice_76.setString("14921527");
    noRelatedSym_0_0.set(StrikePrice_76);
    Instrument_76.insert(StrikePrice_76.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_76(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_76);
    Instrument_76.insert(StrikePriceBoundaryMethod_76.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_76;
    StrikePriceBoundaryPrecision_76.setString("44.020000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_76);
    Instrument_76.insert(StrikePriceBoundaryPrecision_76.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_76(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_76);
    Instrument_76.insert(StrikePriceDeterminationMethod_76.getString());
    FIX::StrikeValue StrikeValue_76;
    StrikeValue_76.setString("8457994");
    noRelatedSym_0_0.set(StrikeValue_76);
    Instrument_76.insert(StrikeValue_76.getString());
    FIX::Symbol Symbol_76("STRING_1201172428");
    noRelatedSym_0_0.set(Symbol_76);
    Instrument_76.insert(Symbol_76.getString());
    FIX::SymbolSfx SymbolSfx_76("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_76);
    Instrument_76.insert(SymbolSfx_76.getString());
    FIX::TimeUnit TimeUnit_76("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_76);
    Instrument_76.insert(TimeUnit_76.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_76(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_76);
    Instrument_76.insert(UnderlyingPriceDeterminationMethod_76.getString());
    FIX::UnitOfMeasure UnitOfMeasure_76("STRING_Bu");
    noRelatedSym_0_0.set(UnitOfMeasure_76);
    Instrument_76.insert(UnitOfMeasure_76.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_76;
    UnitOfMeasureQty_76.setString("12434284");
    noRelatedSym_0_0.set(UnitOfMeasureQty_76);
    Instrument_76.insert(UnitOfMeasureQty_76.getString());
    FIX::ValuationMethod ValuationMethod_76("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_76);
    Instrument_76.insert(ValuationMethod_76.getString());
    all_values.push_back(Instrument_76);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_146;
      FIX::ComplexEventCondition ComplexEventCondition_146(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventCondition_146.getString());
      FIX::ComplexEventPrice ComplexEventPrice_146;
      ComplexEventPrice_146.setString("5322609");
      noComplexEvents_0_1_0.set(ComplexEventPrice_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPrice_146.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_146(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryMethod_146.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_146;
      ComplexEventPriceBoundaryPrecision_146.setString("12.420000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryPrecision_146.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_146(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceTimeType_146.getString());
      FIX::ComplexEventType ComplexEventType_146(8);
      noComplexEvents_0_1_0.set(ComplexEventType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventType_146.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_146;
      ComplexOptPayoutAmount_146.setString("18908896");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexOptPayoutAmount_146.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_146);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_297;
        FIX::ComplexEventEndDate ComplexEventEndDate_297(FIX::UTCTIMESTAMP(12, 24, 18, 0, 7, 2002));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_297);
        ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventEndDate_297.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_297(FIX::UTCTIMESTAMP(6, 26, 26, 26, 5, 2003));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_297);
        ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventStartDate_297.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_297);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_602;
          FIX::ComplexEventEndTime ComplexEventEndTime_602(FIX::UTCTIMEONLY(2, 52, 31));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_602);
          ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventEndTime_602.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_602(FIX::UTCTIMEONLY(16, 36, 8));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_602);
          ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventStartTime_602.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_602);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_298;
        FIX::ComplexEventEndDate ComplexEventEndDate_298(FIX::UTCTIMESTAMP(4, 41, 1, 18, 5, 2015));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_298);
        ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventEndDate_298.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_298(FIX::UTCTIMESTAMP(3, 3, 12, 21, 12, 2016));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_298);
        ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventStartDate_298.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_298);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_603;
          FIX::ComplexEventEndTime ComplexEventEndTime_603(FIX::UTCTIMEONLY(20, 1, 52));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_603);
          ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventEndTime_603.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_603(FIX::UTCTIMEONLY(9, 11, 3));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_603);
          ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventStartTime_603.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_603);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_604;
          FIX::ComplexEventEndTime ComplexEventEndTime_604(FIX::UTCTIMEONLY(13, 55, 5));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_604);
          ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventEndTime_604.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_604(FIX::UTCTIMEONLY(16, 33, 43));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_604);
          ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventStartTime_604.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_604);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_299;
        FIX::ComplexEventEndDate ComplexEventEndDate_299(FIX::UTCTIMESTAMP(18, 16, 39, 12, 10, 2012));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_299);
        ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventEndDate_299.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_299(FIX::UTCTIMESTAMP(0, 45, 16, 25, 2, 2008));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_299);
        ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventStartDate_299.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_299);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_605;
          FIX::ComplexEventEndTime ComplexEventEndTime_605(FIX::UTCTIMEONLY(10, 5, 19));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_605);
          ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventEndTime_605.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_605(FIX::UTCTIMEONLY(14, 30, 51));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_605);
          ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventStartTime_605.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_605);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_147;
      FIX::ComplexEventCondition ComplexEventCondition_147(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventCondition_147.getString());
      FIX::ComplexEventPrice ComplexEventPrice_147;
      ComplexEventPrice_147.setString("4210767");
      noComplexEvents_0_1_1.set(ComplexEventPrice_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPrice_147.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_147(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryMethod_147.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
      ComplexEventPriceBoundaryPrecision_147.setString("35.000000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryPrecision_147.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_147(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceTimeType_147.getString());
      FIX::ComplexEventType ComplexEventType_147(1);
      noComplexEvents_0_1_1.set(ComplexEventType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventType_147.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
      ComplexOptPayoutAmount_147.setString("20187407");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexOptPayoutAmount_147.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_147);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_300;
        FIX::ComplexEventEndDate ComplexEventEndDate_300(FIX::UTCTIMESTAMP(4, 10, 41, 8, 8, 2009));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_300);
        ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventEndDate_300.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_300(FIX::UTCTIMESTAMP(23, 53, 16, 4, 7, 2006));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_300);
        ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventStartDate_300.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_300);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_606;
          FIX::ComplexEventEndTime ComplexEventEndTime_606(FIX::UTCTIMEONLY(16, 1, 40));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_606);
          ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventEndTime_606.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_606(FIX::UTCTIMEONLY(7, 10, 44));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_606);
          ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventStartTime_606.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_606);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_607;
          FIX::ComplexEventEndTime ComplexEventEndTime_607(FIX::UTCTIMEONLY(13, 31, 35));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_607);
          ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventEndTime_607.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_607(FIX::UTCTIMEONLY(2, 1, 42));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_607);
          ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventStartTime_607.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_607);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_608;
          FIX::ComplexEventEndTime ComplexEventEndTime_608(FIX::UTCTIMEONLY(9, 44, 52));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_608);
          ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventEndTime_608.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_608(FIX::UTCTIMEONLY(20, 0, 21));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_608);
          ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventStartTime_608.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_608);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_154;
      FIX::EventDate EventDate_154("LOCALMKTDATE_228312533");
      noEvents_0_1_0.set(EventDate_154);
      EvntGrp_NoEvents_154.insert(EventDate_154.getString());
      FIX::EventPx EventPx_154;
      EventPx_154.setString("952620");
      noEvents_0_1_0.set(EventPx_154);
      EvntGrp_NoEvents_154.insert(EventPx_154.getString());
      FIX::EventText EventText_154("STRING_1289744200");
      noEvents_0_1_0.set(EventText_154);
      EvntGrp_NoEvents_154.insert(EventText_154.getString());
      FIX::EventTime EventTime_154(FIX::UTCTIMESTAMP(11, 28, 8, 15, 11, 2004));
      noEvents_0_1_0.set(EventTime_154);
      EvntGrp_NoEvents_154.insert(EventTime_154.getString());
      FIX::EventType EventType_154(1);
      noEvents_0_1_0.set(EventType_154);
      EvntGrp_NoEvents_154.insert(EventType_154.getString());
      all_values.push_back(EvntGrp_NoEvents_154);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_155;
      FIX::EventDate EventDate_155("LOCALMKTDATE_1865161613");
      noEvents_0_1_1.set(EventDate_155);
      EvntGrp_NoEvents_155.insert(EventDate_155.getString());
      FIX::EventPx EventPx_155;
      EventPx_155.setString("3352585");
      noEvents_0_1_1.set(EventPx_155);
      EvntGrp_NoEvents_155.insert(EventPx_155.getString());
      FIX::EventText EventText_155("STRING_789481316");
      noEvents_0_1_1.set(EventText_155);
      EvntGrp_NoEvents_155.insert(EventText_155.getString());
      FIX::EventTime EventTime_155(FIX::UTCTIMESTAMP(7, 19, 48, 11, 10, 2011));
      noEvents_0_1_1.set(EventTime_155);
      EvntGrp_NoEvents_155.insert(EventTime_155.getString());
      FIX::EventType EventType_155(10);
      noEvents_0_1_1.set(EventType_155);
      EvntGrp_NoEvents_155.insert(EventType_155.getString());
      all_values.push_back(EvntGrp_NoEvents_155);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_157;
      FIX::InstrumentPartyID InstrumentPartyID_157("STRING_430225807");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyID_157.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_157('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyIDSource_157.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_157(777070509);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyRole_157.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_157);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332;
        FIX::InstrumentPartySubID InstrumentPartySubID_332("STRING_2090376966");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_332);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubID_332.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_332(875074269);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_332);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubIDType_332.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333;
        FIX::InstrumentPartySubID InstrumentPartySubID_333("STRING_1009655922");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_333);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubID_333.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_333(1352827193);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_333);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubIDType_333.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_170;
      FIX::SecurityAltID SecurityAltID_170("STRING_1104917951");
      noSecurityAltID_0_1_0.set(SecurityAltID_170);
      SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltID_170.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_170("STRING_495087745");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_170);
      SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltIDSource_170.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_170);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_171;
      FIX::SecurityAltID SecurityAltID_171("STRING_5314061");
      noSecurityAltID_0_1_1.set(SecurityAltID_171);
      SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltID_171.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_171("STRING_1855956995");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_171);
      SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltIDSource_171.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_171);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_172;
      FIX::SecurityAltID SecurityAltID_172("STRING_1227704934");
      noSecurityAltID_0_1_2.set(SecurityAltID_172);
      SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltID_172.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_172("STRING_1580771329");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_172);
      SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltIDSource_172.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_172);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_152;
    FIX::SecurityXML SecurityXML_153("XMLDATA_1182307374");
    noRelatedSym_0_0.set(SecurityXML_153);
    FIX::SecurityXMLLen SecurityXMLLen_76(1939480156);
    noRelatedSym_0_0.set(SecurityXMLLen_76);
    FIX::SecurityXMLSchema SecurityXMLSchema_76("STRING_2126009369");
    noRelatedSym_0_0.set(SecurityXMLSchema_76);
    SecurityXML_152.insert(SecurityXMLSchema_76.getString());
    all_values.push_back(SecurityXML_152);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_113;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_113("DATA_1657158121");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingIssuer_113.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_113(313784283);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingIssuerLen_113.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_113("DATA_1883616242");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDesc_113.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_113(911320214);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDescLen_113.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_113;
      UnderlyingAdjustedQuantity_113.setString("8601401");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_113);
      UnderlyingInstrument_113.insert(UnderlyingAdjustedQuantity_113.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_113;
      UnderlyingAllocationPercent_113.setString("94.730000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_113);
      UnderlyingInstrument_113.insert(UnderlyingAllocationPercent_113.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_113;
      UnderlyingAttachmentPoint_113.setString("35.820000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_113);
      UnderlyingInstrument_113.insert(UnderlyingAttachmentPoint_113.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_113("STRING_1376044710");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_113);
      UnderlyingInstrument_113.insert(UnderlyingCFICode_113.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_113("STRING_1745175514");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_113);
      UnderlyingInstrument_113.insert(UnderlyingCPProgram_113.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_113("STRING_774087995");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_113);
      UnderlyingInstrument_113.insert(UnderlyingCPRegType_113.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_113;
      UnderlyingCapValue_113.setString("8977650");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_113);
      UnderlyingInstrument_113.insert(UnderlyingCapValue_113.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_113;
      UnderlyingCashAmount_113.setString("4979609");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_113);
      UnderlyingInstrument_113.insert(UnderlyingCashAmount_113.getString());
      FIX::UnderlyingCashType UnderlyingCashType_113("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_113);
      UnderlyingInstrument_113.insert(UnderlyingCashType_113.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_113;
      UnderlyingContractMultiplier_113.setString("8060243");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_113);
      UnderlyingInstrument_113.insert(UnderlyingContractMultiplier_113.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_113(1275031440);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_113);
      UnderlyingInstrument_113.insert(UnderlyingContractMultiplierUnit_113.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_113("COUNTRY_567616623");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_113);
      UnderlyingInstrument_113.insert(UnderlyingCountryOfIssue_113.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_113("LOCALMKTDATE_748917635");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_113);
      UnderlyingInstrument_113.insert(UnderlyingCouponPaymentDate_113.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_113;
      UnderlyingCouponRate_113.setString("20.610000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_113);
      UnderlyingInstrument_113.insert(UnderlyingCouponRate_113.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_113("STRING_1577272545");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_113);
      UnderlyingInstrument_113.insert(UnderlyingCreditRating_113.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_113("CHF");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_113);
      UnderlyingInstrument_113.insert(UnderlyingCurrency_113.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_113;
      UnderlyingCurrentValue_113.setString("5347068");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_113);
      UnderlyingInstrument_113.insert(UnderlyingCurrentValue_113.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_113;
      UnderlyingDetachmentPoint_113.setString("89.260000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_113);
      UnderlyingInstrument_113.insert(UnderlyingDetachmentPoint_113.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_113;
      UnderlyingDirtyPrice_113.setString("11113229");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_113);
      UnderlyingInstrument_113.insert(UnderlyingDirtyPrice_113.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_113;
      UnderlyingEndPrice_113.setString("2431801");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_113);
      UnderlyingInstrument_113.insert(UnderlyingEndPrice_113.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_113;
      UnderlyingEndValue_113.setString("16770538");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_113);
      UnderlyingInstrument_113.insert(UnderlyingEndValue_113.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_113(544610605);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_113);
      UnderlyingInstrument_113.insert(UnderlyingExerciseStyle_113.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_113;
      UnderlyingFXRate_113.setString("14254875");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_113);
      UnderlyingInstrument_113.insert(UnderlyingFXRate_113.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_113('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_113);
      UnderlyingInstrument_113.insert(UnderlyingFXRateCalc_113.getString());
      FIX::UnderlyingFactor UnderlyingFactor_113;
      UnderlyingFactor_113.setString("5231363");
      noUnderlyings_0_1_0.set(UnderlyingFactor_113);
      UnderlyingInstrument_113.insert(UnderlyingFactor_113.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_113(372138848);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_113);
      UnderlyingInstrument_113.insert(UnderlyingFlowScheduleType_113.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_113("STRING_978724842");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_113);
      UnderlyingInstrument_113.insert(UnderlyingInstrRegistry_113.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_113("LOCALMKTDATE_836920609");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_113);
      UnderlyingInstrument_113.insert(UnderlyingIssueDate_113.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_113("STRING_108271443");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_113);
      UnderlyingInstrument_113.insert(UnderlyingIssuer_113.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_113("STRING_1890045056");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_113);
      UnderlyingInstrument_113.insert(UnderlyingLocaleOfIssue_113.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_113("LOCALMKTDATE_1697060771");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_113);
      UnderlyingInstrument_113.insert(UnderlyingMaturityDate_113.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_113("MONTHYEAR_390300916");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_113);
      UnderlyingInstrument_113.insert(UnderlyingMaturityMonthYear_113.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_113("TZTIMEONLY_1834094990");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_113);
      UnderlyingInstrument_113.insert(UnderlyingMaturityTime_113.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_113;
      UnderlyingNotionalPercentageOutstanding_113.setString("18.330000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_113);
      UnderlyingInstrument_113.insert(UnderlyingNotionalPercentageOutstanding_113.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_113('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_113);
      UnderlyingInstrument_113.insert(UnderlyingOptAttribute_113.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_113;
      UnderlyingOriginalNotionalPercentageOutstanding_113.setString("93.370000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_113);
      UnderlyingInstrument_113.insert(UnderlyingOriginalNotionalPercentageOutstanding_113.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_113("STRING_1823386845");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_113);
      UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasure_113.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_113;
      UnderlyingPriceUnitOfMeasureQty_113.setString("4859537");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_113);
      UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasureQty_113.getString());
      FIX::UnderlyingProduct UnderlyingProduct_113(1665013140);
      noUnderlyings_0_1_0.set(UnderlyingProduct_113);
      UnderlyingInstrument_113.insert(UnderlyingProduct_113.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_113(481927514);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_113);
      UnderlyingInstrument_113.insert(UnderlyingPutOrCall_113.getString());
      FIX::UnderlyingPx UnderlyingPx_113;
      UnderlyingPx_113.setString("17609851");
      noUnderlyings_0_1_0.set(UnderlyingPx_113);
      UnderlyingInstrument_113.insert(UnderlyingPx_113.getString());
      FIX::UnderlyingQty UnderlyingQty_113;
      UnderlyingQty_113.setString("851461");
      noUnderlyings_0_1_0.set(UnderlyingQty_113);
      UnderlyingInstrument_113.insert(UnderlyingQty_113.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_113("LOCALMKTDATE_1230845150");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_113);
      UnderlyingInstrument_113.insert(UnderlyingRedemptionDate_113.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_113("STRING_1763607215");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_113);
      UnderlyingInstrument_113.insert(UnderlyingRepoCollateralSecurityType_113.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_113;
      UnderlyingRepurchaseRate_113.setString("86.600000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_113);
      UnderlyingInstrument_113.insert(UnderlyingRepurchaseRate_113.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_113(1185106331);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_113);
      UnderlyingInstrument_113.insert(UnderlyingRepurchaseTerm_113.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_113("STRING_722132430");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_113);
      UnderlyingInstrument_113.insert(UnderlyingRestructuringType_113.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_113("STRING_49641860");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityDesc_113.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_113("EXCHANGE_1634455257");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityExchange_113.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_113("STRING_1833455354");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityID_113.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_113("STRING_292822056");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityIDSource_113.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_113("STRING_1164025470");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_113);
      UnderlyingInstrument_113.insert(UnderlyingSecuritySubType_113.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_113("STRING_230582311");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityType_113.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_113("STRING_1718309626");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_113);
      UnderlyingInstrument_113.insert(UnderlyingSeniority_113.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_113("STRING_485592190");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_113);
      UnderlyingInstrument_113.insert(UnderlyingSettlMethod_113.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_113(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_113);
      UnderlyingInstrument_113.insert(UnderlyingSettlementType_113.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_113;
      UnderlyingStartValue_113.setString("20904484");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_113);
      UnderlyingInstrument_113.insert(UnderlyingStartValue_113.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_113("STRING_1464317032");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_113);
      UnderlyingInstrument_113.insert(UnderlyingStateOrProvinceOfIssue_113.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_113("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_113);
      UnderlyingInstrument_113.insert(UnderlyingStrikeCurrency_113.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_113;
      UnderlyingStrikePrice_113.setString("12068784");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_113);
      UnderlyingInstrument_113.insert(UnderlyingStrikePrice_113.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_113("STRING_1140216369");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_113);
      UnderlyingInstrument_113.insert(UnderlyingSymbol_113.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_113("STRING_441537186");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_113);
      UnderlyingInstrument_113.insert(UnderlyingSymbolSfx_113.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_113("STRING_893489782");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_113);
      UnderlyingInstrument_113.insert(UnderlyingTimeUnit_113.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_113("STRING_2065838203");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_113);
      UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasure_113.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_113;
      UnderlyingUnitOfMeasureQty_113.setString("4295299");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_113);
      UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasureQty_113.getString());
      all_values.push_back(UnderlyingInstrument_113);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_224;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_224("STRING_1741741400");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_224);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltID_224.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_224("STRING_915483683");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_224);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltIDSource_224.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_225;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_225("STRING_871718612");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_225);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltID_225.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_225("STRING_76185266");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_225);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltIDSource_225.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_212;
        FIX::UnderlyingStipType UnderlyingStipType_212("STRING_956864727");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_212);
        UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipType_212.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_212("STRING_1307030416");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_212);
        UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipValue_212.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_212);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
        FIX::UnderlyingStipType UnderlyingStipType_213("STRING_145108756");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_213);
        UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipType_213.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_213("STRING_471799739");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_213);
        UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipValue_213.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_229;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_229("STRING_867241186");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_229);
        UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyID_229.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_229('5');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_229);
        UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyIDSource_229.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_229(1979108357);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_229);
        UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyRole_229.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_229);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_429("STRING_814263655");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_429);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubID_429.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_429(995650179);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_429);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubIDType_429.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_430("STRING_783795203");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_430);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubID_430.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_430(385089633);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_430);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubIDType_430.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_230;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_230("STRING_1481242369");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_230);
        UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyID_230.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_230('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_230);
        UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyIDSource_230.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_230(328054460);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_230);
        UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyRole_230.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_230);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_431("STRING_980669438");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_431);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubID_431.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_431(379290729);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_431);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubIDType_431.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_432("STRING_2004954194");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_432);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubID_432.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_432(2120885807);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_432);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432.insert(UnderlyingInstrumentPartySubIDType_432.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
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
