#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityStatusRequest_0;
  FIX::Currency Currency_64("EUR");
  msg.set(Currency_64);
  SecurityStatusRequest_0.insert(Currency_64.getString());
  FIX::MarketID MarketID_21("EXCHANGE_1481977831");
  msg.set(MarketID_21);
  SecurityStatusRequest_0.insert(MarketID_21.getString());
  FIX::MarketSegmentID MarketSegmentID_21("STRING_1431696366");
  msg.set(MarketSegmentID_21);
  SecurityStatusRequest_0.insert(MarketSegmentID_21.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_1("STRING_881496389");
  msg.set(SecurityStatusReqID_1);
  SecurityStatusRequest_0.insert(SecurityStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_11('0');
  msg.set(SubscriptionRequestType_11);
  SecurityStatusRequest_0.insert(SubscriptionRequestType_11.getString());
  FIX::TradingSessionID TradingSessionID_89("STRING_5");
  msg.set(TradingSessionID_89);
  SecurityStatusRequest_0.insert(TradingSessionID_89.getString());
  FIX::TradingSessionSubID TradingSessionSubID_89("STRING_1");
  msg.set(TradingSessionSubID_89);
  SecurityStatusRequest_0.insert(TradingSessionSubID_89.getString());
  all_values.push_back(SecurityStatusRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_130;
    FIX::EncodedLegIssuer EncodedLegIssuer_130("DATA_1420971821");
    noLegs_0_0.set(EncodedLegIssuer_130);
    InstrumentLeg_130.insert(EncodedLegIssuer_130.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_130(1790240785);
    noLegs_0_0.set(EncodedLegIssuerLen_130);
    InstrumentLeg_130.insert(EncodedLegIssuerLen_130.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_130("DATA_1334291359");
    noLegs_0_0.set(EncodedLegSecurityDesc_130);
    InstrumentLeg_130.insert(EncodedLegSecurityDesc_130.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_130(441459895);
    noLegs_0_0.set(EncodedLegSecurityDescLen_130);
    InstrumentLeg_130.insert(EncodedLegSecurityDescLen_130.getString());
    FIX::LegCFICode LegCFICode_130("STRING_2090549852");
    noLegs_0_0.set(LegCFICode_130);
    InstrumentLeg_130.insert(LegCFICode_130.getString());
    FIX::LegContractMultiplier LegContractMultiplier_130;
    LegContractMultiplier_130.setString("11231962");
    noLegs_0_0.set(LegContractMultiplier_130);
    InstrumentLeg_130.insert(LegContractMultiplier_130.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_130(1086654371);
    noLegs_0_0.set(LegContractMultiplierUnit_130);
    InstrumentLeg_130.insert(LegContractMultiplierUnit_130.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_130("MONTHYEAR_333742281");
    noLegs_0_0.set(LegContractSettlMonth_130);
    InstrumentLeg_130.insert(LegContractSettlMonth_130.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_130("COUNTRY_132804213");
    noLegs_0_0.set(LegCountryOfIssue_130);
    InstrumentLeg_130.insert(LegCountryOfIssue_130.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_130("LOCALMKTDATE_1191497447");
    noLegs_0_0.set(LegCouponPaymentDate_130);
    InstrumentLeg_130.insert(LegCouponPaymentDate_130.getString());
    FIX::LegCouponRate LegCouponRate_130;
    LegCouponRate_130.setString("99.540000");
    noLegs_0_0.set(LegCouponRate_130);
    InstrumentLeg_130.insert(LegCouponRate_130.getString());
    FIX::LegCreditRating LegCreditRating_130("STRING_96831503");
    noLegs_0_0.set(LegCreditRating_130);
    InstrumentLeg_130.insert(LegCreditRating_130.getString());
    FIX::LegCurrency LegCurrency_130("GBP");
    noLegs_0_0.set(LegCurrency_130);
    InstrumentLeg_130.insert(LegCurrency_130.getString());
    FIX::LegDatedDate LegDatedDate_130("LOCALMKTDATE_2059195194");
    noLegs_0_0.set(LegDatedDate_130);
    InstrumentLeg_130.insert(LegDatedDate_130.getString());
    FIX::LegExerciseStyle LegExerciseStyle_130(1389479009);
    noLegs_0_0.set(LegExerciseStyle_130);
    InstrumentLeg_130.insert(LegExerciseStyle_130.getString());
    FIX::LegFactor LegFactor_130;
    LegFactor_130.setString("21170267");
    noLegs_0_0.set(LegFactor_130);
    InstrumentLeg_130.insert(LegFactor_130.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_130(1183906082);
    noLegs_0_0.set(LegFlowScheduleType_130);
    InstrumentLeg_130.insert(LegFlowScheduleType_130.getString());
    FIX::LegInstrRegistry LegInstrRegistry_130("STRING_1775117295");
    noLegs_0_0.set(LegInstrRegistry_130);
    InstrumentLeg_130.insert(LegInstrRegistry_130.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_130("LOCALMKTDATE_1961154360");
    noLegs_0_0.set(LegInterestAccrualDate_130);
    InstrumentLeg_130.insert(LegInterestAccrualDate_130.getString());
    FIX::LegIssueDate LegIssueDate_130("LOCALMKTDATE_1559514868");
    noLegs_0_0.set(LegIssueDate_130);
    InstrumentLeg_130.insert(LegIssueDate_130.getString());
    FIX::LegIssuer LegIssuer_130("STRING_1244880933");
    noLegs_0_0.set(LegIssuer_130);
    InstrumentLeg_130.insert(LegIssuer_130.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_130("STRING_322060065");
    noLegs_0_0.set(LegLocaleOfIssue_130);
    InstrumentLeg_130.insert(LegLocaleOfIssue_130.getString());
    FIX::LegMaturityDate LegMaturityDate_130("LOCALMKTDATE_93945243");
    noLegs_0_0.set(LegMaturityDate_130);
    InstrumentLeg_130.insert(LegMaturityDate_130.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_130("MONTHYEAR_579375116");
    noLegs_0_0.set(LegMaturityMonthYear_130);
    InstrumentLeg_130.insert(LegMaturityMonthYear_130.getString());
    FIX::LegMaturityTime LegMaturityTime_130("TZTIMEONLY_1753756432");
    noLegs_0_0.set(LegMaturityTime_130);
    InstrumentLeg_130.insert(LegMaturityTime_130.getString());
    FIX::LegOptAttribute LegOptAttribute_130('9');
    noLegs_0_0.set(LegOptAttribute_130);
    InstrumentLeg_130.insert(LegOptAttribute_130.getString());
    FIX::LegOptionRatio LegOptionRatio_130;
    LegOptionRatio_130.setString("17767587");
    noLegs_0_0.set(LegOptionRatio_130);
    InstrumentLeg_130.insert(LegOptionRatio_130.getString());
    FIX::LegPool LegPool_130("STRING_1560351558");
    noLegs_0_0.set(LegPool_130);
    InstrumentLeg_130.insert(LegPool_130.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_130("STRING_682730842");
    noLegs_0_0.set(LegPriceUnitOfMeasure_130);
    InstrumentLeg_130.insert(LegPriceUnitOfMeasure_130.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_130;
    LegPriceUnitOfMeasureQty_130.setString("11938850");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_130);
    InstrumentLeg_130.insert(LegPriceUnitOfMeasureQty_130.getString());
    FIX::LegProduct LegProduct_130(833839731);
    noLegs_0_0.set(LegProduct_130);
    InstrumentLeg_130.insert(LegProduct_130.getString());
    FIX::LegPutOrCall LegPutOrCall_130(325487979);
    noLegs_0_0.set(LegPutOrCall_130);
    InstrumentLeg_130.insert(LegPutOrCall_130.getString());
    FIX::LegRatioQty LegRatioQty_130;
    LegRatioQty_130.setString("3806927");
    noLegs_0_0.set(LegRatioQty_130);
    InstrumentLeg_130.insert(LegRatioQty_130.getString());
    FIX::LegRedemptionDate LegRedemptionDate_130("LOCALMKTDATE_1275299626");
    noLegs_0_0.set(LegRedemptionDate_130);
    InstrumentLeg_130.insert(LegRedemptionDate_130.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_130("STRING_268554183");
    noLegs_0_0.set(LegRepoCollateralSecurityType_130);
    InstrumentLeg_130.insert(LegRepoCollateralSecurityType_130.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_130;
    LegRepurchaseRate_130.setString("89.730000");
    noLegs_0_0.set(LegRepurchaseRate_130);
    InstrumentLeg_130.insert(LegRepurchaseRate_130.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_130(214470349);
    noLegs_0_0.set(LegRepurchaseTerm_130);
    InstrumentLeg_130.insert(LegRepurchaseTerm_130.getString());
    FIX::LegSecurityDesc LegSecurityDesc_130("STRING_602296464");
    noLegs_0_0.set(LegSecurityDesc_130);
    InstrumentLeg_130.insert(LegSecurityDesc_130.getString());
    FIX::LegSecurityExchange LegSecurityExchange_130("EXCHANGE_1636693187");
    noLegs_0_0.set(LegSecurityExchange_130);
    InstrumentLeg_130.insert(LegSecurityExchange_130.getString());
    FIX::LegSecurityID LegSecurityID_130("STRING_1405967796");
    noLegs_0_0.set(LegSecurityID_130);
    InstrumentLeg_130.insert(LegSecurityID_130.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_130("STRING_1631356419");
    noLegs_0_0.set(LegSecurityIDSource_130);
    InstrumentLeg_130.insert(LegSecurityIDSource_130.getString());
    FIX::LegSecuritySubType LegSecuritySubType_130("STRING_1733524690");
    noLegs_0_0.set(LegSecuritySubType_130);
    InstrumentLeg_130.insert(LegSecuritySubType_130.getString());
    FIX::LegSecurityType LegSecurityType_130("STRING_733348224");
    noLegs_0_0.set(LegSecurityType_130);
    InstrumentLeg_130.insert(LegSecurityType_130.getString());
    FIX::LegSide LegSide_130('1');
    noLegs_0_0.set(LegSide_130);
    InstrumentLeg_130.insert(LegSide_130.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_130("STRING_1645236236");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_130);
    InstrumentLeg_130.insert(LegStateOrProvinceOfIssue_130.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_130("GBP");
    noLegs_0_0.set(LegStrikeCurrency_130);
    InstrumentLeg_130.insert(LegStrikeCurrency_130.getString());
    FIX::LegStrikePrice LegStrikePrice_130;
    LegStrikePrice_130.setString("6816586");
    noLegs_0_0.set(LegStrikePrice_130);
    InstrumentLeg_130.insert(LegStrikePrice_130.getString());
    FIX::LegSymbol LegSymbol_130("STRING_1750460881");
    noLegs_0_0.set(LegSymbol_130);
    InstrumentLeg_130.insert(LegSymbol_130.getString());
    FIX::LegSymbolSfx LegSymbolSfx_130("STRING_861859380");
    noLegs_0_0.set(LegSymbolSfx_130);
    InstrumentLeg_130.insert(LegSymbolSfx_130.getString());
    FIX::LegTimeUnit LegTimeUnit_130("STRING_93689890");
    noLegs_0_0.set(LegTimeUnit_130);
    InstrumentLeg_130.insert(LegTimeUnit_130.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_130("STRING_847858166");
    noLegs_0_0.set(LegUnitOfMeasure_130);
    InstrumentLeg_130.insert(LegUnitOfMeasure_130.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_130;
    LegUnitOfMeasureQty_130.setString("11839194");
    noLegs_0_0.set(LegUnitOfMeasureQty_130);
    InstrumentLeg_130.insert(LegUnitOfMeasureQty_130.getString());
    all_values.push_back(InstrumentLeg_130);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_261;
      FIX::LegSecurityAltID LegSecurityAltID_261("STRING_1427233282");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_261);
      LegSecAltIDGrp_NoLegSecurityAltID_261.insert(LegSecurityAltID_261.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_261("STRING_790192229");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_261);
      LegSecAltIDGrp_NoLegSecurityAltID_261.insert(LegSecurityAltIDSource_261.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_261);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_262;
      FIX::LegSecurityAltID LegSecurityAltID_262("STRING_1163076767");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_262);
      LegSecAltIDGrp_NoLegSecurityAltID_262.insert(LegSecurityAltID_262.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_262("STRING_1056508393");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_262);
      LegSecAltIDGrp_NoLegSecurityAltID_262.insert(LegSecurityAltIDSource_262.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_262);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_263;
      FIX::LegSecurityAltID LegSecurityAltID_263("STRING_203060139");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_263);
      LegSecAltIDGrp_NoLegSecurityAltID_263.insert(LegSecurityAltID_263.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_263("STRING_1845807609");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_263);
      LegSecAltIDGrp_NoLegSecurityAltID_263.insert(LegSecurityAltIDSource_263.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_263);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_131;
    FIX::EncodedLegIssuer EncodedLegIssuer_131("DATA_102909776");
    noLegs_0_1.set(EncodedLegIssuer_131);
    InstrumentLeg_131.insert(EncodedLegIssuer_131.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_131(1036899870);
    noLegs_0_1.set(EncodedLegIssuerLen_131);
    InstrumentLeg_131.insert(EncodedLegIssuerLen_131.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_131("DATA_23811940");
    noLegs_0_1.set(EncodedLegSecurityDesc_131);
    InstrumentLeg_131.insert(EncodedLegSecurityDesc_131.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_131(483602519);
    noLegs_0_1.set(EncodedLegSecurityDescLen_131);
    InstrumentLeg_131.insert(EncodedLegSecurityDescLen_131.getString());
    FIX::LegCFICode LegCFICode_131("STRING_164715848");
    noLegs_0_1.set(LegCFICode_131);
    InstrumentLeg_131.insert(LegCFICode_131.getString());
    FIX::LegContractMultiplier LegContractMultiplier_131;
    LegContractMultiplier_131.setString("2923661");
    noLegs_0_1.set(LegContractMultiplier_131);
    InstrumentLeg_131.insert(LegContractMultiplier_131.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_131(1987491492);
    noLegs_0_1.set(LegContractMultiplierUnit_131);
    InstrumentLeg_131.insert(LegContractMultiplierUnit_131.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_131("MONTHYEAR_379186197");
    noLegs_0_1.set(LegContractSettlMonth_131);
    InstrumentLeg_131.insert(LegContractSettlMonth_131.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_131("COUNTRY_894662588");
    noLegs_0_1.set(LegCountryOfIssue_131);
    InstrumentLeg_131.insert(LegCountryOfIssue_131.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_131("LOCALMKTDATE_1476701031");
    noLegs_0_1.set(LegCouponPaymentDate_131);
    InstrumentLeg_131.insert(LegCouponPaymentDate_131.getString());
    FIX::LegCouponRate LegCouponRate_131;
    LegCouponRate_131.setString("39.940000");
    noLegs_0_1.set(LegCouponRate_131);
    InstrumentLeg_131.insert(LegCouponRate_131.getString());
    FIX::LegCreditRating LegCreditRating_131("STRING_378535359");
    noLegs_0_1.set(LegCreditRating_131);
    InstrumentLeg_131.insert(LegCreditRating_131.getString());
    FIX::LegCurrency LegCurrency_131("GBP");
    noLegs_0_1.set(LegCurrency_131);
    InstrumentLeg_131.insert(LegCurrency_131.getString());
    FIX::LegDatedDate LegDatedDate_131("LOCALMKTDATE_1457180964");
    noLegs_0_1.set(LegDatedDate_131);
    InstrumentLeg_131.insert(LegDatedDate_131.getString());
    FIX::LegExerciseStyle LegExerciseStyle_131(560494661);
    noLegs_0_1.set(LegExerciseStyle_131);
    InstrumentLeg_131.insert(LegExerciseStyle_131.getString());
    FIX::LegFactor LegFactor_131;
    LegFactor_131.setString("3463621");
    noLegs_0_1.set(LegFactor_131);
    InstrumentLeg_131.insert(LegFactor_131.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_131(357885984);
    noLegs_0_1.set(LegFlowScheduleType_131);
    InstrumentLeg_131.insert(LegFlowScheduleType_131.getString());
    FIX::LegInstrRegistry LegInstrRegistry_131("STRING_1242153331");
    noLegs_0_1.set(LegInstrRegistry_131);
    InstrumentLeg_131.insert(LegInstrRegistry_131.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_131("LOCALMKTDATE_2096823037");
    noLegs_0_1.set(LegInterestAccrualDate_131);
    InstrumentLeg_131.insert(LegInterestAccrualDate_131.getString());
    FIX::LegIssueDate LegIssueDate_131("LOCALMKTDATE_1219745364");
    noLegs_0_1.set(LegIssueDate_131);
    InstrumentLeg_131.insert(LegIssueDate_131.getString());
    FIX::LegIssuer LegIssuer_131("STRING_1335843222");
    noLegs_0_1.set(LegIssuer_131);
    InstrumentLeg_131.insert(LegIssuer_131.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_131("STRING_797197555");
    noLegs_0_1.set(LegLocaleOfIssue_131);
    InstrumentLeg_131.insert(LegLocaleOfIssue_131.getString());
    FIX::LegMaturityDate LegMaturityDate_131("LOCALMKTDATE_256181161");
    noLegs_0_1.set(LegMaturityDate_131);
    InstrumentLeg_131.insert(LegMaturityDate_131.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_131("MONTHYEAR_1523478356");
    noLegs_0_1.set(LegMaturityMonthYear_131);
    InstrumentLeg_131.insert(LegMaturityMonthYear_131.getString());
    FIX::LegMaturityTime LegMaturityTime_131("TZTIMEONLY_76947189");
    noLegs_0_1.set(LegMaturityTime_131);
    InstrumentLeg_131.insert(LegMaturityTime_131.getString());
    FIX::LegOptAttribute LegOptAttribute_131('1');
    noLegs_0_1.set(LegOptAttribute_131);
    InstrumentLeg_131.insert(LegOptAttribute_131.getString());
    FIX::LegOptionRatio LegOptionRatio_131;
    LegOptionRatio_131.setString("5390714");
    noLegs_0_1.set(LegOptionRatio_131);
    InstrumentLeg_131.insert(LegOptionRatio_131.getString());
    FIX::LegPool LegPool_131("STRING_1133455583");
    noLegs_0_1.set(LegPool_131);
    InstrumentLeg_131.insert(LegPool_131.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_131("STRING_1249433530");
    noLegs_0_1.set(LegPriceUnitOfMeasure_131);
    InstrumentLeg_131.insert(LegPriceUnitOfMeasure_131.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_131;
    LegPriceUnitOfMeasureQty_131.setString("2373954");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_131);
    InstrumentLeg_131.insert(LegPriceUnitOfMeasureQty_131.getString());
    FIX::LegProduct LegProduct_131(1236365359);
    noLegs_0_1.set(LegProduct_131);
    InstrumentLeg_131.insert(LegProduct_131.getString());
    FIX::LegPutOrCall LegPutOrCall_131(138849753);
    noLegs_0_1.set(LegPutOrCall_131);
    InstrumentLeg_131.insert(LegPutOrCall_131.getString());
    FIX::LegRatioQty LegRatioQty_131;
    LegRatioQty_131.setString("2612073");
    noLegs_0_1.set(LegRatioQty_131);
    InstrumentLeg_131.insert(LegRatioQty_131.getString());
    FIX::LegRedemptionDate LegRedemptionDate_131("LOCALMKTDATE_1719967878");
    noLegs_0_1.set(LegRedemptionDate_131);
    InstrumentLeg_131.insert(LegRedemptionDate_131.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_131("STRING_303565601");
    noLegs_0_1.set(LegRepoCollateralSecurityType_131);
    InstrumentLeg_131.insert(LegRepoCollateralSecurityType_131.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_131;
    LegRepurchaseRate_131.setString("34.990000");
    noLegs_0_1.set(LegRepurchaseRate_131);
    InstrumentLeg_131.insert(LegRepurchaseRate_131.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_131(1559975723);
    noLegs_0_1.set(LegRepurchaseTerm_131);
    InstrumentLeg_131.insert(LegRepurchaseTerm_131.getString());
    FIX::LegSecurityDesc LegSecurityDesc_131("STRING_682751799");
    noLegs_0_1.set(LegSecurityDesc_131);
    InstrumentLeg_131.insert(LegSecurityDesc_131.getString());
    FIX::LegSecurityExchange LegSecurityExchange_131("EXCHANGE_1448236087");
    noLegs_0_1.set(LegSecurityExchange_131);
    InstrumentLeg_131.insert(LegSecurityExchange_131.getString());
    FIX::LegSecurityID LegSecurityID_131("STRING_889193106");
    noLegs_0_1.set(LegSecurityID_131);
    InstrumentLeg_131.insert(LegSecurityID_131.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_131("STRING_320422145");
    noLegs_0_1.set(LegSecurityIDSource_131);
    InstrumentLeg_131.insert(LegSecurityIDSource_131.getString());
    FIX::LegSecuritySubType LegSecuritySubType_131("STRING_1826771446");
    noLegs_0_1.set(LegSecuritySubType_131);
    InstrumentLeg_131.insert(LegSecuritySubType_131.getString());
    FIX::LegSecurityType LegSecurityType_131("STRING_1951935180");
    noLegs_0_1.set(LegSecurityType_131);
    InstrumentLeg_131.insert(LegSecurityType_131.getString());
    FIX::LegSide LegSide_131('6');
    noLegs_0_1.set(LegSide_131);
    InstrumentLeg_131.insert(LegSide_131.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_131("STRING_1136468762");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_131);
    InstrumentLeg_131.insert(LegStateOrProvinceOfIssue_131.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_131("GBP");
    noLegs_0_1.set(LegStrikeCurrency_131);
    InstrumentLeg_131.insert(LegStrikeCurrency_131.getString());
    FIX::LegStrikePrice LegStrikePrice_131;
    LegStrikePrice_131.setString("14943547");
    noLegs_0_1.set(LegStrikePrice_131);
    InstrumentLeg_131.insert(LegStrikePrice_131.getString());
    FIX::LegSymbol LegSymbol_131("STRING_1607099525");
    noLegs_0_1.set(LegSymbol_131);
    InstrumentLeg_131.insert(LegSymbol_131.getString());
    FIX::LegSymbolSfx LegSymbolSfx_131("STRING_987142261");
    noLegs_0_1.set(LegSymbolSfx_131);
    InstrumentLeg_131.insert(LegSymbolSfx_131.getString());
    FIX::LegTimeUnit LegTimeUnit_131("STRING_566616462");
    noLegs_0_1.set(LegTimeUnit_131);
    InstrumentLeg_131.insert(LegTimeUnit_131.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_131("STRING_795459099");
    noLegs_0_1.set(LegUnitOfMeasure_131);
    InstrumentLeg_131.insert(LegUnitOfMeasure_131.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_131;
    LegUnitOfMeasureQty_131.setString("17843398");
    noLegs_0_1.set(LegUnitOfMeasureQty_131);
    InstrumentLeg_131.insert(LegUnitOfMeasureQty_131.getString());
    all_values.push_back(InstrumentLeg_131);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_264;
      FIX::LegSecurityAltID LegSecurityAltID_264("STRING_171453807");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_264);
      LegSecAltIDGrp_NoLegSecurityAltID_264.insert(LegSecurityAltID_264.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_264("STRING_1861287006");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_264);
      LegSecAltIDGrp_NoLegSecurityAltID_264.insert(LegSecurityAltIDSource_264.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_264);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_265;
      FIX::LegSecurityAltID LegSecurityAltID_265("STRING_1869171015");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_265);
      LegSecAltIDGrp_NoLegSecurityAltID_265.insert(LegSecurityAltID_265.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_265("STRING_710525282");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_265);
      LegSecAltIDGrp_NoLegSecurityAltID_265.insert(LegSecurityAltIDSource_265.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_265);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_266;
      FIX::LegSecurityAltID LegSecurityAltID_266("STRING_847258941");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_266);
      LegSecAltIDGrp_NoLegSecurityAltID_266.insert(LegSecurityAltID_266.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_266("STRING_971120897");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_266);
      LegSecAltIDGrp_NoLegSecurityAltID_266.insert(LegSecurityAltIDSource_266.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_266);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_132;
    FIX::EncodedLegIssuer EncodedLegIssuer_132("DATA_947920718");
    noLegs_0_2.set(EncodedLegIssuer_132);
    InstrumentLeg_132.insert(EncodedLegIssuer_132.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_132(2083624301);
    noLegs_0_2.set(EncodedLegIssuerLen_132);
    InstrumentLeg_132.insert(EncodedLegIssuerLen_132.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_132("DATA_1109970650");
    noLegs_0_2.set(EncodedLegSecurityDesc_132);
    InstrumentLeg_132.insert(EncodedLegSecurityDesc_132.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_132(1209128094);
    noLegs_0_2.set(EncodedLegSecurityDescLen_132);
    InstrumentLeg_132.insert(EncodedLegSecurityDescLen_132.getString());
    FIX::LegCFICode LegCFICode_132("STRING_1656108531");
    noLegs_0_2.set(LegCFICode_132);
    InstrumentLeg_132.insert(LegCFICode_132.getString());
    FIX::LegContractMultiplier LegContractMultiplier_132;
    LegContractMultiplier_132.setString("14135362");
    noLegs_0_2.set(LegContractMultiplier_132);
    InstrumentLeg_132.insert(LegContractMultiplier_132.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_132(1762701593);
    noLegs_0_2.set(LegContractMultiplierUnit_132);
    InstrumentLeg_132.insert(LegContractMultiplierUnit_132.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_132("MONTHYEAR_1068600606");
    noLegs_0_2.set(LegContractSettlMonth_132);
    InstrumentLeg_132.insert(LegContractSettlMonth_132.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_132("COUNTRY_2096288051");
    noLegs_0_2.set(LegCountryOfIssue_132);
    InstrumentLeg_132.insert(LegCountryOfIssue_132.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_132("LOCALMKTDATE_1063454033");
    noLegs_0_2.set(LegCouponPaymentDate_132);
    InstrumentLeg_132.insert(LegCouponPaymentDate_132.getString());
    FIX::LegCouponRate LegCouponRate_132;
    LegCouponRate_132.setString("37.130000");
    noLegs_0_2.set(LegCouponRate_132);
    InstrumentLeg_132.insert(LegCouponRate_132.getString());
    FIX::LegCreditRating LegCreditRating_132("STRING_269226548");
    noLegs_0_2.set(LegCreditRating_132);
    InstrumentLeg_132.insert(LegCreditRating_132.getString());
    FIX::LegCurrency LegCurrency_132("CAN");
    noLegs_0_2.set(LegCurrency_132);
    InstrumentLeg_132.insert(LegCurrency_132.getString());
    FIX::LegDatedDate LegDatedDate_132("LOCALMKTDATE_960667263");
    noLegs_0_2.set(LegDatedDate_132);
    InstrumentLeg_132.insert(LegDatedDate_132.getString());
    FIX::LegExerciseStyle LegExerciseStyle_132(1879210594);
    noLegs_0_2.set(LegExerciseStyle_132);
    InstrumentLeg_132.insert(LegExerciseStyle_132.getString());
    FIX::LegFactor LegFactor_132;
    LegFactor_132.setString("21271914");
    noLegs_0_2.set(LegFactor_132);
    InstrumentLeg_132.insert(LegFactor_132.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_132(1998470135);
    noLegs_0_2.set(LegFlowScheduleType_132);
    InstrumentLeg_132.insert(LegFlowScheduleType_132.getString());
    FIX::LegInstrRegistry LegInstrRegistry_132("STRING_1226081692");
    noLegs_0_2.set(LegInstrRegistry_132);
    InstrumentLeg_132.insert(LegInstrRegistry_132.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_132("LOCALMKTDATE_1586807315");
    noLegs_0_2.set(LegInterestAccrualDate_132);
    InstrumentLeg_132.insert(LegInterestAccrualDate_132.getString());
    FIX::LegIssueDate LegIssueDate_132("LOCALMKTDATE_838128749");
    noLegs_0_2.set(LegIssueDate_132);
    InstrumentLeg_132.insert(LegIssueDate_132.getString());
    FIX::LegIssuer LegIssuer_132("STRING_1792698155");
    noLegs_0_2.set(LegIssuer_132);
    InstrumentLeg_132.insert(LegIssuer_132.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_132("STRING_234782766");
    noLegs_0_2.set(LegLocaleOfIssue_132);
    InstrumentLeg_132.insert(LegLocaleOfIssue_132.getString());
    FIX::LegMaturityDate LegMaturityDate_132("LOCALMKTDATE_474984918");
    noLegs_0_2.set(LegMaturityDate_132);
    InstrumentLeg_132.insert(LegMaturityDate_132.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_132("MONTHYEAR_468012131");
    noLegs_0_2.set(LegMaturityMonthYear_132);
    InstrumentLeg_132.insert(LegMaturityMonthYear_132.getString());
    FIX::LegMaturityTime LegMaturityTime_132("TZTIMEONLY_406236573");
    noLegs_0_2.set(LegMaturityTime_132);
    InstrumentLeg_132.insert(LegMaturityTime_132.getString());
    FIX::LegOptAttribute LegOptAttribute_132('1');
    noLegs_0_2.set(LegOptAttribute_132);
    InstrumentLeg_132.insert(LegOptAttribute_132.getString());
    FIX::LegOptionRatio LegOptionRatio_132;
    LegOptionRatio_132.setString("1896994");
    noLegs_0_2.set(LegOptionRatio_132);
    InstrumentLeg_132.insert(LegOptionRatio_132.getString());
    FIX::LegPool LegPool_132("STRING_1116761855");
    noLegs_0_2.set(LegPool_132);
    InstrumentLeg_132.insert(LegPool_132.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_132("STRING_1036047218");
    noLegs_0_2.set(LegPriceUnitOfMeasure_132);
    InstrumentLeg_132.insert(LegPriceUnitOfMeasure_132.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_132;
    LegPriceUnitOfMeasureQty_132.setString("11608203");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_132);
    InstrumentLeg_132.insert(LegPriceUnitOfMeasureQty_132.getString());
    FIX::LegProduct LegProduct_132(2064682573);
    noLegs_0_2.set(LegProduct_132);
    InstrumentLeg_132.insert(LegProduct_132.getString());
    FIX::LegPutOrCall LegPutOrCall_132(972187871);
    noLegs_0_2.set(LegPutOrCall_132);
    InstrumentLeg_132.insert(LegPutOrCall_132.getString());
    FIX::LegRatioQty LegRatioQty_132;
    LegRatioQty_132.setString("1233073");
    noLegs_0_2.set(LegRatioQty_132);
    InstrumentLeg_132.insert(LegRatioQty_132.getString());
    FIX::LegRedemptionDate LegRedemptionDate_132("LOCALMKTDATE_1126327019");
    noLegs_0_2.set(LegRedemptionDate_132);
    InstrumentLeg_132.insert(LegRedemptionDate_132.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_132("STRING_480812754");
    noLegs_0_2.set(LegRepoCollateralSecurityType_132);
    InstrumentLeg_132.insert(LegRepoCollateralSecurityType_132.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_132;
    LegRepurchaseRate_132.setString("36.500000");
    noLegs_0_2.set(LegRepurchaseRate_132);
    InstrumentLeg_132.insert(LegRepurchaseRate_132.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_132(741544965);
    noLegs_0_2.set(LegRepurchaseTerm_132);
    InstrumentLeg_132.insert(LegRepurchaseTerm_132.getString());
    FIX::LegSecurityDesc LegSecurityDesc_132("STRING_1549413361");
    noLegs_0_2.set(LegSecurityDesc_132);
    InstrumentLeg_132.insert(LegSecurityDesc_132.getString());
    FIX::LegSecurityExchange LegSecurityExchange_132("EXCHANGE_1485648053");
    noLegs_0_2.set(LegSecurityExchange_132);
    InstrumentLeg_132.insert(LegSecurityExchange_132.getString());
    FIX::LegSecurityID LegSecurityID_132("STRING_1804998998");
    noLegs_0_2.set(LegSecurityID_132);
    InstrumentLeg_132.insert(LegSecurityID_132.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_132("STRING_1359723426");
    noLegs_0_2.set(LegSecurityIDSource_132);
    InstrumentLeg_132.insert(LegSecurityIDSource_132.getString());
    FIX::LegSecuritySubType LegSecuritySubType_132("STRING_1754874601");
    noLegs_0_2.set(LegSecuritySubType_132);
    InstrumentLeg_132.insert(LegSecuritySubType_132.getString());
    FIX::LegSecurityType LegSecurityType_132("STRING_400257181");
    noLegs_0_2.set(LegSecurityType_132);
    InstrumentLeg_132.insert(LegSecurityType_132.getString());
    FIX::LegSide LegSide_132('9');
    noLegs_0_2.set(LegSide_132);
    InstrumentLeg_132.insert(LegSide_132.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_132("STRING_568058216");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_132);
    InstrumentLeg_132.insert(LegStateOrProvinceOfIssue_132.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_132("CHF");
    noLegs_0_2.set(LegStrikeCurrency_132);
    InstrumentLeg_132.insert(LegStrikeCurrency_132.getString());
    FIX::LegStrikePrice LegStrikePrice_132;
    LegStrikePrice_132.setString("4190447");
    noLegs_0_2.set(LegStrikePrice_132);
    InstrumentLeg_132.insert(LegStrikePrice_132.getString());
    FIX::LegSymbol LegSymbol_132("STRING_1358065820");
    noLegs_0_2.set(LegSymbol_132);
    InstrumentLeg_132.insert(LegSymbol_132.getString());
    FIX::LegSymbolSfx LegSymbolSfx_132("STRING_393516481");
    noLegs_0_2.set(LegSymbolSfx_132);
    InstrumentLeg_132.insert(LegSymbolSfx_132.getString());
    FIX::LegTimeUnit LegTimeUnit_132("STRING_1257173453");
    noLegs_0_2.set(LegTimeUnit_132);
    InstrumentLeg_132.insert(LegTimeUnit_132.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_132("STRING_1003280327");
    noLegs_0_2.set(LegUnitOfMeasure_132);
    InstrumentLeg_132.insert(LegUnitOfMeasure_132.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_132;
    LegUnitOfMeasureQty_132.setString("6282992");
    noLegs_0_2.set(LegUnitOfMeasureQty_132);
    InstrumentLeg_132.insert(LegUnitOfMeasureQty_132.getString());
    all_values.push_back(InstrumentLeg_132);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_267;
      FIX::LegSecurityAltID LegSecurityAltID_267("STRING_1471292458");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_267);
      LegSecAltIDGrp_NoLegSecurityAltID_267.insert(LegSecurityAltID_267.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_267("STRING_1034535821");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_267);
      LegSecAltIDGrp_NoLegSecurityAltID_267.insert(LegSecurityAltIDSource_267.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_267);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_268;
      FIX::LegSecurityAltID LegSecurityAltID_268("STRING_1920946647");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_268);
      LegSecAltIDGrp_NoLegSecurityAltID_268.insert(LegSecurityAltID_268.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_268("STRING_1660991956");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_268);
      LegSecAltIDGrp_NoLegSecurityAltID_268.insert(LegSecurityAltIDSource_268.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_268);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_269;
      FIX::LegSecurityAltID LegSecurityAltID_269("STRING_3814028");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_269);
      LegSecAltIDGrp_NoLegSecurityAltID_269.insert(LegSecurityAltID_269.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_269("STRING_809510217");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_269);
      LegSecAltIDGrp_NoLegSecurityAltID_269.insert(LegSecurityAltIDSource_269.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_269);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_80;
  FIX::AttachmentPoint AttachmentPoint_80;
  AttachmentPoint_80.setString("87.030000");
  msg.set(AttachmentPoint_80);
  Instrument_80.insert(AttachmentPoint_80.getString());
  FIX::CFICode CFICode_80("STRING_2068496602");
  msg.set(CFICode_80);
  Instrument_80.insert(CFICode_80.getString());
  FIX::CPProgram CPProgram_80(99);
  msg.set(CPProgram_80);
  Instrument_80.insert(CPProgram_80.getString());
  FIX::CPRegType CPRegType_80("STRING_797636101");
  msg.set(CPRegType_80);
  Instrument_80.insert(CPRegType_80.getString());
  FIX::CapPrice CapPrice_80;
  CapPrice_80.setString("10473399");
  msg.set(CapPrice_80);
  Instrument_80.insert(CapPrice_80.getString());
  FIX::ContractMultiplier ContractMultiplier_80;
  ContractMultiplier_80.setString("1150271");
  msg.set(ContractMultiplier_80);
  Instrument_80.insert(ContractMultiplier_80.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_80(1);
  msg.set(ContractMultiplierUnit_80);
  Instrument_80.insert(ContractMultiplierUnit_80.getString());
  FIX::ContractSettlMonth ContractSettlMonth_80("MONTHYEAR_1788884938");
  msg.set(ContractSettlMonth_80);
  Instrument_80.insert(ContractSettlMonth_80.getString());
  FIX::CountryOfIssue CountryOfIssue_80("COUNTRY_1664440556");
  msg.set(CountryOfIssue_80);
  Instrument_80.insert(CountryOfIssue_80.getString());
  FIX::CouponPaymentDate CouponPaymentDate_80("LOCALMKTDATE_1672644156");
  msg.set(CouponPaymentDate_80);
  Instrument_80.insert(CouponPaymentDate_80.getString());
  FIX::CouponRate CouponRate_80;
  CouponRate_80.setString("2.880000");
  msg.set(CouponRate_80);
  Instrument_80.insert(CouponRate_80.getString());
  FIX::CreditRating CreditRating_80("STRING_876680334");
  msg.set(CreditRating_80);
  Instrument_80.insert(CreditRating_80.getString());
  FIX::DatedDate DatedDate_80("LOCALMKTDATE_1280035109");
  msg.set(DatedDate_80);
  Instrument_80.insert(DatedDate_80.getString());
  FIX::DetachmentPoint DetachmentPoint_80;
  DetachmentPoint_80.setString("74.700000");
  msg.set(DetachmentPoint_80);
  Instrument_80.insert(DetachmentPoint_80.getString());
  FIX::EncodedIssuer EncodedIssuer_80("DATA_1851165357");
  msg.set(EncodedIssuer_80);
  Instrument_80.insert(EncodedIssuer_80.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_80(1848093326);
  msg.set(EncodedIssuerLen_80);
  Instrument_80.insert(EncodedIssuerLen_80.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_80("DATA_1978641597");
  msg.set(EncodedSecurityDesc_80);
  Instrument_80.insert(EncodedSecurityDesc_80.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_80(657874522);
  msg.set(EncodedSecurityDescLen_80);
  Instrument_80.insert(EncodedSecurityDescLen_80.getString());
  FIX::ExerciseStyle ExerciseStyle_80(0);
  msg.set(ExerciseStyle_80);
  Instrument_80.insert(ExerciseStyle_80.getString());
  FIX::Factor Factor_80;
  Factor_80.setString("11892237");
  msg.set(Factor_80);
  Instrument_80.insert(Factor_80.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_80(false);
  msg.set(FlexProductEligibilityIndicator_80);
  Instrument_80.insert(FlexProductEligibilityIndicator_80.getString());
  FIX::FlexibleIndicator FlexibleIndicator_80(false);
  msg.set(FlexibleIndicator_80);
  Instrument_80.insert(FlexibleIndicator_80.getString());
  FIX::FloorPrice FloorPrice_80;
  FloorPrice_80.setString("450204");
  msg.set(FloorPrice_80);
  Instrument_80.insert(FloorPrice_80.getString());
  FIX::FlowScheduleType FlowScheduleType_80(1);
  msg.set(FlowScheduleType_80);
  Instrument_80.insert(FlowScheduleType_80.getString());
  FIX::InstrRegistry InstrRegistry_80("STRING_961502558");
  msg.set(InstrRegistry_80);
  Instrument_80.insert(InstrRegistry_80.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_80('1');
  msg.set(InstrmtAssignmentMethod_80);
  Instrument_80.insert(InstrmtAssignmentMethod_80.getString());
  FIX::InterestAccrualDate InterestAccrualDate_80("LOCALMKTDATE_566742424");
  msg.set(InterestAccrualDate_80);
  Instrument_80.insert(InterestAccrualDate_80.getString());
  FIX::IssueDate IssueDate_80("LOCALMKTDATE_734965557");
  msg.set(IssueDate_80);
  Instrument_80.insert(IssueDate_80.getString());
  FIX::Issuer Issuer_80("STRING_1029821214");
  msg.set(Issuer_80);
  Instrument_80.insert(Issuer_80.getString());
  FIX::ListMethod ListMethod_80(0);
  msg.set(ListMethod_80);
  Instrument_80.insert(ListMethod_80.getString());
  FIX::LocaleOfIssue LocaleOfIssue_80("STRING_1544475775");
  msg.set(LocaleOfIssue_80);
  Instrument_80.insert(LocaleOfIssue_80.getString());
  FIX::MaturityDate MaturityDate_80("LOCALMKTDATE_1704149918");
  msg.set(MaturityDate_80);
  Instrument_80.insert(MaturityDate_80.getString());
  FIX::MaturityMonthYear MaturityMonthYear_80("MONTHYEAR_491569406");
  msg.set(MaturityMonthYear_80);
  Instrument_80.insert(MaturityMonthYear_80.getString());
  FIX::MaturityTime MaturityTime_80("TZTIMEONLY_1178690215");
  msg.set(MaturityTime_80);
  Instrument_80.insert(MaturityTime_80.getString());
  FIX::MinPriceIncrement MinPriceIncrement_80;
  MinPriceIncrement_80.setString("3543023");
  msg.set(MinPriceIncrement_80);
  Instrument_80.insert(MinPriceIncrement_80.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_80;
  MinPriceIncrementAmount_80.setString("15389093");
  msg.set(MinPriceIncrementAmount_80);
  Instrument_80.insert(MinPriceIncrementAmount_80.getString());
  FIX::NTPositionLimit NTPositionLimit_80(1293717410);
  msg.set(NTPositionLimit_80);
  Instrument_80.insert(NTPositionLimit_80.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_80;
  NotionalPercentageOutstanding_80.setString("84.750000");
  msg.set(NotionalPercentageOutstanding_80);
  Instrument_80.insert(NotionalPercentageOutstanding_80.getString());
  FIX::OptAttribute OptAttribute_80('1');
  msg.set(OptAttribute_80);
  Instrument_80.insert(OptAttribute_80.getString());
  FIX::OptPayoutAmount OptPayoutAmount_80;
  OptPayoutAmount_80.setString("8106743");
  msg.set(OptPayoutAmount_80);
  Instrument_80.insert(OptPayoutAmount_80.getString());
  FIX::OptPayoutType OptPayoutType_80(2);
  msg.set(OptPayoutType_80);
  Instrument_80.insert(OptPayoutType_80.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_80;
  OriginalNotionalPercentageOutstanding_80.setString("73.110000");
  msg.set(OriginalNotionalPercentageOutstanding_80);
  Instrument_80.insert(OriginalNotionalPercentageOutstanding_80.getString());
  FIX::Pool Pool_80("STRING_1687354652");
  msg.set(Pool_80);
  Instrument_80.insert(Pool_80.getString());
  FIX::PositionLimit PositionLimit_80(1346494093);
  msg.set(PositionLimit_80);
  Instrument_80.insert(PositionLimit_80.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_80("STRING_INX");
  msg.set(PriceQuoteMethod_80);
  Instrument_80.insert(PriceQuoteMethod_80.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_80("STRING_1391036361");
  msg.set(PriceUnitOfMeasure_80);
  Instrument_80.insert(PriceUnitOfMeasure_80.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_80;
  PriceUnitOfMeasureQty_80.setString("10471037");
  msg.set(PriceUnitOfMeasureQty_80);
  Instrument_80.insert(PriceUnitOfMeasureQty_80.getString());
  FIX::Product Product_82(1);
  msg.set(Product_82);
  Instrument_80.insert(Product_82.getString());
  FIX::ProductComplex ProductComplex_80("STRING_2048910884");
  msg.set(ProductComplex_80);
  Instrument_80.insert(ProductComplex_80.getString());
  FIX::PutOrCall PutOrCall_80(1);
  msg.set(PutOrCall_80);
  Instrument_80.insert(PutOrCall_80.getString());
  FIX::RedemptionDate RedemptionDate_80("LOCALMKTDATE_1198782852");
  msg.set(RedemptionDate_80);
  Instrument_80.insert(RedemptionDate_80.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_80("STRING_952818239");
  msg.set(RepoCollateralSecurityType_80);
  Instrument_80.insert(RepoCollateralSecurityType_80.getString());
  FIX::RepurchaseRate RepurchaseRate_80;
  RepurchaseRate_80.setString("23.400000");
  msg.set(RepurchaseRate_80);
  Instrument_80.insert(RepurchaseRate_80.getString());
  FIX::RepurchaseTerm RepurchaseTerm_80(1243803300);
  msg.set(RepurchaseTerm_80);
  Instrument_80.insert(RepurchaseTerm_80.getString());
  FIX::RestructuringType RestructuringType_80("STRING_MM");
  msg.set(RestructuringType_80);
  Instrument_80.insert(RestructuringType_80.getString());
  FIX::SecurityDesc SecurityDesc_80("STRING_1357604898");
  msg.set(SecurityDesc_80);
  Instrument_80.insert(SecurityDesc_80.getString());
  FIX::SecurityExchange SecurityExchange_80("EXCHANGE_612632559");
  msg.set(SecurityExchange_80);
  Instrument_80.insert(SecurityExchange_80.getString());
  FIX::SecurityGroup SecurityGroup_80("STRING_1051767266");
  msg.set(SecurityGroup_80);
  Instrument_80.insert(SecurityGroup_80.getString());
  FIX::SecurityID SecurityID_80("STRING_2092570455");
  msg.set(SecurityID_80);
  Instrument_80.insert(SecurityID_80.getString());
  FIX::SecurityIDSource SecurityIDSource_80("STRING_G");
  msg.set(SecurityIDSource_80);
  Instrument_80.insert(SecurityIDSource_80.getString());
  FIX::SecurityStatus SecurityStatus_81("STRING_2");
  msg.set(SecurityStatus_81);
  Instrument_80.insert(SecurityStatus_81.getString());
  FIX::SecuritySubType SecuritySubType_81("STRING_1489562582");
  msg.set(SecuritySubType_81);
  Instrument_80.insert(SecuritySubType_81.getString());
  FIX::SecurityType SecurityType_82("STRING_SECPLEDGE");
  msg.set(SecurityType_82);
  Instrument_80.insert(SecurityType_82.getString());
  FIX::Seniority Seniority_80("STRING_SB");
  msg.set(Seniority_80);
  Instrument_80.insert(Seniority_80.getString());
  FIX::SettlMethod SettlMethod_80('C');
  msg.set(SettlMethod_80);
  Instrument_80.insert(SettlMethod_80.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_80("STRING_1553422415");
  msg.set(SettleOnOpenFlag_80);
  Instrument_80.insert(SettleOnOpenFlag_80.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_80("STRING_1505318857");
  msg.set(StateOrProvinceOfIssue_80);
  Instrument_80.insert(StateOrProvinceOfIssue_80.getString());
  FIX::StrikeCurrency StrikeCurrency_80("GBP");
  msg.set(StrikeCurrency_80);
  Instrument_80.insert(StrikeCurrency_80.getString());
  FIX::StrikeMultiplier StrikeMultiplier_80;
  StrikeMultiplier_80.setString("5381458");
  msg.set(StrikeMultiplier_80);
  Instrument_80.insert(StrikeMultiplier_80.getString());
  FIX::StrikePrice StrikePrice_80;
  StrikePrice_80.setString("4776772");
  msg.set(StrikePrice_80);
  Instrument_80.insert(StrikePrice_80.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_80(1);
  msg.set(StrikePriceBoundaryMethod_80);
  Instrument_80.insert(StrikePriceBoundaryMethod_80.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_80;
  StrikePriceBoundaryPrecision_80.setString("31.910000");
  msg.set(StrikePriceBoundaryPrecision_80);
  Instrument_80.insert(StrikePriceBoundaryPrecision_80.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_80(4);
  msg.set(StrikePriceDeterminationMethod_80);
  Instrument_80.insert(StrikePriceDeterminationMethod_80.getString());
  FIX::StrikeValue StrikeValue_80;
  StrikeValue_80.setString("13601903");
  msg.set(StrikeValue_80);
  Instrument_80.insert(StrikeValue_80.getString());
  FIX::Symbol Symbol_80("STRING_1195774324");
  msg.set(Symbol_80);
  Instrument_80.insert(Symbol_80.getString());
  FIX::SymbolSfx SymbolSfx_80("STRING_WI");
  msg.set(SymbolSfx_80);
  Instrument_80.insert(SymbolSfx_80.getString());
  FIX::TimeUnit TimeUnit_80("STRING_S");
  msg.set(TimeUnit_80);
  Instrument_80.insert(TimeUnit_80.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_80(3);
  msg.set(UnderlyingPriceDeterminationMethod_80);
  Instrument_80.insert(UnderlyingPriceDeterminationMethod_80.getString());
  FIX::UnitOfMeasure UnitOfMeasure_80("STRING_Bcf");
  msg.set(UnitOfMeasure_80);
  Instrument_80.insert(UnitOfMeasure_80.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_80;
  UnitOfMeasureQty_80.setString("14265685");
  msg.set(UnitOfMeasureQty_80);
  Instrument_80.insert(UnitOfMeasureQty_80.getString());
  FIX::ValuationMethod ValuationMethod_80("STRING_EQTY");
  msg.set(ValuationMethod_80);
  Instrument_80.insert(ValuationMethod_80.getString());
  all_values.push_back(Instrument_80);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_152;
    FIX::ComplexEventCondition ComplexEventCondition_152(1);
    noComplexEvents_0_0.set(ComplexEventCondition_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventCondition_152.getString());
    FIX::ComplexEventPrice ComplexEventPrice_152;
    ComplexEventPrice_152.setString("15004359");
    noComplexEvents_0_0.set(ComplexEventPrice_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPrice_152.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_152(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryMethod_152.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_152;
    ComplexEventPriceBoundaryPrecision_152.setString("21.840000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryPrecision_152.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_152(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceTimeType_152.getString());
    FIX::ComplexEventType ComplexEventType_152(2);
    noComplexEvents_0_0.set(ComplexEventType_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventType_152.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_152;
    ComplexOptPayoutAmount_152.setString("9778789");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexOptPayoutAmount_152.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_152);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_313;
      FIX::ComplexEventEndDate ComplexEventEndDate_313(FIX::UTCTIMESTAMP(6, 11, 42, 0, 3, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventEndDate_313.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_313(FIX::UTCTIMESTAMP(8, 11, 40, 5, 3, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventStartDate_313.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_313);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_639;
        FIX::ComplexEventEndTime ComplexEventEndTime_639(FIX::UTCTIMEONLY(4, 25, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventEndTime_639.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_639(FIX::UTCTIMEONLY(20, 7, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventStartTime_639.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_639);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_158;
    FIX::EventDate EventDate_158("LOCALMKTDATE_1869951318");
    noEvents_0_0.set(EventDate_158);
    EvntGrp_NoEvents_158.insert(EventDate_158.getString());
    FIX::EventPx EventPx_158;
    EventPx_158.setString("1423022");
    noEvents_0_0.set(EventPx_158);
    EvntGrp_NoEvents_158.insert(EventPx_158.getString());
    FIX::EventText EventText_158("STRING_1633612403");
    noEvents_0_0.set(EventText_158);
    EvntGrp_NoEvents_158.insert(EventText_158.getString());
    FIX::EventTime EventTime_158(FIX::UTCTIMESTAMP(6, 27, 8, 7, 10, 2001));
    noEvents_0_0.set(EventTime_158);
    EvntGrp_NoEvents_158.insert(EventTime_158.getString());
    FIX::EventType EventType_158(14);
    noEvents_0_0.set(EventType_158);
    EvntGrp_NoEvents_158.insert(EventType_158.getString());
    all_values.push_back(EvntGrp_NoEvents_158);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_156;
    FIX::InstrumentPartyID InstrumentPartyID_156("STRING_2021379837");
    noInstrumentParties_0_0.set(InstrumentPartyID_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyID_156.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_156('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyIDSource_156.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_156(2132422739);
    noInstrumentParties_0_0.set(InstrumentPartyRole_156);
    InstrumentParties_NoInstrumentParties_156.insert(InstrumentPartyRole_156.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_156);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317;
      FIX::InstrumentPartySubID InstrumentPartySubID_317("STRING_1160432668");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_317);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubID_317.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_317(970346311);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_317);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubIDType_317.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318;
      FIX::InstrumentPartySubID InstrumentPartySubID_318("STRING_2060778062");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_318);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubID_318.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_318(1019691382);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_318);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubIDType_318.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319;
      FIX::InstrumentPartySubID InstrumentPartySubID_319("STRING_1973301766");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_319);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubID_319.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_319(1300031958);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_319);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubIDType_319.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_172;
    FIX::SecurityAltID SecurityAltID_172("STRING_89874523");
    noSecurityAltID_0_0.set(SecurityAltID_172);
    SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltID_172.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_172("STRING_799096296");
    noSecurityAltID_0_0.set(SecurityAltIDSource_172);
    SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltIDSource_172.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_172);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_160;
  FIX::SecurityXML SecurityXML_161("XMLDATA_40123570");
  msg.set(SecurityXML_161);
  FIX::SecurityXMLLen SecurityXMLLen_80(1663942760);
  msg.set(SecurityXMLLen_80);
  FIX::SecurityXMLSchema SecurityXMLSchema_80("STRING_1724729228");
  msg.set(SecurityXMLSchema_80);
  SecurityXML_160.insert(SecurityXMLSchema_80.getString());
  all_values.push_back(SecurityXML_160);

  // InstrumentExtension
  multiset<string> InstrumentExtension_16;
  FIX::DeliveryForm DeliveryForm_16(2);
  msg.set(DeliveryForm_16);
  InstrumentExtension_16.insert(DeliveryForm_16.getString());
  FIX::PctAtRisk PctAtRisk_16;
  PctAtRisk_16.setString("37.740000");
  msg.set(PctAtRisk_16);
  InstrumentExtension_16.insert(PctAtRisk_16.getString());
  all_values.push_back(InstrumentExtension_16);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_31;
    FIX::InstrAttribType InstrAttribType_31(29);
    noInstrAttrib_0_0.set(InstrAttribType_31);
    AttrbGrp_NoInstrAttrib_31.insert(InstrAttribType_31.getString());
    FIX::InstrAttribValue InstrAttribValue_31("STRING_1348176055");
    noInstrAttrib_0_0.set(InstrAttribValue_31);
    AttrbGrp_NoInstrAttrib_31.insert(InstrAttribValue_31.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_31);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_125;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_125("DATA_1967642788");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingIssuer_125.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_125(995133222);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingIssuerLen_125.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_125("DATA_128202300");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDesc_125.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_125(1116250228);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDescLen_125.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_125;
    UnderlyingAdjustedQuantity_125.setString("17690689");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_125);
    UnderlyingInstrument_125.insert(UnderlyingAdjustedQuantity_125.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_125;
    UnderlyingAllocationPercent_125.setString("79.740000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_125);
    UnderlyingInstrument_125.insert(UnderlyingAllocationPercent_125.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_125;
    UnderlyingAttachmentPoint_125.setString("26.590000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_125);
    UnderlyingInstrument_125.insert(UnderlyingAttachmentPoint_125.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_125("STRING_1488909198");
    noUnderlyings_0_0.set(UnderlyingCFICode_125);
    UnderlyingInstrument_125.insert(UnderlyingCFICode_125.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_125("STRING_389377076");
    noUnderlyings_0_0.set(UnderlyingCPProgram_125);
    UnderlyingInstrument_125.insert(UnderlyingCPProgram_125.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_125("STRING_798428848");
    noUnderlyings_0_0.set(UnderlyingCPRegType_125);
    UnderlyingInstrument_125.insert(UnderlyingCPRegType_125.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_125;
    UnderlyingCapValue_125.setString("16599726");
    noUnderlyings_0_0.set(UnderlyingCapValue_125);
    UnderlyingInstrument_125.insert(UnderlyingCapValue_125.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_125;
    UnderlyingCashAmount_125.setString("3743161");
    noUnderlyings_0_0.set(UnderlyingCashAmount_125);
    UnderlyingInstrument_125.insert(UnderlyingCashAmount_125.getString());
    FIX::UnderlyingCashType UnderlyingCashType_125("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_125);
    UnderlyingInstrument_125.insert(UnderlyingCashType_125.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_125;
    UnderlyingContractMultiplier_125.setString("6729217");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_125);
    UnderlyingInstrument_125.insert(UnderlyingContractMultiplier_125.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_125(1344662478);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_125);
    UnderlyingInstrument_125.insert(UnderlyingContractMultiplierUnit_125.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_125("COUNTRY_598470452");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingCountryOfIssue_125.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_125("LOCALMKTDATE_1692613097");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_125);
    UnderlyingInstrument_125.insert(UnderlyingCouponPaymentDate_125.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_125;
    UnderlyingCouponRate_125.setString("5.960000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_125);
    UnderlyingInstrument_125.insert(UnderlyingCouponRate_125.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_125("STRING_1898502410");
    noUnderlyings_0_0.set(UnderlyingCreditRating_125);
    UnderlyingInstrument_125.insert(UnderlyingCreditRating_125.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_125("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_125);
    UnderlyingInstrument_125.insert(UnderlyingCurrency_125.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_125;
    UnderlyingCurrentValue_125.setString("5501150");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_125);
    UnderlyingInstrument_125.insert(UnderlyingCurrentValue_125.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_125;
    UnderlyingDetachmentPoint_125.setString("74.400000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_125);
    UnderlyingInstrument_125.insert(UnderlyingDetachmentPoint_125.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_125;
    UnderlyingDirtyPrice_125.setString("7768142");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_125);
    UnderlyingInstrument_125.insert(UnderlyingDirtyPrice_125.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_125;
    UnderlyingEndPrice_125.setString("1273606");
    noUnderlyings_0_0.set(UnderlyingEndPrice_125);
    UnderlyingInstrument_125.insert(UnderlyingEndPrice_125.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_125;
    UnderlyingEndValue_125.setString("20696164");
    noUnderlyings_0_0.set(UnderlyingEndValue_125);
    UnderlyingInstrument_125.insert(UnderlyingEndValue_125.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_125(1982688006);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_125);
    UnderlyingInstrument_125.insert(UnderlyingExerciseStyle_125.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_125;
    UnderlyingFXRate_125.setString("3054264");
    noUnderlyings_0_0.set(UnderlyingFXRate_125);
    UnderlyingInstrument_125.insert(UnderlyingFXRate_125.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_125('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_125);
    UnderlyingInstrument_125.insert(UnderlyingFXRateCalc_125.getString());
    FIX::UnderlyingFactor UnderlyingFactor_125;
    UnderlyingFactor_125.setString("11833804");
    noUnderlyings_0_0.set(UnderlyingFactor_125);
    UnderlyingInstrument_125.insert(UnderlyingFactor_125.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_125(2117104638);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_125);
    UnderlyingInstrument_125.insert(UnderlyingFlowScheduleType_125.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_125("STRING_2021882206");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_125);
    UnderlyingInstrument_125.insert(UnderlyingInstrRegistry_125.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_125("LOCALMKTDATE_31029988");
    noUnderlyings_0_0.set(UnderlyingIssueDate_125);
    UnderlyingInstrument_125.insert(UnderlyingIssueDate_125.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_125("STRING_97823291");
    noUnderlyings_0_0.set(UnderlyingIssuer_125);
    UnderlyingInstrument_125.insert(UnderlyingIssuer_125.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_125("STRING_990648786");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingLocaleOfIssue_125.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_125("LOCALMKTDATE_1800098981");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityDate_125.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_125("MONTHYEAR_1009991265");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityMonthYear_125.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_125("TZTIMEONLY_1915181446");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityTime_125.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_125;
    UnderlyingNotionalPercentageOutstanding_125.setString("45.310000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_125);
    UnderlyingInstrument_125.insert(UnderlyingNotionalPercentageOutstanding_125.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_125('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_125);
    UnderlyingInstrument_125.insert(UnderlyingOptAttribute_125.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_125;
    UnderlyingOriginalNotionalPercentageOutstanding_125.setString("66.460000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_125);
    UnderlyingInstrument_125.insert(UnderlyingOriginalNotionalPercentageOutstanding_125.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_125("STRING_654013577");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_125);
    UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasure_125.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_125;
    UnderlyingPriceUnitOfMeasureQty_125.setString("17736845");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_125);
    UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasureQty_125.getString());
    FIX::UnderlyingProduct UnderlyingProduct_125(1251302684);
    noUnderlyings_0_0.set(UnderlyingProduct_125);
    UnderlyingInstrument_125.insert(UnderlyingProduct_125.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_125(1326935292);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_125);
    UnderlyingInstrument_125.insert(UnderlyingPutOrCall_125.getString());
    FIX::UnderlyingPx UnderlyingPx_125;
    UnderlyingPx_125.setString("9708633");
    noUnderlyings_0_0.set(UnderlyingPx_125);
    UnderlyingInstrument_125.insert(UnderlyingPx_125.getString());
    FIX::UnderlyingQty UnderlyingQty_125;
    UnderlyingQty_125.setString("18497731");
    noUnderlyings_0_0.set(UnderlyingQty_125);
    UnderlyingInstrument_125.insert(UnderlyingQty_125.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_125("LOCALMKTDATE_872064741");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_125);
    UnderlyingInstrument_125.insert(UnderlyingRedemptionDate_125.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_125("STRING_2141343934");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_125);
    UnderlyingInstrument_125.insert(UnderlyingRepoCollateralSecurityType_125.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_125;
    UnderlyingRepurchaseRate_125.setString("18.980000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_125);
    UnderlyingInstrument_125.insert(UnderlyingRepurchaseRate_125.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_125(344434963);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_125);
    UnderlyingInstrument_125.insert(UnderlyingRepurchaseTerm_125.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_125("STRING_1254215406");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_125);
    UnderlyingInstrument_125.insert(UnderlyingRestructuringType_125.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_125("STRING_3423309");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityDesc_125.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_125("EXCHANGE_2004412403");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityExchange_125.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_125("STRING_2031029638");
    noUnderlyings_0_0.set(UnderlyingSecurityID_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityID_125.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_125("STRING_130783947");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityIDSource_125.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_125("STRING_1926545172");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_125);
    UnderlyingInstrument_125.insert(UnderlyingSecuritySubType_125.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_125("STRING_1866233996");
    noUnderlyings_0_0.set(UnderlyingSecurityType_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityType_125.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_125("STRING_436210384");
    noUnderlyings_0_0.set(UnderlyingSeniority_125);
    UnderlyingInstrument_125.insert(UnderlyingSeniority_125.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_125("STRING_1980784590");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_125);
    UnderlyingInstrument_125.insert(UnderlyingSettlMethod_125.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_125(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_125);
    UnderlyingInstrument_125.insert(UnderlyingSettlementType_125.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_125;
    UnderlyingStartValue_125.setString("4058313");
    noUnderlyings_0_0.set(UnderlyingStartValue_125);
    UnderlyingInstrument_125.insert(UnderlyingStartValue_125.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_125("STRING_1855183148");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingStateOrProvinceOfIssue_125.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_125("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_125);
    UnderlyingInstrument_125.insert(UnderlyingStrikeCurrency_125.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_125;
    UnderlyingStrikePrice_125.setString("6983482");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_125);
    UnderlyingInstrument_125.insert(UnderlyingStrikePrice_125.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_125("STRING_585776083");
    noUnderlyings_0_0.set(UnderlyingSymbol_125);
    UnderlyingInstrument_125.insert(UnderlyingSymbol_125.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_125("STRING_1513645931");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_125);
    UnderlyingInstrument_125.insert(UnderlyingSymbolSfx_125.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_125("STRING_466046084");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_125);
    UnderlyingInstrument_125.insert(UnderlyingTimeUnit_125.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_125("STRING_1727300614");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_125);
    UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasure_125.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_125;
    UnderlyingUnitOfMeasureQty_125.setString("7655306");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_125);
    UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasureQty_125.getString());
    all_values.push_back(UnderlyingInstrument_125);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_257;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_257("STRING_233830544");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_257);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltID_257.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_257("STRING_391731484");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_257);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltIDSource_257.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_246;
      FIX::UnderlyingStipType UnderlyingStipType_246("STRING_1560765836");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipType_246.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_246("STRING_1362594822");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipValue_246.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_246);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_248;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_248("STRING_285346929");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyID_248.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_248('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyIDSource_248.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_248(1439073153);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyRole_248.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_248);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_501("STRING_463186866");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_501);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubID_501.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_501(1442496462);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_501);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubIDType_501.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_502("STRING_486710647");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_502);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubID_502.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_502(346732856);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_502);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubIDType_502.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_249;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_249("STRING_1573280410");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyID_249.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_249('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyIDSource_249.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_249(65483205);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyRole_249.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_249);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_503("STRING_99073113");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_503);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubID_503.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_503(967613967);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_503);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubIDType_503.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_504("STRING_267838521");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_504);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubID_504.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_504(1954256261);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_504);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubIDType_504.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_505("STRING_1900774718");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_505);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubID_505.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_505(771493187);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_505);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubIDType_505.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_126;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_126("DATA_505120900");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingIssuer_126.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_126(339067153);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingIssuerLen_126.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_126("DATA_137655470");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDesc_126.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_126(971166984);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDescLen_126.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_126;
    UnderlyingAdjustedQuantity_126.setString("20663677");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_126);
    UnderlyingInstrument_126.insert(UnderlyingAdjustedQuantity_126.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_126;
    UnderlyingAllocationPercent_126.setString("60.940000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_126);
    UnderlyingInstrument_126.insert(UnderlyingAllocationPercent_126.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_126;
    UnderlyingAttachmentPoint_126.setString("97.150000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_126);
    UnderlyingInstrument_126.insert(UnderlyingAttachmentPoint_126.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_126("STRING_152714664");
    noUnderlyings_0_1.set(UnderlyingCFICode_126);
    UnderlyingInstrument_126.insert(UnderlyingCFICode_126.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_126("STRING_1294917578");
    noUnderlyings_0_1.set(UnderlyingCPProgram_126);
    UnderlyingInstrument_126.insert(UnderlyingCPProgram_126.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_126("STRING_2139331482");
    noUnderlyings_0_1.set(UnderlyingCPRegType_126);
    UnderlyingInstrument_126.insert(UnderlyingCPRegType_126.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_126;
    UnderlyingCapValue_126.setString("17134805");
    noUnderlyings_0_1.set(UnderlyingCapValue_126);
    UnderlyingInstrument_126.insert(UnderlyingCapValue_126.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_126;
    UnderlyingCashAmount_126.setString("5100287");
    noUnderlyings_0_1.set(UnderlyingCashAmount_126);
    UnderlyingInstrument_126.insert(UnderlyingCashAmount_126.getString());
    FIX::UnderlyingCashType UnderlyingCashType_126("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_126);
    UnderlyingInstrument_126.insert(UnderlyingCashType_126.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_126;
    UnderlyingContractMultiplier_126.setString("19988274");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_126);
    UnderlyingInstrument_126.insert(UnderlyingContractMultiplier_126.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_126(1866483861);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_126);
    UnderlyingInstrument_126.insert(UnderlyingContractMultiplierUnit_126.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_126("COUNTRY_1269202243");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingCountryOfIssue_126.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_126("LOCALMKTDATE_481125673");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_126);
    UnderlyingInstrument_126.insert(UnderlyingCouponPaymentDate_126.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_126;
    UnderlyingCouponRate_126.setString("70.790000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_126);
    UnderlyingInstrument_126.insert(UnderlyingCouponRate_126.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_126("STRING_564215057");
    noUnderlyings_0_1.set(UnderlyingCreditRating_126);
    UnderlyingInstrument_126.insert(UnderlyingCreditRating_126.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_126("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_126);
    UnderlyingInstrument_126.insert(UnderlyingCurrency_126.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_126;
    UnderlyingCurrentValue_126.setString("21374954");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_126);
    UnderlyingInstrument_126.insert(UnderlyingCurrentValue_126.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_126;
    UnderlyingDetachmentPoint_126.setString("84.910000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_126);
    UnderlyingInstrument_126.insert(UnderlyingDetachmentPoint_126.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_126;
    UnderlyingDirtyPrice_126.setString("5944031");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_126);
    UnderlyingInstrument_126.insert(UnderlyingDirtyPrice_126.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_126;
    UnderlyingEndPrice_126.setString("19995026");
    noUnderlyings_0_1.set(UnderlyingEndPrice_126);
    UnderlyingInstrument_126.insert(UnderlyingEndPrice_126.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_126;
    UnderlyingEndValue_126.setString("13326816");
    noUnderlyings_0_1.set(UnderlyingEndValue_126);
    UnderlyingInstrument_126.insert(UnderlyingEndValue_126.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_126(1562017108);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_126);
    UnderlyingInstrument_126.insert(UnderlyingExerciseStyle_126.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_126;
    UnderlyingFXRate_126.setString("1198574");
    noUnderlyings_0_1.set(UnderlyingFXRate_126);
    UnderlyingInstrument_126.insert(UnderlyingFXRate_126.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_126('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_126);
    UnderlyingInstrument_126.insert(UnderlyingFXRateCalc_126.getString());
    FIX::UnderlyingFactor UnderlyingFactor_126;
    UnderlyingFactor_126.setString("13153081");
    noUnderlyings_0_1.set(UnderlyingFactor_126);
    UnderlyingInstrument_126.insert(UnderlyingFactor_126.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_126(891350675);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_126);
    UnderlyingInstrument_126.insert(UnderlyingFlowScheduleType_126.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_126("STRING_1644575118");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_126);
    UnderlyingInstrument_126.insert(UnderlyingInstrRegistry_126.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_126("LOCALMKTDATE_1654375332");
    noUnderlyings_0_1.set(UnderlyingIssueDate_126);
    UnderlyingInstrument_126.insert(UnderlyingIssueDate_126.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_126("STRING_1029006145");
    noUnderlyings_0_1.set(UnderlyingIssuer_126);
    UnderlyingInstrument_126.insert(UnderlyingIssuer_126.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_126("STRING_468258455");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingLocaleOfIssue_126.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_126("LOCALMKTDATE_1573259452");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityDate_126.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_126("MONTHYEAR_1932192240");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityMonthYear_126.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_126("TZTIMEONLY_324114522");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityTime_126.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_126;
    UnderlyingNotionalPercentageOutstanding_126.setString("41.160000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_126);
    UnderlyingInstrument_126.insert(UnderlyingNotionalPercentageOutstanding_126.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_126('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_126);
    UnderlyingInstrument_126.insert(UnderlyingOptAttribute_126.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_126;
    UnderlyingOriginalNotionalPercentageOutstanding_126.setString("23.570000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_126);
    UnderlyingInstrument_126.insert(UnderlyingOriginalNotionalPercentageOutstanding_126.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_126("STRING_1291970968");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_126);
    UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasure_126.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_126;
    UnderlyingPriceUnitOfMeasureQty_126.setString("15896549");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_126);
    UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasureQty_126.getString());
    FIX::UnderlyingProduct UnderlyingProduct_126(146091446);
    noUnderlyings_0_1.set(UnderlyingProduct_126);
    UnderlyingInstrument_126.insert(UnderlyingProduct_126.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_126(1143314749);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_126);
    UnderlyingInstrument_126.insert(UnderlyingPutOrCall_126.getString());
    FIX::UnderlyingPx UnderlyingPx_126;
    UnderlyingPx_126.setString("13086551");
    noUnderlyings_0_1.set(UnderlyingPx_126);
    UnderlyingInstrument_126.insert(UnderlyingPx_126.getString());
    FIX::UnderlyingQty UnderlyingQty_126;
    UnderlyingQty_126.setString("14152936");
    noUnderlyings_0_1.set(UnderlyingQty_126);
    UnderlyingInstrument_126.insert(UnderlyingQty_126.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_126("LOCALMKTDATE_1624440422");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_126);
    UnderlyingInstrument_126.insert(UnderlyingRedemptionDate_126.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_126("STRING_1490842215");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_126);
    UnderlyingInstrument_126.insert(UnderlyingRepoCollateralSecurityType_126.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_126;
    UnderlyingRepurchaseRate_126.setString("87.470000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_126);
    UnderlyingInstrument_126.insert(UnderlyingRepurchaseRate_126.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_126(444793094);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_126);
    UnderlyingInstrument_126.insert(UnderlyingRepurchaseTerm_126.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_126("STRING_2019762151");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_126);
    UnderlyingInstrument_126.insert(UnderlyingRestructuringType_126.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_126("STRING_1969520566");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityDesc_126.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_126("EXCHANGE_1678401585");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityExchange_126.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_126("STRING_466681644");
    noUnderlyings_0_1.set(UnderlyingSecurityID_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityID_126.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_126("STRING_1821539532");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityIDSource_126.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_126("STRING_863599542");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_126);
    UnderlyingInstrument_126.insert(UnderlyingSecuritySubType_126.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_126("STRING_2028698753");
    noUnderlyings_0_1.set(UnderlyingSecurityType_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityType_126.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_126("STRING_1941397020");
    noUnderlyings_0_1.set(UnderlyingSeniority_126);
    UnderlyingInstrument_126.insert(UnderlyingSeniority_126.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_126("STRING_2003053761");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_126);
    UnderlyingInstrument_126.insert(UnderlyingSettlMethod_126.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_126(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_126);
    UnderlyingInstrument_126.insert(UnderlyingSettlementType_126.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_126;
    UnderlyingStartValue_126.setString("6852640");
    noUnderlyings_0_1.set(UnderlyingStartValue_126);
    UnderlyingInstrument_126.insert(UnderlyingStartValue_126.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_126("STRING_1500145231");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingStateOrProvinceOfIssue_126.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_126("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_126);
    UnderlyingInstrument_126.insert(UnderlyingStrikeCurrency_126.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_126;
    UnderlyingStrikePrice_126.setString("19684036");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_126);
    UnderlyingInstrument_126.insert(UnderlyingStrikePrice_126.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_126("STRING_129190771");
    noUnderlyings_0_1.set(UnderlyingSymbol_126);
    UnderlyingInstrument_126.insert(UnderlyingSymbol_126.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_126("STRING_1498978784");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_126);
    UnderlyingInstrument_126.insert(UnderlyingSymbolSfx_126.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_126("STRING_145034561");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_126);
    UnderlyingInstrument_126.insert(UnderlyingTimeUnit_126.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_126("STRING_1855164887");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_126);
    UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasure_126.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_126;
    UnderlyingUnitOfMeasureQty_126.setString("4311213");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_126);
    UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasureQty_126.getString());
    all_values.push_back(UnderlyingInstrument_126);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_258;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_258("STRING_999652207");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_258);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltID_258.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_258("STRING_2020776230");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_258);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltIDSource_258.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_259;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_259("STRING_607088364");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_259);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltID_259.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_259("STRING_2142966956");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_259);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltIDSource_259.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_247;
      FIX::UnderlyingStipType UnderlyingStipType_247("STRING_2022382054");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_247);
      UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipType_247.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_247("STRING_1619923730");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_247);
      UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipValue_247.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_247);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_248;
      FIX::UnderlyingStipType UnderlyingStipType_248("STRING_525306285");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_248);
      UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipType_248.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_248("STRING_1854407153");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_248);
      UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipValue_248.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_248);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_249;
      FIX::UnderlyingStipType UnderlyingStipType_249("STRING_2064716824");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_249);
      UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipType_249.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_249("STRING_397584789");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_249);
      UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipValue_249.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_249);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_250;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_250("STRING_1595634762");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyID_250.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_250('8');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyIDSource_250.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_250(1350499956);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyRole_250.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_250);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_506("STRING_745481538");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_506);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubID_506.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_506(1144413328);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_506);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubIDType_506.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_507("STRING_167320769");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_507);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubID_507.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_507(1942004822);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_507);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubIDType_507.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_251;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_251("STRING_1829677375");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyID_251.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_251('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyIDSource_251.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_251(497936141);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyRole_251.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_251);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_508("STRING_1488386039");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_508);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubID_508.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_508(627126913);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_508);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubIDType_508.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_127;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_127("DATA_747959056");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingIssuer_127.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_127(1633420600);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingIssuerLen_127.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_127("DATA_334808152");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDesc_127.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_127(1179080363);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDescLen_127.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_127;
    UnderlyingAdjustedQuantity_127.setString("20944175");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_127);
    UnderlyingInstrument_127.insert(UnderlyingAdjustedQuantity_127.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_127;
    UnderlyingAllocationPercent_127.setString("3.600000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_127);
    UnderlyingInstrument_127.insert(UnderlyingAllocationPercent_127.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_127;
    UnderlyingAttachmentPoint_127.setString("29.450000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_127);
    UnderlyingInstrument_127.insert(UnderlyingAttachmentPoint_127.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_127("STRING_554022235");
    noUnderlyings_0_2.set(UnderlyingCFICode_127);
    UnderlyingInstrument_127.insert(UnderlyingCFICode_127.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_127("STRING_1329943668");
    noUnderlyings_0_2.set(UnderlyingCPProgram_127);
    UnderlyingInstrument_127.insert(UnderlyingCPProgram_127.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_127("STRING_86837015");
    noUnderlyings_0_2.set(UnderlyingCPRegType_127);
    UnderlyingInstrument_127.insert(UnderlyingCPRegType_127.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_127;
    UnderlyingCapValue_127.setString("4289206");
    noUnderlyings_0_2.set(UnderlyingCapValue_127);
    UnderlyingInstrument_127.insert(UnderlyingCapValue_127.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_127;
    UnderlyingCashAmount_127.setString("8023837");
    noUnderlyings_0_2.set(UnderlyingCashAmount_127);
    UnderlyingInstrument_127.insert(UnderlyingCashAmount_127.getString());
    FIX::UnderlyingCashType UnderlyingCashType_127("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_127);
    UnderlyingInstrument_127.insert(UnderlyingCashType_127.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_127;
    UnderlyingContractMultiplier_127.setString("1358441");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_127);
    UnderlyingInstrument_127.insert(UnderlyingContractMultiplier_127.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_127(719616927);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_127);
    UnderlyingInstrument_127.insert(UnderlyingContractMultiplierUnit_127.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_127("COUNTRY_1009728089");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingCountryOfIssue_127.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_127("LOCALMKTDATE_1812288217");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_127);
    UnderlyingInstrument_127.insert(UnderlyingCouponPaymentDate_127.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_127;
    UnderlyingCouponRate_127.setString("80.410000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_127);
    UnderlyingInstrument_127.insert(UnderlyingCouponRate_127.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_127("STRING_1873994523");
    noUnderlyings_0_2.set(UnderlyingCreditRating_127);
    UnderlyingInstrument_127.insert(UnderlyingCreditRating_127.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_127("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_127);
    UnderlyingInstrument_127.insert(UnderlyingCurrency_127.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_127;
    UnderlyingCurrentValue_127.setString("4719924");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_127);
    UnderlyingInstrument_127.insert(UnderlyingCurrentValue_127.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_127;
    UnderlyingDetachmentPoint_127.setString("42.050000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_127);
    UnderlyingInstrument_127.insert(UnderlyingDetachmentPoint_127.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_127;
    UnderlyingDirtyPrice_127.setString("6468394");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_127);
    UnderlyingInstrument_127.insert(UnderlyingDirtyPrice_127.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_127;
    UnderlyingEndPrice_127.setString("2665135");
    noUnderlyings_0_2.set(UnderlyingEndPrice_127);
    UnderlyingInstrument_127.insert(UnderlyingEndPrice_127.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_127;
    UnderlyingEndValue_127.setString("18419115");
    noUnderlyings_0_2.set(UnderlyingEndValue_127);
    UnderlyingInstrument_127.insert(UnderlyingEndValue_127.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_127(166821820);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_127);
    UnderlyingInstrument_127.insert(UnderlyingExerciseStyle_127.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_127;
    UnderlyingFXRate_127.setString("7644497");
    noUnderlyings_0_2.set(UnderlyingFXRate_127);
    UnderlyingInstrument_127.insert(UnderlyingFXRate_127.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_127('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_127);
    UnderlyingInstrument_127.insert(UnderlyingFXRateCalc_127.getString());
    FIX::UnderlyingFactor UnderlyingFactor_127;
    UnderlyingFactor_127.setString("16552078");
    noUnderlyings_0_2.set(UnderlyingFactor_127);
    UnderlyingInstrument_127.insert(UnderlyingFactor_127.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_127(1391576642);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_127);
    UnderlyingInstrument_127.insert(UnderlyingFlowScheduleType_127.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_127("STRING_1838850908");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_127);
    UnderlyingInstrument_127.insert(UnderlyingInstrRegistry_127.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_127("LOCALMKTDATE_1141144812");
    noUnderlyings_0_2.set(UnderlyingIssueDate_127);
    UnderlyingInstrument_127.insert(UnderlyingIssueDate_127.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_127("STRING_1726384794");
    noUnderlyings_0_2.set(UnderlyingIssuer_127);
    UnderlyingInstrument_127.insert(UnderlyingIssuer_127.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_127("STRING_870447623");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingLocaleOfIssue_127.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_127("LOCALMKTDATE_1088078683");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityDate_127.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_127("MONTHYEAR_913361506");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityMonthYear_127.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_127("TZTIMEONLY_1922820568");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityTime_127.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_127;
    UnderlyingNotionalPercentageOutstanding_127.setString("9.180000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_127);
    UnderlyingInstrument_127.insert(UnderlyingNotionalPercentageOutstanding_127.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_127('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_127);
    UnderlyingInstrument_127.insert(UnderlyingOptAttribute_127.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_127;
    UnderlyingOriginalNotionalPercentageOutstanding_127.setString("75.830000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_127);
    UnderlyingInstrument_127.insert(UnderlyingOriginalNotionalPercentageOutstanding_127.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_127("STRING_2071021559");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_127);
    UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasure_127.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_127;
    UnderlyingPriceUnitOfMeasureQty_127.setString("8982052");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_127);
    UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasureQty_127.getString());
    FIX::UnderlyingProduct UnderlyingProduct_127(474317235);
    noUnderlyings_0_2.set(UnderlyingProduct_127);
    UnderlyingInstrument_127.insert(UnderlyingProduct_127.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_127(59382057);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_127);
    UnderlyingInstrument_127.insert(UnderlyingPutOrCall_127.getString());
    FIX::UnderlyingPx UnderlyingPx_127;
    UnderlyingPx_127.setString("16178222");
    noUnderlyings_0_2.set(UnderlyingPx_127);
    UnderlyingInstrument_127.insert(UnderlyingPx_127.getString());
    FIX::UnderlyingQty UnderlyingQty_127;
    UnderlyingQty_127.setString("14840453");
    noUnderlyings_0_2.set(UnderlyingQty_127);
    UnderlyingInstrument_127.insert(UnderlyingQty_127.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_127("LOCALMKTDATE_1871670274");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_127);
    UnderlyingInstrument_127.insert(UnderlyingRedemptionDate_127.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_127("STRING_1785590247");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_127);
    UnderlyingInstrument_127.insert(UnderlyingRepoCollateralSecurityType_127.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_127;
    UnderlyingRepurchaseRate_127.setString("62.000000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_127);
    UnderlyingInstrument_127.insert(UnderlyingRepurchaseRate_127.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_127(739491152);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_127);
    UnderlyingInstrument_127.insert(UnderlyingRepurchaseTerm_127.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_127("STRING_117625297");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_127);
    UnderlyingInstrument_127.insert(UnderlyingRestructuringType_127.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_127("STRING_1682548613");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityDesc_127.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_127("EXCHANGE_751725357");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityExchange_127.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_127("STRING_764464764");
    noUnderlyings_0_2.set(UnderlyingSecurityID_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityID_127.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_127("STRING_1949062201");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityIDSource_127.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_127("STRING_446153290");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_127);
    UnderlyingInstrument_127.insert(UnderlyingSecuritySubType_127.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_127("STRING_931286585");
    noUnderlyings_0_2.set(UnderlyingSecurityType_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityType_127.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_127("STRING_566028282");
    noUnderlyings_0_2.set(UnderlyingSeniority_127);
    UnderlyingInstrument_127.insert(UnderlyingSeniority_127.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_127("STRING_1537045142");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_127);
    UnderlyingInstrument_127.insert(UnderlyingSettlMethod_127.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_127(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_127);
    UnderlyingInstrument_127.insert(UnderlyingSettlementType_127.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_127;
    UnderlyingStartValue_127.setString("19576049");
    noUnderlyings_0_2.set(UnderlyingStartValue_127);
    UnderlyingInstrument_127.insert(UnderlyingStartValue_127.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_127("STRING_1228412402");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingStateOrProvinceOfIssue_127.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_127("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_127);
    UnderlyingInstrument_127.insert(UnderlyingStrikeCurrency_127.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_127;
    UnderlyingStrikePrice_127.setString("20988600");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_127);
    UnderlyingInstrument_127.insert(UnderlyingStrikePrice_127.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_127("STRING_520750644");
    noUnderlyings_0_2.set(UnderlyingSymbol_127);
    UnderlyingInstrument_127.insert(UnderlyingSymbol_127.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_127("STRING_302383929");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_127);
    UnderlyingInstrument_127.insert(UnderlyingSymbolSfx_127.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_127("STRING_1874196945");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_127);
    UnderlyingInstrument_127.insert(UnderlyingTimeUnit_127.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_127("STRING_15367914");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_127);
    UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasure_127.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_127;
    UnderlyingUnitOfMeasureQty_127.setString("3982054");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_127);
    UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasureQty_127.getString());
    all_values.push_back(UnderlyingInstrument_127);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_260;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_260("STRING_2086389473");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_260);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltID_260.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_260("STRING_1296410734");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_260);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltIDSource_260.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_261;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_261("STRING_63204467");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_261);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltID_261.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_261("STRING_2145771530");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_261);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltIDSource_261.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_250;
      FIX::UnderlyingStipType UnderlyingStipType_250("STRING_1547249792");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_250);
      UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipType_250.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_250("STRING_1869958157");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_250);
      UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipValue_250.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_250);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_252;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_252("STRING_610322344");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyID_252.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_252('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyIDSource_252.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_252(522481187);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyRole_252.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_252);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_509("STRING_1213691018");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_509);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubID_509.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_509(1286945952);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_509);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubIDType_509.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_510("STRING_2094449511");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_510);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubID_510.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_510(1659844308);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_510);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubIDType_510.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_511("STRING_70748889");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_511);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubID_511.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_511(512994145);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_511);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubIDType_511.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_253;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_253("STRING_1049405802");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyID_253.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_253('5');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyIDSource_253.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_253(323115421);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyRole_253.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_253);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_512("STRING_2089915295");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_512);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubID_512.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_512(1859621491);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_512);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubIDType_512.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
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
