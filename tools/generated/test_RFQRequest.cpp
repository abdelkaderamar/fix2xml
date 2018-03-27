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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RFQRequest msg;

  list<multiset<string>> all_values;
  multiset<string> RFQRequest_0;
  FIX::PrivateQuote PrivateQuote_3(true);
  msg.set(PrivateQuote_3);
  RFQRequest_0.insert(PrivateQuote_3.getString());
  FIX::RFQReqID RFQReqID_2("STRING_904761175");
  msg.set(RFQReqID_2);
  RFQRequest_0.insert(RFQReqID_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_6('0');
  msg.set(SubscriptionRequestType_6);
  RFQRequest_0.insert(SubscriptionRequestType_6.getString());
  all_values.push_back(RFQRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_124;
    FIX::PartyID PartyID_124("STRING_200051004");
    noPartyIDs_0_0.set(PartyID_124);
    Parties_NoPartyIDs_124.insert(PartyID_124.getString());
    FIX::PartyIDSource PartyIDSource_124('A');
    noPartyIDs_0_0.set(PartyIDSource_124);
    Parties_NoPartyIDs_124.insert(PartyIDSource_124.getString());
    FIX::PartyRole PartyRole_124(24);
    noPartyIDs_0_0.set(PartyRole_124);
    Parties_NoPartyIDs_124.insert(PartyRole_124.getString());
    all_values.push_back(Parties_NoPartyIDs_124);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_245;
      FIX::PartySubID PartySubID_245("STRING_1202384351");
      noPartySubIDs_0_1_0.set(PartySubID_245);
      PtysSubGrp_NoPartySubIDs_245.insert(PartySubID_245.getString());
      FIX::PartySubIDType PartySubIDType_245(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_245);
      PtysSubGrp_NoPartySubIDs_245.insert(PartySubIDType_245.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_245);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_246;
      FIX::PartySubID PartySubID_246("STRING_555144628");
      noPartySubIDs_0_1_1.set(PartySubID_246);
      PtysSubGrp_NoPartySubIDs_246.insert(PartySubID_246.getString());
      FIX::PartySubIDType PartySubIDType_246(21);
      noPartySubIDs_0_1_1.set(PartySubIDType_246);
      PtysSubGrp_NoPartySubIDs_246.insert(PartySubIDType_246.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_246);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_247;
      FIX::PartySubID PartySubID_247("STRING_1322108336");
      noPartySubIDs_0_1_2.set(PartySubID_247);
      PtysSubGrp_NoPartySubIDs_247.insert(PartySubID_247.getString());
      FIX::PartySubIDType PartySubIDType_247(26);
      noPartySubIDs_0_1_2.set(PartySubIDType_247);
      PtysSubGrp_NoPartySubIDs_247.insert(PartySubIDType_247.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_247);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // RFQReqGrp
  // Group RFQReqGrp.NoRelatedSym
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_0;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_0;
    FIX::PrevClosePx PrevClosePx_14;
    PrevClosePx_14.setString("19496271");
    noRelatedSym_0_0.set(PrevClosePx_14);
    RFQReqGrp_NoRelatedSym_0.insert(PrevClosePx_14.getString());
    FIX::QuoteRequestType QuoteRequestType_4(1);
    noRelatedSym_0_0.set(QuoteRequestType_4);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteRequestType_4.getString());
    FIX::QuoteType QuoteType_12(2);
    noRelatedSym_0_0.set(QuoteType_12);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteType_12.getString());
    FIX::TradingSessionID TradingSessionID_69("STRING_1");
    noRelatedSym_0_0.set(TradingSessionID_69);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionID_69.getString());
    FIX::TradingSessionSubID TradingSessionSubID_69("STRING_7");
    noRelatedSym_0_0.set(TradingSessionSubID_69);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_69.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_89;
      FIX::EncodedLegIssuer EncodedLegIssuer_89("DATA_520085106");
      noLegs_0_1_0.set(EncodedLegIssuer_89);
      InstrumentLeg_89.insert(EncodedLegIssuer_89.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_89(299739126);
      noLegs_0_1_0.set(EncodedLegIssuerLen_89);
      InstrumentLeg_89.insert(EncodedLegIssuerLen_89.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_89("DATA_1482352448");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_89);
      InstrumentLeg_89.insert(EncodedLegSecurityDesc_89.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_89(1962317008);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_89);
      InstrumentLeg_89.insert(EncodedLegSecurityDescLen_89.getString());
      FIX::LegCFICode LegCFICode_89("STRING_1579402890");
      noLegs_0_1_0.set(LegCFICode_89);
      InstrumentLeg_89.insert(LegCFICode_89.getString());
      FIX::LegContractMultiplier LegContractMultiplier_89;
      LegContractMultiplier_89.setString("11447305");
      noLegs_0_1_0.set(LegContractMultiplier_89);
      InstrumentLeg_89.insert(LegContractMultiplier_89.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_89(521156306);
      noLegs_0_1_0.set(LegContractMultiplierUnit_89);
      InstrumentLeg_89.insert(LegContractMultiplierUnit_89.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_89("MONTHYEAR_405319955");
      noLegs_0_1_0.set(LegContractSettlMonth_89);
      InstrumentLeg_89.insert(LegContractSettlMonth_89.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_89("COUNTRY_1297527607");
      noLegs_0_1_0.set(LegCountryOfIssue_89);
      InstrumentLeg_89.insert(LegCountryOfIssue_89.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_89("LOCALMKTDATE_2057190612");
      noLegs_0_1_0.set(LegCouponPaymentDate_89);
      InstrumentLeg_89.insert(LegCouponPaymentDate_89.getString());
      FIX::LegCouponRate LegCouponRate_89;
      LegCouponRate_89.setString("93.400000");
      noLegs_0_1_0.set(LegCouponRate_89);
      InstrumentLeg_89.insert(LegCouponRate_89.getString());
      FIX::LegCreditRating LegCreditRating_89("STRING_54805134");
      noLegs_0_1_0.set(LegCreditRating_89);
      InstrumentLeg_89.insert(LegCreditRating_89.getString());
      FIX::LegCurrency LegCurrency_89("CAN");
      noLegs_0_1_0.set(LegCurrency_89);
      InstrumentLeg_89.insert(LegCurrency_89.getString());
      FIX::LegDatedDate LegDatedDate_89("LOCALMKTDATE_254856138");
      noLegs_0_1_0.set(LegDatedDate_89);
      InstrumentLeg_89.insert(LegDatedDate_89.getString());
      FIX::LegExerciseStyle LegExerciseStyle_89(1538540664);
      noLegs_0_1_0.set(LegExerciseStyle_89);
      InstrumentLeg_89.insert(LegExerciseStyle_89.getString());
      FIX::LegFactor LegFactor_89;
      LegFactor_89.setString("7747003");
      noLegs_0_1_0.set(LegFactor_89);
      InstrumentLeg_89.insert(LegFactor_89.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_89(431299376);
      noLegs_0_1_0.set(LegFlowScheduleType_89);
      InstrumentLeg_89.insert(LegFlowScheduleType_89.getString());
      FIX::LegInstrRegistry LegInstrRegistry_89("STRING_593441367");
      noLegs_0_1_0.set(LegInstrRegistry_89);
      InstrumentLeg_89.insert(LegInstrRegistry_89.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_89("LOCALMKTDATE_1668851184");
      noLegs_0_1_0.set(LegInterestAccrualDate_89);
      InstrumentLeg_89.insert(LegInterestAccrualDate_89.getString());
      FIX::LegIssueDate LegIssueDate_89("LOCALMKTDATE_986444005");
      noLegs_0_1_0.set(LegIssueDate_89);
      InstrumentLeg_89.insert(LegIssueDate_89.getString());
      FIX::LegIssuer LegIssuer_89("STRING_241600665");
      noLegs_0_1_0.set(LegIssuer_89);
      InstrumentLeg_89.insert(LegIssuer_89.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_89("STRING_843475872");
      noLegs_0_1_0.set(LegLocaleOfIssue_89);
      InstrumentLeg_89.insert(LegLocaleOfIssue_89.getString());
      FIX::LegMaturityDate LegMaturityDate_89("LOCALMKTDATE_1996068404");
      noLegs_0_1_0.set(LegMaturityDate_89);
      InstrumentLeg_89.insert(LegMaturityDate_89.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_89("MONTHYEAR_508887230");
      noLegs_0_1_0.set(LegMaturityMonthYear_89);
      InstrumentLeg_89.insert(LegMaturityMonthYear_89.getString());
      FIX::LegMaturityTime LegMaturityTime_89("TZTIMEONLY_645619365");
      noLegs_0_1_0.set(LegMaturityTime_89);
      InstrumentLeg_89.insert(LegMaturityTime_89.getString());
      FIX::LegOptAttribute LegOptAttribute_89('1');
      noLegs_0_1_0.set(LegOptAttribute_89);
      InstrumentLeg_89.insert(LegOptAttribute_89.getString());
      FIX::LegOptionRatio LegOptionRatio_89;
      LegOptionRatio_89.setString("7854880");
      noLegs_0_1_0.set(LegOptionRatio_89);
      InstrumentLeg_89.insert(LegOptionRatio_89.getString());
      FIX::LegPool LegPool_89("STRING_794796586");
      noLegs_0_1_0.set(LegPool_89);
      InstrumentLeg_89.insert(LegPool_89.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_89("STRING_1609857512");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_89);
      InstrumentLeg_89.insert(LegPriceUnitOfMeasure_89.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_89;
      LegPriceUnitOfMeasureQty_89.setString("6531479");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_89);
      InstrumentLeg_89.insert(LegPriceUnitOfMeasureQty_89.getString());
      FIX::LegProduct LegProduct_89(1314881692);
      noLegs_0_1_0.set(LegProduct_89);
      InstrumentLeg_89.insert(LegProduct_89.getString());
      FIX::LegPutOrCall LegPutOrCall_89(1909596639);
      noLegs_0_1_0.set(LegPutOrCall_89);
      InstrumentLeg_89.insert(LegPutOrCall_89.getString());
      FIX::LegRatioQty LegRatioQty_89;
      LegRatioQty_89.setString("21355003");
      noLegs_0_1_0.set(LegRatioQty_89);
      InstrumentLeg_89.insert(LegRatioQty_89.getString());
      FIX::LegRedemptionDate LegRedemptionDate_89("LOCALMKTDATE_1129715052");
      noLegs_0_1_0.set(LegRedemptionDate_89);
      InstrumentLeg_89.insert(LegRedemptionDate_89.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_89("STRING_1341515881");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_89);
      InstrumentLeg_89.insert(LegRepoCollateralSecurityType_89.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_89;
      LegRepurchaseRate_89.setString("73.290000");
      noLegs_0_1_0.set(LegRepurchaseRate_89);
      InstrumentLeg_89.insert(LegRepurchaseRate_89.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_89(1650871358);
      noLegs_0_1_0.set(LegRepurchaseTerm_89);
      InstrumentLeg_89.insert(LegRepurchaseTerm_89.getString());
      FIX::LegSecurityDesc LegSecurityDesc_89("STRING_1746835836");
      noLegs_0_1_0.set(LegSecurityDesc_89);
      InstrumentLeg_89.insert(LegSecurityDesc_89.getString());
      FIX::LegSecurityExchange LegSecurityExchange_89("EXCHANGE_282791288");
      noLegs_0_1_0.set(LegSecurityExchange_89);
      InstrumentLeg_89.insert(LegSecurityExchange_89.getString());
      FIX::LegSecurityID LegSecurityID_89("STRING_1560578322");
      noLegs_0_1_0.set(LegSecurityID_89);
      InstrumentLeg_89.insert(LegSecurityID_89.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_89("STRING_1721351528");
      noLegs_0_1_0.set(LegSecurityIDSource_89);
      InstrumentLeg_89.insert(LegSecurityIDSource_89.getString());
      FIX::LegSecuritySubType LegSecuritySubType_89("STRING_337596423");
      noLegs_0_1_0.set(LegSecuritySubType_89);
      InstrumentLeg_89.insert(LegSecuritySubType_89.getString());
      FIX::LegSecurityType LegSecurityType_89("STRING_490309932");
      noLegs_0_1_0.set(LegSecurityType_89);
      InstrumentLeg_89.insert(LegSecurityType_89.getString());
      FIX::LegSide LegSide_89('1');
      noLegs_0_1_0.set(LegSide_89);
      InstrumentLeg_89.insert(LegSide_89.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_89("STRING_592452561");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_89);
      InstrumentLeg_89.insert(LegStateOrProvinceOfIssue_89.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_89("USD");
      noLegs_0_1_0.set(LegStrikeCurrency_89);
      InstrumentLeg_89.insert(LegStrikeCurrency_89.getString());
      FIX::LegStrikePrice LegStrikePrice_89;
      LegStrikePrice_89.setString("10237519");
      noLegs_0_1_0.set(LegStrikePrice_89);
      InstrumentLeg_89.insert(LegStrikePrice_89.getString());
      FIX::LegSymbol LegSymbol_89("STRING_474808315");
      noLegs_0_1_0.set(LegSymbol_89);
      InstrumentLeg_89.insert(LegSymbol_89.getString());
      FIX::LegSymbolSfx LegSymbolSfx_89("STRING_1598066812");
      noLegs_0_1_0.set(LegSymbolSfx_89);
      InstrumentLeg_89.insert(LegSymbolSfx_89.getString());
      FIX::LegTimeUnit LegTimeUnit_89("STRING_2010195943");
      noLegs_0_1_0.set(LegTimeUnit_89);
      InstrumentLeg_89.insert(LegTimeUnit_89.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_89("STRING_716408980");
      noLegs_0_1_0.set(LegUnitOfMeasure_89);
      InstrumentLeg_89.insert(LegUnitOfMeasure_89.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_89;
      LegUnitOfMeasureQty_89.setString("2940590");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_89);
      InstrumentLeg_89.insert(LegUnitOfMeasureQty_89.getString());
      all_values.push_back(InstrumentLeg_89);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_158;
        FIX::LegSecurityAltID LegSecurityAltID_158("STRING_1225296211");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_158);
        LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltID_158.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_158("STRING_939678402");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_158);
        LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltIDSource_158.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_158);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_159;
        FIX::LegSecurityAltID LegSecurityAltID_159("STRING_1283163164");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_159);
        LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltID_159.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_159("STRING_2010784280");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_159);
        LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltIDSource_159.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_159);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_66;
    FIX::AttachmentPoint AttachmentPoint_66;
    AttachmentPoint_66.setString("49.880000");
    noRelatedSym_0_0.set(AttachmentPoint_66);
    Instrument_66.insert(AttachmentPoint_66.getString());
    FIX::CFICode CFICode_66("STRING_745537028");
    noRelatedSym_0_0.set(CFICode_66);
    Instrument_66.insert(CFICode_66.getString());
    FIX::CPProgram CPProgram_66(99);
    noRelatedSym_0_0.set(CPProgram_66);
    Instrument_66.insert(CPProgram_66.getString());
    FIX::CPRegType CPRegType_66("STRING_901873032");
    noRelatedSym_0_0.set(CPRegType_66);
    Instrument_66.insert(CPRegType_66.getString());
    FIX::CapPrice CapPrice_66;
    CapPrice_66.setString("5076500");
    noRelatedSym_0_0.set(CapPrice_66);
    Instrument_66.insert(CapPrice_66.getString());
    FIX::ContractMultiplier ContractMultiplier_66;
    ContractMultiplier_66.setString("5044653");
    noRelatedSym_0_0.set(ContractMultiplier_66);
    Instrument_66.insert(ContractMultiplier_66.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_66(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_66);
    Instrument_66.insert(ContractMultiplierUnit_66.getString());
    FIX::ContractSettlMonth ContractSettlMonth_66("MONTHYEAR_1849165900");
    noRelatedSym_0_0.set(ContractSettlMonth_66);
    Instrument_66.insert(ContractSettlMonth_66.getString());
    FIX::CountryOfIssue CountryOfIssue_66("COUNTRY_1637212663");
    noRelatedSym_0_0.set(CountryOfIssue_66);
    Instrument_66.insert(CountryOfIssue_66.getString());
    FIX::CouponPaymentDate CouponPaymentDate_66("LOCALMKTDATE_1534975795");
    noRelatedSym_0_0.set(CouponPaymentDate_66);
    Instrument_66.insert(CouponPaymentDate_66.getString());
    FIX::CouponRate CouponRate_66;
    CouponRate_66.setString("80.890000");
    noRelatedSym_0_0.set(CouponRate_66);
    Instrument_66.insert(CouponRate_66.getString());
    FIX::CreditRating CreditRating_66("STRING_1920003951");
    noRelatedSym_0_0.set(CreditRating_66);
    Instrument_66.insert(CreditRating_66.getString());
    FIX::DatedDate DatedDate_66("LOCALMKTDATE_948070469");
    noRelatedSym_0_0.set(DatedDate_66);
    Instrument_66.insert(DatedDate_66.getString());
    FIX::DetachmentPoint DetachmentPoint_66;
    DetachmentPoint_66.setString("59.690000");
    noRelatedSym_0_0.set(DetachmentPoint_66);
    Instrument_66.insert(DetachmentPoint_66.getString());
    FIX::EncodedIssuer EncodedIssuer_66("DATA_110116726");
    noRelatedSym_0_0.set(EncodedIssuer_66);
    Instrument_66.insert(EncodedIssuer_66.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_66(1438380401);
    noRelatedSym_0_0.set(EncodedIssuerLen_66);
    Instrument_66.insert(EncodedIssuerLen_66.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_66("DATA_176901199");
    noRelatedSym_0_0.set(EncodedSecurityDesc_66);
    Instrument_66.insert(EncodedSecurityDesc_66.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_66(702569288);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_66);
    Instrument_66.insert(EncodedSecurityDescLen_66.getString());
    FIX::ExerciseStyle ExerciseStyle_66(0);
    noRelatedSym_0_0.set(ExerciseStyle_66);
    Instrument_66.insert(ExerciseStyle_66.getString());
    FIX::Factor Factor_66;
    Factor_66.setString("1061168");
    noRelatedSym_0_0.set(Factor_66);
    Instrument_66.insert(Factor_66.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_66(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_66);
    Instrument_66.insert(FlexProductEligibilityIndicator_66.getString());
    FIX::FlexibleIndicator FlexibleIndicator_66(true);
    noRelatedSym_0_0.set(FlexibleIndicator_66);
    Instrument_66.insert(FlexibleIndicator_66.getString());
    FIX::FloorPrice FloorPrice_66;
    FloorPrice_66.setString("17041836");
    noRelatedSym_0_0.set(FloorPrice_66);
    Instrument_66.insert(FloorPrice_66.getString());
    FIX::FlowScheduleType FlowScheduleType_66(1);
    noRelatedSym_0_0.set(FlowScheduleType_66);
    Instrument_66.insert(FlowScheduleType_66.getString());
    FIX::InstrRegistry InstrRegistry_66("STRING_363480997");
    noRelatedSym_0_0.set(InstrRegistry_66);
    Instrument_66.insert(InstrRegistry_66.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_66('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_66);
    Instrument_66.insert(InstrmtAssignmentMethod_66.getString());
    FIX::InterestAccrualDate InterestAccrualDate_66("LOCALMKTDATE_1300330572");
    noRelatedSym_0_0.set(InterestAccrualDate_66);
    Instrument_66.insert(InterestAccrualDate_66.getString());
    FIX::IssueDate IssueDate_66("LOCALMKTDATE_1588777208");
    noRelatedSym_0_0.set(IssueDate_66);
    Instrument_66.insert(IssueDate_66.getString());
    FIX::Issuer Issuer_66("STRING_790437430");
    noRelatedSym_0_0.set(Issuer_66);
    Instrument_66.insert(Issuer_66.getString());
    FIX::ListMethod ListMethod_66(0);
    noRelatedSym_0_0.set(ListMethod_66);
    Instrument_66.insert(ListMethod_66.getString());
    FIX::LocaleOfIssue LocaleOfIssue_66("STRING_1452077840");
    noRelatedSym_0_0.set(LocaleOfIssue_66);
    Instrument_66.insert(LocaleOfIssue_66.getString());
    FIX::MaturityDate MaturityDate_66("LOCALMKTDATE_377428770");
    noRelatedSym_0_0.set(MaturityDate_66);
    Instrument_66.insert(MaturityDate_66.getString());
    FIX::MaturityMonthYear MaturityMonthYear_66("MONTHYEAR_1181547117");
    noRelatedSym_0_0.set(MaturityMonthYear_66);
    Instrument_66.insert(MaturityMonthYear_66.getString());
    FIX::MaturityTime MaturityTime_66("TZTIMEONLY_1968526423");
    noRelatedSym_0_0.set(MaturityTime_66);
    Instrument_66.insert(MaturityTime_66.getString());
    FIX::MinPriceIncrement MinPriceIncrement_66;
    MinPriceIncrement_66.setString("12793018");
    noRelatedSym_0_0.set(MinPriceIncrement_66);
    Instrument_66.insert(MinPriceIncrement_66.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_66;
    MinPriceIncrementAmount_66.setString("16891971");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_66);
    Instrument_66.insert(MinPriceIncrementAmount_66.getString());
    FIX::NTPositionLimit NTPositionLimit_66(325508109);
    noRelatedSym_0_0.set(NTPositionLimit_66);
    Instrument_66.insert(NTPositionLimit_66.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_66;
    NotionalPercentageOutstanding_66.setString("62.390000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_66);
    Instrument_66.insert(NotionalPercentageOutstanding_66.getString());
    FIX::OptAttribute OptAttribute_66('1');
    noRelatedSym_0_0.set(OptAttribute_66);
    Instrument_66.insert(OptAttribute_66.getString());
    FIX::OptPayoutAmount OptPayoutAmount_66;
    OptPayoutAmount_66.setString("19627207");
    noRelatedSym_0_0.set(OptPayoutAmount_66);
    Instrument_66.insert(OptPayoutAmount_66.getString());
    FIX::OptPayoutType OptPayoutType_66(2);
    noRelatedSym_0_0.set(OptPayoutType_66);
    Instrument_66.insert(OptPayoutType_66.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_66;
    OriginalNotionalPercentageOutstanding_66.setString("38.300000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_66);
    Instrument_66.insert(OriginalNotionalPercentageOutstanding_66.getString());
    FIX::Pool Pool_66("STRING_1735241075");
    noRelatedSym_0_0.set(Pool_66);
    Instrument_66.insert(Pool_66.getString());
    FIX::PositionLimit PositionLimit_66(1498968855);
    noRelatedSym_0_0.set(PositionLimit_66);
    Instrument_66.insert(PositionLimit_66.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_66("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_66);
    Instrument_66.insert(PriceQuoteMethod_66.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_66("STRING_1845357802");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_66);
    Instrument_66.insert(PriceUnitOfMeasure_66.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_66;
    PriceUnitOfMeasureQty_66.setString("7898656");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_66);
    Instrument_66.insert(PriceUnitOfMeasureQty_66.getString());
    FIX::Product Product_68(12);
    noRelatedSym_0_0.set(Product_68);
    Instrument_66.insert(Product_68.getString());
    FIX::ProductComplex ProductComplex_66("STRING_400443442");
    noRelatedSym_0_0.set(ProductComplex_66);
    Instrument_66.insert(ProductComplex_66.getString());
    FIX::PutOrCall PutOrCall_66(0);
    noRelatedSym_0_0.set(PutOrCall_66);
    Instrument_66.insert(PutOrCall_66.getString());
    FIX::RedemptionDate RedemptionDate_66("LOCALMKTDATE_1997317826");
    noRelatedSym_0_0.set(RedemptionDate_66);
    Instrument_66.insert(RedemptionDate_66.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_66("STRING_2126764668");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_66);
    Instrument_66.insert(RepoCollateralSecurityType_66.getString());
    FIX::RepurchaseRate RepurchaseRate_66;
    RepurchaseRate_66.setString("49.750000");
    noRelatedSym_0_0.set(RepurchaseRate_66);
    Instrument_66.insert(RepurchaseRate_66.getString());
    FIX::RepurchaseTerm RepurchaseTerm_66(1554017818);
    noRelatedSym_0_0.set(RepurchaseTerm_66);
    Instrument_66.insert(RepurchaseTerm_66.getString());
    FIX::RestructuringType RestructuringType_66("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_66);
    Instrument_66.insert(RestructuringType_66.getString());
    FIX::SecurityDesc SecurityDesc_66("STRING_2120165972");
    noRelatedSym_0_0.set(SecurityDesc_66);
    Instrument_66.insert(SecurityDesc_66.getString());
    FIX::SecurityExchange SecurityExchange_66("EXCHANGE_1404776846");
    noRelatedSym_0_0.set(SecurityExchange_66);
    Instrument_66.insert(SecurityExchange_66.getString());
    FIX::SecurityGroup SecurityGroup_66("STRING_721161465");
    noRelatedSym_0_0.set(SecurityGroup_66);
    Instrument_66.insert(SecurityGroup_66.getString());
    FIX::SecurityID SecurityID_66("STRING_1561459532");
    noRelatedSym_0_0.set(SecurityID_66);
    Instrument_66.insert(SecurityID_66.getString());
    FIX::SecurityIDSource SecurityIDSource_66("STRING_2");
    noRelatedSym_0_0.set(SecurityIDSource_66);
    Instrument_66.insert(SecurityIDSource_66.getString());
    FIX::SecurityStatus SecurityStatus_66("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_66);
    Instrument_66.insert(SecurityStatus_66.getString());
    FIX::SecuritySubType SecuritySubType_67("STRING_866053724");
    noRelatedSym_0_0.set(SecuritySubType_67);
    Instrument_66.insert(SecuritySubType_67.getString());
    FIX::SecurityType SecurityType_68("STRING_MPT");
    noRelatedSym_0_0.set(SecurityType_68);
    Instrument_66.insert(SecurityType_68.getString());
    FIX::Seniority Seniority_66("STRING_SB");
    noRelatedSym_0_0.set(Seniority_66);
    Instrument_66.insert(Seniority_66.getString());
    FIX::SettlMethod SettlMethod_66('P');
    noRelatedSym_0_0.set(SettlMethod_66);
    Instrument_66.insert(SettlMethod_66.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_66("STRING_1704461202");
    noRelatedSym_0_0.set(SettleOnOpenFlag_66);
    Instrument_66.insert(SettleOnOpenFlag_66.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_66("STRING_1880432159");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_66);
    Instrument_66.insert(StateOrProvinceOfIssue_66.getString());
    FIX::StrikeCurrency StrikeCurrency_66("CHF");
    noRelatedSym_0_0.set(StrikeCurrency_66);
    Instrument_66.insert(StrikeCurrency_66.getString());
    FIX::StrikeMultiplier StrikeMultiplier_66;
    StrikeMultiplier_66.setString("11238279");
    noRelatedSym_0_0.set(StrikeMultiplier_66);
    Instrument_66.insert(StrikeMultiplier_66.getString());
    FIX::StrikePrice StrikePrice_66;
    StrikePrice_66.setString("8278417");
    noRelatedSym_0_0.set(StrikePrice_66);
    Instrument_66.insert(StrikePrice_66.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_66(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_66);
    Instrument_66.insert(StrikePriceBoundaryMethod_66.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_66;
    StrikePriceBoundaryPrecision_66.setString("17.300000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_66);
    Instrument_66.insert(StrikePriceBoundaryPrecision_66.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_66(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_66);
    Instrument_66.insert(StrikePriceDeterminationMethod_66.getString());
    FIX::StrikeValue StrikeValue_66;
    StrikeValue_66.setString("6227673");
    noRelatedSym_0_0.set(StrikeValue_66);
    Instrument_66.insert(StrikeValue_66.getString());
    FIX::Symbol Symbol_66("STRING_1382557882");
    noRelatedSym_0_0.set(Symbol_66);
    Instrument_66.insert(Symbol_66.getString());
    FIX::SymbolSfx SymbolSfx_66("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_66);
    Instrument_66.insert(SymbolSfx_66.getString());
    FIX::TimeUnit TimeUnit_66("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_66);
    Instrument_66.insert(TimeUnit_66.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_66(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_66);
    Instrument_66.insert(UnderlyingPriceDeterminationMethod_66.getString());
    FIX::UnitOfMeasure UnitOfMeasure_66("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_66);
    Instrument_66.insert(UnitOfMeasure_66.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_66;
    UnitOfMeasureQty_66.setString("13747623");
    noRelatedSym_0_0.set(UnitOfMeasureQty_66);
    Instrument_66.insert(UnitOfMeasureQty_66.getString());
    FIX::ValuationMethod ValuationMethod_66("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_66);
    Instrument_66.insert(ValuationMethod_66.getString());
    all_values.push_back(Instrument_66);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_126;
      FIX::ComplexEventCondition ComplexEventCondition_126(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexEventCondition_126.getString());
      FIX::ComplexEventPrice ComplexEventPrice_126;
      ComplexEventPrice_126.setString("3826435");
      noComplexEvents_0_1_0.set(ComplexEventPrice_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexEventPrice_126.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_126(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryMethod_126.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_126;
      ComplexEventPriceBoundaryPrecision_126.setString("59.570000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryPrecision_126.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_126(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceTimeType_126.getString());
      FIX::ComplexEventType ComplexEventType_126(6);
      noComplexEvents_0_1_0.set(ComplexEventType_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexEventType_126.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_126;
      ComplexOptPayoutAmount_126.setString("3706218");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_126);
      ComplexEvents_NoComplexEvents_126.insert(ComplexOptPayoutAmount_126.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_126);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_259;
        FIX::ComplexEventEndDate ComplexEventEndDate_259(FIX::UTCTIMESTAMP(13, 47, 11, 4, 62008));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_259);
        ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventEndDate_259.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_259(FIX::UTCTIMESTAMP(18, 55, 16, 5, 102013));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_259);
        ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventStartDate_259.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_259);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_510;
          FIX::ComplexEventEndTime ComplexEventEndTime_510(FIX::UTCTIMEONLY(13, 47, 4));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_510);
          ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventEndTime_510.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_510(FIX::UTCTIMEONLY(21, 14, 52));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_510);
          ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventStartTime_510.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_510);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_511;
          FIX::ComplexEventEndTime ComplexEventEndTime_511(FIX::UTCTIMEONLY(15, 20, 47));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_511);
          ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventEndTime_511.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_511(FIX::UTCTIMEONLY(10, 28, 22));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_511);
          ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventStartTime_511.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_511);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_512;
          FIX::ComplexEventEndTime ComplexEventEndTime_512(FIX::UTCTIMEONLY(9, 9, 17));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_512);
          ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventEndTime_512.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_512(FIX::UTCTIMEONLY(19, 12, 25));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_512);
          ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventStartTime_512.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_512);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_260;
        FIX::ComplexEventEndDate ComplexEventEndDate_260(FIX::UTCTIMESTAMP(19, 33, 31, 24, 62003));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_260);
        ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventEndDate_260.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_260(FIX::UTCTIMESTAMP(22, 42, 20, 18, 52002));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_260);
        ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventStartDate_260.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_260);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_513;
          FIX::ComplexEventEndTime ComplexEventEndTime_513(FIX::UTCTIMEONLY(9, 3, 46));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_513);
          ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventEndTime_513.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_513(FIX::UTCTIMEONLY(13, 6, 13));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_513);
          ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventStartTime_513.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_513);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_514;
          FIX::ComplexEventEndTime ComplexEventEndTime_514(FIX::UTCTIMEONLY(4, 23, 1));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_514);
          ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventEndTime_514.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_514(FIX::UTCTIMEONLY(10, 5, 39));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_514);
          ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventStartTime_514.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_514);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_515;
          FIX::ComplexEventEndTime ComplexEventEndTime_515(FIX::UTCTIMEONLY(12, 12, 34));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_515);
          ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventEndTime_515.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_515(FIX::UTCTIMEONLY(21, 29, 17));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_515);
          ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventStartTime_515.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_515);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_261;
        FIX::ComplexEventEndDate ComplexEventEndDate_261(FIX::UTCTIMESTAMP(12, 29, 34, 24, 82016));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_261);
        ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventEndDate_261.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_261(FIX::UTCTIMESTAMP(9, 19, 8, 4, 22015));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_261);
        ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventStartDate_261.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_261);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_516;
          FIX::ComplexEventEndTime ComplexEventEndTime_516(FIX::UTCTIMEONLY(7, 49, 26));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_516);
          ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventEndTime_516.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_516(FIX::UTCTIMEONLY(3, 32, 51));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_516);
          ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventStartTime_516.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_516);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_517;
          FIX::ComplexEventEndTime ComplexEventEndTime_517(FIX::UTCTIMEONLY(0, 4, 57));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_517);
          ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventEndTime_517.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_517(FIX::UTCTIMEONLY(5, 26, 54));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_517);
          ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventStartTime_517.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_517);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_518;
          FIX::ComplexEventEndTime ComplexEventEndTime_518(FIX::UTCTIMEONLY(14, 23, 39));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_518);
          ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventEndTime_518.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_518(FIX::UTCTIMEONLY(7, 47, 33));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_518);
          ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventStartTime_518.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_518);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_127;
      FIX::ComplexEventCondition ComplexEventCondition_127(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexEventCondition_127.getString());
      FIX::ComplexEventPrice ComplexEventPrice_127;
      ComplexEventPrice_127.setString("13169983");
      noComplexEvents_0_1_1.set(ComplexEventPrice_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexEventPrice_127.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_127(4);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryMethod_127.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_127;
      ComplexEventPriceBoundaryPrecision_127.setString("80.440000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryPrecision_127.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_127(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceTimeType_127.getString());
      FIX::ComplexEventType ComplexEventType_127(7);
      noComplexEvents_0_1_1.set(ComplexEventType_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexEventType_127.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_127;
      ComplexOptPayoutAmount_127.setString("4840237");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_127);
      ComplexEvents_NoComplexEvents_127.insert(ComplexOptPayoutAmount_127.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_127);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_262;
        FIX::ComplexEventEndDate ComplexEventEndDate_262(FIX::UTCTIMESTAMP(15, 47, 0, 18, 122003));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_262);
        ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventEndDate_262.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_262(FIX::UTCTIMESTAMP(0, 47, 46, 5, 62016));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_262);
        ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventStartDate_262.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_262);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_519;
          FIX::ComplexEventEndTime ComplexEventEndTime_519(FIX::UTCTIMEONLY(11, 43, 53));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_519);
          ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventEndTime_519.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_519(FIX::UTCTIMEONLY(6, 40, 10));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_519);
          ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventStartTime_519.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_519);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_520;
          FIX::ComplexEventEndTime ComplexEventEndTime_520(FIX::UTCTIMEONLY(15, 44, 3));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_520);
          ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventEndTime_520.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_520(FIX::UTCTIMEONLY(0, 13, 48));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_520);
          ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventStartTime_520.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_520);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_521;
          FIX::ComplexEventEndTime ComplexEventEndTime_521(FIX::UTCTIMEONLY(17, 28, 4));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_521);
          ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventEndTime_521.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_521(FIX::UTCTIMEONLY(19, 55, 4));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_521);
          ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventStartTime_521.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_521);

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
      multiset<string> EvntGrp_NoEvents_126;
      FIX::EventDate EventDate_126("LOCALMKTDATE_1668640723");
      noEvents_0_1_0.set(EventDate_126);
      EvntGrp_NoEvents_126.insert(EventDate_126.getString());
      FIX::EventPx EventPx_126;
      EventPx_126.setString("17003449");
      noEvents_0_1_0.set(EventPx_126);
      EvntGrp_NoEvents_126.insert(EventPx_126.getString());
      FIX::EventText EventText_126("STRING_1754349097");
      noEvents_0_1_0.set(EventText_126);
      EvntGrp_NoEvents_126.insert(EventText_126.getString());
      FIX::EventTime EventTime_126(FIX::UTCTIMESTAMP(15, 49, 14, 10, 12017));
      noEvents_0_1_0.set(EventTime_126);
      EvntGrp_NoEvents_126.insert(EventTime_126.getString());
      FIX::EventType EventType_126(12);
      noEvents_0_1_0.set(EventType_126);
      EvntGrp_NoEvents_126.insert(EventType_126.getString());
      all_values.push_back(EvntGrp_NoEvents_126);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_127;
      FIX::EventDate EventDate_127("LOCALMKTDATE_801169151");
      noEvents_0_1_1.set(EventDate_127);
      EvntGrp_NoEvents_127.insert(EventDate_127.getString());
      FIX::EventPx EventPx_127;
      EventPx_127.setString("2981099");
      noEvents_0_1_1.set(EventPx_127);
      EvntGrp_NoEvents_127.insert(EventPx_127.getString());
      FIX::EventText EventText_127("STRING_2976414");
      noEvents_0_1_1.set(EventText_127);
      EvntGrp_NoEvents_127.insert(EventText_127.getString());
      FIX::EventTime EventTime_127(FIX::UTCTIMESTAMP(11, 38, 32, 14, 72008));
      noEvents_0_1_1.set(EventTime_127);
      EvntGrp_NoEvents_127.insert(EventTime_127.getString());
      FIX::EventType EventType_127(99);
      noEvents_0_1_1.set(EventType_127);
      EvntGrp_NoEvents_127.insert(EventType_127.getString());
      all_values.push_back(EvntGrp_NoEvents_127);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_123;
      FIX::InstrumentPartyID InstrumentPartyID_123("STRING_1199582083");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_123);
      InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyID_123.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_123('4');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_123);
      InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyIDSource_123.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_123(284684642);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_123);
      InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyRole_123.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_123);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242;
        FIX::InstrumentPartySubID InstrumentPartySubID_242("STRING_701537650");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_242);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubID_242.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_242(1570072258);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_242);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubIDType_242.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243;
        FIX::InstrumentPartySubID InstrumentPartySubID_243("STRING_790751215");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_243);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubID_243.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_243(698298742);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_243);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubIDType_243.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_124;
      FIX::InstrumentPartyID InstrumentPartyID_124("STRING_1091229333");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_124);
      InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyID_124.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_124('3');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_124);
      InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyIDSource_124.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_124(305164191);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_124);
      InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyRole_124.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_124);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244;
        FIX::InstrumentPartySubID InstrumentPartySubID_244("STRING_465564488");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_244);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubID_244.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_244(1753661920);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_244);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubIDType_244.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245;
        FIX::InstrumentPartySubID InstrumentPartySubID_245("STRING_334452031");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_245);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubID_245.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_245(788985442);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_245);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubIDType_245.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_138;
      FIX::SecurityAltID SecurityAltID_138("STRING_910989690");
      noSecurityAltID_0_1_0.set(SecurityAltID_138);
      SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltID_138.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_138("STRING_1321962974");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_138);
      SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltIDSource_138.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_138);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_139;
      FIX::SecurityAltID SecurityAltID_139("STRING_1716822247");
      noSecurityAltID_0_1_1.set(SecurityAltID_139);
      SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltID_139.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_139("STRING_1209099661");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_139);
      SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltIDSource_139.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_139);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_140;
      FIX::SecurityAltID SecurityAltID_140("STRING_1324939388");
      noSecurityAltID_0_1_2.set(SecurityAltID_140);
      SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltID_140.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_140("STRING_419162669");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_140);
      SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltIDSource_140.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_140);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_132;
    FIX::SecurityXML SecurityXML_133("XMLDATA_398296624");
    noRelatedSym_0_0.set(SecurityXML_133);
    FIX::SecurityXMLLen SecurityXMLLen_66(904632518);
    noRelatedSym_0_0.set(SecurityXMLLen_66);
    FIX::SecurityXMLSchema SecurityXMLSchema_66("STRING_1689419701");
    noRelatedSym_0_0.set(SecurityXMLSchema_66);
    SecurityXML_132.insert(SecurityXMLSchema_66.getString());
    all_values.push_back(SecurityXML_132);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_111;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_111("DATA_1400886392");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_111);
      UnderlyingInstrument_111.insert(EncodedUnderlyingIssuer_111.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_111(1716649839);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_111);
      UnderlyingInstrument_111.insert(EncodedUnderlyingIssuerLen_111.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_111("DATA_1589311254");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_111);
      UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDesc_111.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_111(1508160031);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_111);
      UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDescLen_111.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_111;
      UnderlyingAdjustedQuantity_111.setString("7687482");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_111);
      UnderlyingInstrument_111.insert(UnderlyingAdjustedQuantity_111.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_111;
      UnderlyingAllocationPercent_111.setString("2.930000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_111);
      UnderlyingInstrument_111.insert(UnderlyingAllocationPercent_111.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_111;
      UnderlyingAttachmentPoint_111.setString("46.730000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_111);
      UnderlyingInstrument_111.insert(UnderlyingAttachmentPoint_111.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_111("STRING_1908076273");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_111);
      UnderlyingInstrument_111.insert(UnderlyingCFICode_111.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_111("STRING_627004295");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_111);
      UnderlyingInstrument_111.insert(UnderlyingCPProgram_111.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_111("STRING_1215433283");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_111);
      UnderlyingInstrument_111.insert(UnderlyingCPRegType_111.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_111;
      UnderlyingCapValue_111.setString("5513438");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_111);
      UnderlyingInstrument_111.insert(UnderlyingCapValue_111.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_111;
      UnderlyingCashAmount_111.setString("13253030");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_111);
      UnderlyingInstrument_111.insert(UnderlyingCashAmount_111.getString());
      FIX::UnderlyingCashType UnderlyingCashType_111("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_111);
      UnderlyingInstrument_111.insert(UnderlyingCashType_111.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_111;
      UnderlyingContractMultiplier_111.setString("8949563");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_111);
      UnderlyingInstrument_111.insert(UnderlyingContractMultiplier_111.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_111(1630467228);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_111);
      UnderlyingInstrument_111.insert(UnderlyingContractMultiplierUnit_111.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_111("COUNTRY_1260157993");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_111);
      UnderlyingInstrument_111.insert(UnderlyingCountryOfIssue_111.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_111("LOCALMKTDATE_1360520858");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_111);
      UnderlyingInstrument_111.insert(UnderlyingCouponPaymentDate_111.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_111;
      UnderlyingCouponRate_111.setString("55.000000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_111);
      UnderlyingInstrument_111.insert(UnderlyingCouponRate_111.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_111("STRING_1594610024");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_111);
      UnderlyingInstrument_111.insert(UnderlyingCreditRating_111.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_111("CHF");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_111);
      UnderlyingInstrument_111.insert(UnderlyingCurrency_111.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_111;
      UnderlyingCurrentValue_111.setString("3581160");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_111);
      UnderlyingInstrument_111.insert(UnderlyingCurrentValue_111.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_111;
      UnderlyingDetachmentPoint_111.setString("56.260000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_111);
      UnderlyingInstrument_111.insert(UnderlyingDetachmentPoint_111.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_111;
      UnderlyingDirtyPrice_111.setString("17216371");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_111);
      UnderlyingInstrument_111.insert(UnderlyingDirtyPrice_111.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_111;
      UnderlyingEndPrice_111.setString("15672157");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_111);
      UnderlyingInstrument_111.insert(UnderlyingEndPrice_111.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_111;
      UnderlyingEndValue_111.setString("5014413");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_111);
      UnderlyingInstrument_111.insert(UnderlyingEndValue_111.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_111(2140799865);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_111);
      UnderlyingInstrument_111.insert(UnderlyingExerciseStyle_111.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_111;
      UnderlyingFXRate_111.setString("19655123");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_111);
      UnderlyingInstrument_111.insert(UnderlyingFXRate_111.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_111('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_111);
      UnderlyingInstrument_111.insert(UnderlyingFXRateCalc_111.getString());
      FIX::UnderlyingFactor UnderlyingFactor_111;
      UnderlyingFactor_111.setString("16827359");
      noUnderlyings_0_1_0.set(UnderlyingFactor_111);
      UnderlyingInstrument_111.insert(UnderlyingFactor_111.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_111(48661299);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_111);
      UnderlyingInstrument_111.insert(UnderlyingFlowScheduleType_111.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_111("STRING_659476629");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_111);
      UnderlyingInstrument_111.insert(UnderlyingInstrRegistry_111.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_111("LOCALMKTDATE_1251902110");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_111);
      UnderlyingInstrument_111.insert(UnderlyingIssueDate_111.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_111("STRING_1637972553");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_111);
      UnderlyingInstrument_111.insert(UnderlyingIssuer_111.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_111("STRING_20153012");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_111);
      UnderlyingInstrument_111.insert(UnderlyingLocaleOfIssue_111.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_111("LOCALMKTDATE_2020650385");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_111);
      UnderlyingInstrument_111.insert(UnderlyingMaturityDate_111.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_111("MONTHYEAR_1563439198");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_111);
      UnderlyingInstrument_111.insert(UnderlyingMaturityMonthYear_111.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_111("TZTIMEONLY_1812997685");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_111);
      UnderlyingInstrument_111.insert(UnderlyingMaturityTime_111.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_111;
      UnderlyingNotionalPercentageOutstanding_111.setString("30.100000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_111);
      UnderlyingInstrument_111.insert(UnderlyingNotionalPercentageOutstanding_111.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_111('4');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_111);
      UnderlyingInstrument_111.insert(UnderlyingOptAttribute_111.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_111;
      UnderlyingOriginalNotionalPercentageOutstanding_111.setString("73.210000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_111);
      UnderlyingInstrument_111.insert(UnderlyingOriginalNotionalPercentageOutstanding_111.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_111("STRING_185103202");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_111);
      UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasure_111.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_111;
      UnderlyingPriceUnitOfMeasureQty_111.setString("13682628");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_111);
      UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasureQty_111.getString());
      FIX::UnderlyingProduct UnderlyingProduct_111(1040126289);
      noUnderlyings_0_1_0.set(UnderlyingProduct_111);
      UnderlyingInstrument_111.insert(UnderlyingProduct_111.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_111(1080059571);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_111);
      UnderlyingInstrument_111.insert(UnderlyingPutOrCall_111.getString());
      FIX::UnderlyingPx UnderlyingPx_111;
      UnderlyingPx_111.setString("8512464");
      noUnderlyings_0_1_0.set(UnderlyingPx_111);
      UnderlyingInstrument_111.insert(UnderlyingPx_111.getString());
      FIX::UnderlyingQty UnderlyingQty_111;
      UnderlyingQty_111.setString("1528006");
      noUnderlyings_0_1_0.set(UnderlyingQty_111);
      UnderlyingInstrument_111.insert(UnderlyingQty_111.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_111("LOCALMKTDATE_293096781");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_111);
      UnderlyingInstrument_111.insert(UnderlyingRedemptionDate_111.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_111("STRING_2087891964");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_111);
      UnderlyingInstrument_111.insert(UnderlyingRepoCollateralSecurityType_111.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_111;
      UnderlyingRepurchaseRate_111.setString("6.590000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_111);
      UnderlyingInstrument_111.insert(UnderlyingRepurchaseRate_111.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_111(295119434);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_111);
      UnderlyingInstrument_111.insert(UnderlyingRepurchaseTerm_111.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_111("STRING_2092706913");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_111);
      UnderlyingInstrument_111.insert(UnderlyingRestructuringType_111.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_111("STRING_2105526726");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_111);
      UnderlyingInstrument_111.insert(UnderlyingSecurityDesc_111.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_111("EXCHANGE_1619105060");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_111);
      UnderlyingInstrument_111.insert(UnderlyingSecurityExchange_111.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_111("STRING_1666860462");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_111);
      UnderlyingInstrument_111.insert(UnderlyingSecurityID_111.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_111("STRING_1525258806");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_111);
      UnderlyingInstrument_111.insert(UnderlyingSecurityIDSource_111.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_111("STRING_2120546427");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_111);
      UnderlyingInstrument_111.insert(UnderlyingSecuritySubType_111.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_111("STRING_1660176679");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_111);
      UnderlyingInstrument_111.insert(UnderlyingSecurityType_111.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_111("STRING_1343287510");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_111);
      UnderlyingInstrument_111.insert(UnderlyingSeniority_111.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_111("STRING_1379136663");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_111);
      UnderlyingInstrument_111.insert(UnderlyingSettlMethod_111.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_111(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_111);
      UnderlyingInstrument_111.insert(UnderlyingSettlementType_111.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_111;
      UnderlyingStartValue_111.setString("13919488");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_111);
      UnderlyingInstrument_111.insert(UnderlyingStartValue_111.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_111("STRING_2038613292");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_111);
      UnderlyingInstrument_111.insert(UnderlyingStateOrProvinceOfIssue_111.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_111("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_111);
      UnderlyingInstrument_111.insert(UnderlyingStrikeCurrency_111.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_111;
      UnderlyingStrikePrice_111.setString("20587663");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_111);
      UnderlyingInstrument_111.insert(UnderlyingStrikePrice_111.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_111("STRING_173014150");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_111);
      UnderlyingInstrument_111.insert(UnderlyingSymbol_111.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_111("STRING_298393266");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_111);
      UnderlyingInstrument_111.insert(UnderlyingSymbolSfx_111.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_111("STRING_1724280342");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_111);
      UnderlyingInstrument_111.insert(UnderlyingTimeUnit_111.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_111("STRING_1954257160");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_111);
      UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasure_111.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_111;
      UnderlyingUnitOfMeasureQty_111.setString("3413531");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_111);
      UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasureQty_111.getString());
      all_values.push_back(UnderlyingInstrument_111);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_220;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_220("STRING_2139360362");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_220);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltID_220.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_220("STRING_1709615995");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_220);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_220.insert(UnderlyingSecurityAltIDSource_220.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_221;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_221("STRING_1497870304");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_221);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltID_221.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_221("STRING_1071936285");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_221);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_221.insert(UnderlyingSecurityAltIDSource_221.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
        FIX::UnderlyingStipType UnderlyingStipType_214("STRING_1650670939");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_214);
        UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipType_214.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_214("STRING_1365033067");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_214);
        UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipValue_214.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_222;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_222("STRING_1250597951");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_222);
        UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyID_222.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_222('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_222);
        UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyIDSource_222.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_222(299010393);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_222);
        UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyRole_222.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_222);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_435("STRING_1131773913");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_435);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubID_435.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_435(1965870855);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_435);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubIDType_435.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_223;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_223("STRING_586416187");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_223);
        UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyID_223.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_223('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_223);
        UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyIDSource_223.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_223(1478563887);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_223);
        UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyRole_223.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_223);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_436("STRING_336489708");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_436);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubID_436.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_436(526509189);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_436);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubIDType_436.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_437("STRING_1174168859");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_437);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubID_437.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_437(227619352);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_437);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubIDType_437.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_438("STRING_826356602");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_438);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubID_438.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_438(2056606575);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_438);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubIDType_438.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_224;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_224("STRING_138902009");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_224);
        UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyID_224.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_224('9');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_224);
        UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyIDSource_224.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_224(207516193);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_224);
        UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyRole_224.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_224);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_439("STRING_806144264");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_439);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubID_439.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_439(548869305);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_439);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubIDType_439.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_440("STRING_173442718");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_440);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubID_440.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_440(798020978);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_440);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubIDType_440.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_441("STRING_111001652");
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubID_441);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubID_441.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_441(1671313022);
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_441);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubIDType_441.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_112;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_112("DATA_1869957264");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_112);
      UnderlyingInstrument_112.insert(EncodedUnderlyingIssuer_112.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_112(524380464);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_112);
      UnderlyingInstrument_112.insert(EncodedUnderlyingIssuerLen_112.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_112("DATA_1174500314");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_112);
      UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDesc_112.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_112(1087506683);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_112);
      UnderlyingInstrument_112.insert(EncodedUnderlyingSecurityDescLen_112.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_112;
      UnderlyingAdjustedQuantity_112.setString("8781675");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_112);
      UnderlyingInstrument_112.insert(UnderlyingAdjustedQuantity_112.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_112;
      UnderlyingAllocationPercent_112.setString("46.170000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_112);
      UnderlyingInstrument_112.insert(UnderlyingAllocationPercent_112.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_112;
      UnderlyingAttachmentPoint_112.setString("55.360000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_112);
      UnderlyingInstrument_112.insert(UnderlyingAttachmentPoint_112.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_112("STRING_1177177985");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_112);
      UnderlyingInstrument_112.insert(UnderlyingCFICode_112.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_112("STRING_1486255646");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_112);
      UnderlyingInstrument_112.insert(UnderlyingCPProgram_112.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_112("STRING_1731949449");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_112);
      UnderlyingInstrument_112.insert(UnderlyingCPRegType_112.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_112;
      UnderlyingCapValue_112.setString("9955651");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_112);
      UnderlyingInstrument_112.insert(UnderlyingCapValue_112.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_112;
      UnderlyingCashAmount_112.setString("20726718");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_112);
      UnderlyingInstrument_112.insert(UnderlyingCashAmount_112.getString());
      FIX::UnderlyingCashType UnderlyingCashType_112("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_112);
      UnderlyingInstrument_112.insert(UnderlyingCashType_112.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_112;
      UnderlyingContractMultiplier_112.setString("3266454");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_112);
      UnderlyingInstrument_112.insert(UnderlyingContractMultiplier_112.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_112(1854891882);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_112);
      UnderlyingInstrument_112.insert(UnderlyingContractMultiplierUnit_112.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_112("COUNTRY_1025792202");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_112);
      UnderlyingInstrument_112.insert(UnderlyingCountryOfIssue_112.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_112("LOCALMKTDATE_853154621");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_112);
      UnderlyingInstrument_112.insert(UnderlyingCouponPaymentDate_112.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_112;
      UnderlyingCouponRate_112.setString("70.940000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_112);
      UnderlyingInstrument_112.insert(UnderlyingCouponRate_112.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_112("STRING_1253411554");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_112);
      UnderlyingInstrument_112.insert(UnderlyingCreditRating_112.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_112("CAN");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_112);
      UnderlyingInstrument_112.insert(UnderlyingCurrency_112.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_112;
      UnderlyingCurrentValue_112.setString("13923135");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_112);
      UnderlyingInstrument_112.insert(UnderlyingCurrentValue_112.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_112;
      UnderlyingDetachmentPoint_112.setString("83.280000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_112);
      UnderlyingInstrument_112.insert(UnderlyingDetachmentPoint_112.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_112;
      UnderlyingDirtyPrice_112.setString("9982162");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_112);
      UnderlyingInstrument_112.insert(UnderlyingDirtyPrice_112.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_112;
      UnderlyingEndPrice_112.setString("11080122");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_112);
      UnderlyingInstrument_112.insert(UnderlyingEndPrice_112.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_112;
      UnderlyingEndValue_112.setString("13375425");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_112);
      UnderlyingInstrument_112.insert(UnderlyingEndValue_112.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_112(1547085519);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_112);
      UnderlyingInstrument_112.insert(UnderlyingExerciseStyle_112.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_112;
      UnderlyingFXRate_112.setString("12814549");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_112);
      UnderlyingInstrument_112.insert(UnderlyingFXRate_112.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_112('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_112);
      UnderlyingInstrument_112.insert(UnderlyingFXRateCalc_112.getString());
      FIX::UnderlyingFactor UnderlyingFactor_112;
      UnderlyingFactor_112.setString("16580871");
      noUnderlyings_0_1_1.set(UnderlyingFactor_112);
      UnderlyingInstrument_112.insert(UnderlyingFactor_112.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_112(805284359);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_112);
      UnderlyingInstrument_112.insert(UnderlyingFlowScheduleType_112.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_112("STRING_1858037187");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_112);
      UnderlyingInstrument_112.insert(UnderlyingInstrRegistry_112.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_112("LOCALMKTDATE_34983987");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_112);
      UnderlyingInstrument_112.insert(UnderlyingIssueDate_112.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_112("STRING_1979784673");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_112);
      UnderlyingInstrument_112.insert(UnderlyingIssuer_112.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_112("STRING_798060222");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_112);
      UnderlyingInstrument_112.insert(UnderlyingLocaleOfIssue_112.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_112("LOCALMKTDATE_913151579");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_112);
      UnderlyingInstrument_112.insert(UnderlyingMaturityDate_112.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_112("MONTHYEAR_109915642");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_112);
      UnderlyingInstrument_112.insert(UnderlyingMaturityMonthYear_112.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_112("TZTIMEONLY_1398235758");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_112);
      UnderlyingInstrument_112.insert(UnderlyingMaturityTime_112.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_112;
      UnderlyingNotionalPercentageOutstanding_112.setString("95.650000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_112);
      UnderlyingInstrument_112.insert(UnderlyingNotionalPercentageOutstanding_112.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_112('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_112);
      UnderlyingInstrument_112.insert(UnderlyingOptAttribute_112.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_112;
      UnderlyingOriginalNotionalPercentageOutstanding_112.setString("15.600000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_112);
      UnderlyingInstrument_112.insert(UnderlyingOriginalNotionalPercentageOutstanding_112.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_112("STRING_938411110");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_112);
      UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasure_112.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_112;
      UnderlyingPriceUnitOfMeasureQty_112.setString("15213594");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_112);
      UnderlyingInstrument_112.insert(UnderlyingPriceUnitOfMeasureQty_112.getString());
      FIX::UnderlyingProduct UnderlyingProduct_112(1672004054);
      noUnderlyings_0_1_1.set(UnderlyingProduct_112);
      UnderlyingInstrument_112.insert(UnderlyingProduct_112.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_112(1265056542);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_112);
      UnderlyingInstrument_112.insert(UnderlyingPutOrCall_112.getString());
      FIX::UnderlyingPx UnderlyingPx_112;
      UnderlyingPx_112.setString("12287677");
      noUnderlyings_0_1_1.set(UnderlyingPx_112);
      UnderlyingInstrument_112.insert(UnderlyingPx_112.getString());
      FIX::UnderlyingQty UnderlyingQty_112;
      UnderlyingQty_112.setString("5503126");
      noUnderlyings_0_1_1.set(UnderlyingQty_112);
      UnderlyingInstrument_112.insert(UnderlyingQty_112.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_112("LOCALMKTDATE_2118211163");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_112);
      UnderlyingInstrument_112.insert(UnderlyingRedemptionDate_112.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_112("STRING_2110344801");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_112);
      UnderlyingInstrument_112.insert(UnderlyingRepoCollateralSecurityType_112.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_112;
      UnderlyingRepurchaseRate_112.setString("41.620000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_112);
      UnderlyingInstrument_112.insert(UnderlyingRepurchaseRate_112.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_112(1650238739);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_112);
      UnderlyingInstrument_112.insert(UnderlyingRepurchaseTerm_112.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_112("STRING_753561174");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_112);
      UnderlyingInstrument_112.insert(UnderlyingRestructuringType_112.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_112("STRING_1048554078");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_112);
      UnderlyingInstrument_112.insert(UnderlyingSecurityDesc_112.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_112("EXCHANGE_34153420");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_112);
      UnderlyingInstrument_112.insert(UnderlyingSecurityExchange_112.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_112("STRING_1751777388");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_112);
      UnderlyingInstrument_112.insert(UnderlyingSecurityID_112.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_112("STRING_9082696");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_112);
      UnderlyingInstrument_112.insert(UnderlyingSecurityIDSource_112.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_112("STRING_1371696013");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_112);
      UnderlyingInstrument_112.insert(UnderlyingSecuritySubType_112.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_112("STRING_1151379259");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_112);
      UnderlyingInstrument_112.insert(UnderlyingSecurityType_112.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_112("STRING_1290537681");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_112);
      UnderlyingInstrument_112.insert(UnderlyingSeniority_112.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_112("STRING_1359775936");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_112);
      UnderlyingInstrument_112.insert(UnderlyingSettlMethod_112.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_112(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_112);
      UnderlyingInstrument_112.insert(UnderlyingSettlementType_112.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_112;
      UnderlyingStartValue_112.setString("20958220");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_112);
      UnderlyingInstrument_112.insert(UnderlyingStartValue_112.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_112("STRING_1070329476");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_112);
      UnderlyingInstrument_112.insert(UnderlyingStateOrProvinceOfIssue_112.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_112("EUR");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_112);
      UnderlyingInstrument_112.insert(UnderlyingStrikeCurrency_112.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_112;
      UnderlyingStrikePrice_112.setString("18683896");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_112);
      UnderlyingInstrument_112.insert(UnderlyingStrikePrice_112.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_112("STRING_1610118350");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_112);
      UnderlyingInstrument_112.insert(UnderlyingSymbol_112.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_112("STRING_2038038707");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_112);
      UnderlyingInstrument_112.insert(UnderlyingSymbolSfx_112.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_112("STRING_1119141809");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_112);
      UnderlyingInstrument_112.insert(UnderlyingTimeUnit_112.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_112("STRING_1552964267");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_112);
      UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasure_112.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_112;
      UnderlyingUnitOfMeasureQty_112.setString("14867263");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_112);
      UnderlyingInstrument_112.insert(UnderlyingUnitOfMeasureQty_112.getString());
      all_values.push_back(UnderlyingInstrument_112);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_222;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_222("STRING_343891729");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_222);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltID_222.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_222("STRING_860602172");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_222);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_222.insert(UnderlyingSecurityAltIDSource_222.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_223;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_223("STRING_1626363775");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_223);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltID_223.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_223("STRING_1608948271");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_223);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_223.insert(UnderlyingSecurityAltIDSource_223.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
        FIX::UnderlyingStipType UnderlyingStipType_215("STRING_29192735");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_215);
        UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipType_215.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_215("STRING_1579675786");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_215);
        UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipValue_215.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
        FIX::UnderlyingStipType UnderlyingStipType_216("STRING_2052231033");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_216);
        UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipType_216.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_216("STRING_1832916897");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_216);
        UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipValue_216.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_225;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_225("STRING_658308559");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_225);
        UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyID_225.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_225('7');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_225);
        UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyIDSource_225.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_225(1116584298);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_225);
        UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyRole_225.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_225);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_442("STRING_743070024");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_442);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubID_442.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_442(340796663);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_442);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubIDType_442.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_226;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_226("STRING_1413981559");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_226);
        UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyID_226.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_226('2');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_226);
        UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyIDSource_226.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_226(1700572599);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_226);
        UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyRole_226.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_226);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_443("STRING_1981946097");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_443);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubID_443.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_443(623418427);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_443);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubIDType_443.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_227;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_227("STRING_625447465");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_227);
        UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyID_227.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_227('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_227);
        UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyIDSource_227.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_227(344324478);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_227);
        UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyRole_227.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_227);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_444("STRING_1653140573");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_444);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubID_444.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_444(1463466287);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_444);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubIDType_444.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_445("STRING_1641046434");
          noUndlyInstrumentPartySubIDs_0_1_2_3_1.set(UnderlyingInstrumentPartySubID_445);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubID_445.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_445(992383272);
          noUndlyInstrumentPartySubIDs_0_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_445);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubIDType_445.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_113;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_113("DATA_1417826008");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingIssuer_113.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_113(1984938163);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingIssuerLen_113.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_113("DATA_1852985444");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDesc_113.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_113(896706135);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_113);
      UnderlyingInstrument_113.insert(EncodedUnderlyingSecurityDescLen_113.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_113;
      UnderlyingAdjustedQuantity_113.setString("14464027");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_113);
      UnderlyingInstrument_113.insert(UnderlyingAdjustedQuantity_113.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_113;
      UnderlyingAllocationPercent_113.setString("16.750000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_113);
      UnderlyingInstrument_113.insert(UnderlyingAllocationPercent_113.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_113;
      UnderlyingAttachmentPoint_113.setString("88.700000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_113);
      UnderlyingInstrument_113.insert(UnderlyingAttachmentPoint_113.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_113("STRING_878594924");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_113);
      UnderlyingInstrument_113.insert(UnderlyingCFICode_113.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_113("STRING_1699619060");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_113);
      UnderlyingInstrument_113.insert(UnderlyingCPProgram_113.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_113("STRING_611332119");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_113);
      UnderlyingInstrument_113.insert(UnderlyingCPRegType_113.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_113;
      UnderlyingCapValue_113.setString("19610258");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_113);
      UnderlyingInstrument_113.insert(UnderlyingCapValue_113.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_113;
      UnderlyingCashAmount_113.setString("2104439");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_113);
      UnderlyingInstrument_113.insert(UnderlyingCashAmount_113.getString());
      FIX::UnderlyingCashType UnderlyingCashType_113("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_113);
      UnderlyingInstrument_113.insert(UnderlyingCashType_113.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_113;
      UnderlyingContractMultiplier_113.setString("9301264");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_113);
      UnderlyingInstrument_113.insert(UnderlyingContractMultiplier_113.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_113(473046272);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_113);
      UnderlyingInstrument_113.insert(UnderlyingContractMultiplierUnit_113.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_113("COUNTRY_2088389471");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_113);
      UnderlyingInstrument_113.insert(UnderlyingCountryOfIssue_113.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_113("LOCALMKTDATE_1270923115");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_113);
      UnderlyingInstrument_113.insert(UnderlyingCouponPaymentDate_113.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_113;
      UnderlyingCouponRate_113.setString("78.310000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_113);
      UnderlyingInstrument_113.insert(UnderlyingCouponRate_113.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_113("STRING_1974513528");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_113);
      UnderlyingInstrument_113.insert(UnderlyingCreditRating_113.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_113("GBP");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_113);
      UnderlyingInstrument_113.insert(UnderlyingCurrency_113.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_113;
      UnderlyingCurrentValue_113.setString("18089759");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_113);
      UnderlyingInstrument_113.insert(UnderlyingCurrentValue_113.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_113;
      UnderlyingDetachmentPoint_113.setString("4.940000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_113);
      UnderlyingInstrument_113.insert(UnderlyingDetachmentPoint_113.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_113;
      UnderlyingDirtyPrice_113.setString("2934723");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_113);
      UnderlyingInstrument_113.insert(UnderlyingDirtyPrice_113.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_113;
      UnderlyingEndPrice_113.setString("14240778");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_113);
      UnderlyingInstrument_113.insert(UnderlyingEndPrice_113.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_113;
      UnderlyingEndValue_113.setString("17917549");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_113);
      UnderlyingInstrument_113.insert(UnderlyingEndValue_113.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_113(381554510);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_113);
      UnderlyingInstrument_113.insert(UnderlyingExerciseStyle_113.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_113;
      UnderlyingFXRate_113.setString("9297347");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_113);
      UnderlyingInstrument_113.insert(UnderlyingFXRate_113.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_113('M');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_113);
      UnderlyingInstrument_113.insert(UnderlyingFXRateCalc_113.getString());
      FIX::UnderlyingFactor UnderlyingFactor_113;
      UnderlyingFactor_113.setString("20226009");
      noUnderlyings_0_1_2.set(UnderlyingFactor_113);
      UnderlyingInstrument_113.insert(UnderlyingFactor_113.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_113(1922118040);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_113);
      UnderlyingInstrument_113.insert(UnderlyingFlowScheduleType_113.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_113("STRING_378079971");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_113);
      UnderlyingInstrument_113.insert(UnderlyingInstrRegistry_113.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_113("LOCALMKTDATE_1860055459");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_113);
      UnderlyingInstrument_113.insert(UnderlyingIssueDate_113.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_113("STRING_1627619836");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_113);
      UnderlyingInstrument_113.insert(UnderlyingIssuer_113.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_113("STRING_1274786106");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_113);
      UnderlyingInstrument_113.insert(UnderlyingLocaleOfIssue_113.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_113("LOCALMKTDATE_1158974597");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_113);
      UnderlyingInstrument_113.insert(UnderlyingMaturityDate_113.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_113("MONTHYEAR_1275007863");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_113);
      UnderlyingInstrument_113.insert(UnderlyingMaturityMonthYear_113.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_113("TZTIMEONLY_53201328");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_113);
      UnderlyingInstrument_113.insert(UnderlyingMaturityTime_113.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_113;
      UnderlyingNotionalPercentageOutstanding_113.setString("95.210000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_113);
      UnderlyingInstrument_113.insert(UnderlyingNotionalPercentageOutstanding_113.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_113('8');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_113);
      UnderlyingInstrument_113.insert(UnderlyingOptAttribute_113.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_113;
      UnderlyingOriginalNotionalPercentageOutstanding_113.setString("34.480000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_113);
      UnderlyingInstrument_113.insert(UnderlyingOriginalNotionalPercentageOutstanding_113.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_113("STRING_1851111676");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_113);
      UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasure_113.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_113;
      UnderlyingPriceUnitOfMeasureQty_113.setString("10375872");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_113);
      UnderlyingInstrument_113.insert(UnderlyingPriceUnitOfMeasureQty_113.getString());
      FIX::UnderlyingProduct UnderlyingProduct_113(2009852895);
      noUnderlyings_0_1_2.set(UnderlyingProduct_113);
      UnderlyingInstrument_113.insert(UnderlyingProduct_113.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_113(633754480);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_113);
      UnderlyingInstrument_113.insert(UnderlyingPutOrCall_113.getString());
      FIX::UnderlyingPx UnderlyingPx_113;
      UnderlyingPx_113.setString("15106335");
      noUnderlyings_0_1_2.set(UnderlyingPx_113);
      UnderlyingInstrument_113.insert(UnderlyingPx_113.getString());
      FIX::UnderlyingQty UnderlyingQty_113;
      UnderlyingQty_113.setString("19507587");
      noUnderlyings_0_1_2.set(UnderlyingQty_113);
      UnderlyingInstrument_113.insert(UnderlyingQty_113.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_113("LOCALMKTDATE_1904677596");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_113);
      UnderlyingInstrument_113.insert(UnderlyingRedemptionDate_113.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_113("STRING_1250177703");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_113);
      UnderlyingInstrument_113.insert(UnderlyingRepoCollateralSecurityType_113.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_113;
      UnderlyingRepurchaseRate_113.setString("85.980000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_113);
      UnderlyingInstrument_113.insert(UnderlyingRepurchaseRate_113.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_113(581206015);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_113);
      UnderlyingInstrument_113.insert(UnderlyingRepurchaseTerm_113.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_113("STRING_918202581");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_113);
      UnderlyingInstrument_113.insert(UnderlyingRestructuringType_113.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_113("STRING_1439280927");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityDesc_113.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_113("EXCHANGE_2028636509");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityExchange_113.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_113("STRING_1211674924");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityID_113.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_113("STRING_715875122");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityIDSource_113.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_113("STRING_1672907834");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_113);
      UnderlyingInstrument_113.insert(UnderlyingSecuritySubType_113.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_113("STRING_1593229434");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_113);
      UnderlyingInstrument_113.insert(UnderlyingSecurityType_113.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_113("STRING_1645609890");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_113);
      UnderlyingInstrument_113.insert(UnderlyingSeniority_113.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_113("STRING_633161797");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_113);
      UnderlyingInstrument_113.insert(UnderlyingSettlMethod_113.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_113(2);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_113);
      UnderlyingInstrument_113.insert(UnderlyingSettlementType_113.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_113;
      UnderlyingStartValue_113.setString("14202442");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_113);
      UnderlyingInstrument_113.insert(UnderlyingStartValue_113.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_113("STRING_1011241769");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_113);
      UnderlyingInstrument_113.insert(UnderlyingStateOrProvinceOfIssue_113.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_113("JPY");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_113);
      UnderlyingInstrument_113.insert(UnderlyingStrikeCurrency_113.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_113;
      UnderlyingStrikePrice_113.setString("1385442");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_113);
      UnderlyingInstrument_113.insert(UnderlyingStrikePrice_113.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_113("STRING_192409490");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_113);
      UnderlyingInstrument_113.insert(UnderlyingSymbol_113.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_113("STRING_27904685");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_113);
      UnderlyingInstrument_113.insert(UnderlyingSymbolSfx_113.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_113("STRING_191745556");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_113);
      UnderlyingInstrument_113.insert(UnderlyingTimeUnit_113.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_113("STRING_82495364");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_113);
      UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasure_113.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_113;
      UnderlyingUnitOfMeasureQty_113.setString("8550479");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_113);
      UnderlyingInstrument_113.insert(UnderlyingUnitOfMeasureQty_113.getString());
      all_values.push_back(UnderlyingInstrument_113);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_224;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_224("STRING_1933607040");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_224);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltID_224.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_224("STRING_1892635209");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_224);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltIDSource_224.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_225;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_225("STRING_718648251");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltID_225);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltID_225.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_225("STRING_419877872");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltIDSource_225);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltIDSource_225.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_226;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_226("STRING_1255785081");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltID_226);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltID_226.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_226("STRING_521923321");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltIDSource_226);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltIDSource_226.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
        FIX::UnderlyingStipType UnderlyingStipType_217("STRING_358479137");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_217);
        UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipType_217.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_217("STRING_152228271");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_217);
        UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipValue_217.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_228;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_228("STRING_1276681718");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_228);
        UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyID_228.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_228('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_228);
        UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyIDSource_228.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_228(639430697);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_228);
        UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyRole_228.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_228);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_446("STRING_159900672");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_446);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubID_446.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_446(164854883);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_446);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubIDType_446.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_447("STRING_1934102429");
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubID_447);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubID_447.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_447(1805510562);
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_447);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubIDType_447.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_448("STRING_798016680");
          noUndlyInstrumentPartySubIDs_0_2_0_3_2.set(UnderlyingInstrumentPartySubID_448);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubID_448.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_448(1254965512);
          noUndlyInstrumentPartySubIDs_0_2_0_3_2.set(UnderlyingInstrumentPartySubIDType_448);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubIDType_448.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_229;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_229("STRING_1078271196");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_229);
        UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyID_229.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_229('1');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_229);
        UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyIDSource_229.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_229(288400405);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_229);
        UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyRole_229.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_229);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_449("STRING_1947802677");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_449);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubID_449.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_449(480809896);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_449);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubIDType_449.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_450("STRING_2006556351");
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubID_450);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubID_450.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_450(2139548233);
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_450);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubIDType_450.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_1;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_1;
    FIX::PrevClosePx PrevClosePx_15;
    PrevClosePx_15.setString("5633052");
    noRelatedSym_0_1.set(PrevClosePx_15);
    RFQReqGrp_NoRelatedSym_1.insert(PrevClosePx_15.getString());
    FIX::QuoteRequestType QuoteRequestType_5(2);
    noRelatedSym_0_1.set(QuoteRequestType_5);
    RFQReqGrp_NoRelatedSym_1.insert(QuoteRequestType_5.getString());
    FIX::QuoteType QuoteType_13(1);
    noRelatedSym_0_1.set(QuoteType_13);
    RFQReqGrp_NoRelatedSym_1.insert(QuoteType_13.getString());
    FIX::TradingSessionID TradingSessionID_70("STRING_5");
    noRelatedSym_0_1.set(TradingSessionID_70);
    RFQReqGrp_NoRelatedSym_1.insert(TradingSessionID_70.getString());
    FIX::TradingSessionSubID TradingSessionSubID_70("STRING_1");
    noRelatedSym_0_1.set(TradingSessionSubID_70);
    RFQReqGrp_NoRelatedSym_1.insert(TradingSessionSubID_70.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_90;
      FIX::EncodedLegIssuer EncodedLegIssuer_90("DATA_769306524");
      noLegs_1_1_0.set(EncodedLegIssuer_90);
      InstrumentLeg_90.insert(EncodedLegIssuer_90.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_90(1715057308);
      noLegs_1_1_0.set(EncodedLegIssuerLen_90);
      InstrumentLeg_90.insert(EncodedLegIssuerLen_90.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_90("DATA_2088915161");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_90);
      InstrumentLeg_90.insert(EncodedLegSecurityDesc_90.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_90(946378345);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_90);
      InstrumentLeg_90.insert(EncodedLegSecurityDescLen_90.getString());
      FIX::LegCFICode LegCFICode_90("STRING_2073536445");
      noLegs_1_1_0.set(LegCFICode_90);
      InstrumentLeg_90.insert(LegCFICode_90.getString());
      FIX::LegContractMultiplier LegContractMultiplier_90;
      LegContractMultiplier_90.setString("936597");
      noLegs_1_1_0.set(LegContractMultiplier_90);
      InstrumentLeg_90.insert(LegContractMultiplier_90.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_90(1704656180);
      noLegs_1_1_0.set(LegContractMultiplierUnit_90);
      InstrumentLeg_90.insert(LegContractMultiplierUnit_90.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_90("MONTHYEAR_1202734515");
      noLegs_1_1_0.set(LegContractSettlMonth_90);
      InstrumentLeg_90.insert(LegContractSettlMonth_90.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_90("COUNTRY_1685168982");
      noLegs_1_1_0.set(LegCountryOfIssue_90);
      InstrumentLeg_90.insert(LegCountryOfIssue_90.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_90("LOCALMKTDATE_196603229");
      noLegs_1_1_0.set(LegCouponPaymentDate_90);
      InstrumentLeg_90.insert(LegCouponPaymentDate_90.getString());
      FIX::LegCouponRate LegCouponRate_90;
      LegCouponRate_90.setString("75.100000");
      noLegs_1_1_0.set(LegCouponRate_90);
      InstrumentLeg_90.insert(LegCouponRate_90.getString());
      FIX::LegCreditRating LegCreditRating_90("STRING_1845069654");
      noLegs_1_1_0.set(LegCreditRating_90);
      InstrumentLeg_90.insert(LegCreditRating_90.getString());
      FIX::LegCurrency LegCurrency_90("USD");
      noLegs_1_1_0.set(LegCurrency_90);
      InstrumentLeg_90.insert(LegCurrency_90.getString());
      FIX::LegDatedDate LegDatedDate_90("LOCALMKTDATE_1503096568");
      noLegs_1_1_0.set(LegDatedDate_90);
      InstrumentLeg_90.insert(LegDatedDate_90.getString());
      FIX::LegExerciseStyle LegExerciseStyle_90(1159474793);
      noLegs_1_1_0.set(LegExerciseStyle_90);
      InstrumentLeg_90.insert(LegExerciseStyle_90.getString());
      FIX::LegFactor LegFactor_90;
      LegFactor_90.setString("4377081");
      noLegs_1_1_0.set(LegFactor_90);
      InstrumentLeg_90.insert(LegFactor_90.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_90(433884116);
      noLegs_1_1_0.set(LegFlowScheduleType_90);
      InstrumentLeg_90.insert(LegFlowScheduleType_90.getString());
      FIX::LegInstrRegistry LegInstrRegistry_90("STRING_821249594");
      noLegs_1_1_0.set(LegInstrRegistry_90);
      InstrumentLeg_90.insert(LegInstrRegistry_90.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_90("LOCALMKTDATE_726108561");
      noLegs_1_1_0.set(LegInterestAccrualDate_90);
      InstrumentLeg_90.insert(LegInterestAccrualDate_90.getString());
      FIX::LegIssueDate LegIssueDate_90("LOCALMKTDATE_265052134");
      noLegs_1_1_0.set(LegIssueDate_90);
      InstrumentLeg_90.insert(LegIssueDate_90.getString());
      FIX::LegIssuer LegIssuer_90("STRING_621568623");
      noLegs_1_1_0.set(LegIssuer_90);
      InstrumentLeg_90.insert(LegIssuer_90.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_90("STRING_1206918457");
      noLegs_1_1_0.set(LegLocaleOfIssue_90);
      InstrumentLeg_90.insert(LegLocaleOfIssue_90.getString());
      FIX::LegMaturityDate LegMaturityDate_90("LOCALMKTDATE_124124837");
      noLegs_1_1_0.set(LegMaturityDate_90);
      InstrumentLeg_90.insert(LegMaturityDate_90.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_90("MONTHYEAR_613633208");
      noLegs_1_1_0.set(LegMaturityMonthYear_90);
      InstrumentLeg_90.insert(LegMaturityMonthYear_90.getString());
      FIX::LegMaturityTime LegMaturityTime_90("TZTIMEONLY_1770223717");
      noLegs_1_1_0.set(LegMaturityTime_90);
      InstrumentLeg_90.insert(LegMaturityTime_90.getString());
      FIX::LegOptAttribute LegOptAttribute_90('8');
      noLegs_1_1_0.set(LegOptAttribute_90);
      InstrumentLeg_90.insert(LegOptAttribute_90.getString());
      FIX::LegOptionRatio LegOptionRatio_90;
      LegOptionRatio_90.setString("14619767");
      noLegs_1_1_0.set(LegOptionRatio_90);
      InstrumentLeg_90.insert(LegOptionRatio_90.getString());
      FIX::LegPool LegPool_90("STRING_2119652369");
      noLegs_1_1_0.set(LegPool_90);
      InstrumentLeg_90.insert(LegPool_90.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_90("STRING_1297517729");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_90);
      InstrumentLeg_90.insert(LegPriceUnitOfMeasure_90.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_90;
      LegPriceUnitOfMeasureQty_90.setString("8814849");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_90);
      InstrumentLeg_90.insert(LegPriceUnitOfMeasureQty_90.getString());
      FIX::LegProduct LegProduct_90(741475246);
      noLegs_1_1_0.set(LegProduct_90);
      InstrumentLeg_90.insert(LegProduct_90.getString());
      FIX::LegPutOrCall LegPutOrCall_90(865091389);
      noLegs_1_1_0.set(LegPutOrCall_90);
      InstrumentLeg_90.insert(LegPutOrCall_90.getString());
      FIX::LegRatioQty LegRatioQty_90;
      LegRatioQty_90.setString("8229165");
      noLegs_1_1_0.set(LegRatioQty_90);
      InstrumentLeg_90.insert(LegRatioQty_90.getString());
      FIX::LegRedemptionDate LegRedemptionDate_90("LOCALMKTDATE_1687853591");
      noLegs_1_1_0.set(LegRedemptionDate_90);
      InstrumentLeg_90.insert(LegRedemptionDate_90.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_90("STRING_791144186");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_90);
      InstrumentLeg_90.insert(LegRepoCollateralSecurityType_90.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_90;
      LegRepurchaseRate_90.setString("62.860000");
      noLegs_1_1_0.set(LegRepurchaseRate_90);
      InstrumentLeg_90.insert(LegRepurchaseRate_90.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_90(1245026123);
      noLegs_1_1_0.set(LegRepurchaseTerm_90);
      InstrumentLeg_90.insert(LegRepurchaseTerm_90.getString());
      FIX::LegSecurityDesc LegSecurityDesc_90("STRING_1993878701");
      noLegs_1_1_0.set(LegSecurityDesc_90);
      InstrumentLeg_90.insert(LegSecurityDesc_90.getString());
      FIX::LegSecurityExchange LegSecurityExchange_90("EXCHANGE_454261620");
      noLegs_1_1_0.set(LegSecurityExchange_90);
      InstrumentLeg_90.insert(LegSecurityExchange_90.getString());
      FIX::LegSecurityID LegSecurityID_90("STRING_1441629353");
      noLegs_1_1_0.set(LegSecurityID_90);
      InstrumentLeg_90.insert(LegSecurityID_90.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_90("STRING_1390002564");
      noLegs_1_1_0.set(LegSecurityIDSource_90);
      InstrumentLeg_90.insert(LegSecurityIDSource_90.getString());
      FIX::LegSecuritySubType LegSecuritySubType_90("STRING_151847626");
      noLegs_1_1_0.set(LegSecuritySubType_90);
      InstrumentLeg_90.insert(LegSecuritySubType_90.getString());
      FIX::LegSecurityType LegSecurityType_90("STRING_1803087465");
      noLegs_1_1_0.set(LegSecurityType_90);
      InstrumentLeg_90.insert(LegSecurityType_90.getString());
      FIX::LegSide LegSide_90('5');
      noLegs_1_1_0.set(LegSide_90);
      InstrumentLeg_90.insert(LegSide_90.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_90("STRING_1654944194");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_90);
      InstrumentLeg_90.insert(LegStateOrProvinceOfIssue_90.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_90("USD");
      noLegs_1_1_0.set(LegStrikeCurrency_90);
      InstrumentLeg_90.insert(LegStrikeCurrency_90.getString());
      FIX::LegStrikePrice LegStrikePrice_90;
      LegStrikePrice_90.setString("20888283");
      noLegs_1_1_0.set(LegStrikePrice_90);
      InstrumentLeg_90.insert(LegStrikePrice_90.getString());
      FIX::LegSymbol LegSymbol_90("STRING_1636328205");
      noLegs_1_1_0.set(LegSymbol_90);
      InstrumentLeg_90.insert(LegSymbol_90.getString());
      FIX::LegSymbolSfx LegSymbolSfx_90("STRING_1736561925");
      noLegs_1_1_0.set(LegSymbolSfx_90);
      InstrumentLeg_90.insert(LegSymbolSfx_90.getString());
      FIX::LegTimeUnit LegTimeUnit_90("STRING_206396796");
      noLegs_1_1_0.set(LegTimeUnit_90);
      InstrumentLeg_90.insert(LegTimeUnit_90.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_90("STRING_110413180");
      noLegs_1_1_0.set(LegUnitOfMeasure_90);
      InstrumentLeg_90.insert(LegUnitOfMeasure_90.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_90;
      LegUnitOfMeasureQty_90.setString("7959967");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_90);
      InstrumentLeg_90.insert(LegUnitOfMeasureQty_90.getString());
      all_values.push_back(InstrumentLeg_90);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_160;
        FIX::LegSecurityAltID LegSecurityAltID_160("STRING_724046389");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_160);
        LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltID_160.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_160("STRING_418736804");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_160);
        LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltIDSource_160.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_160);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_91;
      FIX::EncodedLegIssuer EncodedLegIssuer_91("DATA_1168767136");
      noLegs_1_1_1.set(EncodedLegIssuer_91);
      InstrumentLeg_91.insert(EncodedLegIssuer_91.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_91(38539538);
      noLegs_1_1_1.set(EncodedLegIssuerLen_91);
      InstrumentLeg_91.insert(EncodedLegIssuerLen_91.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_91("DATA_390905526");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_91);
      InstrumentLeg_91.insert(EncodedLegSecurityDesc_91.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_91(318801217);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_91);
      InstrumentLeg_91.insert(EncodedLegSecurityDescLen_91.getString());
      FIX::LegCFICode LegCFICode_91("STRING_920024528");
      noLegs_1_1_1.set(LegCFICode_91);
      InstrumentLeg_91.insert(LegCFICode_91.getString());
      FIX::LegContractMultiplier LegContractMultiplier_91;
      LegContractMultiplier_91.setString("11323807");
      noLegs_1_1_1.set(LegContractMultiplier_91);
      InstrumentLeg_91.insert(LegContractMultiplier_91.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_91(1183892606);
      noLegs_1_1_1.set(LegContractMultiplierUnit_91);
      InstrumentLeg_91.insert(LegContractMultiplierUnit_91.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_91("MONTHYEAR_1742941030");
      noLegs_1_1_1.set(LegContractSettlMonth_91);
      InstrumentLeg_91.insert(LegContractSettlMonth_91.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_91("COUNTRY_672750715");
      noLegs_1_1_1.set(LegCountryOfIssue_91);
      InstrumentLeg_91.insert(LegCountryOfIssue_91.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_91("LOCALMKTDATE_1975036792");
      noLegs_1_1_1.set(LegCouponPaymentDate_91);
      InstrumentLeg_91.insert(LegCouponPaymentDate_91.getString());
      FIX::LegCouponRate LegCouponRate_91;
      LegCouponRate_91.setString("36.690000");
      noLegs_1_1_1.set(LegCouponRate_91);
      InstrumentLeg_91.insert(LegCouponRate_91.getString());
      FIX::LegCreditRating LegCreditRating_91("STRING_1917776838");
      noLegs_1_1_1.set(LegCreditRating_91);
      InstrumentLeg_91.insert(LegCreditRating_91.getString());
      FIX::LegCurrency LegCurrency_91("CAN");
      noLegs_1_1_1.set(LegCurrency_91);
      InstrumentLeg_91.insert(LegCurrency_91.getString());
      FIX::LegDatedDate LegDatedDate_91("LOCALMKTDATE_1211922543");
      noLegs_1_1_1.set(LegDatedDate_91);
      InstrumentLeg_91.insert(LegDatedDate_91.getString());
      FIX::LegExerciseStyle LegExerciseStyle_91(1063950762);
      noLegs_1_1_1.set(LegExerciseStyle_91);
      InstrumentLeg_91.insert(LegExerciseStyle_91.getString());
      FIX::LegFactor LegFactor_91;
      LegFactor_91.setString("11181429");
      noLegs_1_1_1.set(LegFactor_91);
      InstrumentLeg_91.insert(LegFactor_91.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_91(867526361);
      noLegs_1_1_1.set(LegFlowScheduleType_91);
      InstrumentLeg_91.insert(LegFlowScheduleType_91.getString());
      FIX::LegInstrRegistry LegInstrRegistry_91("STRING_1636695970");
      noLegs_1_1_1.set(LegInstrRegistry_91);
      InstrumentLeg_91.insert(LegInstrRegistry_91.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_91("LOCALMKTDATE_625603462");
      noLegs_1_1_1.set(LegInterestAccrualDate_91);
      InstrumentLeg_91.insert(LegInterestAccrualDate_91.getString());
      FIX::LegIssueDate LegIssueDate_91("LOCALMKTDATE_1682604971");
      noLegs_1_1_1.set(LegIssueDate_91);
      InstrumentLeg_91.insert(LegIssueDate_91.getString());
      FIX::LegIssuer LegIssuer_91("STRING_499665686");
      noLegs_1_1_1.set(LegIssuer_91);
      InstrumentLeg_91.insert(LegIssuer_91.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_91("STRING_566948125");
      noLegs_1_1_1.set(LegLocaleOfIssue_91);
      InstrumentLeg_91.insert(LegLocaleOfIssue_91.getString());
      FIX::LegMaturityDate LegMaturityDate_91("LOCALMKTDATE_1171449528");
      noLegs_1_1_1.set(LegMaturityDate_91);
      InstrumentLeg_91.insert(LegMaturityDate_91.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_91("MONTHYEAR_88743963");
      noLegs_1_1_1.set(LegMaturityMonthYear_91);
      InstrumentLeg_91.insert(LegMaturityMonthYear_91.getString());
      FIX::LegMaturityTime LegMaturityTime_91("TZTIMEONLY_773344921");
      noLegs_1_1_1.set(LegMaturityTime_91);
      InstrumentLeg_91.insert(LegMaturityTime_91.getString());
      FIX::LegOptAttribute LegOptAttribute_91('1');
      noLegs_1_1_1.set(LegOptAttribute_91);
      InstrumentLeg_91.insert(LegOptAttribute_91.getString());
      FIX::LegOptionRatio LegOptionRatio_91;
      LegOptionRatio_91.setString("8847406");
      noLegs_1_1_1.set(LegOptionRatio_91);
      InstrumentLeg_91.insert(LegOptionRatio_91.getString());
      FIX::LegPool LegPool_91("STRING_1103866555");
      noLegs_1_1_1.set(LegPool_91);
      InstrumentLeg_91.insert(LegPool_91.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_91("STRING_2005909098");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_91);
      InstrumentLeg_91.insert(LegPriceUnitOfMeasure_91.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_91;
      LegPriceUnitOfMeasureQty_91.setString("13034775");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_91);
      InstrumentLeg_91.insert(LegPriceUnitOfMeasureQty_91.getString());
      FIX::LegProduct LegProduct_91(125150044);
      noLegs_1_1_1.set(LegProduct_91);
      InstrumentLeg_91.insert(LegProduct_91.getString());
      FIX::LegPutOrCall LegPutOrCall_91(2044448636);
      noLegs_1_1_1.set(LegPutOrCall_91);
      InstrumentLeg_91.insert(LegPutOrCall_91.getString());
      FIX::LegRatioQty LegRatioQty_91;
      LegRatioQty_91.setString("16943830");
      noLegs_1_1_1.set(LegRatioQty_91);
      InstrumentLeg_91.insert(LegRatioQty_91.getString());
      FIX::LegRedemptionDate LegRedemptionDate_91("LOCALMKTDATE_443951261");
      noLegs_1_1_1.set(LegRedemptionDate_91);
      InstrumentLeg_91.insert(LegRedemptionDate_91.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_91("STRING_816989516");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_91);
      InstrumentLeg_91.insert(LegRepoCollateralSecurityType_91.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_91;
      LegRepurchaseRate_91.setString("1.530000");
      noLegs_1_1_1.set(LegRepurchaseRate_91);
      InstrumentLeg_91.insert(LegRepurchaseRate_91.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_91(1627843868);
      noLegs_1_1_1.set(LegRepurchaseTerm_91);
      InstrumentLeg_91.insert(LegRepurchaseTerm_91.getString());
      FIX::LegSecurityDesc LegSecurityDesc_91("STRING_412446899");
      noLegs_1_1_1.set(LegSecurityDesc_91);
      InstrumentLeg_91.insert(LegSecurityDesc_91.getString());
      FIX::LegSecurityExchange LegSecurityExchange_91("EXCHANGE_1352030868");
      noLegs_1_1_1.set(LegSecurityExchange_91);
      InstrumentLeg_91.insert(LegSecurityExchange_91.getString());
      FIX::LegSecurityID LegSecurityID_91("STRING_1455397012");
      noLegs_1_1_1.set(LegSecurityID_91);
      InstrumentLeg_91.insert(LegSecurityID_91.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_91("STRING_924480568");
      noLegs_1_1_1.set(LegSecurityIDSource_91);
      InstrumentLeg_91.insert(LegSecurityIDSource_91.getString());
      FIX::LegSecuritySubType LegSecuritySubType_91("STRING_1122324058");
      noLegs_1_1_1.set(LegSecuritySubType_91);
      InstrumentLeg_91.insert(LegSecuritySubType_91.getString());
      FIX::LegSecurityType LegSecurityType_91("STRING_1129345210");
      noLegs_1_1_1.set(LegSecurityType_91);
      InstrumentLeg_91.insert(LegSecurityType_91.getString());
      FIX::LegSide LegSide_91('1');
      noLegs_1_1_1.set(LegSide_91);
      InstrumentLeg_91.insert(LegSide_91.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_91("STRING_186762954");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_91);
      InstrumentLeg_91.insert(LegStateOrProvinceOfIssue_91.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_91("CAN");
      noLegs_1_1_1.set(LegStrikeCurrency_91);
      InstrumentLeg_91.insert(LegStrikeCurrency_91.getString());
      FIX::LegStrikePrice LegStrikePrice_91;
      LegStrikePrice_91.setString("10542893");
      noLegs_1_1_1.set(LegStrikePrice_91);
      InstrumentLeg_91.insert(LegStrikePrice_91.getString());
      FIX::LegSymbol LegSymbol_91("STRING_1682508294");
      noLegs_1_1_1.set(LegSymbol_91);
      InstrumentLeg_91.insert(LegSymbol_91.getString());
      FIX::LegSymbolSfx LegSymbolSfx_91("STRING_1487038588");
      noLegs_1_1_1.set(LegSymbolSfx_91);
      InstrumentLeg_91.insert(LegSymbolSfx_91.getString());
      FIX::LegTimeUnit LegTimeUnit_91("STRING_589410638");
      noLegs_1_1_1.set(LegTimeUnit_91);
      InstrumentLeg_91.insert(LegTimeUnit_91.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_91("STRING_34690332");
      noLegs_1_1_1.set(LegUnitOfMeasure_91);
      InstrumentLeg_91.insert(LegUnitOfMeasure_91.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_91;
      LegUnitOfMeasureQty_91.setString("20539867");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_91);
      InstrumentLeg_91.insert(LegUnitOfMeasureQty_91.getString());
      all_values.push_back(InstrumentLeg_91);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_161;
        FIX::LegSecurityAltID LegSecurityAltID_161("STRING_123434296");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_161);
        LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltID_161.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_161("STRING_679847986");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_161);
        LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltIDSource_161.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_161);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_67;
    FIX::AttachmentPoint AttachmentPoint_67;
    AttachmentPoint_67.setString("92.280000");
    noRelatedSym_0_1.set(AttachmentPoint_67);
    Instrument_67.insert(AttachmentPoint_67.getString());
    FIX::CFICode CFICode_67("STRING_1008174994");
    noRelatedSym_0_1.set(CFICode_67);
    Instrument_67.insert(CFICode_67.getString());
    FIX::CPProgram CPProgram_67(1);
    noRelatedSym_0_1.set(CPProgram_67);
    Instrument_67.insert(CPProgram_67.getString());
    FIX::CPRegType CPRegType_67("STRING_753664678");
    noRelatedSym_0_1.set(CPRegType_67);
    Instrument_67.insert(CPRegType_67.getString());
    FIX::CapPrice CapPrice_67;
    CapPrice_67.setString("1641688");
    noRelatedSym_0_1.set(CapPrice_67);
    Instrument_67.insert(CapPrice_67.getString());
    FIX::ContractMultiplier ContractMultiplier_67;
    ContractMultiplier_67.setString("19088645");
    noRelatedSym_0_1.set(ContractMultiplier_67);
    Instrument_67.insert(ContractMultiplier_67.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_67(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_67);
    Instrument_67.insert(ContractMultiplierUnit_67.getString());
    FIX::ContractSettlMonth ContractSettlMonth_67("MONTHYEAR_1858551878");
    noRelatedSym_0_1.set(ContractSettlMonth_67);
    Instrument_67.insert(ContractSettlMonth_67.getString());
    FIX::CountryOfIssue CountryOfIssue_67("COUNTRY_205332199");
    noRelatedSym_0_1.set(CountryOfIssue_67);
    Instrument_67.insert(CountryOfIssue_67.getString());
    FIX::CouponPaymentDate CouponPaymentDate_67("LOCALMKTDATE_1467619183");
    noRelatedSym_0_1.set(CouponPaymentDate_67);
    Instrument_67.insert(CouponPaymentDate_67.getString());
    FIX::CouponRate CouponRate_67;
    CouponRate_67.setString("83.830000");
    noRelatedSym_0_1.set(CouponRate_67);
    Instrument_67.insert(CouponRate_67.getString());
    FIX::CreditRating CreditRating_67("STRING_1833176067");
    noRelatedSym_0_1.set(CreditRating_67);
    Instrument_67.insert(CreditRating_67.getString());
    FIX::DatedDate DatedDate_67("LOCALMKTDATE_1880066082");
    noRelatedSym_0_1.set(DatedDate_67);
    Instrument_67.insert(DatedDate_67.getString());
    FIX::DetachmentPoint DetachmentPoint_67;
    DetachmentPoint_67.setString("92.510000");
    noRelatedSym_0_1.set(DetachmentPoint_67);
    Instrument_67.insert(DetachmentPoint_67.getString());
    FIX::EncodedIssuer EncodedIssuer_67("DATA_1141089432");
    noRelatedSym_0_1.set(EncodedIssuer_67);
    Instrument_67.insert(EncodedIssuer_67.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_67(657063002);
    noRelatedSym_0_1.set(EncodedIssuerLen_67);
    Instrument_67.insert(EncodedIssuerLen_67.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_67("DATA_717219662");
    noRelatedSym_0_1.set(EncodedSecurityDesc_67);
    Instrument_67.insert(EncodedSecurityDesc_67.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_67(122950994);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_67);
    Instrument_67.insert(EncodedSecurityDescLen_67.getString());
    FIX::ExerciseStyle ExerciseStyle_67(0);
    noRelatedSym_0_1.set(ExerciseStyle_67);
    Instrument_67.insert(ExerciseStyle_67.getString());
    FIX::Factor Factor_67;
    Factor_67.setString("9039826");
    noRelatedSym_0_1.set(Factor_67);
    Instrument_67.insert(Factor_67.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_67(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_67);
    Instrument_67.insert(FlexProductEligibilityIndicator_67.getString());
    FIX::FlexibleIndicator FlexibleIndicator_67(false);
    noRelatedSym_0_1.set(FlexibleIndicator_67);
    Instrument_67.insert(FlexibleIndicator_67.getString());
    FIX::FloorPrice FloorPrice_67;
    FloorPrice_67.setString("19582719");
    noRelatedSym_0_1.set(FloorPrice_67);
    Instrument_67.insert(FloorPrice_67.getString());
    FIX::FlowScheduleType FlowScheduleType_67(3);
    noRelatedSym_0_1.set(FlowScheduleType_67);
    Instrument_67.insert(FlowScheduleType_67.getString());
    FIX::InstrRegistry InstrRegistry_67("STRING_601345277");
    noRelatedSym_0_1.set(InstrRegistry_67);
    Instrument_67.insert(InstrRegistry_67.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_67('4');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_67);
    Instrument_67.insert(InstrmtAssignmentMethod_67.getString());
    FIX::InterestAccrualDate InterestAccrualDate_67("LOCALMKTDATE_1885961946");
    noRelatedSym_0_1.set(InterestAccrualDate_67);
    Instrument_67.insert(InterestAccrualDate_67.getString());
    FIX::IssueDate IssueDate_67("LOCALMKTDATE_507848342");
    noRelatedSym_0_1.set(IssueDate_67);
    Instrument_67.insert(IssueDate_67.getString());
    FIX::Issuer Issuer_67("STRING_13575440");
    noRelatedSym_0_1.set(Issuer_67);
    Instrument_67.insert(Issuer_67.getString());
    FIX::ListMethod ListMethod_67(0);
    noRelatedSym_0_1.set(ListMethod_67);
    Instrument_67.insert(ListMethod_67.getString());
    FIX::LocaleOfIssue LocaleOfIssue_67("STRING_1187696328");
    noRelatedSym_0_1.set(LocaleOfIssue_67);
    Instrument_67.insert(LocaleOfIssue_67.getString());
    FIX::MaturityDate MaturityDate_67("LOCALMKTDATE_908814668");
    noRelatedSym_0_1.set(MaturityDate_67);
    Instrument_67.insert(MaturityDate_67.getString());
    FIX::MaturityMonthYear MaturityMonthYear_67("MONTHYEAR_870087588");
    noRelatedSym_0_1.set(MaturityMonthYear_67);
    Instrument_67.insert(MaturityMonthYear_67.getString());
    FIX::MaturityTime MaturityTime_67("TZTIMEONLY_823927222");
    noRelatedSym_0_1.set(MaturityTime_67);
    Instrument_67.insert(MaturityTime_67.getString());
    FIX::MinPriceIncrement MinPriceIncrement_67;
    MinPriceIncrement_67.setString("16624793");
    noRelatedSym_0_1.set(MinPriceIncrement_67);
    Instrument_67.insert(MinPriceIncrement_67.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_67;
    MinPriceIncrementAmount_67.setString("10342564");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_67);
    Instrument_67.insert(MinPriceIncrementAmount_67.getString());
    FIX::NTPositionLimit NTPositionLimit_67(585308160);
    noRelatedSym_0_1.set(NTPositionLimit_67);
    Instrument_67.insert(NTPositionLimit_67.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_67;
    NotionalPercentageOutstanding_67.setString("53.650000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_67);
    Instrument_67.insert(NotionalPercentageOutstanding_67.getString());
    FIX::OptAttribute OptAttribute_67('7');
    noRelatedSym_0_1.set(OptAttribute_67);
    Instrument_67.insert(OptAttribute_67.getString());
    FIX::OptPayoutAmount OptPayoutAmount_67;
    OptPayoutAmount_67.setString("7906403");
    noRelatedSym_0_1.set(OptPayoutAmount_67);
    Instrument_67.insert(OptPayoutAmount_67.getString());
    FIX::OptPayoutType OptPayoutType_67(2);
    noRelatedSym_0_1.set(OptPayoutType_67);
    Instrument_67.insert(OptPayoutType_67.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_67;
    OriginalNotionalPercentageOutstanding_67.setString("30.520000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_67);
    Instrument_67.insert(OriginalNotionalPercentageOutstanding_67.getString());
    FIX::Pool Pool_67("STRING_476332779");
    noRelatedSym_0_1.set(Pool_67);
    Instrument_67.insert(Pool_67.getString());
    FIX::PositionLimit PositionLimit_67(1365826982);
    noRelatedSym_0_1.set(PositionLimit_67);
    Instrument_67.insert(PositionLimit_67.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_67("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_67);
    Instrument_67.insert(PriceQuoteMethod_67.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_67("STRING_1617422211");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_67);
    Instrument_67.insert(PriceUnitOfMeasure_67.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_67;
    PriceUnitOfMeasureQty_67.setString("20228899");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_67);
    Instrument_67.insert(PriceUnitOfMeasureQty_67.getString());
    FIX::Product Product_69(2);
    noRelatedSym_0_1.set(Product_69);
    Instrument_67.insert(Product_69.getString());
    FIX::ProductComplex ProductComplex_67("STRING_1740373206");
    noRelatedSym_0_1.set(ProductComplex_67);
    Instrument_67.insert(ProductComplex_67.getString());
    FIX::PutOrCall PutOrCall_67(1);
    noRelatedSym_0_1.set(PutOrCall_67);
    Instrument_67.insert(PutOrCall_67.getString());
    FIX::RedemptionDate RedemptionDate_67("LOCALMKTDATE_204287285");
    noRelatedSym_0_1.set(RedemptionDate_67);
    Instrument_67.insert(RedemptionDate_67.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_67("STRING_1909136525");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_67);
    Instrument_67.insert(RepoCollateralSecurityType_67.getString());
    FIX::RepurchaseRate RepurchaseRate_67;
    RepurchaseRate_67.setString("18.840000");
    noRelatedSym_0_1.set(RepurchaseRate_67);
    Instrument_67.insert(RepurchaseRate_67.getString());
    FIX::RepurchaseTerm RepurchaseTerm_67(15075568);
    noRelatedSym_0_1.set(RepurchaseTerm_67);
    Instrument_67.insert(RepurchaseTerm_67.getString());
    FIX::RestructuringType RestructuringType_67("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_67);
    Instrument_67.insert(RestructuringType_67.getString());
    FIX::SecurityDesc SecurityDesc_67("STRING_2138897161");
    noRelatedSym_0_1.set(SecurityDesc_67);
    Instrument_67.insert(SecurityDesc_67.getString());
    FIX::SecurityExchange SecurityExchange_67("EXCHANGE_415274490");
    noRelatedSym_0_1.set(SecurityExchange_67);
    Instrument_67.insert(SecurityExchange_67.getString());
    FIX::SecurityGroup SecurityGroup_67("STRING_1351402788");
    noRelatedSym_0_1.set(SecurityGroup_67);
    Instrument_67.insert(SecurityGroup_67.getString());
    FIX::SecurityID SecurityID_67("STRING_499261855");
    noRelatedSym_0_1.set(SecurityID_67);
    Instrument_67.insert(SecurityID_67.getString());
    FIX::SecurityIDSource SecurityIDSource_67("STRING_F");
    noRelatedSym_0_1.set(SecurityIDSource_67);
    Instrument_67.insert(SecurityIDSource_67.getString());
    FIX::SecurityStatus SecurityStatus_67("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_67);
    Instrument_67.insert(SecurityStatus_67.getString());
    FIX::SecuritySubType SecuritySubType_68("STRING_1686958184");
    noRelatedSym_0_1.set(SecuritySubType_68);
    Instrument_67.insert(SecuritySubType_68.getString());
    FIX::SecurityType SecurityType_69("STRING_YCD");
    noRelatedSym_0_1.set(SecurityType_69);
    Instrument_67.insert(SecurityType_69.getString());
    FIX::Seniority Seniority_67("STRING_SD");
    noRelatedSym_0_1.set(Seniority_67);
    Instrument_67.insert(Seniority_67.getString());
    FIX::SettlMethod SettlMethod_67('C');
    noRelatedSym_0_1.set(SettlMethod_67);
    Instrument_67.insert(SettlMethod_67.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_67("STRING_852660297");
    noRelatedSym_0_1.set(SettleOnOpenFlag_67);
    Instrument_67.insert(SettleOnOpenFlag_67.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_67("STRING_970175761");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_67);
    Instrument_67.insert(StateOrProvinceOfIssue_67.getString());
    FIX::StrikeCurrency StrikeCurrency_67("USD");
    noRelatedSym_0_1.set(StrikeCurrency_67);
    Instrument_67.insert(StrikeCurrency_67.getString());
    FIX::StrikeMultiplier StrikeMultiplier_67;
    StrikeMultiplier_67.setString("17155004");
    noRelatedSym_0_1.set(StrikeMultiplier_67);
    Instrument_67.insert(StrikeMultiplier_67.getString());
    FIX::StrikePrice StrikePrice_67;
    StrikePrice_67.setString("17393502");
    noRelatedSym_0_1.set(StrikePrice_67);
    Instrument_67.insert(StrikePrice_67.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_67(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_67);
    Instrument_67.insert(StrikePriceBoundaryMethod_67.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_67;
    StrikePriceBoundaryPrecision_67.setString("98.330000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_67);
    Instrument_67.insert(StrikePriceBoundaryPrecision_67.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_67(3);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_67);
    Instrument_67.insert(StrikePriceDeterminationMethod_67.getString());
    FIX::StrikeValue StrikeValue_67;
    StrikeValue_67.setString("18698735");
    noRelatedSym_0_1.set(StrikeValue_67);
    Instrument_67.insert(StrikeValue_67.getString());
    FIX::Symbol Symbol_67("STRING_1434258489");
    noRelatedSym_0_1.set(Symbol_67);
    Instrument_67.insert(Symbol_67.getString());
    FIX::SymbolSfx SymbolSfx_67("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_67);
    Instrument_67.insert(SymbolSfx_67.getString());
    FIX::TimeUnit TimeUnit_67("STRING_Min");
    noRelatedSym_0_1.set(TimeUnit_67);
    Instrument_67.insert(TimeUnit_67.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_67(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_67);
    Instrument_67.insert(UnderlyingPriceDeterminationMethod_67.getString());
    FIX::UnitOfMeasure UnitOfMeasure_67("STRING_USD");
    noRelatedSym_0_1.set(UnitOfMeasure_67);
    Instrument_67.insert(UnitOfMeasure_67.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_67;
    UnitOfMeasureQty_67.setString("20210414");
    noRelatedSym_0_1.set(UnitOfMeasureQty_67);
    Instrument_67.insert(UnitOfMeasureQty_67.getString());
    FIX::ValuationMethod ValuationMethod_67("STRING_CDSD");
    noRelatedSym_0_1.set(ValuationMethod_67);
    Instrument_67.insert(ValuationMethod_67.getString());
    all_values.push_back(Instrument_67);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_128;
      FIX::ComplexEventCondition ComplexEventCondition_128(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventCondition_128.getString());
      FIX::ComplexEventPrice ComplexEventPrice_128;
      ComplexEventPrice_128.setString("9539260");
      noComplexEvents_1_1_0.set(ComplexEventPrice_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPrice_128.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_128(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryMethod_128.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_128;
      ComplexEventPriceBoundaryPrecision_128.setString("31.780000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryPrecision_128.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_128(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceTimeType_128.getString());
      FIX::ComplexEventType ComplexEventType_128(6);
      noComplexEvents_1_1_0.set(ComplexEventType_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexEventType_128.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_128;
      ComplexOptPayoutAmount_128.setString("19017850");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_128);
      ComplexEvents_NoComplexEvents_128.insert(ComplexOptPayoutAmount_128.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_128);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_263;
        FIX::ComplexEventEndDate ComplexEventEndDate_263(FIX::UTCTIMESTAMP(1, 4, 45, 8, 22010));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_263);
        ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventEndDate_263.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_263(FIX::UTCTIMESTAMP(0, 28, 50, 26, 102004));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_263);
        ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventStartDate_263.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_263);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_522;
          FIX::ComplexEventEndTime ComplexEventEndTime_522(FIX::UTCTIMEONLY(22, 27, 41));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_522);
          ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventEndTime_522.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_522(FIX::UTCTIMEONLY(7, 57, 31));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_522);
          ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventStartTime_522.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_522);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_523;
          FIX::ComplexEventEndTime ComplexEventEndTime_523(FIX::UTCTIMEONLY(1, 43, 42));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_523);
          ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventEndTime_523.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_523(FIX::UTCTIMEONLY(7, 47, 9));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_523);
          ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventStartTime_523.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_523);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_524;
          FIX::ComplexEventEndTime ComplexEventEndTime_524(FIX::UTCTIMEONLY(5, 13, 31));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_524);
          ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventEndTime_524.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_524(FIX::UTCTIMEONLY(18, 9, 48));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_524);
          ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventStartTime_524.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_524);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_264;
        FIX::ComplexEventEndDate ComplexEventEndDate_264(FIX::UTCTIMESTAMP(17, 38, 13, 3, 72000));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_264);
        ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventEndDate_264.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_264(FIX::UTCTIMESTAMP(9, 7, 30, 15, 42003));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_264);
        ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventStartDate_264.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_264);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_525;
          FIX::ComplexEventEndTime ComplexEventEndTime_525(FIX::UTCTIMEONLY(21, 26, 21));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_525);
          ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventEndTime_525.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_525(FIX::UTCTIMEONLY(21, 0, 14));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_525);
          ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventStartTime_525.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_525);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_129;
      FIX::ComplexEventCondition ComplexEventCondition_129(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventCondition_129.getString());
      FIX::ComplexEventPrice ComplexEventPrice_129;
      ComplexEventPrice_129.setString("4921076");
      noComplexEvents_1_1_1.set(ComplexEventPrice_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPrice_129.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_129(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryMethod_129.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_129;
      ComplexEventPriceBoundaryPrecision_129.setString("62.570000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryPrecision_129.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_129(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceTimeType_129.getString());
      FIX::ComplexEventType ComplexEventType_129(5);
      noComplexEvents_1_1_1.set(ComplexEventType_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexEventType_129.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_129;
      ComplexOptPayoutAmount_129.setString("6800337");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_129);
      ComplexEvents_NoComplexEvents_129.insert(ComplexOptPayoutAmount_129.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_129);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_265;
        FIX::ComplexEventEndDate ComplexEventEndDate_265(FIX::UTCTIMESTAMP(12, 4, 5, 19, 122003));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_265);
        ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventEndDate_265.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_265(FIX::UTCTIMESTAMP(12, 52, 51, 23, 82001));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_265);
        ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventStartDate_265.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_265);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_526;
          FIX::ComplexEventEndTime ComplexEventEndTime_526(FIX::UTCTIMEONLY(4, 24, 59));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_526);
          ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventEndTime_526.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_526(FIX::UTCTIMEONLY(1, 52, 39));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_526);
          ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventStartTime_526.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_526);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_527;
          FIX::ComplexEventEndTime ComplexEventEndTime_527(FIX::UTCTIMEONLY(21, 6, 29));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_527);
          ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventEndTime_527.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_527(FIX::UTCTIMEONLY(23, 48, 26));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_527);
          ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventStartTime_527.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_527);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_266;
        FIX::ComplexEventEndDate ComplexEventEndDate_266(FIX::UTCTIMESTAMP(5, 23, 20, 0, 32011));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_266);
        ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventEndDate_266.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_266(FIX::UTCTIMESTAMP(14, 50, 5, 1, 102010));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_266);
        ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventStartDate_266.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_266);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_528;
          FIX::ComplexEventEndTime ComplexEventEndTime_528(FIX::UTCTIMEONLY(0, 40, 19));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_528);
          ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventEndTime_528.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_528(FIX::UTCTIMEONLY(18, 11, 40));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_528);
          ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventStartTime_528.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_528);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_267;
        FIX::ComplexEventEndDate ComplexEventEndDate_267(FIX::UTCTIMESTAMP(9, 38, 47, 21, 22012));
        noComplexEventDates_1_1_2_2.set(ComplexEventEndDate_267);
        ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventEndDate_267.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_267(FIX::UTCTIMESTAMP(9, 57, 6, 5, 22014));
        noComplexEventDates_1_1_2_2.set(ComplexEventStartDate_267);
        ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventStartDate_267.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_267);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_529;
          FIX::ComplexEventEndTime ComplexEventEndTime_529(FIX::UTCTIMEONLY(14, 17, 0));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventEndTime_529);
          ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventEndTime_529.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_529(FIX::UTCTIMEONLY(6, 8, 52));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventStartTime_529);
          ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventStartTime_529.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_529);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_128;
      FIX::EventDate EventDate_128("LOCALMKTDATE_1571076104");
      noEvents_1_1_0.set(EventDate_128);
      EvntGrp_NoEvents_128.insert(EventDate_128.getString());
      FIX::EventPx EventPx_128;
      EventPx_128.setString("19788857");
      noEvents_1_1_0.set(EventPx_128);
      EvntGrp_NoEvents_128.insert(EventPx_128.getString());
      FIX::EventText EventText_128("STRING_1534568454");
      noEvents_1_1_0.set(EventText_128);
      EvntGrp_NoEvents_128.insert(EventText_128.getString());
      FIX::EventTime EventTime_128(FIX::UTCTIMESTAMP(18, 5, 17, 20, 72001));
      noEvents_1_1_0.set(EventTime_128);
      EvntGrp_NoEvents_128.insert(EventTime_128.getString());
      FIX::EventType EventType_128(17);
      noEvents_1_1_0.set(EventType_128);
      EvntGrp_NoEvents_128.insert(EventType_128.getString());
      all_values.push_back(EvntGrp_NoEvents_128);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_129;
      FIX::EventDate EventDate_129("LOCALMKTDATE_1115671675");
      noEvents_1_1_1.set(EventDate_129);
      EvntGrp_NoEvents_129.insert(EventDate_129.getString());
      FIX::EventPx EventPx_129;
      EventPx_129.setString("11389762");
      noEvents_1_1_1.set(EventPx_129);
      EvntGrp_NoEvents_129.insert(EventPx_129.getString());
      FIX::EventText EventText_129("STRING_1777685224");
      noEvents_1_1_1.set(EventText_129);
      EvntGrp_NoEvents_129.insert(EventText_129.getString());
      FIX::EventTime EventTime_129(FIX::UTCTIMESTAMP(21, 1, 45, 19, 72010));
      noEvents_1_1_1.set(EventTime_129);
      EvntGrp_NoEvents_129.insert(EventTime_129.getString());
      FIX::EventType EventType_129(7);
      noEvents_1_1_1.set(EventType_129);
      EvntGrp_NoEvents_129.insert(EventType_129.getString());
      all_values.push_back(EvntGrp_NoEvents_129);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_125;
      FIX::InstrumentPartyID InstrumentPartyID_125("STRING_302243544");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_125);
      InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyID_125.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_125('6');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_125);
      InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyIDSource_125.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_125(719735489);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_125);
      InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyRole_125.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_125);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246;
        FIX::InstrumentPartySubID InstrumentPartySubID_246("STRING_1613748241");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_246);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubID_246.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_246(1330658977);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_246);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubIDType_246.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_126;
      FIX::InstrumentPartyID InstrumentPartyID_126("STRING_843169724");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_126);
      InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyID_126.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_126('7');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_126);
      InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyIDSource_126.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_126(754251433);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_126);
      InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyRole_126.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_126);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247;
        FIX::InstrumentPartySubID InstrumentPartySubID_247("STRING_182349554");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_247);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubID_247.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_247(781272410);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_247);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubIDType_247.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_141;
      FIX::SecurityAltID SecurityAltID_141("STRING_26677091");
      noSecurityAltID_1_1_0.set(SecurityAltID_141);
      SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltID_141.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_141("STRING_1439706787");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_141);
      SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltIDSource_141.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_141);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_134;
    FIX::SecurityXML SecurityXML_135("XMLDATA_765975560");
    noRelatedSym_0_1.set(SecurityXML_135);
    FIX::SecurityXMLLen SecurityXMLLen_67(1072029462);
    noRelatedSym_0_1.set(SecurityXMLLen_67);
    FIX::SecurityXMLSchema SecurityXMLSchema_67("STRING_575068074");
    noRelatedSym_0_1.set(SecurityXMLSchema_67);
    SecurityXML_134.insert(SecurityXMLSchema_67.getString());
    all_values.push_back(SecurityXML_134);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_114;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_114("DATA_40217489");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingIssuer_114.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_114(1714044343);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingIssuerLen_114.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_114("DATA_311715044");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDesc_114.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_114(755274908);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDescLen_114.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_114;
      UnderlyingAdjustedQuantity_114.setString("11650013");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_114);
      UnderlyingInstrument_114.insert(UnderlyingAdjustedQuantity_114.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_114;
      UnderlyingAllocationPercent_114.setString("92.370000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_114);
      UnderlyingInstrument_114.insert(UnderlyingAllocationPercent_114.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_114;
      UnderlyingAttachmentPoint_114.setString("66.540000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_114);
      UnderlyingInstrument_114.insert(UnderlyingAttachmentPoint_114.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_114("STRING_2104029831");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_114);
      UnderlyingInstrument_114.insert(UnderlyingCFICode_114.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_114("STRING_1128910219");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_114);
      UnderlyingInstrument_114.insert(UnderlyingCPProgram_114.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_114("STRING_1876839976");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_114);
      UnderlyingInstrument_114.insert(UnderlyingCPRegType_114.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_114;
      UnderlyingCapValue_114.setString("16818351");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_114);
      UnderlyingInstrument_114.insert(UnderlyingCapValue_114.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_114;
      UnderlyingCashAmount_114.setString("522686");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_114);
      UnderlyingInstrument_114.insert(UnderlyingCashAmount_114.getString());
      FIX::UnderlyingCashType UnderlyingCashType_114("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_114);
      UnderlyingInstrument_114.insert(UnderlyingCashType_114.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_114;
      UnderlyingContractMultiplier_114.setString("1413904");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_114);
      UnderlyingInstrument_114.insert(UnderlyingContractMultiplier_114.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_114(772004178);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_114);
      UnderlyingInstrument_114.insert(UnderlyingContractMultiplierUnit_114.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_114("COUNTRY_2116454613");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_114);
      UnderlyingInstrument_114.insert(UnderlyingCountryOfIssue_114.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_114("LOCALMKTDATE_1755138738");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_114);
      UnderlyingInstrument_114.insert(UnderlyingCouponPaymentDate_114.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_114;
      UnderlyingCouponRate_114.setString("31.560000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_114);
      UnderlyingInstrument_114.insert(UnderlyingCouponRate_114.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_114("STRING_812140689");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_114);
      UnderlyingInstrument_114.insert(UnderlyingCreditRating_114.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_114("EUR");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_114);
      UnderlyingInstrument_114.insert(UnderlyingCurrency_114.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_114;
      UnderlyingCurrentValue_114.setString("14867124");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_114);
      UnderlyingInstrument_114.insert(UnderlyingCurrentValue_114.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_114;
      UnderlyingDetachmentPoint_114.setString("93.920000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_114);
      UnderlyingInstrument_114.insert(UnderlyingDetachmentPoint_114.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_114;
      UnderlyingDirtyPrice_114.setString("14907033");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_114);
      UnderlyingInstrument_114.insert(UnderlyingDirtyPrice_114.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_114;
      UnderlyingEndPrice_114.setString("9569837");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_114);
      UnderlyingInstrument_114.insert(UnderlyingEndPrice_114.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_114;
      UnderlyingEndValue_114.setString("6119464");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_114);
      UnderlyingInstrument_114.insert(UnderlyingEndValue_114.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_114(782926491);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_114);
      UnderlyingInstrument_114.insert(UnderlyingExerciseStyle_114.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_114;
      UnderlyingFXRate_114.setString("17229593");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_114);
      UnderlyingInstrument_114.insert(UnderlyingFXRate_114.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_114('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_114);
      UnderlyingInstrument_114.insert(UnderlyingFXRateCalc_114.getString());
      FIX::UnderlyingFactor UnderlyingFactor_114;
      UnderlyingFactor_114.setString("13579945");
      noUnderlyings_1_1_0.set(UnderlyingFactor_114);
      UnderlyingInstrument_114.insert(UnderlyingFactor_114.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_114(256989170);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_114);
      UnderlyingInstrument_114.insert(UnderlyingFlowScheduleType_114.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_114("STRING_1724193435");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_114);
      UnderlyingInstrument_114.insert(UnderlyingInstrRegistry_114.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_114("LOCALMKTDATE_924555261");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_114);
      UnderlyingInstrument_114.insert(UnderlyingIssueDate_114.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_114("STRING_568704214");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_114);
      UnderlyingInstrument_114.insert(UnderlyingIssuer_114.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_114("STRING_331984695");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_114);
      UnderlyingInstrument_114.insert(UnderlyingLocaleOfIssue_114.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_114("LOCALMKTDATE_2089556633");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_114);
      UnderlyingInstrument_114.insert(UnderlyingMaturityDate_114.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_114("MONTHYEAR_755593451");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_114);
      UnderlyingInstrument_114.insert(UnderlyingMaturityMonthYear_114.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_114("TZTIMEONLY_27587701");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_114);
      UnderlyingInstrument_114.insert(UnderlyingMaturityTime_114.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_114;
      UnderlyingNotionalPercentageOutstanding_114.setString("28.170000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_114);
      UnderlyingInstrument_114.insert(UnderlyingNotionalPercentageOutstanding_114.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_114('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_114);
      UnderlyingInstrument_114.insert(UnderlyingOptAttribute_114.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_114;
      UnderlyingOriginalNotionalPercentageOutstanding_114.setString("76.770000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_114);
      UnderlyingInstrument_114.insert(UnderlyingOriginalNotionalPercentageOutstanding_114.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_114("STRING_1580454358");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_114);
      UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasure_114.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_114;
      UnderlyingPriceUnitOfMeasureQty_114.setString("19367723");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_114);
      UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasureQty_114.getString());
      FIX::UnderlyingProduct UnderlyingProduct_114(1936027550);
      noUnderlyings_1_1_0.set(UnderlyingProduct_114);
      UnderlyingInstrument_114.insert(UnderlyingProduct_114.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_114(1721844855);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_114);
      UnderlyingInstrument_114.insert(UnderlyingPutOrCall_114.getString());
      FIX::UnderlyingPx UnderlyingPx_114;
      UnderlyingPx_114.setString("5612928");
      noUnderlyings_1_1_0.set(UnderlyingPx_114);
      UnderlyingInstrument_114.insert(UnderlyingPx_114.getString());
      FIX::UnderlyingQty UnderlyingQty_114;
      UnderlyingQty_114.setString("19049985");
      noUnderlyings_1_1_0.set(UnderlyingQty_114);
      UnderlyingInstrument_114.insert(UnderlyingQty_114.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_114("LOCALMKTDATE_1329499945");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_114);
      UnderlyingInstrument_114.insert(UnderlyingRedemptionDate_114.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_114("STRING_516472398");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_114);
      UnderlyingInstrument_114.insert(UnderlyingRepoCollateralSecurityType_114.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_114;
      UnderlyingRepurchaseRate_114.setString("55.560000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_114);
      UnderlyingInstrument_114.insert(UnderlyingRepurchaseRate_114.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_114(1732419783);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_114);
      UnderlyingInstrument_114.insert(UnderlyingRepurchaseTerm_114.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_114("STRING_1225903339");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_114);
      UnderlyingInstrument_114.insert(UnderlyingRestructuringType_114.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_114("STRING_2056368035");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityDesc_114.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_114("EXCHANGE_170205527");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityExchange_114.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_114("STRING_569123043");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityID_114.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_114("STRING_865868177");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityIDSource_114.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_114("STRING_782152010");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_114);
      UnderlyingInstrument_114.insert(UnderlyingSecuritySubType_114.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_114("STRING_1352049535");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityType_114.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_114("STRING_441343879");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_114);
      UnderlyingInstrument_114.insert(UnderlyingSeniority_114.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_114("STRING_318644308");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_114);
      UnderlyingInstrument_114.insert(UnderlyingSettlMethod_114.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_114(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_114);
      UnderlyingInstrument_114.insert(UnderlyingSettlementType_114.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_114;
      UnderlyingStartValue_114.setString("6983330");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_114);
      UnderlyingInstrument_114.insert(UnderlyingStartValue_114.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_114("STRING_2042837743");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_114);
      UnderlyingInstrument_114.insert(UnderlyingStateOrProvinceOfIssue_114.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_114("EUR");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_114);
      UnderlyingInstrument_114.insert(UnderlyingStrikeCurrency_114.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_114;
      UnderlyingStrikePrice_114.setString("2273387");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_114);
      UnderlyingInstrument_114.insert(UnderlyingStrikePrice_114.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_114("STRING_1429188699");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_114);
      UnderlyingInstrument_114.insert(UnderlyingSymbol_114.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_114("STRING_2022630714");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_114);
      UnderlyingInstrument_114.insert(UnderlyingSymbolSfx_114.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_114("STRING_254926492");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_114);
      UnderlyingInstrument_114.insert(UnderlyingTimeUnit_114.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_114("STRING_1327807868");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_114);
      UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasure_114.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_114;
      UnderlyingUnitOfMeasureQty_114.setString("17596507");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_114);
      UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasureQty_114.getString());
      all_values.push_back(UnderlyingInstrument_114);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_227;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_227("STRING_760778579");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_227);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltID_227.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_227("STRING_1548939448");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_227);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltIDSource_227.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_228;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_228("STRING_1947898071");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_228);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltID_228.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_228("STRING_335139786");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_228);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltIDSource_228.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
        FIX::UnderlyingStipType UnderlyingStipType_218("STRING_1705412938");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_218);
        UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipType_218.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_218("STRING_1664639731");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_218);
        UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipValue_218.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_219;
        FIX::UnderlyingStipType UnderlyingStipType_219("STRING_479221088");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_219);
        UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipType_219.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_219("STRING_127584847");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_219);
        UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipValue_219.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_219);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_230;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_230("STRING_1705124427");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_230);
        UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyID_230.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_230('3');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_230);
        UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyIDSource_230.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_230(1419781393);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_230);
        UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyRole_230.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_230);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_451("STRING_902337411");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_451);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubID_451.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_451(54449755);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_451);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubIDType_451.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_452("STRING_1478813358");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_452);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubID_452.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_452(1343681290);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_452);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubIDType_452.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_453("STRING_373094063");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_453);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubID_453.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_453(2041373811);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_453);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubIDType_453.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_231;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_231("STRING_2042014339");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_231);
        UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyID_231.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_231('2');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_231);
        UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyIDSource_231.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_231(1381005877);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_231);
        UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyRole_231.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_231);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_454("STRING_495786949");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_454);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubID_454.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_454(662710928);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_454);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubIDType_454.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_232;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_232("STRING_1036715020");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_232);
        UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyID_232.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_232('7');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_232);
        UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyIDSource_232.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_232(1990518797);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_232);
        UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyRole_232.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_232);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_455("STRING_762583962");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_455);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubID_455.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_455(603813728);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_455);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubIDType_455.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_2;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_2;
    FIX::PrevClosePx PrevClosePx_16;
    PrevClosePx_16.setString("503379");
    noRelatedSym_0_2.set(PrevClosePx_16);
    RFQReqGrp_NoRelatedSym_2.insert(PrevClosePx_16.getString());
    FIX::QuoteRequestType QuoteRequestType_6(1);
    noRelatedSym_0_2.set(QuoteRequestType_6);
    RFQReqGrp_NoRelatedSym_2.insert(QuoteRequestType_6.getString());
    FIX::QuoteType QuoteType_14(2);
    noRelatedSym_0_2.set(QuoteType_14);
    RFQReqGrp_NoRelatedSym_2.insert(QuoteType_14.getString());
    FIX::TradingSessionID TradingSessionID_71("STRING_5");
    noRelatedSym_0_2.set(TradingSessionID_71);
    RFQReqGrp_NoRelatedSym_2.insert(TradingSessionID_71.getString());
    FIX::TradingSessionSubID TradingSessionSubID_71("STRING_3");
    noRelatedSym_0_2.set(TradingSessionSubID_71);
    RFQReqGrp_NoRelatedSym_2.insert(TradingSessionSubID_71.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_2);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_92;
      FIX::EncodedLegIssuer EncodedLegIssuer_92("DATA_492307686");
      noLegs_2_1_0.set(EncodedLegIssuer_92);
      InstrumentLeg_92.insert(EncodedLegIssuer_92.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_92(248512523);
      noLegs_2_1_0.set(EncodedLegIssuerLen_92);
      InstrumentLeg_92.insert(EncodedLegIssuerLen_92.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_92("DATA_1705685463");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_92);
      InstrumentLeg_92.insert(EncodedLegSecurityDesc_92.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_92(49948466);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_92);
      InstrumentLeg_92.insert(EncodedLegSecurityDescLen_92.getString());
      FIX::LegCFICode LegCFICode_92("STRING_284981757");
      noLegs_2_1_0.set(LegCFICode_92);
      InstrumentLeg_92.insert(LegCFICode_92.getString());
      FIX::LegContractMultiplier LegContractMultiplier_92;
      LegContractMultiplier_92.setString("9779832");
      noLegs_2_1_0.set(LegContractMultiplier_92);
      InstrumentLeg_92.insert(LegContractMultiplier_92.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_92(176712289);
      noLegs_2_1_0.set(LegContractMultiplierUnit_92);
      InstrumentLeg_92.insert(LegContractMultiplierUnit_92.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_92("MONTHYEAR_1187319168");
      noLegs_2_1_0.set(LegContractSettlMonth_92);
      InstrumentLeg_92.insert(LegContractSettlMonth_92.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_92("COUNTRY_1032432963");
      noLegs_2_1_0.set(LegCountryOfIssue_92);
      InstrumentLeg_92.insert(LegCountryOfIssue_92.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_92("LOCALMKTDATE_1655525647");
      noLegs_2_1_0.set(LegCouponPaymentDate_92);
      InstrumentLeg_92.insert(LegCouponPaymentDate_92.getString());
      FIX::LegCouponRate LegCouponRate_92;
      LegCouponRate_92.setString("68.100000");
      noLegs_2_1_0.set(LegCouponRate_92);
      InstrumentLeg_92.insert(LegCouponRate_92.getString());
      FIX::LegCreditRating LegCreditRating_92("STRING_1405527027");
      noLegs_2_1_0.set(LegCreditRating_92);
      InstrumentLeg_92.insert(LegCreditRating_92.getString());
      FIX::LegCurrency LegCurrency_92("EUR");
      noLegs_2_1_0.set(LegCurrency_92);
      InstrumentLeg_92.insert(LegCurrency_92.getString());
      FIX::LegDatedDate LegDatedDate_92("LOCALMKTDATE_1673975185");
      noLegs_2_1_0.set(LegDatedDate_92);
      InstrumentLeg_92.insert(LegDatedDate_92.getString());
      FIX::LegExerciseStyle LegExerciseStyle_92(782938039);
      noLegs_2_1_0.set(LegExerciseStyle_92);
      InstrumentLeg_92.insert(LegExerciseStyle_92.getString());
      FIX::LegFactor LegFactor_92;
      LegFactor_92.setString("14396154");
      noLegs_2_1_0.set(LegFactor_92);
      InstrumentLeg_92.insert(LegFactor_92.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_92(22278486);
      noLegs_2_1_0.set(LegFlowScheduleType_92);
      InstrumentLeg_92.insert(LegFlowScheduleType_92.getString());
      FIX::LegInstrRegistry LegInstrRegistry_92("STRING_1445648967");
      noLegs_2_1_0.set(LegInstrRegistry_92);
      InstrumentLeg_92.insert(LegInstrRegistry_92.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_92("LOCALMKTDATE_328846827");
      noLegs_2_1_0.set(LegInterestAccrualDate_92);
      InstrumentLeg_92.insert(LegInterestAccrualDate_92.getString());
      FIX::LegIssueDate LegIssueDate_92("LOCALMKTDATE_772991927");
      noLegs_2_1_0.set(LegIssueDate_92);
      InstrumentLeg_92.insert(LegIssueDate_92.getString());
      FIX::LegIssuer LegIssuer_92("STRING_1288684116");
      noLegs_2_1_0.set(LegIssuer_92);
      InstrumentLeg_92.insert(LegIssuer_92.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_92("STRING_977728936");
      noLegs_2_1_0.set(LegLocaleOfIssue_92);
      InstrumentLeg_92.insert(LegLocaleOfIssue_92.getString());
      FIX::LegMaturityDate LegMaturityDate_92("LOCALMKTDATE_1535575890");
      noLegs_2_1_0.set(LegMaturityDate_92);
      InstrumentLeg_92.insert(LegMaturityDate_92.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_92("MONTHYEAR_1892497844");
      noLegs_2_1_0.set(LegMaturityMonthYear_92);
      InstrumentLeg_92.insert(LegMaturityMonthYear_92.getString());
      FIX::LegMaturityTime LegMaturityTime_92("TZTIMEONLY_1028066844");
      noLegs_2_1_0.set(LegMaturityTime_92);
      InstrumentLeg_92.insert(LegMaturityTime_92.getString());
      FIX::LegOptAttribute LegOptAttribute_92('2');
      noLegs_2_1_0.set(LegOptAttribute_92);
      InstrumentLeg_92.insert(LegOptAttribute_92.getString());
      FIX::LegOptionRatio LegOptionRatio_92;
      LegOptionRatio_92.setString("6839677");
      noLegs_2_1_0.set(LegOptionRatio_92);
      InstrumentLeg_92.insert(LegOptionRatio_92.getString());
      FIX::LegPool LegPool_92("STRING_1041153443");
      noLegs_2_1_0.set(LegPool_92);
      InstrumentLeg_92.insert(LegPool_92.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_92("STRING_72018304");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_92);
      InstrumentLeg_92.insert(LegPriceUnitOfMeasure_92.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_92;
      LegPriceUnitOfMeasureQty_92.setString("11400773");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_92);
      InstrumentLeg_92.insert(LegPriceUnitOfMeasureQty_92.getString());
      FIX::LegProduct LegProduct_92(1533461129);
      noLegs_2_1_0.set(LegProduct_92);
      InstrumentLeg_92.insert(LegProduct_92.getString());
      FIX::LegPutOrCall LegPutOrCall_92(320530828);
      noLegs_2_1_0.set(LegPutOrCall_92);
      InstrumentLeg_92.insert(LegPutOrCall_92.getString());
      FIX::LegRatioQty LegRatioQty_92;
      LegRatioQty_92.setString("6982791");
      noLegs_2_1_0.set(LegRatioQty_92);
      InstrumentLeg_92.insert(LegRatioQty_92.getString());
      FIX::LegRedemptionDate LegRedemptionDate_92("LOCALMKTDATE_1583409595");
      noLegs_2_1_0.set(LegRedemptionDate_92);
      InstrumentLeg_92.insert(LegRedemptionDate_92.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_92("STRING_605512585");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_92);
      InstrumentLeg_92.insert(LegRepoCollateralSecurityType_92.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_92;
      LegRepurchaseRate_92.setString("23.300000");
      noLegs_2_1_0.set(LegRepurchaseRate_92);
      InstrumentLeg_92.insert(LegRepurchaseRate_92.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_92(1760121884);
      noLegs_2_1_0.set(LegRepurchaseTerm_92);
      InstrumentLeg_92.insert(LegRepurchaseTerm_92.getString());
      FIX::LegSecurityDesc LegSecurityDesc_92("STRING_1792831754");
      noLegs_2_1_0.set(LegSecurityDesc_92);
      InstrumentLeg_92.insert(LegSecurityDesc_92.getString());
      FIX::LegSecurityExchange LegSecurityExchange_92("EXCHANGE_561211646");
      noLegs_2_1_0.set(LegSecurityExchange_92);
      InstrumentLeg_92.insert(LegSecurityExchange_92.getString());
      FIX::LegSecurityID LegSecurityID_92("STRING_1268163883");
      noLegs_2_1_0.set(LegSecurityID_92);
      InstrumentLeg_92.insert(LegSecurityID_92.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_92("STRING_28864916");
      noLegs_2_1_0.set(LegSecurityIDSource_92);
      InstrumentLeg_92.insert(LegSecurityIDSource_92.getString());
      FIX::LegSecuritySubType LegSecuritySubType_92("STRING_1966738673");
      noLegs_2_1_0.set(LegSecuritySubType_92);
      InstrumentLeg_92.insert(LegSecuritySubType_92.getString());
      FIX::LegSecurityType LegSecurityType_92("STRING_670096045");
      noLegs_2_1_0.set(LegSecurityType_92);
      InstrumentLeg_92.insert(LegSecurityType_92.getString());
      FIX::LegSide LegSide_92('3');
      noLegs_2_1_0.set(LegSide_92);
      InstrumentLeg_92.insert(LegSide_92.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_92("STRING_1493230210");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_92);
      InstrumentLeg_92.insert(LegStateOrProvinceOfIssue_92.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_92("CAN");
      noLegs_2_1_0.set(LegStrikeCurrency_92);
      InstrumentLeg_92.insert(LegStrikeCurrency_92.getString());
      FIX::LegStrikePrice LegStrikePrice_92;
      LegStrikePrice_92.setString("15155086");
      noLegs_2_1_0.set(LegStrikePrice_92);
      InstrumentLeg_92.insert(LegStrikePrice_92.getString());
      FIX::LegSymbol LegSymbol_92("STRING_751199404");
      noLegs_2_1_0.set(LegSymbol_92);
      InstrumentLeg_92.insert(LegSymbol_92.getString());
      FIX::LegSymbolSfx LegSymbolSfx_92("STRING_2075374701");
      noLegs_2_1_0.set(LegSymbolSfx_92);
      InstrumentLeg_92.insert(LegSymbolSfx_92.getString());
      FIX::LegTimeUnit LegTimeUnit_92("STRING_141016976");
      noLegs_2_1_0.set(LegTimeUnit_92);
      InstrumentLeg_92.insert(LegTimeUnit_92.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_92("STRING_2039883520");
      noLegs_2_1_0.set(LegUnitOfMeasure_92);
      InstrumentLeg_92.insert(LegUnitOfMeasure_92.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_92;
      LegUnitOfMeasureQty_92.setString("9056199");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_92);
      InstrumentLeg_92.insert(LegUnitOfMeasureQty_92.getString());
      all_values.push_back(InstrumentLeg_92);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_162;
        FIX::LegSecurityAltID LegSecurityAltID_162("STRING_1784897717");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_162);
        LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltID_162.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_162("STRING_1933686833");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_162);
        LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltIDSource_162.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_162);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_163;
        FIX::LegSecurityAltID LegSecurityAltID_163("STRING_1627683494");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_163);
        LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltID_163.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_163("STRING_321381779");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_163);
        LegSecAltIDGrp_NoLegSecurityAltID_163.insert(LegSecurityAltIDSource_163.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_163);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_164;
        FIX::LegSecurityAltID LegSecurityAltID_164("STRING_827356628");
        noLegSecurityAltID_2_0_2_2.set(LegSecurityAltID_164);
        LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltID_164.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_164("STRING_1699701799");
        noLegSecurityAltID_2_0_2_2.set(LegSecurityAltIDSource_164);
        LegSecAltIDGrp_NoLegSecurityAltID_164.insert(LegSecurityAltIDSource_164.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_164);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_93;
      FIX::EncodedLegIssuer EncodedLegIssuer_93("DATA_1461459087");
      noLegs_2_1_1.set(EncodedLegIssuer_93);
      InstrumentLeg_93.insert(EncodedLegIssuer_93.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_93(213334110);
      noLegs_2_1_1.set(EncodedLegIssuerLen_93);
      InstrumentLeg_93.insert(EncodedLegIssuerLen_93.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_93("DATA_2020232627");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_93);
      InstrumentLeg_93.insert(EncodedLegSecurityDesc_93.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_93(12254561);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_93);
      InstrumentLeg_93.insert(EncodedLegSecurityDescLen_93.getString());
      FIX::LegCFICode LegCFICode_93("STRING_1796743705");
      noLegs_2_1_1.set(LegCFICode_93);
      InstrumentLeg_93.insert(LegCFICode_93.getString());
      FIX::LegContractMultiplier LegContractMultiplier_93;
      LegContractMultiplier_93.setString("4782615");
      noLegs_2_1_1.set(LegContractMultiplier_93);
      InstrumentLeg_93.insert(LegContractMultiplier_93.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_93(1688516892);
      noLegs_2_1_1.set(LegContractMultiplierUnit_93);
      InstrumentLeg_93.insert(LegContractMultiplierUnit_93.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_93("MONTHYEAR_1409381942");
      noLegs_2_1_1.set(LegContractSettlMonth_93);
      InstrumentLeg_93.insert(LegContractSettlMonth_93.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_93("COUNTRY_123609670");
      noLegs_2_1_1.set(LegCountryOfIssue_93);
      InstrumentLeg_93.insert(LegCountryOfIssue_93.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_93("LOCALMKTDATE_102244890");
      noLegs_2_1_1.set(LegCouponPaymentDate_93);
      InstrumentLeg_93.insert(LegCouponPaymentDate_93.getString());
      FIX::LegCouponRate LegCouponRate_93;
      LegCouponRate_93.setString("21.770000");
      noLegs_2_1_1.set(LegCouponRate_93);
      InstrumentLeg_93.insert(LegCouponRate_93.getString());
      FIX::LegCreditRating LegCreditRating_93("STRING_152474587");
      noLegs_2_1_1.set(LegCreditRating_93);
      InstrumentLeg_93.insert(LegCreditRating_93.getString());
      FIX::LegCurrency LegCurrency_93("CHF");
      noLegs_2_1_1.set(LegCurrency_93);
      InstrumentLeg_93.insert(LegCurrency_93.getString());
      FIX::LegDatedDate LegDatedDate_93("LOCALMKTDATE_459387005");
      noLegs_2_1_1.set(LegDatedDate_93);
      InstrumentLeg_93.insert(LegDatedDate_93.getString());
      FIX::LegExerciseStyle LegExerciseStyle_93(1414730125);
      noLegs_2_1_1.set(LegExerciseStyle_93);
      InstrumentLeg_93.insert(LegExerciseStyle_93.getString());
      FIX::LegFactor LegFactor_93;
      LegFactor_93.setString("5057086");
      noLegs_2_1_1.set(LegFactor_93);
      InstrumentLeg_93.insert(LegFactor_93.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_93(58431230);
      noLegs_2_1_1.set(LegFlowScheduleType_93);
      InstrumentLeg_93.insert(LegFlowScheduleType_93.getString());
      FIX::LegInstrRegistry LegInstrRegistry_93("STRING_782755174");
      noLegs_2_1_1.set(LegInstrRegistry_93);
      InstrumentLeg_93.insert(LegInstrRegistry_93.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_93("LOCALMKTDATE_1256908063");
      noLegs_2_1_1.set(LegInterestAccrualDate_93);
      InstrumentLeg_93.insert(LegInterestAccrualDate_93.getString());
      FIX::LegIssueDate LegIssueDate_93("LOCALMKTDATE_2133805931");
      noLegs_2_1_1.set(LegIssueDate_93);
      InstrumentLeg_93.insert(LegIssueDate_93.getString());
      FIX::LegIssuer LegIssuer_93("STRING_923772151");
      noLegs_2_1_1.set(LegIssuer_93);
      InstrumentLeg_93.insert(LegIssuer_93.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_93("STRING_1149307936");
      noLegs_2_1_1.set(LegLocaleOfIssue_93);
      InstrumentLeg_93.insert(LegLocaleOfIssue_93.getString());
      FIX::LegMaturityDate LegMaturityDate_93("LOCALMKTDATE_891942272");
      noLegs_2_1_1.set(LegMaturityDate_93);
      InstrumentLeg_93.insert(LegMaturityDate_93.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_93("MONTHYEAR_452881369");
      noLegs_2_1_1.set(LegMaturityMonthYear_93);
      InstrumentLeg_93.insert(LegMaturityMonthYear_93.getString());
      FIX::LegMaturityTime LegMaturityTime_93("TZTIMEONLY_786722005");
      noLegs_2_1_1.set(LegMaturityTime_93);
      InstrumentLeg_93.insert(LegMaturityTime_93.getString());
      FIX::LegOptAttribute LegOptAttribute_93('6');
      noLegs_2_1_1.set(LegOptAttribute_93);
      InstrumentLeg_93.insert(LegOptAttribute_93.getString());
      FIX::LegOptionRatio LegOptionRatio_93;
      LegOptionRatio_93.setString("20805648");
      noLegs_2_1_1.set(LegOptionRatio_93);
      InstrumentLeg_93.insert(LegOptionRatio_93.getString());
      FIX::LegPool LegPool_93("STRING_1108103784");
      noLegs_2_1_1.set(LegPool_93);
      InstrumentLeg_93.insert(LegPool_93.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_93("STRING_1505502086");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_93);
      InstrumentLeg_93.insert(LegPriceUnitOfMeasure_93.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_93;
      LegPriceUnitOfMeasureQty_93.setString("16327830");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_93);
      InstrumentLeg_93.insert(LegPriceUnitOfMeasureQty_93.getString());
      FIX::LegProduct LegProduct_93(422079223);
      noLegs_2_1_1.set(LegProduct_93);
      InstrumentLeg_93.insert(LegProduct_93.getString());
      FIX::LegPutOrCall LegPutOrCall_93(1718836196);
      noLegs_2_1_1.set(LegPutOrCall_93);
      InstrumentLeg_93.insert(LegPutOrCall_93.getString());
      FIX::LegRatioQty LegRatioQty_93;
      LegRatioQty_93.setString("15055319");
      noLegs_2_1_1.set(LegRatioQty_93);
      InstrumentLeg_93.insert(LegRatioQty_93.getString());
      FIX::LegRedemptionDate LegRedemptionDate_93("LOCALMKTDATE_434333785");
      noLegs_2_1_1.set(LegRedemptionDate_93);
      InstrumentLeg_93.insert(LegRedemptionDate_93.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_93("STRING_1368096254");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_93);
      InstrumentLeg_93.insert(LegRepoCollateralSecurityType_93.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_93;
      LegRepurchaseRate_93.setString("35.580000");
      noLegs_2_1_1.set(LegRepurchaseRate_93);
      InstrumentLeg_93.insert(LegRepurchaseRate_93.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_93(2122850677);
      noLegs_2_1_1.set(LegRepurchaseTerm_93);
      InstrumentLeg_93.insert(LegRepurchaseTerm_93.getString());
      FIX::LegSecurityDesc LegSecurityDesc_93("STRING_629994548");
      noLegs_2_1_1.set(LegSecurityDesc_93);
      InstrumentLeg_93.insert(LegSecurityDesc_93.getString());
      FIX::LegSecurityExchange LegSecurityExchange_93("EXCHANGE_2107403229");
      noLegs_2_1_1.set(LegSecurityExchange_93);
      InstrumentLeg_93.insert(LegSecurityExchange_93.getString());
      FIX::LegSecurityID LegSecurityID_93("STRING_77611919");
      noLegs_2_1_1.set(LegSecurityID_93);
      InstrumentLeg_93.insert(LegSecurityID_93.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_93("STRING_1160056725");
      noLegs_2_1_1.set(LegSecurityIDSource_93);
      InstrumentLeg_93.insert(LegSecurityIDSource_93.getString());
      FIX::LegSecuritySubType LegSecuritySubType_93("STRING_112394168");
      noLegs_2_1_1.set(LegSecuritySubType_93);
      InstrumentLeg_93.insert(LegSecuritySubType_93.getString());
      FIX::LegSecurityType LegSecurityType_93("STRING_2146595482");
      noLegs_2_1_1.set(LegSecurityType_93);
      InstrumentLeg_93.insert(LegSecurityType_93.getString());
      FIX::LegSide LegSide_93('2');
      noLegs_2_1_1.set(LegSide_93);
      InstrumentLeg_93.insert(LegSide_93.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_93("STRING_571781173");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_93);
      InstrumentLeg_93.insert(LegStateOrProvinceOfIssue_93.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_93("GBP");
      noLegs_2_1_1.set(LegStrikeCurrency_93);
      InstrumentLeg_93.insert(LegStrikeCurrency_93.getString());
      FIX::LegStrikePrice LegStrikePrice_93;
      LegStrikePrice_93.setString("6302124");
      noLegs_2_1_1.set(LegStrikePrice_93);
      InstrumentLeg_93.insert(LegStrikePrice_93.getString());
      FIX::LegSymbol LegSymbol_93("STRING_49113486");
      noLegs_2_1_1.set(LegSymbol_93);
      InstrumentLeg_93.insert(LegSymbol_93.getString());
      FIX::LegSymbolSfx LegSymbolSfx_93("STRING_1975348023");
      noLegs_2_1_1.set(LegSymbolSfx_93);
      InstrumentLeg_93.insert(LegSymbolSfx_93.getString());
      FIX::LegTimeUnit LegTimeUnit_93("STRING_616534687");
      noLegs_2_1_1.set(LegTimeUnit_93);
      InstrumentLeg_93.insert(LegTimeUnit_93.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_93("STRING_972885637");
      noLegs_2_1_1.set(LegUnitOfMeasure_93);
      InstrumentLeg_93.insert(LegUnitOfMeasure_93.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_93;
      LegUnitOfMeasureQty_93.setString("9771723");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_93);
      InstrumentLeg_93.insert(LegUnitOfMeasureQty_93.getString());
      all_values.push_back(InstrumentLeg_93);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_165;
        FIX::LegSecurityAltID LegSecurityAltID_165("STRING_1425767006");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_165);
        LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltID_165.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_165("STRING_1763894316");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_165);
        LegSecAltIDGrp_NoLegSecurityAltID_165.insert(LegSecurityAltIDSource_165.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_165);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    // Instrument
    multiset<string> Instrument_68;
    FIX::AttachmentPoint AttachmentPoint_68;
    AttachmentPoint_68.setString("87.690000");
    noRelatedSym_0_2.set(AttachmentPoint_68);
    Instrument_68.insert(AttachmentPoint_68.getString());
    FIX::CFICode CFICode_68("STRING_1358848222");
    noRelatedSym_0_2.set(CFICode_68);
    Instrument_68.insert(CFICode_68.getString());
    FIX::CPProgram CPProgram_68(99);
    noRelatedSym_0_2.set(CPProgram_68);
    Instrument_68.insert(CPProgram_68.getString());
    FIX::CPRegType CPRegType_68("STRING_1544640856");
    noRelatedSym_0_2.set(CPRegType_68);
    Instrument_68.insert(CPRegType_68.getString());
    FIX::CapPrice CapPrice_68;
    CapPrice_68.setString("8441475");
    noRelatedSym_0_2.set(CapPrice_68);
    Instrument_68.insert(CapPrice_68.getString());
    FIX::ContractMultiplier ContractMultiplier_68;
    ContractMultiplier_68.setString("11465936");
    noRelatedSym_0_2.set(ContractMultiplier_68);
    Instrument_68.insert(ContractMultiplier_68.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_68(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_68);
    Instrument_68.insert(ContractMultiplierUnit_68.getString());
    FIX::ContractSettlMonth ContractSettlMonth_68("MONTHYEAR_202195935");
    noRelatedSym_0_2.set(ContractSettlMonth_68);
    Instrument_68.insert(ContractSettlMonth_68.getString());
    FIX::CountryOfIssue CountryOfIssue_68("COUNTRY_1580927461");
    noRelatedSym_0_2.set(CountryOfIssue_68);
    Instrument_68.insert(CountryOfIssue_68.getString());
    FIX::CouponPaymentDate CouponPaymentDate_68("LOCALMKTDATE_336606010");
    noRelatedSym_0_2.set(CouponPaymentDate_68);
    Instrument_68.insert(CouponPaymentDate_68.getString());
    FIX::CouponRate CouponRate_68;
    CouponRate_68.setString("58.460000");
    noRelatedSym_0_2.set(CouponRate_68);
    Instrument_68.insert(CouponRate_68.getString());
    FIX::CreditRating CreditRating_68("STRING_1556294490");
    noRelatedSym_0_2.set(CreditRating_68);
    Instrument_68.insert(CreditRating_68.getString());
    FIX::DatedDate DatedDate_68("LOCALMKTDATE_966600558");
    noRelatedSym_0_2.set(DatedDate_68);
    Instrument_68.insert(DatedDate_68.getString());
    FIX::DetachmentPoint DetachmentPoint_68;
    DetachmentPoint_68.setString("90.750000");
    noRelatedSym_0_2.set(DetachmentPoint_68);
    Instrument_68.insert(DetachmentPoint_68.getString());
    FIX::EncodedIssuer EncodedIssuer_68("DATA_1633906409");
    noRelatedSym_0_2.set(EncodedIssuer_68);
    Instrument_68.insert(EncodedIssuer_68.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_68(2126657284);
    noRelatedSym_0_2.set(EncodedIssuerLen_68);
    Instrument_68.insert(EncodedIssuerLen_68.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_68("DATA_110819595");
    noRelatedSym_0_2.set(EncodedSecurityDesc_68);
    Instrument_68.insert(EncodedSecurityDesc_68.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_68(1633018243);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_68);
    Instrument_68.insert(EncodedSecurityDescLen_68.getString());
    FIX::ExerciseStyle ExerciseStyle_68(0);
    noRelatedSym_0_2.set(ExerciseStyle_68);
    Instrument_68.insert(ExerciseStyle_68.getString());
    FIX::Factor Factor_68;
    Factor_68.setString("6826007");
    noRelatedSym_0_2.set(Factor_68);
    Instrument_68.insert(Factor_68.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_68(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_68);
    Instrument_68.insert(FlexProductEligibilityIndicator_68.getString());
    FIX::FlexibleIndicator FlexibleIndicator_68(true);
    noRelatedSym_0_2.set(FlexibleIndicator_68);
    Instrument_68.insert(FlexibleIndicator_68.getString());
    FIX::FloorPrice FloorPrice_68;
    FloorPrice_68.setString("13128131");
    noRelatedSym_0_2.set(FloorPrice_68);
    Instrument_68.insert(FloorPrice_68.getString());
    FIX::FlowScheduleType FlowScheduleType_68(1);
    noRelatedSym_0_2.set(FlowScheduleType_68);
    Instrument_68.insert(FlowScheduleType_68.getString());
    FIX::InstrRegistry InstrRegistry_68("STRING_738209272");
    noRelatedSym_0_2.set(InstrRegistry_68);
    Instrument_68.insert(InstrRegistry_68.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_68('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_68);
    Instrument_68.insert(InstrmtAssignmentMethod_68.getString());
    FIX::InterestAccrualDate InterestAccrualDate_68("LOCALMKTDATE_1921375678");
    noRelatedSym_0_2.set(InterestAccrualDate_68);
    Instrument_68.insert(InterestAccrualDate_68.getString());
    FIX::IssueDate IssueDate_68("LOCALMKTDATE_1715381583");
    noRelatedSym_0_2.set(IssueDate_68);
    Instrument_68.insert(IssueDate_68.getString());
    FIX::Issuer Issuer_68("STRING_1290341170");
    noRelatedSym_0_2.set(Issuer_68);
    Instrument_68.insert(Issuer_68.getString());
    FIX::ListMethod ListMethod_68(0);
    noRelatedSym_0_2.set(ListMethod_68);
    Instrument_68.insert(ListMethod_68.getString());
    FIX::LocaleOfIssue LocaleOfIssue_68("STRING_1331792252");
    noRelatedSym_0_2.set(LocaleOfIssue_68);
    Instrument_68.insert(LocaleOfIssue_68.getString());
    FIX::MaturityDate MaturityDate_68("LOCALMKTDATE_1329479939");
    noRelatedSym_0_2.set(MaturityDate_68);
    Instrument_68.insert(MaturityDate_68.getString());
    FIX::MaturityMonthYear MaturityMonthYear_68("MONTHYEAR_411023611");
    noRelatedSym_0_2.set(MaturityMonthYear_68);
    Instrument_68.insert(MaturityMonthYear_68.getString());
    FIX::MaturityTime MaturityTime_68("TZTIMEONLY_2056306705");
    noRelatedSym_0_2.set(MaturityTime_68);
    Instrument_68.insert(MaturityTime_68.getString());
    FIX::MinPriceIncrement MinPriceIncrement_68;
    MinPriceIncrement_68.setString("7266371");
    noRelatedSym_0_2.set(MinPriceIncrement_68);
    Instrument_68.insert(MinPriceIncrement_68.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
    MinPriceIncrementAmount_68.setString("12551712");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_68);
    Instrument_68.insert(MinPriceIncrementAmount_68.getString());
    FIX::NTPositionLimit NTPositionLimit_68(1055416733);
    noRelatedSym_0_2.set(NTPositionLimit_68);
    Instrument_68.insert(NTPositionLimit_68.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
    NotionalPercentageOutstanding_68.setString("5.520000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_68);
    Instrument_68.insert(NotionalPercentageOutstanding_68.getString());
    FIX::OptAttribute OptAttribute_68('1');
    noRelatedSym_0_2.set(OptAttribute_68);
    Instrument_68.insert(OptAttribute_68.getString());
    FIX::OptPayoutAmount OptPayoutAmount_68;
    OptPayoutAmount_68.setString("4888605");
    noRelatedSym_0_2.set(OptPayoutAmount_68);
    Instrument_68.insert(OptPayoutAmount_68.getString());
    FIX::OptPayoutType OptPayoutType_68(3);
    noRelatedSym_0_2.set(OptPayoutType_68);
    Instrument_68.insert(OptPayoutType_68.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
    OriginalNotionalPercentageOutstanding_68.setString("29.820000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_68);
    Instrument_68.insert(OriginalNotionalPercentageOutstanding_68.getString());
    FIX::Pool Pool_68("STRING_2045155037");
    noRelatedSym_0_2.set(Pool_68);
    Instrument_68.insert(Pool_68.getString());
    FIX::PositionLimit PositionLimit_68(998353473);
    noRelatedSym_0_2.set(PositionLimit_68);
    Instrument_68.insert(PositionLimit_68.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_68("STRING_INX");
    noRelatedSym_0_2.set(PriceQuoteMethod_68);
    Instrument_68.insert(PriceQuoteMethod_68.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_68("STRING_1531577799");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_68);
    Instrument_68.insert(PriceUnitOfMeasure_68.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
    PriceUnitOfMeasureQty_68.setString("9775271");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_68);
    Instrument_68.insert(PriceUnitOfMeasureQty_68.getString());
    FIX::Product Product_70(10);
    noRelatedSym_0_2.set(Product_70);
    Instrument_68.insert(Product_70.getString());
    FIX::ProductComplex ProductComplex_68("STRING_1017112394");
    noRelatedSym_0_2.set(ProductComplex_68);
    Instrument_68.insert(ProductComplex_68.getString());
    FIX::PutOrCall PutOrCall_68(1);
    noRelatedSym_0_2.set(PutOrCall_68);
    Instrument_68.insert(PutOrCall_68.getString());
    FIX::RedemptionDate RedemptionDate_68("LOCALMKTDATE_140235124");
    noRelatedSym_0_2.set(RedemptionDate_68);
    Instrument_68.insert(RedemptionDate_68.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_68("STRING_1916488949");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_68);
    Instrument_68.insert(RepoCollateralSecurityType_68.getString());
    FIX::RepurchaseRate RepurchaseRate_68;
    RepurchaseRate_68.setString("69.420000");
    noRelatedSym_0_2.set(RepurchaseRate_68);
    Instrument_68.insert(RepurchaseRate_68.getString());
    FIX::RepurchaseTerm RepurchaseTerm_68(1453048295);
    noRelatedSym_0_2.set(RepurchaseTerm_68);
    Instrument_68.insert(RepurchaseTerm_68.getString());
    FIX::RestructuringType RestructuringType_68("STRING_MM");
    noRelatedSym_0_2.set(RestructuringType_68);
    Instrument_68.insert(RestructuringType_68.getString());
    FIX::SecurityDesc SecurityDesc_68("STRING_670502566");
    noRelatedSym_0_2.set(SecurityDesc_68);
    Instrument_68.insert(SecurityDesc_68.getString());
    FIX::SecurityExchange SecurityExchange_68("EXCHANGE_1234912506");
    noRelatedSym_0_2.set(SecurityExchange_68);
    Instrument_68.insert(SecurityExchange_68.getString());
    FIX::SecurityGroup SecurityGroup_68("STRING_491387372");
    noRelatedSym_0_2.set(SecurityGroup_68);
    Instrument_68.insert(SecurityGroup_68.getString());
    FIX::SecurityID SecurityID_68("STRING_238400501");
    noRelatedSym_0_2.set(SecurityID_68);
    Instrument_68.insert(SecurityID_68.getString());
    FIX::SecurityIDSource SecurityIDSource_68("STRING_L");
    noRelatedSym_0_2.set(SecurityIDSource_68);
    Instrument_68.insert(SecurityIDSource_68.getString());
    FIX::SecurityStatus SecurityStatus_68("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_68);
    Instrument_68.insert(SecurityStatus_68.getString());
    FIX::SecuritySubType SecuritySubType_69("STRING_1570192753");
    noRelatedSym_0_2.set(SecuritySubType_69);
    Instrument_68.insert(SecuritySubType_69.getString());
    FIX::SecurityType SecurityType_70("STRING_CORP");
    noRelatedSym_0_2.set(SecurityType_70);
    Instrument_68.insert(SecurityType_70.getString());
    FIX::Seniority Seniority_68("STRING_SB");
    noRelatedSym_0_2.set(Seniority_68);
    Instrument_68.insert(Seniority_68.getString());
    FIX::SettlMethod SettlMethod_68('C');
    noRelatedSym_0_2.set(SettlMethod_68);
    Instrument_68.insert(SettlMethod_68.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_68("STRING_286403467");
    noRelatedSym_0_2.set(SettleOnOpenFlag_68);
    Instrument_68.insert(SettleOnOpenFlag_68.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_68("STRING_1209757572");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_68);
    Instrument_68.insert(StateOrProvinceOfIssue_68.getString());
    FIX::StrikeCurrency StrikeCurrency_68("EUR");
    noRelatedSym_0_2.set(StrikeCurrency_68);
    Instrument_68.insert(StrikeCurrency_68.getString());
    FIX::StrikeMultiplier StrikeMultiplier_68;
    StrikeMultiplier_68.setString("5196410");
    noRelatedSym_0_2.set(StrikeMultiplier_68);
    Instrument_68.insert(StrikeMultiplier_68.getString());
    FIX::StrikePrice StrikePrice_68;
    StrikePrice_68.setString("8758094");
    noRelatedSym_0_2.set(StrikePrice_68);
    Instrument_68.insert(StrikePrice_68.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_68(1);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_68);
    Instrument_68.insert(StrikePriceBoundaryMethod_68.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
    StrikePriceBoundaryPrecision_68.setString("40.420000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_68);
    Instrument_68.insert(StrikePriceBoundaryPrecision_68.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_68(1);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_68);
    Instrument_68.insert(StrikePriceDeterminationMethod_68.getString());
    FIX::StrikeValue StrikeValue_68;
    StrikeValue_68.setString("10116567");
    noRelatedSym_0_2.set(StrikeValue_68);
    Instrument_68.insert(StrikeValue_68.getString());
    FIX::Symbol Symbol_68("STRING_1362328803");
    noRelatedSym_0_2.set(Symbol_68);
    Instrument_68.insert(Symbol_68.getString());
    FIX::SymbolSfx SymbolSfx_68("STRING_WI");
    noRelatedSym_0_2.set(SymbolSfx_68);
    Instrument_68.insert(SymbolSfx_68.getString());
    FIX::TimeUnit TimeUnit_68("STRING_Yr");
    noRelatedSym_0_2.set(TimeUnit_68);
    Instrument_68.insert(TimeUnit_68.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_68(4);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_68);
    Instrument_68.insert(UnderlyingPriceDeterminationMethod_68.getString());
    FIX::UnitOfMeasure UnitOfMeasure_68("STRING_Gal");
    noRelatedSym_0_2.set(UnitOfMeasure_68);
    Instrument_68.insert(UnitOfMeasure_68.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
    UnitOfMeasureQty_68.setString("10111322");
    noRelatedSym_0_2.set(UnitOfMeasureQty_68);
    Instrument_68.insert(UnitOfMeasureQty_68.getString());
    FIX::ValuationMethod ValuationMethod_68("STRING_CDS");
    noRelatedSym_0_2.set(ValuationMethod_68);
    Instrument_68.insert(ValuationMethod_68.getString());
    all_values.push_back(Instrument_68);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_130;
      FIX::ComplexEventCondition ComplexEventCondition_130(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventCondition_130.getString());
      FIX::ComplexEventPrice ComplexEventPrice_130;
      ComplexEventPrice_130.setString("2657629");
      noComplexEvents_2_1_0.set(ComplexEventPrice_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPrice_130.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_130(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryMethod_130.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_130;
      ComplexEventPriceBoundaryPrecision_130.setString("81.250000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryPrecision_130.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_130(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceTimeType_130.getString());
      FIX::ComplexEventType ComplexEventType_130(6);
      noComplexEvents_2_1_0.set(ComplexEventType_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexEventType_130.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_130;
      ComplexOptPayoutAmount_130.setString("18523286");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_130);
      ComplexEvents_NoComplexEvents_130.insert(ComplexOptPayoutAmount_130.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_130);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_268;
        FIX::ComplexEventEndDate ComplexEventEndDate_268(FIX::UTCTIMESTAMP(4, 24, 27, 14, 82002));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_268);
        ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventEndDate_268.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_268(FIX::UTCTIMESTAMP(6, 52, 33, 24, 42014));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_268);
        ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventStartDate_268.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_268);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_530;
          FIX::ComplexEventEndTime ComplexEventEndTime_530(FIX::UTCTIMEONLY(9, 18, 2));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_530);
          ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventEndTime_530.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_530(FIX::UTCTIMEONLY(7, 45, 31));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_530);
          ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventStartTime_530.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_530);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_531;
          FIX::ComplexEventEndTime ComplexEventEndTime_531(FIX::UTCTIMEONLY(12, 25, 59));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_531);
          ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventEndTime_531.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_531(FIX::UTCTIMEONLY(3, 37, 22));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_531);
          ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventStartTime_531.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_531);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_269;
        FIX::ComplexEventEndDate ComplexEventEndDate_269(FIX::UTCTIMESTAMP(9, 39, 26, 12, 32004));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_269);
        ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventEndDate_269.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_269(FIX::UTCTIMESTAMP(21, 43, 32, 1, 32014));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_269);
        ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventStartDate_269.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_269);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_532;
          FIX::ComplexEventEndTime ComplexEventEndTime_532(FIX::UTCTIMEONLY(11, 53, 26));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_532);
          ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventEndTime_532.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_532(FIX::UTCTIMEONLY(0, 4, 6));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_532);
          ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventStartTime_532.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_532);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_533;
          FIX::ComplexEventEndTime ComplexEventEndTime_533(FIX::UTCTIMEONLY(16, 31, 21));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_533);
          ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventEndTime_533.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_533(FIX::UTCTIMEONLY(22, 51, 4));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_533);
          ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventStartTime_533.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_533);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_534;
          FIX::ComplexEventEndTime ComplexEventEndTime_534(FIX::UTCTIMEONLY(0, 43, 40));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_534);
          ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventEndTime_534.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_534(FIX::UTCTIMEONLY(22, 30, 39));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_534);
          ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventStartTime_534.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_534);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_131;
      FIX::ComplexEventCondition ComplexEventCondition_131(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventCondition_131.getString());
      FIX::ComplexEventPrice ComplexEventPrice_131;
      ComplexEventPrice_131.setString("15187629");
      noComplexEvents_2_1_1.set(ComplexEventPrice_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPrice_131.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_131(4);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryMethod_131.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_131;
      ComplexEventPriceBoundaryPrecision_131.setString("1.800000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceBoundaryPrecision_131.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_131(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventPriceTimeType_131.getString());
      FIX::ComplexEventType ComplexEventType_131(9);
      noComplexEvents_2_1_1.set(ComplexEventType_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexEventType_131.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_131;
      ComplexOptPayoutAmount_131.setString("9655022");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_131);
      ComplexEvents_NoComplexEvents_131.insert(ComplexOptPayoutAmount_131.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_131);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_270;
        FIX::ComplexEventEndDate ComplexEventEndDate_270(FIX::UTCTIMESTAMP(17, 58, 55, 5, 72011));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_270);
        ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventEndDate_270.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_270(FIX::UTCTIMESTAMP(3, 24, 33, 17, 42006));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_270);
        ComplexEventDates_NoComplexEventDates_270.insert(ComplexEventStartDate_270.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_270);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_535;
          FIX::ComplexEventEndTime ComplexEventEndTime_535(FIX::UTCTIMEONLY(17, 9, 32));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_535);
          ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventEndTime_535.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_535(FIX::UTCTIMEONLY(23, 3, 40));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_535);
          ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventStartTime_535.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_535);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_536;
          FIX::ComplexEventEndTime ComplexEventEndTime_536(FIX::UTCTIMEONLY(8, 35, 2));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_536);
          ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventEndTime_536.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_536(FIX::UTCTIMEONLY(16, 37, 56));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_536);
          ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventStartTime_536.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_536);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_271;
        FIX::ComplexEventEndDate ComplexEventEndDate_271(FIX::UTCTIMESTAMP(22, 46, 48, 4, 62012));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_271);
        ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventEndDate_271.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_271(FIX::UTCTIMESTAMP(8, 58, 33, 13, 22008));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_271);
        ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventStartDate_271.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_271);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_537;
          FIX::ComplexEventEndTime ComplexEventEndTime_537(FIX::UTCTIMEONLY(19, 7, 2));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_537);
          ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventEndTime_537.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_537(FIX::UTCTIMEONLY(6, 57, 45));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_537);
          ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventStartTime_537.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_537);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_130;
      FIX::EventDate EventDate_130("LOCALMKTDATE_1180558266");
      noEvents_2_1_0.set(EventDate_130);
      EvntGrp_NoEvents_130.insert(EventDate_130.getString());
      FIX::EventPx EventPx_130;
      EventPx_130.setString("7823015");
      noEvents_2_1_0.set(EventPx_130);
      EvntGrp_NoEvents_130.insert(EventPx_130.getString());
      FIX::EventText EventText_130("STRING_673389830");
      noEvents_2_1_0.set(EventText_130);
      EvntGrp_NoEvents_130.insert(EventText_130.getString());
      FIX::EventTime EventTime_130(FIX::UTCTIMESTAMP(5, 20, 10, 18, 72008));
      noEvents_2_1_0.set(EventTime_130);
      EvntGrp_NoEvents_130.insert(EventTime_130.getString());
      FIX::EventType EventType_130(15);
      noEvents_2_1_0.set(EventType_130);
      EvntGrp_NoEvents_130.insert(EventType_130.getString());
      all_values.push_back(EvntGrp_NoEvents_130);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_131;
      FIX::EventDate EventDate_131("LOCALMKTDATE_86748898");
      noEvents_2_1_1.set(EventDate_131);
      EvntGrp_NoEvents_131.insert(EventDate_131.getString());
      FIX::EventPx EventPx_131;
      EventPx_131.setString("13038351");
      noEvents_2_1_1.set(EventPx_131);
      EvntGrp_NoEvents_131.insert(EventPx_131.getString());
      FIX::EventText EventText_131("STRING_1046055968");
      noEvents_2_1_1.set(EventText_131);
      EvntGrp_NoEvents_131.insert(EventText_131.getString());
      FIX::EventTime EventTime_131(FIX::UTCTIMESTAMP(5, 7, 40, 6, 12006));
      noEvents_2_1_1.set(EventTime_131);
      EvntGrp_NoEvents_131.insert(EventTime_131.getString());
      FIX::EventType EventType_131(14);
      noEvents_2_1_1.set(EventType_131);
      EvntGrp_NoEvents_131.insert(EventType_131.getString());
      all_values.push_back(EvntGrp_NoEvents_131);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_132;
      FIX::EventDate EventDate_132("LOCALMKTDATE_309341998");
      noEvents_2_1_2.set(EventDate_132);
      EvntGrp_NoEvents_132.insert(EventDate_132.getString());
      FIX::EventPx EventPx_132;
      EventPx_132.setString("13649011");
      noEvents_2_1_2.set(EventPx_132);
      EvntGrp_NoEvents_132.insert(EventPx_132.getString());
      FIX::EventText EventText_132("STRING_978740240");
      noEvents_2_1_2.set(EventText_132);
      EvntGrp_NoEvents_132.insert(EventText_132.getString());
      FIX::EventTime EventTime_132(FIX::UTCTIMESTAMP(5, 7, 50, 26, 82006));
      noEvents_2_1_2.set(EventTime_132);
      EvntGrp_NoEvents_132.insert(EventTime_132.getString());
      FIX::EventType EventType_132(12);
      noEvents_2_1_2.set(EventType_132);
      EvntGrp_NoEvents_132.insert(EventType_132.getString());
      all_values.push_back(EvntGrp_NoEvents_132);

      noRelatedSym_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_127;
      FIX::InstrumentPartyID InstrumentPartyID_127("STRING_1122990310");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_127);
      InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyID_127.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_127('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_127);
      InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyIDSource_127.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_127(1257154266);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_127);
      InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyRole_127.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_127);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248;
        FIX::InstrumentPartySubID InstrumentPartySubID_248("STRING_2062870350");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_248);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubID_248.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_248(1008608116);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_248);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248.insert(InstrumentPartySubIDType_248.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249;
        FIX::InstrumentPartySubID InstrumentPartySubID_249("STRING_1189996149");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_249);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubID_249.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_249(1943638616);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_249);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249.insert(InstrumentPartySubIDType_249.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_249);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250;
        FIX::InstrumentPartySubID InstrumentPartySubID_250("STRING_1095357015");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_250);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubID_250.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_250(346347690);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_250);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250.insert(InstrumentPartySubIDType_250.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_250);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_128;
      FIX::InstrumentPartyID InstrumentPartyID_128("STRING_842210937");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_128);
      InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyID_128.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_128('5');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_128);
      InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyIDSource_128.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_128(1641373152);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_128);
      InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyRole_128.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_128);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251;
        FIX::InstrumentPartySubID InstrumentPartySubID_251("STRING_46514085");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_251);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubID_251.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_251(227934738);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_251);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubIDType_251.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252;
        FIX::InstrumentPartySubID InstrumentPartySubID_252("STRING_1171946132");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_252);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubID_252.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_252(1752655395);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_252);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252.insert(InstrumentPartySubIDType_252.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_252);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253;
        FIX::InstrumentPartySubID InstrumentPartySubID_253("STRING_420540691");
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubID_253);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubID_253.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_253(1481288131);
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubIDType_253);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubIDType_253.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_142;
      FIX::SecurityAltID SecurityAltID_142("STRING_1399280932");
      noSecurityAltID_2_1_0.set(SecurityAltID_142);
      SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltID_142.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_142("STRING_1745495484");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_142);
      SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltIDSource_142.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_142);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_136;
    FIX::SecurityXML SecurityXML_137("XMLDATA_528871474");
    noRelatedSym_0_2.set(SecurityXML_137);
    FIX::SecurityXMLLen SecurityXMLLen_68(1818247139);
    noRelatedSym_0_2.set(SecurityXMLLen_68);
    FIX::SecurityXMLSchema SecurityXMLSchema_68("STRING_744291366");
    noRelatedSym_0_2.set(SecurityXMLSchema_68);
    SecurityXML_136.insert(SecurityXMLSchema_68.getString());
    all_values.push_back(SecurityXML_136);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_115;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_115("DATA_1825151154");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingIssuer_115.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_115(923645515);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingIssuerLen_115.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_115("DATA_526775395");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDesc_115.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_115(357961352);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDescLen_115.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_115;
      UnderlyingAdjustedQuantity_115.setString("20466358");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_115);
      UnderlyingInstrument_115.insert(UnderlyingAdjustedQuantity_115.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_115;
      UnderlyingAllocationPercent_115.setString("7.190000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_115);
      UnderlyingInstrument_115.insert(UnderlyingAllocationPercent_115.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_115;
      UnderlyingAttachmentPoint_115.setString("56.180000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_115);
      UnderlyingInstrument_115.insert(UnderlyingAttachmentPoint_115.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_115("STRING_1602275958");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_115);
      UnderlyingInstrument_115.insert(UnderlyingCFICode_115.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_115("STRING_1574577421");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_115);
      UnderlyingInstrument_115.insert(UnderlyingCPProgram_115.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_115("STRING_476240087");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_115);
      UnderlyingInstrument_115.insert(UnderlyingCPRegType_115.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_115;
      UnderlyingCapValue_115.setString("6447884");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_115);
      UnderlyingInstrument_115.insert(UnderlyingCapValue_115.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_115;
      UnderlyingCashAmount_115.setString("13707323");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_115);
      UnderlyingInstrument_115.insert(UnderlyingCashAmount_115.getString());
      FIX::UnderlyingCashType UnderlyingCashType_115("STRING_FIXED");
      noUnderlyings_2_1_0.set(UnderlyingCashType_115);
      UnderlyingInstrument_115.insert(UnderlyingCashType_115.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_115;
      UnderlyingContractMultiplier_115.setString("9911361");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_115);
      UnderlyingInstrument_115.insert(UnderlyingContractMultiplier_115.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_115(65459679);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_115);
      UnderlyingInstrument_115.insert(UnderlyingContractMultiplierUnit_115.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_115("COUNTRY_2076727575");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_115);
      UnderlyingInstrument_115.insert(UnderlyingCountryOfIssue_115.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_115("LOCALMKTDATE_485025653");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_115);
      UnderlyingInstrument_115.insert(UnderlyingCouponPaymentDate_115.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_115;
      UnderlyingCouponRate_115.setString("89.750000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_115);
      UnderlyingInstrument_115.insert(UnderlyingCouponRate_115.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_115("STRING_2123241661");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_115);
      UnderlyingInstrument_115.insert(UnderlyingCreditRating_115.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_115("EUR");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_115);
      UnderlyingInstrument_115.insert(UnderlyingCurrency_115.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_115;
      UnderlyingCurrentValue_115.setString("17284134");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_115);
      UnderlyingInstrument_115.insert(UnderlyingCurrentValue_115.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_115;
      UnderlyingDetachmentPoint_115.setString("10.830000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_115);
      UnderlyingInstrument_115.insert(UnderlyingDetachmentPoint_115.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_115;
      UnderlyingDirtyPrice_115.setString("8401095");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_115);
      UnderlyingInstrument_115.insert(UnderlyingDirtyPrice_115.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_115;
      UnderlyingEndPrice_115.setString("5510026");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_115);
      UnderlyingInstrument_115.insert(UnderlyingEndPrice_115.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_115;
      UnderlyingEndValue_115.setString("3852983");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_115);
      UnderlyingInstrument_115.insert(UnderlyingEndValue_115.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_115(438121426);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_115);
      UnderlyingInstrument_115.insert(UnderlyingExerciseStyle_115.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_115;
      UnderlyingFXRate_115.setString("10798741");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_115);
      UnderlyingInstrument_115.insert(UnderlyingFXRate_115.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_115('D');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_115);
      UnderlyingInstrument_115.insert(UnderlyingFXRateCalc_115.getString());
      FIX::UnderlyingFactor UnderlyingFactor_115;
      UnderlyingFactor_115.setString("11824127");
      noUnderlyings_2_1_0.set(UnderlyingFactor_115);
      UnderlyingInstrument_115.insert(UnderlyingFactor_115.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_115(1216546827);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_115);
      UnderlyingInstrument_115.insert(UnderlyingFlowScheduleType_115.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_115("STRING_1881213013");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_115);
      UnderlyingInstrument_115.insert(UnderlyingInstrRegistry_115.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_115("LOCALMKTDATE_2106058308");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_115);
      UnderlyingInstrument_115.insert(UnderlyingIssueDate_115.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_115("STRING_1743322223");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_115);
      UnderlyingInstrument_115.insert(UnderlyingIssuer_115.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_115("STRING_91690717");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_115);
      UnderlyingInstrument_115.insert(UnderlyingLocaleOfIssue_115.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_115("LOCALMKTDATE_2005210485");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_115);
      UnderlyingInstrument_115.insert(UnderlyingMaturityDate_115.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_115("MONTHYEAR_1255029294");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_115);
      UnderlyingInstrument_115.insert(UnderlyingMaturityMonthYear_115.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_115("TZTIMEONLY_1706806336");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_115);
      UnderlyingInstrument_115.insert(UnderlyingMaturityTime_115.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_115;
      UnderlyingNotionalPercentageOutstanding_115.setString("27.950000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_115);
      UnderlyingInstrument_115.insert(UnderlyingNotionalPercentageOutstanding_115.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_115('6');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_115);
      UnderlyingInstrument_115.insert(UnderlyingOptAttribute_115.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_115;
      UnderlyingOriginalNotionalPercentageOutstanding_115.setString("27.750000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_115);
      UnderlyingInstrument_115.insert(UnderlyingOriginalNotionalPercentageOutstanding_115.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_115("STRING_2104791254");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_115);
      UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasure_115.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_115;
      UnderlyingPriceUnitOfMeasureQty_115.setString("20528554");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_115);
      UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasureQty_115.getString());
      FIX::UnderlyingProduct UnderlyingProduct_115(1607159877);
      noUnderlyings_2_1_0.set(UnderlyingProduct_115);
      UnderlyingInstrument_115.insert(UnderlyingProduct_115.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_115(948443756);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_115);
      UnderlyingInstrument_115.insert(UnderlyingPutOrCall_115.getString());
      FIX::UnderlyingPx UnderlyingPx_115;
      UnderlyingPx_115.setString("21183151");
      noUnderlyings_2_1_0.set(UnderlyingPx_115);
      UnderlyingInstrument_115.insert(UnderlyingPx_115.getString());
      FIX::UnderlyingQty UnderlyingQty_115;
      UnderlyingQty_115.setString("15364038");
      noUnderlyings_2_1_0.set(UnderlyingQty_115);
      UnderlyingInstrument_115.insert(UnderlyingQty_115.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_115("LOCALMKTDATE_1433469409");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_115);
      UnderlyingInstrument_115.insert(UnderlyingRedemptionDate_115.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_115("STRING_305190464");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_115);
      UnderlyingInstrument_115.insert(UnderlyingRepoCollateralSecurityType_115.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_115;
      UnderlyingRepurchaseRate_115.setString("18.170000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_115);
      UnderlyingInstrument_115.insert(UnderlyingRepurchaseRate_115.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_115(2146429801);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_115);
      UnderlyingInstrument_115.insert(UnderlyingRepurchaseTerm_115.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_115("STRING_1811495571");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_115);
      UnderlyingInstrument_115.insert(UnderlyingRestructuringType_115.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_115("STRING_1093091578");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityDesc_115.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_115("EXCHANGE_1132447237");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityExchange_115.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_115("STRING_504121514");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityID_115.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_115("STRING_1644094247");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityIDSource_115.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_115("STRING_1517745604");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_115);
      UnderlyingInstrument_115.insert(UnderlyingSecuritySubType_115.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_115("STRING_942242940");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityType_115.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_115("STRING_576484742");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_115);
      UnderlyingInstrument_115.insert(UnderlyingSeniority_115.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_115("STRING_1573807463");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_115);
      UnderlyingInstrument_115.insert(UnderlyingSettlMethod_115.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_115(5);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_115);
      UnderlyingInstrument_115.insert(UnderlyingSettlementType_115.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_115;
      UnderlyingStartValue_115.setString("17930315");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_115);
      UnderlyingInstrument_115.insert(UnderlyingStartValue_115.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_115("STRING_1307536828");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_115);
      UnderlyingInstrument_115.insert(UnderlyingStateOrProvinceOfIssue_115.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_115("GBP");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_115);
      UnderlyingInstrument_115.insert(UnderlyingStrikeCurrency_115.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_115;
      UnderlyingStrikePrice_115.setString("13992275");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_115);
      UnderlyingInstrument_115.insert(UnderlyingStrikePrice_115.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_115("STRING_1940957231");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_115);
      UnderlyingInstrument_115.insert(UnderlyingSymbol_115.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_115("STRING_496415791");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_115);
      UnderlyingInstrument_115.insert(UnderlyingSymbolSfx_115.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_115("STRING_958550233");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_115);
      UnderlyingInstrument_115.insert(UnderlyingTimeUnit_115.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_115("STRING_1253476378");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_115);
      UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasure_115.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_115;
      UnderlyingUnitOfMeasureQty_115.setString("11785388");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_115);
      UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasureQty_115.getString());
      all_values.push_back(UnderlyingInstrument_115);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_229;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_229("STRING_1210783985");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_229);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltID_229.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_229("STRING_1083910669");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_229);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltIDSource_229.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_230;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_230("STRING_453789237");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_230);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltID_230.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_230("STRING_11744093");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_230);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltIDSource_230.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_231;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_231("STRING_1054742158");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltID_231);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltID_231.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_231("STRING_1990193042");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltIDSource_231);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltIDSource_231.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_220;
        FIX::UnderlyingStipType UnderlyingStipType_220("STRING_1359932622");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_220);
        UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipType_220.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_220("STRING_1354871211");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_220);
        UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipValue_220.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_220);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_233;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_233("STRING_1023944545");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_233);
        UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyID_233.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_233('3');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_233);
        UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyIDSource_233.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_233(429123245);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_233);
        UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyRole_233.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_233);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_456("STRING_1944573388");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_456);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubID_456.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_456(1946868849);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_456);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubIDType_456.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_116;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_116("DATA_322825352");
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuer_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingIssuer_116.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_116(373574482);
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuerLen_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingIssuerLen_116.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_116("DATA_1373192664");
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDesc_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDesc_116.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_116(299997437);
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDescLen_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDescLen_116.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_116;
      UnderlyingAdjustedQuantity_116.setString("191224");
      noUnderlyings_2_1_1.set(UnderlyingAdjustedQuantity_116);
      UnderlyingInstrument_116.insert(UnderlyingAdjustedQuantity_116.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_116;
      UnderlyingAllocationPercent_116.setString("58.440000");
      noUnderlyings_2_1_1.set(UnderlyingAllocationPercent_116);
      UnderlyingInstrument_116.insert(UnderlyingAllocationPercent_116.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_116;
      UnderlyingAttachmentPoint_116.setString("41.830000");
      noUnderlyings_2_1_1.set(UnderlyingAttachmentPoint_116);
      UnderlyingInstrument_116.insert(UnderlyingAttachmentPoint_116.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_116("STRING_1407992548");
      noUnderlyings_2_1_1.set(UnderlyingCFICode_116);
      UnderlyingInstrument_116.insert(UnderlyingCFICode_116.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_116("STRING_1932473390");
      noUnderlyings_2_1_1.set(UnderlyingCPProgram_116);
      UnderlyingInstrument_116.insert(UnderlyingCPProgram_116.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_116("STRING_29217766");
      noUnderlyings_2_1_1.set(UnderlyingCPRegType_116);
      UnderlyingInstrument_116.insert(UnderlyingCPRegType_116.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_116;
      UnderlyingCapValue_116.setString("19044083");
      noUnderlyings_2_1_1.set(UnderlyingCapValue_116);
      UnderlyingInstrument_116.insert(UnderlyingCapValue_116.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_116;
      UnderlyingCashAmount_116.setString("7435399");
      noUnderlyings_2_1_1.set(UnderlyingCashAmount_116);
      UnderlyingInstrument_116.insert(UnderlyingCashAmount_116.getString());
      FIX::UnderlyingCashType UnderlyingCashType_116("STRING_FIXED");
      noUnderlyings_2_1_1.set(UnderlyingCashType_116);
      UnderlyingInstrument_116.insert(UnderlyingCashType_116.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_116;
      UnderlyingContractMultiplier_116.setString("9354635");
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplier_116);
      UnderlyingInstrument_116.insert(UnderlyingContractMultiplier_116.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_116(1737652984);
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplierUnit_116);
      UnderlyingInstrument_116.insert(UnderlyingContractMultiplierUnit_116.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_116("COUNTRY_345994481");
      noUnderlyings_2_1_1.set(UnderlyingCountryOfIssue_116);
      UnderlyingInstrument_116.insert(UnderlyingCountryOfIssue_116.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_116("LOCALMKTDATE_2019374219");
      noUnderlyings_2_1_1.set(UnderlyingCouponPaymentDate_116);
      UnderlyingInstrument_116.insert(UnderlyingCouponPaymentDate_116.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_116;
      UnderlyingCouponRate_116.setString("85.730000");
      noUnderlyings_2_1_1.set(UnderlyingCouponRate_116);
      UnderlyingInstrument_116.insert(UnderlyingCouponRate_116.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_116("STRING_357738574");
      noUnderlyings_2_1_1.set(UnderlyingCreditRating_116);
      UnderlyingInstrument_116.insert(UnderlyingCreditRating_116.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_116("EUR");
      noUnderlyings_2_1_1.set(UnderlyingCurrency_116);
      UnderlyingInstrument_116.insert(UnderlyingCurrency_116.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_116;
      UnderlyingCurrentValue_116.setString("18029520");
      noUnderlyings_2_1_1.set(UnderlyingCurrentValue_116);
      UnderlyingInstrument_116.insert(UnderlyingCurrentValue_116.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_116;
      UnderlyingDetachmentPoint_116.setString("17.030000");
      noUnderlyings_2_1_1.set(UnderlyingDetachmentPoint_116);
      UnderlyingInstrument_116.insert(UnderlyingDetachmentPoint_116.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_116;
      UnderlyingDirtyPrice_116.setString("12415391");
      noUnderlyings_2_1_1.set(UnderlyingDirtyPrice_116);
      UnderlyingInstrument_116.insert(UnderlyingDirtyPrice_116.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_116;
      UnderlyingEndPrice_116.setString("10996280");
      noUnderlyings_2_1_1.set(UnderlyingEndPrice_116);
      UnderlyingInstrument_116.insert(UnderlyingEndPrice_116.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_116;
      UnderlyingEndValue_116.setString("11630262");
      noUnderlyings_2_1_1.set(UnderlyingEndValue_116);
      UnderlyingInstrument_116.insert(UnderlyingEndValue_116.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_116(1542018320);
      noUnderlyings_2_1_1.set(UnderlyingExerciseStyle_116);
      UnderlyingInstrument_116.insert(UnderlyingExerciseStyle_116.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_116;
      UnderlyingFXRate_116.setString("15287513");
      noUnderlyings_2_1_1.set(UnderlyingFXRate_116);
      UnderlyingInstrument_116.insert(UnderlyingFXRate_116.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_116('D');
      noUnderlyings_2_1_1.set(UnderlyingFXRateCalc_116);
      UnderlyingInstrument_116.insert(UnderlyingFXRateCalc_116.getString());
      FIX::UnderlyingFactor UnderlyingFactor_116;
      UnderlyingFactor_116.setString("13391080");
      noUnderlyings_2_1_1.set(UnderlyingFactor_116);
      UnderlyingInstrument_116.insert(UnderlyingFactor_116.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_116(1328136531);
      noUnderlyings_2_1_1.set(UnderlyingFlowScheduleType_116);
      UnderlyingInstrument_116.insert(UnderlyingFlowScheduleType_116.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_116("STRING_866434012");
      noUnderlyings_2_1_1.set(UnderlyingInstrRegistry_116);
      UnderlyingInstrument_116.insert(UnderlyingInstrRegistry_116.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_116("LOCALMKTDATE_1712682543");
      noUnderlyings_2_1_1.set(UnderlyingIssueDate_116);
      UnderlyingInstrument_116.insert(UnderlyingIssueDate_116.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_116("STRING_553845548");
      noUnderlyings_2_1_1.set(UnderlyingIssuer_116);
      UnderlyingInstrument_116.insert(UnderlyingIssuer_116.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_116("STRING_1166431450");
      noUnderlyings_2_1_1.set(UnderlyingLocaleOfIssue_116);
      UnderlyingInstrument_116.insert(UnderlyingLocaleOfIssue_116.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_116("LOCALMKTDATE_1731804947");
      noUnderlyings_2_1_1.set(UnderlyingMaturityDate_116);
      UnderlyingInstrument_116.insert(UnderlyingMaturityDate_116.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_116("MONTHYEAR_1087091392");
      noUnderlyings_2_1_1.set(UnderlyingMaturityMonthYear_116);
      UnderlyingInstrument_116.insert(UnderlyingMaturityMonthYear_116.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_116("TZTIMEONLY_1402175633");
      noUnderlyings_2_1_1.set(UnderlyingMaturityTime_116);
      UnderlyingInstrument_116.insert(UnderlyingMaturityTime_116.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_116;
      UnderlyingNotionalPercentageOutstanding_116.setString("38.480000");
      noUnderlyings_2_1_1.set(UnderlyingNotionalPercentageOutstanding_116);
      UnderlyingInstrument_116.insert(UnderlyingNotionalPercentageOutstanding_116.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_116('8');
      noUnderlyings_2_1_1.set(UnderlyingOptAttribute_116);
      UnderlyingInstrument_116.insert(UnderlyingOptAttribute_116.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_116;
      UnderlyingOriginalNotionalPercentageOutstanding_116.setString("33.990000");
      noUnderlyings_2_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_116);
      UnderlyingInstrument_116.insert(UnderlyingOriginalNotionalPercentageOutstanding_116.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_116("STRING_749238539");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasure_116);
      UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasure_116.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_116;
      UnderlyingPriceUnitOfMeasureQty_116.setString("16156211");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasureQty_116);
      UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasureQty_116.getString());
      FIX::UnderlyingProduct UnderlyingProduct_116(566603895);
      noUnderlyings_2_1_1.set(UnderlyingProduct_116);
      UnderlyingInstrument_116.insert(UnderlyingProduct_116.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_116(1684702090);
      noUnderlyings_2_1_1.set(UnderlyingPutOrCall_116);
      UnderlyingInstrument_116.insert(UnderlyingPutOrCall_116.getString());
      FIX::UnderlyingPx UnderlyingPx_116;
      UnderlyingPx_116.setString("12057904");
      noUnderlyings_2_1_1.set(UnderlyingPx_116);
      UnderlyingInstrument_116.insert(UnderlyingPx_116.getString());
      FIX::UnderlyingQty UnderlyingQty_116;
      UnderlyingQty_116.setString("9125983");
      noUnderlyings_2_1_1.set(UnderlyingQty_116);
      UnderlyingInstrument_116.insert(UnderlyingQty_116.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_116("LOCALMKTDATE_1556592661");
      noUnderlyings_2_1_1.set(UnderlyingRedemptionDate_116);
      UnderlyingInstrument_116.insert(UnderlyingRedemptionDate_116.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_116("STRING_1249749019");
      noUnderlyings_2_1_1.set(UnderlyingRepoCollateralSecurityType_116);
      UnderlyingInstrument_116.insert(UnderlyingRepoCollateralSecurityType_116.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_116;
      UnderlyingRepurchaseRate_116.setString("69.510000");
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseRate_116);
      UnderlyingInstrument_116.insert(UnderlyingRepurchaseRate_116.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_116(335741743);
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseTerm_116);
      UnderlyingInstrument_116.insert(UnderlyingRepurchaseTerm_116.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_116("STRING_1136416987");
      noUnderlyings_2_1_1.set(UnderlyingRestructuringType_116);
      UnderlyingInstrument_116.insert(UnderlyingRestructuringType_116.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_116("STRING_925805380");
      noUnderlyings_2_1_1.set(UnderlyingSecurityDesc_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityDesc_116.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_116("EXCHANGE_474823446");
      noUnderlyings_2_1_1.set(UnderlyingSecurityExchange_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityExchange_116.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_116("STRING_230472518");
      noUnderlyings_2_1_1.set(UnderlyingSecurityID_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityID_116.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_116("STRING_2025433465");
      noUnderlyings_2_1_1.set(UnderlyingSecurityIDSource_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityIDSource_116.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_116("STRING_1637849695");
      noUnderlyings_2_1_1.set(UnderlyingSecuritySubType_116);
      UnderlyingInstrument_116.insert(UnderlyingSecuritySubType_116.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_116("STRING_1772490838");
      noUnderlyings_2_1_1.set(UnderlyingSecurityType_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityType_116.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_116("STRING_1406701147");
      noUnderlyings_2_1_1.set(UnderlyingSeniority_116);
      UnderlyingInstrument_116.insert(UnderlyingSeniority_116.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_116("STRING_33974708");
      noUnderlyings_2_1_1.set(UnderlyingSettlMethod_116);
      UnderlyingInstrument_116.insert(UnderlyingSettlMethod_116.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_116(4);
      noUnderlyings_2_1_1.set(UnderlyingSettlementType_116);
      UnderlyingInstrument_116.insert(UnderlyingSettlementType_116.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_116;
      UnderlyingStartValue_116.setString("5873540");
      noUnderlyings_2_1_1.set(UnderlyingStartValue_116);
      UnderlyingInstrument_116.insert(UnderlyingStartValue_116.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_116("STRING_900408720");
      noUnderlyings_2_1_1.set(UnderlyingStateOrProvinceOfIssue_116);
      UnderlyingInstrument_116.insert(UnderlyingStateOrProvinceOfIssue_116.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_116("CAN");
      noUnderlyings_2_1_1.set(UnderlyingStrikeCurrency_116);
      UnderlyingInstrument_116.insert(UnderlyingStrikeCurrency_116.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_116;
      UnderlyingStrikePrice_116.setString("20668401");
      noUnderlyings_2_1_1.set(UnderlyingStrikePrice_116);
      UnderlyingInstrument_116.insert(UnderlyingStrikePrice_116.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_116("STRING_113635446");
      noUnderlyings_2_1_1.set(UnderlyingSymbol_116);
      UnderlyingInstrument_116.insert(UnderlyingSymbol_116.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_116("STRING_80807323");
      noUnderlyings_2_1_1.set(UnderlyingSymbolSfx_116);
      UnderlyingInstrument_116.insert(UnderlyingSymbolSfx_116.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_116("STRING_1321532155");
      noUnderlyings_2_1_1.set(UnderlyingTimeUnit_116);
      UnderlyingInstrument_116.insert(UnderlyingTimeUnit_116.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_116("STRING_1105949294");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasure_116);
      UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasure_116.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_116;
      UnderlyingUnitOfMeasureQty_116.setString("9528884");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasureQty_116);
      UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasureQty_116.getString());
      all_values.push_back(UnderlyingInstrument_116);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_232;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_232("STRING_1855187834");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltID_232);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltID_232.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_232("STRING_421025920");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltIDSource_232);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltIDSource_232.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_233;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_233("STRING_1172045802");
        noUnderlyingSecurityAltID_2_1_2_1.set(UnderlyingSecurityAltID_233);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltID_233.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_233("STRING_1392406276");
        noUnderlyingSecurityAltID_2_1_2_1.set(UnderlyingSecurityAltIDSource_233);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltIDSource_233.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_234;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_234("STRING_1626816366");
        noUnderlyingSecurityAltID_2_1_2_2.set(UnderlyingSecurityAltID_234);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltID_234.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_234("STRING_2084644179");
        noUnderlyingSecurityAltID_2_1_2_2.set(UnderlyingSecurityAltIDSource_234);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltIDSource_234.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_221;
        FIX::UnderlyingStipType UnderlyingStipType_221("STRING_729081737");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipType_221);
        UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipType_221.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_221("STRING_1207497482");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipValue_221);
        UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipValue_221.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_221);

        noUnderlyings_2_1_1.addGroup(noUnderlyingStips_2_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_234;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_234("STRING_1865498724");
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyID_234);
        UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyID_234.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_234('2');
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyIDSource_234);
        UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyIDSource_234.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_234(1612080479);
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyRole_234);
        UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyRole_234.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_234);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_457("STRING_2011252680");
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubID_457);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubID_457.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_457(1102446526);
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_457);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubIDType_457.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);

          noUndlyInstrumentParties_2_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_458("STRING_1720978433");
          noUndlyInstrumentPartySubIDs_2_1_0_3_1.set(UnderlyingInstrumentPartySubID_458);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubID_458.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_458(1270470180);
          noUndlyInstrumentPartySubIDs_2_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_458);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubIDType_458.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);

          noUndlyInstrumentParties_2_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_459("STRING_1136421234");
          noUndlyInstrumentPartySubIDs_2_1_0_3_2.set(UnderlyingInstrumentPartySubID_459);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubID_459.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_459(537610036);
          noUndlyInstrumentPartySubIDs_2_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_459);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubIDType_459.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);

          noUndlyInstrumentParties_2_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_1_0_3_2);
        }
        noUnderlyings_2_1_1.addGroup(noUndlyInstrumentParties_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_235;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_235("STRING_1857824211");
        noUndlyInstrumentParties_2_1_2_1.set(UnderlyingInstrumentPartyID_235);
        UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyID_235.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_235('2');
        noUndlyInstrumentParties_2_1_2_1.set(UnderlyingInstrumentPartyIDSource_235);
        UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyIDSource_235.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_235(1066924183);
        noUndlyInstrumentParties_2_1_2_1.set(UnderlyingInstrumentPartyRole_235);
        UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyRole_235.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_235);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_460("STRING_1956186477");
          noUndlyInstrumentPartySubIDs_2_1_1_3_0.set(UnderlyingInstrumentPartySubID_460);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubID_460.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_460(1180559630);
          noUndlyInstrumentPartySubIDs_2_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_460);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubIDType_460.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);

          noUndlyInstrumentParties_2_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_1_3_0);
        }
        noUnderlyings_2_1_1.addGroup(noUndlyInstrumentParties_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_1);
    }
    msg.addGroup(noRelatedSym_0_2);
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
