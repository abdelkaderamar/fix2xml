#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_0;
  FIX::Currency Currency_64("JPY");
  msg.set(Currency_64);
  SecurityDefinitionRequest_0.insert(Currency_64.getString());
  FIX::EncodedText EncodedText_83("DATA_379192508");
  msg.set(EncodedText_83);
  SecurityDefinitionRequest_0.insert(EncodedText_83.getString());
  FIX::EncodedTextLen EncodedTextLen_83(1290474448);
  msg.set(EncodedTextLen_83);
  SecurityDefinitionRequest_0.insert(EncodedTextLen_83.getString());
  FIX::ExpirationCycle ExpirationCycle_11(1);
  msg.set(ExpirationCycle_11);
  SecurityDefinitionRequest_0.insert(ExpirationCycle_11.getString());
  FIX::MarketID MarketID_18("EXCHANGE_1847255639");
  msg.set(MarketID_18);
  SecurityDefinitionRequest_0.insert(MarketID_18.getString());
  FIX::MarketSegmentID MarketSegmentID_18("STRING_708542966");
  msg.set(MarketSegmentID_18);
  SecurityDefinitionRequest_0.insert(MarketSegmentID_18.getString());
  FIX::SecurityReqID SecurityReqID_4("STRING_1130162007");
  msg.set(SecurityReqID_4);
  SecurityDefinitionRequest_0.insert(SecurityReqID_4.getString());
  FIX::SecurityRequestType SecurityRequestType_0(1);
  msg.set(SecurityRequestType_0);
  SecurityDefinitionRequest_0.insert(SecurityRequestType_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_9('2');
  msg.set(SubscriptionRequestType_9);
  SecurityDefinitionRequest_0.insert(SubscriptionRequestType_9.getString());
  FIX::Text Text_83("STRING_234192995");
  msg.set(Text_83);
  SecurityDefinitionRequest_0.insert(Text_83.getString());
  FIX::TradingSessionID TradingSessionID_100("STRING_5");
  msg.set(TradingSessionID_100);
  SecurityDefinitionRequest_0.insert(TradingSessionID_100.getString());
  FIX::TradingSessionSubID TradingSessionSubID_100("STRING_5");
  msg.set(TradingSessionSubID_100);
  SecurityDefinitionRequest_0.insert(TradingSessionSubID_100.getString());
  all_values.push_back(SecurityDefinitionRequest_0);

  all_compo_names.insert("SecurityDefinitionRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_129;
    FIX::EncodedLegIssuer EncodedLegIssuer_129("DATA_2003519504");
    noLegs_0_0.set(EncodedLegIssuer_129);
    InstrumentLeg_129.insert(EncodedLegIssuer_129.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_129(514562408);
    noLegs_0_0.set(EncodedLegIssuerLen_129);
    InstrumentLeg_129.insert(EncodedLegIssuerLen_129.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_129("DATA_1965474385");
    noLegs_0_0.set(EncodedLegSecurityDesc_129);
    InstrumentLeg_129.insert(EncodedLegSecurityDesc_129.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_129(804917551);
    noLegs_0_0.set(EncodedLegSecurityDescLen_129);
    InstrumentLeg_129.insert(EncodedLegSecurityDescLen_129.getString());
    FIX::LegCFICode LegCFICode_129("STRING_1296760444");
    noLegs_0_0.set(LegCFICode_129);
    InstrumentLeg_129.insert(LegCFICode_129.getString());
    FIX::LegContractMultiplier LegContractMultiplier_129;
    LegContractMultiplier_129.setString("1417101");
    noLegs_0_0.set(LegContractMultiplier_129);
    InstrumentLeg_129.insert(LegContractMultiplier_129.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_129(846212412);
    noLegs_0_0.set(LegContractMultiplierUnit_129);
    InstrumentLeg_129.insert(LegContractMultiplierUnit_129.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_129("MONTHYEAR_1444490928");
    noLegs_0_0.set(LegContractSettlMonth_129);
    InstrumentLeg_129.insert(LegContractSettlMonth_129.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_129("COUNTRY_992992298");
    noLegs_0_0.set(LegCountryOfIssue_129);
    InstrumentLeg_129.insert(LegCountryOfIssue_129.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_129("LOCALMKTDATE_1868964731");
    noLegs_0_0.set(LegCouponPaymentDate_129);
    InstrumentLeg_129.insert(LegCouponPaymentDate_129.getString());
    FIX::LegCouponRate LegCouponRate_129;
    LegCouponRate_129.setString("86.190000");
    noLegs_0_0.set(LegCouponRate_129);
    InstrumentLeg_129.insert(LegCouponRate_129.getString());
    FIX::LegCreditRating LegCreditRating_129("STRING_1261223948");
    noLegs_0_0.set(LegCreditRating_129);
    InstrumentLeg_129.insert(LegCreditRating_129.getString());
    FIX::LegCurrency LegCurrency_129("GBP");
    noLegs_0_0.set(LegCurrency_129);
    InstrumentLeg_129.insert(LegCurrency_129.getString());
    FIX::LegDatedDate LegDatedDate_129("LOCALMKTDATE_983576467");
    noLegs_0_0.set(LegDatedDate_129);
    InstrumentLeg_129.insert(LegDatedDate_129.getString());
    FIX::LegExerciseStyle LegExerciseStyle_129(1333806139);
    noLegs_0_0.set(LegExerciseStyle_129);
    InstrumentLeg_129.insert(LegExerciseStyle_129.getString());
    FIX::LegFactor LegFactor_129;
    LegFactor_129.setString("12392533");
    noLegs_0_0.set(LegFactor_129);
    InstrumentLeg_129.insert(LegFactor_129.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_129(2094950009);
    noLegs_0_0.set(LegFlowScheduleType_129);
    InstrumentLeg_129.insert(LegFlowScheduleType_129.getString());
    FIX::LegInstrRegistry LegInstrRegistry_129("STRING_162818547");
    noLegs_0_0.set(LegInstrRegistry_129);
    InstrumentLeg_129.insert(LegInstrRegistry_129.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_129("LOCALMKTDATE_1618445886");
    noLegs_0_0.set(LegInterestAccrualDate_129);
    InstrumentLeg_129.insert(LegInterestAccrualDate_129.getString());
    FIX::LegIssueDate LegIssueDate_129("LOCALMKTDATE_1237940809");
    noLegs_0_0.set(LegIssueDate_129);
    InstrumentLeg_129.insert(LegIssueDate_129.getString());
    FIX::LegIssuer LegIssuer_129("STRING_695468350");
    noLegs_0_0.set(LegIssuer_129);
    InstrumentLeg_129.insert(LegIssuer_129.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_129("STRING_1318217877");
    noLegs_0_0.set(LegLocaleOfIssue_129);
    InstrumentLeg_129.insert(LegLocaleOfIssue_129.getString());
    FIX::LegMaturityDate LegMaturityDate_129("LOCALMKTDATE_1946483775");
    noLegs_0_0.set(LegMaturityDate_129);
    InstrumentLeg_129.insert(LegMaturityDate_129.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_129("MONTHYEAR_1825630357");
    noLegs_0_0.set(LegMaturityMonthYear_129);
    InstrumentLeg_129.insert(LegMaturityMonthYear_129.getString());
    FIX::LegMaturityTime LegMaturityTime_129("TZTIMEONLY_191416930");
    noLegs_0_0.set(LegMaturityTime_129);
    InstrumentLeg_129.insert(LegMaturityTime_129.getString());
    FIX::LegOptAttribute LegOptAttribute_129('1');
    noLegs_0_0.set(LegOptAttribute_129);
    InstrumentLeg_129.insert(LegOptAttribute_129.getString());
    FIX::LegOptionRatio LegOptionRatio_129;
    LegOptionRatio_129.setString("20598233");
    noLegs_0_0.set(LegOptionRatio_129);
    InstrumentLeg_129.insert(LegOptionRatio_129.getString());
    FIX::LegPool LegPool_129("STRING_1795747190");
    noLegs_0_0.set(LegPool_129);
    InstrumentLeg_129.insert(LegPool_129.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_129("STRING_1719267776");
    noLegs_0_0.set(LegPriceUnitOfMeasure_129);
    InstrumentLeg_129.insert(LegPriceUnitOfMeasure_129.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_129;
    LegPriceUnitOfMeasureQty_129.setString("17701437");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_129);
    InstrumentLeg_129.insert(LegPriceUnitOfMeasureQty_129.getString());
    FIX::LegProduct LegProduct_129(1651783047);
    noLegs_0_0.set(LegProduct_129);
    InstrumentLeg_129.insert(LegProduct_129.getString());
    FIX::LegPutOrCall LegPutOrCall_129(86346536);
    noLegs_0_0.set(LegPutOrCall_129);
    InstrumentLeg_129.insert(LegPutOrCall_129.getString());
    FIX::LegRatioQty LegRatioQty_129;
    LegRatioQty_129.setString("15881344");
    noLegs_0_0.set(LegRatioQty_129);
    InstrumentLeg_129.insert(LegRatioQty_129.getString());
    FIX::LegRedemptionDate LegRedemptionDate_129("LOCALMKTDATE_309216950");
    noLegs_0_0.set(LegRedemptionDate_129);
    InstrumentLeg_129.insert(LegRedemptionDate_129.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_129("STRING_1383106981");
    noLegs_0_0.set(LegRepoCollateralSecurityType_129);
    InstrumentLeg_129.insert(LegRepoCollateralSecurityType_129.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_129;
    LegRepurchaseRate_129.setString("45.900000");
    noLegs_0_0.set(LegRepurchaseRate_129);
    InstrumentLeg_129.insert(LegRepurchaseRate_129.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_129(1155429362);
    noLegs_0_0.set(LegRepurchaseTerm_129);
    InstrumentLeg_129.insert(LegRepurchaseTerm_129.getString());
    FIX::LegSecurityDesc LegSecurityDesc_129("STRING_680114261");
    noLegs_0_0.set(LegSecurityDesc_129);
    InstrumentLeg_129.insert(LegSecurityDesc_129.getString());
    FIX::LegSecurityExchange LegSecurityExchange_129("EXCHANGE_575353240");
    noLegs_0_0.set(LegSecurityExchange_129);
    InstrumentLeg_129.insert(LegSecurityExchange_129.getString());
    FIX::LegSecurityID LegSecurityID_129("STRING_876910445");
    noLegs_0_0.set(LegSecurityID_129);
    InstrumentLeg_129.insert(LegSecurityID_129.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_129("STRING_670319233");
    noLegs_0_0.set(LegSecurityIDSource_129);
    InstrumentLeg_129.insert(LegSecurityIDSource_129.getString());
    FIX::LegSecuritySubType LegSecuritySubType_129("STRING_1836577188");
    noLegs_0_0.set(LegSecuritySubType_129);
    InstrumentLeg_129.insert(LegSecuritySubType_129.getString());
    FIX::LegSecurityType LegSecurityType_129("STRING_1041918663");
    noLegs_0_0.set(LegSecurityType_129);
    InstrumentLeg_129.insert(LegSecurityType_129.getString());
    FIX::LegSide LegSide_129('4');
    noLegs_0_0.set(LegSide_129);
    InstrumentLeg_129.insert(LegSide_129.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_129("STRING_672670007");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_129);
    InstrumentLeg_129.insert(LegStateOrProvinceOfIssue_129.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_129("CAN");
    noLegs_0_0.set(LegStrikeCurrency_129);
    InstrumentLeg_129.insert(LegStrikeCurrency_129.getString());
    FIX::LegStrikePrice LegStrikePrice_129;
    LegStrikePrice_129.setString("6201363");
    noLegs_0_0.set(LegStrikePrice_129);
    InstrumentLeg_129.insert(LegStrikePrice_129.getString());
    FIX::LegSymbol LegSymbol_129("STRING_391059701");
    noLegs_0_0.set(LegSymbol_129);
    InstrumentLeg_129.insert(LegSymbol_129.getString());
    FIX::LegSymbolSfx LegSymbolSfx_129("STRING_1171766883");
    noLegs_0_0.set(LegSymbolSfx_129);
    InstrumentLeg_129.insert(LegSymbolSfx_129.getString());
    FIX::LegTimeUnit LegTimeUnit_129("STRING_1858077178");
    noLegs_0_0.set(LegTimeUnit_129);
    InstrumentLeg_129.insert(LegTimeUnit_129.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_129("STRING_1086528052");
    noLegs_0_0.set(LegUnitOfMeasure_129);
    InstrumentLeg_129.insert(LegUnitOfMeasure_129.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_129;
    LegUnitOfMeasureQty_129.setString("3425011");
    noLegs_0_0.set(LegUnitOfMeasureQty_129);
    InstrumentLeg_129.insert(LegUnitOfMeasureQty_129.getString());
    all_values.push_back(InstrumentLeg_129);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_256;
      FIX::LegSecurityAltID LegSecurityAltID_256("STRING_764674761");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_256);
      LegSecAltIDGrp_NoLegSecurityAltID_256.insert(LegSecurityAltID_256.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_256("STRING_533918043");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_256);
      LegSecAltIDGrp_NoLegSecurityAltID_256.insert(LegSecurityAltIDSource_256.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_256);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_130;
    FIX::EncodedLegIssuer EncodedLegIssuer_130("DATA_1338595826");
    noLegs_0_1.set(EncodedLegIssuer_130);
    InstrumentLeg_130.insert(EncodedLegIssuer_130.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_130(677014466);
    noLegs_0_1.set(EncodedLegIssuerLen_130);
    InstrumentLeg_130.insert(EncodedLegIssuerLen_130.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_130("DATA_182181585");
    noLegs_0_1.set(EncodedLegSecurityDesc_130);
    InstrumentLeg_130.insert(EncodedLegSecurityDesc_130.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_130(910379954);
    noLegs_0_1.set(EncodedLegSecurityDescLen_130);
    InstrumentLeg_130.insert(EncodedLegSecurityDescLen_130.getString());
    FIX::LegCFICode LegCFICode_130("STRING_299674528");
    noLegs_0_1.set(LegCFICode_130);
    InstrumentLeg_130.insert(LegCFICode_130.getString());
    FIX::LegContractMultiplier LegContractMultiplier_130;
    LegContractMultiplier_130.setString("18339646");
    noLegs_0_1.set(LegContractMultiplier_130);
    InstrumentLeg_130.insert(LegContractMultiplier_130.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_130(996726490);
    noLegs_0_1.set(LegContractMultiplierUnit_130);
    InstrumentLeg_130.insert(LegContractMultiplierUnit_130.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_130("MONTHYEAR_1887808975");
    noLegs_0_1.set(LegContractSettlMonth_130);
    InstrumentLeg_130.insert(LegContractSettlMonth_130.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_130("COUNTRY_2143181582");
    noLegs_0_1.set(LegCountryOfIssue_130);
    InstrumentLeg_130.insert(LegCountryOfIssue_130.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_130("LOCALMKTDATE_232349823");
    noLegs_0_1.set(LegCouponPaymentDate_130);
    InstrumentLeg_130.insert(LegCouponPaymentDate_130.getString());
    FIX::LegCouponRate LegCouponRate_130;
    LegCouponRate_130.setString("99.170000");
    noLegs_0_1.set(LegCouponRate_130);
    InstrumentLeg_130.insert(LegCouponRate_130.getString());
    FIX::LegCreditRating LegCreditRating_130("STRING_1151127296");
    noLegs_0_1.set(LegCreditRating_130);
    InstrumentLeg_130.insert(LegCreditRating_130.getString());
    FIX::LegCurrency LegCurrency_130("GBP");
    noLegs_0_1.set(LegCurrency_130);
    InstrumentLeg_130.insert(LegCurrency_130.getString());
    FIX::LegDatedDate LegDatedDate_130("LOCALMKTDATE_2028037742");
    noLegs_0_1.set(LegDatedDate_130);
    InstrumentLeg_130.insert(LegDatedDate_130.getString());
    FIX::LegExerciseStyle LegExerciseStyle_130(1582783318);
    noLegs_0_1.set(LegExerciseStyle_130);
    InstrumentLeg_130.insert(LegExerciseStyle_130.getString());
    FIX::LegFactor LegFactor_130;
    LegFactor_130.setString("17346166");
    noLegs_0_1.set(LegFactor_130);
    InstrumentLeg_130.insert(LegFactor_130.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_130(922472757);
    noLegs_0_1.set(LegFlowScheduleType_130);
    InstrumentLeg_130.insert(LegFlowScheduleType_130.getString());
    FIX::LegInstrRegistry LegInstrRegistry_130("STRING_2044334585");
    noLegs_0_1.set(LegInstrRegistry_130);
    InstrumentLeg_130.insert(LegInstrRegistry_130.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_130("LOCALMKTDATE_259803058");
    noLegs_0_1.set(LegInterestAccrualDate_130);
    InstrumentLeg_130.insert(LegInterestAccrualDate_130.getString());
    FIX::LegIssueDate LegIssueDate_130("LOCALMKTDATE_1150713912");
    noLegs_0_1.set(LegIssueDate_130);
    InstrumentLeg_130.insert(LegIssueDate_130.getString());
    FIX::LegIssuer LegIssuer_130("STRING_1597655582");
    noLegs_0_1.set(LegIssuer_130);
    InstrumentLeg_130.insert(LegIssuer_130.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_130("STRING_879939427");
    noLegs_0_1.set(LegLocaleOfIssue_130);
    InstrumentLeg_130.insert(LegLocaleOfIssue_130.getString());
    FIX::LegMaturityDate LegMaturityDate_130("LOCALMKTDATE_1541773613");
    noLegs_0_1.set(LegMaturityDate_130);
    InstrumentLeg_130.insert(LegMaturityDate_130.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_130("MONTHYEAR_621938817");
    noLegs_0_1.set(LegMaturityMonthYear_130);
    InstrumentLeg_130.insert(LegMaturityMonthYear_130.getString());
    FIX::LegMaturityTime LegMaturityTime_130("TZTIMEONLY_590532957");
    noLegs_0_1.set(LegMaturityTime_130);
    InstrumentLeg_130.insert(LegMaturityTime_130.getString());
    FIX::LegOptAttribute LegOptAttribute_130('4');
    noLegs_0_1.set(LegOptAttribute_130);
    InstrumentLeg_130.insert(LegOptAttribute_130.getString());
    FIX::LegOptionRatio LegOptionRatio_130;
    LegOptionRatio_130.setString("9644399");
    noLegs_0_1.set(LegOptionRatio_130);
    InstrumentLeg_130.insert(LegOptionRatio_130.getString());
    FIX::LegPool LegPool_130("STRING_100126615");
    noLegs_0_1.set(LegPool_130);
    InstrumentLeg_130.insert(LegPool_130.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_130("STRING_1245492779");
    noLegs_0_1.set(LegPriceUnitOfMeasure_130);
    InstrumentLeg_130.insert(LegPriceUnitOfMeasure_130.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_130;
    LegPriceUnitOfMeasureQty_130.setString("14983579");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_130);
    InstrumentLeg_130.insert(LegPriceUnitOfMeasureQty_130.getString());
    FIX::LegProduct LegProduct_130(1438722441);
    noLegs_0_1.set(LegProduct_130);
    InstrumentLeg_130.insert(LegProduct_130.getString());
    FIX::LegPutOrCall LegPutOrCall_130(1922507245);
    noLegs_0_1.set(LegPutOrCall_130);
    InstrumentLeg_130.insert(LegPutOrCall_130.getString());
    FIX::LegRatioQty LegRatioQty_130;
    LegRatioQty_130.setString("16805395");
    noLegs_0_1.set(LegRatioQty_130);
    InstrumentLeg_130.insert(LegRatioQty_130.getString());
    FIX::LegRedemptionDate LegRedemptionDate_130("LOCALMKTDATE_201618747");
    noLegs_0_1.set(LegRedemptionDate_130);
    InstrumentLeg_130.insert(LegRedemptionDate_130.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_130("STRING_74698125");
    noLegs_0_1.set(LegRepoCollateralSecurityType_130);
    InstrumentLeg_130.insert(LegRepoCollateralSecurityType_130.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_130;
    LegRepurchaseRate_130.setString("5.430000");
    noLegs_0_1.set(LegRepurchaseRate_130);
    InstrumentLeg_130.insert(LegRepurchaseRate_130.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_130(1198345238);
    noLegs_0_1.set(LegRepurchaseTerm_130);
    InstrumentLeg_130.insert(LegRepurchaseTerm_130.getString());
    FIX::LegSecurityDesc LegSecurityDesc_130("STRING_1962507100");
    noLegs_0_1.set(LegSecurityDesc_130);
    InstrumentLeg_130.insert(LegSecurityDesc_130.getString());
    FIX::LegSecurityExchange LegSecurityExchange_130("EXCHANGE_1362718477");
    noLegs_0_1.set(LegSecurityExchange_130);
    InstrumentLeg_130.insert(LegSecurityExchange_130.getString());
    FIX::LegSecurityID LegSecurityID_130("STRING_1430695061");
    noLegs_0_1.set(LegSecurityID_130);
    InstrumentLeg_130.insert(LegSecurityID_130.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_130("STRING_1285193370");
    noLegs_0_1.set(LegSecurityIDSource_130);
    InstrumentLeg_130.insert(LegSecurityIDSource_130.getString());
    FIX::LegSecuritySubType LegSecuritySubType_130("STRING_366362126");
    noLegs_0_1.set(LegSecuritySubType_130);
    InstrumentLeg_130.insert(LegSecuritySubType_130.getString());
    FIX::LegSecurityType LegSecurityType_130("STRING_195675498");
    noLegs_0_1.set(LegSecurityType_130);
    InstrumentLeg_130.insert(LegSecurityType_130.getString());
    FIX::LegSide LegSide_130('1');
    noLegs_0_1.set(LegSide_130);
    InstrumentLeg_130.insert(LegSide_130.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_130("STRING_246916220");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_130);
    InstrumentLeg_130.insert(LegStateOrProvinceOfIssue_130.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_130("JPY");
    noLegs_0_1.set(LegStrikeCurrency_130);
    InstrumentLeg_130.insert(LegStrikeCurrency_130.getString());
    FIX::LegStrikePrice LegStrikePrice_130;
    LegStrikePrice_130.setString("11693889");
    noLegs_0_1.set(LegStrikePrice_130);
    InstrumentLeg_130.insert(LegStrikePrice_130.getString());
    FIX::LegSymbol LegSymbol_130("STRING_1675309754");
    noLegs_0_1.set(LegSymbol_130);
    InstrumentLeg_130.insert(LegSymbol_130.getString());
    FIX::LegSymbolSfx LegSymbolSfx_130("STRING_1030168988");
    noLegs_0_1.set(LegSymbolSfx_130);
    InstrumentLeg_130.insert(LegSymbolSfx_130.getString());
    FIX::LegTimeUnit LegTimeUnit_130("STRING_172619241");
    noLegs_0_1.set(LegTimeUnit_130);
    InstrumentLeg_130.insert(LegTimeUnit_130.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_130("STRING_1125481688");
    noLegs_0_1.set(LegUnitOfMeasure_130);
    InstrumentLeg_130.insert(LegUnitOfMeasure_130.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_130;
    LegUnitOfMeasureQty_130.setString("19101084");
    noLegs_0_1.set(LegUnitOfMeasureQty_130);
    InstrumentLeg_130.insert(LegUnitOfMeasureQty_130.getString());
    all_values.push_back(InstrumentLeg_130);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_257;
      FIX::LegSecurityAltID LegSecurityAltID_257("STRING_1747420506");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_257);
      LegSecAltIDGrp_NoLegSecurityAltID_257.insert(LegSecurityAltID_257.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_257("STRING_353157725");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_257);
      LegSecAltIDGrp_NoLegSecurityAltID_257.insert(LegSecurityAltIDSource_257.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_257);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_81;
  FIX::AttachmentPoint AttachmentPoint_81;
  AttachmentPoint_81.setString("72.240000");
  msg.set(AttachmentPoint_81);
  Instrument_81.insert(AttachmentPoint_81.getString());
  FIX::CFICode CFICode_81("STRING_564376788");
  msg.set(CFICode_81);
  Instrument_81.insert(CFICode_81.getString());
  FIX::CPProgram CPProgram_81(1);
  msg.set(CPProgram_81);
  Instrument_81.insert(CPProgram_81.getString());
  FIX::CPRegType CPRegType_81("STRING_1293220003");
  msg.set(CPRegType_81);
  Instrument_81.insert(CPRegType_81.getString());
  FIX::CapPrice CapPrice_81;
  CapPrice_81.setString("20627347");
  msg.set(CapPrice_81);
  Instrument_81.insert(CapPrice_81.getString());
  FIX::ContractMultiplier ContractMultiplier_81;
  ContractMultiplier_81.setString("18920067");
  msg.set(ContractMultiplier_81);
  Instrument_81.insert(ContractMultiplier_81.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_81(1);
  msg.set(ContractMultiplierUnit_81);
  Instrument_81.insert(ContractMultiplierUnit_81.getString());
  FIX::ContractSettlMonth ContractSettlMonth_81("MONTHYEAR_1595790671");
  msg.set(ContractSettlMonth_81);
  Instrument_81.insert(ContractSettlMonth_81.getString());
  FIX::CountryOfIssue CountryOfIssue_81("COUNTRY_2093625529");
  msg.set(CountryOfIssue_81);
  Instrument_81.insert(CountryOfIssue_81.getString());
  FIX::CouponPaymentDate CouponPaymentDate_81("LOCALMKTDATE_1142941726");
  msg.set(CouponPaymentDate_81);
  Instrument_81.insert(CouponPaymentDate_81.getString());
  FIX::CouponRate CouponRate_81;
  CouponRate_81.setString("75.660000");
  msg.set(CouponRate_81);
  Instrument_81.insert(CouponRate_81.getString());
  FIX::CreditRating CreditRating_81("STRING_1144487119");
  msg.set(CreditRating_81);
  Instrument_81.insert(CreditRating_81.getString());
  FIX::DatedDate DatedDate_81("LOCALMKTDATE_957965179");
  msg.set(DatedDate_81);
  Instrument_81.insert(DatedDate_81.getString());
  FIX::DetachmentPoint DetachmentPoint_81;
  DetachmentPoint_81.setString("23.960000");
  msg.set(DetachmentPoint_81);
  Instrument_81.insert(DetachmentPoint_81.getString());
  FIX::EncodedIssuer EncodedIssuer_81("DATA_427698533");
  msg.set(EncodedIssuer_81);
  Instrument_81.insert(EncodedIssuer_81.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_81(95674901);
  msg.set(EncodedIssuerLen_81);
  Instrument_81.insert(EncodedIssuerLen_81.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_81("DATA_396924522");
  msg.set(EncodedSecurityDesc_81);
  Instrument_81.insert(EncodedSecurityDesc_81.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_81(623374031);
  msg.set(EncodedSecurityDescLen_81);
  Instrument_81.insert(EncodedSecurityDescLen_81.getString());
  FIX::ExerciseStyle ExerciseStyle_81(2);
  msg.set(ExerciseStyle_81);
  Instrument_81.insert(ExerciseStyle_81.getString());
  FIX::Factor Factor_81;
  Factor_81.setString("6438407");
  msg.set(Factor_81);
  Instrument_81.insert(Factor_81.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_81(true);
  msg.set(FlexProductEligibilityIndicator_81);
  Instrument_81.insert(FlexProductEligibilityIndicator_81.getString());
  FIX::FlexibleIndicator FlexibleIndicator_81(false);
  msg.set(FlexibleIndicator_81);
  Instrument_81.insert(FlexibleIndicator_81.getString());
  FIX::FloorPrice FloorPrice_81;
  FloorPrice_81.setString("18132297");
  msg.set(FloorPrice_81);
  Instrument_81.insert(FloorPrice_81.getString());
  FIX::FlowScheduleType FlowScheduleType_81(4);
  msg.set(FlowScheduleType_81);
  Instrument_81.insert(FlowScheduleType_81.getString());
  FIX::InstrRegistry InstrRegistry_81("STRING_931959052");
  msg.set(InstrRegistry_81);
  Instrument_81.insert(InstrRegistry_81.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_81('1');
  msg.set(InstrmtAssignmentMethod_81);
  Instrument_81.insert(InstrmtAssignmentMethod_81.getString());
  FIX::InterestAccrualDate InterestAccrualDate_81("LOCALMKTDATE_907656994");
  msg.set(InterestAccrualDate_81);
  Instrument_81.insert(InterestAccrualDate_81.getString());
  FIX::IssueDate IssueDate_81("LOCALMKTDATE_694583819");
  msg.set(IssueDate_81);
  Instrument_81.insert(IssueDate_81.getString());
  FIX::Issuer Issuer_81("STRING_1552758168");
  msg.set(Issuer_81);
  Instrument_81.insert(Issuer_81.getString());
  FIX::ListMethod ListMethod_81(0);
  msg.set(ListMethod_81);
  Instrument_81.insert(ListMethod_81.getString());
  FIX::LocaleOfIssue LocaleOfIssue_81("STRING_1047741544");
  msg.set(LocaleOfIssue_81);
  Instrument_81.insert(LocaleOfIssue_81.getString());
  FIX::MaturityDate MaturityDate_81("LOCALMKTDATE_1600485392");
  msg.set(MaturityDate_81);
  Instrument_81.insert(MaturityDate_81.getString());
  FIX::MaturityMonthYear MaturityMonthYear_81("MONTHYEAR_1071970640");
  msg.set(MaturityMonthYear_81);
  Instrument_81.insert(MaturityMonthYear_81.getString());
  FIX::MaturityTime MaturityTime_81("TZTIMEONLY_1501025885");
  msg.set(MaturityTime_81);
  Instrument_81.insert(MaturityTime_81.getString());
  FIX::MinPriceIncrement MinPriceIncrement_81;
  MinPriceIncrement_81.setString("7462217");
  msg.set(MinPriceIncrement_81);
  Instrument_81.insert(MinPriceIncrement_81.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_81;
  MinPriceIncrementAmount_81.setString("9872217");
  msg.set(MinPriceIncrementAmount_81);
  Instrument_81.insert(MinPriceIncrementAmount_81.getString());
  FIX::NTPositionLimit NTPositionLimit_81(1245549019);
  msg.set(NTPositionLimit_81);
  Instrument_81.insert(NTPositionLimit_81.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_81;
  NotionalPercentageOutstanding_81.setString("53.490000");
  msg.set(NotionalPercentageOutstanding_81);
  Instrument_81.insert(NotionalPercentageOutstanding_81.getString());
  FIX::OptAttribute OptAttribute_81('4');
  msg.set(OptAttribute_81);
  Instrument_81.insert(OptAttribute_81.getString());
  FIX::OptPayoutAmount OptPayoutAmount_81;
  OptPayoutAmount_81.setString("11916909");
  msg.set(OptPayoutAmount_81);
  Instrument_81.insert(OptPayoutAmount_81.getString());
  FIX::OptPayoutType OptPayoutType_81(3);
  msg.set(OptPayoutType_81);
  Instrument_81.insert(OptPayoutType_81.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_81;
  OriginalNotionalPercentageOutstanding_81.setString("63.430000");
  msg.set(OriginalNotionalPercentageOutstanding_81);
  Instrument_81.insert(OriginalNotionalPercentageOutstanding_81.getString());
  FIX::Pool Pool_81("STRING_188694372");
  msg.set(Pool_81);
  Instrument_81.insert(Pool_81.getString());
  FIX::PositionLimit PositionLimit_81(1767888606);
  msg.set(PositionLimit_81);
  Instrument_81.insert(PositionLimit_81.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_81("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_81);
  Instrument_81.insert(PriceQuoteMethod_81.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_81("STRING_616392905");
  msg.set(PriceUnitOfMeasure_81);
  Instrument_81.insert(PriceUnitOfMeasure_81.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_81;
  PriceUnitOfMeasureQty_81.setString("18635635");
  msg.set(PriceUnitOfMeasureQty_81);
  Instrument_81.insert(PriceUnitOfMeasureQty_81.getString());
  FIX::Product Product_83(11);
  msg.set(Product_83);
  Instrument_81.insert(Product_83.getString());
  FIX::ProductComplex ProductComplex_81("STRING_1239766936");
  msg.set(ProductComplex_81);
  Instrument_81.insert(ProductComplex_81.getString());
  FIX::PutOrCall PutOrCall_81(0);
  msg.set(PutOrCall_81);
  Instrument_81.insert(PutOrCall_81.getString());
  FIX::RedemptionDate RedemptionDate_81("LOCALMKTDATE_174700355");
  msg.set(RedemptionDate_81);
  Instrument_81.insert(RedemptionDate_81.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_81("STRING_1494116136");
  msg.set(RepoCollateralSecurityType_81);
  Instrument_81.insert(RepoCollateralSecurityType_81.getString());
  FIX::RepurchaseRate RepurchaseRate_81;
  RepurchaseRate_81.setString("77.040000");
  msg.set(RepurchaseRate_81);
  Instrument_81.insert(RepurchaseRate_81.getString());
  FIX::RepurchaseTerm RepurchaseTerm_81(1987930075);
  msg.set(RepurchaseTerm_81);
  Instrument_81.insert(RepurchaseTerm_81.getString());
  FIX::RestructuringType RestructuringType_81("STRING_MM");
  msg.set(RestructuringType_81);
  Instrument_81.insert(RestructuringType_81.getString());
  FIX::SecurityDesc SecurityDesc_81("STRING_1828736756");
  msg.set(SecurityDesc_81);
  Instrument_81.insert(SecurityDesc_81.getString());
  FIX::SecurityExchange SecurityExchange_81("EXCHANGE_1826295388");
  msg.set(SecurityExchange_81);
  Instrument_81.insert(SecurityExchange_81.getString());
  FIX::SecurityGroup SecurityGroup_81("STRING_36464789");
  msg.set(SecurityGroup_81);
  Instrument_81.insert(SecurityGroup_81.getString());
  FIX::SecurityID SecurityID_81("STRING_375836927");
  msg.set(SecurityID_81);
  Instrument_81.insert(SecurityID_81.getString());
  FIX::SecurityIDSource SecurityIDSource_81("STRING_9");
  msg.set(SecurityIDSource_81);
  Instrument_81.insert(SecurityIDSource_81.getString());
  FIX::SecurityStatus SecurityStatus_81("STRING_2");
  msg.set(SecurityStatus_81);
  Instrument_81.insert(SecurityStatus_81.getString());
  FIX::SecuritySubType SecuritySubType_82("STRING_1423578472");
  msg.set(SecuritySubType_82);
  Instrument_81.insert(SecuritySubType_82.getString());
  FIX::SecurityType SecurityType_83("STRING_ABS");
  msg.set(SecurityType_83);
  Instrument_81.insert(SecurityType_83.getString());
  FIX::Seniority Seniority_81("STRING_SR");
  msg.set(Seniority_81);
  Instrument_81.insert(Seniority_81.getString());
  FIX::SettlMethod SettlMethod_81('P');
  msg.set(SettlMethod_81);
  Instrument_81.insert(SettlMethod_81.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_81("STRING_1430793400");
  msg.set(SettleOnOpenFlag_81);
  Instrument_81.insert(SettleOnOpenFlag_81.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_81("STRING_455767387");
  msg.set(StateOrProvinceOfIssue_81);
  Instrument_81.insert(StateOrProvinceOfIssue_81.getString());
  FIX::StrikeCurrency StrikeCurrency_81("CAN");
  msg.set(StrikeCurrency_81);
  Instrument_81.insert(StrikeCurrency_81.getString());
  FIX::StrikeMultiplier StrikeMultiplier_81;
  StrikeMultiplier_81.setString("8912961");
  msg.set(StrikeMultiplier_81);
  Instrument_81.insert(StrikeMultiplier_81.getString());
  FIX::StrikePrice StrikePrice_81;
  StrikePrice_81.setString("10668769");
  msg.set(StrikePrice_81);
  Instrument_81.insert(StrikePrice_81.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_81(5);
  msg.set(StrikePriceBoundaryMethod_81);
  Instrument_81.insert(StrikePriceBoundaryMethod_81.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_81;
  StrikePriceBoundaryPrecision_81.setString("25.080000");
  msg.set(StrikePriceBoundaryPrecision_81);
  Instrument_81.insert(StrikePriceBoundaryPrecision_81.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_81(1);
  msg.set(StrikePriceDeterminationMethod_81);
  Instrument_81.insert(StrikePriceDeterminationMethod_81.getString());
  FIX::StrikeValue StrikeValue_81;
  StrikeValue_81.setString("15281034");
  msg.set(StrikeValue_81);
  Instrument_81.insert(StrikeValue_81.getString());
  FIX::Symbol Symbol_81("STRING_1276087599");
  msg.set(Symbol_81);
  Instrument_81.insert(Symbol_81.getString());
  FIX::SymbolSfx SymbolSfx_81("STRING_WI");
  msg.set(SymbolSfx_81);
  Instrument_81.insert(SymbolSfx_81.getString());
  FIX::TimeUnit TimeUnit_81("STRING_Min");
  msg.set(TimeUnit_81);
  Instrument_81.insert(TimeUnit_81.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_81(2);
  msg.set(UnderlyingPriceDeterminationMethod_81);
  Instrument_81.insert(UnderlyingPriceDeterminationMethod_81.getString());
  FIX::UnitOfMeasure UnitOfMeasure_81("STRING_MMBtu");
  msg.set(UnitOfMeasure_81);
  Instrument_81.insert(UnitOfMeasure_81.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_81;
  UnitOfMeasureQty_81.setString("916873");
  msg.set(UnitOfMeasureQty_81);
  Instrument_81.insert(UnitOfMeasureQty_81.getString());
  FIX::ValuationMethod ValuationMethod_81("STRING_CDS");
  msg.set(ValuationMethod_81);
  Instrument_81.insert(ValuationMethod_81.getString());
  all_values.push_back(Instrument_81);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_166;
    FIX::ComplexEventCondition ComplexEventCondition_166(2);
    noComplexEvents_0_0.set(ComplexEventCondition_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventCondition_166.getString());
    FIX::ComplexEventPrice ComplexEventPrice_166;
    ComplexEventPrice_166.setString("8220939");
    noComplexEvents_0_0.set(ComplexEventPrice_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPrice_166.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_166(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryMethod_166.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_166;
    ComplexEventPriceBoundaryPrecision_166.setString("81.510000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryPrecision_166.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_166(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceTimeType_166.getString());
    FIX::ComplexEventType ComplexEventType_166(6);
    noComplexEvents_0_0.set(ComplexEventType_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventType_166.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_166;
    ComplexOptPayoutAmount_166.setString("10455550");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexOptPayoutAmount_166.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_166);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_336;
      FIX::ComplexEventEndDate ComplexEventEndDate_336(FIX::UTCTIMESTAMP(7, 28, 41, 16, 9, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_336);
      ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventEndDate_336.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_336(FIX::UTCTIMESTAMP(6, 45, 32, 7, 2, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_336);
      ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventStartDate_336.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_336);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_683;
        FIX::ComplexEventEndTime ComplexEventEndTime_683(FIX::UTCTIMEONLY(10, 29, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_683);
        ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventEndTime_683.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_683(FIX::UTCTIMEONLY(13, 58, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_683);
        ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventStartTime_683.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_683);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_164;
    FIX::EventDate EventDate_164("LOCALMKTDATE_422298386");
    noEvents_0_0.set(EventDate_164);
    EvntGrp_NoEvents_164.insert(EventDate_164.getString());
    FIX::EventPx EventPx_164;
    EventPx_164.setString("15882173");
    noEvents_0_0.set(EventPx_164);
    EvntGrp_NoEvents_164.insert(EventPx_164.getString());
    FIX::EventText EventText_164("STRING_638053456");
    noEvents_0_0.set(EventText_164);
    EvntGrp_NoEvents_164.insert(EventText_164.getString());
    FIX::EventTime EventTime_164(FIX::UTCTIMESTAMP(14, 15, 17, 13, 11, 2015));
    noEvents_0_0.set(EventTime_164);
    EvntGrp_NoEvents_164.insert(EventTime_164.getString());
    FIX::EventType EventType_164(8);
    noEvents_0_0.set(EventType_164);
    EvntGrp_NoEvents_164.insert(EventType_164.getString());
    all_values.push_back(EvntGrp_NoEvents_164);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_168;
    FIX::InstrumentPartyID InstrumentPartyID_168("STRING_330633165");
    noInstrumentParties_0_0.set(InstrumentPartyID_168);
    InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyID_168.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_168('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_168);
    InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyIDSource_168.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_168(1930502094);
    noInstrumentParties_0_0.set(InstrumentPartyRole_168);
    InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyRole_168.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_168);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328;
      FIX::InstrumentPartySubID InstrumentPartySubID_328("STRING_1353682893");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_328);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubID_328.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_328(1823852118);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_328);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubIDType_328.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_169;
    FIX::InstrumentPartyID InstrumentPartyID_169("STRING_1392145050");
    noInstrumentParties_0_1.set(InstrumentPartyID_169);
    InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyID_169.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_169('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_169);
    InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyIDSource_169.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_169(825289847);
    noInstrumentParties_0_1.set(InstrumentPartyRole_169);
    InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyRole_169.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_169);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329;
      FIX::InstrumentPartySubID InstrumentPartySubID_329("STRING_2143265456");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_329);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubID_329.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_329(1698691834);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_329);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubIDType_329.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330;
      FIX::InstrumentPartySubID InstrumentPartySubID_330("STRING_71811194");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_330);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubID_330.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_330(761822278);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_330);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubIDType_330.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331;
      FIX::InstrumentPartySubID InstrumentPartySubID_331("STRING_1388857718");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_331);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubID_331.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_331(1199165103);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_331);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubIDType_331.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_151;
    FIX::SecurityAltID SecurityAltID_151("STRING_1389903637");
    noSecurityAltID_0_0.set(SecurityAltID_151);
    SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltID_151.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_151("STRING_1167500408");
    noSecurityAltID_0_0.set(SecurityAltIDSource_151);
    SecAltIDGrp_NoSecurityAltID_151.insert(SecurityAltIDSource_151.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_151);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_162;
  FIX::SecurityXML SecurityXML_163("XMLDATA_784325054");
  msg.set(SecurityXML_163);
  FIX::SecurityXMLLen SecurityXMLLen_81(830637385);
  msg.set(SecurityXMLLen_81);
  FIX::SecurityXMLSchema SecurityXMLSchema_81("STRING_1805553864");
  msg.set(SecurityXMLSchema_81);
  SecurityXML_162.insert(SecurityXMLSchema_81.getString());
  all_values.push_back(SecurityXML_162);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_10;
  FIX::DeliveryForm DeliveryForm_10(1);
  msg.set(DeliveryForm_10);
  InstrumentExtension_10.insert(DeliveryForm_10.getString());
  FIX::PctAtRisk PctAtRisk_10;
  PctAtRisk_10.setString("73.990000");
  msg.set(PctAtRisk_10);
  InstrumentExtension_10.insert(PctAtRisk_10.getString());
  all_values.push_back(InstrumentExtension_10);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_18;
    FIX::InstrAttribType InstrAttribType_18(16);
    noInstrAttrib_0_0.set(InstrAttribType_18);
    AttrbGrp_NoInstrAttrib_18.insert(InstrAttribType_18.getString());
    FIX::InstrAttribValue InstrAttribValue_18("STRING_832105025");
    noInstrAttrib_0_0.set(InstrAttribValue_18);
    AttrbGrp_NoInstrAttrib_18.insert(InstrAttribValue_18.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_18);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_19;
    FIX::InstrAttribType InstrAttribType_19(22);
    noInstrAttrib_0_1.set(InstrAttribType_19);
    AttrbGrp_NoInstrAttrib_19.insert(InstrAttribType_19.getString());
    FIX::InstrAttribValue InstrAttribValue_19("STRING_846001410");
    noInstrAttrib_0_1.set(InstrAttribValue_19);
    AttrbGrp_NoInstrAttrib_19.insert(InstrAttribValue_19.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_19);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_28;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_28("CAN");
  msg.set(BenchmarkCurveCurrency_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveCurrency_28.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_28("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveName_28.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_28("STRING_1923305640");
  msg.set(BenchmarkCurvePoint_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurvePoint_28.getString());
  FIX::BenchmarkPrice BenchmarkPrice_28;
  BenchmarkPrice_28.setString("19390173");
  msg.set(BenchmarkPrice_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPrice_28.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_28(10432595);
  msg.set(BenchmarkPriceType_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPriceType_28.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_28("STRING_1129504885");
  msg.set(BenchmarkSecurityID_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityID_28.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_28("STRING_1615385859");
  msg.set(BenchmarkSecurityIDSource_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityIDSource_28.getString());
  FIX::Spread Spread_28;
  Spread_28.setString("14025776");
  msg.set(Spread_28);
  SpreadOrBenchmarkCurveData_28.insert(Spread_28.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_28);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_47;
    FIX::StipulationType StipulationType_47("STRING_BROKERCREDIT");
    noStipulations_0_0.set(StipulationType_47);
    Stipulations_NoStipulations_47.insert(StipulationType_47.getString());
    FIX::StipulationValue StipulationValue_47("STRING_438722270");
    noStipulations_0_0.set(StipulationValue_47);
    Stipulations_NoStipulations_47.insert(StipulationValue_47.getString());
    all_values.push_back(Stipulations_NoStipulations_47);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_48;
    FIX::StipulationType StipulationType_48("STRING_WAC");
    noStipulations_0_1.set(StipulationType_48);
    Stipulations_NoStipulations_48.insert(StipulationType_48.getString());
    FIX::StipulationValue StipulationValue_48("STRING_1991883893");
    noStipulations_0_1.set(StipulationValue_48);
    Stipulations_NoStipulations_48.insert(StipulationValue_48.getString());
    all_values.push_back(Stipulations_NoStipulations_48);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_124;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_124("DATA_1923797522");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuer_124.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_124(1233257963);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuerLen_124.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_124("DATA_1709698568");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDesc_124.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_124(138340543);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDescLen_124.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_124;
    UnderlyingAdjustedQuantity_124.setString("4756779");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_124);
    UnderlyingInstrument_124.insert(UnderlyingAdjustedQuantity_124.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_124;
    UnderlyingAllocationPercent_124.setString("53.280000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_124);
    UnderlyingInstrument_124.insert(UnderlyingAllocationPercent_124.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_124;
    UnderlyingAttachmentPoint_124.setString("55.970000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingAttachmentPoint_124.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_124("STRING_1306315338");
    noUnderlyings_0_0.set(UnderlyingCFICode_124);
    UnderlyingInstrument_124.insert(UnderlyingCFICode_124.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_124("STRING_387785544");
    noUnderlyings_0_0.set(UnderlyingCPProgram_124);
    UnderlyingInstrument_124.insert(UnderlyingCPProgram_124.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_124("STRING_482711125");
    noUnderlyings_0_0.set(UnderlyingCPRegType_124);
    UnderlyingInstrument_124.insert(UnderlyingCPRegType_124.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_124;
    UnderlyingCapValue_124.setString("10538390");
    noUnderlyings_0_0.set(UnderlyingCapValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCapValue_124.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_124;
    UnderlyingCashAmount_124.setString("17294642");
    noUnderlyings_0_0.set(UnderlyingCashAmount_124);
    UnderlyingInstrument_124.insert(UnderlyingCashAmount_124.getString());
    FIX::UnderlyingCashType UnderlyingCashType_124("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_124);
    UnderlyingInstrument_124.insert(UnderlyingCashType_124.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_124;
    UnderlyingContractMultiplier_124.setString("18859441");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplier_124.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_124(781434188);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplierUnit_124.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_124("COUNTRY_1396954180");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingCountryOfIssue_124.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_124("LOCALMKTDATE_1143903659");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponPaymentDate_124.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_124;
    UnderlyingCouponRate_124.setString("94.830000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponRate_124.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_124("STRING_426105108");
    noUnderlyings_0_0.set(UnderlyingCreditRating_124);
    UnderlyingInstrument_124.insert(UnderlyingCreditRating_124.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_124("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrency_124.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_124;
    UnderlyingCurrentValue_124.setString("4365377");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrentValue_124.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_124;
    UnderlyingDetachmentPoint_124.setString("5.360000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingDetachmentPoint_124.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_124;
    UnderlyingDirtyPrice_124.setString("493854");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingDirtyPrice_124.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_124;
    UnderlyingEndPrice_124.setString("18391153");
    noUnderlyings_0_0.set(UnderlyingEndPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingEndPrice_124.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_124;
    UnderlyingEndValue_124.setString("10679403");
    noUnderlyings_0_0.set(UnderlyingEndValue_124);
    UnderlyingInstrument_124.insert(UnderlyingEndValue_124.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_124(342577495);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_124);
    UnderlyingInstrument_124.insert(UnderlyingExerciseStyle_124.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_124;
    UnderlyingFXRate_124.setString("1303539");
    noUnderlyings_0_0.set(UnderlyingFXRate_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRate_124.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_124('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRateCalc_124.getString());
    FIX::UnderlyingFactor UnderlyingFactor_124;
    UnderlyingFactor_124.setString("1869777");
    noUnderlyings_0_0.set(UnderlyingFactor_124);
    UnderlyingInstrument_124.insert(UnderlyingFactor_124.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_124(640887436);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_124);
    UnderlyingInstrument_124.insert(UnderlyingFlowScheduleType_124.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_124("STRING_2006229444");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_124);
    UnderlyingInstrument_124.insert(UnderlyingInstrRegistry_124.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_124("LOCALMKTDATE_1420235703");
    noUnderlyings_0_0.set(UnderlyingIssueDate_124);
    UnderlyingInstrument_124.insert(UnderlyingIssueDate_124.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_124("STRING_203102356");
    noUnderlyings_0_0.set(UnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(UnderlyingIssuer_124.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_124("STRING_2144569987");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingLocaleOfIssue_124.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_124("LOCALMKTDATE_1895913656");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityDate_124.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_124("MONTHYEAR_932817685");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityMonthYear_124.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_124("TZTIMEONLY_919751936");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityTime_124.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_124;
    UnderlyingNotionalPercentageOutstanding_124.setString("53.470000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_124('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_124);
    UnderlyingInstrument_124.insert(UnderlyingOptAttribute_124.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_124;
    UnderlyingOriginalNotionalPercentageOutstanding_124.setString("30.620000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingOriginalNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_124("STRING_2108584437");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasure_124.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_124;
    UnderlyingPriceUnitOfMeasureQty_124.setString("9025838");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasureQty_124.getString());
    FIX::UnderlyingProduct UnderlyingProduct_124(1953415832);
    noUnderlyings_0_0.set(UnderlyingProduct_124);
    UnderlyingInstrument_124.insert(UnderlyingProduct_124.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_124(1847044904);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_124);
    UnderlyingInstrument_124.insert(UnderlyingPutOrCall_124.getString());
    FIX::UnderlyingPx UnderlyingPx_124;
    UnderlyingPx_124.setString("16840180");
    noUnderlyings_0_0.set(UnderlyingPx_124);
    UnderlyingInstrument_124.insert(UnderlyingPx_124.getString());
    FIX::UnderlyingQty UnderlyingQty_124;
    UnderlyingQty_124.setString("12028863");
    noUnderlyings_0_0.set(UnderlyingQty_124);
    UnderlyingInstrument_124.insert(UnderlyingQty_124.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_124("LOCALMKTDATE_843464915");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_124);
    UnderlyingInstrument_124.insert(UnderlyingRedemptionDate_124.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_124("STRING_326483901");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingRepoCollateralSecurityType_124.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_124;
    UnderlyingRepurchaseRate_124.setString("14.730000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseRate_124.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_124(1763190566);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseTerm_124.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_124("STRING_907967125");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_124);
    UnderlyingInstrument_124.insert(UnderlyingRestructuringType_124.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_124("STRING_2065529176");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityDesc_124.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_124("EXCHANGE_1664937454");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityExchange_124.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_124("STRING_957352561");
    noUnderlyings_0_0.set(UnderlyingSecurityID_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityID_124.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_124("STRING_1757160876");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityIDSource_124.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_124("STRING_585394131");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecuritySubType_124.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_124("STRING_1299930056");
    noUnderlyings_0_0.set(UnderlyingSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityType_124.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_124("STRING_1887514847");
    noUnderlyings_0_0.set(UnderlyingSeniority_124);
    UnderlyingInstrument_124.insert(UnderlyingSeniority_124.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_124("STRING_667826053");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlMethod_124.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_124(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlementType_124.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_124;
    UnderlyingStartValue_124.setString("3809186");
    noUnderlyings_0_0.set(UnderlyingStartValue_124);
    UnderlyingInstrument_124.insert(UnderlyingStartValue_124.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_124("STRING_526571849");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingStateOrProvinceOfIssue_124.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_124("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikeCurrency_124.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_124;
    UnderlyingStrikePrice_124.setString("5236581");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikePrice_124.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_124("STRING_508089860");
    noUnderlyings_0_0.set(UnderlyingSymbol_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbol_124.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_124("STRING_1516838677");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbolSfx_124.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_124("STRING_1443410124");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingTimeUnit_124.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_124("STRING_1562835207");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasure_124.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_124;
    UnderlyingUnitOfMeasureQty_124.setString("6899582");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasureQty_124.getString());
    all_values.push_back(UnderlyingInstrument_124);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_247;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_247("STRING_1523935996");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltID_247.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_247("STRING_1592542135");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltIDSource_247.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_248;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_248("STRING_504321723");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltID_248.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_248("STRING_1223497252");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltIDSource_248.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_249;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_249("STRING_1129076553");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_249);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltID_249.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_249("STRING_1707208088");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_249);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltIDSource_249.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_244;
      FIX::UnderlyingStipType UnderlyingStipType_244("STRING_1455560454");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipType_244.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_244("STRING_1188715913");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_244);
      UnderlyingStipulations_NoUnderlyingStips_244.insert(UnderlyingStipValue_244.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_244);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_239;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_239("STRING_216043931");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyID_239.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_239('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyIDSource_239.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_239(1200122892);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyRole_239.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_239);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_477("STRING_716438669");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_477);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubID_477.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_477(1785517023);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_477);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubIDType_477.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_478("STRING_325842901");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_478);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubID_478.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_478(456469869);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_478);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubIDType_478.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_125;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_125("DATA_305859428");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingIssuer_125.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_125(1812750698);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingIssuerLen_125.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_125("DATA_837388504");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDesc_125.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_125(832431277);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_125);
    UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDescLen_125.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_125;
    UnderlyingAdjustedQuantity_125.setString("4249269");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_125);
    UnderlyingInstrument_125.insert(UnderlyingAdjustedQuantity_125.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_125;
    UnderlyingAllocationPercent_125.setString("94.960000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_125);
    UnderlyingInstrument_125.insert(UnderlyingAllocationPercent_125.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_125;
    UnderlyingAttachmentPoint_125.setString("94.650000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_125);
    UnderlyingInstrument_125.insert(UnderlyingAttachmentPoint_125.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_125("STRING_933016762");
    noUnderlyings_0_1.set(UnderlyingCFICode_125);
    UnderlyingInstrument_125.insert(UnderlyingCFICode_125.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_125("STRING_790764525");
    noUnderlyings_0_1.set(UnderlyingCPProgram_125);
    UnderlyingInstrument_125.insert(UnderlyingCPProgram_125.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_125("STRING_652015942");
    noUnderlyings_0_1.set(UnderlyingCPRegType_125);
    UnderlyingInstrument_125.insert(UnderlyingCPRegType_125.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_125;
    UnderlyingCapValue_125.setString("3483683");
    noUnderlyings_0_1.set(UnderlyingCapValue_125);
    UnderlyingInstrument_125.insert(UnderlyingCapValue_125.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_125;
    UnderlyingCashAmount_125.setString("14807227");
    noUnderlyings_0_1.set(UnderlyingCashAmount_125);
    UnderlyingInstrument_125.insert(UnderlyingCashAmount_125.getString());
    FIX::UnderlyingCashType UnderlyingCashType_125("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_125);
    UnderlyingInstrument_125.insert(UnderlyingCashType_125.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_125;
    UnderlyingContractMultiplier_125.setString("18723043");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_125);
    UnderlyingInstrument_125.insert(UnderlyingContractMultiplier_125.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_125(925781271);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_125);
    UnderlyingInstrument_125.insert(UnderlyingContractMultiplierUnit_125.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_125("COUNTRY_1854727203");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingCountryOfIssue_125.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_125("LOCALMKTDATE_948317923");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_125);
    UnderlyingInstrument_125.insert(UnderlyingCouponPaymentDate_125.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_125;
    UnderlyingCouponRate_125.setString("78.240000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_125);
    UnderlyingInstrument_125.insert(UnderlyingCouponRate_125.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_125("STRING_1414451643");
    noUnderlyings_0_1.set(UnderlyingCreditRating_125);
    UnderlyingInstrument_125.insert(UnderlyingCreditRating_125.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_125("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_125);
    UnderlyingInstrument_125.insert(UnderlyingCurrency_125.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_125;
    UnderlyingCurrentValue_125.setString("4556839");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_125);
    UnderlyingInstrument_125.insert(UnderlyingCurrentValue_125.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_125;
    UnderlyingDetachmentPoint_125.setString("18.800000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_125);
    UnderlyingInstrument_125.insert(UnderlyingDetachmentPoint_125.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_125;
    UnderlyingDirtyPrice_125.setString("15789785");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_125);
    UnderlyingInstrument_125.insert(UnderlyingDirtyPrice_125.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_125;
    UnderlyingEndPrice_125.setString("15624453");
    noUnderlyings_0_1.set(UnderlyingEndPrice_125);
    UnderlyingInstrument_125.insert(UnderlyingEndPrice_125.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_125;
    UnderlyingEndValue_125.setString("16031047");
    noUnderlyings_0_1.set(UnderlyingEndValue_125);
    UnderlyingInstrument_125.insert(UnderlyingEndValue_125.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_125(604891407);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_125);
    UnderlyingInstrument_125.insert(UnderlyingExerciseStyle_125.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_125;
    UnderlyingFXRate_125.setString("1314003");
    noUnderlyings_0_1.set(UnderlyingFXRate_125);
    UnderlyingInstrument_125.insert(UnderlyingFXRate_125.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_125('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_125);
    UnderlyingInstrument_125.insert(UnderlyingFXRateCalc_125.getString());
    FIX::UnderlyingFactor UnderlyingFactor_125;
    UnderlyingFactor_125.setString("9307343");
    noUnderlyings_0_1.set(UnderlyingFactor_125);
    UnderlyingInstrument_125.insert(UnderlyingFactor_125.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_125(587870240);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_125);
    UnderlyingInstrument_125.insert(UnderlyingFlowScheduleType_125.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_125("STRING_1546997576");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_125);
    UnderlyingInstrument_125.insert(UnderlyingInstrRegistry_125.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_125("LOCALMKTDATE_596001358");
    noUnderlyings_0_1.set(UnderlyingIssueDate_125);
    UnderlyingInstrument_125.insert(UnderlyingIssueDate_125.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_125("STRING_1425258744");
    noUnderlyings_0_1.set(UnderlyingIssuer_125);
    UnderlyingInstrument_125.insert(UnderlyingIssuer_125.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_125("STRING_231945205");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingLocaleOfIssue_125.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_125("LOCALMKTDATE_1020928260");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityDate_125.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_125("MONTHYEAR_699184593");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityMonthYear_125.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_125("TZTIMEONLY_1588034671");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_125);
    UnderlyingInstrument_125.insert(UnderlyingMaturityTime_125.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_125;
    UnderlyingNotionalPercentageOutstanding_125.setString("50.230000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_125);
    UnderlyingInstrument_125.insert(UnderlyingNotionalPercentageOutstanding_125.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_125('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_125);
    UnderlyingInstrument_125.insert(UnderlyingOptAttribute_125.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_125;
    UnderlyingOriginalNotionalPercentageOutstanding_125.setString("69.650000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_125);
    UnderlyingInstrument_125.insert(UnderlyingOriginalNotionalPercentageOutstanding_125.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_125("STRING_154829697");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_125);
    UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasure_125.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_125;
    UnderlyingPriceUnitOfMeasureQty_125.setString("8231882");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_125);
    UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasureQty_125.getString());
    FIX::UnderlyingProduct UnderlyingProduct_125(1442972445);
    noUnderlyings_0_1.set(UnderlyingProduct_125);
    UnderlyingInstrument_125.insert(UnderlyingProduct_125.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_125(2027134015);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_125);
    UnderlyingInstrument_125.insert(UnderlyingPutOrCall_125.getString());
    FIX::UnderlyingPx UnderlyingPx_125;
    UnderlyingPx_125.setString("17489695");
    noUnderlyings_0_1.set(UnderlyingPx_125);
    UnderlyingInstrument_125.insert(UnderlyingPx_125.getString());
    FIX::UnderlyingQty UnderlyingQty_125;
    UnderlyingQty_125.setString("11502160");
    noUnderlyings_0_1.set(UnderlyingQty_125);
    UnderlyingInstrument_125.insert(UnderlyingQty_125.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_125("LOCALMKTDATE_827968290");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_125);
    UnderlyingInstrument_125.insert(UnderlyingRedemptionDate_125.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_125("STRING_1656343702");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_125);
    UnderlyingInstrument_125.insert(UnderlyingRepoCollateralSecurityType_125.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_125;
    UnderlyingRepurchaseRate_125.setString("39.960000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_125);
    UnderlyingInstrument_125.insert(UnderlyingRepurchaseRate_125.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_125(1695764733);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_125);
    UnderlyingInstrument_125.insert(UnderlyingRepurchaseTerm_125.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_125("STRING_871794685");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_125);
    UnderlyingInstrument_125.insert(UnderlyingRestructuringType_125.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_125("STRING_872867905");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityDesc_125.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_125("EXCHANGE_2098746613");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityExchange_125.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_125("STRING_303289599");
    noUnderlyings_0_1.set(UnderlyingSecurityID_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityID_125.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_125("STRING_287829606");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityIDSource_125.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_125("STRING_1554367737");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_125);
    UnderlyingInstrument_125.insert(UnderlyingSecuritySubType_125.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_125("STRING_908181006");
    noUnderlyings_0_1.set(UnderlyingSecurityType_125);
    UnderlyingInstrument_125.insert(UnderlyingSecurityType_125.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_125("STRING_419229977");
    noUnderlyings_0_1.set(UnderlyingSeniority_125);
    UnderlyingInstrument_125.insert(UnderlyingSeniority_125.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_125("STRING_648022236");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_125);
    UnderlyingInstrument_125.insert(UnderlyingSettlMethod_125.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_125(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_125);
    UnderlyingInstrument_125.insert(UnderlyingSettlementType_125.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_125;
    UnderlyingStartValue_125.setString("10071002");
    noUnderlyings_0_1.set(UnderlyingStartValue_125);
    UnderlyingInstrument_125.insert(UnderlyingStartValue_125.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_125("STRING_47536164");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_125);
    UnderlyingInstrument_125.insert(UnderlyingStateOrProvinceOfIssue_125.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_125("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_125);
    UnderlyingInstrument_125.insert(UnderlyingStrikeCurrency_125.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_125;
    UnderlyingStrikePrice_125.setString("2794813");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_125);
    UnderlyingInstrument_125.insert(UnderlyingStrikePrice_125.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_125("STRING_1308361285");
    noUnderlyings_0_1.set(UnderlyingSymbol_125);
    UnderlyingInstrument_125.insert(UnderlyingSymbol_125.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_125("STRING_984059907");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_125);
    UnderlyingInstrument_125.insert(UnderlyingSymbolSfx_125.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_125("STRING_1867516041");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_125);
    UnderlyingInstrument_125.insert(UnderlyingTimeUnit_125.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_125("STRING_1114822660");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_125);
    UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasure_125.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_125;
    UnderlyingUnitOfMeasureQty_125.setString("3265253");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_125);
    UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasureQty_125.getString());
    all_values.push_back(UnderlyingInstrument_125);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_250;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_250("STRING_1269652357");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_250);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltID_250.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_250("STRING_1149713632");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_250);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltIDSource_250.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_245;
      FIX::UnderlyingStipType UnderlyingStipType_245("STRING_1149302725");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipType_245.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_245("STRING_751199510");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_245);
      UnderlyingStipulations_NoUnderlyingStips_245.insert(UnderlyingStipValue_245.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_245);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_246;
      FIX::UnderlyingStipType UnderlyingStipType_246("STRING_258304156");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipType_246.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_246("STRING_1977271015");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_246);
      UnderlyingStipulations_NoUnderlyingStips_246.insert(UnderlyingStipValue_246.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_246);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_240;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_240("STRING_675488153");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyID_240.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_240('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyIDSource_240.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_240(1131854249);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyRole_240.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_240);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_479("STRING_1476815065");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_479);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubID_479.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_479(1435143848);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_479);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubIDType_479.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_241;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_241("STRING_1836185664");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyID_241.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_241('8');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyIDSource_241.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_241(195841206);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyRole_241.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_241);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_480("STRING_1531721391");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_480);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubID_480.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_480(2034756521);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_480);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubIDType_480.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_481("STRING_1115032211");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_481);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubID_481.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_481(1579257555);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_481);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubIDType_481.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_126;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_126("DATA_174705898");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingIssuer_126.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_126(1399907525);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingIssuerLen_126.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_126("DATA_1858738925");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDesc_126.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_126(1483067183);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_126);
    UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDescLen_126.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_126;
    UnderlyingAdjustedQuantity_126.setString("2364837");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_126);
    UnderlyingInstrument_126.insert(UnderlyingAdjustedQuantity_126.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_126;
    UnderlyingAllocationPercent_126.setString("13.180000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_126);
    UnderlyingInstrument_126.insert(UnderlyingAllocationPercent_126.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_126;
    UnderlyingAttachmentPoint_126.setString("61.960000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_126);
    UnderlyingInstrument_126.insert(UnderlyingAttachmentPoint_126.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_126("STRING_563009162");
    noUnderlyings_0_2.set(UnderlyingCFICode_126);
    UnderlyingInstrument_126.insert(UnderlyingCFICode_126.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_126("STRING_1391370676");
    noUnderlyings_0_2.set(UnderlyingCPProgram_126);
    UnderlyingInstrument_126.insert(UnderlyingCPProgram_126.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_126("STRING_1720058553");
    noUnderlyings_0_2.set(UnderlyingCPRegType_126);
    UnderlyingInstrument_126.insert(UnderlyingCPRegType_126.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_126;
    UnderlyingCapValue_126.setString("17127227");
    noUnderlyings_0_2.set(UnderlyingCapValue_126);
    UnderlyingInstrument_126.insert(UnderlyingCapValue_126.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_126;
    UnderlyingCashAmount_126.setString("4994588");
    noUnderlyings_0_2.set(UnderlyingCashAmount_126);
    UnderlyingInstrument_126.insert(UnderlyingCashAmount_126.getString());
    FIX::UnderlyingCashType UnderlyingCashType_126("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_126);
    UnderlyingInstrument_126.insert(UnderlyingCashType_126.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_126;
    UnderlyingContractMultiplier_126.setString("3164386");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_126);
    UnderlyingInstrument_126.insert(UnderlyingContractMultiplier_126.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_126(757762988);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_126);
    UnderlyingInstrument_126.insert(UnderlyingContractMultiplierUnit_126.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_126("COUNTRY_551664998");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingCountryOfIssue_126.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_126("LOCALMKTDATE_576498220");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_126);
    UnderlyingInstrument_126.insert(UnderlyingCouponPaymentDate_126.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_126;
    UnderlyingCouponRate_126.setString("11.410000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_126);
    UnderlyingInstrument_126.insert(UnderlyingCouponRate_126.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_126("STRING_2077217098");
    noUnderlyings_0_2.set(UnderlyingCreditRating_126);
    UnderlyingInstrument_126.insert(UnderlyingCreditRating_126.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_126("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_126);
    UnderlyingInstrument_126.insert(UnderlyingCurrency_126.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_126;
    UnderlyingCurrentValue_126.setString("14065485");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_126);
    UnderlyingInstrument_126.insert(UnderlyingCurrentValue_126.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_126;
    UnderlyingDetachmentPoint_126.setString("26.700000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_126);
    UnderlyingInstrument_126.insert(UnderlyingDetachmentPoint_126.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_126;
    UnderlyingDirtyPrice_126.setString("5228255");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_126);
    UnderlyingInstrument_126.insert(UnderlyingDirtyPrice_126.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_126;
    UnderlyingEndPrice_126.setString("1427640");
    noUnderlyings_0_2.set(UnderlyingEndPrice_126);
    UnderlyingInstrument_126.insert(UnderlyingEndPrice_126.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_126;
    UnderlyingEndValue_126.setString("11918538");
    noUnderlyings_0_2.set(UnderlyingEndValue_126);
    UnderlyingInstrument_126.insert(UnderlyingEndValue_126.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_126(630757562);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_126);
    UnderlyingInstrument_126.insert(UnderlyingExerciseStyle_126.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_126;
    UnderlyingFXRate_126.setString("16744854");
    noUnderlyings_0_2.set(UnderlyingFXRate_126);
    UnderlyingInstrument_126.insert(UnderlyingFXRate_126.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_126('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_126);
    UnderlyingInstrument_126.insert(UnderlyingFXRateCalc_126.getString());
    FIX::UnderlyingFactor UnderlyingFactor_126;
    UnderlyingFactor_126.setString("17457897");
    noUnderlyings_0_2.set(UnderlyingFactor_126);
    UnderlyingInstrument_126.insert(UnderlyingFactor_126.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_126(1106259321);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_126);
    UnderlyingInstrument_126.insert(UnderlyingFlowScheduleType_126.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_126("STRING_1253832648");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_126);
    UnderlyingInstrument_126.insert(UnderlyingInstrRegistry_126.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_126("LOCALMKTDATE_998213651");
    noUnderlyings_0_2.set(UnderlyingIssueDate_126);
    UnderlyingInstrument_126.insert(UnderlyingIssueDate_126.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_126("STRING_817514598");
    noUnderlyings_0_2.set(UnderlyingIssuer_126);
    UnderlyingInstrument_126.insert(UnderlyingIssuer_126.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_126("STRING_589416183");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingLocaleOfIssue_126.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_126("LOCALMKTDATE_1234697435");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityDate_126.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_126("MONTHYEAR_248802269");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityMonthYear_126.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_126("TZTIMEONLY_1039822379");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_126);
    UnderlyingInstrument_126.insert(UnderlyingMaturityTime_126.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_126;
    UnderlyingNotionalPercentageOutstanding_126.setString("65.970000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_126);
    UnderlyingInstrument_126.insert(UnderlyingNotionalPercentageOutstanding_126.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_126('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_126);
    UnderlyingInstrument_126.insert(UnderlyingOptAttribute_126.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_126;
    UnderlyingOriginalNotionalPercentageOutstanding_126.setString("72.850000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_126);
    UnderlyingInstrument_126.insert(UnderlyingOriginalNotionalPercentageOutstanding_126.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_126("STRING_1362945743");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_126);
    UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasure_126.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_126;
    UnderlyingPriceUnitOfMeasureQty_126.setString("21396317");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_126);
    UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasureQty_126.getString());
    FIX::UnderlyingProduct UnderlyingProduct_126(1334274915);
    noUnderlyings_0_2.set(UnderlyingProduct_126);
    UnderlyingInstrument_126.insert(UnderlyingProduct_126.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_126(1679384399);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_126);
    UnderlyingInstrument_126.insert(UnderlyingPutOrCall_126.getString());
    FIX::UnderlyingPx UnderlyingPx_126;
    UnderlyingPx_126.setString("7499111");
    noUnderlyings_0_2.set(UnderlyingPx_126);
    UnderlyingInstrument_126.insert(UnderlyingPx_126.getString());
    FIX::UnderlyingQty UnderlyingQty_126;
    UnderlyingQty_126.setString("18859399");
    noUnderlyings_0_2.set(UnderlyingQty_126);
    UnderlyingInstrument_126.insert(UnderlyingQty_126.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_126("LOCALMKTDATE_108398972");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_126);
    UnderlyingInstrument_126.insert(UnderlyingRedemptionDate_126.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_126("STRING_35678611");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_126);
    UnderlyingInstrument_126.insert(UnderlyingRepoCollateralSecurityType_126.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_126;
    UnderlyingRepurchaseRate_126.setString("33.640000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_126);
    UnderlyingInstrument_126.insert(UnderlyingRepurchaseRate_126.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_126(1816751442);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_126);
    UnderlyingInstrument_126.insert(UnderlyingRepurchaseTerm_126.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_126("STRING_869802163");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_126);
    UnderlyingInstrument_126.insert(UnderlyingRestructuringType_126.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_126("STRING_1074738232");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityDesc_126.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_126("EXCHANGE_665280464");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityExchange_126.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_126("STRING_1392627731");
    noUnderlyings_0_2.set(UnderlyingSecurityID_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityID_126.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_126("STRING_1217502254");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityIDSource_126.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_126("STRING_1857134341");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_126);
    UnderlyingInstrument_126.insert(UnderlyingSecuritySubType_126.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_126("STRING_2023385293");
    noUnderlyings_0_2.set(UnderlyingSecurityType_126);
    UnderlyingInstrument_126.insert(UnderlyingSecurityType_126.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_126("STRING_744504020");
    noUnderlyings_0_2.set(UnderlyingSeniority_126);
    UnderlyingInstrument_126.insert(UnderlyingSeniority_126.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_126("STRING_788777443");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_126);
    UnderlyingInstrument_126.insert(UnderlyingSettlMethod_126.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_126(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_126);
    UnderlyingInstrument_126.insert(UnderlyingSettlementType_126.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_126;
    UnderlyingStartValue_126.setString("18507633");
    noUnderlyings_0_2.set(UnderlyingStartValue_126);
    UnderlyingInstrument_126.insert(UnderlyingStartValue_126.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_126("STRING_2042610091");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_126);
    UnderlyingInstrument_126.insert(UnderlyingStateOrProvinceOfIssue_126.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_126("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_126);
    UnderlyingInstrument_126.insert(UnderlyingStrikeCurrency_126.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_126;
    UnderlyingStrikePrice_126.setString("4845426");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_126);
    UnderlyingInstrument_126.insert(UnderlyingStrikePrice_126.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_126("STRING_1707118857");
    noUnderlyings_0_2.set(UnderlyingSymbol_126);
    UnderlyingInstrument_126.insert(UnderlyingSymbol_126.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_126("STRING_769596560");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_126);
    UnderlyingInstrument_126.insert(UnderlyingSymbolSfx_126.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_126("STRING_1524365006");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_126);
    UnderlyingInstrument_126.insert(UnderlyingTimeUnit_126.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_126("STRING_1357341806");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_126);
    UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasure_126.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_126;
    UnderlyingUnitOfMeasureQty_126.setString("2622858");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_126);
    UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasureQty_126.getString());
    all_values.push_back(UnderlyingInstrument_126);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_251;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_251("STRING_572803902");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_251);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltID_251.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_251("STRING_254433987");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_251);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltIDSource_251.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_247;
      FIX::UnderlyingStipType UnderlyingStipType_247("STRING_104704653");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_247);
      UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipType_247.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_247("STRING_1004345105");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_247);
      UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipValue_247.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_247);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_248;
      FIX::UnderlyingStipType UnderlyingStipType_248("STRING_1062009824");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_248);
      UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipType_248.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_248("STRING_213103625");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_248);
      UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipValue_248.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_248);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_249;
      FIX::UnderlyingStipType UnderlyingStipType_249("STRING_1040023717");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_249);
      UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipType_249.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_249("STRING_730199540");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_249);
      UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipValue_249.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_249);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_242;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_242("STRING_1909825880");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyID_242.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_242('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyIDSource_242.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_242(547651884);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyRole_242.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_242);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_482("STRING_874956379");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_482);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubID_482.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_482(257302577);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_482);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubIDType_482.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_483("STRING_1030871608");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_483);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubID_483.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_483(1619460399);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_483);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubIDType_483.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_484("STRING_1046080021");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_484);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubID_484.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_484(505079378);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_484);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubIDType_484.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_243;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_243("STRING_1322740092");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyID_243.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_243('9');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyIDSource_243.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_243(977500800);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyRole_243.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_243);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_485("STRING_1425749091");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_485);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubID_485.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_485(537136009);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_485);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubIDType_485.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_244;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_244("STRING_465647296");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyID_244.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_244('8');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyIDSource_244.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_244(1894477815);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyRole_244.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_244);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_486("STRING_791909093");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_486);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubID_486.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_486(319798069);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_486);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubIDType_486.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_487("STRING_982367141");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_487);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubID_487.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_487(2115462652);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_487);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubIDType_487.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_488("STRING_424502723");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_488);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubID_488.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_488(1986712247);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_488);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubIDType_488.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_23;
  FIX::Yield Yield_23;
  Yield_23.setString("88.290000");
  msg.set(Yield_23);
  YieldData_23.insert(Yield_23.getString());
  FIX::YieldCalcDate YieldCalcDate_23("LOCALMKTDATE_637606348");
  msg.set(YieldCalcDate_23);
  YieldData_23.insert(YieldCalcDate_23.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_23("LOCALMKTDATE_879252316");
  msg.set(YieldRedemptionDate_23);
  YieldData_23.insert(YieldRedemptionDate_23.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_23;
  YieldRedemptionPrice_23.setString("17601883");
  msg.set(YieldRedemptionPrice_23);
  YieldData_23.insert(YieldRedemptionPrice_23.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_23(519977768);
  msg.set(YieldRedemptionPriceType_23);
  YieldData_23.insert(YieldRedemptionPriceType_23.getString());
  FIX::YieldType YieldType_23("STRING_TENDER");
  msg.set(YieldType_23);
  YieldData_23.insert(YieldType_23.getString());
  all_values.push_back(YieldData_23);
  all_compo_names.insert("YieldData");


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
