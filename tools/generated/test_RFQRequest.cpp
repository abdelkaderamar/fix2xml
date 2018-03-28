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
  FIX::RFQReqID RFQReqID_2("STRING_255903840");
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
    multiset<string> Parties_NoPartyIDs_120;
    FIX::PartyID PartyID_120("STRING_73027763");
    noPartyIDs_0_0.set(PartyID_120);
    Parties_NoPartyIDs_120.insert(PartyID_120.getString());
    FIX::PartyIDSource PartyIDSource_120('7');
    noPartyIDs_0_0.set(PartyIDSource_120);
    Parties_NoPartyIDs_120.insert(PartyIDSource_120.getString());
    FIX::PartyRole PartyRole_120(44);
    noPartyIDs_0_0.set(PartyRole_120);
    Parties_NoPartyIDs_120.insert(PartyRole_120.getString());
    all_values.push_back(Parties_NoPartyIDs_120);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_241;
      FIX::PartySubID PartySubID_241("STRING_688926047");
      noPartySubIDs_0_1_0.set(PartySubID_241);
      PtysSubGrp_NoPartySubIDs_241.insert(PartySubID_241.getString());
      FIX::PartySubIDType PartySubIDType_241(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_241);
      PtysSubGrp_NoPartySubIDs_241.insert(PartySubIDType_241.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_241);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_242;
      FIX::PartySubID PartySubID_242("STRING_2140820871");
      noPartySubIDs_0_1_1.set(PartySubID_242);
      PtysSubGrp_NoPartySubIDs_242.insert(PartySubID_242.getString());
      FIX::PartySubIDType PartySubIDType_242(10);
      noPartySubIDs_0_1_1.set(PartySubIDType_242);
      PtysSubGrp_NoPartySubIDs_242.insert(PartySubIDType_242.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_242);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_243;
      FIX::PartySubID PartySubID_243("STRING_889896521");
      noPartySubIDs_0_1_2.set(PartySubID_243);
      PtysSubGrp_NoPartySubIDs_243.insert(PartySubID_243.getString());
      FIX::PartySubIDType PartySubIDType_243(30);
      noPartySubIDs_0_1_2.set(PartySubIDType_243);
      PtysSubGrp_NoPartySubIDs_243.insert(PartySubIDType_243.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_243);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_121;
    FIX::PartyID PartyID_121("STRING_25447816");
    noPartyIDs_0_1.set(PartyID_121);
    Parties_NoPartyIDs_121.insert(PartyID_121.getString());
    FIX::PartyIDSource PartyIDSource_121('7');
    noPartyIDs_0_1.set(PartyIDSource_121);
    Parties_NoPartyIDs_121.insert(PartyIDSource_121.getString());
    FIX::PartyRole PartyRole_121(6);
    noPartyIDs_0_1.set(PartyRole_121);
    Parties_NoPartyIDs_121.insert(PartyRole_121.getString());
    all_values.push_back(Parties_NoPartyIDs_121);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_244;
      FIX::PartySubID PartySubID_244("STRING_29966544");
      noPartySubIDs_1_1_0.set(PartySubID_244);
      PtysSubGrp_NoPartySubIDs_244.insert(PartySubID_244.getString());
      FIX::PartySubIDType PartySubIDType_244(31);
      noPartySubIDs_1_1_0.set(PartySubIDType_244);
      PtysSubGrp_NoPartySubIDs_244.insert(PartySubIDType_244.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_244);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RFQReqGrp
  // Group RFQReqGrp.NoRelatedSym
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_0;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_0;
    FIX::PrevClosePx PrevClosePx_11;
    PrevClosePx_11.setString("18035129");
    noRelatedSym_0_0.set(PrevClosePx_11);
    RFQReqGrp_NoRelatedSym_0.insert(PrevClosePx_11.getString());
    FIX::QuoteRequestType QuoteRequestType_3(1);
    noRelatedSym_0_0.set(QuoteRequestType_3);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteRequestType_3.getString());
    FIX::QuoteType QuoteType_11(3);
    noRelatedSym_0_0.set(QuoteType_11);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteType_11.getString());
    FIX::TradingSessionID TradingSessionID_72("STRING_3");
    noRelatedSym_0_0.set(TradingSessionID_72);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionID_72.getString());
    FIX::TradingSessionSubID TradingSessionSubID_72("STRING_4");
    noRelatedSym_0_0.set(TradingSessionSubID_72);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_72.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_107;
      FIX::EncodedLegIssuer EncodedLegIssuer_107("DATA_732416305");
      noLegs_0_1_0.set(EncodedLegIssuer_107);
      InstrumentLeg_107.insert(EncodedLegIssuer_107.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_107(1218888774);
      noLegs_0_1_0.set(EncodedLegIssuerLen_107);
      InstrumentLeg_107.insert(EncodedLegIssuerLen_107.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_107("DATA_1379101594");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_107);
      InstrumentLeg_107.insert(EncodedLegSecurityDesc_107.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_107(495261348);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_107);
      InstrumentLeg_107.insert(EncodedLegSecurityDescLen_107.getString());
      FIX::LegCFICode LegCFICode_107("STRING_1598326568");
      noLegs_0_1_0.set(LegCFICode_107);
      InstrumentLeg_107.insert(LegCFICode_107.getString());
      FIX::LegContractMultiplier LegContractMultiplier_107;
      LegContractMultiplier_107.setString("16350054");
      noLegs_0_1_0.set(LegContractMultiplier_107);
      InstrumentLeg_107.insert(LegContractMultiplier_107.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_107(95274090);
      noLegs_0_1_0.set(LegContractMultiplierUnit_107);
      InstrumentLeg_107.insert(LegContractMultiplierUnit_107.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_107("MONTHYEAR_697460849");
      noLegs_0_1_0.set(LegContractSettlMonth_107);
      InstrumentLeg_107.insert(LegContractSettlMonth_107.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_107("COUNTRY_1708033197");
      noLegs_0_1_0.set(LegCountryOfIssue_107);
      InstrumentLeg_107.insert(LegCountryOfIssue_107.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_107("LOCALMKTDATE_65446991");
      noLegs_0_1_0.set(LegCouponPaymentDate_107);
      InstrumentLeg_107.insert(LegCouponPaymentDate_107.getString());
      FIX::LegCouponRate LegCouponRate_107;
      LegCouponRate_107.setString("79.590000");
      noLegs_0_1_0.set(LegCouponRate_107);
      InstrumentLeg_107.insert(LegCouponRate_107.getString());
      FIX::LegCreditRating LegCreditRating_107("STRING_1483269111");
      noLegs_0_1_0.set(LegCreditRating_107);
      InstrumentLeg_107.insert(LegCreditRating_107.getString());
      FIX::LegCurrency LegCurrency_107("GBP");
      noLegs_0_1_0.set(LegCurrency_107);
      InstrumentLeg_107.insert(LegCurrency_107.getString());
      FIX::LegDatedDate LegDatedDate_107("LOCALMKTDATE_1476606334");
      noLegs_0_1_0.set(LegDatedDate_107);
      InstrumentLeg_107.insert(LegDatedDate_107.getString());
      FIX::LegExerciseStyle LegExerciseStyle_107(1353875105);
      noLegs_0_1_0.set(LegExerciseStyle_107);
      InstrumentLeg_107.insert(LegExerciseStyle_107.getString());
      FIX::LegFactor LegFactor_107;
      LegFactor_107.setString("19813094");
      noLegs_0_1_0.set(LegFactor_107);
      InstrumentLeg_107.insert(LegFactor_107.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_107(613005832);
      noLegs_0_1_0.set(LegFlowScheduleType_107);
      InstrumentLeg_107.insert(LegFlowScheduleType_107.getString());
      FIX::LegInstrRegistry LegInstrRegistry_107("STRING_1379322921");
      noLegs_0_1_0.set(LegInstrRegistry_107);
      InstrumentLeg_107.insert(LegInstrRegistry_107.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_107("LOCALMKTDATE_366619728");
      noLegs_0_1_0.set(LegInterestAccrualDate_107);
      InstrumentLeg_107.insert(LegInterestAccrualDate_107.getString());
      FIX::LegIssueDate LegIssueDate_107("LOCALMKTDATE_559036465");
      noLegs_0_1_0.set(LegIssueDate_107);
      InstrumentLeg_107.insert(LegIssueDate_107.getString());
      FIX::LegIssuer LegIssuer_107("STRING_1390412148");
      noLegs_0_1_0.set(LegIssuer_107);
      InstrumentLeg_107.insert(LegIssuer_107.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_107("STRING_396586272");
      noLegs_0_1_0.set(LegLocaleOfIssue_107);
      InstrumentLeg_107.insert(LegLocaleOfIssue_107.getString());
      FIX::LegMaturityDate LegMaturityDate_107("LOCALMKTDATE_1942048412");
      noLegs_0_1_0.set(LegMaturityDate_107);
      InstrumentLeg_107.insert(LegMaturityDate_107.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_107("MONTHYEAR_1825330883");
      noLegs_0_1_0.set(LegMaturityMonthYear_107);
      InstrumentLeg_107.insert(LegMaturityMonthYear_107.getString());
      FIX::LegMaturityTime LegMaturityTime_107("TZTIMEONLY_52615591");
      noLegs_0_1_0.set(LegMaturityTime_107);
      InstrumentLeg_107.insert(LegMaturityTime_107.getString());
      FIX::LegOptAttribute LegOptAttribute_107('2');
      noLegs_0_1_0.set(LegOptAttribute_107);
      InstrumentLeg_107.insert(LegOptAttribute_107.getString());
      FIX::LegOptionRatio LegOptionRatio_107;
      LegOptionRatio_107.setString("12776622");
      noLegs_0_1_0.set(LegOptionRatio_107);
      InstrumentLeg_107.insert(LegOptionRatio_107.getString());
      FIX::LegPool LegPool_107("STRING_1886293414");
      noLegs_0_1_0.set(LegPool_107);
      InstrumentLeg_107.insert(LegPool_107.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_107("STRING_1774820359");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_107);
      InstrumentLeg_107.insert(LegPriceUnitOfMeasure_107.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_107;
      LegPriceUnitOfMeasureQty_107.setString("18798426");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_107);
      InstrumentLeg_107.insert(LegPriceUnitOfMeasureQty_107.getString());
      FIX::LegProduct LegProduct_107(471226071);
      noLegs_0_1_0.set(LegProduct_107);
      InstrumentLeg_107.insert(LegProduct_107.getString());
      FIX::LegPutOrCall LegPutOrCall_107(846225485);
      noLegs_0_1_0.set(LegPutOrCall_107);
      InstrumentLeg_107.insert(LegPutOrCall_107.getString());
      FIX::LegRatioQty LegRatioQty_107;
      LegRatioQty_107.setString("11114606");
      noLegs_0_1_0.set(LegRatioQty_107);
      InstrumentLeg_107.insert(LegRatioQty_107.getString());
      FIX::LegRedemptionDate LegRedemptionDate_107("LOCALMKTDATE_966487420");
      noLegs_0_1_0.set(LegRedemptionDate_107);
      InstrumentLeg_107.insert(LegRedemptionDate_107.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_107("STRING_297068406");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_107);
      InstrumentLeg_107.insert(LegRepoCollateralSecurityType_107.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_107;
      LegRepurchaseRate_107.setString("24.070000");
      noLegs_0_1_0.set(LegRepurchaseRate_107);
      InstrumentLeg_107.insert(LegRepurchaseRate_107.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_107(1061761510);
      noLegs_0_1_0.set(LegRepurchaseTerm_107);
      InstrumentLeg_107.insert(LegRepurchaseTerm_107.getString());
      FIX::LegSecurityDesc LegSecurityDesc_107("STRING_994529255");
      noLegs_0_1_0.set(LegSecurityDesc_107);
      InstrumentLeg_107.insert(LegSecurityDesc_107.getString());
      FIX::LegSecurityExchange LegSecurityExchange_107("EXCHANGE_159531956");
      noLegs_0_1_0.set(LegSecurityExchange_107);
      InstrumentLeg_107.insert(LegSecurityExchange_107.getString());
      FIX::LegSecurityID LegSecurityID_107("STRING_1127208502");
      noLegs_0_1_0.set(LegSecurityID_107);
      InstrumentLeg_107.insert(LegSecurityID_107.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_107("STRING_348573566");
      noLegs_0_1_0.set(LegSecurityIDSource_107);
      InstrumentLeg_107.insert(LegSecurityIDSource_107.getString());
      FIX::LegSecuritySubType LegSecuritySubType_107("STRING_1642801068");
      noLegs_0_1_0.set(LegSecuritySubType_107);
      InstrumentLeg_107.insert(LegSecuritySubType_107.getString());
      FIX::LegSecurityType LegSecurityType_107("STRING_1881581540");
      noLegs_0_1_0.set(LegSecurityType_107);
      InstrumentLeg_107.insert(LegSecurityType_107.getString());
      FIX::LegSide LegSide_107('1');
      noLegs_0_1_0.set(LegSide_107);
      InstrumentLeg_107.insert(LegSide_107.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_107("STRING_971923754");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_107);
      InstrumentLeg_107.insert(LegStateOrProvinceOfIssue_107.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_107("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_107);
      InstrumentLeg_107.insert(LegStrikeCurrency_107.getString());
      FIX::LegStrikePrice LegStrikePrice_107;
      LegStrikePrice_107.setString("15849295");
      noLegs_0_1_0.set(LegStrikePrice_107);
      InstrumentLeg_107.insert(LegStrikePrice_107.getString());
      FIX::LegSymbol LegSymbol_107("STRING_319812270");
      noLegs_0_1_0.set(LegSymbol_107);
      InstrumentLeg_107.insert(LegSymbol_107.getString());
      FIX::LegSymbolSfx LegSymbolSfx_107("STRING_1640431971");
      noLegs_0_1_0.set(LegSymbolSfx_107);
      InstrumentLeg_107.insert(LegSymbolSfx_107.getString());
      FIX::LegTimeUnit LegTimeUnit_107("STRING_2143966052");
      noLegs_0_1_0.set(LegTimeUnit_107);
      InstrumentLeg_107.insert(LegTimeUnit_107.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_107("STRING_1710224418");
      noLegs_0_1_0.set(LegUnitOfMeasure_107);
      InstrumentLeg_107.insert(LegUnitOfMeasure_107.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_107;
      LegUnitOfMeasureQty_107.setString("20370182");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_107);
      InstrumentLeg_107.insert(LegUnitOfMeasureQty_107.getString());
      all_values.push_back(InstrumentLeg_107);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_214;
        FIX::LegSecurityAltID LegSecurityAltID_214("STRING_1388071654");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_214);
        LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltID_214.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_214("STRING_2089633835");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_214);
        LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltIDSource_214.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_214);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_215;
        FIX::LegSecurityAltID LegSecurityAltID_215("STRING_1913016314");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_215);
        LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltID_215.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_215("STRING_518250300");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_215);
        LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltIDSource_215.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_215);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_216;
        FIX::LegSecurityAltID LegSecurityAltID_216("STRING_1828443601");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_216);
        LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltID_216.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_216("STRING_1540353025");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_216);
        LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltIDSource_216.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_216);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_68;
    FIX::AttachmentPoint AttachmentPoint_68;
    AttachmentPoint_68.setString("93.260000");
    noRelatedSym_0_0.set(AttachmentPoint_68);
    Instrument_68.insert(AttachmentPoint_68.getString());
    FIX::CFICode CFICode_68("STRING_152186025");
    noRelatedSym_0_0.set(CFICode_68);
    Instrument_68.insert(CFICode_68.getString());
    FIX::CPProgram CPProgram_68(99);
    noRelatedSym_0_0.set(CPProgram_68);
    Instrument_68.insert(CPProgram_68.getString());
    FIX::CPRegType CPRegType_68("STRING_1362069947");
    noRelatedSym_0_0.set(CPRegType_68);
    Instrument_68.insert(CPRegType_68.getString());
    FIX::CapPrice CapPrice_68;
    CapPrice_68.setString("11186734");
    noRelatedSym_0_0.set(CapPrice_68);
    Instrument_68.insert(CapPrice_68.getString());
    FIX::ContractMultiplier ContractMultiplier_68;
    ContractMultiplier_68.setString("5361632");
    noRelatedSym_0_0.set(ContractMultiplier_68);
    Instrument_68.insert(ContractMultiplier_68.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_68(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_68);
    Instrument_68.insert(ContractMultiplierUnit_68.getString());
    FIX::ContractSettlMonth ContractSettlMonth_68("MONTHYEAR_32951307");
    noRelatedSym_0_0.set(ContractSettlMonth_68);
    Instrument_68.insert(ContractSettlMonth_68.getString());
    FIX::CountryOfIssue CountryOfIssue_68("COUNTRY_1530692524");
    noRelatedSym_0_0.set(CountryOfIssue_68);
    Instrument_68.insert(CountryOfIssue_68.getString());
    FIX::CouponPaymentDate CouponPaymentDate_68("LOCALMKTDATE_2120584310");
    noRelatedSym_0_0.set(CouponPaymentDate_68);
    Instrument_68.insert(CouponPaymentDate_68.getString());
    FIX::CouponRate CouponRate_68;
    CouponRate_68.setString("98.090000");
    noRelatedSym_0_0.set(CouponRate_68);
    Instrument_68.insert(CouponRate_68.getString());
    FIX::CreditRating CreditRating_68("STRING_1879266090");
    noRelatedSym_0_0.set(CreditRating_68);
    Instrument_68.insert(CreditRating_68.getString());
    FIX::DatedDate DatedDate_68("LOCALMKTDATE_1615901730");
    noRelatedSym_0_0.set(DatedDate_68);
    Instrument_68.insert(DatedDate_68.getString());
    FIX::DetachmentPoint DetachmentPoint_68;
    DetachmentPoint_68.setString("77.020000");
    noRelatedSym_0_0.set(DetachmentPoint_68);
    Instrument_68.insert(DetachmentPoint_68.getString());
    FIX::EncodedIssuer EncodedIssuer_68("DATA_1171768911");
    noRelatedSym_0_0.set(EncodedIssuer_68);
    Instrument_68.insert(EncodedIssuer_68.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_68(440341837);
    noRelatedSym_0_0.set(EncodedIssuerLen_68);
    Instrument_68.insert(EncodedIssuerLen_68.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_68("DATA_1982230699");
    noRelatedSym_0_0.set(EncodedSecurityDesc_68);
    Instrument_68.insert(EncodedSecurityDesc_68.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_68(298097506);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_68);
    Instrument_68.insert(EncodedSecurityDescLen_68.getString());
    FIX::ExerciseStyle ExerciseStyle_68(2);
    noRelatedSym_0_0.set(ExerciseStyle_68);
    Instrument_68.insert(ExerciseStyle_68.getString());
    FIX::Factor Factor_68;
    Factor_68.setString("1545593");
    noRelatedSym_0_0.set(Factor_68);
    Instrument_68.insert(Factor_68.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_68(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_68);
    Instrument_68.insert(FlexProductEligibilityIndicator_68.getString());
    FIX::FlexibleIndicator FlexibleIndicator_68(true);
    noRelatedSym_0_0.set(FlexibleIndicator_68);
    Instrument_68.insert(FlexibleIndicator_68.getString());
    FIX::FloorPrice FloorPrice_68;
    FloorPrice_68.setString("18647837");
    noRelatedSym_0_0.set(FloorPrice_68);
    Instrument_68.insert(FloorPrice_68.getString());
    FIX::FlowScheduleType FlowScheduleType_68(4);
    noRelatedSym_0_0.set(FlowScheduleType_68);
    Instrument_68.insert(FlowScheduleType_68.getString());
    FIX::InstrRegistry InstrRegistry_68("STRING_1812800997");
    noRelatedSym_0_0.set(InstrRegistry_68);
    Instrument_68.insert(InstrRegistry_68.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_68('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_68);
    Instrument_68.insert(InstrmtAssignmentMethod_68.getString());
    FIX::InterestAccrualDate InterestAccrualDate_68("LOCALMKTDATE_1770214261");
    noRelatedSym_0_0.set(InterestAccrualDate_68);
    Instrument_68.insert(InterestAccrualDate_68.getString());
    FIX::IssueDate IssueDate_68("LOCALMKTDATE_1578333663");
    noRelatedSym_0_0.set(IssueDate_68);
    Instrument_68.insert(IssueDate_68.getString());
    FIX::Issuer Issuer_68("STRING_1623622047");
    noRelatedSym_0_0.set(Issuer_68);
    Instrument_68.insert(Issuer_68.getString());
    FIX::ListMethod ListMethod_68(1);
    noRelatedSym_0_0.set(ListMethod_68);
    Instrument_68.insert(ListMethod_68.getString());
    FIX::LocaleOfIssue LocaleOfIssue_68("STRING_971203041");
    noRelatedSym_0_0.set(LocaleOfIssue_68);
    Instrument_68.insert(LocaleOfIssue_68.getString());
    FIX::MaturityDate MaturityDate_68("LOCALMKTDATE_1874231373");
    noRelatedSym_0_0.set(MaturityDate_68);
    Instrument_68.insert(MaturityDate_68.getString());
    FIX::MaturityMonthYear MaturityMonthYear_68("MONTHYEAR_1603360240");
    noRelatedSym_0_0.set(MaturityMonthYear_68);
    Instrument_68.insert(MaturityMonthYear_68.getString());
    FIX::MaturityTime MaturityTime_68("TZTIMEONLY_1210297904");
    noRelatedSym_0_0.set(MaturityTime_68);
    Instrument_68.insert(MaturityTime_68.getString());
    FIX::MinPriceIncrement MinPriceIncrement_68;
    MinPriceIncrement_68.setString("10888176");
    noRelatedSym_0_0.set(MinPriceIncrement_68);
    Instrument_68.insert(MinPriceIncrement_68.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
    MinPriceIncrementAmount_68.setString("5745500");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_68);
    Instrument_68.insert(MinPriceIncrementAmount_68.getString());
    FIX::NTPositionLimit NTPositionLimit_68(1746461173);
    noRelatedSym_0_0.set(NTPositionLimit_68);
    Instrument_68.insert(NTPositionLimit_68.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
    NotionalPercentageOutstanding_68.setString("63.780000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_68);
    Instrument_68.insert(NotionalPercentageOutstanding_68.getString());
    FIX::OptAttribute OptAttribute_68('6');
    noRelatedSym_0_0.set(OptAttribute_68);
    Instrument_68.insert(OptAttribute_68.getString());
    FIX::OptPayoutAmount OptPayoutAmount_68;
    OptPayoutAmount_68.setString("11296700");
    noRelatedSym_0_0.set(OptPayoutAmount_68);
    Instrument_68.insert(OptPayoutAmount_68.getString());
    FIX::OptPayoutType OptPayoutType_68(3);
    noRelatedSym_0_0.set(OptPayoutType_68);
    Instrument_68.insert(OptPayoutType_68.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
    OriginalNotionalPercentageOutstanding_68.setString("11.540000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_68);
    Instrument_68.insert(OriginalNotionalPercentageOutstanding_68.getString());
    FIX::Pool Pool_68("STRING_861452491");
    noRelatedSym_0_0.set(Pool_68);
    Instrument_68.insert(Pool_68.getString());
    FIX::PositionLimit PositionLimit_68(343905123);
    noRelatedSym_0_0.set(PositionLimit_68);
    Instrument_68.insert(PositionLimit_68.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_68("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_68);
    Instrument_68.insert(PriceQuoteMethod_68.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_68("STRING_2033221402");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_68);
    Instrument_68.insert(PriceUnitOfMeasure_68.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
    PriceUnitOfMeasureQty_68.setString("7842469");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_68);
    Instrument_68.insert(PriceUnitOfMeasureQty_68.getString());
    FIX::Product Product_70(11);
    noRelatedSym_0_0.set(Product_70);
    Instrument_68.insert(Product_70.getString());
    FIX::ProductComplex ProductComplex_68("STRING_183835261");
    noRelatedSym_0_0.set(ProductComplex_68);
    Instrument_68.insert(ProductComplex_68.getString());
    FIX::PutOrCall PutOrCall_68(0);
    noRelatedSym_0_0.set(PutOrCall_68);
    Instrument_68.insert(PutOrCall_68.getString());
    FIX::RedemptionDate RedemptionDate_68("LOCALMKTDATE_503741581");
    noRelatedSym_0_0.set(RedemptionDate_68);
    Instrument_68.insert(RedemptionDate_68.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_68("STRING_2122364739");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_68);
    Instrument_68.insert(RepoCollateralSecurityType_68.getString());
    FIX::RepurchaseRate RepurchaseRate_68;
    RepurchaseRate_68.setString("49.170000");
    noRelatedSym_0_0.set(RepurchaseRate_68);
    Instrument_68.insert(RepurchaseRate_68.getString());
    FIX::RepurchaseTerm RepurchaseTerm_68(221041674);
    noRelatedSym_0_0.set(RepurchaseTerm_68);
    Instrument_68.insert(RepurchaseTerm_68.getString());
    FIX::RestructuringType RestructuringType_68("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_68);
    Instrument_68.insert(RestructuringType_68.getString());
    FIX::SecurityDesc SecurityDesc_68("STRING_201622266");
    noRelatedSym_0_0.set(SecurityDesc_68);
    Instrument_68.insert(SecurityDesc_68.getString());
    FIX::SecurityExchange SecurityExchange_68("EXCHANGE_1326413420");
    noRelatedSym_0_0.set(SecurityExchange_68);
    Instrument_68.insert(SecurityExchange_68.getString());
    FIX::SecurityGroup SecurityGroup_68("STRING_1425675778");
    noRelatedSym_0_0.set(SecurityGroup_68);
    Instrument_68.insert(SecurityGroup_68.getString());
    FIX::SecurityID SecurityID_68("STRING_1779955929");
    noRelatedSym_0_0.set(SecurityID_68);
    Instrument_68.insert(SecurityID_68.getString());
    FIX::SecurityIDSource SecurityIDSource_68("STRING_4");
    noRelatedSym_0_0.set(SecurityIDSource_68);
    Instrument_68.insert(SecurityIDSource_68.getString());
    FIX::SecurityStatus SecurityStatus_68("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_68);
    Instrument_68.insert(SecurityStatus_68.getString());
    FIX::SecuritySubType SecuritySubType_69("STRING_603675322");
    noRelatedSym_0_0.set(SecuritySubType_69);
    Instrument_68.insert(SecuritySubType_69.getString());
    FIX::SecurityType SecurityType_70("STRING_TPRN");
    noRelatedSym_0_0.set(SecurityType_70);
    Instrument_68.insert(SecurityType_70.getString());
    FIX::Seniority Seniority_68("STRING_SB");
    noRelatedSym_0_0.set(Seniority_68);
    Instrument_68.insert(Seniority_68.getString());
    FIX::SettlMethod SettlMethod_68('C');
    noRelatedSym_0_0.set(SettlMethod_68);
    Instrument_68.insert(SettlMethod_68.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_68("STRING_1618117217");
    noRelatedSym_0_0.set(SettleOnOpenFlag_68);
    Instrument_68.insert(SettleOnOpenFlag_68.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_68("STRING_759792974");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_68);
    Instrument_68.insert(StateOrProvinceOfIssue_68.getString());
    FIX::StrikeCurrency StrikeCurrency_68("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_68);
    Instrument_68.insert(StrikeCurrency_68.getString());
    FIX::StrikeMultiplier StrikeMultiplier_68;
    StrikeMultiplier_68.setString("13672943");
    noRelatedSym_0_0.set(StrikeMultiplier_68);
    Instrument_68.insert(StrikeMultiplier_68.getString());
    FIX::StrikePrice StrikePrice_68;
    StrikePrice_68.setString("3951371");
    noRelatedSym_0_0.set(StrikePrice_68);
    Instrument_68.insert(StrikePrice_68.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_68(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_68);
    Instrument_68.insert(StrikePriceBoundaryMethod_68.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
    StrikePriceBoundaryPrecision_68.setString("18.250000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_68);
    Instrument_68.insert(StrikePriceBoundaryPrecision_68.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_68(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_68);
    Instrument_68.insert(StrikePriceDeterminationMethod_68.getString());
    FIX::StrikeValue StrikeValue_68;
    StrikeValue_68.setString("15924121");
    noRelatedSym_0_0.set(StrikeValue_68);
    Instrument_68.insert(StrikeValue_68.getString());
    FIX::Symbol Symbol_68("STRING_1501907033");
    noRelatedSym_0_0.set(Symbol_68);
    Instrument_68.insert(Symbol_68.getString());
    FIX::SymbolSfx SymbolSfx_68("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_68);
    Instrument_68.insert(SymbolSfx_68.getString());
    FIX::TimeUnit TimeUnit_68("STRING_D");
    noRelatedSym_0_0.set(TimeUnit_68);
    Instrument_68.insert(TimeUnit_68.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_68(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_68);
    Instrument_68.insert(UnderlyingPriceDeterminationMethod_68.getString());
    FIX::UnitOfMeasure UnitOfMeasure_68("STRING_MWh");
    noRelatedSym_0_0.set(UnitOfMeasure_68);
    Instrument_68.insert(UnitOfMeasure_68.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
    UnitOfMeasureQty_68.setString("8912101");
    noRelatedSym_0_0.set(UnitOfMeasureQty_68);
    Instrument_68.insert(UnitOfMeasureQty_68.getString());
    FIX::ValuationMethod ValuationMethod_68("STRING_FUT");
    noRelatedSym_0_0.set(ValuationMethod_68);
    Instrument_68.insert(ValuationMethod_68.getString());
    all_values.push_back(Instrument_68);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_132;
      FIX::ComplexEventCondition ComplexEventCondition_132(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventCondition_132.getString());
      FIX::ComplexEventPrice ComplexEventPrice_132;
      ComplexEventPrice_132.setString("4283889");
      noComplexEvents_0_1_0.set(ComplexEventPrice_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPrice_132.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_132(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryMethod_132.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_132;
      ComplexEventPriceBoundaryPrecision_132.setString("73.440000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryPrecision_132.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_132(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceTimeType_132.getString());
      FIX::ComplexEventType ComplexEventType_132(7);
      noComplexEvents_0_1_0.set(ComplexEventType_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexEventType_132.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_132;
      ComplexOptPayoutAmount_132.setString("12616096");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_132);
      ComplexEvents_NoComplexEvents_132.insert(ComplexOptPayoutAmount_132.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_132);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_271;
        FIX::ComplexEventEndDate ComplexEventEndDate_271(FIX::UTCTIMESTAMP(4, 57, 21, 3, 7, 2017));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_271);
        ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventEndDate_271.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_271(FIX::UTCTIMESTAMP(2, 6, 43, 11, 4, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_271);
        ComplexEventDates_NoComplexEventDates_271.insert(ComplexEventStartDate_271.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_271);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_550;
          FIX::ComplexEventEndTime ComplexEventEndTime_550(FIX::UTCTIMEONLY(17, 13, 41));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_550);
          ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventEndTime_550.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_550(FIX::UTCTIMEONLY(10, 47, 39));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_550);
          ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventStartTime_550.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_550);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_272;
        FIX::ComplexEventEndDate ComplexEventEndDate_272(FIX::UTCTIMESTAMP(11, 59, 41, 27, 6, 2015));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_272);
        ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventEndDate_272.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_272(FIX::UTCTIMESTAMP(20, 0, 40, 21, 4, 2017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_272);
        ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventStartDate_272.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_272);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_551;
          FIX::ComplexEventEndTime ComplexEventEndTime_551(FIX::UTCTIMEONLY(13, 7, 32));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_551);
          ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventEndTime_551.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_551(FIX::UTCTIMEONLY(3, 51, 37));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_551);
          ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventStartTime_551.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_551);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_552;
          FIX::ComplexEventEndTime ComplexEventEndTime_552(FIX::UTCTIMEONLY(1, 42, 52));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_552);
          ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventEndTime_552.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_552(FIX::UTCTIMEONLY(16, 39, 41));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_552);
          ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventStartTime_552.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_552);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_132;
      FIX::EventDate EventDate_132("LOCALMKTDATE_1187237058");
      noEvents_0_1_0.set(EventDate_132);
      EvntGrp_NoEvents_132.insert(EventDate_132.getString());
      FIX::EventPx EventPx_132;
      EventPx_132.setString("1455969");
      noEvents_0_1_0.set(EventPx_132);
      EvntGrp_NoEvents_132.insert(EventPx_132.getString());
      FIX::EventText EventText_132("STRING_2118906107");
      noEvents_0_1_0.set(EventText_132);
      EvntGrp_NoEvents_132.insert(EventText_132.getString());
      FIX::EventTime EventTime_132(FIX::UTCTIMESTAMP(13, 18, 53, 10, 7, 2016));
      noEvents_0_1_0.set(EventTime_132);
      EvntGrp_NoEvents_132.insert(EventTime_132.getString());
      FIX::EventType EventType_132(16);
      noEvents_0_1_0.set(EventType_132);
      EvntGrp_NoEvents_132.insert(EventType_132.getString());
      all_values.push_back(EvntGrp_NoEvents_132);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_133;
      FIX::EventDate EventDate_133("LOCALMKTDATE_208683037");
      noEvents_0_1_1.set(EventDate_133);
      EvntGrp_NoEvents_133.insert(EventDate_133.getString());
      FIX::EventPx EventPx_133;
      EventPx_133.setString("17849215");
      noEvents_0_1_1.set(EventPx_133);
      EvntGrp_NoEvents_133.insert(EventPx_133.getString());
      FIX::EventText EventText_133("STRING_377098828");
      noEvents_0_1_1.set(EventText_133);
      EvntGrp_NoEvents_133.insert(EventText_133.getString());
      FIX::EventTime EventTime_133(FIX::UTCTIMESTAMP(2, 28, 59, 15, 8, 2001));
      noEvents_0_1_1.set(EventTime_133);
      EvntGrp_NoEvents_133.insert(EventTime_133.getString());
      FIX::EventType EventType_133(1);
      noEvents_0_1_1.set(EventType_133);
      EvntGrp_NoEvents_133.insert(EventType_133.getString());
      all_values.push_back(EvntGrp_NoEvents_133);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_134;
      FIX::EventDate EventDate_134("LOCALMKTDATE_814251630");
      noEvents_0_1_2.set(EventDate_134);
      EvntGrp_NoEvents_134.insert(EventDate_134.getString());
      FIX::EventPx EventPx_134;
      EventPx_134.setString("8773082");
      noEvents_0_1_2.set(EventPx_134);
      EvntGrp_NoEvents_134.insert(EventPx_134.getString());
      FIX::EventText EventText_134("STRING_456112874");
      noEvents_0_1_2.set(EventText_134);
      EvntGrp_NoEvents_134.insert(EventText_134.getString());
      FIX::EventTime EventTime_134(FIX::UTCTIMESTAMP(14, 43, 54, 19, 5, 2007));
      noEvents_0_1_2.set(EventTime_134);
      EvntGrp_NoEvents_134.insert(EventTime_134.getString());
      FIX::EventType EventType_134(5);
      noEvents_0_1_2.set(EventType_134);
      EvntGrp_NoEvents_134.insert(EventType_134.getString());
      all_values.push_back(EvntGrp_NoEvents_134);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_132;
      FIX::InstrumentPartyID InstrumentPartyID_132("STRING_1978612823");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_132);
      InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyID_132.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_132('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_132);
      InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyIDSource_132.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_132(515890238);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_132);
      InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyRole_132.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_132);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271;
        FIX::InstrumentPartySubID InstrumentPartySubID_271("STRING_2082470735");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_271);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubID_271.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_271(1150025396);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_271);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubIDType_271.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272;
        FIX::InstrumentPartySubID InstrumentPartySubID_272("STRING_724296462");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_272);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubID_272.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_272(1764812823);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_272);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubIDType_272.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_133;
      FIX::InstrumentPartyID InstrumentPartyID_133("STRING_1358708434");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_133);
      InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyID_133.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_133('3');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_133);
      InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyIDSource_133.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_133(2141911651);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_133);
      InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyRole_133.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_133);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273;
        FIX::InstrumentPartySubID InstrumentPartySubID_273("STRING_1810822270");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_273);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubID_273.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_273(47710251);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_273);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubIDType_273.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274;
        FIX::InstrumentPartySubID InstrumentPartySubID_274("STRING_1936338172");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_274);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubID_274.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_274(660439805);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_274);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubIDType_274.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_145;
      FIX::SecurityAltID SecurityAltID_145("STRING_1651664787");
      noSecurityAltID_0_1_0.set(SecurityAltID_145);
      SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltID_145.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_145("STRING_534329618");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_145);
      SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltIDSource_145.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_145);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_146;
      FIX::SecurityAltID SecurityAltID_146("STRING_560326053");
      noSecurityAltID_0_1_1.set(SecurityAltID_146);
      SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltID_146.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_146("STRING_381489355");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_146);
      SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltIDSource_146.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_146);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_136;
    FIX::SecurityXML SecurityXML_137("XMLDATA_990442492");
    noRelatedSym_0_0.set(SecurityXML_137);
    FIX::SecurityXMLLen SecurityXMLLen_68(1517392676);
    noRelatedSym_0_0.set(SecurityXMLLen_68);
    FIX::SecurityXMLSchema SecurityXMLSchema_68("STRING_895786713");
    noRelatedSym_0_0.set(SecurityXMLSchema_68);
    SecurityXML_136.insert(SecurityXMLSchema_68.getString());
    all_values.push_back(SecurityXML_136);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_102;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_102("DATA_1851549050");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuer_102.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_102(823124505);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuerLen_102.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_102("DATA_431045348");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDesc_102.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_102(1225458835);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDescLen_102.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
      UnderlyingAdjustedQuantity_102.setString("8960592");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_102);
      UnderlyingInstrument_102.insert(UnderlyingAdjustedQuantity_102.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
      UnderlyingAllocationPercent_102.setString("74.270000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_102);
      UnderlyingInstrument_102.insert(UnderlyingAllocationPercent_102.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
      UnderlyingAttachmentPoint_102.setString("80.100000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingAttachmentPoint_102.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_102("STRING_2081845022");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_102);
      UnderlyingInstrument_102.insert(UnderlyingCFICode_102.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_102("STRING_1018947665");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_102);
      UnderlyingInstrument_102.insert(UnderlyingCPProgram_102.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_102("STRING_1024789399");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_102);
      UnderlyingInstrument_102.insert(UnderlyingCPRegType_102.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_102;
      UnderlyingCapValue_102.setString("20168321");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCapValue_102.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
      UnderlyingCashAmount_102.setString("214894");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_102);
      UnderlyingInstrument_102.insert(UnderlyingCashAmount_102.getString());
      FIX::UnderlyingCashType UnderlyingCashType_102("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_102);
      UnderlyingInstrument_102.insert(UnderlyingCashType_102.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
      UnderlyingContractMultiplier_102.setString("16341612");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplier_102.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_102(1380197848);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplierUnit_102.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_102("COUNTRY_2110820217");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingCountryOfIssue_102.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_102("LOCALMKTDATE_1628589288");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponPaymentDate_102.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
      UnderlyingCouponRate_102.setString("51.810000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponRate_102.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_102("STRING_1774158839");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_102);
      UnderlyingInstrument_102.insert(UnderlyingCreditRating_102.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_102("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrency_102.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
      UnderlyingCurrentValue_102.setString("2871149");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrentValue_102.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
      UnderlyingDetachmentPoint_102.setString("39.620000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingDetachmentPoint_102.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
      UnderlyingDirtyPrice_102.setString("4649308");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingDirtyPrice_102.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
      UnderlyingEndPrice_102.setString("8214446");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingEndPrice_102.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_102;
      UnderlyingEndValue_102.setString("19827000");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_102);
      UnderlyingInstrument_102.insert(UnderlyingEndValue_102.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_102(846420200);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_102);
      UnderlyingInstrument_102.insert(UnderlyingExerciseStyle_102.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_102;
      UnderlyingFXRate_102.setString("18118871");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRate_102.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_102('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRateCalc_102.getString());
      FIX::UnderlyingFactor UnderlyingFactor_102;
      UnderlyingFactor_102.setString("17422069");
      noUnderlyings_0_1_0.set(UnderlyingFactor_102);
      UnderlyingInstrument_102.insert(UnderlyingFactor_102.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_102(2142342834);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_102);
      UnderlyingInstrument_102.insert(UnderlyingFlowScheduleType_102.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_102("STRING_1056674446");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_102);
      UnderlyingInstrument_102.insert(UnderlyingInstrRegistry_102.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_102("LOCALMKTDATE_417847771");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_102);
      UnderlyingInstrument_102.insert(UnderlyingIssueDate_102.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_102("STRING_425904534");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(UnderlyingIssuer_102.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_102("STRING_134649633");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingLocaleOfIssue_102.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_102("LOCALMKTDATE_1313907060");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityDate_102.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_102("MONTHYEAR_928961962");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityMonthYear_102.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_102("TZTIMEONLY_1191237644");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityTime_102.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
      UnderlyingNotionalPercentageOutstanding_102.setString("84.340000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_102('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_102);
      UnderlyingInstrument_102.insert(UnderlyingOptAttribute_102.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
      UnderlyingOriginalNotionalPercentageOutstanding_102.setString("33.950000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingOriginalNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_102("STRING_1117616896");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasure_102.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
      UnderlyingPriceUnitOfMeasureQty_102.setString("19693990");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasureQty_102.getString());
      FIX::UnderlyingProduct UnderlyingProduct_102(1817629256);
      noUnderlyings_0_1_0.set(UnderlyingProduct_102);
      UnderlyingInstrument_102.insert(UnderlyingProduct_102.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_102(604294533);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_102);
      UnderlyingInstrument_102.insert(UnderlyingPutOrCall_102.getString());
      FIX::UnderlyingPx UnderlyingPx_102;
      UnderlyingPx_102.setString("12021132");
      noUnderlyings_0_1_0.set(UnderlyingPx_102);
      UnderlyingInstrument_102.insert(UnderlyingPx_102.getString());
      FIX::UnderlyingQty UnderlyingQty_102;
      UnderlyingQty_102.setString("17809658");
      noUnderlyings_0_1_0.set(UnderlyingQty_102);
      UnderlyingInstrument_102.insert(UnderlyingQty_102.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_102("LOCALMKTDATE_85400174");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_102);
      UnderlyingInstrument_102.insert(UnderlyingRedemptionDate_102.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_102("STRING_226524774");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingRepoCollateralSecurityType_102.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
      UnderlyingRepurchaseRate_102.setString("10.160000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseRate_102.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_102(1761699714);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseTerm_102.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_102("STRING_1187274480");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_102);
      UnderlyingInstrument_102.insert(UnderlyingRestructuringType_102.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_102("STRING_1694756013");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityDesc_102.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_102("EXCHANGE_1036590028");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityExchange_102.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_102("STRING_1652205325");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityID_102.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_102("STRING_368716979");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityIDSource_102.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_102("STRING_871806396");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecuritySubType_102.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_102("STRING_351141877");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityType_102.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_102("STRING_33120438");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_102);
      UnderlyingInstrument_102.insert(UnderlyingSeniority_102.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_102("STRING_76931791");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlMethod_102.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_102(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlementType_102.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_102;
      UnderlyingStartValue_102.setString("279796");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_102);
      UnderlyingInstrument_102.insert(UnderlyingStartValue_102.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_102("STRING_1133606237");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingStateOrProvinceOfIssue_102.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_102("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikeCurrency_102.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
      UnderlyingStrikePrice_102.setString("12682558");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikePrice_102.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_102("STRING_1677619974");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbol_102.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_102("STRING_1382846121");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbolSfx_102.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_102("STRING_312009867");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingTimeUnit_102.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_102("STRING_778404761");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasure_102.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
      UnderlyingUnitOfMeasureQty_102.setString("11832721");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasureQty_102.getString());
      all_values.push_back(UnderlyingInstrument_102);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_209;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_209("STRING_1896021657");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_209);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltID_209.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_209("STRING_1005187494");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_209);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltIDSource_209.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_210;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_210("STRING_50698870");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_210);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltID_210.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_210("STRING_352832543");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_210);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltIDSource_210.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_200;
        FIX::UnderlyingStipType UnderlyingStipType_200("STRING_1831664696");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_200);
        UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipType_200.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_200("STRING_438232717");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_200);
        UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipValue_200.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_200);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_201;
        FIX::UnderlyingStipType UnderlyingStipType_201("STRING_286341862");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_201);
        UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipType_201.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_201("STRING_1091822064");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_201);
        UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipValue_201.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_201);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_202;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_202("STRING_1473616342");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyID_202.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_202('6');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyIDSource_202.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_202(1089038811);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyRole_202.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_202);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_404("STRING_1007811409");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_404);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubID_404.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_404(1960845207);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_404);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubIDType_404.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_203;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_203("STRING_1329479897");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyID_203.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_203('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyIDSource_203.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_203(2037776999);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyRole_203.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_203);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_405("STRING_1068911472");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_405);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubID_405.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_405(1023899588);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_405);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubIDType_405.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_406("STRING_1639057955");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_406);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubID_406.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_406(1522795632);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_406);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubIDType_406.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_204;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_204("STRING_144671811");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyID_204.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_204('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyIDSource_204.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_204(758158105);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyRole_204.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_204);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_407("STRING_1947599042");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_407);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubID_407.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_407(1941430206);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_407);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubIDType_407.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_1;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_1;
    FIX::PrevClosePx PrevClosePx_12;
    PrevClosePx_12.setString("8372349");
    noRelatedSym_0_1.set(PrevClosePx_12);
    RFQReqGrp_NoRelatedSym_1.insert(PrevClosePx_12.getString());
    FIX::QuoteRequestType QuoteRequestType_4(1);
    noRelatedSym_0_1.set(QuoteRequestType_4);
    RFQReqGrp_NoRelatedSym_1.insert(QuoteRequestType_4.getString());
    FIX::QuoteType QuoteType_12(1);
    noRelatedSym_0_1.set(QuoteType_12);
    RFQReqGrp_NoRelatedSym_1.insert(QuoteType_12.getString());
    FIX::TradingSessionID TradingSessionID_73("STRING_4");
    noRelatedSym_0_1.set(TradingSessionID_73);
    RFQReqGrp_NoRelatedSym_1.insert(TradingSessionID_73.getString());
    FIX::TradingSessionSubID TradingSessionSubID_73("STRING_2");
    noRelatedSym_0_1.set(TradingSessionSubID_73);
    RFQReqGrp_NoRelatedSym_1.insert(TradingSessionSubID_73.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_108;
      FIX::EncodedLegIssuer EncodedLegIssuer_108("DATA_572114859");
      noLegs_1_1_0.set(EncodedLegIssuer_108);
      InstrumentLeg_108.insert(EncodedLegIssuer_108.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_108(339718664);
      noLegs_1_1_0.set(EncodedLegIssuerLen_108);
      InstrumentLeg_108.insert(EncodedLegIssuerLen_108.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_108("DATA_1145293003");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_108);
      InstrumentLeg_108.insert(EncodedLegSecurityDesc_108.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_108(1663936923);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_108);
      InstrumentLeg_108.insert(EncodedLegSecurityDescLen_108.getString());
      FIX::LegCFICode LegCFICode_108("STRING_392167447");
      noLegs_1_1_0.set(LegCFICode_108);
      InstrumentLeg_108.insert(LegCFICode_108.getString());
      FIX::LegContractMultiplier LegContractMultiplier_108;
      LegContractMultiplier_108.setString("4714256");
      noLegs_1_1_0.set(LegContractMultiplier_108);
      InstrumentLeg_108.insert(LegContractMultiplier_108.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_108(155547705);
      noLegs_1_1_0.set(LegContractMultiplierUnit_108);
      InstrumentLeg_108.insert(LegContractMultiplierUnit_108.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_108("MONTHYEAR_1481206258");
      noLegs_1_1_0.set(LegContractSettlMonth_108);
      InstrumentLeg_108.insert(LegContractSettlMonth_108.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_108("COUNTRY_1449763717");
      noLegs_1_1_0.set(LegCountryOfIssue_108);
      InstrumentLeg_108.insert(LegCountryOfIssue_108.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_108("LOCALMKTDATE_1163359114");
      noLegs_1_1_0.set(LegCouponPaymentDate_108);
      InstrumentLeg_108.insert(LegCouponPaymentDate_108.getString());
      FIX::LegCouponRate LegCouponRate_108;
      LegCouponRate_108.setString("78.180000");
      noLegs_1_1_0.set(LegCouponRate_108);
      InstrumentLeg_108.insert(LegCouponRate_108.getString());
      FIX::LegCreditRating LegCreditRating_108("STRING_631759966");
      noLegs_1_1_0.set(LegCreditRating_108);
      InstrumentLeg_108.insert(LegCreditRating_108.getString());
      FIX::LegCurrency LegCurrency_108("CHF");
      noLegs_1_1_0.set(LegCurrency_108);
      InstrumentLeg_108.insert(LegCurrency_108.getString());
      FIX::LegDatedDate LegDatedDate_108("LOCALMKTDATE_1907105007");
      noLegs_1_1_0.set(LegDatedDate_108);
      InstrumentLeg_108.insert(LegDatedDate_108.getString());
      FIX::LegExerciseStyle LegExerciseStyle_108(1125718786);
      noLegs_1_1_0.set(LegExerciseStyle_108);
      InstrumentLeg_108.insert(LegExerciseStyle_108.getString());
      FIX::LegFactor LegFactor_108;
      LegFactor_108.setString("612771");
      noLegs_1_1_0.set(LegFactor_108);
      InstrumentLeg_108.insert(LegFactor_108.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_108(1398679314);
      noLegs_1_1_0.set(LegFlowScheduleType_108);
      InstrumentLeg_108.insert(LegFlowScheduleType_108.getString());
      FIX::LegInstrRegistry LegInstrRegistry_108("STRING_501030770");
      noLegs_1_1_0.set(LegInstrRegistry_108);
      InstrumentLeg_108.insert(LegInstrRegistry_108.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_108("LOCALMKTDATE_205948921");
      noLegs_1_1_0.set(LegInterestAccrualDate_108);
      InstrumentLeg_108.insert(LegInterestAccrualDate_108.getString());
      FIX::LegIssueDate LegIssueDate_108("LOCALMKTDATE_420389947");
      noLegs_1_1_0.set(LegIssueDate_108);
      InstrumentLeg_108.insert(LegIssueDate_108.getString());
      FIX::LegIssuer LegIssuer_108("STRING_1259188875");
      noLegs_1_1_0.set(LegIssuer_108);
      InstrumentLeg_108.insert(LegIssuer_108.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_108("STRING_662630599");
      noLegs_1_1_0.set(LegLocaleOfIssue_108);
      InstrumentLeg_108.insert(LegLocaleOfIssue_108.getString());
      FIX::LegMaturityDate LegMaturityDate_108("LOCALMKTDATE_220505342");
      noLegs_1_1_0.set(LegMaturityDate_108);
      InstrumentLeg_108.insert(LegMaturityDate_108.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_108("MONTHYEAR_1053135434");
      noLegs_1_1_0.set(LegMaturityMonthYear_108);
      InstrumentLeg_108.insert(LegMaturityMonthYear_108.getString());
      FIX::LegMaturityTime LegMaturityTime_108("TZTIMEONLY_1499865540");
      noLegs_1_1_0.set(LegMaturityTime_108);
      InstrumentLeg_108.insert(LegMaturityTime_108.getString());
      FIX::LegOptAttribute LegOptAttribute_108('1');
      noLegs_1_1_0.set(LegOptAttribute_108);
      InstrumentLeg_108.insert(LegOptAttribute_108.getString());
      FIX::LegOptionRatio LegOptionRatio_108;
      LegOptionRatio_108.setString("18522694");
      noLegs_1_1_0.set(LegOptionRatio_108);
      InstrumentLeg_108.insert(LegOptionRatio_108.getString());
      FIX::LegPool LegPool_108("STRING_240315703");
      noLegs_1_1_0.set(LegPool_108);
      InstrumentLeg_108.insert(LegPool_108.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_108("STRING_1818128341");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_108);
      InstrumentLeg_108.insert(LegPriceUnitOfMeasure_108.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_108;
      LegPriceUnitOfMeasureQty_108.setString("5637369");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_108);
      InstrumentLeg_108.insert(LegPriceUnitOfMeasureQty_108.getString());
      FIX::LegProduct LegProduct_108(812430562);
      noLegs_1_1_0.set(LegProduct_108);
      InstrumentLeg_108.insert(LegProduct_108.getString());
      FIX::LegPutOrCall LegPutOrCall_108(10363357);
      noLegs_1_1_0.set(LegPutOrCall_108);
      InstrumentLeg_108.insert(LegPutOrCall_108.getString());
      FIX::LegRatioQty LegRatioQty_108;
      LegRatioQty_108.setString("17090299");
      noLegs_1_1_0.set(LegRatioQty_108);
      InstrumentLeg_108.insert(LegRatioQty_108.getString());
      FIX::LegRedemptionDate LegRedemptionDate_108("LOCALMKTDATE_328883837");
      noLegs_1_1_0.set(LegRedemptionDate_108);
      InstrumentLeg_108.insert(LegRedemptionDate_108.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_108("STRING_402530804");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_108);
      InstrumentLeg_108.insert(LegRepoCollateralSecurityType_108.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_108;
      LegRepurchaseRate_108.setString("20.330000");
      noLegs_1_1_0.set(LegRepurchaseRate_108);
      InstrumentLeg_108.insert(LegRepurchaseRate_108.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_108(484431542);
      noLegs_1_1_0.set(LegRepurchaseTerm_108);
      InstrumentLeg_108.insert(LegRepurchaseTerm_108.getString());
      FIX::LegSecurityDesc LegSecurityDesc_108("STRING_1883737062");
      noLegs_1_1_0.set(LegSecurityDesc_108);
      InstrumentLeg_108.insert(LegSecurityDesc_108.getString());
      FIX::LegSecurityExchange LegSecurityExchange_108("EXCHANGE_1482735751");
      noLegs_1_1_0.set(LegSecurityExchange_108);
      InstrumentLeg_108.insert(LegSecurityExchange_108.getString());
      FIX::LegSecurityID LegSecurityID_108("STRING_1647790656");
      noLegs_1_1_0.set(LegSecurityID_108);
      InstrumentLeg_108.insert(LegSecurityID_108.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_108("STRING_1030821232");
      noLegs_1_1_0.set(LegSecurityIDSource_108);
      InstrumentLeg_108.insert(LegSecurityIDSource_108.getString());
      FIX::LegSecuritySubType LegSecuritySubType_108("STRING_2114495717");
      noLegs_1_1_0.set(LegSecuritySubType_108);
      InstrumentLeg_108.insert(LegSecuritySubType_108.getString());
      FIX::LegSecurityType LegSecurityType_108("STRING_1704597970");
      noLegs_1_1_0.set(LegSecurityType_108);
      InstrumentLeg_108.insert(LegSecurityType_108.getString());
      FIX::LegSide LegSide_108('6');
      noLegs_1_1_0.set(LegSide_108);
      InstrumentLeg_108.insert(LegSide_108.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_108("STRING_1874117076");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_108);
      InstrumentLeg_108.insert(LegStateOrProvinceOfIssue_108.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_108("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_108);
      InstrumentLeg_108.insert(LegStrikeCurrency_108.getString());
      FIX::LegStrikePrice LegStrikePrice_108;
      LegStrikePrice_108.setString("11253127");
      noLegs_1_1_0.set(LegStrikePrice_108);
      InstrumentLeg_108.insert(LegStrikePrice_108.getString());
      FIX::LegSymbol LegSymbol_108("STRING_1183863878");
      noLegs_1_1_0.set(LegSymbol_108);
      InstrumentLeg_108.insert(LegSymbol_108.getString());
      FIX::LegSymbolSfx LegSymbolSfx_108("STRING_335424784");
      noLegs_1_1_0.set(LegSymbolSfx_108);
      InstrumentLeg_108.insert(LegSymbolSfx_108.getString());
      FIX::LegTimeUnit LegTimeUnit_108("STRING_1545702690");
      noLegs_1_1_0.set(LegTimeUnit_108);
      InstrumentLeg_108.insert(LegTimeUnit_108.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_108("STRING_295569105");
      noLegs_1_1_0.set(LegUnitOfMeasure_108);
      InstrumentLeg_108.insert(LegUnitOfMeasure_108.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_108;
      LegUnitOfMeasureQty_108.setString("9980553");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_108);
      InstrumentLeg_108.insert(LegUnitOfMeasureQty_108.getString());
      all_values.push_back(InstrumentLeg_108);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_217;
        FIX::LegSecurityAltID LegSecurityAltID_217("STRING_1348704539");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_217);
        LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltID_217.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_217("STRING_350437275");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_217);
        LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltIDSource_217.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_217);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_218;
        FIX::LegSecurityAltID LegSecurityAltID_218("STRING_1535366778");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_218);
        LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltID_218.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_218("STRING_1053490378");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_218);
        LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltIDSource_218.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_218);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_219;
        FIX::LegSecurityAltID LegSecurityAltID_219("STRING_590752978");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltID_219);
        LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltID_219.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_219("STRING_1206011471");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltIDSource_219);
        LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltIDSource_219.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_219);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_69;
    FIX::AttachmentPoint AttachmentPoint_69;
    AttachmentPoint_69.setString("73.580000");
    noRelatedSym_0_1.set(AttachmentPoint_69);
    Instrument_69.insert(AttachmentPoint_69.getString());
    FIX::CFICode CFICode_69("STRING_1403183540");
    noRelatedSym_0_1.set(CFICode_69);
    Instrument_69.insert(CFICode_69.getString());
    FIX::CPProgram CPProgram_69(1);
    noRelatedSym_0_1.set(CPProgram_69);
    Instrument_69.insert(CPProgram_69.getString());
    FIX::CPRegType CPRegType_69("STRING_1178773694");
    noRelatedSym_0_1.set(CPRegType_69);
    Instrument_69.insert(CPRegType_69.getString());
    FIX::CapPrice CapPrice_69;
    CapPrice_69.setString("17320673");
    noRelatedSym_0_1.set(CapPrice_69);
    Instrument_69.insert(CapPrice_69.getString());
    FIX::ContractMultiplier ContractMultiplier_69;
    ContractMultiplier_69.setString("16189056");
    noRelatedSym_0_1.set(ContractMultiplier_69);
    Instrument_69.insert(ContractMultiplier_69.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_69(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_69);
    Instrument_69.insert(ContractMultiplierUnit_69.getString());
    FIX::ContractSettlMonth ContractSettlMonth_69("MONTHYEAR_69015272");
    noRelatedSym_0_1.set(ContractSettlMonth_69);
    Instrument_69.insert(ContractSettlMonth_69.getString());
    FIX::CountryOfIssue CountryOfIssue_69("COUNTRY_1355159046");
    noRelatedSym_0_1.set(CountryOfIssue_69);
    Instrument_69.insert(CountryOfIssue_69.getString());
    FIX::CouponPaymentDate CouponPaymentDate_69("LOCALMKTDATE_546997830");
    noRelatedSym_0_1.set(CouponPaymentDate_69);
    Instrument_69.insert(CouponPaymentDate_69.getString());
    FIX::CouponRate CouponRate_69;
    CouponRate_69.setString("59.290000");
    noRelatedSym_0_1.set(CouponRate_69);
    Instrument_69.insert(CouponRate_69.getString());
    FIX::CreditRating CreditRating_69("STRING_238496631");
    noRelatedSym_0_1.set(CreditRating_69);
    Instrument_69.insert(CreditRating_69.getString());
    FIX::DatedDate DatedDate_69("LOCALMKTDATE_514009900");
    noRelatedSym_0_1.set(DatedDate_69);
    Instrument_69.insert(DatedDate_69.getString());
    FIX::DetachmentPoint DetachmentPoint_69;
    DetachmentPoint_69.setString("2.510000");
    noRelatedSym_0_1.set(DetachmentPoint_69);
    Instrument_69.insert(DetachmentPoint_69.getString());
    FIX::EncodedIssuer EncodedIssuer_69("DATA_306695384");
    noRelatedSym_0_1.set(EncodedIssuer_69);
    Instrument_69.insert(EncodedIssuer_69.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_69(240643328);
    noRelatedSym_0_1.set(EncodedIssuerLen_69);
    Instrument_69.insert(EncodedIssuerLen_69.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_69("DATA_1956753359");
    noRelatedSym_0_1.set(EncodedSecurityDesc_69);
    Instrument_69.insert(EncodedSecurityDesc_69.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_69(436171247);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_69);
    Instrument_69.insert(EncodedSecurityDescLen_69.getString());
    FIX::ExerciseStyle ExerciseStyle_69(1);
    noRelatedSym_0_1.set(ExerciseStyle_69);
    Instrument_69.insert(ExerciseStyle_69.getString());
    FIX::Factor Factor_69;
    Factor_69.setString("9931335");
    noRelatedSym_0_1.set(Factor_69);
    Instrument_69.insert(Factor_69.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_69(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_69);
    Instrument_69.insert(FlexProductEligibilityIndicator_69.getString());
    FIX::FlexibleIndicator FlexibleIndicator_69(false);
    noRelatedSym_0_1.set(FlexibleIndicator_69);
    Instrument_69.insert(FlexibleIndicator_69.getString());
    FIX::FloorPrice FloorPrice_69;
    FloorPrice_69.setString("12887026");
    noRelatedSym_0_1.set(FloorPrice_69);
    Instrument_69.insert(FloorPrice_69.getString());
    FIX::FlowScheduleType FlowScheduleType_69(0);
    noRelatedSym_0_1.set(FlowScheduleType_69);
    Instrument_69.insert(FlowScheduleType_69.getString());
    FIX::InstrRegistry InstrRegistry_69("STRING_382899497");
    noRelatedSym_0_1.set(InstrRegistry_69);
    Instrument_69.insert(InstrRegistry_69.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_69('4');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_69);
    Instrument_69.insert(InstrmtAssignmentMethod_69.getString());
    FIX::InterestAccrualDate InterestAccrualDate_69("LOCALMKTDATE_2120088690");
    noRelatedSym_0_1.set(InterestAccrualDate_69);
    Instrument_69.insert(InterestAccrualDate_69.getString());
    FIX::IssueDate IssueDate_69("LOCALMKTDATE_1918266275");
    noRelatedSym_0_1.set(IssueDate_69);
    Instrument_69.insert(IssueDate_69.getString());
    FIX::Issuer Issuer_69("STRING_1543413964");
    noRelatedSym_0_1.set(Issuer_69);
    Instrument_69.insert(Issuer_69.getString());
    FIX::ListMethod ListMethod_69(1);
    noRelatedSym_0_1.set(ListMethod_69);
    Instrument_69.insert(ListMethod_69.getString());
    FIX::LocaleOfIssue LocaleOfIssue_69("STRING_976794098");
    noRelatedSym_0_1.set(LocaleOfIssue_69);
    Instrument_69.insert(LocaleOfIssue_69.getString());
    FIX::MaturityDate MaturityDate_69("LOCALMKTDATE_1013157675");
    noRelatedSym_0_1.set(MaturityDate_69);
    Instrument_69.insert(MaturityDate_69.getString());
    FIX::MaturityMonthYear MaturityMonthYear_69("MONTHYEAR_1966541561");
    noRelatedSym_0_1.set(MaturityMonthYear_69);
    Instrument_69.insert(MaturityMonthYear_69.getString());
    FIX::MaturityTime MaturityTime_69("TZTIMEONLY_45685278");
    noRelatedSym_0_1.set(MaturityTime_69);
    Instrument_69.insert(MaturityTime_69.getString());
    FIX::MinPriceIncrement MinPriceIncrement_69;
    MinPriceIncrement_69.setString("444477");
    noRelatedSym_0_1.set(MinPriceIncrement_69);
    Instrument_69.insert(MinPriceIncrement_69.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
    MinPriceIncrementAmount_69.setString("15511252");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_69);
    Instrument_69.insert(MinPriceIncrementAmount_69.getString());
    FIX::NTPositionLimit NTPositionLimit_69(1664590910);
    noRelatedSym_0_1.set(NTPositionLimit_69);
    Instrument_69.insert(NTPositionLimit_69.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
    NotionalPercentageOutstanding_69.setString("34.480000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_69);
    Instrument_69.insert(NotionalPercentageOutstanding_69.getString());
    FIX::OptAttribute OptAttribute_69('1');
    noRelatedSym_0_1.set(OptAttribute_69);
    Instrument_69.insert(OptAttribute_69.getString());
    FIX::OptPayoutAmount OptPayoutAmount_69;
    OptPayoutAmount_69.setString("8722663");
    noRelatedSym_0_1.set(OptPayoutAmount_69);
    Instrument_69.insert(OptPayoutAmount_69.getString());
    FIX::OptPayoutType OptPayoutType_69(3);
    noRelatedSym_0_1.set(OptPayoutType_69);
    Instrument_69.insert(OptPayoutType_69.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
    OriginalNotionalPercentageOutstanding_69.setString("28.450000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_69);
    Instrument_69.insert(OriginalNotionalPercentageOutstanding_69.getString());
    FIX::Pool Pool_69("STRING_1110762939");
    noRelatedSym_0_1.set(Pool_69);
    Instrument_69.insert(Pool_69.getString());
    FIX::PositionLimit PositionLimit_69(169717531);
    noRelatedSym_0_1.set(PositionLimit_69);
    Instrument_69.insert(PositionLimit_69.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_69("STRING_STD");
    noRelatedSym_0_1.set(PriceQuoteMethod_69);
    Instrument_69.insert(PriceQuoteMethod_69.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_69("STRING_1417458324");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_69);
    Instrument_69.insert(PriceUnitOfMeasure_69.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
    PriceUnitOfMeasureQty_69.setString("4103608");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_69);
    Instrument_69.insert(PriceUnitOfMeasureQty_69.getString());
    FIX::Product Product_71(12);
    noRelatedSym_0_1.set(Product_71);
    Instrument_69.insert(Product_71.getString());
    FIX::ProductComplex ProductComplex_69("STRING_1853629571");
    noRelatedSym_0_1.set(ProductComplex_69);
    Instrument_69.insert(ProductComplex_69.getString());
    FIX::PutOrCall PutOrCall_69(0);
    noRelatedSym_0_1.set(PutOrCall_69);
    Instrument_69.insert(PutOrCall_69.getString());
    FIX::RedemptionDate RedemptionDate_69("LOCALMKTDATE_1118302748");
    noRelatedSym_0_1.set(RedemptionDate_69);
    Instrument_69.insert(RedemptionDate_69.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_69("STRING_477741955");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_69);
    Instrument_69.insert(RepoCollateralSecurityType_69.getString());
    FIX::RepurchaseRate RepurchaseRate_69;
    RepurchaseRate_69.setString("83.950000");
    noRelatedSym_0_1.set(RepurchaseRate_69);
    Instrument_69.insert(RepurchaseRate_69.getString());
    FIX::RepurchaseTerm RepurchaseTerm_69(259521794);
    noRelatedSym_0_1.set(RepurchaseTerm_69);
    Instrument_69.insert(RepurchaseTerm_69.getString());
    FIX::RestructuringType RestructuringType_69("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_69);
    Instrument_69.insert(RestructuringType_69.getString());
    FIX::SecurityDesc SecurityDesc_69("STRING_775907892");
    noRelatedSym_0_1.set(SecurityDesc_69);
    Instrument_69.insert(SecurityDesc_69.getString());
    FIX::SecurityExchange SecurityExchange_69("EXCHANGE_749445380");
    noRelatedSym_0_1.set(SecurityExchange_69);
    Instrument_69.insert(SecurityExchange_69.getString());
    FIX::SecurityGroup SecurityGroup_69("STRING_72514764");
    noRelatedSym_0_1.set(SecurityGroup_69);
    Instrument_69.insert(SecurityGroup_69.getString());
    FIX::SecurityID SecurityID_69("STRING_546690519");
    noRelatedSym_0_1.set(SecurityID_69);
    Instrument_69.insert(SecurityID_69.getString());
    FIX::SecurityIDSource SecurityIDSource_69("STRING_6");
    noRelatedSym_0_1.set(SecurityIDSource_69);
    Instrument_69.insert(SecurityIDSource_69.getString());
    FIX::SecurityStatus SecurityStatus_69("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_69);
    Instrument_69.insert(SecurityStatus_69.getString());
    FIX::SecuritySubType SecuritySubType_70("STRING_1523484617");
    noRelatedSym_0_1.set(SecuritySubType_70);
    Instrument_69.insert(SecuritySubType_70.getString());
    FIX::SecurityType SecurityType_71("STRING_SWING");
    noRelatedSym_0_1.set(SecurityType_71);
    Instrument_69.insert(SecurityType_71.getString());
    FIX::Seniority Seniority_69("STRING_SR");
    noRelatedSym_0_1.set(Seniority_69);
    Instrument_69.insert(Seniority_69.getString());
    FIX::SettlMethod SettlMethod_69('P');
    noRelatedSym_0_1.set(SettlMethod_69);
    Instrument_69.insert(SettlMethod_69.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_69("STRING_1202981093");
    noRelatedSym_0_1.set(SettleOnOpenFlag_69);
    Instrument_69.insert(SettleOnOpenFlag_69.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_69("STRING_2006055990");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_69);
    Instrument_69.insert(StateOrProvinceOfIssue_69.getString());
    FIX::StrikeCurrency StrikeCurrency_69("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_69);
    Instrument_69.insert(StrikeCurrency_69.getString());
    FIX::StrikeMultiplier StrikeMultiplier_69;
    StrikeMultiplier_69.setString("14787129");
    noRelatedSym_0_1.set(StrikeMultiplier_69);
    Instrument_69.insert(StrikeMultiplier_69.getString());
    FIX::StrikePrice StrikePrice_69;
    StrikePrice_69.setString("19585434");
    noRelatedSym_0_1.set(StrikePrice_69);
    Instrument_69.insert(StrikePrice_69.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_69(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_69);
    Instrument_69.insert(StrikePriceBoundaryMethod_69.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
    StrikePriceBoundaryPrecision_69.setString("21.030000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_69);
    Instrument_69.insert(StrikePriceBoundaryPrecision_69.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_69(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_69);
    Instrument_69.insert(StrikePriceDeterminationMethod_69.getString());
    FIX::StrikeValue StrikeValue_69;
    StrikeValue_69.setString("1371160");
    noRelatedSym_0_1.set(StrikeValue_69);
    Instrument_69.insert(StrikeValue_69.getString());
    FIX::Symbol Symbol_69("STRING_836591551");
    noRelatedSym_0_1.set(Symbol_69);
    Instrument_69.insert(Symbol_69.getString());
    FIX::SymbolSfx SymbolSfx_69("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_69);
    Instrument_69.insert(SymbolSfx_69.getString());
    FIX::TimeUnit TimeUnit_69("STRING_Yr");
    noRelatedSym_0_1.set(TimeUnit_69);
    Instrument_69.insert(TimeUnit_69.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_69(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_69);
    Instrument_69.insert(UnderlyingPriceDeterminationMethod_69.getString());
    FIX::UnitOfMeasure UnitOfMeasure_69("STRING_USD");
    noRelatedSym_0_1.set(UnitOfMeasure_69);
    Instrument_69.insert(UnitOfMeasure_69.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
    UnitOfMeasureQty_69.setString("1763101");
    noRelatedSym_0_1.set(UnitOfMeasureQty_69);
    Instrument_69.insert(UnitOfMeasureQty_69.getString());
    FIX::ValuationMethod ValuationMethod_69("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_69);
    Instrument_69.insert(ValuationMethod_69.getString());
    all_values.push_back(Instrument_69);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_133;
      FIX::ComplexEventCondition ComplexEventCondition_133(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventCondition_133.getString());
      FIX::ComplexEventPrice ComplexEventPrice_133;
      ComplexEventPrice_133.setString("1921016");
      noComplexEvents_1_1_0.set(ComplexEventPrice_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPrice_133.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_133(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryMethod_133.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_133;
      ComplexEventPriceBoundaryPrecision_133.setString("64.850000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryPrecision_133.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_133(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceTimeType_133.getString());
      FIX::ComplexEventType ComplexEventType_133(7);
      noComplexEvents_1_1_0.set(ComplexEventType_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexEventType_133.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_133;
      ComplexOptPayoutAmount_133.setString("18919170");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_133);
      ComplexEvents_NoComplexEvents_133.insert(ComplexOptPayoutAmount_133.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_133);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_273;
        FIX::ComplexEventEndDate ComplexEventEndDate_273(FIX::UTCTIMESTAMP(14, 26, 23, 6, 8, 2015));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_273);
        ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventEndDate_273.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_273(FIX::UTCTIMESTAMP(9, 44, 57, 5, 4, 2003));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_273);
        ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventStartDate_273.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_273);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_553;
          FIX::ComplexEventEndTime ComplexEventEndTime_553(FIX::UTCTIMEONLY(20, 20, 1));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_553);
          ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventEndTime_553.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_553(FIX::UTCTIMEONLY(13, 12, 9));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_553);
          ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventStartTime_553.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_553);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_554;
          FIX::ComplexEventEndTime ComplexEventEndTime_554(FIX::UTCTIMEONLY(1, 3, 8));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_554);
          ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventEndTime_554.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_554(FIX::UTCTIMEONLY(10, 13, 17));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_554);
          ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventStartTime_554.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_554);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_274;
        FIX::ComplexEventEndDate ComplexEventEndDate_274(FIX::UTCTIMESTAMP(7, 43, 33, 17, 8, 2006));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_274);
        ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventEndDate_274.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_274(FIX::UTCTIMESTAMP(16, 54, 42, 5, 11, 2015));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_274);
        ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventStartDate_274.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_274);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_555;
          FIX::ComplexEventEndTime ComplexEventEndTime_555(FIX::UTCTIMEONLY(6, 22, 6));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_555);
          ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventEndTime_555.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_555(FIX::UTCTIMEONLY(0, 18, 49));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_555);
          ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventStartTime_555.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_555);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_556;
          FIX::ComplexEventEndTime ComplexEventEndTime_556(FIX::UTCTIMEONLY(23, 44, 50));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_556);
          ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventEndTime_556.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_556(FIX::UTCTIMEONLY(6, 3, 19));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_556);
          ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventStartTime_556.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_556);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_557;
          FIX::ComplexEventEndTime ComplexEventEndTime_557(FIX::UTCTIMEONLY(3, 54, 49));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_557);
          ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventEndTime_557.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_557(FIX::UTCTIMEONLY(1, 0, 1));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_557);
          ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventStartTime_557.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_557);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_275;
        FIX::ComplexEventEndDate ComplexEventEndDate_275(FIX::UTCTIMESTAMP(6, 36, 7, 24, 10, 2001));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_275);
        ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventEndDate_275.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_275(FIX::UTCTIMESTAMP(7, 24, 20, 7, 5, 2000));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_275);
        ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventStartDate_275.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_275);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_558;
          FIX::ComplexEventEndTime ComplexEventEndTime_558(FIX::UTCTIMEONLY(6, 12, 49));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_558);
          ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventEndTime_558.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_558(FIX::UTCTIMEONLY(19, 44, 31));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_558);
          ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventStartTime_558.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_558);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_559;
          FIX::ComplexEventEndTime ComplexEventEndTime_559(FIX::UTCTIMEONLY(11, 17, 17));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_559);
          ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventEndTime_559.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_559(FIX::UTCTIMEONLY(19, 9, 1));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_559);
          ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventStartTime_559.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_559);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_134;
      FIX::ComplexEventCondition ComplexEventCondition_134(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventCondition_134.getString());
      FIX::ComplexEventPrice ComplexEventPrice_134;
      ComplexEventPrice_134.setString("14318450");
      noComplexEvents_1_1_1.set(ComplexEventPrice_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPrice_134.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_134(5);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryMethod_134.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_134;
      ComplexEventPriceBoundaryPrecision_134.setString("36.350000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryPrecision_134.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_134(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceTimeType_134.getString());
      FIX::ComplexEventType ComplexEventType_134(8);
      noComplexEvents_1_1_1.set(ComplexEventType_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventType_134.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_134;
      ComplexOptPayoutAmount_134.setString("736753");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexOptPayoutAmount_134.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_134);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_276;
        FIX::ComplexEventEndDate ComplexEventEndDate_276(FIX::UTCTIMESTAMP(9, 29, 53, 5, 1, 2015));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_276);
        ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventEndDate_276.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_276(FIX::UTCTIMESTAMP(10, 34, 28, 14, 10, 2017));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_276);
        ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventStartDate_276.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_276);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_560;
          FIX::ComplexEventEndTime ComplexEventEndTime_560(FIX::UTCTIMEONLY(16, 54, 21));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_560);
          ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventEndTime_560.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_560(FIX::UTCTIMEONLY(13, 30, 58));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_560);
          ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventStartTime_560.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_560);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_277;
        FIX::ComplexEventEndDate ComplexEventEndDate_277(FIX::UTCTIMESTAMP(2, 27, 17, 18, 11, 2002));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_277);
        ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventEndDate_277.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_277(FIX::UTCTIMESTAMP(5, 51, 9, 26, 9, 2013));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_277);
        ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventStartDate_277.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_277);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_561;
          FIX::ComplexEventEndTime ComplexEventEndTime_561(FIX::UTCTIMEONLY(11, 14, 32));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_561);
          ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventEndTime_561.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_561(FIX::UTCTIMEONLY(23, 37, 2));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_561);
          ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventStartTime_561.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_561);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_278;
        FIX::ComplexEventEndDate ComplexEventEndDate_278(FIX::UTCTIMESTAMP(10, 56, 25, 26, 3, 2011));
        noComplexEventDates_1_1_2_2.set(ComplexEventEndDate_278);
        ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventEndDate_278.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_278(FIX::UTCTIMESTAMP(16, 13, 48, 5, 12, 2008));
        noComplexEventDates_1_1_2_2.set(ComplexEventStartDate_278);
        ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventStartDate_278.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_278);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_562;
          FIX::ComplexEventEndTime ComplexEventEndTime_562(FIX::UTCTIMEONLY(11, 19, 24));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventEndTime_562);
          ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventEndTime_562.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_562(FIX::UTCTIMEONLY(4, 25, 54));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventStartTime_562);
          ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventStartTime_562.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_562);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_563;
          FIX::ComplexEventEndTime ComplexEventEndTime_563(FIX::UTCTIMEONLY(4, 8, 20));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventEndTime_563);
          ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventEndTime_563.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_563(FIX::UTCTIMEONLY(7, 58, 39));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventStartTime_563);
          ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventStartTime_563.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_563);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
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
      multiset<string> EvntGrp_NoEvents_135;
      FIX::EventDate EventDate_135("LOCALMKTDATE_429225204");
      noEvents_1_1_0.set(EventDate_135);
      EvntGrp_NoEvents_135.insert(EventDate_135.getString());
      FIX::EventPx EventPx_135;
      EventPx_135.setString("3730696");
      noEvents_1_1_0.set(EventPx_135);
      EvntGrp_NoEvents_135.insert(EventPx_135.getString());
      FIX::EventText EventText_135("STRING_40402519");
      noEvents_1_1_0.set(EventText_135);
      EvntGrp_NoEvents_135.insert(EventText_135.getString());
      FIX::EventTime EventTime_135(FIX::UTCTIMESTAMP(5, 7, 15, 25, 1, 2001));
      noEvents_1_1_0.set(EventTime_135);
      EvntGrp_NoEvents_135.insert(EventTime_135.getString());
      FIX::EventType EventType_135(12);
      noEvents_1_1_0.set(EventType_135);
      EvntGrp_NoEvents_135.insert(EventType_135.getString());
      all_values.push_back(EvntGrp_NoEvents_135);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_136;
      FIX::EventDate EventDate_136("LOCALMKTDATE_1296262428");
      noEvents_1_1_1.set(EventDate_136);
      EvntGrp_NoEvents_136.insert(EventDate_136.getString());
      FIX::EventPx EventPx_136;
      EventPx_136.setString("11866002");
      noEvents_1_1_1.set(EventPx_136);
      EvntGrp_NoEvents_136.insert(EventPx_136.getString());
      FIX::EventText EventText_136("STRING_234657211");
      noEvents_1_1_1.set(EventText_136);
      EvntGrp_NoEvents_136.insert(EventText_136.getString());
      FIX::EventTime EventTime_136(FIX::UTCTIMESTAMP(5, 50, 19, 23, 11, 2014));
      noEvents_1_1_1.set(EventTime_136);
      EvntGrp_NoEvents_136.insert(EventTime_136.getString());
      FIX::EventType EventType_136(10);
      noEvents_1_1_1.set(EventType_136);
      EvntGrp_NoEvents_136.insert(EventType_136.getString());
      all_values.push_back(EvntGrp_NoEvents_136);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_137;
      FIX::EventDate EventDate_137("LOCALMKTDATE_1341320910");
      noEvents_1_1_2.set(EventDate_137);
      EvntGrp_NoEvents_137.insert(EventDate_137.getString());
      FIX::EventPx EventPx_137;
      EventPx_137.setString("10343976");
      noEvents_1_1_2.set(EventPx_137);
      EvntGrp_NoEvents_137.insert(EventPx_137.getString());
      FIX::EventText EventText_137("STRING_2002229697");
      noEvents_1_1_2.set(EventText_137);
      EvntGrp_NoEvents_137.insert(EventText_137.getString());
      FIX::EventTime EventTime_137(FIX::UTCTIMESTAMP(13, 56, 41, 24, 11, 2017));
      noEvents_1_1_2.set(EventTime_137);
      EvntGrp_NoEvents_137.insert(EventTime_137.getString());
      FIX::EventType EventType_137(8);
      noEvents_1_1_2.set(EventType_137);
      EvntGrp_NoEvents_137.insert(EventType_137.getString());
      all_values.push_back(EvntGrp_NoEvents_137);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_134;
      FIX::InstrumentPartyID InstrumentPartyID_134("STRING_156138231");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_134);
      InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyID_134.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_134('4');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_134);
      InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyIDSource_134.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_134(637651277);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_134);
      InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyRole_134.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_134);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275;
        FIX::InstrumentPartySubID InstrumentPartySubID_275("STRING_869539918");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_275);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubID_275.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_275(1423755509);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_275);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubIDType_275.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_147;
      FIX::SecurityAltID SecurityAltID_147("STRING_741326281");
      noSecurityAltID_1_1_0.set(SecurityAltID_147);
      SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltID_147.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_147("STRING_572534289");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_147);
      SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltIDSource_147.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_147);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_148;
      FIX::SecurityAltID SecurityAltID_148("STRING_1837402135");
      noSecurityAltID_1_1_1.set(SecurityAltID_148);
      SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltID_148.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_148("STRING_975983492");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_148);
      SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltIDSource_148.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_148);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_149;
      FIX::SecurityAltID SecurityAltID_149("STRING_166721584");
      noSecurityAltID_1_1_2.set(SecurityAltID_149);
      SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltID_149.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_149("STRING_2131458876");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_149);
      SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltIDSource_149.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_149);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_138;
    FIX::SecurityXML SecurityXML_139("XMLDATA_2016376763");
    noRelatedSym_0_1.set(SecurityXML_139);
    FIX::SecurityXMLLen SecurityXMLLen_69(798137183);
    noRelatedSym_0_1.set(SecurityXMLLen_69);
    FIX::SecurityXMLSchema SecurityXMLSchema_69("STRING_1566714983");
    noRelatedSym_0_1.set(SecurityXMLSchema_69);
    SecurityXML_138.insert(SecurityXMLSchema_69.getString());
    all_values.push_back(SecurityXML_138);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_103;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_103("DATA_640921199");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuer_103.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_103(1167870304);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuerLen_103.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_103("DATA_1585735820");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDesc_103.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_103(1675318803);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDescLen_103.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
      UnderlyingAdjustedQuantity_103.setString("10226163");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_103);
      UnderlyingInstrument_103.insert(UnderlyingAdjustedQuantity_103.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
      UnderlyingAllocationPercent_103.setString("37.630000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_103);
      UnderlyingInstrument_103.insert(UnderlyingAllocationPercent_103.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
      UnderlyingAttachmentPoint_103.setString("90.640000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingAttachmentPoint_103.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_103("STRING_233836601");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_103);
      UnderlyingInstrument_103.insert(UnderlyingCFICode_103.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_103("STRING_1517153444");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_103);
      UnderlyingInstrument_103.insert(UnderlyingCPProgram_103.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_103("STRING_1847022004");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_103);
      UnderlyingInstrument_103.insert(UnderlyingCPRegType_103.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_103;
      UnderlyingCapValue_103.setString("17863662");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCapValue_103.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
      UnderlyingCashAmount_103.setString("5026946");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_103);
      UnderlyingInstrument_103.insert(UnderlyingCashAmount_103.getString());
      FIX::UnderlyingCashType UnderlyingCashType_103("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_103);
      UnderlyingInstrument_103.insert(UnderlyingCashType_103.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
      UnderlyingContractMultiplier_103.setString("12318147");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplier_103.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_103(658832912);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplierUnit_103.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_103("COUNTRY_843593801");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingCountryOfIssue_103.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_103("LOCALMKTDATE_1869466026");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponPaymentDate_103.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
      UnderlyingCouponRate_103.setString("51.390000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponRate_103.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_103("STRING_1713133719");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_103);
      UnderlyingInstrument_103.insert(UnderlyingCreditRating_103.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_103("USD");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrency_103.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
      UnderlyingCurrentValue_103.setString("3069763");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrentValue_103.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
      UnderlyingDetachmentPoint_103.setString("21.770000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingDetachmentPoint_103.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
      UnderlyingDirtyPrice_103.setString("3386619");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingDirtyPrice_103.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
      UnderlyingEndPrice_103.setString("12829598");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingEndPrice_103.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_103;
      UnderlyingEndValue_103.setString("18849937");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_103);
      UnderlyingInstrument_103.insert(UnderlyingEndValue_103.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_103(322637139);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_103);
      UnderlyingInstrument_103.insert(UnderlyingExerciseStyle_103.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_103;
      UnderlyingFXRate_103.setString("11518529");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRate_103.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_103('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRateCalc_103.getString());
      FIX::UnderlyingFactor UnderlyingFactor_103;
      UnderlyingFactor_103.setString("18893521");
      noUnderlyings_1_1_0.set(UnderlyingFactor_103);
      UnderlyingInstrument_103.insert(UnderlyingFactor_103.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_103(1396267870);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_103);
      UnderlyingInstrument_103.insert(UnderlyingFlowScheduleType_103.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_103("STRING_1176568497");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_103);
      UnderlyingInstrument_103.insert(UnderlyingInstrRegistry_103.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_103("LOCALMKTDATE_909738778");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_103);
      UnderlyingInstrument_103.insert(UnderlyingIssueDate_103.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_103("STRING_834520042");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(UnderlyingIssuer_103.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_103("STRING_704403652");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingLocaleOfIssue_103.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_103("LOCALMKTDATE_1932355131");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityDate_103.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_103("MONTHYEAR_1647873805");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityMonthYear_103.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_103("TZTIMEONLY_63119069");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityTime_103.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
      UnderlyingNotionalPercentageOutstanding_103.setString("80.840000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_103('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_103);
      UnderlyingInstrument_103.insert(UnderlyingOptAttribute_103.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
      UnderlyingOriginalNotionalPercentageOutstanding_103.setString("10.730000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingOriginalNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_103("STRING_1805074324");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasure_103.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
      UnderlyingPriceUnitOfMeasureQty_103.setString("15202382");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasureQty_103.getString());
      FIX::UnderlyingProduct UnderlyingProduct_103(176088369);
      noUnderlyings_1_1_0.set(UnderlyingProduct_103);
      UnderlyingInstrument_103.insert(UnderlyingProduct_103.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_103(889405425);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_103);
      UnderlyingInstrument_103.insert(UnderlyingPutOrCall_103.getString());
      FIX::UnderlyingPx UnderlyingPx_103;
      UnderlyingPx_103.setString("315875");
      noUnderlyings_1_1_0.set(UnderlyingPx_103);
      UnderlyingInstrument_103.insert(UnderlyingPx_103.getString());
      FIX::UnderlyingQty UnderlyingQty_103;
      UnderlyingQty_103.setString("10196821");
      noUnderlyings_1_1_0.set(UnderlyingQty_103);
      UnderlyingInstrument_103.insert(UnderlyingQty_103.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_103("LOCALMKTDATE_611387804");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_103);
      UnderlyingInstrument_103.insert(UnderlyingRedemptionDate_103.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_103("STRING_29529037");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingRepoCollateralSecurityType_103.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
      UnderlyingRepurchaseRate_103.setString("22.420000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseRate_103.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_103(1757125692);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseTerm_103.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_103("STRING_678272462");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_103);
      UnderlyingInstrument_103.insert(UnderlyingRestructuringType_103.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_103("STRING_892308595");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityDesc_103.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_103("EXCHANGE_1327914221");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityExchange_103.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_103("STRING_1016934373");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityID_103.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_103("STRING_27784792");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityIDSource_103.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_103("STRING_1065424335");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecuritySubType_103.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_103("STRING_1339571513");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityType_103.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_103("STRING_1179637753");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_103);
      UnderlyingInstrument_103.insert(UnderlyingSeniority_103.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_103("STRING_1601071633");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlMethod_103.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_103(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlementType_103.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_103;
      UnderlyingStartValue_103.setString("4284219");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_103);
      UnderlyingInstrument_103.insert(UnderlyingStartValue_103.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_103("STRING_630156482");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingStateOrProvinceOfIssue_103.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_103("EUR");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikeCurrency_103.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
      UnderlyingStrikePrice_103.setString("13345601");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikePrice_103.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_103("STRING_1776050249");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbol_103.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_103("STRING_763332174");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbolSfx_103.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_103("STRING_1397679203");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingTimeUnit_103.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_103("STRING_1794758334");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasure_103.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
      UnderlyingUnitOfMeasureQty_103.setString("17808757");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasureQty_103.getString());
      all_values.push_back(UnderlyingInstrument_103);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_211;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_211("STRING_1452349010");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_211);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltID_211.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_211("STRING_1153630409");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_211);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltIDSource_211.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_212;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_212("STRING_1336424998");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_212);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltID_212.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_212("STRING_194270787");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_212);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltIDSource_212.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_202;
        FIX::UnderlyingStipType UnderlyingStipType_202("STRING_208623521");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_202);
        UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipType_202.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_202("STRING_805658591");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_202);
        UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipValue_202.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_202);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_203;
        FIX::UnderlyingStipType UnderlyingStipType_203("STRING_1214746993");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_203);
        UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipType_203.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_203("STRING_793955763");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_203);
        UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipValue_203.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_203);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_204;
        FIX::UnderlyingStipType UnderlyingStipType_204("STRING_415300635");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_204);
        UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipType_204.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_204("STRING_1893019455");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_204);
        UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipValue_204.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_204);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_205("STRING_1743214857");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyID_205.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_205('7');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyIDSource_205.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_205(1714049150);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyRole_205.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_408("STRING_2102041693");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_408);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubID_408.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_408(746203255);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_408);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubIDType_408.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_409("STRING_114743529");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_409);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubID_409.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_409(1035998033);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_409);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubIDType_409.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_206("STRING_1174625230");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyID_206.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_206('7');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyIDSource_206.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_206(879693151);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyRole_206.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_410("STRING_2079460146");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_410);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubID_410.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_410(508259752);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_410);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubIDType_410.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_104;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_104("DATA_1053415773");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuer_104.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_104(1329655701);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuerLen_104.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_104("DATA_155534438");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDesc_104.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_104(686807900);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDescLen_104.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
      UnderlyingAdjustedQuantity_104.setString("3425086");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_104);
      UnderlyingInstrument_104.insert(UnderlyingAdjustedQuantity_104.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
      UnderlyingAllocationPercent_104.setString("34.480000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_104);
      UnderlyingInstrument_104.insert(UnderlyingAllocationPercent_104.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
      UnderlyingAttachmentPoint_104.setString("83.090000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingAttachmentPoint_104.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_104("STRING_1678933681");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_104);
      UnderlyingInstrument_104.insert(UnderlyingCFICode_104.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_104("STRING_1802154236");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_104);
      UnderlyingInstrument_104.insert(UnderlyingCPProgram_104.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_104("STRING_878172617");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_104);
      UnderlyingInstrument_104.insert(UnderlyingCPRegType_104.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_104;
      UnderlyingCapValue_104.setString("18875572");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCapValue_104.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
      UnderlyingCashAmount_104.setString("4603291");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_104);
      UnderlyingInstrument_104.insert(UnderlyingCashAmount_104.getString());
      FIX::UnderlyingCashType UnderlyingCashType_104("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_104);
      UnderlyingInstrument_104.insert(UnderlyingCashType_104.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
      UnderlyingContractMultiplier_104.setString("5340293");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplier_104.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_104(875629815);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplierUnit_104.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_104("COUNTRY_1838455417");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingCountryOfIssue_104.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_104("LOCALMKTDATE_72810027");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponPaymentDate_104.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
      UnderlyingCouponRate_104.setString("10.240000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponRate_104.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_104("STRING_453441949");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_104);
      UnderlyingInstrument_104.insert(UnderlyingCreditRating_104.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_104("GBP");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrency_104.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
      UnderlyingCurrentValue_104.setString("4079999");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrentValue_104.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
      UnderlyingDetachmentPoint_104.setString("87.850000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingDetachmentPoint_104.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
      UnderlyingDirtyPrice_104.setString("12472600");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingDirtyPrice_104.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
      UnderlyingEndPrice_104.setString("14439980");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingEndPrice_104.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_104;
      UnderlyingEndValue_104.setString("15602040");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_104);
      UnderlyingInstrument_104.insert(UnderlyingEndValue_104.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_104(1992160109);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_104);
      UnderlyingInstrument_104.insert(UnderlyingExerciseStyle_104.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_104;
      UnderlyingFXRate_104.setString("1762075");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRate_104.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_104('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRateCalc_104.getString());
      FIX::UnderlyingFactor UnderlyingFactor_104;
      UnderlyingFactor_104.setString("19241366");
      noUnderlyings_1_1_1.set(UnderlyingFactor_104);
      UnderlyingInstrument_104.insert(UnderlyingFactor_104.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_104(684467283);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_104);
      UnderlyingInstrument_104.insert(UnderlyingFlowScheduleType_104.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_104("STRING_756219740");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_104);
      UnderlyingInstrument_104.insert(UnderlyingInstrRegistry_104.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_104("LOCALMKTDATE_1106308661");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_104);
      UnderlyingInstrument_104.insert(UnderlyingIssueDate_104.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_104("STRING_840001722");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(UnderlyingIssuer_104.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_104("STRING_1443027641");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingLocaleOfIssue_104.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_104("LOCALMKTDATE_1448817343");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityDate_104.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_104("MONTHYEAR_300401522");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityMonthYear_104.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_104("TZTIMEONLY_1135982302");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityTime_104.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
      UnderlyingNotionalPercentageOutstanding_104.setString("73.760000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_104('2');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_104);
      UnderlyingInstrument_104.insert(UnderlyingOptAttribute_104.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
      UnderlyingOriginalNotionalPercentageOutstanding_104.setString("49.190000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingOriginalNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_104("STRING_720340930");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasure_104.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
      UnderlyingPriceUnitOfMeasureQty_104.setString("4154012");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasureQty_104.getString());
      FIX::UnderlyingProduct UnderlyingProduct_104(1959590881);
      noUnderlyings_1_1_1.set(UnderlyingProduct_104);
      UnderlyingInstrument_104.insert(UnderlyingProduct_104.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_104(1254370247);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_104);
      UnderlyingInstrument_104.insert(UnderlyingPutOrCall_104.getString());
      FIX::UnderlyingPx UnderlyingPx_104;
      UnderlyingPx_104.setString("12910311");
      noUnderlyings_1_1_1.set(UnderlyingPx_104);
      UnderlyingInstrument_104.insert(UnderlyingPx_104.getString());
      FIX::UnderlyingQty UnderlyingQty_104;
      UnderlyingQty_104.setString("16505626");
      noUnderlyings_1_1_1.set(UnderlyingQty_104);
      UnderlyingInstrument_104.insert(UnderlyingQty_104.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_104("LOCALMKTDATE_1327180274");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_104);
      UnderlyingInstrument_104.insert(UnderlyingRedemptionDate_104.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_104("STRING_1762392129");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingRepoCollateralSecurityType_104.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
      UnderlyingRepurchaseRate_104.setString("46.000000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseRate_104.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_104(966555804);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseTerm_104.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_104("STRING_747425049");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_104);
      UnderlyingInstrument_104.insert(UnderlyingRestructuringType_104.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_104("STRING_364520947");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityDesc_104.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_104("EXCHANGE_1352134589");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityExchange_104.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_104("STRING_1994685147");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityID_104.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_104("STRING_1808518975");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityIDSource_104.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_104("STRING_764854956");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecuritySubType_104.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_104("STRING_1839361609");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityType_104.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_104("STRING_1984726506");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_104);
      UnderlyingInstrument_104.insert(UnderlyingSeniority_104.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_104("STRING_467658923");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlMethod_104.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_104(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlementType_104.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_104;
      UnderlyingStartValue_104.setString("5217101");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_104);
      UnderlyingInstrument_104.insert(UnderlyingStartValue_104.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_104("STRING_1223878664");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingStateOrProvinceOfIssue_104.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_104("EUR");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikeCurrency_104.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
      UnderlyingStrikePrice_104.setString("5194226");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikePrice_104.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_104("STRING_2023656925");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbol_104.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_104("STRING_1662113386");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbolSfx_104.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_104("STRING_1655404959");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingTimeUnit_104.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_104("STRING_856440653");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasure_104.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
      UnderlyingUnitOfMeasureQty_104.setString("16171854");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasureQty_104.getString());
      all_values.push_back(UnderlyingInstrument_104);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_213;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_213("STRING_1576781584");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_213);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltID_213.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_213("STRING_2032586786");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_213);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltIDSource_213.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_214;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_214("STRING_1334183464");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_214);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltID_214.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_214("STRING_683668183");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_214);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltIDSource_214.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_215;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_215("STRING_1176134243");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_215);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltID_215.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_215("STRING_837262467");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_215);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltIDSource_215.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_205;
        FIX::UnderlyingStipType UnderlyingStipType_205("STRING_791042724");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_205);
        UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipType_205.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_205("STRING_793783419");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_205);
        UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipValue_205.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_205);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_206;
        FIX::UnderlyingStipType UnderlyingStipType_206("STRING_829920614");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_206);
        UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipType_206.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_206("STRING_1538467774");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_206);
        UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipValue_206.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_206);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_207("STRING_34571555");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyID_207.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_207('1');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyIDSource_207.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_207(819339693);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyRole_207.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_411("STRING_1077547234");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_411);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubID_411.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_411(656582551);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_411);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubIDType_411.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_412("STRING_1267085435");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_412);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubID_412.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_412(546078155);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_412);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubIDType_412.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_413("STRING_1178292692");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_413);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubID_413.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_413(343480451);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_413);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubIDType_413.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_208("STRING_1120917736");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyID_208.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_208('3');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyIDSource_208.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_208(862903108);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyRole_208.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_414("STRING_2054634294");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_414);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubID_414.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_414(370824419);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_414);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubIDType_414.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_2;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_2;
    FIX::PrevClosePx PrevClosePx_13;
    PrevClosePx_13.setString("18535316");
    noRelatedSym_0_2.set(PrevClosePx_13);
    RFQReqGrp_NoRelatedSym_2.insert(PrevClosePx_13.getString());
    FIX::QuoteRequestType QuoteRequestType_5(1);
    noRelatedSym_0_2.set(QuoteRequestType_5);
    RFQReqGrp_NoRelatedSym_2.insert(QuoteRequestType_5.getString());
    FIX::QuoteType QuoteType_13(2);
    noRelatedSym_0_2.set(QuoteType_13);
    RFQReqGrp_NoRelatedSym_2.insert(QuoteType_13.getString());
    FIX::TradingSessionID TradingSessionID_74("STRING_6");
    noRelatedSym_0_2.set(TradingSessionID_74);
    RFQReqGrp_NoRelatedSym_2.insert(TradingSessionID_74.getString());
    FIX::TradingSessionSubID TradingSessionSubID_74("STRING_6");
    noRelatedSym_0_2.set(TradingSessionSubID_74);
    RFQReqGrp_NoRelatedSym_2.insert(TradingSessionSubID_74.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_2);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_109;
      FIX::EncodedLegIssuer EncodedLegIssuer_109("DATA_1966497786");
      noLegs_2_1_0.set(EncodedLegIssuer_109);
      InstrumentLeg_109.insert(EncodedLegIssuer_109.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_109(438089876);
      noLegs_2_1_0.set(EncodedLegIssuerLen_109);
      InstrumentLeg_109.insert(EncodedLegIssuerLen_109.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_109("DATA_1916862934");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDesc_109.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_109(1829862596);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDescLen_109.getString());
      FIX::LegCFICode LegCFICode_109("STRING_1229132601");
      noLegs_2_1_0.set(LegCFICode_109);
      InstrumentLeg_109.insert(LegCFICode_109.getString());
      FIX::LegContractMultiplier LegContractMultiplier_109;
      LegContractMultiplier_109.setString("5631627");
      noLegs_2_1_0.set(LegContractMultiplier_109);
      InstrumentLeg_109.insert(LegContractMultiplier_109.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_109(512299562);
      noLegs_2_1_0.set(LegContractMultiplierUnit_109);
      InstrumentLeg_109.insert(LegContractMultiplierUnit_109.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_109("MONTHYEAR_620116727");
      noLegs_2_1_0.set(LegContractSettlMonth_109);
      InstrumentLeg_109.insert(LegContractSettlMonth_109.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_109("COUNTRY_1721467071");
      noLegs_2_1_0.set(LegCountryOfIssue_109);
      InstrumentLeg_109.insert(LegCountryOfIssue_109.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_109("LOCALMKTDATE_546871117");
      noLegs_2_1_0.set(LegCouponPaymentDate_109);
      InstrumentLeg_109.insert(LegCouponPaymentDate_109.getString());
      FIX::LegCouponRate LegCouponRate_109;
      LegCouponRate_109.setString("60.000000");
      noLegs_2_1_0.set(LegCouponRate_109);
      InstrumentLeg_109.insert(LegCouponRate_109.getString());
      FIX::LegCreditRating LegCreditRating_109("STRING_393323116");
      noLegs_2_1_0.set(LegCreditRating_109);
      InstrumentLeg_109.insert(LegCreditRating_109.getString());
      FIX::LegCurrency LegCurrency_109("EUR");
      noLegs_2_1_0.set(LegCurrency_109);
      InstrumentLeg_109.insert(LegCurrency_109.getString());
      FIX::LegDatedDate LegDatedDate_109("LOCALMKTDATE_1049905667");
      noLegs_2_1_0.set(LegDatedDate_109);
      InstrumentLeg_109.insert(LegDatedDate_109.getString());
      FIX::LegExerciseStyle LegExerciseStyle_109(465899416);
      noLegs_2_1_0.set(LegExerciseStyle_109);
      InstrumentLeg_109.insert(LegExerciseStyle_109.getString());
      FIX::LegFactor LegFactor_109;
      LegFactor_109.setString("14819277");
      noLegs_2_1_0.set(LegFactor_109);
      InstrumentLeg_109.insert(LegFactor_109.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_109(80714711);
      noLegs_2_1_0.set(LegFlowScheduleType_109);
      InstrumentLeg_109.insert(LegFlowScheduleType_109.getString());
      FIX::LegInstrRegistry LegInstrRegistry_109("STRING_809379867");
      noLegs_2_1_0.set(LegInstrRegistry_109);
      InstrumentLeg_109.insert(LegInstrRegistry_109.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_109("LOCALMKTDATE_455361830");
      noLegs_2_1_0.set(LegInterestAccrualDate_109);
      InstrumentLeg_109.insert(LegInterestAccrualDate_109.getString());
      FIX::LegIssueDate LegIssueDate_109("LOCALMKTDATE_473235619");
      noLegs_2_1_0.set(LegIssueDate_109);
      InstrumentLeg_109.insert(LegIssueDate_109.getString());
      FIX::LegIssuer LegIssuer_109("STRING_1672282975");
      noLegs_2_1_0.set(LegIssuer_109);
      InstrumentLeg_109.insert(LegIssuer_109.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_109("STRING_1452452844");
      noLegs_2_1_0.set(LegLocaleOfIssue_109);
      InstrumentLeg_109.insert(LegLocaleOfIssue_109.getString());
      FIX::LegMaturityDate LegMaturityDate_109("LOCALMKTDATE_380386265");
      noLegs_2_1_0.set(LegMaturityDate_109);
      InstrumentLeg_109.insert(LegMaturityDate_109.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_109("MONTHYEAR_2043107394");
      noLegs_2_1_0.set(LegMaturityMonthYear_109);
      InstrumentLeg_109.insert(LegMaturityMonthYear_109.getString());
      FIX::LegMaturityTime LegMaturityTime_109("TZTIMEONLY_1158500863");
      noLegs_2_1_0.set(LegMaturityTime_109);
      InstrumentLeg_109.insert(LegMaturityTime_109.getString());
      FIX::LegOptAttribute LegOptAttribute_109('1');
      noLegs_2_1_0.set(LegOptAttribute_109);
      InstrumentLeg_109.insert(LegOptAttribute_109.getString());
      FIX::LegOptionRatio LegOptionRatio_109;
      LegOptionRatio_109.setString("17885243");
      noLegs_2_1_0.set(LegOptionRatio_109);
      InstrumentLeg_109.insert(LegOptionRatio_109.getString());
      FIX::LegPool LegPool_109("STRING_293846818");
      noLegs_2_1_0.set(LegPool_109);
      InstrumentLeg_109.insert(LegPool_109.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_109("STRING_1166678041");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasure_109.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_109;
      LegPriceUnitOfMeasureQty_109.setString("7206412");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasureQty_109.getString());
      FIX::LegProduct LegProduct_109(112860956);
      noLegs_2_1_0.set(LegProduct_109);
      InstrumentLeg_109.insert(LegProduct_109.getString());
      FIX::LegPutOrCall LegPutOrCall_109(1604767917);
      noLegs_2_1_0.set(LegPutOrCall_109);
      InstrumentLeg_109.insert(LegPutOrCall_109.getString());
      FIX::LegRatioQty LegRatioQty_109;
      LegRatioQty_109.setString("4900205");
      noLegs_2_1_0.set(LegRatioQty_109);
      InstrumentLeg_109.insert(LegRatioQty_109.getString());
      FIX::LegRedemptionDate LegRedemptionDate_109("LOCALMKTDATE_1942723553");
      noLegs_2_1_0.set(LegRedemptionDate_109);
      InstrumentLeg_109.insert(LegRedemptionDate_109.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_109("STRING_686416870");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_109);
      InstrumentLeg_109.insert(LegRepoCollateralSecurityType_109.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_109;
      LegRepurchaseRate_109.setString("32.070000");
      noLegs_2_1_0.set(LegRepurchaseRate_109);
      InstrumentLeg_109.insert(LegRepurchaseRate_109.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_109(307539467);
      noLegs_2_1_0.set(LegRepurchaseTerm_109);
      InstrumentLeg_109.insert(LegRepurchaseTerm_109.getString());
      FIX::LegSecurityDesc LegSecurityDesc_109("STRING_1306533597");
      noLegs_2_1_0.set(LegSecurityDesc_109);
      InstrumentLeg_109.insert(LegSecurityDesc_109.getString());
      FIX::LegSecurityExchange LegSecurityExchange_109("EXCHANGE_627166630");
      noLegs_2_1_0.set(LegSecurityExchange_109);
      InstrumentLeg_109.insert(LegSecurityExchange_109.getString());
      FIX::LegSecurityID LegSecurityID_109("STRING_854410585");
      noLegs_2_1_0.set(LegSecurityID_109);
      InstrumentLeg_109.insert(LegSecurityID_109.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_109("STRING_1164835950");
      noLegs_2_1_0.set(LegSecurityIDSource_109);
      InstrumentLeg_109.insert(LegSecurityIDSource_109.getString());
      FIX::LegSecuritySubType LegSecuritySubType_109("STRING_1020489746");
      noLegs_2_1_0.set(LegSecuritySubType_109);
      InstrumentLeg_109.insert(LegSecuritySubType_109.getString());
      FIX::LegSecurityType LegSecurityType_109("STRING_53224566");
      noLegs_2_1_0.set(LegSecurityType_109);
      InstrumentLeg_109.insert(LegSecurityType_109.getString());
      FIX::LegSide LegSide_109('2');
      noLegs_2_1_0.set(LegSide_109);
      InstrumentLeg_109.insert(LegSide_109.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_109("STRING_2070395413");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_109);
      InstrumentLeg_109.insert(LegStateOrProvinceOfIssue_109.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_109("CAN");
      noLegs_2_1_0.set(LegStrikeCurrency_109);
      InstrumentLeg_109.insert(LegStrikeCurrency_109.getString());
      FIX::LegStrikePrice LegStrikePrice_109;
      LegStrikePrice_109.setString("36264");
      noLegs_2_1_0.set(LegStrikePrice_109);
      InstrumentLeg_109.insert(LegStrikePrice_109.getString());
      FIX::LegSymbol LegSymbol_109("STRING_1328503849");
      noLegs_2_1_0.set(LegSymbol_109);
      InstrumentLeg_109.insert(LegSymbol_109.getString());
      FIX::LegSymbolSfx LegSymbolSfx_109("STRING_1890491461");
      noLegs_2_1_0.set(LegSymbolSfx_109);
      InstrumentLeg_109.insert(LegSymbolSfx_109.getString());
      FIX::LegTimeUnit LegTimeUnit_109("STRING_476862096");
      noLegs_2_1_0.set(LegTimeUnit_109);
      InstrumentLeg_109.insert(LegTimeUnit_109.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_109("STRING_853303176");
      noLegs_2_1_0.set(LegUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegUnitOfMeasure_109.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_109;
      LegUnitOfMeasureQty_109.setString("11954606");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegUnitOfMeasureQty_109.getString());
      all_values.push_back(InstrumentLeg_109);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_220;
        FIX::LegSecurityAltID LegSecurityAltID_220("STRING_748926922");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_220);
        LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltID_220.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_220("STRING_206477872");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_220);
        LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltIDSource_220.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_220);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_221;
        FIX::LegSecurityAltID LegSecurityAltID_221("STRING_614487121");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_221);
        LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltID_221.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_221("STRING_389967671");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_221);
        LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltIDSource_221.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_221);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_222;
        FIX::LegSecurityAltID LegSecurityAltID_222("STRING_500324690");
        noLegSecurityAltID_2_0_2_2.set(LegSecurityAltID_222);
        LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltID_222.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_222("STRING_1781165162");
        noLegSecurityAltID_2_0_2_2.set(LegSecurityAltIDSource_222);
        LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltIDSource_222.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_222);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_110;
      FIX::EncodedLegIssuer EncodedLegIssuer_110("DATA_1110608887");
      noLegs_2_1_1.set(EncodedLegIssuer_110);
      InstrumentLeg_110.insert(EncodedLegIssuer_110.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_110(613185647);
      noLegs_2_1_1.set(EncodedLegIssuerLen_110);
      InstrumentLeg_110.insert(EncodedLegIssuerLen_110.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_110("DATA_1238449432");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDesc_110.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_110(1600629389);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDescLen_110.getString());
      FIX::LegCFICode LegCFICode_110("STRING_408425552");
      noLegs_2_1_1.set(LegCFICode_110);
      InstrumentLeg_110.insert(LegCFICode_110.getString());
      FIX::LegContractMultiplier LegContractMultiplier_110;
      LegContractMultiplier_110.setString("19248663");
      noLegs_2_1_1.set(LegContractMultiplier_110);
      InstrumentLeg_110.insert(LegContractMultiplier_110.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_110(506328948);
      noLegs_2_1_1.set(LegContractMultiplierUnit_110);
      InstrumentLeg_110.insert(LegContractMultiplierUnit_110.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_110("MONTHYEAR_715965019");
      noLegs_2_1_1.set(LegContractSettlMonth_110);
      InstrumentLeg_110.insert(LegContractSettlMonth_110.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_110("COUNTRY_1083916252");
      noLegs_2_1_1.set(LegCountryOfIssue_110);
      InstrumentLeg_110.insert(LegCountryOfIssue_110.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_110("LOCALMKTDATE_1133495578");
      noLegs_2_1_1.set(LegCouponPaymentDate_110);
      InstrumentLeg_110.insert(LegCouponPaymentDate_110.getString());
      FIX::LegCouponRate LegCouponRate_110;
      LegCouponRate_110.setString("56.040000");
      noLegs_2_1_1.set(LegCouponRate_110);
      InstrumentLeg_110.insert(LegCouponRate_110.getString());
      FIX::LegCreditRating LegCreditRating_110("STRING_101268554");
      noLegs_2_1_1.set(LegCreditRating_110);
      InstrumentLeg_110.insert(LegCreditRating_110.getString());
      FIX::LegCurrency LegCurrency_110("GBP");
      noLegs_2_1_1.set(LegCurrency_110);
      InstrumentLeg_110.insert(LegCurrency_110.getString());
      FIX::LegDatedDate LegDatedDate_110("LOCALMKTDATE_54470443");
      noLegs_2_1_1.set(LegDatedDate_110);
      InstrumentLeg_110.insert(LegDatedDate_110.getString());
      FIX::LegExerciseStyle LegExerciseStyle_110(2076897089);
      noLegs_2_1_1.set(LegExerciseStyle_110);
      InstrumentLeg_110.insert(LegExerciseStyle_110.getString());
      FIX::LegFactor LegFactor_110;
      LegFactor_110.setString("21427241");
      noLegs_2_1_1.set(LegFactor_110);
      InstrumentLeg_110.insert(LegFactor_110.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_110(1489600074);
      noLegs_2_1_1.set(LegFlowScheduleType_110);
      InstrumentLeg_110.insert(LegFlowScheduleType_110.getString());
      FIX::LegInstrRegistry LegInstrRegistry_110("STRING_2080523566");
      noLegs_2_1_1.set(LegInstrRegistry_110);
      InstrumentLeg_110.insert(LegInstrRegistry_110.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_110("LOCALMKTDATE_1323744353");
      noLegs_2_1_1.set(LegInterestAccrualDate_110);
      InstrumentLeg_110.insert(LegInterestAccrualDate_110.getString());
      FIX::LegIssueDate LegIssueDate_110("LOCALMKTDATE_1232607887");
      noLegs_2_1_1.set(LegIssueDate_110);
      InstrumentLeg_110.insert(LegIssueDate_110.getString());
      FIX::LegIssuer LegIssuer_110("STRING_409902014");
      noLegs_2_1_1.set(LegIssuer_110);
      InstrumentLeg_110.insert(LegIssuer_110.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_110("STRING_29563881");
      noLegs_2_1_1.set(LegLocaleOfIssue_110);
      InstrumentLeg_110.insert(LegLocaleOfIssue_110.getString());
      FIX::LegMaturityDate LegMaturityDate_110("LOCALMKTDATE_280584897");
      noLegs_2_1_1.set(LegMaturityDate_110);
      InstrumentLeg_110.insert(LegMaturityDate_110.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_110("MONTHYEAR_1267150375");
      noLegs_2_1_1.set(LegMaturityMonthYear_110);
      InstrumentLeg_110.insert(LegMaturityMonthYear_110.getString());
      FIX::LegMaturityTime LegMaturityTime_110("TZTIMEONLY_778490804");
      noLegs_2_1_1.set(LegMaturityTime_110);
      InstrumentLeg_110.insert(LegMaturityTime_110.getString());
      FIX::LegOptAttribute LegOptAttribute_110('4');
      noLegs_2_1_1.set(LegOptAttribute_110);
      InstrumentLeg_110.insert(LegOptAttribute_110.getString());
      FIX::LegOptionRatio LegOptionRatio_110;
      LegOptionRatio_110.setString("18816374");
      noLegs_2_1_1.set(LegOptionRatio_110);
      InstrumentLeg_110.insert(LegOptionRatio_110.getString());
      FIX::LegPool LegPool_110("STRING_1168458475");
      noLegs_2_1_1.set(LegPool_110);
      InstrumentLeg_110.insert(LegPool_110.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_110("STRING_987387460");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasure_110.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_110;
      LegPriceUnitOfMeasureQty_110.setString("15153190");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasureQty_110.getString());
      FIX::LegProduct LegProduct_110(131583715);
      noLegs_2_1_1.set(LegProduct_110);
      InstrumentLeg_110.insert(LegProduct_110.getString());
      FIX::LegPutOrCall LegPutOrCall_110(1600573107);
      noLegs_2_1_1.set(LegPutOrCall_110);
      InstrumentLeg_110.insert(LegPutOrCall_110.getString());
      FIX::LegRatioQty LegRatioQty_110;
      LegRatioQty_110.setString("6062847");
      noLegs_2_1_1.set(LegRatioQty_110);
      InstrumentLeg_110.insert(LegRatioQty_110.getString());
      FIX::LegRedemptionDate LegRedemptionDate_110("LOCALMKTDATE_1732213104");
      noLegs_2_1_1.set(LegRedemptionDate_110);
      InstrumentLeg_110.insert(LegRedemptionDate_110.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_110("STRING_2008998659");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_110);
      InstrumentLeg_110.insert(LegRepoCollateralSecurityType_110.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_110;
      LegRepurchaseRate_110.setString("74.500000");
      noLegs_2_1_1.set(LegRepurchaseRate_110);
      InstrumentLeg_110.insert(LegRepurchaseRate_110.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_110(91058405);
      noLegs_2_1_1.set(LegRepurchaseTerm_110);
      InstrumentLeg_110.insert(LegRepurchaseTerm_110.getString());
      FIX::LegSecurityDesc LegSecurityDesc_110("STRING_577480030");
      noLegs_2_1_1.set(LegSecurityDesc_110);
      InstrumentLeg_110.insert(LegSecurityDesc_110.getString());
      FIX::LegSecurityExchange LegSecurityExchange_110("EXCHANGE_1467583702");
      noLegs_2_1_1.set(LegSecurityExchange_110);
      InstrumentLeg_110.insert(LegSecurityExchange_110.getString());
      FIX::LegSecurityID LegSecurityID_110("STRING_1224553983");
      noLegs_2_1_1.set(LegSecurityID_110);
      InstrumentLeg_110.insert(LegSecurityID_110.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_110("STRING_371987");
      noLegs_2_1_1.set(LegSecurityIDSource_110);
      InstrumentLeg_110.insert(LegSecurityIDSource_110.getString());
      FIX::LegSecuritySubType LegSecuritySubType_110("STRING_1568852256");
      noLegs_2_1_1.set(LegSecuritySubType_110);
      InstrumentLeg_110.insert(LegSecuritySubType_110.getString());
      FIX::LegSecurityType LegSecurityType_110("STRING_1231055660");
      noLegs_2_1_1.set(LegSecurityType_110);
      InstrumentLeg_110.insert(LegSecurityType_110.getString());
      FIX::LegSide LegSide_110('1');
      noLegs_2_1_1.set(LegSide_110);
      InstrumentLeg_110.insert(LegSide_110.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_110("STRING_1623322699");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_110);
      InstrumentLeg_110.insert(LegStateOrProvinceOfIssue_110.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_110("USD");
      noLegs_2_1_1.set(LegStrikeCurrency_110);
      InstrumentLeg_110.insert(LegStrikeCurrency_110.getString());
      FIX::LegStrikePrice LegStrikePrice_110;
      LegStrikePrice_110.setString("9654391");
      noLegs_2_1_1.set(LegStrikePrice_110);
      InstrumentLeg_110.insert(LegStrikePrice_110.getString());
      FIX::LegSymbol LegSymbol_110("STRING_1093509019");
      noLegs_2_1_1.set(LegSymbol_110);
      InstrumentLeg_110.insert(LegSymbol_110.getString());
      FIX::LegSymbolSfx LegSymbolSfx_110("STRING_795473367");
      noLegs_2_1_1.set(LegSymbolSfx_110);
      InstrumentLeg_110.insert(LegSymbolSfx_110.getString());
      FIX::LegTimeUnit LegTimeUnit_110("STRING_50563364");
      noLegs_2_1_1.set(LegTimeUnit_110);
      InstrumentLeg_110.insert(LegTimeUnit_110.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_110("STRING_1503411033");
      noLegs_2_1_1.set(LegUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegUnitOfMeasure_110.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_110;
      LegUnitOfMeasureQty_110.setString("8250372");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegUnitOfMeasureQty_110.getString());
      all_values.push_back(InstrumentLeg_110);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_223;
        FIX::LegSecurityAltID LegSecurityAltID_223("STRING_623077761");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_223);
        LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltID_223.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_223("STRING_1603528053");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_223);
        LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltIDSource_223.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_223);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_224;
        FIX::LegSecurityAltID LegSecurityAltID_224("STRING_818211031");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltID_224);
        LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltID_224.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_224("STRING_357231610");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltIDSource_224);
        LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltIDSource_224.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_224);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_225;
        FIX::LegSecurityAltID LegSecurityAltID_225("STRING_624502880");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltID_225);
        LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltID_225.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_225("STRING_1805598491");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltIDSource_225);
        LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltIDSource_225.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_225);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    // Instrument
    multiset<string> Instrument_70;
    FIX::AttachmentPoint AttachmentPoint_70;
    AttachmentPoint_70.setString("6.210000");
    noRelatedSym_0_2.set(AttachmentPoint_70);
    Instrument_70.insert(AttachmentPoint_70.getString());
    FIX::CFICode CFICode_70("STRING_756086595");
    noRelatedSym_0_2.set(CFICode_70);
    Instrument_70.insert(CFICode_70.getString());
    FIX::CPProgram CPProgram_70(1);
    noRelatedSym_0_2.set(CPProgram_70);
    Instrument_70.insert(CPProgram_70.getString());
    FIX::CPRegType CPRegType_70("STRING_331351769");
    noRelatedSym_0_2.set(CPRegType_70);
    Instrument_70.insert(CPRegType_70.getString());
    FIX::CapPrice CapPrice_70;
    CapPrice_70.setString("3408160");
    noRelatedSym_0_2.set(CapPrice_70);
    Instrument_70.insert(CapPrice_70.getString());
    FIX::ContractMultiplier ContractMultiplier_70;
    ContractMultiplier_70.setString("11202029");
    noRelatedSym_0_2.set(ContractMultiplier_70);
    Instrument_70.insert(ContractMultiplier_70.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_70(2);
    noRelatedSym_0_2.set(ContractMultiplierUnit_70);
    Instrument_70.insert(ContractMultiplierUnit_70.getString());
    FIX::ContractSettlMonth ContractSettlMonth_70("MONTHYEAR_431874457");
    noRelatedSym_0_2.set(ContractSettlMonth_70);
    Instrument_70.insert(ContractSettlMonth_70.getString());
    FIX::CountryOfIssue CountryOfIssue_70("COUNTRY_1697682991");
    noRelatedSym_0_2.set(CountryOfIssue_70);
    Instrument_70.insert(CountryOfIssue_70.getString());
    FIX::CouponPaymentDate CouponPaymentDate_70("LOCALMKTDATE_35119273");
    noRelatedSym_0_2.set(CouponPaymentDate_70);
    Instrument_70.insert(CouponPaymentDate_70.getString());
    FIX::CouponRate CouponRate_70;
    CouponRate_70.setString("84.400000");
    noRelatedSym_0_2.set(CouponRate_70);
    Instrument_70.insert(CouponRate_70.getString());
    FIX::CreditRating CreditRating_70("STRING_1698054978");
    noRelatedSym_0_2.set(CreditRating_70);
    Instrument_70.insert(CreditRating_70.getString());
    FIX::DatedDate DatedDate_70("LOCALMKTDATE_1603971529");
    noRelatedSym_0_2.set(DatedDate_70);
    Instrument_70.insert(DatedDate_70.getString());
    FIX::DetachmentPoint DetachmentPoint_70;
    DetachmentPoint_70.setString("4.520000");
    noRelatedSym_0_2.set(DetachmentPoint_70);
    Instrument_70.insert(DetachmentPoint_70.getString());
    FIX::EncodedIssuer EncodedIssuer_70("DATA_1174543488");
    noRelatedSym_0_2.set(EncodedIssuer_70);
    Instrument_70.insert(EncodedIssuer_70.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_70(1079810580);
    noRelatedSym_0_2.set(EncodedIssuerLen_70);
    Instrument_70.insert(EncodedIssuerLen_70.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_70("DATA_1900469554");
    noRelatedSym_0_2.set(EncodedSecurityDesc_70);
    Instrument_70.insert(EncodedSecurityDesc_70.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_70(646272502);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_70);
    Instrument_70.insert(EncodedSecurityDescLen_70.getString());
    FIX::ExerciseStyle ExerciseStyle_70(2);
    noRelatedSym_0_2.set(ExerciseStyle_70);
    Instrument_70.insert(ExerciseStyle_70.getString());
    FIX::Factor Factor_70;
    Factor_70.setString("8464949");
    noRelatedSym_0_2.set(Factor_70);
    Instrument_70.insert(Factor_70.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_70(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_70);
    Instrument_70.insert(FlexProductEligibilityIndicator_70.getString());
    FIX::FlexibleIndicator FlexibleIndicator_70(false);
    noRelatedSym_0_2.set(FlexibleIndicator_70);
    Instrument_70.insert(FlexibleIndicator_70.getString());
    FIX::FloorPrice FloorPrice_70;
    FloorPrice_70.setString("2024223");
    noRelatedSym_0_2.set(FloorPrice_70);
    Instrument_70.insert(FloorPrice_70.getString());
    FIX::FlowScheduleType FlowScheduleType_70(0);
    noRelatedSym_0_2.set(FlowScheduleType_70);
    Instrument_70.insert(FlowScheduleType_70.getString());
    FIX::InstrRegistry InstrRegistry_70("STRING_279477683");
    noRelatedSym_0_2.set(InstrRegistry_70);
    Instrument_70.insert(InstrRegistry_70.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_70('8');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_70);
    Instrument_70.insert(InstrmtAssignmentMethod_70.getString());
    FIX::InterestAccrualDate InterestAccrualDate_70("LOCALMKTDATE_1722827523");
    noRelatedSym_0_2.set(InterestAccrualDate_70);
    Instrument_70.insert(InterestAccrualDate_70.getString());
    FIX::IssueDate IssueDate_70("LOCALMKTDATE_1097688714");
    noRelatedSym_0_2.set(IssueDate_70);
    Instrument_70.insert(IssueDate_70.getString());
    FIX::Issuer Issuer_70("STRING_1182731682");
    noRelatedSym_0_2.set(Issuer_70);
    Instrument_70.insert(Issuer_70.getString());
    FIX::ListMethod ListMethod_70(0);
    noRelatedSym_0_2.set(ListMethod_70);
    Instrument_70.insert(ListMethod_70.getString());
    FIX::LocaleOfIssue LocaleOfIssue_70("STRING_755803557");
    noRelatedSym_0_2.set(LocaleOfIssue_70);
    Instrument_70.insert(LocaleOfIssue_70.getString());
    FIX::MaturityDate MaturityDate_70("LOCALMKTDATE_907798655");
    noRelatedSym_0_2.set(MaturityDate_70);
    Instrument_70.insert(MaturityDate_70.getString());
    FIX::MaturityMonthYear MaturityMonthYear_70("MONTHYEAR_955933351");
    noRelatedSym_0_2.set(MaturityMonthYear_70);
    Instrument_70.insert(MaturityMonthYear_70.getString());
    FIX::MaturityTime MaturityTime_70("TZTIMEONLY_2014491507");
    noRelatedSym_0_2.set(MaturityTime_70);
    Instrument_70.insert(MaturityTime_70.getString());
    FIX::MinPriceIncrement MinPriceIncrement_70;
    MinPriceIncrement_70.setString("12391504");
    noRelatedSym_0_2.set(MinPriceIncrement_70);
    Instrument_70.insert(MinPriceIncrement_70.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_70;
    MinPriceIncrementAmount_70.setString("12967494");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_70);
    Instrument_70.insert(MinPriceIncrementAmount_70.getString());
    FIX::NTPositionLimit NTPositionLimit_70(987210820);
    noRelatedSym_0_2.set(NTPositionLimit_70);
    Instrument_70.insert(NTPositionLimit_70.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_70;
    NotionalPercentageOutstanding_70.setString("96.430000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_70);
    Instrument_70.insert(NotionalPercentageOutstanding_70.getString());
    FIX::OptAttribute OptAttribute_70('1');
    noRelatedSym_0_2.set(OptAttribute_70);
    Instrument_70.insert(OptAttribute_70.getString());
    FIX::OptPayoutAmount OptPayoutAmount_70;
    OptPayoutAmount_70.setString("5374101");
    noRelatedSym_0_2.set(OptPayoutAmount_70);
    Instrument_70.insert(OptPayoutAmount_70.getString());
    FIX::OptPayoutType OptPayoutType_70(2);
    noRelatedSym_0_2.set(OptPayoutType_70);
    Instrument_70.insert(OptPayoutType_70.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_70;
    OriginalNotionalPercentageOutstanding_70.setString("86.530000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_70);
    Instrument_70.insert(OriginalNotionalPercentageOutstanding_70.getString());
    FIX::Pool Pool_70("STRING_87981494");
    noRelatedSym_0_2.set(Pool_70);
    Instrument_70.insert(Pool_70.getString());
    FIX::PositionLimit PositionLimit_70(1445776797);
    noRelatedSym_0_2.set(PositionLimit_70);
    Instrument_70.insert(PositionLimit_70.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_70("STRING_INX");
    noRelatedSym_0_2.set(PriceQuoteMethod_70);
    Instrument_70.insert(PriceQuoteMethod_70.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_70("STRING_1262524982");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_70);
    Instrument_70.insert(PriceUnitOfMeasure_70.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_70;
    PriceUnitOfMeasureQty_70.setString("3781037");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_70);
    Instrument_70.insert(PriceUnitOfMeasureQty_70.getString());
    FIX::Product Product_72(4);
    noRelatedSym_0_2.set(Product_72);
    Instrument_70.insert(Product_72.getString());
    FIX::ProductComplex ProductComplex_70("STRING_1908797484");
    noRelatedSym_0_2.set(ProductComplex_70);
    Instrument_70.insert(ProductComplex_70.getString());
    FIX::PutOrCall PutOrCall_70(0);
    noRelatedSym_0_2.set(PutOrCall_70);
    Instrument_70.insert(PutOrCall_70.getString());
    FIX::RedemptionDate RedemptionDate_70("LOCALMKTDATE_429566289");
    noRelatedSym_0_2.set(RedemptionDate_70);
    Instrument_70.insert(RedemptionDate_70.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_70("STRING_1203059705");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_70);
    Instrument_70.insert(RepoCollateralSecurityType_70.getString());
    FIX::RepurchaseRate RepurchaseRate_70;
    RepurchaseRate_70.setString("92.080000");
    noRelatedSym_0_2.set(RepurchaseRate_70);
    Instrument_70.insert(RepurchaseRate_70.getString());
    FIX::RepurchaseTerm RepurchaseTerm_70(631988600);
    noRelatedSym_0_2.set(RepurchaseTerm_70);
    Instrument_70.insert(RepurchaseTerm_70.getString());
    FIX::RestructuringType RestructuringType_70("STRING_FR");
    noRelatedSym_0_2.set(RestructuringType_70);
    Instrument_70.insert(RestructuringType_70.getString());
    FIX::SecurityDesc SecurityDesc_70("STRING_503676891");
    noRelatedSym_0_2.set(SecurityDesc_70);
    Instrument_70.insert(SecurityDesc_70.getString());
    FIX::SecurityExchange SecurityExchange_70("EXCHANGE_1457488672");
    noRelatedSym_0_2.set(SecurityExchange_70);
    Instrument_70.insert(SecurityExchange_70.getString());
    FIX::SecurityGroup SecurityGroup_70("STRING_897703051");
    noRelatedSym_0_2.set(SecurityGroup_70);
    Instrument_70.insert(SecurityGroup_70.getString());
    FIX::SecurityID SecurityID_70("STRING_1601365605");
    noRelatedSym_0_2.set(SecurityID_70);
    Instrument_70.insert(SecurityID_70.getString());
    FIX::SecurityIDSource SecurityIDSource_70("STRING_1");
    noRelatedSym_0_2.set(SecurityIDSource_70);
    Instrument_70.insert(SecurityIDSource_70.getString());
    FIX::SecurityStatus SecurityStatus_70("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_70);
    Instrument_70.insert(SecurityStatus_70.getString());
    FIX::SecuritySubType SecuritySubType_71("STRING_209685514");
    noRelatedSym_0_2.set(SecuritySubType_71);
    Instrument_70.insert(SecuritySubType_71.getString());
    FIX::SecurityType SecurityType_72("STRING_MPO");
    noRelatedSym_0_2.set(SecurityType_72);
    Instrument_70.insert(SecurityType_72.getString());
    FIX::Seniority Seniority_70("STRING_SR");
    noRelatedSym_0_2.set(Seniority_70);
    Instrument_70.insert(Seniority_70.getString());
    FIX::SettlMethod SettlMethod_70('P');
    noRelatedSym_0_2.set(SettlMethod_70);
    Instrument_70.insert(SettlMethod_70.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_70("STRING_492202138");
    noRelatedSym_0_2.set(SettleOnOpenFlag_70);
    Instrument_70.insert(SettleOnOpenFlag_70.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_70("STRING_1202748914");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_70);
    Instrument_70.insert(StateOrProvinceOfIssue_70.getString());
    FIX::StrikeCurrency StrikeCurrency_70("CAN");
    noRelatedSym_0_2.set(StrikeCurrency_70);
    Instrument_70.insert(StrikeCurrency_70.getString());
    FIX::StrikeMultiplier StrikeMultiplier_70;
    StrikeMultiplier_70.setString("7838891");
    noRelatedSym_0_2.set(StrikeMultiplier_70);
    Instrument_70.insert(StrikeMultiplier_70.getString());
    FIX::StrikePrice StrikePrice_70;
    StrikePrice_70.setString("16013143");
    noRelatedSym_0_2.set(StrikePrice_70);
    Instrument_70.insert(StrikePrice_70.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_70(3);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_70);
    Instrument_70.insert(StrikePriceBoundaryMethod_70.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_70;
    StrikePriceBoundaryPrecision_70.setString("77.800000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_70);
    Instrument_70.insert(StrikePriceBoundaryPrecision_70.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_70(3);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_70);
    Instrument_70.insert(StrikePriceDeterminationMethod_70.getString());
    FIX::StrikeValue StrikeValue_70;
    StrikeValue_70.setString("15864701");
    noRelatedSym_0_2.set(StrikeValue_70);
    Instrument_70.insert(StrikeValue_70.getString());
    FIX::Symbol Symbol_70("STRING_1851543237");
    noRelatedSym_0_2.set(Symbol_70);
    Instrument_70.insert(Symbol_70.getString());
    FIX::SymbolSfx SymbolSfx_70("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_70);
    Instrument_70.insert(SymbolSfx_70.getString());
    FIX::TimeUnit TimeUnit_70("STRING_D");
    noRelatedSym_0_2.set(TimeUnit_70);
    Instrument_70.insert(TimeUnit_70.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_70(2);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_70);
    Instrument_70.insert(UnderlyingPriceDeterminationMethod_70.getString());
    FIX::UnitOfMeasure UnitOfMeasure_70("STRING_Alw");
    noRelatedSym_0_2.set(UnitOfMeasure_70);
    Instrument_70.insert(UnitOfMeasure_70.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_70;
    UnitOfMeasureQty_70.setString("929600");
    noRelatedSym_0_2.set(UnitOfMeasureQty_70);
    Instrument_70.insert(UnitOfMeasureQty_70.getString());
    FIX::ValuationMethod ValuationMethod_70("STRING_EQTY");
    noRelatedSym_0_2.set(ValuationMethod_70);
    Instrument_70.insert(ValuationMethod_70.getString());
    all_values.push_back(Instrument_70);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_135;
      FIX::ComplexEventCondition ComplexEventCondition_135(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventCondition_135.getString());
      FIX::ComplexEventPrice ComplexEventPrice_135;
      ComplexEventPrice_135.setString("3486858");
      noComplexEvents_2_1_0.set(ComplexEventPrice_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPrice_135.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_135(5);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryMethod_135.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_135;
      ComplexEventPriceBoundaryPrecision_135.setString("61.660000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryPrecision_135.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_135(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceTimeType_135.getString());
      FIX::ComplexEventType ComplexEventType_135(6);
      noComplexEvents_2_1_0.set(ComplexEventType_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventType_135.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_135;
      ComplexOptPayoutAmount_135.setString("2747181");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexOptPayoutAmount_135.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_135);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_279;
        FIX::ComplexEventEndDate ComplexEventEndDate_279(FIX::UTCTIMESTAMP(21, 53, 56, 26, 4, 2004));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_279);
        ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventEndDate_279.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_279(FIX::UTCTIMESTAMP(13, 49, 52, 11, 6, 2010));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_279);
        ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventStartDate_279.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_279);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_564;
          FIX::ComplexEventEndTime ComplexEventEndTime_564(FIX::UTCTIMEONLY(19, 19, 52));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_564);
          ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventEndTime_564.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_564(FIX::UTCTIMEONLY(11, 14, 17));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_564);
          ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventStartTime_564.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_564);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_565;
          FIX::ComplexEventEndTime ComplexEventEndTime_565(FIX::UTCTIMEONLY(8, 43, 21));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_565);
          ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventEndTime_565.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_565(FIX::UTCTIMEONLY(5, 44, 14));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_565);
          ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventStartTime_565.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_565);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_566;
          FIX::ComplexEventEndTime ComplexEventEndTime_566(FIX::UTCTIMEONLY(6, 59, 22));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_566);
          ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventEndTime_566.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_566(FIX::UTCTIMEONLY(19, 24, 48));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_566);
          ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventStartTime_566.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_566);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_280;
        FIX::ComplexEventEndDate ComplexEventEndDate_280(FIX::UTCTIMESTAMP(2, 32, 59, 11, 7, 2011));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_280);
        ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventEndDate_280.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_280(FIX::UTCTIMESTAMP(17, 41, 10, 1, 9, 2016));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_280);
        ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventStartDate_280.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_280);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_567;
          FIX::ComplexEventEndTime ComplexEventEndTime_567(FIX::UTCTIMEONLY(4, 22, 15));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_567);
          ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventEndTime_567.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_567(FIX::UTCTIMEONLY(15, 52, 32));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_567);
          ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventStartTime_567.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_567);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_568;
          FIX::ComplexEventEndTime ComplexEventEndTime_568(FIX::UTCTIMEONLY(10, 32, 43));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_568);
          ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventEndTime_568.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_568(FIX::UTCTIMEONLY(19, 7, 38));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_568);
          ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventStartTime_568.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_568);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_138;
      FIX::EventDate EventDate_138("LOCALMKTDATE_1679115733");
      noEvents_2_1_0.set(EventDate_138);
      EvntGrp_NoEvents_138.insert(EventDate_138.getString());
      FIX::EventPx EventPx_138;
      EventPx_138.setString("16912011");
      noEvents_2_1_0.set(EventPx_138);
      EvntGrp_NoEvents_138.insert(EventPx_138.getString());
      FIX::EventText EventText_138("STRING_381177018");
      noEvents_2_1_0.set(EventText_138);
      EvntGrp_NoEvents_138.insert(EventText_138.getString());
      FIX::EventTime EventTime_138(FIX::UTCTIMESTAMP(9, 47, 19, 26, 5, 2010));
      noEvents_2_1_0.set(EventTime_138);
      EvntGrp_NoEvents_138.insert(EventTime_138.getString());
      FIX::EventType EventType_138(16);
      noEvents_2_1_0.set(EventType_138);
      EvntGrp_NoEvents_138.insert(EventType_138.getString());
      all_values.push_back(EvntGrp_NoEvents_138);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_135;
      FIX::InstrumentPartyID InstrumentPartyID_135("STRING_514894650");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_135);
      InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyID_135.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_135('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_135);
      InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyIDSource_135.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_135(515379395);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_135);
      InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyRole_135.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_135);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276;
        FIX::InstrumentPartySubID InstrumentPartySubID_276("STRING_1384987676");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_276);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubID_276.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_276(1651675430);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_276);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubIDType_276.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277;
        FIX::InstrumentPartySubID InstrumentPartySubID_277("STRING_424116173");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_277);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubID_277.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_277(1652763419);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_277);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubIDType_277.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278;
        FIX::InstrumentPartySubID InstrumentPartySubID_278("STRING_1738501242");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_278);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubID_278.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_278(1366260146);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_278);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubIDType_278.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_136;
      FIX::InstrumentPartyID InstrumentPartyID_136("STRING_666178640");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyID_136.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_136('1');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyIDSource_136.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_136(990058970);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_136);
      InstrumentParties_NoInstrumentParties_136.insert(InstrumentPartyRole_136.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_136);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279;
        FIX::InstrumentPartySubID InstrumentPartySubID_279("STRING_778050119");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_279);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubID_279.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_279(1339677717);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_279);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubIDType_279.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_150;
      FIX::SecurityAltID SecurityAltID_150("STRING_1916871397");
      noSecurityAltID_2_1_0.set(SecurityAltID_150);
      SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltID_150.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_150("STRING_463202296");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_150);
      SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltIDSource_150.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_150);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_151;
      FIX::SecurityAltID SecurityAltID_151("STRING_601212068");
      noSecurityAltID_2_1_1.set(SecurityAltID_151);
      SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltID_151.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_151("STRING_1460588920");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_151);
      SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltIDSource_151.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_151);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_152;
      FIX::SecurityAltID SecurityAltID_152("STRING_844379314");
      noSecurityAltID_2_1_2.set(SecurityAltID_152);
      SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltID_152.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_152("STRING_275451721");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_152);
      SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltIDSource_152.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_152);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_140;
    FIX::SecurityXML SecurityXML_141("XMLDATA_29846801");
    noRelatedSym_0_2.set(SecurityXML_141);
    FIX::SecurityXMLLen SecurityXMLLen_70(110974633);
    noRelatedSym_0_2.set(SecurityXMLLen_70);
    FIX::SecurityXMLSchema SecurityXMLSchema_70("STRING_206842032");
    noRelatedSym_0_2.set(SecurityXMLSchema_70);
    SecurityXML_140.insert(SecurityXMLSchema_70.getString());
    all_values.push_back(SecurityXML_140);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_105;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_105("DATA_2811694");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuer_105.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_105(1944540694);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuerLen_105.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_105("DATA_510559855");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDesc_105.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_105(205190354);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDescLen_105.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
      UnderlyingAdjustedQuantity_105.setString("3119516");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_105);
      UnderlyingInstrument_105.insert(UnderlyingAdjustedQuantity_105.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
      UnderlyingAllocationPercent_105.setString("94.490000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_105);
      UnderlyingInstrument_105.insert(UnderlyingAllocationPercent_105.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
      UnderlyingAttachmentPoint_105.setString("97.490000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingAttachmentPoint_105.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_105("STRING_1218583112");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_105);
      UnderlyingInstrument_105.insert(UnderlyingCFICode_105.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_105("STRING_967043477");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_105);
      UnderlyingInstrument_105.insert(UnderlyingCPProgram_105.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_105("STRING_224761532");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_105);
      UnderlyingInstrument_105.insert(UnderlyingCPRegType_105.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_105;
      UnderlyingCapValue_105.setString("16426992");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCapValue_105.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
      UnderlyingCashAmount_105.setString("4723232");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_105);
      UnderlyingInstrument_105.insert(UnderlyingCashAmount_105.getString());
      FIX::UnderlyingCashType UnderlyingCashType_105("STRING_FIXED");
      noUnderlyings_2_1_0.set(UnderlyingCashType_105);
      UnderlyingInstrument_105.insert(UnderlyingCashType_105.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
      UnderlyingContractMultiplier_105.setString("8614757");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplier_105.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_105(1138501888);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplierUnit_105.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_105("COUNTRY_1076039595");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingCountryOfIssue_105.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_105("LOCALMKTDATE_1851534753");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponPaymentDate_105.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
      UnderlyingCouponRate_105.setString("2.030000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponRate_105.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_105("STRING_1854089714");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_105);
      UnderlyingInstrument_105.insert(UnderlyingCreditRating_105.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_105("EUR");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrency_105.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
      UnderlyingCurrentValue_105.setString("16234774");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrentValue_105.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
      UnderlyingDetachmentPoint_105.setString("11.180000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingDetachmentPoint_105.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
      UnderlyingDirtyPrice_105.setString("19318822");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingDirtyPrice_105.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
      UnderlyingEndPrice_105.setString("9365827");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingEndPrice_105.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_105;
      UnderlyingEndValue_105.setString("2038267");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_105);
      UnderlyingInstrument_105.insert(UnderlyingEndValue_105.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_105(59850326);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_105);
      UnderlyingInstrument_105.insert(UnderlyingExerciseStyle_105.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_105;
      UnderlyingFXRate_105.setString("9664295");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRate_105.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_105('D');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRateCalc_105.getString());
      FIX::UnderlyingFactor UnderlyingFactor_105;
      UnderlyingFactor_105.setString("2666923");
      noUnderlyings_2_1_0.set(UnderlyingFactor_105);
      UnderlyingInstrument_105.insert(UnderlyingFactor_105.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_105(16055876);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_105);
      UnderlyingInstrument_105.insert(UnderlyingFlowScheduleType_105.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_105("STRING_317613112");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_105);
      UnderlyingInstrument_105.insert(UnderlyingInstrRegistry_105.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_105("LOCALMKTDATE_63749405");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_105);
      UnderlyingInstrument_105.insert(UnderlyingIssueDate_105.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_105("STRING_526615731");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(UnderlyingIssuer_105.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_105("STRING_522803466");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingLocaleOfIssue_105.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_105("LOCALMKTDATE_375701102");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityDate_105.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_105("MONTHYEAR_108671532");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityMonthYear_105.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_105("TZTIMEONLY_1243373216");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityTime_105.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
      UnderlyingNotionalPercentageOutstanding_105.setString("42.140000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_105('1');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_105);
      UnderlyingInstrument_105.insert(UnderlyingOptAttribute_105.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
      UnderlyingOriginalNotionalPercentageOutstanding_105.setString("47.480000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingOriginalNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_105("STRING_1089499852");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasure_105.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
      UnderlyingPriceUnitOfMeasureQty_105.setString("15480382");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasureQty_105.getString());
      FIX::UnderlyingProduct UnderlyingProduct_105(1283913874);
      noUnderlyings_2_1_0.set(UnderlyingProduct_105);
      UnderlyingInstrument_105.insert(UnderlyingProduct_105.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_105(1950975635);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_105);
      UnderlyingInstrument_105.insert(UnderlyingPutOrCall_105.getString());
      FIX::UnderlyingPx UnderlyingPx_105;
      UnderlyingPx_105.setString("5390564");
      noUnderlyings_2_1_0.set(UnderlyingPx_105);
      UnderlyingInstrument_105.insert(UnderlyingPx_105.getString());
      FIX::UnderlyingQty UnderlyingQty_105;
      UnderlyingQty_105.setString("2124698");
      noUnderlyings_2_1_0.set(UnderlyingQty_105);
      UnderlyingInstrument_105.insert(UnderlyingQty_105.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_105("LOCALMKTDATE_1655026741");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_105);
      UnderlyingInstrument_105.insert(UnderlyingRedemptionDate_105.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_105("STRING_800146700");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingRepoCollateralSecurityType_105.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
      UnderlyingRepurchaseRate_105.setString("95.350000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseRate_105.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_105(551271915);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseTerm_105.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_105("STRING_2130816885");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_105);
      UnderlyingInstrument_105.insert(UnderlyingRestructuringType_105.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_105("STRING_1542553351");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityDesc_105.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_105("EXCHANGE_2058203034");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityExchange_105.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_105("STRING_1915215491");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityID_105.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_105("STRING_331652438");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityIDSource_105.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_105("STRING_114546170");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecuritySubType_105.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_105("STRING_1975065817");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityType_105.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_105("STRING_1298081975");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_105);
      UnderlyingInstrument_105.insert(UnderlyingSeniority_105.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_105("STRING_429347588");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlMethod_105.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_105(5);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlementType_105.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_105;
      UnderlyingStartValue_105.setString("13141378");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_105);
      UnderlyingInstrument_105.insert(UnderlyingStartValue_105.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_105("STRING_746960700");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingStateOrProvinceOfIssue_105.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_105("JPY");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikeCurrency_105.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
      UnderlyingStrikePrice_105.setString("12697641");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikePrice_105.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_105("STRING_533725036");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbol_105.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_105("STRING_1949425114");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbolSfx_105.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_105("STRING_365653735");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingTimeUnit_105.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_105("STRING_2128009251");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasure_105.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
      UnderlyingUnitOfMeasureQty_105.setString("8776564");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasureQty_105.getString());
      all_values.push_back(UnderlyingInstrument_105);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_216;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_216("STRING_1070025455");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_216);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltID_216.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_216("STRING_278211084");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_216);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltIDSource_216.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_217;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_217("STRING_970218709");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_217);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltID_217.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_217("STRING_873517442");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_217);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltIDSource_217.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_218;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_218("STRING_817267581");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltID_218);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltID_218.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_218("STRING_1182688531");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltIDSource_218);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltIDSource_218.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_207;
        FIX::UnderlyingStipType UnderlyingStipType_207("STRING_1617414281");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_207);
        UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipType_207.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_207("STRING_1101764418");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_207);
        UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipValue_207.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_207);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_208;
        FIX::UnderlyingStipType UnderlyingStipType_208("STRING_932332451");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_208);
        UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipType_208.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_208("STRING_1600747518");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_208);
        UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipValue_208.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_208);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_209("STRING_843051837");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyID_209.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_209('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyIDSource_209.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_209(828486560);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyRole_209.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_415("STRING_1196061531");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_415);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubID_415.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_415(2126568535);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_415);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubIDType_415.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_416("STRING_1386945596");
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubID_416);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubID_416.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_416(1290336059);
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_416);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubIDType_416.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_417("STRING_1293222738");
          noUndlyInstrumentPartySubIDs_2_0_0_3_2.set(UnderlyingInstrumentPartySubID_417);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubID_417.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_417(2133906296);
          noUndlyInstrumentPartySubIDs_2_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_417);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubIDType_417.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_2);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_210("STRING_1448359993");
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyID_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyID_210.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_210('9');
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyIDSource_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyIDSource_210.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_210(1256186815);
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyRole_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyRole_210.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_418("STRING_788434138");
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubID_418);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubID_418.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_418(1621840550);
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_418);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubIDType_418.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_211("STRING_1962610633");
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyID_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyID_211.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_211('1');
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyIDSource_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyIDSource_211.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_211(1308145385);
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyRole_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyRole_211.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_419("STRING_1944301697");
          noUndlyInstrumentPartySubIDs_2_0_2_3_0.set(UnderlyingInstrumentPartySubID_419);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubID_419.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_419(130880447);
          noUndlyInstrumentPartySubIDs_2_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_419);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubIDType_419.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);

          noUndlyInstrumentParties_2_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_420("STRING_1758669882");
          noUndlyInstrumentPartySubIDs_2_0_2_3_1.set(UnderlyingInstrumentPartySubID_420);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubID_420.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_420(614085630);
          noUndlyInstrumentPartySubIDs_2_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_420);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubIDType_420.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);

          noUndlyInstrumentParties_2_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_3_1);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_106;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_106("DATA_1313568978");
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuer_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingIssuer_106.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_106(2139730418);
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuerLen_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingIssuerLen_106.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_106("DATA_84016263");
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDesc_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDesc_106.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_106(267849748);
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDescLen_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDescLen_106.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_106;
      UnderlyingAdjustedQuantity_106.setString("9245792");
      noUnderlyings_2_1_1.set(UnderlyingAdjustedQuantity_106);
      UnderlyingInstrument_106.insert(UnderlyingAdjustedQuantity_106.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_106;
      UnderlyingAllocationPercent_106.setString("37.810000");
      noUnderlyings_2_1_1.set(UnderlyingAllocationPercent_106);
      UnderlyingInstrument_106.insert(UnderlyingAllocationPercent_106.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_106;
      UnderlyingAttachmentPoint_106.setString("38.700000");
      noUnderlyings_2_1_1.set(UnderlyingAttachmentPoint_106);
      UnderlyingInstrument_106.insert(UnderlyingAttachmentPoint_106.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_106("STRING_1767631058");
      noUnderlyings_2_1_1.set(UnderlyingCFICode_106);
      UnderlyingInstrument_106.insert(UnderlyingCFICode_106.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_106("STRING_905759495");
      noUnderlyings_2_1_1.set(UnderlyingCPProgram_106);
      UnderlyingInstrument_106.insert(UnderlyingCPProgram_106.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_106("STRING_1593170430");
      noUnderlyings_2_1_1.set(UnderlyingCPRegType_106);
      UnderlyingInstrument_106.insert(UnderlyingCPRegType_106.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_106;
      UnderlyingCapValue_106.setString("5777454");
      noUnderlyings_2_1_1.set(UnderlyingCapValue_106);
      UnderlyingInstrument_106.insert(UnderlyingCapValue_106.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_106;
      UnderlyingCashAmount_106.setString("21018210");
      noUnderlyings_2_1_1.set(UnderlyingCashAmount_106);
      UnderlyingInstrument_106.insert(UnderlyingCashAmount_106.getString());
      FIX::UnderlyingCashType UnderlyingCashType_106("STRING_DIFF");
      noUnderlyings_2_1_1.set(UnderlyingCashType_106);
      UnderlyingInstrument_106.insert(UnderlyingCashType_106.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_106;
      UnderlyingContractMultiplier_106.setString("19646910");
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplier_106);
      UnderlyingInstrument_106.insert(UnderlyingContractMultiplier_106.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_106(1244673437);
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplierUnit_106);
      UnderlyingInstrument_106.insert(UnderlyingContractMultiplierUnit_106.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_106("COUNTRY_717994407");
      noUnderlyings_2_1_1.set(UnderlyingCountryOfIssue_106);
      UnderlyingInstrument_106.insert(UnderlyingCountryOfIssue_106.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_106("LOCALMKTDATE_1951113662");
      noUnderlyings_2_1_1.set(UnderlyingCouponPaymentDate_106);
      UnderlyingInstrument_106.insert(UnderlyingCouponPaymentDate_106.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_106;
      UnderlyingCouponRate_106.setString("97.830000");
      noUnderlyings_2_1_1.set(UnderlyingCouponRate_106);
      UnderlyingInstrument_106.insert(UnderlyingCouponRate_106.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_106("STRING_1704487079");
      noUnderlyings_2_1_1.set(UnderlyingCreditRating_106);
      UnderlyingInstrument_106.insert(UnderlyingCreditRating_106.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_106("CHF");
      noUnderlyings_2_1_1.set(UnderlyingCurrency_106);
      UnderlyingInstrument_106.insert(UnderlyingCurrency_106.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_106;
      UnderlyingCurrentValue_106.setString("3454375");
      noUnderlyings_2_1_1.set(UnderlyingCurrentValue_106);
      UnderlyingInstrument_106.insert(UnderlyingCurrentValue_106.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_106;
      UnderlyingDetachmentPoint_106.setString("37.320000");
      noUnderlyings_2_1_1.set(UnderlyingDetachmentPoint_106);
      UnderlyingInstrument_106.insert(UnderlyingDetachmentPoint_106.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_106;
      UnderlyingDirtyPrice_106.setString("1952781");
      noUnderlyings_2_1_1.set(UnderlyingDirtyPrice_106);
      UnderlyingInstrument_106.insert(UnderlyingDirtyPrice_106.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_106;
      UnderlyingEndPrice_106.setString("20115281");
      noUnderlyings_2_1_1.set(UnderlyingEndPrice_106);
      UnderlyingInstrument_106.insert(UnderlyingEndPrice_106.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_106;
      UnderlyingEndValue_106.setString("18423191");
      noUnderlyings_2_1_1.set(UnderlyingEndValue_106);
      UnderlyingInstrument_106.insert(UnderlyingEndValue_106.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_106(1080430590);
      noUnderlyings_2_1_1.set(UnderlyingExerciseStyle_106);
      UnderlyingInstrument_106.insert(UnderlyingExerciseStyle_106.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_106;
      UnderlyingFXRate_106.setString("18083462");
      noUnderlyings_2_1_1.set(UnderlyingFXRate_106);
      UnderlyingInstrument_106.insert(UnderlyingFXRate_106.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_106('D');
      noUnderlyings_2_1_1.set(UnderlyingFXRateCalc_106);
      UnderlyingInstrument_106.insert(UnderlyingFXRateCalc_106.getString());
      FIX::UnderlyingFactor UnderlyingFactor_106;
      UnderlyingFactor_106.setString("6916168");
      noUnderlyings_2_1_1.set(UnderlyingFactor_106);
      UnderlyingInstrument_106.insert(UnderlyingFactor_106.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_106(274948213);
      noUnderlyings_2_1_1.set(UnderlyingFlowScheduleType_106);
      UnderlyingInstrument_106.insert(UnderlyingFlowScheduleType_106.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_106("STRING_1139284894");
      noUnderlyings_2_1_1.set(UnderlyingInstrRegistry_106);
      UnderlyingInstrument_106.insert(UnderlyingInstrRegistry_106.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_106("LOCALMKTDATE_683863594");
      noUnderlyings_2_1_1.set(UnderlyingIssueDate_106);
      UnderlyingInstrument_106.insert(UnderlyingIssueDate_106.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_106("STRING_358964476");
      noUnderlyings_2_1_1.set(UnderlyingIssuer_106);
      UnderlyingInstrument_106.insert(UnderlyingIssuer_106.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_106("STRING_1407134643");
      noUnderlyings_2_1_1.set(UnderlyingLocaleOfIssue_106);
      UnderlyingInstrument_106.insert(UnderlyingLocaleOfIssue_106.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_106("LOCALMKTDATE_1608442815");
      noUnderlyings_2_1_1.set(UnderlyingMaturityDate_106);
      UnderlyingInstrument_106.insert(UnderlyingMaturityDate_106.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_106("MONTHYEAR_2043728257");
      noUnderlyings_2_1_1.set(UnderlyingMaturityMonthYear_106);
      UnderlyingInstrument_106.insert(UnderlyingMaturityMonthYear_106.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_106("TZTIMEONLY_24334865");
      noUnderlyings_2_1_1.set(UnderlyingMaturityTime_106);
      UnderlyingInstrument_106.insert(UnderlyingMaturityTime_106.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_106;
      UnderlyingNotionalPercentageOutstanding_106.setString("2.250000");
      noUnderlyings_2_1_1.set(UnderlyingNotionalPercentageOutstanding_106);
      UnderlyingInstrument_106.insert(UnderlyingNotionalPercentageOutstanding_106.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_106('8');
      noUnderlyings_2_1_1.set(UnderlyingOptAttribute_106);
      UnderlyingInstrument_106.insert(UnderlyingOptAttribute_106.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_106;
      UnderlyingOriginalNotionalPercentageOutstanding_106.setString("52.950000");
      noUnderlyings_2_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_106);
      UnderlyingInstrument_106.insert(UnderlyingOriginalNotionalPercentageOutstanding_106.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_106("STRING_1806335643");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasure_106);
      UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasure_106.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_106;
      UnderlyingPriceUnitOfMeasureQty_106.setString("7563414");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasureQty_106);
      UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasureQty_106.getString());
      FIX::UnderlyingProduct UnderlyingProduct_106(1042276964);
      noUnderlyings_2_1_1.set(UnderlyingProduct_106);
      UnderlyingInstrument_106.insert(UnderlyingProduct_106.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_106(1623543008);
      noUnderlyings_2_1_1.set(UnderlyingPutOrCall_106);
      UnderlyingInstrument_106.insert(UnderlyingPutOrCall_106.getString());
      FIX::UnderlyingPx UnderlyingPx_106;
      UnderlyingPx_106.setString("20010149");
      noUnderlyings_2_1_1.set(UnderlyingPx_106);
      UnderlyingInstrument_106.insert(UnderlyingPx_106.getString());
      FIX::UnderlyingQty UnderlyingQty_106;
      UnderlyingQty_106.setString("17602713");
      noUnderlyings_2_1_1.set(UnderlyingQty_106);
      UnderlyingInstrument_106.insert(UnderlyingQty_106.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_106("LOCALMKTDATE_1427173022");
      noUnderlyings_2_1_1.set(UnderlyingRedemptionDate_106);
      UnderlyingInstrument_106.insert(UnderlyingRedemptionDate_106.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_106("STRING_399081055");
      noUnderlyings_2_1_1.set(UnderlyingRepoCollateralSecurityType_106);
      UnderlyingInstrument_106.insert(UnderlyingRepoCollateralSecurityType_106.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_106;
      UnderlyingRepurchaseRate_106.setString("48.020000");
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseRate_106);
      UnderlyingInstrument_106.insert(UnderlyingRepurchaseRate_106.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_106(339506204);
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseTerm_106);
      UnderlyingInstrument_106.insert(UnderlyingRepurchaseTerm_106.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_106("STRING_779232220");
      noUnderlyings_2_1_1.set(UnderlyingRestructuringType_106);
      UnderlyingInstrument_106.insert(UnderlyingRestructuringType_106.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_106("STRING_1662712371");
      noUnderlyings_2_1_1.set(UnderlyingSecurityDesc_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityDesc_106.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_106("EXCHANGE_873679936");
      noUnderlyings_2_1_1.set(UnderlyingSecurityExchange_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityExchange_106.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_106("STRING_974510370");
      noUnderlyings_2_1_1.set(UnderlyingSecurityID_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityID_106.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_106("STRING_1526756905");
      noUnderlyings_2_1_1.set(UnderlyingSecurityIDSource_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityIDSource_106.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_106("STRING_568515405");
      noUnderlyings_2_1_1.set(UnderlyingSecuritySubType_106);
      UnderlyingInstrument_106.insert(UnderlyingSecuritySubType_106.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_106("STRING_2054940960");
      noUnderlyings_2_1_1.set(UnderlyingSecurityType_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityType_106.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_106("STRING_1187619488");
      noUnderlyings_2_1_1.set(UnderlyingSeniority_106);
      UnderlyingInstrument_106.insert(UnderlyingSeniority_106.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_106("STRING_394231322");
      noUnderlyings_2_1_1.set(UnderlyingSettlMethod_106);
      UnderlyingInstrument_106.insert(UnderlyingSettlMethod_106.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_106(5);
      noUnderlyings_2_1_1.set(UnderlyingSettlementType_106);
      UnderlyingInstrument_106.insert(UnderlyingSettlementType_106.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_106;
      UnderlyingStartValue_106.setString("14625677");
      noUnderlyings_2_1_1.set(UnderlyingStartValue_106);
      UnderlyingInstrument_106.insert(UnderlyingStartValue_106.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_106("STRING_1533516216");
      noUnderlyings_2_1_1.set(UnderlyingStateOrProvinceOfIssue_106);
      UnderlyingInstrument_106.insert(UnderlyingStateOrProvinceOfIssue_106.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_106("EUR");
      noUnderlyings_2_1_1.set(UnderlyingStrikeCurrency_106);
      UnderlyingInstrument_106.insert(UnderlyingStrikeCurrency_106.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_106;
      UnderlyingStrikePrice_106.setString("7931672");
      noUnderlyings_2_1_1.set(UnderlyingStrikePrice_106);
      UnderlyingInstrument_106.insert(UnderlyingStrikePrice_106.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_106("STRING_743896898");
      noUnderlyings_2_1_1.set(UnderlyingSymbol_106);
      UnderlyingInstrument_106.insert(UnderlyingSymbol_106.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_106("STRING_1717776786");
      noUnderlyings_2_1_1.set(UnderlyingSymbolSfx_106);
      UnderlyingInstrument_106.insert(UnderlyingSymbolSfx_106.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_106("STRING_817502076");
      noUnderlyings_2_1_1.set(UnderlyingTimeUnit_106);
      UnderlyingInstrument_106.insert(UnderlyingTimeUnit_106.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_106("STRING_1972487124");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasure_106);
      UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasure_106.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_106;
      UnderlyingUnitOfMeasureQty_106.setString("3722972");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasureQty_106);
      UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasureQty_106.getString());
      all_values.push_back(UnderlyingInstrument_106);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_219;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_219("STRING_1631339119");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltID_219);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltID_219.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_219("STRING_1128638725");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltIDSource_219);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltIDSource_219.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_209;
        FIX::UnderlyingStipType UnderlyingStipType_209("STRING_1107398479");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipType_209);
        UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipType_209.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_209("STRING_982169997");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipValue_209);
        UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipValue_209.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_209);

        noUnderlyings_2_1_1.addGroup(noUnderlyingStips_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_210;
        FIX::UnderlyingStipType UnderlyingStipType_210("STRING_942588410");
        noUnderlyingStips_2_1_2_1.set(UnderlyingStipType_210);
        UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipType_210.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_210("STRING_387087854");
        noUnderlyingStips_2_1_2_1.set(UnderlyingStipValue_210);
        UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipValue_210.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_210);

        noUnderlyings_2_1_1.addGroup(noUnderlyingStips_2_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_211;
        FIX::UnderlyingStipType UnderlyingStipType_211("STRING_1381251052");
        noUnderlyingStips_2_1_2_2.set(UnderlyingStipType_211);
        UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipType_211.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_211("STRING_112379564");
        noUnderlyingStips_2_1_2_2.set(UnderlyingStipValue_211);
        UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipValue_211.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_211);

        noUnderlyings_2_1_1.addGroup(noUnderlyingStips_2_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_212;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_212("STRING_12999624");
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyID_212);
        UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyID_212.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_212('1');
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyIDSource_212);
        UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyIDSource_212.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_212(1600273994);
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyRole_212);
        UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyRole_212.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_212);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_421("STRING_1154365192");
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubID_421);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubID_421.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_421(21305751);
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_421);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubIDType_421.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);

          noUndlyInstrumentParties_2_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_1_0_3_0);
        }
        noUnderlyings_2_1_1.addGroup(noUndlyInstrumentParties_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_213;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_213("STRING_894967306");
        noUndlyInstrumentParties_2_1_2_1.set(UnderlyingInstrumentPartyID_213);
        UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyID_213.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_213('1');
        noUndlyInstrumentParties_2_1_2_1.set(UnderlyingInstrumentPartyIDSource_213);
        UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyIDSource_213.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_213(415537073);
        noUndlyInstrumentParties_2_1_2_1.set(UnderlyingInstrumentPartyRole_213);
        UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyRole_213.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_213);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_422("STRING_1657068733");
          noUndlyInstrumentPartySubIDs_2_1_1_3_0.set(UnderlyingInstrumentPartySubID_422);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubID_422.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_422(1949053290);
          noUndlyInstrumentPartySubIDs_2_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_422);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubIDType_422.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);

          noUndlyInstrumentParties_2_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_423("STRING_629495526");
          noUndlyInstrumentPartySubIDs_2_1_1_3_1.set(UnderlyingInstrumentPartySubID_423);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubID_423.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_423(1331117262);
          noUndlyInstrumentPartySubIDs_2_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_423);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubIDType_423.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);

          noUndlyInstrumentParties_2_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_1_3_1);
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
