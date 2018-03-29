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
  multiset<string> all_compo_names;
  multiset<string> RFQRequest_0;
  FIX::PrivateQuote PrivateQuote_3(false);
  msg.set(PrivateQuote_3);
  RFQRequest_0.insert(PrivateQuote_3.getString());
  FIX::RFQReqID RFQReqID_2("STRING_1063174992");
  msg.set(RFQReqID_2);
  RFQRequest_0.insert(RFQReqID_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_6('0');
  msg.set(SubscriptionRequestType_6);
  RFQRequest_0.insert(SubscriptionRequestType_6.getString());
  all_values.push_back(RFQRequest_0);

  all_compo_names.insert("RFQRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_118;
    FIX::PartyID PartyID_118("STRING_830125685");
    noPartyIDs_0_0.set(PartyID_118);
    Parties_NoPartyIDs_118.insert(PartyID_118.getString());
    FIX::PartyIDSource PartyIDSource_118('2');
    noPartyIDs_0_0.set(PartyIDSource_118);
    Parties_NoPartyIDs_118.insert(PartyIDSource_118.getString());
    FIX::PartyRole PartyRole_118(75);
    noPartyIDs_0_0.set(PartyRole_118);
    Parties_NoPartyIDs_118.insert(PartyRole_118.getString());
    all_values.push_back(Parties_NoPartyIDs_118);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_259;
      FIX::PartySubID PartySubID_259("STRING_188967025");
      noPartySubIDs_0_1_0.set(PartySubID_259);
      PtysSubGrp_NoPartySubIDs_259.insert(PartySubID_259.getString());
      FIX::PartySubIDType PartySubIDType_259(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_259);
      PtysSubGrp_NoPartySubIDs_259.insert(PartySubIDType_259.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_259);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_260;
      FIX::PartySubID PartySubID_260("STRING_1104405361");
      noPartySubIDs_0_1_1.set(PartySubID_260);
      PtysSubGrp_NoPartySubIDs_260.insert(PartySubID_260.getString());
      FIX::PartySubIDType PartySubIDType_260(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_260);
      PtysSubGrp_NoPartySubIDs_260.insert(PartySubIDType_260.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_260);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_261;
      FIX::PartySubID PartySubID_261("STRING_1243362071");
      noPartySubIDs_0_1_2.set(PartySubID_261);
      PtysSubGrp_NoPartySubIDs_261.insert(PartySubID_261.getString());
      FIX::PartySubIDType PartySubIDType_261(24);
      noPartySubIDs_0_1_2.set(PartySubIDType_261);
      PtysSubGrp_NoPartySubIDs_261.insert(PartySubIDType_261.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_261);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_119;
    FIX::PartyID PartyID_119("STRING_1658253877");
    noPartyIDs_0_1.set(PartyID_119);
    Parties_NoPartyIDs_119.insert(PartyID_119.getString());
    FIX::PartyIDSource PartyIDSource_119('B');
    noPartyIDs_0_1.set(PartyIDSource_119);
    Parties_NoPartyIDs_119.insert(PartyIDSource_119.getString());
    FIX::PartyRole PartyRole_119(16);
    noPartyIDs_0_1.set(PartyRole_119);
    Parties_NoPartyIDs_119.insert(PartyRole_119.getString());
    all_values.push_back(Parties_NoPartyIDs_119);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_262;
      FIX::PartySubID PartySubID_262("STRING_784755367");
      noPartySubIDs_1_1_0.set(PartySubID_262);
      PtysSubGrp_NoPartySubIDs_262.insert(PartySubID_262.getString());
      FIX::PartySubIDType PartySubIDType_262(24);
      noPartySubIDs_1_1_0.set(PartySubIDType_262);
      PtysSubGrp_NoPartySubIDs_262.insert(PartySubIDType_262.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_262);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_263;
      FIX::PartySubID PartySubID_263("STRING_275156531");
      noPartySubIDs_1_1_1.set(PartySubID_263);
      PtysSubGrp_NoPartySubIDs_263.insert(PartySubID_263.getString());
      FIX::PartySubIDType PartySubIDType_263(22);
      noPartySubIDs_1_1_1.set(PartySubIDType_263);
      PtysSubGrp_NoPartySubIDs_263.insert(PartySubIDType_263.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_263);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_264;
      FIX::PartySubID PartySubID_264("STRING_1181968369");
      noPartySubIDs_1_1_2.set(PartySubID_264);
      PtysSubGrp_NoPartySubIDs_264.insert(PartySubID_264.getString());
      FIX::PartySubIDType PartySubIDType_264(33);
      noPartySubIDs_1_1_2.set(PartySubIDType_264);
      PtysSubGrp_NoPartySubIDs_264.insert(PartySubIDType_264.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_264);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_120;
    FIX::PartyID PartyID_120("STRING_1315844622");
    noPartyIDs_0_2.set(PartyID_120);
    Parties_NoPartyIDs_120.insert(PartyID_120.getString());
    FIX::PartyIDSource PartyIDSource_120('7');
    noPartyIDs_0_2.set(PartyIDSource_120);
    Parties_NoPartyIDs_120.insert(PartyIDSource_120.getString());
    FIX::PartyRole PartyRole_120(53);
    noPartyIDs_0_2.set(PartyRole_120);
    Parties_NoPartyIDs_120.insert(PartyRole_120.getString());
    all_values.push_back(Parties_NoPartyIDs_120);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_265;
      FIX::PartySubID PartySubID_265("STRING_1698441145");
      noPartySubIDs_2_1_0.set(PartySubID_265);
      PtysSubGrp_NoPartySubIDs_265.insert(PartySubID_265.getString());
      FIX::PartySubIDType PartySubIDType_265(7);
      noPartySubIDs_2_1_0.set(PartySubIDType_265);
      PtysSubGrp_NoPartySubIDs_265.insert(PartySubIDType_265.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_265);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // RFQReqGrp
  // Group RFQReqGrp.NoRelatedSym
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_0;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_0;
    FIX::PrevClosePx PrevClosePx_12;
    PrevClosePx_12.setString("6473533");
    noRelatedSym_0_0.set(PrevClosePx_12);
    RFQReqGrp_NoRelatedSym_0.insert(PrevClosePx_12.getString());
    FIX::QuoteRequestType QuoteRequestType_3(1);
    noRelatedSym_0_0.set(QuoteRequestType_3);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteRequestType_3.getString());
    FIX::QuoteType QuoteType_11(0);
    noRelatedSym_0_0.set(QuoteType_11);
    RFQReqGrp_NoRelatedSym_0.insert(QuoteType_11.getString());
    FIX::TradingSessionID TradingSessionID_88("STRING_5");
    noRelatedSym_0_0.set(TradingSessionID_88);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionID_88.getString());
    FIX::TradingSessionSubID TradingSessionSubID_88("STRING_1");
    noRelatedSym_0_0.set(TradingSessionSubID_88);
    RFQReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_88.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_0);
    all_compo_names.insert("RFQReqGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_118;
      FIX::EncodedLegIssuer EncodedLegIssuer_118("DATA_630856803");
      noLegs_0_1_0.set(EncodedLegIssuer_118);
      InstrumentLeg_118.insert(EncodedLegIssuer_118.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_118(250525567);
      noLegs_0_1_0.set(EncodedLegIssuerLen_118);
      InstrumentLeg_118.insert(EncodedLegIssuerLen_118.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_118("DATA_1331141864");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_118);
      InstrumentLeg_118.insert(EncodedLegSecurityDesc_118.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_118(1546158058);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_118);
      InstrumentLeg_118.insert(EncodedLegSecurityDescLen_118.getString());
      FIX::LegCFICode LegCFICode_118("STRING_1354930928");
      noLegs_0_1_0.set(LegCFICode_118);
      InstrumentLeg_118.insert(LegCFICode_118.getString());
      FIX::LegContractMultiplier LegContractMultiplier_118;
      LegContractMultiplier_118.setString("10658432");
      noLegs_0_1_0.set(LegContractMultiplier_118);
      InstrumentLeg_118.insert(LegContractMultiplier_118.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_118(642036481);
      noLegs_0_1_0.set(LegContractMultiplierUnit_118);
      InstrumentLeg_118.insert(LegContractMultiplierUnit_118.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_118("MONTHYEAR_393824067");
      noLegs_0_1_0.set(LegContractSettlMonth_118);
      InstrumentLeg_118.insert(LegContractSettlMonth_118.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_118("COUNTRY_576613440");
      noLegs_0_1_0.set(LegCountryOfIssue_118);
      InstrumentLeg_118.insert(LegCountryOfIssue_118.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_118("LOCALMKTDATE_2115120906");
      noLegs_0_1_0.set(LegCouponPaymentDate_118);
      InstrumentLeg_118.insert(LegCouponPaymentDate_118.getString());
      FIX::LegCouponRate LegCouponRate_118;
      LegCouponRate_118.setString("3.140000");
      noLegs_0_1_0.set(LegCouponRate_118);
      InstrumentLeg_118.insert(LegCouponRate_118.getString());
      FIX::LegCreditRating LegCreditRating_118("STRING_1076741787");
      noLegs_0_1_0.set(LegCreditRating_118);
      InstrumentLeg_118.insert(LegCreditRating_118.getString());
      FIX::LegCurrency LegCurrency_118("USD");
      noLegs_0_1_0.set(LegCurrency_118);
      InstrumentLeg_118.insert(LegCurrency_118.getString());
      FIX::LegDatedDate LegDatedDate_118("LOCALMKTDATE_1351898318");
      noLegs_0_1_0.set(LegDatedDate_118);
      InstrumentLeg_118.insert(LegDatedDate_118.getString());
      FIX::LegExerciseStyle LegExerciseStyle_118(4795530);
      noLegs_0_1_0.set(LegExerciseStyle_118);
      InstrumentLeg_118.insert(LegExerciseStyle_118.getString());
      FIX::LegFactor LegFactor_118;
      LegFactor_118.setString("9862791");
      noLegs_0_1_0.set(LegFactor_118);
      InstrumentLeg_118.insert(LegFactor_118.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_118(1304234172);
      noLegs_0_1_0.set(LegFlowScheduleType_118);
      InstrumentLeg_118.insert(LegFlowScheduleType_118.getString());
      FIX::LegInstrRegistry LegInstrRegistry_118("STRING_1320640153");
      noLegs_0_1_0.set(LegInstrRegistry_118);
      InstrumentLeg_118.insert(LegInstrRegistry_118.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_118("LOCALMKTDATE_1555589448");
      noLegs_0_1_0.set(LegInterestAccrualDate_118);
      InstrumentLeg_118.insert(LegInterestAccrualDate_118.getString());
      FIX::LegIssueDate LegIssueDate_118("LOCALMKTDATE_1655668887");
      noLegs_0_1_0.set(LegIssueDate_118);
      InstrumentLeg_118.insert(LegIssueDate_118.getString());
      FIX::LegIssuer LegIssuer_118("STRING_1626735253");
      noLegs_0_1_0.set(LegIssuer_118);
      InstrumentLeg_118.insert(LegIssuer_118.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_118("STRING_1106546946");
      noLegs_0_1_0.set(LegLocaleOfIssue_118);
      InstrumentLeg_118.insert(LegLocaleOfIssue_118.getString());
      FIX::LegMaturityDate LegMaturityDate_118("LOCALMKTDATE_1124594347");
      noLegs_0_1_0.set(LegMaturityDate_118);
      InstrumentLeg_118.insert(LegMaturityDate_118.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_118("MONTHYEAR_1956940456");
      noLegs_0_1_0.set(LegMaturityMonthYear_118);
      InstrumentLeg_118.insert(LegMaturityMonthYear_118.getString());
      FIX::LegMaturityTime LegMaturityTime_118("TZTIMEONLY_1753900282");
      noLegs_0_1_0.set(LegMaturityTime_118);
      InstrumentLeg_118.insert(LegMaturityTime_118.getString());
      FIX::LegOptAttribute LegOptAttribute_118('1');
      noLegs_0_1_0.set(LegOptAttribute_118);
      InstrumentLeg_118.insert(LegOptAttribute_118.getString());
      FIX::LegOptionRatio LegOptionRatio_118;
      LegOptionRatio_118.setString("20411203");
      noLegs_0_1_0.set(LegOptionRatio_118);
      InstrumentLeg_118.insert(LegOptionRatio_118.getString());
      FIX::LegPool LegPool_118("STRING_753159408");
      noLegs_0_1_0.set(LegPool_118);
      InstrumentLeg_118.insert(LegPool_118.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_118("STRING_871437289");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_118);
      InstrumentLeg_118.insert(LegPriceUnitOfMeasure_118.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_118;
      LegPriceUnitOfMeasureQty_118.setString("10358115");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_118);
      InstrumentLeg_118.insert(LegPriceUnitOfMeasureQty_118.getString());
      FIX::LegProduct LegProduct_118(1384016212);
      noLegs_0_1_0.set(LegProduct_118);
      InstrumentLeg_118.insert(LegProduct_118.getString());
      FIX::LegPutOrCall LegPutOrCall_118(1121962857);
      noLegs_0_1_0.set(LegPutOrCall_118);
      InstrumentLeg_118.insert(LegPutOrCall_118.getString());
      FIX::LegRatioQty LegRatioQty_118;
      LegRatioQty_118.setString("2194698");
      noLegs_0_1_0.set(LegRatioQty_118);
      InstrumentLeg_118.insert(LegRatioQty_118.getString());
      FIX::LegRedemptionDate LegRedemptionDate_118("LOCALMKTDATE_782690622");
      noLegs_0_1_0.set(LegRedemptionDate_118);
      InstrumentLeg_118.insert(LegRedemptionDate_118.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_118("STRING_329410137");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_118);
      InstrumentLeg_118.insert(LegRepoCollateralSecurityType_118.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_118;
      LegRepurchaseRate_118.setString("30.140000");
      noLegs_0_1_0.set(LegRepurchaseRate_118);
      InstrumentLeg_118.insert(LegRepurchaseRate_118.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_118(1424727103);
      noLegs_0_1_0.set(LegRepurchaseTerm_118);
      InstrumentLeg_118.insert(LegRepurchaseTerm_118.getString());
      FIX::LegSecurityDesc LegSecurityDesc_118("STRING_723234204");
      noLegs_0_1_0.set(LegSecurityDesc_118);
      InstrumentLeg_118.insert(LegSecurityDesc_118.getString());
      FIX::LegSecurityExchange LegSecurityExchange_118("EXCHANGE_1861926455");
      noLegs_0_1_0.set(LegSecurityExchange_118);
      InstrumentLeg_118.insert(LegSecurityExchange_118.getString());
      FIX::LegSecurityID LegSecurityID_118("STRING_1392364362");
      noLegs_0_1_0.set(LegSecurityID_118);
      InstrumentLeg_118.insert(LegSecurityID_118.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_118("STRING_1265074519");
      noLegs_0_1_0.set(LegSecurityIDSource_118);
      InstrumentLeg_118.insert(LegSecurityIDSource_118.getString());
      FIX::LegSecuritySubType LegSecuritySubType_118("STRING_791184594");
      noLegs_0_1_0.set(LegSecuritySubType_118);
      InstrumentLeg_118.insert(LegSecuritySubType_118.getString());
      FIX::LegSecurityType LegSecurityType_118("STRING_2144756987");
      noLegs_0_1_0.set(LegSecurityType_118);
      InstrumentLeg_118.insert(LegSecurityType_118.getString());
      FIX::LegSide LegSide_118('1');
      noLegs_0_1_0.set(LegSide_118);
      InstrumentLeg_118.insert(LegSide_118.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_118("STRING_2143082912");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_118);
      InstrumentLeg_118.insert(LegStateOrProvinceOfIssue_118.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_118("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_118);
      InstrumentLeg_118.insert(LegStrikeCurrency_118.getString());
      FIX::LegStrikePrice LegStrikePrice_118;
      LegStrikePrice_118.setString("12998334");
      noLegs_0_1_0.set(LegStrikePrice_118);
      InstrumentLeg_118.insert(LegStrikePrice_118.getString());
      FIX::LegSymbol LegSymbol_118("STRING_1322709023");
      noLegs_0_1_0.set(LegSymbol_118);
      InstrumentLeg_118.insert(LegSymbol_118.getString());
      FIX::LegSymbolSfx LegSymbolSfx_118("STRING_1463770280");
      noLegs_0_1_0.set(LegSymbolSfx_118);
      InstrumentLeg_118.insert(LegSymbolSfx_118.getString());
      FIX::LegTimeUnit LegTimeUnit_118("STRING_808018675");
      noLegs_0_1_0.set(LegTimeUnit_118);
      InstrumentLeg_118.insert(LegTimeUnit_118.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_118("STRING_801960628");
      noLegs_0_1_0.set(LegUnitOfMeasure_118);
      InstrumentLeg_118.insert(LegUnitOfMeasure_118.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_118;
      LegUnitOfMeasureQty_118.setString("4228335");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_118);
      InstrumentLeg_118.insert(LegUnitOfMeasureQty_118.getString());
      all_values.push_back(InstrumentLeg_118);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_238;
        FIX::LegSecurityAltID LegSecurityAltID_238("STRING_611417436");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_238);
        LegSecAltIDGrp_NoLegSecurityAltID_238.insert(LegSecurityAltID_238.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_238("STRING_29250213");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_238);
        LegSecAltIDGrp_NoLegSecurityAltID_238.insert(LegSecurityAltIDSource_238.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_238);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_239;
        FIX::LegSecurityAltID LegSecurityAltID_239("STRING_1441824174");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_239);
        LegSecAltIDGrp_NoLegSecurityAltID_239.insert(LegSecurityAltID_239.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_239("STRING_505054185");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_239);
        LegSecAltIDGrp_NoLegSecurityAltID_239.insert(LegSecurityAltIDSource_239.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_239);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_240;
        FIX::LegSecurityAltID LegSecurityAltID_240("STRING_782409621");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_240);
        LegSecAltIDGrp_NoLegSecurityAltID_240.insert(LegSecurityAltID_240.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_240("STRING_165777815");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_240);
        LegSecAltIDGrp_NoLegSecurityAltID_240.insert(LegSecurityAltIDSource_240.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_240);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_75;
    FIX::AttachmentPoint AttachmentPoint_75;
    AttachmentPoint_75.setString("57.720000");
    noRelatedSym_0_0.set(AttachmentPoint_75);
    Instrument_75.insert(AttachmentPoint_75.getString());
    FIX::CFICode CFICode_75("STRING_18942185");
    noRelatedSym_0_0.set(CFICode_75);
    Instrument_75.insert(CFICode_75.getString());
    FIX::CPProgram CPProgram_75(99);
    noRelatedSym_0_0.set(CPProgram_75);
    Instrument_75.insert(CPProgram_75.getString());
    FIX::CPRegType CPRegType_75("STRING_1760335575");
    noRelatedSym_0_0.set(CPRegType_75);
    Instrument_75.insert(CPRegType_75.getString());
    FIX::CapPrice CapPrice_75;
    CapPrice_75.setString("8016328");
    noRelatedSym_0_0.set(CapPrice_75);
    Instrument_75.insert(CapPrice_75.getString());
    FIX::ContractMultiplier ContractMultiplier_75;
    ContractMultiplier_75.setString("16171508");
    noRelatedSym_0_0.set(ContractMultiplier_75);
    Instrument_75.insert(ContractMultiplier_75.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_75(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_75);
    Instrument_75.insert(ContractMultiplierUnit_75.getString());
    FIX::ContractSettlMonth ContractSettlMonth_75("MONTHYEAR_78876263");
    noRelatedSym_0_0.set(ContractSettlMonth_75);
    Instrument_75.insert(ContractSettlMonth_75.getString());
    FIX::CountryOfIssue CountryOfIssue_75("COUNTRY_192901366");
    noRelatedSym_0_0.set(CountryOfIssue_75);
    Instrument_75.insert(CountryOfIssue_75.getString());
    FIX::CouponPaymentDate CouponPaymentDate_75("LOCALMKTDATE_612607748");
    noRelatedSym_0_0.set(CouponPaymentDate_75);
    Instrument_75.insert(CouponPaymentDate_75.getString());
    FIX::CouponRate CouponRate_75;
    CouponRate_75.setString("6.250000");
    noRelatedSym_0_0.set(CouponRate_75);
    Instrument_75.insert(CouponRate_75.getString());
    FIX::CreditRating CreditRating_75("STRING_1457975885");
    noRelatedSym_0_0.set(CreditRating_75);
    Instrument_75.insert(CreditRating_75.getString());
    FIX::DatedDate DatedDate_75("LOCALMKTDATE_1403792342");
    noRelatedSym_0_0.set(DatedDate_75);
    Instrument_75.insert(DatedDate_75.getString());
    FIX::DetachmentPoint DetachmentPoint_75;
    DetachmentPoint_75.setString("39.640000");
    noRelatedSym_0_0.set(DetachmentPoint_75);
    Instrument_75.insert(DetachmentPoint_75.getString());
    FIX::EncodedIssuer EncodedIssuer_75("DATA_379877552");
    noRelatedSym_0_0.set(EncodedIssuer_75);
    Instrument_75.insert(EncodedIssuer_75.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_75(1399391607);
    noRelatedSym_0_0.set(EncodedIssuerLen_75);
    Instrument_75.insert(EncodedIssuerLen_75.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_75("DATA_1470582834");
    noRelatedSym_0_0.set(EncodedSecurityDesc_75);
    Instrument_75.insert(EncodedSecurityDesc_75.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_75(288058384);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_75);
    Instrument_75.insert(EncodedSecurityDescLen_75.getString());
    FIX::ExerciseStyle ExerciseStyle_75(1);
    noRelatedSym_0_0.set(ExerciseStyle_75);
    Instrument_75.insert(ExerciseStyle_75.getString());
    FIX::Factor Factor_75;
    Factor_75.setString("6458082");
    noRelatedSym_0_0.set(Factor_75);
    Instrument_75.insert(Factor_75.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_75(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_75);
    Instrument_75.insert(FlexProductEligibilityIndicator_75.getString());
    FIX::FlexibleIndicator FlexibleIndicator_75(false);
    noRelatedSym_0_0.set(FlexibleIndicator_75);
    Instrument_75.insert(FlexibleIndicator_75.getString());
    FIX::FloorPrice FloorPrice_75;
    FloorPrice_75.setString("14477688");
    noRelatedSym_0_0.set(FloorPrice_75);
    Instrument_75.insert(FloorPrice_75.getString());
    FIX::FlowScheduleType FlowScheduleType_75(0);
    noRelatedSym_0_0.set(FlowScheduleType_75);
    Instrument_75.insert(FlowScheduleType_75.getString());
    FIX::InstrRegistry InstrRegistry_75("STRING_1144889445");
    noRelatedSym_0_0.set(InstrRegistry_75);
    Instrument_75.insert(InstrRegistry_75.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_75('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_75);
    Instrument_75.insert(InstrmtAssignmentMethod_75.getString());
    FIX::InterestAccrualDate InterestAccrualDate_75("LOCALMKTDATE_56428808");
    noRelatedSym_0_0.set(InterestAccrualDate_75);
    Instrument_75.insert(InterestAccrualDate_75.getString());
    FIX::IssueDate IssueDate_75("LOCALMKTDATE_439229971");
    noRelatedSym_0_0.set(IssueDate_75);
    Instrument_75.insert(IssueDate_75.getString());
    FIX::Issuer Issuer_75("STRING_416756811");
    noRelatedSym_0_0.set(Issuer_75);
    Instrument_75.insert(Issuer_75.getString());
    FIX::ListMethod ListMethod_75(0);
    noRelatedSym_0_0.set(ListMethod_75);
    Instrument_75.insert(ListMethod_75.getString());
    FIX::LocaleOfIssue LocaleOfIssue_75("STRING_605007787");
    noRelatedSym_0_0.set(LocaleOfIssue_75);
    Instrument_75.insert(LocaleOfIssue_75.getString());
    FIX::MaturityDate MaturityDate_75("LOCALMKTDATE_1957622583");
    noRelatedSym_0_0.set(MaturityDate_75);
    Instrument_75.insert(MaturityDate_75.getString());
    FIX::MaturityMonthYear MaturityMonthYear_75("MONTHYEAR_857780615");
    noRelatedSym_0_0.set(MaturityMonthYear_75);
    Instrument_75.insert(MaturityMonthYear_75.getString());
    FIX::MaturityTime MaturityTime_75("TZTIMEONLY_1892748459");
    noRelatedSym_0_0.set(MaturityTime_75);
    Instrument_75.insert(MaturityTime_75.getString());
    FIX::MinPriceIncrement MinPriceIncrement_75;
    MinPriceIncrement_75.setString("15704745");
    noRelatedSym_0_0.set(MinPriceIncrement_75);
    Instrument_75.insert(MinPriceIncrement_75.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_75;
    MinPriceIncrementAmount_75.setString("16594134");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_75);
    Instrument_75.insert(MinPriceIncrementAmount_75.getString());
    FIX::NTPositionLimit NTPositionLimit_75(1362415621);
    noRelatedSym_0_0.set(NTPositionLimit_75);
    Instrument_75.insert(NTPositionLimit_75.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_75;
    NotionalPercentageOutstanding_75.setString("58.040000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_75);
    Instrument_75.insert(NotionalPercentageOutstanding_75.getString());
    FIX::OptAttribute OptAttribute_75('1');
    noRelatedSym_0_0.set(OptAttribute_75);
    Instrument_75.insert(OptAttribute_75.getString());
    FIX::OptPayoutAmount OptPayoutAmount_75;
    OptPayoutAmount_75.setString("15553169");
    noRelatedSym_0_0.set(OptPayoutAmount_75);
    Instrument_75.insert(OptPayoutAmount_75.getString());
    FIX::OptPayoutType OptPayoutType_75(2);
    noRelatedSym_0_0.set(OptPayoutType_75);
    Instrument_75.insert(OptPayoutType_75.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_75;
    OriginalNotionalPercentageOutstanding_75.setString("66.630000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_75);
    Instrument_75.insert(OriginalNotionalPercentageOutstanding_75.getString());
    FIX::Pool Pool_75("STRING_865809225");
    noRelatedSym_0_0.set(Pool_75);
    Instrument_75.insert(Pool_75.getString());
    FIX::PositionLimit PositionLimit_75(190072247);
    noRelatedSym_0_0.set(PositionLimit_75);
    Instrument_75.insert(PositionLimit_75.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_75("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_75);
    Instrument_75.insert(PriceQuoteMethod_75.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_75("STRING_1245686778");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_75);
    Instrument_75.insert(PriceUnitOfMeasure_75.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_75;
    PriceUnitOfMeasureQty_75.setString("15894638");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_75);
    Instrument_75.insert(PriceUnitOfMeasureQty_75.getString());
    FIX::Product Product_77(7);
    noRelatedSym_0_0.set(Product_77);
    Instrument_75.insert(Product_77.getString());
    FIX::ProductComplex ProductComplex_75("STRING_1533745162");
    noRelatedSym_0_0.set(ProductComplex_75);
    Instrument_75.insert(ProductComplex_75.getString());
    FIX::PutOrCall PutOrCall_75(1);
    noRelatedSym_0_0.set(PutOrCall_75);
    Instrument_75.insert(PutOrCall_75.getString());
    FIX::RedemptionDate RedemptionDate_75("LOCALMKTDATE_351984375");
    noRelatedSym_0_0.set(RedemptionDate_75);
    Instrument_75.insert(RedemptionDate_75.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_75("STRING_1138090179");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_75);
    Instrument_75.insert(RepoCollateralSecurityType_75.getString());
    FIX::RepurchaseRate RepurchaseRate_75;
    RepurchaseRate_75.setString("16.720000");
    noRelatedSym_0_0.set(RepurchaseRate_75);
    Instrument_75.insert(RepurchaseRate_75.getString());
    FIX::RepurchaseTerm RepurchaseTerm_75(1799753213);
    noRelatedSym_0_0.set(RepurchaseTerm_75);
    Instrument_75.insert(RepurchaseTerm_75.getString());
    FIX::RestructuringType RestructuringType_75("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_75);
    Instrument_75.insert(RestructuringType_75.getString());
    FIX::SecurityDesc SecurityDesc_75("STRING_350887470");
    noRelatedSym_0_0.set(SecurityDesc_75);
    Instrument_75.insert(SecurityDesc_75.getString());
    FIX::SecurityExchange SecurityExchange_75("EXCHANGE_1711455840");
    noRelatedSym_0_0.set(SecurityExchange_75);
    Instrument_75.insert(SecurityExchange_75.getString());
    FIX::SecurityGroup SecurityGroup_75("STRING_1221697583");
    noRelatedSym_0_0.set(SecurityGroup_75);
    Instrument_75.insert(SecurityGroup_75.getString());
    FIX::SecurityID SecurityID_75("STRING_790117441");
    noRelatedSym_0_0.set(SecurityID_75);
    Instrument_75.insert(SecurityID_75.getString());
    FIX::SecurityIDSource SecurityIDSource_75("STRING_G");
    noRelatedSym_0_0.set(SecurityIDSource_75);
    Instrument_75.insert(SecurityIDSource_75.getString());
    FIX::SecurityStatus SecurityStatus_75("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_75);
    Instrument_75.insert(SecurityStatus_75.getString());
    FIX::SecuritySubType SecuritySubType_76("STRING_1395125228");
    noRelatedSym_0_0.set(SecuritySubType_76);
    Instrument_75.insert(SecuritySubType_76.getString());
    FIX::SecurityType SecurityType_77("STRING_TPRN");
    noRelatedSym_0_0.set(SecurityType_77);
    Instrument_75.insert(SecurityType_77.getString());
    FIX::Seniority Seniority_75("STRING_SD");
    noRelatedSym_0_0.set(Seniority_75);
    Instrument_75.insert(Seniority_75.getString());
    FIX::SettlMethod SettlMethod_75('C');
    noRelatedSym_0_0.set(SettlMethod_75);
    Instrument_75.insert(SettlMethod_75.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_75("STRING_1361342449");
    noRelatedSym_0_0.set(SettleOnOpenFlag_75);
    Instrument_75.insert(SettleOnOpenFlag_75.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_75("STRING_282762756");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_75);
    Instrument_75.insert(StateOrProvinceOfIssue_75.getString());
    FIX::StrikeCurrency StrikeCurrency_75("CHF");
    noRelatedSym_0_0.set(StrikeCurrency_75);
    Instrument_75.insert(StrikeCurrency_75.getString());
    FIX::StrikeMultiplier StrikeMultiplier_75;
    StrikeMultiplier_75.setString("20210524");
    noRelatedSym_0_0.set(StrikeMultiplier_75);
    Instrument_75.insert(StrikeMultiplier_75.getString());
    FIX::StrikePrice StrikePrice_75;
    StrikePrice_75.setString("19106390");
    noRelatedSym_0_0.set(StrikePrice_75);
    Instrument_75.insert(StrikePrice_75.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_75(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_75);
    Instrument_75.insert(StrikePriceBoundaryMethod_75.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_75;
    StrikePriceBoundaryPrecision_75.setString("54.570000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_75);
    Instrument_75.insert(StrikePriceBoundaryPrecision_75.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_75(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_75);
    Instrument_75.insert(StrikePriceDeterminationMethod_75.getString());
    FIX::StrikeValue StrikeValue_75;
    StrikeValue_75.setString("6588504");
    noRelatedSym_0_0.set(StrikeValue_75);
    Instrument_75.insert(StrikeValue_75.getString());
    FIX::Symbol Symbol_75("STRING_1318692436");
    noRelatedSym_0_0.set(Symbol_75);
    Instrument_75.insert(Symbol_75.getString());
    FIX::SymbolSfx SymbolSfx_75("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_75);
    Instrument_75.insert(SymbolSfx_75.getString());
    FIX::TimeUnit TimeUnit_75("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_75);
    Instrument_75.insert(TimeUnit_75.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_75(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_75);
    Instrument_75.insert(UnderlyingPriceDeterminationMethod_75.getString());
    FIX::UnitOfMeasure UnitOfMeasure_75("STRING_tn");
    noRelatedSym_0_0.set(UnitOfMeasure_75);
    Instrument_75.insert(UnitOfMeasure_75.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_75;
    UnitOfMeasureQty_75.setString("945522");
    noRelatedSym_0_0.set(UnitOfMeasureQty_75);
    Instrument_75.insert(UnitOfMeasureQty_75.getString());
    FIX::ValuationMethod ValuationMethod_75("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_75);
    Instrument_75.insert(ValuationMethod_75.getString());
    all_values.push_back(Instrument_75);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_158;
      FIX::ComplexEventCondition ComplexEventCondition_158(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventCondition_158.getString());
      FIX::ComplexEventPrice ComplexEventPrice_158;
      ComplexEventPrice_158.setString("10291225");
      noComplexEvents_0_1_0.set(ComplexEventPrice_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPrice_158.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_158(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryMethod_158.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_158;
      ComplexEventPriceBoundaryPrecision_158.setString("13.550000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryPrecision_158.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_158(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceTimeType_158.getString());
      FIX::ComplexEventType ComplexEventType_158(4);
      noComplexEvents_0_1_0.set(ComplexEventType_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventType_158.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_158;
      ComplexOptPayoutAmount_158.setString("4415551");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexOptPayoutAmount_158.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_158);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_322;
        FIX::ComplexEventEndDate ComplexEventEndDate_322(FIX::UTCTIMESTAMP(1, 38, 40, 25, 4, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventEndDate_322.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_322(FIX::UTCTIMESTAMP(5, 30, 56, 23, 8, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventStartDate_322.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_322);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_655;
          FIX::ComplexEventEndTime ComplexEventEndTime_655(FIX::UTCTIMEONLY(16, 19, 50));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_655);
          ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventEndTime_655.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_655(FIX::UTCTIMEONLY(7, 28, 30));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_655);
          ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventStartTime_655.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_655);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_656;
          FIX::ComplexEventEndTime ComplexEventEndTime_656(FIX::UTCTIMEONLY(19, 48, 3));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_656);
          ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventEndTime_656.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_656(FIX::UTCTIMEONLY(14, 32, 58));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_656);
          ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventStartTime_656.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_656);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_657;
          FIX::ComplexEventEndTime ComplexEventEndTime_657(FIX::UTCTIMEONLY(13, 36, 13));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_657);
          ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventEndTime_657.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_657(FIX::UTCTIMEONLY(19, 21, 44));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_657);
          ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventStartTime_657.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_657);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_323;
        FIX::ComplexEventEndDate ComplexEventEndDate_323(FIX::UTCTIMESTAMP(19, 32, 43, 14, 4, 2009));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_323);
        ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventEndDate_323.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_323(FIX::UTCTIMESTAMP(23, 10, 19, 7, 7, 2017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_323);
        ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventStartDate_323.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_323);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_658;
          FIX::ComplexEventEndTime ComplexEventEndTime_658(FIX::UTCTIMEONLY(23, 2, 6));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_658);
          ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventEndTime_658.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_658(FIX::UTCTIMEONLY(20, 30, 12));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_658);
          ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventStartTime_658.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_658);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_659;
          FIX::ComplexEventEndTime ComplexEventEndTime_659(FIX::UTCTIMEONLY(19, 40, 46));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_659);
          ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventEndTime_659.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_659(FIX::UTCTIMEONLY(15, 59, 9));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_659);
          ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventStartTime_659.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_659);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_324;
        FIX::ComplexEventEndDate ComplexEventEndDate_324(FIX::UTCTIMESTAMP(6, 42, 51, 12, 2, 2011));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_324);
        ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventEndDate_324.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_324(FIX::UTCTIMESTAMP(17, 45, 33, 8, 8, 2012));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_324);
        ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventStartDate_324.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_324);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_660;
          FIX::ComplexEventEndTime ComplexEventEndTime_660(FIX::UTCTIMEONLY(11, 7, 36));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_660);
          ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventEndTime_660.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_660(FIX::UTCTIMEONLY(3, 58, 1));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_660);
          ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventStartTime_660.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_660);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_661;
          FIX::ComplexEventEndTime ComplexEventEndTime_661(FIX::UTCTIMEONLY(9, 33, 34));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_661);
          ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventEndTime_661.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_661(FIX::UTCTIMEONLY(1, 33, 47));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_661);
          ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventStartTime_661.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_661);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_153;
      FIX::EventDate EventDate_153("LOCALMKTDATE_1558502775");
      noEvents_0_1_0.set(EventDate_153);
      EvntGrp_NoEvents_153.insert(EventDate_153.getString());
      FIX::EventPx EventPx_153;
      EventPx_153.setString("21395841");
      noEvents_0_1_0.set(EventPx_153);
      EvntGrp_NoEvents_153.insert(EventPx_153.getString());
      FIX::EventText EventText_153("STRING_497678564");
      noEvents_0_1_0.set(EventText_153);
      EvntGrp_NoEvents_153.insert(EventText_153.getString());
      FIX::EventTime EventTime_153(FIX::UTCTIMESTAMP(11, 19, 5, 0, 6, 2000));
      noEvents_0_1_0.set(EventTime_153);
      EvntGrp_NoEvents_153.insert(EventTime_153.getString());
      FIX::EventType EventType_153(13);
      noEvents_0_1_0.set(EventType_153);
      EvntGrp_NoEvents_153.insert(EventType_153.getString());
      all_values.push_back(EvntGrp_NoEvents_153);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_154;
      FIX::EventDate EventDate_154("LOCALMKTDATE_287005876");
      noEvents_0_1_1.set(EventDate_154);
      EvntGrp_NoEvents_154.insert(EventDate_154.getString());
      FIX::EventPx EventPx_154;
      EventPx_154.setString("5393971");
      noEvents_0_1_1.set(EventPx_154);
      EvntGrp_NoEvents_154.insert(EventPx_154.getString());
      FIX::EventText EventText_154("STRING_714360045");
      noEvents_0_1_1.set(EventText_154);
      EvntGrp_NoEvents_154.insert(EventText_154.getString());
      FIX::EventTime EventTime_154(FIX::UTCTIMESTAMP(14, 53, 14, 15, 9, 2010));
      noEvents_0_1_1.set(EventTime_154);
      EvntGrp_NoEvents_154.insert(EventTime_154.getString());
      FIX::EventType EventType_154(6);
      noEvents_0_1_1.set(EventType_154);
      EvntGrp_NoEvents_154.insert(EventType_154.getString());
      all_values.push_back(EvntGrp_NoEvents_154);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_155;
      FIX::InstrumentPartyID InstrumentPartyID_155("STRING_280057345");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_155);
      InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyID_155.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_155('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_155);
      InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyIDSource_155.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_155(1305443611);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_155);
      InstrumentParties_NoInstrumentParties_155.insert(InstrumentPartyRole_155.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_155);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301;
        FIX::InstrumentPartySubID InstrumentPartySubID_301("STRING_1433479811");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_301);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubID_301.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_301(2120835965);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_301);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubIDType_301.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302;
        FIX::InstrumentPartySubID InstrumentPartySubID_302("STRING_765048659");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_302);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubID_302.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_302(152158324);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_302);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubIDType_302.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303;
        FIX::InstrumentPartySubID InstrumentPartySubID_303("STRING_1531855092");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_303);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubID_303.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_303(757149140);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_303);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubIDType_303.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_138;
      FIX::SecurityAltID SecurityAltID_138("STRING_160147376");
      noSecurityAltID_0_1_0.set(SecurityAltID_138);
      SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltID_138.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_138("STRING_457721015");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_138);
      SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltIDSource_138.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_138);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_139;
      FIX::SecurityAltID SecurityAltID_139("STRING_1400214548");
      noSecurityAltID_0_1_1.set(SecurityAltID_139);
      SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltID_139.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_139("STRING_65402453");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_139);
      SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltIDSource_139.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_139);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_150;
    FIX::SecurityXML SecurityXML_151("XMLDATA_934898107");
    noRelatedSym_0_0.set(SecurityXML_151);
    FIX::SecurityXMLLen SecurityXMLLen_75(1219014605);
    noRelatedSym_0_0.set(SecurityXMLLen_75);
    FIX::SecurityXMLSchema SecurityXMLSchema_75("STRING_1475254523");
    noRelatedSym_0_0.set(SecurityXMLSchema_75);
    SecurityXML_150.insert(SecurityXMLSchema_75.getString());
    all_values.push_back(SecurityXML_150);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_114;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_114("DATA_1506020482");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingIssuer_114.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_114(2014651677);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingIssuerLen_114.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_114("DATA_93832637");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDesc_114.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_114(1250658660);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_114);
      UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDescLen_114.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_114;
      UnderlyingAdjustedQuantity_114.setString("20299457");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_114);
      UnderlyingInstrument_114.insert(UnderlyingAdjustedQuantity_114.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_114;
      UnderlyingAllocationPercent_114.setString("50.500000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_114);
      UnderlyingInstrument_114.insert(UnderlyingAllocationPercent_114.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_114;
      UnderlyingAttachmentPoint_114.setString("36.870000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_114);
      UnderlyingInstrument_114.insert(UnderlyingAttachmentPoint_114.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_114("STRING_887019703");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_114);
      UnderlyingInstrument_114.insert(UnderlyingCFICode_114.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_114("STRING_2102391978");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_114);
      UnderlyingInstrument_114.insert(UnderlyingCPProgram_114.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_114("STRING_1044849671");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_114);
      UnderlyingInstrument_114.insert(UnderlyingCPRegType_114.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_114;
      UnderlyingCapValue_114.setString("18400787");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_114);
      UnderlyingInstrument_114.insert(UnderlyingCapValue_114.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_114;
      UnderlyingCashAmount_114.setString("6857744");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_114);
      UnderlyingInstrument_114.insert(UnderlyingCashAmount_114.getString());
      FIX::UnderlyingCashType UnderlyingCashType_114("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_114);
      UnderlyingInstrument_114.insert(UnderlyingCashType_114.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_114;
      UnderlyingContractMultiplier_114.setString("16589237");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_114);
      UnderlyingInstrument_114.insert(UnderlyingContractMultiplier_114.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_114(1991218059);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_114);
      UnderlyingInstrument_114.insert(UnderlyingContractMultiplierUnit_114.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_114("COUNTRY_2042389188");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_114);
      UnderlyingInstrument_114.insert(UnderlyingCountryOfIssue_114.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_114("LOCALMKTDATE_944919942");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_114);
      UnderlyingInstrument_114.insert(UnderlyingCouponPaymentDate_114.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_114;
      UnderlyingCouponRate_114.setString("3.760000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_114);
      UnderlyingInstrument_114.insert(UnderlyingCouponRate_114.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_114("STRING_659954199");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_114);
      UnderlyingInstrument_114.insert(UnderlyingCreditRating_114.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_114("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_114);
      UnderlyingInstrument_114.insert(UnderlyingCurrency_114.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_114;
      UnderlyingCurrentValue_114.setString("14171033");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_114);
      UnderlyingInstrument_114.insert(UnderlyingCurrentValue_114.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_114;
      UnderlyingDetachmentPoint_114.setString("51.550000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_114);
      UnderlyingInstrument_114.insert(UnderlyingDetachmentPoint_114.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_114;
      UnderlyingDirtyPrice_114.setString("15090891");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_114);
      UnderlyingInstrument_114.insert(UnderlyingDirtyPrice_114.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_114;
      UnderlyingEndPrice_114.setString("18748243");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_114);
      UnderlyingInstrument_114.insert(UnderlyingEndPrice_114.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_114;
      UnderlyingEndValue_114.setString("9996460");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_114);
      UnderlyingInstrument_114.insert(UnderlyingEndValue_114.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_114(1574491649);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_114);
      UnderlyingInstrument_114.insert(UnderlyingExerciseStyle_114.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_114;
      UnderlyingFXRate_114.setString("6622388");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_114);
      UnderlyingInstrument_114.insert(UnderlyingFXRate_114.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_114('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_114);
      UnderlyingInstrument_114.insert(UnderlyingFXRateCalc_114.getString());
      FIX::UnderlyingFactor UnderlyingFactor_114;
      UnderlyingFactor_114.setString("9022625");
      noUnderlyings_0_1_0.set(UnderlyingFactor_114);
      UnderlyingInstrument_114.insert(UnderlyingFactor_114.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_114(41711406);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_114);
      UnderlyingInstrument_114.insert(UnderlyingFlowScheduleType_114.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_114("STRING_1577197495");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_114);
      UnderlyingInstrument_114.insert(UnderlyingInstrRegistry_114.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_114("LOCALMKTDATE_769430554");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_114);
      UnderlyingInstrument_114.insert(UnderlyingIssueDate_114.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_114("STRING_135544043");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_114);
      UnderlyingInstrument_114.insert(UnderlyingIssuer_114.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_114("STRING_680372508");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_114);
      UnderlyingInstrument_114.insert(UnderlyingLocaleOfIssue_114.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_114("LOCALMKTDATE_651892645");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_114);
      UnderlyingInstrument_114.insert(UnderlyingMaturityDate_114.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_114("MONTHYEAR_1011909093");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_114);
      UnderlyingInstrument_114.insert(UnderlyingMaturityMonthYear_114.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_114("TZTIMEONLY_1658776195");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_114);
      UnderlyingInstrument_114.insert(UnderlyingMaturityTime_114.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_114;
      UnderlyingNotionalPercentageOutstanding_114.setString("23.480000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_114);
      UnderlyingInstrument_114.insert(UnderlyingNotionalPercentageOutstanding_114.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_114('9');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_114);
      UnderlyingInstrument_114.insert(UnderlyingOptAttribute_114.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_114;
      UnderlyingOriginalNotionalPercentageOutstanding_114.setString("22.180000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_114);
      UnderlyingInstrument_114.insert(UnderlyingOriginalNotionalPercentageOutstanding_114.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_114("STRING_1231507468");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_114);
      UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasure_114.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_114;
      UnderlyingPriceUnitOfMeasureQty_114.setString("16525918");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_114);
      UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasureQty_114.getString());
      FIX::UnderlyingProduct UnderlyingProduct_114(1881049235);
      noUnderlyings_0_1_0.set(UnderlyingProduct_114);
      UnderlyingInstrument_114.insert(UnderlyingProduct_114.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_114(742947599);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_114);
      UnderlyingInstrument_114.insert(UnderlyingPutOrCall_114.getString());
      FIX::UnderlyingPx UnderlyingPx_114;
      UnderlyingPx_114.setString("14963262");
      noUnderlyings_0_1_0.set(UnderlyingPx_114);
      UnderlyingInstrument_114.insert(UnderlyingPx_114.getString());
      FIX::UnderlyingQty UnderlyingQty_114;
      UnderlyingQty_114.setString("17759547");
      noUnderlyings_0_1_0.set(UnderlyingQty_114);
      UnderlyingInstrument_114.insert(UnderlyingQty_114.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_114("LOCALMKTDATE_1687867541");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_114);
      UnderlyingInstrument_114.insert(UnderlyingRedemptionDate_114.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_114("STRING_1313413010");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_114);
      UnderlyingInstrument_114.insert(UnderlyingRepoCollateralSecurityType_114.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_114;
      UnderlyingRepurchaseRate_114.setString("53.270000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_114);
      UnderlyingInstrument_114.insert(UnderlyingRepurchaseRate_114.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_114(637462159);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_114);
      UnderlyingInstrument_114.insert(UnderlyingRepurchaseTerm_114.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_114("STRING_514871183");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_114);
      UnderlyingInstrument_114.insert(UnderlyingRestructuringType_114.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_114("STRING_1705528667");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityDesc_114.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_114("EXCHANGE_236893667");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityExchange_114.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_114("STRING_2023960379");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityID_114.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_114("STRING_1432869375");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityIDSource_114.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_114("STRING_1236539723");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_114);
      UnderlyingInstrument_114.insert(UnderlyingSecuritySubType_114.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_114("STRING_1450968381");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_114);
      UnderlyingInstrument_114.insert(UnderlyingSecurityType_114.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_114("STRING_2095108190");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_114);
      UnderlyingInstrument_114.insert(UnderlyingSeniority_114.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_114("STRING_1307716736");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_114);
      UnderlyingInstrument_114.insert(UnderlyingSettlMethod_114.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_114(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_114);
      UnderlyingInstrument_114.insert(UnderlyingSettlementType_114.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_114;
      UnderlyingStartValue_114.setString("21368195");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_114);
      UnderlyingInstrument_114.insert(UnderlyingStartValue_114.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_114("STRING_737430584");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_114);
      UnderlyingInstrument_114.insert(UnderlyingStateOrProvinceOfIssue_114.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_114("USD");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_114);
      UnderlyingInstrument_114.insert(UnderlyingStrikeCurrency_114.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_114;
      UnderlyingStrikePrice_114.setString("14178030");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_114);
      UnderlyingInstrument_114.insert(UnderlyingStrikePrice_114.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_114("STRING_1627070457");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_114);
      UnderlyingInstrument_114.insert(UnderlyingSymbol_114.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_114("STRING_1136789085");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_114);
      UnderlyingInstrument_114.insert(UnderlyingSymbolSfx_114.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_114("STRING_929095639");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_114);
      UnderlyingInstrument_114.insert(UnderlyingTimeUnit_114.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_114("STRING_1018499157");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_114);
      UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasure_114.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_114;
      UnderlyingUnitOfMeasureQty_114.setString("21036065");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_114);
      UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasureQty_114.getString());
      all_values.push_back(UnderlyingInstrument_114);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_224;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_224("STRING_102522978");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_224);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltID_224.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_224("STRING_1608714733");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_224);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_224.insert(UnderlyingSecurityAltIDSource_224.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_225;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_225("STRING_1218803445");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_225);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltID_225.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_225("STRING_845470577");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_225);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_225.insert(UnderlyingSecurityAltIDSource_225.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_226;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_226("STRING_957557367");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_226);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltID_226.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_226("STRING_847274573");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_226);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltIDSource_226.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_226;
        FIX::UnderlyingStipType UnderlyingStipType_226("STRING_123486730");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_226);
        UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipType_226.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_226("STRING_1135699900");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_226);
        UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipValue_226.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_226);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_227;
        FIX::UnderlyingStipType UnderlyingStipType_227("STRING_1023316629");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_227);
        UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipType_227.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_227("STRING_638357913");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_227);
        UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipValue_227.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_227);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_228;
        FIX::UnderlyingStipType UnderlyingStipType_228("STRING_693744920");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_228);
        UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipType_228.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_228("STRING_1260210296");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_228);
        UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipValue_228.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_228);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_221;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_221("STRING_2126614295");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_221);
        UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyID_221.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_221('3');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_221);
        UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyIDSource_221.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_221(1965803025);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_221);
        UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyRole_221.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_221);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_442("STRING_1656983108");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_442);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubID_442.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_442(24066635);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_442);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubIDType_442.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_443("STRING_2063574785");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_443);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubID_443.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_443(246930044);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_443);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubIDType_443.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_444("STRING_999244446");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_444);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubID_444.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_444(40971129);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_444);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubIDType_444.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_1;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_1;
    FIX::PrevClosePx PrevClosePx_13;
    PrevClosePx_13.setString("16647331");
    noRelatedSym_0_1.set(PrevClosePx_13);
    RFQReqGrp_NoRelatedSym_1.insert(PrevClosePx_13.getString());
    FIX::QuoteRequestType QuoteRequestType_4(2);
    noRelatedSym_0_1.set(QuoteRequestType_4);
    RFQReqGrp_NoRelatedSym_1.insert(QuoteRequestType_4.getString());
    FIX::QuoteType QuoteType_12(3);
    noRelatedSym_0_1.set(QuoteType_12);
    RFQReqGrp_NoRelatedSym_1.insert(QuoteType_12.getString());
    FIX::TradingSessionID TradingSessionID_89("STRING_4");
    noRelatedSym_0_1.set(TradingSessionID_89);
    RFQReqGrp_NoRelatedSym_1.insert(TradingSessionID_89.getString());
    FIX::TradingSessionSubID TradingSessionSubID_89("STRING_6");
    noRelatedSym_0_1.set(TradingSessionSubID_89);
    RFQReqGrp_NoRelatedSym_1.insert(TradingSessionSubID_89.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_1);
    all_compo_names.insert("RFQReqGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_119;
      FIX::EncodedLegIssuer EncodedLegIssuer_119("DATA_1931582984");
      noLegs_1_1_0.set(EncodedLegIssuer_119);
      InstrumentLeg_119.insert(EncodedLegIssuer_119.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_119(1599853391);
      noLegs_1_1_0.set(EncodedLegIssuerLen_119);
      InstrumentLeg_119.insert(EncodedLegIssuerLen_119.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_119("DATA_595114161");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_119);
      InstrumentLeg_119.insert(EncodedLegSecurityDesc_119.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_119(1002902781);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_119);
      InstrumentLeg_119.insert(EncodedLegSecurityDescLen_119.getString());
      FIX::LegCFICode LegCFICode_119("STRING_297840320");
      noLegs_1_1_0.set(LegCFICode_119);
      InstrumentLeg_119.insert(LegCFICode_119.getString());
      FIX::LegContractMultiplier LegContractMultiplier_119;
      LegContractMultiplier_119.setString("15526715");
      noLegs_1_1_0.set(LegContractMultiplier_119);
      InstrumentLeg_119.insert(LegContractMultiplier_119.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_119(1850177354);
      noLegs_1_1_0.set(LegContractMultiplierUnit_119);
      InstrumentLeg_119.insert(LegContractMultiplierUnit_119.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_119("MONTHYEAR_683694790");
      noLegs_1_1_0.set(LegContractSettlMonth_119);
      InstrumentLeg_119.insert(LegContractSettlMonth_119.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_119("COUNTRY_1676158259");
      noLegs_1_1_0.set(LegCountryOfIssue_119);
      InstrumentLeg_119.insert(LegCountryOfIssue_119.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_119("LOCALMKTDATE_838393607");
      noLegs_1_1_0.set(LegCouponPaymentDate_119);
      InstrumentLeg_119.insert(LegCouponPaymentDate_119.getString());
      FIX::LegCouponRate LegCouponRate_119;
      LegCouponRate_119.setString("14.190000");
      noLegs_1_1_0.set(LegCouponRate_119);
      InstrumentLeg_119.insert(LegCouponRate_119.getString());
      FIX::LegCreditRating LegCreditRating_119("STRING_167032524");
      noLegs_1_1_0.set(LegCreditRating_119);
      InstrumentLeg_119.insert(LegCreditRating_119.getString());
      FIX::LegCurrency LegCurrency_119("GBP");
      noLegs_1_1_0.set(LegCurrency_119);
      InstrumentLeg_119.insert(LegCurrency_119.getString());
      FIX::LegDatedDate LegDatedDate_119("LOCALMKTDATE_681867168");
      noLegs_1_1_0.set(LegDatedDate_119);
      InstrumentLeg_119.insert(LegDatedDate_119.getString());
      FIX::LegExerciseStyle LegExerciseStyle_119(1511269174);
      noLegs_1_1_0.set(LegExerciseStyle_119);
      InstrumentLeg_119.insert(LegExerciseStyle_119.getString());
      FIX::LegFactor LegFactor_119;
      LegFactor_119.setString("11690044");
      noLegs_1_1_0.set(LegFactor_119);
      InstrumentLeg_119.insert(LegFactor_119.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_119(500186546);
      noLegs_1_1_0.set(LegFlowScheduleType_119);
      InstrumentLeg_119.insert(LegFlowScheduleType_119.getString());
      FIX::LegInstrRegistry LegInstrRegistry_119("STRING_1438024363");
      noLegs_1_1_0.set(LegInstrRegistry_119);
      InstrumentLeg_119.insert(LegInstrRegistry_119.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_119("LOCALMKTDATE_678503899");
      noLegs_1_1_0.set(LegInterestAccrualDate_119);
      InstrumentLeg_119.insert(LegInterestAccrualDate_119.getString());
      FIX::LegIssueDate LegIssueDate_119("LOCALMKTDATE_524253181");
      noLegs_1_1_0.set(LegIssueDate_119);
      InstrumentLeg_119.insert(LegIssueDate_119.getString());
      FIX::LegIssuer LegIssuer_119("STRING_1354115500");
      noLegs_1_1_0.set(LegIssuer_119);
      InstrumentLeg_119.insert(LegIssuer_119.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_119("STRING_925433943");
      noLegs_1_1_0.set(LegLocaleOfIssue_119);
      InstrumentLeg_119.insert(LegLocaleOfIssue_119.getString());
      FIX::LegMaturityDate LegMaturityDate_119("LOCALMKTDATE_1523497627");
      noLegs_1_1_0.set(LegMaturityDate_119);
      InstrumentLeg_119.insert(LegMaturityDate_119.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_119("MONTHYEAR_1395086630");
      noLegs_1_1_0.set(LegMaturityMonthYear_119);
      InstrumentLeg_119.insert(LegMaturityMonthYear_119.getString());
      FIX::LegMaturityTime LegMaturityTime_119("TZTIMEONLY_442683431");
      noLegs_1_1_0.set(LegMaturityTime_119);
      InstrumentLeg_119.insert(LegMaturityTime_119.getString());
      FIX::LegOptAttribute LegOptAttribute_119('2');
      noLegs_1_1_0.set(LegOptAttribute_119);
      InstrumentLeg_119.insert(LegOptAttribute_119.getString());
      FIX::LegOptionRatio LegOptionRatio_119;
      LegOptionRatio_119.setString("4253631");
      noLegs_1_1_0.set(LegOptionRatio_119);
      InstrumentLeg_119.insert(LegOptionRatio_119.getString());
      FIX::LegPool LegPool_119("STRING_889028558");
      noLegs_1_1_0.set(LegPool_119);
      InstrumentLeg_119.insert(LegPool_119.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_119("STRING_1352175648");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_119);
      InstrumentLeg_119.insert(LegPriceUnitOfMeasure_119.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_119;
      LegPriceUnitOfMeasureQty_119.setString("15592462");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_119);
      InstrumentLeg_119.insert(LegPriceUnitOfMeasureQty_119.getString());
      FIX::LegProduct LegProduct_119(673127895);
      noLegs_1_1_0.set(LegProduct_119);
      InstrumentLeg_119.insert(LegProduct_119.getString());
      FIX::LegPutOrCall LegPutOrCall_119(804545391);
      noLegs_1_1_0.set(LegPutOrCall_119);
      InstrumentLeg_119.insert(LegPutOrCall_119.getString());
      FIX::LegRatioQty LegRatioQty_119;
      LegRatioQty_119.setString("68767");
      noLegs_1_1_0.set(LegRatioQty_119);
      InstrumentLeg_119.insert(LegRatioQty_119.getString());
      FIX::LegRedemptionDate LegRedemptionDate_119("LOCALMKTDATE_1676030676");
      noLegs_1_1_0.set(LegRedemptionDate_119);
      InstrumentLeg_119.insert(LegRedemptionDate_119.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_119("STRING_1102385711");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_119);
      InstrumentLeg_119.insert(LegRepoCollateralSecurityType_119.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_119;
      LegRepurchaseRate_119.setString("83.160000");
      noLegs_1_1_0.set(LegRepurchaseRate_119);
      InstrumentLeg_119.insert(LegRepurchaseRate_119.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_119(1378724383);
      noLegs_1_1_0.set(LegRepurchaseTerm_119);
      InstrumentLeg_119.insert(LegRepurchaseTerm_119.getString());
      FIX::LegSecurityDesc LegSecurityDesc_119("STRING_1786080501");
      noLegs_1_1_0.set(LegSecurityDesc_119);
      InstrumentLeg_119.insert(LegSecurityDesc_119.getString());
      FIX::LegSecurityExchange LegSecurityExchange_119("EXCHANGE_1088222927");
      noLegs_1_1_0.set(LegSecurityExchange_119);
      InstrumentLeg_119.insert(LegSecurityExchange_119.getString());
      FIX::LegSecurityID LegSecurityID_119("STRING_69634342");
      noLegs_1_1_0.set(LegSecurityID_119);
      InstrumentLeg_119.insert(LegSecurityID_119.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_119("STRING_1345608272");
      noLegs_1_1_0.set(LegSecurityIDSource_119);
      InstrumentLeg_119.insert(LegSecurityIDSource_119.getString());
      FIX::LegSecuritySubType LegSecuritySubType_119("STRING_1255255451");
      noLegs_1_1_0.set(LegSecuritySubType_119);
      InstrumentLeg_119.insert(LegSecuritySubType_119.getString());
      FIX::LegSecurityType LegSecurityType_119("STRING_1601772869");
      noLegs_1_1_0.set(LegSecurityType_119);
      InstrumentLeg_119.insert(LegSecurityType_119.getString());
      FIX::LegSide LegSide_119('1');
      noLegs_1_1_0.set(LegSide_119);
      InstrumentLeg_119.insert(LegSide_119.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_119("STRING_1937122619");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_119);
      InstrumentLeg_119.insert(LegStateOrProvinceOfIssue_119.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_119("JPY");
      noLegs_1_1_0.set(LegStrikeCurrency_119);
      InstrumentLeg_119.insert(LegStrikeCurrency_119.getString());
      FIX::LegStrikePrice LegStrikePrice_119;
      LegStrikePrice_119.setString("2898255");
      noLegs_1_1_0.set(LegStrikePrice_119);
      InstrumentLeg_119.insert(LegStrikePrice_119.getString());
      FIX::LegSymbol LegSymbol_119("STRING_256099110");
      noLegs_1_1_0.set(LegSymbol_119);
      InstrumentLeg_119.insert(LegSymbol_119.getString());
      FIX::LegSymbolSfx LegSymbolSfx_119("STRING_1865371031");
      noLegs_1_1_0.set(LegSymbolSfx_119);
      InstrumentLeg_119.insert(LegSymbolSfx_119.getString());
      FIX::LegTimeUnit LegTimeUnit_119("STRING_814078698");
      noLegs_1_1_0.set(LegTimeUnit_119);
      InstrumentLeg_119.insert(LegTimeUnit_119.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_119("STRING_1610214610");
      noLegs_1_1_0.set(LegUnitOfMeasure_119);
      InstrumentLeg_119.insert(LegUnitOfMeasure_119.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_119;
      LegUnitOfMeasureQty_119.setString("6433213");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_119);
      InstrumentLeg_119.insert(LegUnitOfMeasureQty_119.getString());
      all_values.push_back(InstrumentLeg_119);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_241;
        FIX::LegSecurityAltID LegSecurityAltID_241("STRING_857817592");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_241);
        LegSecAltIDGrp_NoLegSecurityAltID_241.insert(LegSecurityAltID_241.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_241("STRING_1086004758");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_241);
        LegSecAltIDGrp_NoLegSecurityAltID_241.insert(LegSecurityAltIDSource_241.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_241);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_120;
      FIX::EncodedLegIssuer EncodedLegIssuer_120("DATA_44937913");
      noLegs_1_1_1.set(EncodedLegIssuer_120);
      InstrumentLeg_120.insert(EncodedLegIssuer_120.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_120(1283180789);
      noLegs_1_1_1.set(EncodedLegIssuerLen_120);
      InstrumentLeg_120.insert(EncodedLegIssuerLen_120.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_120("DATA_1975033317");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_120);
      InstrumentLeg_120.insert(EncodedLegSecurityDesc_120.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_120(1397113561);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_120);
      InstrumentLeg_120.insert(EncodedLegSecurityDescLen_120.getString());
      FIX::LegCFICode LegCFICode_120("STRING_694943415");
      noLegs_1_1_1.set(LegCFICode_120);
      InstrumentLeg_120.insert(LegCFICode_120.getString());
      FIX::LegContractMultiplier LegContractMultiplier_120;
      LegContractMultiplier_120.setString("5006775");
      noLegs_1_1_1.set(LegContractMultiplier_120);
      InstrumentLeg_120.insert(LegContractMultiplier_120.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_120(54175304);
      noLegs_1_1_1.set(LegContractMultiplierUnit_120);
      InstrumentLeg_120.insert(LegContractMultiplierUnit_120.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_120("MONTHYEAR_701820202");
      noLegs_1_1_1.set(LegContractSettlMonth_120);
      InstrumentLeg_120.insert(LegContractSettlMonth_120.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_120("COUNTRY_29224592");
      noLegs_1_1_1.set(LegCountryOfIssue_120);
      InstrumentLeg_120.insert(LegCountryOfIssue_120.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_120("LOCALMKTDATE_1156561015");
      noLegs_1_1_1.set(LegCouponPaymentDate_120);
      InstrumentLeg_120.insert(LegCouponPaymentDate_120.getString());
      FIX::LegCouponRate LegCouponRate_120;
      LegCouponRate_120.setString("48.700000");
      noLegs_1_1_1.set(LegCouponRate_120);
      InstrumentLeg_120.insert(LegCouponRate_120.getString());
      FIX::LegCreditRating LegCreditRating_120("STRING_1407948975");
      noLegs_1_1_1.set(LegCreditRating_120);
      InstrumentLeg_120.insert(LegCreditRating_120.getString());
      FIX::LegCurrency LegCurrency_120("CHF");
      noLegs_1_1_1.set(LegCurrency_120);
      InstrumentLeg_120.insert(LegCurrency_120.getString());
      FIX::LegDatedDate LegDatedDate_120("LOCALMKTDATE_1477583317");
      noLegs_1_1_1.set(LegDatedDate_120);
      InstrumentLeg_120.insert(LegDatedDate_120.getString());
      FIX::LegExerciseStyle LegExerciseStyle_120(2140766140);
      noLegs_1_1_1.set(LegExerciseStyle_120);
      InstrumentLeg_120.insert(LegExerciseStyle_120.getString());
      FIX::LegFactor LegFactor_120;
      LegFactor_120.setString("3098796");
      noLegs_1_1_1.set(LegFactor_120);
      InstrumentLeg_120.insert(LegFactor_120.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_120(931872538);
      noLegs_1_1_1.set(LegFlowScheduleType_120);
      InstrumentLeg_120.insert(LegFlowScheduleType_120.getString());
      FIX::LegInstrRegistry LegInstrRegistry_120("STRING_11145185");
      noLegs_1_1_1.set(LegInstrRegistry_120);
      InstrumentLeg_120.insert(LegInstrRegistry_120.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_120("LOCALMKTDATE_99518571");
      noLegs_1_1_1.set(LegInterestAccrualDate_120);
      InstrumentLeg_120.insert(LegInterestAccrualDate_120.getString());
      FIX::LegIssueDate LegIssueDate_120("LOCALMKTDATE_1897430933");
      noLegs_1_1_1.set(LegIssueDate_120);
      InstrumentLeg_120.insert(LegIssueDate_120.getString());
      FIX::LegIssuer LegIssuer_120("STRING_1198012317");
      noLegs_1_1_1.set(LegIssuer_120);
      InstrumentLeg_120.insert(LegIssuer_120.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_120("STRING_389344089");
      noLegs_1_1_1.set(LegLocaleOfIssue_120);
      InstrumentLeg_120.insert(LegLocaleOfIssue_120.getString());
      FIX::LegMaturityDate LegMaturityDate_120("LOCALMKTDATE_6046395");
      noLegs_1_1_1.set(LegMaturityDate_120);
      InstrumentLeg_120.insert(LegMaturityDate_120.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_120("MONTHYEAR_915899700");
      noLegs_1_1_1.set(LegMaturityMonthYear_120);
      InstrumentLeg_120.insert(LegMaturityMonthYear_120.getString());
      FIX::LegMaturityTime LegMaturityTime_120("TZTIMEONLY_1203422787");
      noLegs_1_1_1.set(LegMaturityTime_120);
      InstrumentLeg_120.insert(LegMaturityTime_120.getString());
      FIX::LegOptAttribute LegOptAttribute_120('1');
      noLegs_1_1_1.set(LegOptAttribute_120);
      InstrumentLeg_120.insert(LegOptAttribute_120.getString());
      FIX::LegOptionRatio LegOptionRatio_120;
      LegOptionRatio_120.setString("15592210");
      noLegs_1_1_1.set(LegOptionRatio_120);
      InstrumentLeg_120.insert(LegOptionRatio_120.getString());
      FIX::LegPool LegPool_120("STRING_1393515465");
      noLegs_1_1_1.set(LegPool_120);
      InstrumentLeg_120.insert(LegPool_120.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_120("STRING_326594950");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_120);
      InstrumentLeg_120.insert(LegPriceUnitOfMeasure_120.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_120;
      LegPriceUnitOfMeasureQty_120.setString("4977421");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_120);
      InstrumentLeg_120.insert(LegPriceUnitOfMeasureQty_120.getString());
      FIX::LegProduct LegProduct_120(1438453378);
      noLegs_1_1_1.set(LegProduct_120);
      InstrumentLeg_120.insert(LegProduct_120.getString());
      FIX::LegPutOrCall LegPutOrCall_120(1609775740);
      noLegs_1_1_1.set(LegPutOrCall_120);
      InstrumentLeg_120.insert(LegPutOrCall_120.getString());
      FIX::LegRatioQty LegRatioQty_120;
      LegRatioQty_120.setString("3252918");
      noLegs_1_1_1.set(LegRatioQty_120);
      InstrumentLeg_120.insert(LegRatioQty_120.getString());
      FIX::LegRedemptionDate LegRedemptionDate_120("LOCALMKTDATE_688083291");
      noLegs_1_1_1.set(LegRedemptionDate_120);
      InstrumentLeg_120.insert(LegRedemptionDate_120.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_120("STRING_157235507");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_120);
      InstrumentLeg_120.insert(LegRepoCollateralSecurityType_120.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_120;
      LegRepurchaseRate_120.setString("93.710000");
      noLegs_1_1_1.set(LegRepurchaseRate_120);
      InstrumentLeg_120.insert(LegRepurchaseRate_120.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_120(742258595);
      noLegs_1_1_1.set(LegRepurchaseTerm_120);
      InstrumentLeg_120.insert(LegRepurchaseTerm_120.getString());
      FIX::LegSecurityDesc LegSecurityDesc_120("STRING_859055709");
      noLegs_1_1_1.set(LegSecurityDesc_120);
      InstrumentLeg_120.insert(LegSecurityDesc_120.getString());
      FIX::LegSecurityExchange LegSecurityExchange_120("EXCHANGE_855193963");
      noLegs_1_1_1.set(LegSecurityExchange_120);
      InstrumentLeg_120.insert(LegSecurityExchange_120.getString());
      FIX::LegSecurityID LegSecurityID_120("STRING_1898819610");
      noLegs_1_1_1.set(LegSecurityID_120);
      InstrumentLeg_120.insert(LegSecurityID_120.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_120("STRING_972940579");
      noLegs_1_1_1.set(LegSecurityIDSource_120);
      InstrumentLeg_120.insert(LegSecurityIDSource_120.getString());
      FIX::LegSecuritySubType LegSecuritySubType_120("STRING_115659291");
      noLegs_1_1_1.set(LegSecuritySubType_120);
      InstrumentLeg_120.insert(LegSecuritySubType_120.getString());
      FIX::LegSecurityType LegSecurityType_120("STRING_546493830");
      noLegs_1_1_1.set(LegSecurityType_120);
      InstrumentLeg_120.insert(LegSecurityType_120.getString());
      FIX::LegSide LegSide_120('2');
      noLegs_1_1_1.set(LegSide_120);
      InstrumentLeg_120.insert(LegSide_120.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_120("STRING_1593242608");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_120);
      InstrumentLeg_120.insert(LegStateOrProvinceOfIssue_120.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_120("GBP");
      noLegs_1_1_1.set(LegStrikeCurrency_120);
      InstrumentLeg_120.insert(LegStrikeCurrency_120.getString());
      FIX::LegStrikePrice LegStrikePrice_120;
      LegStrikePrice_120.setString("3776314");
      noLegs_1_1_1.set(LegStrikePrice_120);
      InstrumentLeg_120.insert(LegStrikePrice_120.getString());
      FIX::LegSymbol LegSymbol_120("STRING_550921508");
      noLegs_1_1_1.set(LegSymbol_120);
      InstrumentLeg_120.insert(LegSymbol_120.getString());
      FIX::LegSymbolSfx LegSymbolSfx_120("STRING_436962899");
      noLegs_1_1_1.set(LegSymbolSfx_120);
      InstrumentLeg_120.insert(LegSymbolSfx_120.getString());
      FIX::LegTimeUnit LegTimeUnit_120("STRING_127578784");
      noLegs_1_1_1.set(LegTimeUnit_120);
      InstrumentLeg_120.insert(LegTimeUnit_120.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_120("STRING_1748933825");
      noLegs_1_1_1.set(LegUnitOfMeasure_120);
      InstrumentLeg_120.insert(LegUnitOfMeasure_120.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_120;
      LegUnitOfMeasureQty_120.setString("8263069");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_120);
      InstrumentLeg_120.insert(LegUnitOfMeasureQty_120.getString());
      all_values.push_back(InstrumentLeg_120);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_242;
        FIX::LegSecurityAltID LegSecurityAltID_242("STRING_517349877");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_242);
        LegSecAltIDGrp_NoLegSecurityAltID_242.insert(LegSecurityAltID_242.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_242("STRING_2029729776");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_242);
        LegSecAltIDGrp_NoLegSecurityAltID_242.insert(LegSecurityAltIDSource_242.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_242);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_243;
        FIX::LegSecurityAltID LegSecurityAltID_243("STRING_1749886186");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_243);
        LegSecAltIDGrp_NoLegSecurityAltID_243.insert(LegSecurityAltID_243.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_243("STRING_2076570905");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_243);
        LegSecAltIDGrp_NoLegSecurityAltID_243.insert(LegSecurityAltIDSource_243.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_243);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_244;
        FIX::LegSecurityAltID LegSecurityAltID_244("STRING_1275761593");
        noLegSecurityAltID_1_1_2_2.set(LegSecurityAltID_244);
        LegSecAltIDGrp_NoLegSecurityAltID_244.insert(LegSecurityAltID_244.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_244("STRING_2076481136");
        noLegSecurityAltID_1_1_2_2.set(LegSecurityAltIDSource_244);
        LegSecAltIDGrp_NoLegSecurityAltID_244.insert(LegSecurityAltIDSource_244.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_244);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_76;
    FIX::AttachmentPoint AttachmentPoint_76;
    AttachmentPoint_76.setString("93.950000");
    noRelatedSym_0_1.set(AttachmentPoint_76);
    Instrument_76.insert(AttachmentPoint_76.getString());
    FIX::CFICode CFICode_76("STRING_566731324");
    noRelatedSym_0_1.set(CFICode_76);
    Instrument_76.insert(CFICode_76.getString());
    FIX::CPProgram CPProgram_76(2);
    noRelatedSym_0_1.set(CPProgram_76);
    Instrument_76.insert(CPProgram_76.getString());
    FIX::CPRegType CPRegType_76("STRING_752121202");
    noRelatedSym_0_1.set(CPRegType_76);
    Instrument_76.insert(CPRegType_76.getString());
    FIX::CapPrice CapPrice_76;
    CapPrice_76.setString("12548146");
    noRelatedSym_0_1.set(CapPrice_76);
    Instrument_76.insert(CapPrice_76.getString());
    FIX::ContractMultiplier ContractMultiplier_76;
    ContractMultiplier_76.setString("16960087");
    noRelatedSym_0_1.set(ContractMultiplier_76);
    Instrument_76.insert(ContractMultiplier_76.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_76(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_76);
    Instrument_76.insert(ContractMultiplierUnit_76.getString());
    FIX::ContractSettlMonth ContractSettlMonth_76("MONTHYEAR_1997073211");
    noRelatedSym_0_1.set(ContractSettlMonth_76);
    Instrument_76.insert(ContractSettlMonth_76.getString());
    FIX::CountryOfIssue CountryOfIssue_76("COUNTRY_407580796");
    noRelatedSym_0_1.set(CountryOfIssue_76);
    Instrument_76.insert(CountryOfIssue_76.getString());
    FIX::CouponPaymentDate CouponPaymentDate_76("LOCALMKTDATE_285800888");
    noRelatedSym_0_1.set(CouponPaymentDate_76);
    Instrument_76.insert(CouponPaymentDate_76.getString());
    FIX::CouponRate CouponRate_76;
    CouponRate_76.setString("91.730000");
    noRelatedSym_0_1.set(CouponRate_76);
    Instrument_76.insert(CouponRate_76.getString());
    FIX::CreditRating CreditRating_76("STRING_1380521375");
    noRelatedSym_0_1.set(CreditRating_76);
    Instrument_76.insert(CreditRating_76.getString());
    FIX::DatedDate DatedDate_76("LOCALMKTDATE_401460179");
    noRelatedSym_0_1.set(DatedDate_76);
    Instrument_76.insert(DatedDate_76.getString());
    FIX::DetachmentPoint DetachmentPoint_76;
    DetachmentPoint_76.setString("93.560000");
    noRelatedSym_0_1.set(DetachmentPoint_76);
    Instrument_76.insert(DetachmentPoint_76.getString());
    FIX::EncodedIssuer EncodedIssuer_76("DATA_1408086103");
    noRelatedSym_0_1.set(EncodedIssuer_76);
    Instrument_76.insert(EncodedIssuer_76.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_76(1994702788);
    noRelatedSym_0_1.set(EncodedIssuerLen_76);
    Instrument_76.insert(EncodedIssuerLen_76.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_76("DATA_687195679");
    noRelatedSym_0_1.set(EncodedSecurityDesc_76);
    Instrument_76.insert(EncodedSecurityDesc_76.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_76(1745530431);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_76);
    Instrument_76.insert(EncodedSecurityDescLen_76.getString());
    FIX::ExerciseStyle ExerciseStyle_76(0);
    noRelatedSym_0_1.set(ExerciseStyle_76);
    Instrument_76.insert(ExerciseStyle_76.getString());
    FIX::Factor Factor_76;
    Factor_76.setString("12381171");
    noRelatedSym_0_1.set(Factor_76);
    Instrument_76.insert(Factor_76.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_76(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_76);
    Instrument_76.insert(FlexProductEligibilityIndicator_76.getString());
    FIX::FlexibleIndicator FlexibleIndicator_76(false);
    noRelatedSym_0_1.set(FlexibleIndicator_76);
    Instrument_76.insert(FlexibleIndicator_76.getString());
    FIX::FloorPrice FloorPrice_76;
    FloorPrice_76.setString("8395673");
    noRelatedSym_0_1.set(FloorPrice_76);
    Instrument_76.insert(FloorPrice_76.getString());
    FIX::FlowScheduleType FlowScheduleType_76(1);
    noRelatedSym_0_1.set(FlowScheduleType_76);
    Instrument_76.insert(FlowScheduleType_76.getString());
    FIX::InstrRegistry InstrRegistry_76("STRING_486054603");
    noRelatedSym_0_1.set(InstrRegistry_76);
    Instrument_76.insert(InstrRegistry_76.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_76('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_76);
    Instrument_76.insert(InstrmtAssignmentMethod_76.getString());
    FIX::InterestAccrualDate InterestAccrualDate_76("LOCALMKTDATE_743562799");
    noRelatedSym_0_1.set(InterestAccrualDate_76);
    Instrument_76.insert(InterestAccrualDate_76.getString());
    FIX::IssueDate IssueDate_76("LOCALMKTDATE_88457141");
    noRelatedSym_0_1.set(IssueDate_76);
    Instrument_76.insert(IssueDate_76.getString());
    FIX::Issuer Issuer_76("STRING_1286004498");
    noRelatedSym_0_1.set(Issuer_76);
    Instrument_76.insert(Issuer_76.getString());
    FIX::ListMethod ListMethod_76(1);
    noRelatedSym_0_1.set(ListMethod_76);
    Instrument_76.insert(ListMethod_76.getString());
    FIX::LocaleOfIssue LocaleOfIssue_76("STRING_17454630");
    noRelatedSym_0_1.set(LocaleOfIssue_76);
    Instrument_76.insert(LocaleOfIssue_76.getString());
    FIX::MaturityDate MaturityDate_76("LOCALMKTDATE_1712833893");
    noRelatedSym_0_1.set(MaturityDate_76);
    Instrument_76.insert(MaturityDate_76.getString());
    FIX::MaturityMonthYear MaturityMonthYear_76("MONTHYEAR_438572069");
    noRelatedSym_0_1.set(MaturityMonthYear_76);
    Instrument_76.insert(MaturityMonthYear_76.getString());
    FIX::MaturityTime MaturityTime_76("TZTIMEONLY_1556227858");
    noRelatedSym_0_1.set(MaturityTime_76);
    Instrument_76.insert(MaturityTime_76.getString());
    FIX::MinPriceIncrement MinPriceIncrement_76;
    MinPriceIncrement_76.setString("3174714");
    noRelatedSym_0_1.set(MinPriceIncrement_76);
    Instrument_76.insert(MinPriceIncrement_76.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_76;
    MinPriceIncrementAmount_76.setString("16933866");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_76);
    Instrument_76.insert(MinPriceIncrementAmount_76.getString());
    FIX::NTPositionLimit NTPositionLimit_76(1104752946);
    noRelatedSym_0_1.set(NTPositionLimit_76);
    Instrument_76.insert(NTPositionLimit_76.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_76;
    NotionalPercentageOutstanding_76.setString("20.200000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_76);
    Instrument_76.insert(NotionalPercentageOutstanding_76.getString());
    FIX::OptAttribute OptAttribute_76('1');
    noRelatedSym_0_1.set(OptAttribute_76);
    Instrument_76.insert(OptAttribute_76.getString());
    FIX::OptPayoutAmount OptPayoutAmount_76;
    OptPayoutAmount_76.setString("15123337");
    noRelatedSym_0_1.set(OptPayoutAmount_76);
    Instrument_76.insert(OptPayoutAmount_76.getString());
    FIX::OptPayoutType OptPayoutType_76(1);
    noRelatedSym_0_1.set(OptPayoutType_76);
    Instrument_76.insert(OptPayoutType_76.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_76;
    OriginalNotionalPercentageOutstanding_76.setString("17.730000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_76);
    Instrument_76.insert(OriginalNotionalPercentageOutstanding_76.getString());
    FIX::Pool Pool_76("STRING_745371470");
    noRelatedSym_0_1.set(Pool_76);
    Instrument_76.insert(Pool_76.getString());
    FIX::PositionLimit PositionLimit_76(435339440);
    noRelatedSym_0_1.set(PositionLimit_76);
    Instrument_76.insert(PositionLimit_76.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_76("STRING_INX");
    noRelatedSym_0_1.set(PriceQuoteMethod_76);
    Instrument_76.insert(PriceQuoteMethod_76.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_76("STRING_5973925");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_76);
    Instrument_76.insert(PriceUnitOfMeasure_76.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_76;
    PriceUnitOfMeasureQty_76.setString("2825585");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_76);
    Instrument_76.insert(PriceUnitOfMeasureQty_76.getString());
    FIX::Product Product_78(9);
    noRelatedSym_0_1.set(Product_78);
    Instrument_76.insert(Product_78.getString());
    FIX::ProductComplex ProductComplex_76("STRING_1751504357");
    noRelatedSym_0_1.set(ProductComplex_76);
    Instrument_76.insert(ProductComplex_76.getString());
    FIX::PutOrCall PutOrCall_76(1);
    noRelatedSym_0_1.set(PutOrCall_76);
    Instrument_76.insert(PutOrCall_76.getString());
    FIX::RedemptionDate RedemptionDate_76("LOCALMKTDATE_1069150347");
    noRelatedSym_0_1.set(RedemptionDate_76);
    Instrument_76.insert(RedemptionDate_76.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_76("STRING_1786514040");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_76);
    Instrument_76.insert(RepoCollateralSecurityType_76.getString());
    FIX::RepurchaseRate RepurchaseRate_76;
    RepurchaseRate_76.setString("86.430000");
    noRelatedSym_0_1.set(RepurchaseRate_76);
    Instrument_76.insert(RepurchaseRate_76.getString());
    FIX::RepurchaseTerm RepurchaseTerm_76(1908717711);
    noRelatedSym_0_1.set(RepurchaseTerm_76);
    Instrument_76.insert(RepurchaseTerm_76.getString());
    FIX::RestructuringType RestructuringType_76("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_76);
    Instrument_76.insert(RestructuringType_76.getString());
    FIX::SecurityDesc SecurityDesc_76("STRING_1345893246");
    noRelatedSym_0_1.set(SecurityDesc_76);
    Instrument_76.insert(SecurityDesc_76.getString());
    FIX::SecurityExchange SecurityExchange_76("EXCHANGE_1118151304");
    noRelatedSym_0_1.set(SecurityExchange_76);
    Instrument_76.insert(SecurityExchange_76.getString());
    FIX::SecurityGroup SecurityGroup_76("STRING_1243909863");
    noRelatedSym_0_1.set(SecurityGroup_76);
    Instrument_76.insert(SecurityGroup_76.getString());
    FIX::SecurityID SecurityID_76("STRING_1434350388");
    noRelatedSym_0_1.set(SecurityID_76);
    Instrument_76.insert(SecurityID_76.getString());
    FIX::SecurityIDSource SecurityIDSource_76("STRING_4");
    noRelatedSym_0_1.set(SecurityIDSource_76);
    Instrument_76.insert(SecurityIDSource_76.getString());
    FIX::SecurityStatus SecurityStatus_76("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_76);
    Instrument_76.insert(SecurityStatus_76.getString());
    FIX::SecuritySubType SecuritySubType_77("STRING_1451805018");
    noRelatedSym_0_1.set(SecuritySubType_77);
    Instrument_76.insert(SecuritySubType_77.getString());
    FIX::SecurityType SecurityType_78("STRING_PS");
    noRelatedSym_0_1.set(SecurityType_78);
    Instrument_76.insert(SecurityType_78.getString());
    FIX::Seniority Seniority_76("STRING_SD");
    noRelatedSym_0_1.set(Seniority_76);
    Instrument_76.insert(Seniority_76.getString());
    FIX::SettlMethod SettlMethod_76('C');
    noRelatedSym_0_1.set(SettlMethod_76);
    Instrument_76.insert(SettlMethod_76.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_76("STRING_139493848");
    noRelatedSym_0_1.set(SettleOnOpenFlag_76);
    Instrument_76.insert(SettleOnOpenFlag_76.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_76("STRING_1100225713");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_76);
    Instrument_76.insert(StateOrProvinceOfIssue_76.getString());
    FIX::StrikeCurrency StrikeCurrency_76("USD");
    noRelatedSym_0_1.set(StrikeCurrency_76);
    Instrument_76.insert(StrikeCurrency_76.getString());
    FIX::StrikeMultiplier StrikeMultiplier_76;
    StrikeMultiplier_76.setString("4957183");
    noRelatedSym_0_1.set(StrikeMultiplier_76);
    Instrument_76.insert(StrikeMultiplier_76.getString());
    FIX::StrikePrice StrikePrice_76;
    StrikePrice_76.setString("13301522");
    noRelatedSym_0_1.set(StrikePrice_76);
    Instrument_76.insert(StrikePrice_76.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_76(5);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_76);
    Instrument_76.insert(StrikePriceBoundaryMethod_76.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_76;
    StrikePriceBoundaryPrecision_76.setString("0.860000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_76);
    Instrument_76.insert(StrikePriceBoundaryPrecision_76.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_76(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_76);
    Instrument_76.insert(StrikePriceDeterminationMethod_76.getString());
    FIX::StrikeValue StrikeValue_76;
    StrikeValue_76.setString("3567909");
    noRelatedSym_0_1.set(StrikeValue_76);
    Instrument_76.insert(StrikeValue_76.getString());
    FIX::Symbol Symbol_76("STRING_783457567");
    noRelatedSym_0_1.set(Symbol_76);
    Instrument_76.insert(Symbol_76.getString());
    FIX::SymbolSfx SymbolSfx_76("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_76);
    Instrument_76.insert(SymbolSfx_76.getString());
    FIX::TimeUnit TimeUnit_76("STRING_Min");
    noRelatedSym_0_1.set(TimeUnit_76);
    Instrument_76.insert(TimeUnit_76.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_76(4);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_76);
    Instrument_76.insert(UnderlyingPriceDeterminationMethod_76.getString());
    FIX::UnitOfMeasure UnitOfMeasure_76("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_76);
    Instrument_76.insert(UnitOfMeasure_76.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_76;
    UnitOfMeasureQty_76.setString("11467587");
    noRelatedSym_0_1.set(UnitOfMeasureQty_76);
    Instrument_76.insert(UnitOfMeasureQty_76.getString());
    FIX::ValuationMethod ValuationMethod_76("STRING_CDSD");
    noRelatedSym_0_1.set(ValuationMethod_76);
    Instrument_76.insert(ValuationMethod_76.getString());
    all_values.push_back(Instrument_76);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_159;
      FIX::ComplexEventCondition ComplexEventCondition_159(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventCondition_159.getString());
      FIX::ComplexEventPrice ComplexEventPrice_159;
      ComplexEventPrice_159.setString("14448751");
      noComplexEvents_1_1_0.set(ComplexEventPrice_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPrice_159.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_159(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryMethod_159.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_159;
      ComplexEventPriceBoundaryPrecision_159.setString("69.630000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryPrecision_159.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_159(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceTimeType_159.getString());
      FIX::ComplexEventType ComplexEventType_159(1);
      noComplexEvents_1_1_0.set(ComplexEventType_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventType_159.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_159;
      ComplexOptPayoutAmount_159.setString("4918737");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexOptPayoutAmount_159.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_159);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_325;
        FIX::ComplexEventEndDate ComplexEventEndDate_325(FIX::UTCTIMESTAMP(9, 9, 41, 18, 2, 2004));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_325);
        ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventEndDate_325.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_325(FIX::UTCTIMESTAMP(17, 39, 57, 27, 10, 2002));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_325);
        ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventStartDate_325.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_325);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_662;
          FIX::ComplexEventEndTime ComplexEventEndTime_662(FIX::UTCTIMEONLY(21, 43, 11));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_662);
          ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventEndTime_662.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_662(FIX::UTCTIMEONLY(21, 37, 8));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_662);
          ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventStartTime_662.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_662);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_663;
          FIX::ComplexEventEndTime ComplexEventEndTime_663(FIX::UTCTIMEONLY(10, 29, 38));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_663);
          ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventEndTime_663.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_663(FIX::UTCTIMEONLY(17, 41, 28));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_663);
          ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventStartTime_663.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_663);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_664;
          FIX::ComplexEventEndTime ComplexEventEndTime_664(FIX::UTCTIMEONLY(7, 29, 10));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_664);
          ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventEndTime_664.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_664(FIX::UTCTIMEONLY(18, 56, 37));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_664);
          ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventStartTime_664.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_664);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_326;
        FIX::ComplexEventEndDate ComplexEventEndDate_326(FIX::UTCTIMESTAMP(12, 27, 43, 17, 4, 2010));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_326);
        ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventEndDate_326.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_326(FIX::UTCTIMESTAMP(12, 59, 33, 3, 2, 2017));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_326);
        ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventStartDate_326.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_326);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_665;
          FIX::ComplexEventEndTime ComplexEventEndTime_665(FIX::UTCTIMEONLY(1, 12, 41));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_665);
          ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventEndTime_665.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_665(FIX::UTCTIMEONLY(21, 15, 10));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_665);
          ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventStartTime_665.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_665);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_666;
          FIX::ComplexEventEndTime ComplexEventEndTime_666(FIX::UTCTIMEONLY(2, 39, 44));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_666);
          ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventEndTime_666.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_666(FIX::UTCTIMEONLY(22, 40, 40));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_666);
          ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventStartTime_666.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_666);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_155;
      FIX::EventDate EventDate_155("LOCALMKTDATE_923294828");
      noEvents_1_1_0.set(EventDate_155);
      EvntGrp_NoEvents_155.insert(EventDate_155.getString());
      FIX::EventPx EventPx_155;
      EventPx_155.setString("6768184");
      noEvents_1_1_0.set(EventPx_155);
      EvntGrp_NoEvents_155.insert(EventPx_155.getString());
      FIX::EventText EventText_155("STRING_164231377");
      noEvents_1_1_0.set(EventText_155);
      EvntGrp_NoEvents_155.insert(EventText_155.getString());
      FIX::EventTime EventTime_155(FIX::UTCTIMESTAMP(11, 53, 4, 7, 9, 2013));
      noEvents_1_1_0.set(EventTime_155);
      EvntGrp_NoEvents_155.insert(EventTime_155.getString());
      FIX::EventType EventType_155(15);
      noEvents_1_1_0.set(EventType_155);
      EvntGrp_NoEvents_155.insert(EventType_155.getString());
      all_values.push_back(EvntGrp_NoEvents_155);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_156;
      FIX::EventDate EventDate_156("LOCALMKTDATE_86331633");
      noEvents_1_1_1.set(EventDate_156);
      EvntGrp_NoEvents_156.insert(EventDate_156.getString());
      FIX::EventPx EventPx_156;
      EventPx_156.setString("16389537");
      noEvents_1_1_1.set(EventPx_156);
      EvntGrp_NoEvents_156.insert(EventPx_156.getString());
      FIX::EventText EventText_156("STRING_2092897317");
      noEvents_1_1_1.set(EventText_156);
      EvntGrp_NoEvents_156.insert(EventText_156.getString());
      FIX::EventTime EventTime_156(FIX::UTCTIMESTAMP(6, 1, 10, 11, 11, 2007));
      noEvents_1_1_1.set(EventTime_156);
      EvntGrp_NoEvents_156.insert(EventTime_156.getString());
      FIX::EventType EventType_156(2);
      noEvents_1_1_1.set(EventType_156);
      EvntGrp_NoEvents_156.insert(EventType_156.getString());
      all_values.push_back(EvntGrp_NoEvents_156);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_157;
      FIX::EventDate EventDate_157("LOCALMKTDATE_2027623472");
      noEvents_1_1_2.set(EventDate_157);
      EvntGrp_NoEvents_157.insert(EventDate_157.getString());
      FIX::EventPx EventPx_157;
      EventPx_157.setString("9434161");
      noEvents_1_1_2.set(EventPx_157);
      EvntGrp_NoEvents_157.insert(EventPx_157.getString());
      FIX::EventText EventText_157("STRING_732694493");
      noEvents_1_1_2.set(EventText_157);
      EvntGrp_NoEvents_157.insert(EventText_157.getString());
      FIX::EventTime EventTime_157(FIX::UTCTIMESTAMP(10, 31, 41, 3, 10, 2007));
      noEvents_1_1_2.set(EventTime_157);
      EvntGrp_NoEvents_157.insert(EventTime_157.getString());
      FIX::EventType EventType_157(11);
      noEvents_1_1_2.set(EventType_157);
      EvntGrp_NoEvents_157.insert(EventType_157.getString());
      all_values.push_back(EvntGrp_NoEvents_157);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_156;
      FIX::InstrumentPartyID InstrumentPartyID_156("STRING_1938907463");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_156);
      InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyID_156.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_156('2');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_156);
      InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyIDSource_156.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_156(1482791043);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_156);
      InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyRole_156.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_156);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304;
        FIX::InstrumentPartySubID InstrumentPartySubID_304("STRING_112356257");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_304);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubID_304.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_304(1539171767);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_304);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubIDType_304.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305;
        FIX::InstrumentPartySubID InstrumentPartySubID_305("STRING_1092755989");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_305);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubID_305.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_305(1082608711);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_305);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubIDType_305.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_157;
      FIX::InstrumentPartyID InstrumentPartyID_157("STRING_1625503401");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyID_157.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_157('5');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyIDSource_157.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_157(1028022381);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyRole_157.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_157);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306;
        FIX::InstrumentPartySubID InstrumentPartySubID_306("STRING_358442623");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubID_306.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_306(7878494);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubIDType_306.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307;
        FIX::InstrumentPartySubID InstrumentPartySubID_307("STRING_2134679168");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubID_307.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_307(1446954115);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubIDType_307.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_140;
      FIX::SecurityAltID SecurityAltID_140("STRING_1759011866");
      noSecurityAltID_1_1_0.set(SecurityAltID_140);
      SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltID_140.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_140("STRING_1258556708");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_140);
      SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltIDSource_140.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_140);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_141;
      FIX::SecurityAltID SecurityAltID_141("STRING_1030403797");
      noSecurityAltID_1_1_1.set(SecurityAltID_141);
      SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltID_141.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_141("STRING_554944357");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_141);
      SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltIDSource_141.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_141);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_152;
    FIX::SecurityXML SecurityXML_153("XMLDATA_1991251201");
    noRelatedSym_0_1.set(SecurityXML_153);
    FIX::SecurityXMLLen SecurityXMLLen_76(1962401926);
    noRelatedSym_0_1.set(SecurityXMLLen_76);
    FIX::SecurityXMLSchema SecurityXMLSchema_76("STRING_969580800");
    noRelatedSym_0_1.set(SecurityXMLSchema_76);
    SecurityXML_152.insert(SecurityXMLSchema_76.getString());
    all_values.push_back(SecurityXML_152);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_115;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_115("DATA_214565119");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingIssuer_115.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_115(1629620883);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingIssuerLen_115.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_115("DATA_888278097");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDesc_115.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_115(1537506788);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_115);
      UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDescLen_115.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_115;
      UnderlyingAdjustedQuantity_115.setString("8189957");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_115);
      UnderlyingInstrument_115.insert(UnderlyingAdjustedQuantity_115.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_115;
      UnderlyingAllocationPercent_115.setString("89.270000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_115);
      UnderlyingInstrument_115.insert(UnderlyingAllocationPercent_115.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_115;
      UnderlyingAttachmentPoint_115.setString("6.040000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_115);
      UnderlyingInstrument_115.insert(UnderlyingAttachmentPoint_115.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_115("STRING_701875363");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_115);
      UnderlyingInstrument_115.insert(UnderlyingCFICode_115.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_115("STRING_1241776322");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_115);
      UnderlyingInstrument_115.insert(UnderlyingCPProgram_115.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_115("STRING_449473595");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_115);
      UnderlyingInstrument_115.insert(UnderlyingCPRegType_115.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_115;
      UnderlyingCapValue_115.setString("8142316");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_115);
      UnderlyingInstrument_115.insert(UnderlyingCapValue_115.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_115;
      UnderlyingCashAmount_115.setString("6334644");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_115);
      UnderlyingInstrument_115.insert(UnderlyingCashAmount_115.getString());
      FIX::UnderlyingCashType UnderlyingCashType_115("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_115);
      UnderlyingInstrument_115.insert(UnderlyingCashType_115.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_115;
      UnderlyingContractMultiplier_115.setString("18968403");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_115);
      UnderlyingInstrument_115.insert(UnderlyingContractMultiplier_115.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_115(111484195);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_115);
      UnderlyingInstrument_115.insert(UnderlyingContractMultiplierUnit_115.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_115("COUNTRY_2126455666");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_115);
      UnderlyingInstrument_115.insert(UnderlyingCountryOfIssue_115.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_115("LOCALMKTDATE_777379064");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_115);
      UnderlyingInstrument_115.insert(UnderlyingCouponPaymentDate_115.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_115;
      UnderlyingCouponRate_115.setString("6.050000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_115);
      UnderlyingInstrument_115.insert(UnderlyingCouponRate_115.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_115("STRING_337414641");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_115);
      UnderlyingInstrument_115.insert(UnderlyingCreditRating_115.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_115("CAN");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_115);
      UnderlyingInstrument_115.insert(UnderlyingCurrency_115.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_115;
      UnderlyingCurrentValue_115.setString("17843687");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_115);
      UnderlyingInstrument_115.insert(UnderlyingCurrentValue_115.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_115;
      UnderlyingDetachmentPoint_115.setString("15.320000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_115);
      UnderlyingInstrument_115.insert(UnderlyingDetachmentPoint_115.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_115;
      UnderlyingDirtyPrice_115.setString("17492779");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_115);
      UnderlyingInstrument_115.insert(UnderlyingDirtyPrice_115.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_115;
      UnderlyingEndPrice_115.setString("8954418");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_115);
      UnderlyingInstrument_115.insert(UnderlyingEndPrice_115.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_115;
      UnderlyingEndValue_115.setString("8184416");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_115);
      UnderlyingInstrument_115.insert(UnderlyingEndValue_115.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_115(156738701);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_115);
      UnderlyingInstrument_115.insert(UnderlyingExerciseStyle_115.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_115;
      UnderlyingFXRate_115.setString("7392093");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_115);
      UnderlyingInstrument_115.insert(UnderlyingFXRate_115.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_115('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_115);
      UnderlyingInstrument_115.insert(UnderlyingFXRateCalc_115.getString());
      FIX::UnderlyingFactor UnderlyingFactor_115;
      UnderlyingFactor_115.setString("11263195");
      noUnderlyings_1_1_0.set(UnderlyingFactor_115);
      UnderlyingInstrument_115.insert(UnderlyingFactor_115.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_115(773528015);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_115);
      UnderlyingInstrument_115.insert(UnderlyingFlowScheduleType_115.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_115("STRING_847925078");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_115);
      UnderlyingInstrument_115.insert(UnderlyingInstrRegistry_115.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_115("LOCALMKTDATE_608456736");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_115);
      UnderlyingInstrument_115.insert(UnderlyingIssueDate_115.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_115("STRING_1661806112");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_115);
      UnderlyingInstrument_115.insert(UnderlyingIssuer_115.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_115("STRING_237948219");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_115);
      UnderlyingInstrument_115.insert(UnderlyingLocaleOfIssue_115.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_115("LOCALMKTDATE_1427452481");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_115);
      UnderlyingInstrument_115.insert(UnderlyingMaturityDate_115.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_115("MONTHYEAR_1420791392");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_115);
      UnderlyingInstrument_115.insert(UnderlyingMaturityMonthYear_115.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_115("TZTIMEONLY_1566878823");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_115);
      UnderlyingInstrument_115.insert(UnderlyingMaturityTime_115.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_115;
      UnderlyingNotionalPercentageOutstanding_115.setString("78.440000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_115);
      UnderlyingInstrument_115.insert(UnderlyingNotionalPercentageOutstanding_115.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_115('5');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_115);
      UnderlyingInstrument_115.insert(UnderlyingOptAttribute_115.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_115;
      UnderlyingOriginalNotionalPercentageOutstanding_115.setString("24.180000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_115);
      UnderlyingInstrument_115.insert(UnderlyingOriginalNotionalPercentageOutstanding_115.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_115("STRING_796075816");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_115);
      UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasure_115.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_115;
      UnderlyingPriceUnitOfMeasureQty_115.setString("11485485");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_115);
      UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasureQty_115.getString());
      FIX::UnderlyingProduct UnderlyingProduct_115(1411098355);
      noUnderlyings_1_1_0.set(UnderlyingProduct_115);
      UnderlyingInstrument_115.insert(UnderlyingProduct_115.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_115(545432500);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_115);
      UnderlyingInstrument_115.insert(UnderlyingPutOrCall_115.getString());
      FIX::UnderlyingPx UnderlyingPx_115;
      UnderlyingPx_115.setString("12600327");
      noUnderlyings_1_1_0.set(UnderlyingPx_115);
      UnderlyingInstrument_115.insert(UnderlyingPx_115.getString());
      FIX::UnderlyingQty UnderlyingQty_115;
      UnderlyingQty_115.setString("13900703");
      noUnderlyings_1_1_0.set(UnderlyingQty_115);
      UnderlyingInstrument_115.insert(UnderlyingQty_115.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_115("LOCALMKTDATE_1322811564");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_115);
      UnderlyingInstrument_115.insert(UnderlyingRedemptionDate_115.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_115("STRING_1263103308");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_115);
      UnderlyingInstrument_115.insert(UnderlyingRepoCollateralSecurityType_115.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_115;
      UnderlyingRepurchaseRate_115.setString("50.140000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_115);
      UnderlyingInstrument_115.insert(UnderlyingRepurchaseRate_115.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_115(2108069123);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_115);
      UnderlyingInstrument_115.insert(UnderlyingRepurchaseTerm_115.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_115("STRING_1253369434");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_115);
      UnderlyingInstrument_115.insert(UnderlyingRestructuringType_115.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_115("STRING_1364370123");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityDesc_115.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_115("EXCHANGE_1896107007");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityExchange_115.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_115("STRING_855163777");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityID_115.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_115("STRING_112328292");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityIDSource_115.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_115("STRING_567065041");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_115);
      UnderlyingInstrument_115.insert(UnderlyingSecuritySubType_115.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_115("STRING_1011902478");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_115);
      UnderlyingInstrument_115.insert(UnderlyingSecurityType_115.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_115("STRING_851537662");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_115);
      UnderlyingInstrument_115.insert(UnderlyingSeniority_115.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_115("STRING_1200425000");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_115);
      UnderlyingInstrument_115.insert(UnderlyingSettlMethod_115.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_115(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_115);
      UnderlyingInstrument_115.insert(UnderlyingSettlementType_115.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_115;
      UnderlyingStartValue_115.setString("16250656");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_115);
      UnderlyingInstrument_115.insert(UnderlyingStartValue_115.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_115("STRING_2048350079");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_115);
      UnderlyingInstrument_115.insert(UnderlyingStateOrProvinceOfIssue_115.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_115("JPY");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_115);
      UnderlyingInstrument_115.insert(UnderlyingStrikeCurrency_115.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_115;
      UnderlyingStrikePrice_115.setString("1388146");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_115);
      UnderlyingInstrument_115.insert(UnderlyingStrikePrice_115.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_115("STRING_2026647549");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_115);
      UnderlyingInstrument_115.insert(UnderlyingSymbol_115.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_115("STRING_412695886");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_115);
      UnderlyingInstrument_115.insert(UnderlyingSymbolSfx_115.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_115("STRING_1705693473");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_115);
      UnderlyingInstrument_115.insert(UnderlyingTimeUnit_115.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_115("STRING_2008491745");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_115);
      UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasure_115.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_115;
      UnderlyingUnitOfMeasureQty_115.setString("9277799");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_115);
      UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasureQty_115.getString());
      all_values.push_back(UnderlyingInstrument_115);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_227;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_227("STRING_657083914");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_227);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltID_227.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_227("STRING_2076328461");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_227);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltIDSource_227.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_229;
        FIX::UnderlyingStipType UnderlyingStipType_229("STRING_1202516414");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_229);
        UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipType_229.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_229("STRING_1188877516");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_229);
        UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipValue_229.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_229);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_230;
        FIX::UnderlyingStipType UnderlyingStipType_230("STRING_80763675");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_230);
        UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipType_230.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_230("STRING_377844330");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_230);
        UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipValue_230.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_230);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_231;
        FIX::UnderlyingStipType UnderlyingStipType_231("STRING_304497177");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_231);
        UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipType_231.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_231("STRING_1808248690");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_231);
        UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipValue_231.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_231);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_222;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_222("STRING_1557866611");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_222);
        UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyID_222.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_222('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_222);
        UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyIDSource_222.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_222(87053165);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_222);
        UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyRole_222.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_222);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_445("STRING_1137463457");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_445);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubID_445.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_445(654118206);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_445);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubIDType_445.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_223;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_223("STRING_1277449219");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_223);
        UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyID_223.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_223('1');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_223);
        UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyIDSource_223.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_223(1854543207);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_223);
        UndlyInstrumentParties_NoUndlyInstrumentParties_223.insert(UnderlyingInstrumentPartyRole_223.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_223);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_446("STRING_1466583149");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_446);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubID_446.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_446(1755409638);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_446);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubIDType_446.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_447("STRING_1867382618");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_447);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubID_447.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_447(458487643);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_447);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubIDType_447.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_2;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_2;
    FIX::PrevClosePx PrevClosePx_14;
    PrevClosePx_14.setString("18942242");
    noRelatedSym_0_2.set(PrevClosePx_14);
    RFQReqGrp_NoRelatedSym_2.insert(PrevClosePx_14.getString());
    FIX::QuoteRequestType QuoteRequestType_5(2);
    noRelatedSym_0_2.set(QuoteRequestType_5);
    RFQReqGrp_NoRelatedSym_2.insert(QuoteRequestType_5.getString());
    FIX::QuoteType QuoteType_13(1);
    noRelatedSym_0_2.set(QuoteType_13);
    RFQReqGrp_NoRelatedSym_2.insert(QuoteType_13.getString());
    FIX::TradingSessionID TradingSessionID_90("STRING_2");
    noRelatedSym_0_2.set(TradingSessionID_90);
    RFQReqGrp_NoRelatedSym_2.insert(TradingSessionID_90.getString());
    FIX::TradingSessionSubID TradingSessionSubID_90("STRING_4");
    noRelatedSym_0_2.set(TradingSessionSubID_90);
    RFQReqGrp_NoRelatedSym_2.insert(TradingSessionSubID_90.getString());
    all_values.push_back(RFQReqGrp_NoRelatedSym_2);
    all_compo_names.insert("RFQReqGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_121;
      FIX::EncodedLegIssuer EncodedLegIssuer_121("DATA_879512708");
      noLegs_2_1_0.set(EncodedLegIssuer_121);
      InstrumentLeg_121.insert(EncodedLegIssuer_121.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_121(117154882);
      noLegs_2_1_0.set(EncodedLegIssuerLen_121);
      InstrumentLeg_121.insert(EncodedLegIssuerLen_121.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_121("DATA_1727808294");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_121);
      InstrumentLeg_121.insert(EncodedLegSecurityDesc_121.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_121(1717689659);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_121);
      InstrumentLeg_121.insert(EncodedLegSecurityDescLen_121.getString());
      FIX::LegCFICode LegCFICode_121("STRING_1319671296");
      noLegs_2_1_0.set(LegCFICode_121);
      InstrumentLeg_121.insert(LegCFICode_121.getString());
      FIX::LegContractMultiplier LegContractMultiplier_121;
      LegContractMultiplier_121.setString("7692021");
      noLegs_2_1_0.set(LegContractMultiplier_121);
      InstrumentLeg_121.insert(LegContractMultiplier_121.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_121(1798453334);
      noLegs_2_1_0.set(LegContractMultiplierUnit_121);
      InstrumentLeg_121.insert(LegContractMultiplierUnit_121.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_121("MONTHYEAR_1697515627");
      noLegs_2_1_0.set(LegContractSettlMonth_121);
      InstrumentLeg_121.insert(LegContractSettlMonth_121.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_121("COUNTRY_1073699340");
      noLegs_2_1_0.set(LegCountryOfIssue_121);
      InstrumentLeg_121.insert(LegCountryOfIssue_121.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_121("LOCALMKTDATE_1459218376");
      noLegs_2_1_0.set(LegCouponPaymentDate_121);
      InstrumentLeg_121.insert(LegCouponPaymentDate_121.getString());
      FIX::LegCouponRate LegCouponRate_121;
      LegCouponRate_121.setString("54.330000");
      noLegs_2_1_0.set(LegCouponRate_121);
      InstrumentLeg_121.insert(LegCouponRate_121.getString());
      FIX::LegCreditRating LegCreditRating_121("STRING_484082303");
      noLegs_2_1_0.set(LegCreditRating_121);
      InstrumentLeg_121.insert(LegCreditRating_121.getString());
      FIX::LegCurrency LegCurrency_121("JPY");
      noLegs_2_1_0.set(LegCurrency_121);
      InstrumentLeg_121.insert(LegCurrency_121.getString());
      FIX::LegDatedDate LegDatedDate_121("LOCALMKTDATE_749629043");
      noLegs_2_1_0.set(LegDatedDate_121);
      InstrumentLeg_121.insert(LegDatedDate_121.getString());
      FIX::LegExerciseStyle LegExerciseStyle_121(1474333350);
      noLegs_2_1_0.set(LegExerciseStyle_121);
      InstrumentLeg_121.insert(LegExerciseStyle_121.getString());
      FIX::LegFactor LegFactor_121;
      LegFactor_121.setString("6296331");
      noLegs_2_1_0.set(LegFactor_121);
      InstrumentLeg_121.insert(LegFactor_121.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_121(2027078262);
      noLegs_2_1_0.set(LegFlowScheduleType_121);
      InstrumentLeg_121.insert(LegFlowScheduleType_121.getString());
      FIX::LegInstrRegistry LegInstrRegistry_121("STRING_1315850822");
      noLegs_2_1_0.set(LegInstrRegistry_121);
      InstrumentLeg_121.insert(LegInstrRegistry_121.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_121("LOCALMKTDATE_336692716");
      noLegs_2_1_0.set(LegInterestAccrualDate_121);
      InstrumentLeg_121.insert(LegInterestAccrualDate_121.getString());
      FIX::LegIssueDate LegIssueDate_121("LOCALMKTDATE_1147782165");
      noLegs_2_1_0.set(LegIssueDate_121);
      InstrumentLeg_121.insert(LegIssueDate_121.getString());
      FIX::LegIssuer LegIssuer_121("STRING_634950323");
      noLegs_2_1_0.set(LegIssuer_121);
      InstrumentLeg_121.insert(LegIssuer_121.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_121("STRING_2092102354");
      noLegs_2_1_0.set(LegLocaleOfIssue_121);
      InstrumentLeg_121.insert(LegLocaleOfIssue_121.getString());
      FIX::LegMaturityDate LegMaturityDate_121("LOCALMKTDATE_867681135");
      noLegs_2_1_0.set(LegMaturityDate_121);
      InstrumentLeg_121.insert(LegMaturityDate_121.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_121("MONTHYEAR_1093437966");
      noLegs_2_1_0.set(LegMaturityMonthYear_121);
      InstrumentLeg_121.insert(LegMaturityMonthYear_121.getString());
      FIX::LegMaturityTime LegMaturityTime_121("TZTIMEONLY_1838842994");
      noLegs_2_1_0.set(LegMaturityTime_121);
      InstrumentLeg_121.insert(LegMaturityTime_121.getString());
      FIX::LegOptAttribute LegOptAttribute_121('4');
      noLegs_2_1_0.set(LegOptAttribute_121);
      InstrumentLeg_121.insert(LegOptAttribute_121.getString());
      FIX::LegOptionRatio LegOptionRatio_121;
      LegOptionRatio_121.setString("19646214");
      noLegs_2_1_0.set(LegOptionRatio_121);
      InstrumentLeg_121.insert(LegOptionRatio_121.getString());
      FIX::LegPool LegPool_121("STRING_1143793459");
      noLegs_2_1_0.set(LegPool_121);
      InstrumentLeg_121.insert(LegPool_121.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_121("STRING_2074298622");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_121);
      InstrumentLeg_121.insert(LegPriceUnitOfMeasure_121.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_121;
      LegPriceUnitOfMeasureQty_121.setString("16161013");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_121);
      InstrumentLeg_121.insert(LegPriceUnitOfMeasureQty_121.getString());
      FIX::LegProduct LegProduct_121(2023306167);
      noLegs_2_1_0.set(LegProduct_121);
      InstrumentLeg_121.insert(LegProduct_121.getString());
      FIX::LegPutOrCall LegPutOrCall_121(43969857);
      noLegs_2_1_0.set(LegPutOrCall_121);
      InstrumentLeg_121.insert(LegPutOrCall_121.getString());
      FIX::LegRatioQty LegRatioQty_121;
      LegRatioQty_121.setString("11964259");
      noLegs_2_1_0.set(LegRatioQty_121);
      InstrumentLeg_121.insert(LegRatioQty_121.getString());
      FIX::LegRedemptionDate LegRedemptionDate_121("LOCALMKTDATE_1593512178");
      noLegs_2_1_0.set(LegRedemptionDate_121);
      InstrumentLeg_121.insert(LegRedemptionDate_121.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_121("STRING_1363641153");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_121);
      InstrumentLeg_121.insert(LegRepoCollateralSecurityType_121.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_121;
      LegRepurchaseRate_121.setString("81.380000");
      noLegs_2_1_0.set(LegRepurchaseRate_121);
      InstrumentLeg_121.insert(LegRepurchaseRate_121.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_121(1244481865);
      noLegs_2_1_0.set(LegRepurchaseTerm_121);
      InstrumentLeg_121.insert(LegRepurchaseTerm_121.getString());
      FIX::LegSecurityDesc LegSecurityDesc_121("STRING_913673132");
      noLegs_2_1_0.set(LegSecurityDesc_121);
      InstrumentLeg_121.insert(LegSecurityDesc_121.getString());
      FIX::LegSecurityExchange LegSecurityExchange_121("EXCHANGE_891843830");
      noLegs_2_1_0.set(LegSecurityExchange_121);
      InstrumentLeg_121.insert(LegSecurityExchange_121.getString());
      FIX::LegSecurityID LegSecurityID_121("STRING_556216593");
      noLegs_2_1_0.set(LegSecurityID_121);
      InstrumentLeg_121.insert(LegSecurityID_121.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_121("STRING_802134917");
      noLegs_2_1_0.set(LegSecurityIDSource_121);
      InstrumentLeg_121.insert(LegSecurityIDSource_121.getString());
      FIX::LegSecuritySubType LegSecuritySubType_121("STRING_1375926133");
      noLegs_2_1_0.set(LegSecuritySubType_121);
      InstrumentLeg_121.insert(LegSecuritySubType_121.getString());
      FIX::LegSecurityType LegSecurityType_121("STRING_893086487");
      noLegs_2_1_0.set(LegSecurityType_121);
      InstrumentLeg_121.insert(LegSecurityType_121.getString());
      FIX::LegSide LegSide_121('7');
      noLegs_2_1_0.set(LegSide_121);
      InstrumentLeg_121.insert(LegSide_121.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_121("STRING_2125555176");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_121);
      InstrumentLeg_121.insert(LegStateOrProvinceOfIssue_121.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_121("CAN");
      noLegs_2_1_0.set(LegStrikeCurrency_121);
      InstrumentLeg_121.insert(LegStrikeCurrency_121.getString());
      FIX::LegStrikePrice LegStrikePrice_121;
      LegStrikePrice_121.setString("20051497");
      noLegs_2_1_0.set(LegStrikePrice_121);
      InstrumentLeg_121.insert(LegStrikePrice_121.getString());
      FIX::LegSymbol LegSymbol_121("STRING_1535787011");
      noLegs_2_1_0.set(LegSymbol_121);
      InstrumentLeg_121.insert(LegSymbol_121.getString());
      FIX::LegSymbolSfx LegSymbolSfx_121("STRING_1743975741");
      noLegs_2_1_0.set(LegSymbolSfx_121);
      InstrumentLeg_121.insert(LegSymbolSfx_121.getString());
      FIX::LegTimeUnit LegTimeUnit_121("STRING_1005448308");
      noLegs_2_1_0.set(LegTimeUnit_121);
      InstrumentLeg_121.insert(LegTimeUnit_121.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_121("STRING_23253686");
      noLegs_2_1_0.set(LegUnitOfMeasure_121);
      InstrumentLeg_121.insert(LegUnitOfMeasure_121.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_121;
      LegUnitOfMeasureQty_121.setString("16885944");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_121);
      InstrumentLeg_121.insert(LegUnitOfMeasureQty_121.getString());
      all_values.push_back(InstrumentLeg_121);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_245;
        FIX::LegSecurityAltID LegSecurityAltID_245("STRING_1116691652");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_245);
        LegSecAltIDGrp_NoLegSecurityAltID_245.insert(LegSecurityAltID_245.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_245("STRING_1379953793");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_245);
        LegSecAltIDGrp_NoLegSecurityAltID_245.insert(LegSecurityAltIDSource_245.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_245);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_122;
      FIX::EncodedLegIssuer EncodedLegIssuer_122("DATA_192389801");
      noLegs_2_1_1.set(EncodedLegIssuer_122);
      InstrumentLeg_122.insert(EncodedLegIssuer_122.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_122(933829499);
      noLegs_2_1_1.set(EncodedLegIssuerLen_122);
      InstrumentLeg_122.insert(EncodedLegIssuerLen_122.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_122("DATA_376263604");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_122);
      InstrumentLeg_122.insert(EncodedLegSecurityDesc_122.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_122(119204775);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_122);
      InstrumentLeg_122.insert(EncodedLegSecurityDescLen_122.getString());
      FIX::LegCFICode LegCFICode_122("STRING_402447180");
      noLegs_2_1_1.set(LegCFICode_122);
      InstrumentLeg_122.insert(LegCFICode_122.getString());
      FIX::LegContractMultiplier LegContractMultiplier_122;
      LegContractMultiplier_122.setString("2520861");
      noLegs_2_1_1.set(LegContractMultiplier_122);
      InstrumentLeg_122.insert(LegContractMultiplier_122.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_122(163174632);
      noLegs_2_1_1.set(LegContractMultiplierUnit_122);
      InstrumentLeg_122.insert(LegContractMultiplierUnit_122.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_122("MONTHYEAR_1598873155");
      noLegs_2_1_1.set(LegContractSettlMonth_122);
      InstrumentLeg_122.insert(LegContractSettlMonth_122.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_122("COUNTRY_1845598302");
      noLegs_2_1_1.set(LegCountryOfIssue_122);
      InstrumentLeg_122.insert(LegCountryOfIssue_122.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_122("LOCALMKTDATE_1526815786");
      noLegs_2_1_1.set(LegCouponPaymentDate_122);
      InstrumentLeg_122.insert(LegCouponPaymentDate_122.getString());
      FIX::LegCouponRate LegCouponRate_122;
      LegCouponRate_122.setString("76.450000");
      noLegs_2_1_1.set(LegCouponRate_122);
      InstrumentLeg_122.insert(LegCouponRate_122.getString());
      FIX::LegCreditRating LegCreditRating_122("STRING_942596519");
      noLegs_2_1_1.set(LegCreditRating_122);
      InstrumentLeg_122.insert(LegCreditRating_122.getString());
      FIX::LegCurrency LegCurrency_122("CHF");
      noLegs_2_1_1.set(LegCurrency_122);
      InstrumentLeg_122.insert(LegCurrency_122.getString());
      FIX::LegDatedDate LegDatedDate_122("LOCALMKTDATE_1498813112");
      noLegs_2_1_1.set(LegDatedDate_122);
      InstrumentLeg_122.insert(LegDatedDate_122.getString());
      FIX::LegExerciseStyle LegExerciseStyle_122(1095140188);
      noLegs_2_1_1.set(LegExerciseStyle_122);
      InstrumentLeg_122.insert(LegExerciseStyle_122.getString());
      FIX::LegFactor LegFactor_122;
      LegFactor_122.setString("15373039");
      noLegs_2_1_1.set(LegFactor_122);
      InstrumentLeg_122.insert(LegFactor_122.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_122(244415951);
      noLegs_2_1_1.set(LegFlowScheduleType_122);
      InstrumentLeg_122.insert(LegFlowScheduleType_122.getString());
      FIX::LegInstrRegistry LegInstrRegistry_122("STRING_1872790056");
      noLegs_2_1_1.set(LegInstrRegistry_122);
      InstrumentLeg_122.insert(LegInstrRegistry_122.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_122("LOCALMKTDATE_1515375488");
      noLegs_2_1_1.set(LegInterestAccrualDate_122);
      InstrumentLeg_122.insert(LegInterestAccrualDate_122.getString());
      FIX::LegIssueDate LegIssueDate_122("LOCALMKTDATE_464352141");
      noLegs_2_1_1.set(LegIssueDate_122);
      InstrumentLeg_122.insert(LegIssueDate_122.getString());
      FIX::LegIssuer LegIssuer_122("STRING_1132589433");
      noLegs_2_1_1.set(LegIssuer_122);
      InstrumentLeg_122.insert(LegIssuer_122.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_122("STRING_1373041631");
      noLegs_2_1_1.set(LegLocaleOfIssue_122);
      InstrumentLeg_122.insert(LegLocaleOfIssue_122.getString());
      FIX::LegMaturityDate LegMaturityDate_122("LOCALMKTDATE_2000139152");
      noLegs_2_1_1.set(LegMaturityDate_122);
      InstrumentLeg_122.insert(LegMaturityDate_122.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_122("MONTHYEAR_729081526");
      noLegs_2_1_1.set(LegMaturityMonthYear_122);
      InstrumentLeg_122.insert(LegMaturityMonthYear_122.getString());
      FIX::LegMaturityTime LegMaturityTime_122("TZTIMEONLY_231006291");
      noLegs_2_1_1.set(LegMaturityTime_122);
      InstrumentLeg_122.insert(LegMaturityTime_122.getString());
      FIX::LegOptAttribute LegOptAttribute_122('2');
      noLegs_2_1_1.set(LegOptAttribute_122);
      InstrumentLeg_122.insert(LegOptAttribute_122.getString());
      FIX::LegOptionRatio LegOptionRatio_122;
      LegOptionRatio_122.setString("2701923");
      noLegs_2_1_1.set(LegOptionRatio_122);
      InstrumentLeg_122.insert(LegOptionRatio_122.getString());
      FIX::LegPool LegPool_122("STRING_2104135734");
      noLegs_2_1_1.set(LegPool_122);
      InstrumentLeg_122.insert(LegPool_122.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_122("STRING_992600843");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_122);
      InstrumentLeg_122.insert(LegPriceUnitOfMeasure_122.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_122;
      LegPriceUnitOfMeasureQty_122.setString("16501461");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_122);
      InstrumentLeg_122.insert(LegPriceUnitOfMeasureQty_122.getString());
      FIX::LegProduct LegProduct_122(149041887);
      noLegs_2_1_1.set(LegProduct_122);
      InstrumentLeg_122.insert(LegProduct_122.getString());
      FIX::LegPutOrCall LegPutOrCall_122(1926430343);
      noLegs_2_1_1.set(LegPutOrCall_122);
      InstrumentLeg_122.insert(LegPutOrCall_122.getString());
      FIX::LegRatioQty LegRatioQty_122;
      LegRatioQty_122.setString("20264097");
      noLegs_2_1_1.set(LegRatioQty_122);
      InstrumentLeg_122.insert(LegRatioQty_122.getString());
      FIX::LegRedemptionDate LegRedemptionDate_122("LOCALMKTDATE_268246663");
      noLegs_2_1_1.set(LegRedemptionDate_122);
      InstrumentLeg_122.insert(LegRedemptionDate_122.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_122("STRING_181393875");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_122);
      InstrumentLeg_122.insert(LegRepoCollateralSecurityType_122.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_122;
      LegRepurchaseRate_122.setString("21.970000");
      noLegs_2_1_1.set(LegRepurchaseRate_122);
      InstrumentLeg_122.insert(LegRepurchaseRate_122.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_122(431421295);
      noLegs_2_1_1.set(LegRepurchaseTerm_122);
      InstrumentLeg_122.insert(LegRepurchaseTerm_122.getString());
      FIX::LegSecurityDesc LegSecurityDesc_122("STRING_1780267030");
      noLegs_2_1_1.set(LegSecurityDesc_122);
      InstrumentLeg_122.insert(LegSecurityDesc_122.getString());
      FIX::LegSecurityExchange LegSecurityExchange_122("EXCHANGE_1976610499");
      noLegs_2_1_1.set(LegSecurityExchange_122);
      InstrumentLeg_122.insert(LegSecurityExchange_122.getString());
      FIX::LegSecurityID LegSecurityID_122("STRING_1958237081");
      noLegs_2_1_1.set(LegSecurityID_122);
      InstrumentLeg_122.insert(LegSecurityID_122.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_122("STRING_1049801027");
      noLegs_2_1_1.set(LegSecurityIDSource_122);
      InstrumentLeg_122.insert(LegSecurityIDSource_122.getString());
      FIX::LegSecuritySubType LegSecuritySubType_122("STRING_771723370");
      noLegs_2_1_1.set(LegSecuritySubType_122);
      InstrumentLeg_122.insert(LegSecuritySubType_122.getString());
      FIX::LegSecurityType LegSecurityType_122("STRING_103758704");
      noLegs_2_1_1.set(LegSecurityType_122);
      InstrumentLeg_122.insert(LegSecurityType_122.getString());
      FIX::LegSide LegSide_122('1');
      noLegs_2_1_1.set(LegSide_122);
      InstrumentLeg_122.insert(LegSide_122.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_122("STRING_123052835");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_122);
      InstrumentLeg_122.insert(LegStateOrProvinceOfIssue_122.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_122("JPY");
      noLegs_2_1_1.set(LegStrikeCurrency_122);
      InstrumentLeg_122.insert(LegStrikeCurrency_122.getString());
      FIX::LegStrikePrice LegStrikePrice_122;
      LegStrikePrice_122.setString("3674687");
      noLegs_2_1_1.set(LegStrikePrice_122);
      InstrumentLeg_122.insert(LegStrikePrice_122.getString());
      FIX::LegSymbol LegSymbol_122("STRING_924205300");
      noLegs_2_1_1.set(LegSymbol_122);
      InstrumentLeg_122.insert(LegSymbol_122.getString());
      FIX::LegSymbolSfx LegSymbolSfx_122("STRING_2116374654");
      noLegs_2_1_1.set(LegSymbolSfx_122);
      InstrumentLeg_122.insert(LegSymbolSfx_122.getString());
      FIX::LegTimeUnit LegTimeUnit_122("STRING_831820927");
      noLegs_2_1_1.set(LegTimeUnit_122);
      InstrumentLeg_122.insert(LegTimeUnit_122.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_122("STRING_2056794733");
      noLegs_2_1_1.set(LegUnitOfMeasure_122);
      InstrumentLeg_122.insert(LegUnitOfMeasure_122.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_122;
      LegUnitOfMeasureQty_122.setString("13419326");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_122);
      InstrumentLeg_122.insert(LegUnitOfMeasureQty_122.getString());
      all_values.push_back(InstrumentLeg_122);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_246;
        FIX::LegSecurityAltID LegSecurityAltID_246("STRING_638392611");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_246);
        LegSecAltIDGrp_NoLegSecurityAltID_246.insert(LegSecurityAltID_246.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_246("STRING_1572938929");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_246);
        LegSecAltIDGrp_NoLegSecurityAltID_246.insert(LegSecurityAltIDSource_246.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_246);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_247;
        FIX::LegSecurityAltID LegSecurityAltID_247("STRING_560385623");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltID_247);
        LegSecAltIDGrp_NoLegSecurityAltID_247.insert(LegSecurityAltID_247.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_247("STRING_908584936");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltIDSource_247);
        LegSecAltIDGrp_NoLegSecurityAltID_247.insert(LegSecurityAltIDSource_247.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_247);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_248;
        FIX::LegSecurityAltID LegSecurityAltID_248("STRING_1529591016");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltID_248);
        LegSecAltIDGrp_NoLegSecurityAltID_248.insert(LegSecurityAltID_248.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_248("STRING_1552986466");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltIDSource_248);
        LegSecAltIDGrp_NoLegSecurityAltID_248.insert(LegSecurityAltIDSource_248.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_248);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_2_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_123;
      FIX::EncodedLegIssuer EncodedLegIssuer_123("DATA_411247406");
      noLegs_2_1_2.set(EncodedLegIssuer_123);
      InstrumentLeg_123.insert(EncodedLegIssuer_123.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_123(1678632903);
      noLegs_2_1_2.set(EncodedLegIssuerLen_123);
      InstrumentLeg_123.insert(EncodedLegIssuerLen_123.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_123("DATA_1331933161");
      noLegs_2_1_2.set(EncodedLegSecurityDesc_123);
      InstrumentLeg_123.insert(EncodedLegSecurityDesc_123.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_123(290173480);
      noLegs_2_1_2.set(EncodedLegSecurityDescLen_123);
      InstrumentLeg_123.insert(EncodedLegSecurityDescLen_123.getString());
      FIX::LegCFICode LegCFICode_123("STRING_1946879566");
      noLegs_2_1_2.set(LegCFICode_123);
      InstrumentLeg_123.insert(LegCFICode_123.getString());
      FIX::LegContractMultiplier LegContractMultiplier_123;
      LegContractMultiplier_123.setString("15133270");
      noLegs_2_1_2.set(LegContractMultiplier_123);
      InstrumentLeg_123.insert(LegContractMultiplier_123.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_123(421185677);
      noLegs_2_1_2.set(LegContractMultiplierUnit_123);
      InstrumentLeg_123.insert(LegContractMultiplierUnit_123.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_123("MONTHYEAR_230817214");
      noLegs_2_1_2.set(LegContractSettlMonth_123);
      InstrumentLeg_123.insert(LegContractSettlMonth_123.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_123("COUNTRY_1146110418");
      noLegs_2_1_2.set(LegCountryOfIssue_123);
      InstrumentLeg_123.insert(LegCountryOfIssue_123.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_123("LOCALMKTDATE_250312529");
      noLegs_2_1_2.set(LegCouponPaymentDate_123);
      InstrumentLeg_123.insert(LegCouponPaymentDate_123.getString());
      FIX::LegCouponRate LegCouponRate_123;
      LegCouponRate_123.setString("6.470000");
      noLegs_2_1_2.set(LegCouponRate_123);
      InstrumentLeg_123.insert(LegCouponRate_123.getString());
      FIX::LegCreditRating LegCreditRating_123("STRING_48427797");
      noLegs_2_1_2.set(LegCreditRating_123);
      InstrumentLeg_123.insert(LegCreditRating_123.getString());
      FIX::LegCurrency LegCurrency_123("CHF");
      noLegs_2_1_2.set(LegCurrency_123);
      InstrumentLeg_123.insert(LegCurrency_123.getString());
      FIX::LegDatedDate LegDatedDate_123("LOCALMKTDATE_1259606651");
      noLegs_2_1_2.set(LegDatedDate_123);
      InstrumentLeg_123.insert(LegDatedDate_123.getString());
      FIX::LegExerciseStyle LegExerciseStyle_123(1145088734);
      noLegs_2_1_2.set(LegExerciseStyle_123);
      InstrumentLeg_123.insert(LegExerciseStyle_123.getString());
      FIX::LegFactor LegFactor_123;
      LegFactor_123.setString("13442282");
      noLegs_2_1_2.set(LegFactor_123);
      InstrumentLeg_123.insert(LegFactor_123.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_123(1860605817);
      noLegs_2_1_2.set(LegFlowScheduleType_123);
      InstrumentLeg_123.insert(LegFlowScheduleType_123.getString());
      FIX::LegInstrRegistry LegInstrRegistry_123("STRING_1512557521");
      noLegs_2_1_2.set(LegInstrRegistry_123);
      InstrumentLeg_123.insert(LegInstrRegistry_123.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_123("LOCALMKTDATE_120949895");
      noLegs_2_1_2.set(LegInterestAccrualDate_123);
      InstrumentLeg_123.insert(LegInterestAccrualDate_123.getString());
      FIX::LegIssueDate LegIssueDate_123("LOCALMKTDATE_1829496824");
      noLegs_2_1_2.set(LegIssueDate_123);
      InstrumentLeg_123.insert(LegIssueDate_123.getString());
      FIX::LegIssuer LegIssuer_123("STRING_196894800");
      noLegs_2_1_2.set(LegIssuer_123);
      InstrumentLeg_123.insert(LegIssuer_123.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_123("STRING_30260980");
      noLegs_2_1_2.set(LegLocaleOfIssue_123);
      InstrumentLeg_123.insert(LegLocaleOfIssue_123.getString());
      FIX::LegMaturityDate LegMaturityDate_123("LOCALMKTDATE_1023945814");
      noLegs_2_1_2.set(LegMaturityDate_123);
      InstrumentLeg_123.insert(LegMaturityDate_123.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_123("MONTHYEAR_881371232");
      noLegs_2_1_2.set(LegMaturityMonthYear_123);
      InstrumentLeg_123.insert(LegMaturityMonthYear_123.getString());
      FIX::LegMaturityTime LegMaturityTime_123("TZTIMEONLY_668653591");
      noLegs_2_1_2.set(LegMaturityTime_123);
      InstrumentLeg_123.insert(LegMaturityTime_123.getString());
      FIX::LegOptAttribute LegOptAttribute_123('4');
      noLegs_2_1_2.set(LegOptAttribute_123);
      InstrumentLeg_123.insert(LegOptAttribute_123.getString());
      FIX::LegOptionRatio LegOptionRatio_123;
      LegOptionRatio_123.setString("14417568");
      noLegs_2_1_2.set(LegOptionRatio_123);
      InstrumentLeg_123.insert(LegOptionRatio_123.getString());
      FIX::LegPool LegPool_123("STRING_1577238527");
      noLegs_2_1_2.set(LegPool_123);
      InstrumentLeg_123.insert(LegPool_123.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_123("STRING_1978992111");
      noLegs_2_1_2.set(LegPriceUnitOfMeasure_123);
      InstrumentLeg_123.insert(LegPriceUnitOfMeasure_123.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_123;
      LegPriceUnitOfMeasureQty_123.setString("8472596");
      noLegs_2_1_2.set(LegPriceUnitOfMeasureQty_123);
      InstrumentLeg_123.insert(LegPriceUnitOfMeasureQty_123.getString());
      FIX::LegProduct LegProduct_123(1988485933);
      noLegs_2_1_2.set(LegProduct_123);
      InstrumentLeg_123.insert(LegProduct_123.getString());
      FIX::LegPutOrCall LegPutOrCall_123(1510141367);
      noLegs_2_1_2.set(LegPutOrCall_123);
      InstrumentLeg_123.insert(LegPutOrCall_123.getString());
      FIX::LegRatioQty LegRatioQty_123;
      LegRatioQty_123.setString("317091");
      noLegs_2_1_2.set(LegRatioQty_123);
      InstrumentLeg_123.insert(LegRatioQty_123.getString());
      FIX::LegRedemptionDate LegRedemptionDate_123("LOCALMKTDATE_131175765");
      noLegs_2_1_2.set(LegRedemptionDate_123);
      InstrumentLeg_123.insert(LegRedemptionDate_123.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_123("STRING_1309537285");
      noLegs_2_1_2.set(LegRepoCollateralSecurityType_123);
      InstrumentLeg_123.insert(LegRepoCollateralSecurityType_123.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_123;
      LegRepurchaseRate_123.setString("62.240000");
      noLegs_2_1_2.set(LegRepurchaseRate_123);
      InstrumentLeg_123.insert(LegRepurchaseRate_123.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_123(552361443);
      noLegs_2_1_2.set(LegRepurchaseTerm_123);
      InstrumentLeg_123.insert(LegRepurchaseTerm_123.getString());
      FIX::LegSecurityDesc LegSecurityDesc_123("STRING_1540354499");
      noLegs_2_1_2.set(LegSecurityDesc_123);
      InstrumentLeg_123.insert(LegSecurityDesc_123.getString());
      FIX::LegSecurityExchange LegSecurityExchange_123("EXCHANGE_543662994");
      noLegs_2_1_2.set(LegSecurityExchange_123);
      InstrumentLeg_123.insert(LegSecurityExchange_123.getString());
      FIX::LegSecurityID LegSecurityID_123("STRING_802673972");
      noLegs_2_1_2.set(LegSecurityID_123);
      InstrumentLeg_123.insert(LegSecurityID_123.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_123("STRING_1581925147");
      noLegs_2_1_2.set(LegSecurityIDSource_123);
      InstrumentLeg_123.insert(LegSecurityIDSource_123.getString());
      FIX::LegSecuritySubType LegSecuritySubType_123("STRING_592090792");
      noLegs_2_1_2.set(LegSecuritySubType_123);
      InstrumentLeg_123.insert(LegSecuritySubType_123.getString());
      FIX::LegSecurityType LegSecurityType_123("STRING_1824709871");
      noLegs_2_1_2.set(LegSecurityType_123);
      InstrumentLeg_123.insert(LegSecurityType_123.getString());
      FIX::LegSide LegSide_123('1');
      noLegs_2_1_2.set(LegSide_123);
      InstrumentLeg_123.insert(LegSide_123.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_123("STRING_1851697443");
      noLegs_2_1_2.set(LegStateOrProvinceOfIssue_123);
      InstrumentLeg_123.insert(LegStateOrProvinceOfIssue_123.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_123("USD");
      noLegs_2_1_2.set(LegStrikeCurrency_123);
      InstrumentLeg_123.insert(LegStrikeCurrency_123.getString());
      FIX::LegStrikePrice LegStrikePrice_123;
      LegStrikePrice_123.setString("15648196");
      noLegs_2_1_2.set(LegStrikePrice_123);
      InstrumentLeg_123.insert(LegStrikePrice_123.getString());
      FIX::LegSymbol LegSymbol_123("STRING_187388831");
      noLegs_2_1_2.set(LegSymbol_123);
      InstrumentLeg_123.insert(LegSymbol_123.getString());
      FIX::LegSymbolSfx LegSymbolSfx_123("STRING_1044948989");
      noLegs_2_1_2.set(LegSymbolSfx_123);
      InstrumentLeg_123.insert(LegSymbolSfx_123.getString());
      FIX::LegTimeUnit LegTimeUnit_123("STRING_1246832789");
      noLegs_2_1_2.set(LegTimeUnit_123);
      InstrumentLeg_123.insert(LegTimeUnit_123.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_123("STRING_384283631");
      noLegs_2_1_2.set(LegUnitOfMeasure_123);
      InstrumentLeg_123.insert(LegUnitOfMeasure_123.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_123;
      LegUnitOfMeasureQty_123.setString("10752099");
      noLegs_2_1_2.set(LegUnitOfMeasureQty_123);
      InstrumentLeg_123.insert(LegUnitOfMeasureQty_123.getString());
      all_values.push_back(InstrumentLeg_123);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_249;
        FIX::LegSecurityAltID LegSecurityAltID_249("STRING_1265654864");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltID_249);
        LegSecAltIDGrp_NoLegSecurityAltID_249.insert(LegSecurityAltID_249.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_249("STRING_1743863561");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltIDSource_249);
        LegSecAltIDGrp_NoLegSecurityAltID_249.insert(LegSecurityAltIDSource_249.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_249);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_2.addGroup(noLegSecurityAltID_2_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_250;
        FIX::LegSecurityAltID LegSecurityAltID_250("STRING_572696050");
        noLegSecurityAltID_2_2_2_1.set(LegSecurityAltID_250);
        LegSecAltIDGrp_NoLegSecurityAltID_250.insert(LegSecurityAltID_250.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_250("STRING_559928071");
        noLegSecurityAltID_2_2_2_1.set(LegSecurityAltIDSource_250);
        LegSecAltIDGrp_NoLegSecurityAltID_250.insert(LegSecurityAltIDSource_250.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_250);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_2.addGroup(noLegSecurityAltID_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_2);
    }
    // Instrument
    multiset<string> Instrument_77;
    FIX::AttachmentPoint AttachmentPoint_77;
    AttachmentPoint_77.setString("84.410000");
    noRelatedSym_0_2.set(AttachmentPoint_77);
    Instrument_77.insert(AttachmentPoint_77.getString());
    FIX::CFICode CFICode_77("STRING_404204514");
    noRelatedSym_0_2.set(CFICode_77);
    Instrument_77.insert(CFICode_77.getString());
    FIX::CPProgram CPProgram_77(99);
    noRelatedSym_0_2.set(CPProgram_77);
    Instrument_77.insert(CPProgram_77.getString());
    FIX::CPRegType CPRegType_77("STRING_1014620726");
    noRelatedSym_0_2.set(CPRegType_77);
    Instrument_77.insert(CPRegType_77.getString());
    FIX::CapPrice CapPrice_77;
    CapPrice_77.setString("19143458");
    noRelatedSym_0_2.set(CapPrice_77);
    Instrument_77.insert(CapPrice_77.getString());
    FIX::ContractMultiplier ContractMultiplier_77;
    ContractMultiplier_77.setString("14388969");
    noRelatedSym_0_2.set(ContractMultiplier_77);
    Instrument_77.insert(ContractMultiplier_77.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_77(0);
    noRelatedSym_0_2.set(ContractMultiplierUnit_77);
    Instrument_77.insert(ContractMultiplierUnit_77.getString());
    FIX::ContractSettlMonth ContractSettlMonth_77("MONTHYEAR_1076399518");
    noRelatedSym_0_2.set(ContractSettlMonth_77);
    Instrument_77.insert(ContractSettlMonth_77.getString());
    FIX::CountryOfIssue CountryOfIssue_77("COUNTRY_836449509");
    noRelatedSym_0_2.set(CountryOfIssue_77);
    Instrument_77.insert(CountryOfIssue_77.getString());
    FIX::CouponPaymentDate CouponPaymentDate_77("LOCALMKTDATE_1698157935");
    noRelatedSym_0_2.set(CouponPaymentDate_77);
    Instrument_77.insert(CouponPaymentDate_77.getString());
    FIX::CouponRate CouponRate_77;
    CouponRate_77.setString("3.700000");
    noRelatedSym_0_2.set(CouponRate_77);
    Instrument_77.insert(CouponRate_77.getString());
    FIX::CreditRating CreditRating_77("STRING_1380112503");
    noRelatedSym_0_2.set(CreditRating_77);
    Instrument_77.insert(CreditRating_77.getString());
    FIX::DatedDate DatedDate_77("LOCALMKTDATE_353348259");
    noRelatedSym_0_2.set(DatedDate_77);
    Instrument_77.insert(DatedDate_77.getString());
    FIX::DetachmentPoint DetachmentPoint_77;
    DetachmentPoint_77.setString("55.170000");
    noRelatedSym_0_2.set(DetachmentPoint_77);
    Instrument_77.insert(DetachmentPoint_77.getString());
    FIX::EncodedIssuer EncodedIssuer_77("DATA_1972203295");
    noRelatedSym_0_2.set(EncodedIssuer_77);
    Instrument_77.insert(EncodedIssuer_77.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_77(30574482);
    noRelatedSym_0_2.set(EncodedIssuerLen_77);
    Instrument_77.insert(EncodedIssuerLen_77.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_77("DATA_1630966367");
    noRelatedSym_0_2.set(EncodedSecurityDesc_77);
    Instrument_77.insert(EncodedSecurityDesc_77.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_77(1676417091);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_77);
    Instrument_77.insert(EncodedSecurityDescLen_77.getString());
    FIX::ExerciseStyle ExerciseStyle_77(0);
    noRelatedSym_0_2.set(ExerciseStyle_77);
    Instrument_77.insert(ExerciseStyle_77.getString());
    FIX::Factor Factor_77;
    Factor_77.setString("4074818");
    noRelatedSym_0_2.set(Factor_77);
    Instrument_77.insert(Factor_77.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_77(true);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_77);
    Instrument_77.insert(FlexProductEligibilityIndicator_77.getString());
    FIX::FlexibleIndicator FlexibleIndicator_77(false);
    noRelatedSym_0_2.set(FlexibleIndicator_77);
    Instrument_77.insert(FlexibleIndicator_77.getString());
    FIX::FloorPrice FloorPrice_77;
    FloorPrice_77.setString("14524308");
    noRelatedSym_0_2.set(FloorPrice_77);
    Instrument_77.insert(FloorPrice_77.getString());
    FIX::FlowScheduleType FlowScheduleType_77(2);
    noRelatedSym_0_2.set(FlowScheduleType_77);
    Instrument_77.insert(FlowScheduleType_77.getString());
    FIX::InstrRegistry InstrRegistry_77("STRING_1424561903");
    noRelatedSym_0_2.set(InstrRegistry_77);
    Instrument_77.insert(InstrRegistry_77.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_77('3');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_77);
    Instrument_77.insert(InstrmtAssignmentMethod_77.getString());
    FIX::InterestAccrualDate InterestAccrualDate_77("LOCALMKTDATE_316397152");
    noRelatedSym_0_2.set(InterestAccrualDate_77);
    Instrument_77.insert(InterestAccrualDate_77.getString());
    FIX::IssueDate IssueDate_77("LOCALMKTDATE_542733119");
    noRelatedSym_0_2.set(IssueDate_77);
    Instrument_77.insert(IssueDate_77.getString());
    FIX::Issuer Issuer_77("STRING_2124020686");
    noRelatedSym_0_2.set(Issuer_77);
    Instrument_77.insert(Issuer_77.getString());
    FIX::ListMethod ListMethod_77(0);
    noRelatedSym_0_2.set(ListMethod_77);
    Instrument_77.insert(ListMethod_77.getString());
    FIX::LocaleOfIssue LocaleOfIssue_77("STRING_1102661190");
    noRelatedSym_0_2.set(LocaleOfIssue_77);
    Instrument_77.insert(LocaleOfIssue_77.getString());
    FIX::MaturityDate MaturityDate_77("LOCALMKTDATE_1150155479");
    noRelatedSym_0_2.set(MaturityDate_77);
    Instrument_77.insert(MaturityDate_77.getString());
    FIX::MaturityMonthYear MaturityMonthYear_77("MONTHYEAR_1293297716");
    noRelatedSym_0_2.set(MaturityMonthYear_77);
    Instrument_77.insert(MaturityMonthYear_77.getString());
    FIX::MaturityTime MaturityTime_77("TZTIMEONLY_362365288");
    noRelatedSym_0_2.set(MaturityTime_77);
    Instrument_77.insert(MaturityTime_77.getString());
    FIX::MinPriceIncrement MinPriceIncrement_77;
    MinPriceIncrement_77.setString("172925");
    noRelatedSym_0_2.set(MinPriceIncrement_77);
    Instrument_77.insert(MinPriceIncrement_77.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_77;
    MinPriceIncrementAmount_77.setString("10601599");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_77);
    Instrument_77.insert(MinPriceIncrementAmount_77.getString());
    FIX::NTPositionLimit NTPositionLimit_77(1801262221);
    noRelatedSym_0_2.set(NTPositionLimit_77);
    Instrument_77.insert(NTPositionLimit_77.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_77;
    NotionalPercentageOutstanding_77.setString("90.500000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_77);
    Instrument_77.insert(NotionalPercentageOutstanding_77.getString());
    FIX::OptAttribute OptAttribute_77('2');
    noRelatedSym_0_2.set(OptAttribute_77);
    Instrument_77.insert(OptAttribute_77.getString());
    FIX::OptPayoutAmount OptPayoutAmount_77;
    OptPayoutAmount_77.setString("4902280");
    noRelatedSym_0_2.set(OptPayoutAmount_77);
    Instrument_77.insert(OptPayoutAmount_77.getString());
    FIX::OptPayoutType OptPayoutType_77(2);
    noRelatedSym_0_2.set(OptPayoutType_77);
    Instrument_77.insert(OptPayoutType_77.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_77;
    OriginalNotionalPercentageOutstanding_77.setString("61.900000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_77);
    Instrument_77.insert(OriginalNotionalPercentageOutstanding_77.getString());
    FIX::Pool Pool_77("STRING_1870340585");
    noRelatedSym_0_2.set(Pool_77);
    Instrument_77.insert(Pool_77.getString());
    FIX::PositionLimit PositionLimit_77(1067111596);
    noRelatedSym_0_2.set(PositionLimit_77);
    Instrument_77.insert(PositionLimit_77.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_77("STRING_PCTPAR");
    noRelatedSym_0_2.set(PriceQuoteMethod_77);
    Instrument_77.insert(PriceQuoteMethod_77.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_77("STRING_1695060233");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_77);
    Instrument_77.insert(PriceUnitOfMeasure_77.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_77;
    PriceUnitOfMeasureQty_77.setString("10976860");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_77);
    Instrument_77.insert(PriceUnitOfMeasureQty_77.getString());
    FIX::Product Product_79(4);
    noRelatedSym_0_2.set(Product_79);
    Instrument_77.insert(Product_79.getString());
    FIX::ProductComplex ProductComplex_77("STRING_1223993676");
    noRelatedSym_0_2.set(ProductComplex_77);
    Instrument_77.insert(ProductComplex_77.getString());
    FIX::PutOrCall PutOrCall_77(1);
    noRelatedSym_0_2.set(PutOrCall_77);
    Instrument_77.insert(PutOrCall_77.getString());
    FIX::RedemptionDate RedemptionDate_77("LOCALMKTDATE_253022592");
    noRelatedSym_0_2.set(RedemptionDate_77);
    Instrument_77.insert(RedemptionDate_77.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_77("STRING_170263084");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_77);
    Instrument_77.insert(RepoCollateralSecurityType_77.getString());
    FIX::RepurchaseRate RepurchaseRate_77;
    RepurchaseRate_77.setString("1.420000");
    noRelatedSym_0_2.set(RepurchaseRate_77);
    Instrument_77.insert(RepurchaseRate_77.getString());
    FIX::RepurchaseTerm RepurchaseTerm_77(1705453395);
    noRelatedSym_0_2.set(RepurchaseTerm_77);
    Instrument_77.insert(RepurchaseTerm_77.getString());
    FIX::RestructuringType RestructuringType_77("STRING_MR");
    noRelatedSym_0_2.set(RestructuringType_77);
    Instrument_77.insert(RestructuringType_77.getString());
    FIX::SecurityDesc SecurityDesc_77("STRING_120448397");
    noRelatedSym_0_2.set(SecurityDesc_77);
    Instrument_77.insert(SecurityDesc_77.getString());
    FIX::SecurityExchange SecurityExchange_77("EXCHANGE_2085610520");
    noRelatedSym_0_2.set(SecurityExchange_77);
    Instrument_77.insert(SecurityExchange_77.getString());
    FIX::SecurityGroup SecurityGroup_77("STRING_679762433");
    noRelatedSym_0_2.set(SecurityGroup_77);
    Instrument_77.insert(SecurityGroup_77.getString());
    FIX::SecurityID SecurityID_77("STRING_663181516");
    noRelatedSym_0_2.set(SecurityID_77);
    Instrument_77.insert(SecurityID_77.getString());
    FIX::SecurityIDSource SecurityIDSource_77("STRING_L");
    noRelatedSym_0_2.set(SecurityIDSource_77);
    Instrument_77.insert(SecurityIDSource_77.getString());
    FIX::SecurityStatus SecurityStatus_77("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_77);
    Instrument_77.insert(SecurityStatus_77.getString());
    FIX::SecuritySubType SecuritySubType_78("STRING_1765842707");
    noRelatedSym_0_2.set(SecuritySubType_78);
    Instrument_77.insert(SecuritySubType_78.getString());
    FIX::SecurityType SecurityType_79("STRING_YANK");
    noRelatedSym_0_2.set(SecurityType_79);
    Instrument_77.insert(SecurityType_79.getString());
    FIX::Seniority Seniority_77("STRING_SB");
    noRelatedSym_0_2.set(Seniority_77);
    Instrument_77.insert(Seniority_77.getString());
    FIX::SettlMethod SettlMethod_77('P');
    noRelatedSym_0_2.set(SettlMethod_77);
    Instrument_77.insert(SettlMethod_77.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_77("STRING_1082111948");
    noRelatedSym_0_2.set(SettleOnOpenFlag_77);
    Instrument_77.insert(SettleOnOpenFlag_77.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_77("STRING_1774829653");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_77);
    Instrument_77.insert(StateOrProvinceOfIssue_77.getString());
    FIX::StrikeCurrency StrikeCurrency_77("USD");
    noRelatedSym_0_2.set(StrikeCurrency_77);
    Instrument_77.insert(StrikeCurrency_77.getString());
    FIX::StrikeMultiplier StrikeMultiplier_77;
    StrikeMultiplier_77.setString("17639054");
    noRelatedSym_0_2.set(StrikeMultiplier_77);
    Instrument_77.insert(StrikeMultiplier_77.getString());
    FIX::StrikePrice StrikePrice_77;
    StrikePrice_77.setString("1247310");
    noRelatedSym_0_2.set(StrikePrice_77);
    Instrument_77.insert(StrikePrice_77.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_77(3);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_77);
    Instrument_77.insert(StrikePriceBoundaryMethod_77.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_77;
    StrikePriceBoundaryPrecision_77.setString("80.150000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_77);
    Instrument_77.insert(StrikePriceBoundaryPrecision_77.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_77(4);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_77);
    Instrument_77.insert(StrikePriceDeterminationMethod_77.getString());
    FIX::StrikeValue StrikeValue_77;
    StrikeValue_77.setString("18785922");
    noRelatedSym_0_2.set(StrikeValue_77);
    Instrument_77.insert(StrikeValue_77.getString());
    FIX::Symbol Symbol_77("STRING_436826074");
    noRelatedSym_0_2.set(Symbol_77);
    Instrument_77.insert(Symbol_77.getString());
    FIX::SymbolSfx SymbolSfx_77("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_77);
    Instrument_77.insert(SymbolSfx_77.getString());
    FIX::TimeUnit TimeUnit_77("STRING_Mo");
    noRelatedSym_0_2.set(TimeUnit_77);
    Instrument_77.insert(TimeUnit_77.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_77(2);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_77);
    Instrument_77.insert(UnderlyingPriceDeterminationMethod_77.getString());
    FIX::UnitOfMeasure UnitOfMeasure_77("STRING_USD");
    noRelatedSym_0_2.set(UnitOfMeasure_77);
    Instrument_77.insert(UnitOfMeasure_77.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_77;
    UnitOfMeasureQty_77.setString("6318865");
    noRelatedSym_0_2.set(UnitOfMeasureQty_77);
    Instrument_77.insert(UnitOfMeasureQty_77.getString());
    FIX::ValuationMethod ValuationMethod_77("STRING_EQTY");
    noRelatedSym_0_2.set(ValuationMethod_77);
    Instrument_77.insert(ValuationMethod_77.getString());
    all_values.push_back(Instrument_77);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_160;
      FIX::ComplexEventCondition ComplexEventCondition_160(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventCondition_160.getString());
      FIX::ComplexEventPrice ComplexEventPrice_160;
      ComplexEventPrice_160.setString("933591");
      noComplexEvents_2_1_0.set(ComplexEventPrice_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPrice_160.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_160(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryMethod_160.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_160;
      ComplexEventPriceBoundaryPrecision_160.setString("51.240000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryPrecision_160.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_160(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceTimeType_160.getString());
      FIX::ComplexEventType ComplexEventType_160(4);
      noComplexEvents_2_1_0.set(ComplexEventType_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventType_160.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_160;
      ComplexOptPayoutAmount_160.setString("1114029");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexOptPayoutAmount_160.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_160);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_327;
        FIX::ComplexEventEndDate ComplexEventEndDate_327(FIX::UTCTIMESTAMP(20, 24, 50, 3, 9, 2013));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_327);
        ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventEndDate_327.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_327(FIX::UTCTIMESTAMP(6, 21, 29, 25, 9, 2004));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_327);
        ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventStartDate_327.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_327);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_667;
          FIX::ComplexEventEndTime ComplexEventEndTime_667(FIX::UTCTIMEONLY(1, 30, 44));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_667);
          ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventEndTime_667.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_667(FIX::UTCTIMEONLY(10, 1, 50));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_667);
          ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventStartTime_667.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_667);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_668;
          FIX::ComplexEventEndTime ComplexEventEndTime_668(FIX::UTCTIMEONLY(21, 15, 50));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_668);
          ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventEndTime_668.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_668(FIX::UTCTIMEONLY(2, 23, 51));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_668);
          ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventStartTime_668.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_668);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_158;
      FIX::EventDate EventDate_158("LOCALMKTDATE_663745235");
      noEvents_2_1_0.set(EventDate_158);
      EvntGrp_NoEvents_158.insert(EventDate_158.getString());
      FIX::EventPx EventPx_158;
      EventPx_158.setString("14761898");
      noEvents_2_1_0.set(EventPx_158);
      EvntGrp_NoEvents_158.insert(EventPx_158.getString());
      FIX::EventText EventText_158("STRING_2033932214");
      noEvents_2_1_0.set(EventText_158);
      EvntGrp_NoEvents_158.insert(EventText_158.getString());
      FIX::EventTime EventTime_158(FIX::UTCTIMESTAMP(16, 1, 21, 15, 3, 2000));
      noEvents_2_1_0.set(EventTime_158);
      EvntGrp_NoEvents_158.insert(EventTime_158.getString());
      FIX::EventType EventType_158(9);
      noEvents_2_1_0.set(EventType_158);
      EvntGrp_NoEvents_158.insert(EventType_158.getString());
      all_values.push_back(EvntGrp_NoEvents_158);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_158;
      FIX::InstrumentPartyID InstrumentPartyID_158("STRING_653733182");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_158);
      InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyID_158.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_158('7');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_158);
      InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyIDSource_158.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_158(1410855634);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_158);
      InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyRole_158.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_158);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308;
        FIX::InstrumentPartySubID InstrumentPartySubID_308("STRING_25534327");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_308);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubID_308.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_308(1269691450);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_308);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubIDType_308.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_159;
      FIX::InstrumentPartyID InstrumentPartyID_159("STRING_845320601");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_159);
      InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyID_159.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_159('2');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_159);
      InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyIDSource_159.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_159(1663916711);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_159);
      InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyRole_159.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_159);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309;
        FIX::InstrumentPartySubID InstrumentPartySubID_309("STRING_1298995027");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_309);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubID_309.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_309(4017516);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_309);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubIDType_309.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310;
        FIX::InstrumentPartySubID InstrumentPartySubID_310("STRING_92728058");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_310);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubID_310.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_310(2121575217);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_310);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubIDType_310.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_160;
      FIX::InstrumentPartyID InstrumentPartyID_160("STRING_523088033");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_160);
      InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyID_160.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_160('1');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_160);
      InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyIDSource_160.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_160(908074752);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_160);
      InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyRole_160.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_160);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311;
        FIX::InstrumentPartySubID InstrumentPartySubID_311("STRING_1116973768");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_311);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubID_311.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_311(1571819987);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_311);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubIDType_311.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312;
        FIX::InstrumentPartySubID InstrumentPartySubID_312("STRING_317014732");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubID_312.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_312(1003422334);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubIDType_312.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313;
        FIX::InstrumentPartySubID InstrumentPartySubID_313("STRING_1946051621");
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubID_313);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubID_313.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_313(1738802253);
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubIDType_313);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubIDType_313.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_142;
      FIX::SecurityAltID SecurityAltID_142("STRING_1665272574");
      noSecurityAltID_2_1_0.set(SecurityAltID_142);
      SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltID_142.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_142("STRING_1056421140");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_142);
      SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltIDSource_142.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_142);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_143;
      FIX::SecurityAltID SecurityAltID_143("STRING_885584082");
      noSecurityAltID_2_1_1.set(SecurityAltID_143);
      SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltID_143.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_143("STRING_854213848");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_143);
      SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltIDSource_143.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_143);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_154;
    FIX::SecurityXML SecurityXML_155("XMLDATA_1228835728");
    noRelatedSym_0_2.set(SecurityXML_155);
    FIX::SecurityXMLLen SecurityXMLLen_77(572487105);
    noRelatedSym_0_2.set(SecurityXMLLen_77);
    FIX::SecurityXMLSchema SecurityXMLSchema_77("STRING_1507947030");
    noRelatedSym_0_2.set(SecurityXMLSchema_77);
    SecurityXML_154.insert(SecurityXMLSchema_77.getString());
    all_values.push_back(SecurityXML_154);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_116;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_116("DATA_1983342739");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingIssuer_116.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_116(874152998);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingIssuerLen_116.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_116("DATA_2012688980");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDesc_116.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_116(1105550541);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_116);
      UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDescLen_116.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_116;
      UnderlyingAdjustedQuantity_116.setString("17194735");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_116);
      UnderlyingInstrument_116.insert(UnderlyingAdjustedQuantity_116.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_116;
      UnderlyingAllocationPercent_116.setString("52.940000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_116);
      UnderlyingInstrument_116.insert(UnderlyingAllocationPercent_116.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_116;
      UnderlyingAttachmentPoint_116.setString("36.040000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_116);
      UnderlyingInstrument_116.insert(UnderlyingAttachmentPoint_116.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_116("STRING_538362822");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_116);
      UnderlyingInstrument_116.insert(UnderlyingCFICode_116.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_116("STRING_1088836673");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_116);
      UnderlyingInstrument_116.insert(UnderlyingCPProgram_116.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_116("STRING_626001120");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_116);
      UnderlyingInstrument_116.insert(UnderlyingCPRegType_116.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_116;
      UnderlyingCapValue_116.setString("6310908");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_116);
      UnderlyingInstrument_116.insert(UnderlyingCapValue_116.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_116;
      UnderlyingCashAmount_116.setString("10629282");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_116);
      UnderlyingInstrument_116.insert(UnderlyingCashAmount_116.getString());
      FIX::UnderlyingCashType UnderlyingCashType_116("STRING_DIFF");
      noUnderlyings_2_1_0.set(UnderlyingCashType_116);
      UnderlyingInstrument_116.insert(UnderlyingCashType_116.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_116;
      UnderlyingContractMultiplier_116.setString("16827231");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_116);
      UnderlyingInstrument_116.insert(UnderlyingContractMultiplier_116.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_116(1971002994);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_116);
      UnderlyingInstrument_116.insert(UnderlyingContractMultiplierUnit_116.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_116("COUNTRY_2137397678");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_116);
      UnderlyingInstrument_116.insert(UnderlyingCountryOfIssue_116.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_116("LOCALMKTDATE_652213245");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_116);
      UnderlyingInstrument_116.insert(UnderlyingCouponPaymentDate_116.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_116;
      UnderlyingCouponRate_116.setString("93.330000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_116);
      UnderlyingInstrument_116.insert(UnderlyingCouponRate_116.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_116("STRING_306928762");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_116);
      UnderlyingInstrument_116.insert(UnderlyingCreditRating_116.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_116("USD");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_116);
      UnderlyingInstrument_116.insert(UnderlyingCurrency_116.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_116;
      UnderlyingCurrentValue_116.setString("20457310");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_116);
      UnderlyingInstrument_116.insert(UnderlyingCurrentValue_116.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_116;
      UnderlyingDetachmentPoint_116.setString("95.280000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_116);
      UnderlyingInstrument_116.insert(UnderlyingDetachmentPoint_116.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_116;
      UnderlyingDirtyPrice_116.setString("7116962");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_116);
      UnderlyingInstrument_116.insert(UnderlyingDirtyPrice_116.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_116;
      UnderlyingEndPrice_116.setString("9546685");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_116);
      UnderlyingInstrument_116.insert(UnderlyingEndPrice_116.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_116;
      UnderlyingEndValue_116.setString("7320599");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_116);
      UnderlyingInstrument_116.insert(UnderlyingEndValue_116.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_116(1565910080);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_116);
      UnderlyingInstrument_116.insert(UnderlyingExerciseStyle_116.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_116;
      UnderlyingFXRate_116.setString("360205");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_116);
      UnderlyingInstrument_116.insert(UnderlyingFXRate_116.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_116('D');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_116);
      UnderlyingInstrument_116.insert(UnderlyingFXRateCalc_116.getString());
      FIX::UnderlyingFactor UnderlyingFactor_116;
      UnderlyingFactor_116.setString("9263734");
      noUnderlyings_2_1_0.set(UnderlyingFactor_116);
      UnderlyingInstrument_116.insert(UnderlyingFactor_116.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_116(2023175241);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_116);
      UnderlyingInstrument_116.insert(UnderlyingFlowScheduleType_116.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_116("STRING_1140406159");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_116);
      UnderlyingInstrument_116.insert(UnderlyingInstrRegistry_116.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_116("LOCALMKTDATE_1800526460");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_116);
      UnderlyingInstrument_116.insert(UnderlyingIssueDate_116.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_116("STRING_1888380574");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_116);
      UnderlyingInstrument_116.insert(UnderlyingIssuer_116.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_116("STRING_98473053");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_116);
      UnderlyingInstrument_116.insert(UnderlyingLocaleOfIssue_116.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_116("LOCALMKTDATE_1372516411");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_116);
      UnderlyingInstrument_116.insert(UnderlyingMaturityDate_116.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_116("MONTHYEAR_1678222220");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_116);
      UnderlyingInstrument_116.insert(UnderlyingMaturityMonthYear_116.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_116("TZTIMEONLY_720456657");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_116);
      UnderlyingInstrument_116.insert(UnderlyingMaturityTime_116.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_116;
      UnderlyingNotionalPercentageOutstanding_116.setString("92.330000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_116);
      UnderlyingInstrument_116.insert(UnderlyingNotionalPercentageOutstanding_116.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_116('6');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_116);
      UnderlyingInstrument_116.insert(UnderlyingOptAttribute_116.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_116;
      UnderlyingOriginalNotionalPercentageOutstanding_116.setString("77.780000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_116);
      UnderlyingInstrument_116.insert(UnderlyingOriginalNotionalPercentageOutstanding_116.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_116("STRING_394486466");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_116);
      UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasure_116.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_116;
      UnderlyingPriceUnitOfMeasureQty_116.setString("16825034");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_116);
      UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasureQty_116.getString());
      FIX::UnderlyingProduct UnderlyingProduct_116(348063283);
      noUnderlyings_2_1_0.set(UnderlyingProduct_116);
      UnderlyingInstrument_116.insert(UnderlyingProduct_116.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_116(2077209591);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_116);
      UnderlyingInstrument_116.insert(UnderlyingPutOrCall_116.getString());
      FIX::UnderlyingPx UnderlyingPx_116;
      UnderlyingPx_116.setString("15060228");
      noUnderlyings_2_1_0.set(UnderlyingPx_116);
      UnderlyingInstrument_116.insert(UnderlyingPx_116.getString());
      FIX::UnderlyingQty UnderlyingQty_116;
      UnderlyingQty_116.setString("3379773");
      noUnderlyings_2_1_0.set(UnderlyingQty_116);
      UnderlyingInstrument_116.insert(UnderlyingQty_116.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_116("LOCALMKTDATE_581939188");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_116);
      UnderlyingInstrument_116.insert(UnderlyingRedemptionDate_116.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_116("STRING_753878518");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_116);
      UnderlyingInstrument_116.insert(UnderlyingRepoCollateralSecurityType_116.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_116;
      UnderlyingRepurchaseRate_116.setString("60.760000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_116);
      UnderlyingInstrument_116.insert(UnderlyingRepurchaseRate_116.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_116(90091120);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_116);
      UnderlyingInstrument_116.insert(UnderlyingRepurchaseTerm_116.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_116("STRING_1947785824");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_116);
      UnderlyingInstrument_116.insert(UnderlyingRestructuringType_116.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_116("STRING_543153443");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityDesc_116.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_116("EXCHANGE_2084050648");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityExchange_116.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_116("STRING_511998408");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityID_116.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_116("STRING_1497821951");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityIDSource_116.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_116("STRING_668626963");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_116);
      UnderlyingInstrument_116.insert(UnderlyingSecuritySubType_116.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_116("STRING_2077908488");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_116);
      UnderlyingInstrument_116.insert(UnderlyingSecurityType_116.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_116("STRING_1533842539");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_116);
      UnderlyingInstrument_116.insert(UnderlyingSeniority_116.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_116("STRING_1973174031");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_116);
      UnderlyingInstrument_116.insert(UnderlyingSettlMethod_116.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_116(2);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_116);
      UnderlyingInstrument_116.insert(UnderlyingSettlementType_116.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_116;
      UnderlyingStartValue_116.setString("14095341");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_116);
      UnderlyingInstrument_116.insert(UnderlyingStartValue_116.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_116("STRING_966096542");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_116);
      UnderlyingInstrument_116.insert(UnderlyingStateOrProvinceOfIssue_116.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_116("JPY");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_116);
      UnderlyingInstrument_116.insert(UnderlyingStrikeCurrency_116.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_116;
      UnderlyingStrikePrice_116.setString("10645695");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_116);
      UnderlyingInstrument_116.insert(UnderlyingStrikePrice_116.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_116("STRING_1882357526");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_116);
      UnderlyingInstrument_116.insert(UnderlyingSymbol_116.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_116("STRING_681169630");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_116);
      UnderlyingInstrument_116.insert(UnderlyingSymbolSfx_116.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_116("STRING_1785026253");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_116);
      UnderlyingInstrument_116.insert(UnderlyingTimeUnit_116.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_116("STRING_1645753112");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_116);
      UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasure_116.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_116;
      UnderlyingUnitOfMeasureQty_116.setString("13007448");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_116);
      UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasureQty_116.getString());
      all_values.push_back(UnderlyingInstrument_116);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_228;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_228("STRING_2040239578");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_228);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltID_228.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_228("STRING_835764714");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_228);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltIDSource_228.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_229;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_229("STRING_1332063666");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_229);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltID_229.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_229("STRING_1969965521");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_229);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltIDSource_229.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_230;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_230("STRING_194303899");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltID_230);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltID_230.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_230("STRING_1670040980");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltIDSource_230);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltIDSource_230.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_232;
        FIX::UnderlyingStipType UnderlyingStipType_232("STRING_948182417");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_232);
        UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipType_232.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_232("STRING_167463408");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_232);
        UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipValue_232.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_232);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_233;
        FIX::UnderlyingStipType UnderlyingStipType_233("STRING_494512182");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_233);
        UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipType_233.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_233("STRING_748484593");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_233);
        UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipValue_233.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_233);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_224;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_224("STRING_431079182");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_224);
        UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyID_224.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_224('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_224);
        UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyIDSource_224.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_224(60955154);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_224);
        UndlyInstrumentParties_NoUndlyInstrumentParties_224.insert(UnderlyingInstrumentPartyRole_224.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_448("STRING_1190907841");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_448);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubID_448.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_448(1594797693);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_448);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubIDType_448.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_225;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_225("STRING_925396528");
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyID_225);
        UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyID_225.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_225('2');
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyIDSource_225);
        UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyIDSource_225.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_225(856848178);
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyRole_225);
        UndlyInstrumentParties_NoUndlyInstrumentParties_225.insert(UnderlyingInstrumentPartyRole_225.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_449("STRING_410063611");
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubID_449);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubID_449.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_449(2007279236);
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_449);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubIDType_449.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_450("STRING_808579018");
          noUndlyInstrumentPartySubIDs_2_0_1_3_1.set(UnderlyingInstrumentPartySubID_450);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubID_450.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_450(144937489);
          noUndlyInstrumentPartySubIDs_2_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_450);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubIDType_450.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_1);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_226;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_226("STRING_540965219");
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyID_226);
        UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyID_226.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_226('4');
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyIDSource_226);
        UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyIDSource_226.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_226(1790690601);
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyRole_226);
        UndlyInstrumentParties_NoUndlyInstrumentParties_226.insert(UnderlyingInstrumentPartyRole_226.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_451("STRING_1430122006");
          noUndlyInstrumentPartySubIDs_2_0_2_3_0.set(UnderlyingInstrumentPartySubID_451);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubID_451.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_451(1683446531);
          noUndlyInstrumentPartySubIDs_2_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_451);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubIDType_451.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_452("STRING_529991161");
          noUndlyInstrumentPartySubIDs_2_0_2_3_1.set(UnderlyingInstrumentPartySubID_452);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubID_452.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_452(614702025);
          noUndlyInstrumentPartySubIDs_2_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_452);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubIDType_452.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_453("STRING_1505928404");
          noUndlyInstrumentPartySubIDs_2_0_2_3_2.set(UnderlyingInstrumentPartySubID_453);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubID_453.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_453(724295060);
          noUndlyInstrumentPartySubIDs_2_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_453);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453.insert(UnderlyingInstrumentPartySubIDType_453.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_3_2);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_117;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_117("DATA_137259357");
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuer_117);
      UnderlyingInstrument_117.insert(EncodedUnderlyingIssuer_117.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_117(1910349466);
      noUnderlyings_2_1_1.set(EncodedUnderlyingIssuerLen_117);
      UnderlyingInstrument_117.insert(EncodedUnderlyingIssuerLen_117.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_117("DATA_1672477478");
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDesc_117);
      UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDesc_117.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_117(304722765);
      noUnderlyings_2_1_1.set(EncodedUnderlyingSecurityDescLen_117);
      UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDescLen_117.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_117;
      UnderlyingAdjustedQuantity_117.setString("2573780");
      noUnderlyings_2_1_1.set(UnderlyingAdjustedQuantity_117);
      UnderlyingInstrument_117.insert(UnderlyingAdjustedQuantity_117.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_117;
      UnderlyingAllocationPercent_117.setString("84.230000");
      noUnderlyings_2_1_1.set(UnderlyingAllocationPercent_117);
      UnderlyingInstrument_117.insert(UnderlyingAllocationPercent_117.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_117;
      UnderlyingAttachmentPoint_117.setString("96.160000");
      noUnderlyings_2_1_1.set(UnderlyingAttachmentPoint_117);
      UnderlyingInstrument_117.insert(UnderlyingAttachmentPoint_117.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_117("STRING_688457182");
      noUnderlyings_2_1_1.set(UnderlyingCFICode_117);
      UnderlyingInstrument_117.insert(UnderlyingCFICode_117.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_117("STRING_1533961425");
      noUnderlyings_2_1_1.set(UnderlyingCPProgram_117);
      UnderlyingInstrument_117.insert(UnderlyingCPProgram_117.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_117("STRING_1076294771");
      noUnderlyings_2_1_1.set(UnderlyingCPRegType_117);
      UnderlyingInstrument_117.insert(UnderlyingCPRegType_117.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_117;
      UnderlyingCapValue_117.setString("17881633");
      noUnderlyings_2_1_1.set(UnderlyingCapValue_117);
      UnderlyingInstrument_117.insert(UnderlyingCapValue_117.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_117;
      UnderlyingCashAmount_117.setString("5773856");
      noUnderlyings_2_1_1.set(UnderlyingCashAmount_117);
      UnderlyingInstrument_117.insert(UnderlyingCashAmount_117.getString());
      FIX::UnderlyingCashType UnderlyingCashType_117("STRING_FIXED");
      noUnderlyings_2_1_1.set(UnderlyingCashType_117);
      UnderlyingInstrument_117.insert(UnderlyingCashType_117.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_117;
      UnderlyingContractMultiplier_117.setString("5660762");
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplier_117);
      UnderlyingInstrument_117.insert(UnderlyingContractMultiplier_117.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_117(477608114);
      noUnderlyings_2_1_1.set(UnderlyingContractMultiplierUnit_117);
      UnderlyingInstrument_117.insert(UnderlyingContractMultiplierUnit_117.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_117("COUNTRY_1380456994");
      noUnderlyings_2_1_1.set(UnderlyingCountryOfIssue_117);
      UnderlyingInstrument_117.insert(UnderlyingCountryOfIssue_117.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_117("LOCALMKTDATE_310085631");
      noUnderlyings_2_1_1.set(UnderlyingCouponPaymentDate_117);
      UnderlyingInstrument_117.insert(UnderlyingCouponPaymentDate_117.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_117;
      UnderlyingCouponRate_117.setString("17.250000");
      noUnderlyings_2_1_1.set(UnderlyingCouponRate_117);
      UnderlyingInstrument_117.insert(UnderlyingCouponRate_117.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_117("STRING_1240252583");
      noUnderlyings_2_1_1.set(UnderlyingCreditRating_117);
      UnderlyingInstrument_117.insert(UnderlyingCreditRating_117.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_117("CAN");
      noUnderlyings_2_1_1.set(UnderlyingCurrency_117);
      UnderlyingInstrument_117.insert(UnderlyingCurrency_117.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_117;
      UnderlyingCurrentValue_117.setString("17812178");
      noUnderlyings_2_1_1.set(UnderlyingCurrentValue_117);
      UnderlyingInstrument_117.insert(UnderlyingCurrentValue_117.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_117;
      UnderlyingDetachmentPoint_117.setString("62.730000");
      noUnderlyings_2_1_1.set(UnderlyingDetachmentPoint_117);
      UnderlyingInstrument_117.insert(UnderlyingDetachmentPoint_117.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_117;
      UnderlyingDirtyPrice_117.setString("6758161");
      noUnderlyings_2_1_1.set(UnderlyingDirtyPrice_117);
      UnderlyingInstrument_117.insert(UnderlyingDirtyPrice_117.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_117;
      UnderlyingEndPrice_117.setString("14754442");
      noUnderlyings_2_1_1.set(UnderlyingEndPrice_117);
      UnderlyingInstrument_117.insert(UnderlyingEndPrice_117.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_117;
      UnderlyingEndValue_117.setString("8474246");
      noUnderlyings_2_1_1.set(UnderlyingEndValue_117);
      UnderlyingInstrument_117.insert(UnderlyingEndValue_117.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_117(211779052);
      noUnderlyings_2_1_1.set(UnderlyingExerciseStyle_117);
      UnderlyingInstrument_117.insert(UnderlyingExerciseStyle_117.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_117;
      UnderlyingFXRate_117.setString("20054354");
      noUnderlyings_2_1_1.set(UnderlyingFXRate_117);
      UnderlyingInstrument_117.insert(UnderlyingFXRate_117.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_117('M');
      noUnderlyings_2_1_1.set(UnderlyingFXRateCalc_117);
      UnderlyingInstrument_117.insert(UnderlyingFXRateCalc_117.getString());
      FIX::UnderlyingFactor UnderlyingFactor_117;
      UnderlyingFactor_117.setString("17177074");
      noUnderlyings_2_1_1.set(UnderlyingFactor_117);
      UnderlyingInstrument_117.insert(UnderlyingFactor_117.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_117(582246822);
      noUnderlyings_2_1_1.set(UnderlyingFlowScheduleType_117);
      UnderlyingInstrument_117.insert(UnderlyingFlowScheduleType_117.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_117("STRING_1599386014");
      noUnderlyings_2_1_1.set(UnderlyingInstrRegistry_117);
      UnderlyingInstrument_117.insert(UnderlyingInstrRegistry_117.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_117("LOCALMKTDATE_1480573274");
      noUnderlyings_2_1_1.set(UnderlyingIssueDate_117);
      UnderlyingInstrument_117.insert(UnderlyingIssueDate_117.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_117("STRING_107240652");
      noUnderlyings_2_1_1.set(UnderlyingIssuer_117);
      UnderlyingInstrument_117.insert(UnderlyingIssuer_117.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_117("STRING_1904108779");
      noUnderlyings_2_1_1.set(UnderlyingLocaleOfIssue_117);
      UnderlyingInstrument_117.insert(UnderlyingLocaleOfIssue_117.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_117("LOCALMKTDATE_1737951274");
      noUnderlyings_2_1_1.set(UnderlyingMaturityDate_117);
      UnderlyingInstrument_117.insert(UnderlyingMaturityDate_117.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_117("MONTHYEAR_380719075");
      noUnderlyings_2_1_1.set(UnderlyingMaturityMonthYear_117);
      UnderlyingInstrument_117.insert(UnderlyingMaturityMonthYear_117.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_117("TZTIMEONLY_771964747");
      noUnderlyings_2_1_1.set(UnderlyingMaturityTime_117);
      UnderlyingInstrument_117.insert(UnderlyingMaturityTime_117.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_117;
      UnderlyingNotionalPercentageOutstanding_117.setString("48.090000");
      noUnderlyings_2_1_1.set(UnderlyingNotionalPercentageOutstanding_117);
      UnderlyingInstrument_117.insert(UnderlyingNotionalPercentageOutstanding_117.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_117('1');
      noUnderlyings_2_1_1.set(UnderlyingOptAttribute_117);
      UnderlyingInstrument_117.insert(UnderlyingOptAttribute_117.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_117;
      UnderlyingOriginalNotionalPercentageOutstanding_117.setString("95.180000");
      noUnderlyings_2_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_117);
      UnderlyingInstrument_117.insert(UnderlyingOriginalNotionalPercentageOutstanding_117.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_117("STRING_2067088137");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasure_117);
      UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasure_117.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_117;
      UnderlyingPriceUnitOfMeasureQty_117.setString("3445824");
      noUnderlyings_2_1_1.set(UnderlyingPriceUnitOfMeasureQty_117);
      UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasureQty_117.getString());
      FIX::UnderlyingProduct UnderlyingProduct_117(224384687);
      noUnderlyings_2_1_1.set(UnderlyingProduct_117);
      UnderlyingInstrument_117.insert(UnderlyingProduct_117.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_117(485680697);
      noUnderlyings_2_1_1.set(UnderlyingPutOrCall_117);
      UnderlyingInstrument_117.insert(UnderlyingPutOrCall_117.getString());
      FIX::UnderlyingPx UnderlyingPx_117;
      UnderlyingPx_117.setString("8221905");
      noUnderlyings_2_1_1.set(UnderlyingPx_117);
      UnderlyingInstrument_117.insert(UnderlyingPx_117.getString());
      FIX::UnderlyingQty UnderlyingQty_117;
      UnderlyingQty_117.setString("16048416");
      noUnderlyings_2_1_1.set(UnderlyingQty_117);
      UnderlyingInstrument_117.insert(UnderlyingQty_117.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_117("LOCALMKTDATE_795766329");
      noUnderlyings_2_1_1.set(UnderlyingRedemptionDate_117);
      UnderlyingInstrument_117.insert(UnderlyingRedemptionDate_117.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_117("STRING_1709862311");
      noUnderlyings_2_1_1.set(UnderlyingRepoCollateralSecurityType_117);
      UnderlyingInstrument_117.insert(UnderlyingRepoCollateralSecurityType_117.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_117;
      UnderlyingRepurchaseRate_117.setString("6.160000");
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseRate_117);
      UnderlyingInstrument_117.insert(UnderlyingRepurchaseRate_117.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_117(1914430979);
      noUnderlyings_2_1_1.set(UnderlyingRepurchaseTerm_117);
      UnderlyingInstrument_117.insert(UnderlyingRepurchaseTerm_117.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_117("STRING_594987878");
      noUnderlyings_2_1_1.set(UnderlyingRestructuringType_117);
      UnderlyingInstrument_117.insert(UnderlyingRestructuringType_117.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_117("STRING_331344770");
      noUnderlyings_2_1_1.set(UnderlyingSecurityDesc_117);
      UnderlyingInstrument_117.insert(UnderlyingSecurityDesc_117.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_117("EXCHANGE_1331733604");
      noUnderlyings_2_1_1.set(UnderlyingSecurityExchange_117);
      UnderlyingInstrument_117.insert(UnderlyingSecurityExchange_117.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_117("STRING_1270804046");
      noUnderlyings_2_1_1.set(UnderlyingSecurityID_117);
      UnderlyingInstrument_117.insert(UnderlyingSecurityID_117.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_117("STRING_1806789019");
      noUnderlyings_2_1_1.set(UnderlyingSecurityIDSource_117);
      UnderlyingInstrument_117.insert(UnderlyingSecurityIDSource_117.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_117("STRING_31674588");
      noUnderlyings_2_1_1.set(UnderlyingSecuritySubType_117);
      UnderlyingInstrument_117.insert(UnderlyingSecuritySubType_117.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_117("STRING_1482583098");
      noUnderlyings_2_1_1.set(UnderlyingSecurityType_117);
      UnderlyingInstrument_117.insert(UnderlyingSecurityType_117.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_117("STRING_1664740780");
      noUnderlyings_2_1_1.set(UnderlyingSeniority_117);
      UnderlyingInstrument_117.insert(UnderlyingSeniority_117.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_117("STRING_1493801245");
      noUnderlyings_2_1_1.set(UnderlyingSettlMethod_117);
      UnderlyingInstrument_117.insert(UnderlyingSettlMethod_117.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_117(5);
      noUnderlyings_2_1_1.set(UnderlyingSettlementType_117);
      UnderlyingInstrument_117.insert(UnderlyingSettlementType_117.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_117;
      UnderlyingStartValue_117.setString("995039");
      noUnderlyings_2_1_1.set(UnderlyingStartValue_117);
      UnderlyingInstrument_117.insert(UnderlyingStartValue_117.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_117("STRING_945703611");
      noUnderlyings_2_1_1.set(UnderlyingStateOrProvinceOfIssue_117);
      UnderlyingInstrument_117.insert(UnderlyingStateOrProvinceOfIssue_117.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_117("GBP");
      noUnderlyings_2_1_1.set(UnderlyingStrikeCurrency_117);
      UnderlyingInstrument_117.insert(UnderlyingStrikeCurrency_117.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_117;
      UnderlyingStrikePrice_117.setString("7023287");
      noUnderlyings_2_1_1.set(UnderlyingStrikePrice_117);
      UnderlyingInstrument_117.insert(UnderlyingStrikePrice_117.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_117("STRING_2123847808");
      noUnderlyings_2_1_1.set(UnderlyingSymbol_117);
      UnderlyingInstrument_117.insert(UnderlyingSymbol_117.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_117("STRING_587463682");
      noUnderlyings_2_1_1.set(UnderlyingSymbolSfx_117);
      UnderlyingInstrument_117.insert(UnderlyingSymbolSfx_117.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_117("STRING_1474293490");
      noUnderlyings_2_1_1.set(UnderlyingTimeUnit_117);
      UnderlyingInstrument_117.insert(UnderlyingTimeUnit_117.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_117("STRING_255288969");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasure_117);
      UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasure_117.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_117;
      UnderlyingUnitOfMeasureQty_117.setString("3546605");
      noUnderlyings_2_1_1.set(UnderlyingUnitOfMeasureQty_117);
      UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasureQty_117.getString());
      all_values.push_back(UnderlyingInstrument_117);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_231;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_231("STRING_174893458");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltID_231);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltID_231.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_231("STRING_699243005");
        noUnderlyingSecurityAltID_2_1_2_0.set(UnderlyingSecurityAltIDSource_231);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltIDSource_231.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_232;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_232("STRING_1399454047");
        noUnderlyingSecurityAltID_2_1_2_1.set(UnderlyingSecurityAltID_232);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltID_232.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_232("STRING_660574155");
        noUnderlyingSecurityAltID_2_1_2_1.set(UnderlyingSecurityAltIDSource_232);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltIDSource_232.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_233;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_233("STRING_1521433591");
        noUnderlyingSecurityAltID_2_1_2_2.set(UnderlyingSecurityAltID_233);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltID_233.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_233("STRING_856812081");
        noUnderlyingSecurityAltID_2_1_2_2.set(UnderlyingSecurityAltIDSource_233);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltIDSource_233.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_1.addGroup(noUnderlyingSecurityAltID_2_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_234;
        FIX::UnderlyingStipType UnderlyingStipType_234("STRING_1083812254");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipType_234);
        UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipType_234.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_234("STRING_1554422697");
        noUnderlyingStips_2_1_2_0.set(UnderlyingStipValue_234);
        UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipValue_234.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_234);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_1.addGroup(noUnderlyingStips_2_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_227;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_227("STRING_1678800132");
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyID_227);
        UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyID_227.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_227('1');
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyIDSource_227);
        UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyIDSource_227.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_227(407537772);
        noUndlyInstrumentParties_2_1_2_0.set(UnderlyingInstrumentPartyRole_227);
        UndlyInstrumentParties_NoUndlyInstrumentParties_227.insert(UnderlyingInstrumentPartyRole_227.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_227);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_454("STRING_1545072839");
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubID_454);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubID_454.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_454(439212360);
          noUndlyInstrumentPartySubIDs_2_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_454);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454.insert(UnderlyingInstrumentPartySubIDType_454.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_1_0_3_0);
        }
        noUnderlyings_2_1_1.addGroup(noUndlyInstrumentParties_2_1_2_0);
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
