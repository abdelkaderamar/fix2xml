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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatusRequest_0;
  FIX::Currency Currency_72("USD");
  msg.set(Currency_72);
  SecurityStatusRequest_0.insert(Currency_72.getString());
  FIX::MarketID MarketID_24("EXCHANGE_830153319");
  msg.set(MarketID_24);
  SecurityStatusRequest_0.insert(MarketID_24.getString());
  FIX::MarketSegmentID MarketSegmentID_24("STRING_684078647");
  msg.set(MarketSegmentID_24);
  SecurityStatusRequest_0.insert(MarketSegmentID_24.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_1("STRING_1774620192");
  msg.set(SecurityStatusReqID_1);
  SecurityStatusRequest_0.insert(SecurityStatusReqID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_11('0');
  msg.set(SubscriptionRequestType_11);
  SecurityStatusRequest_0.insert(SubscriptionRequestType_11.getString());
  FIX::TradingSessionID TradingSessionID_114("STRING_3");
  msg.set(TradingSessionID_114);
  SecurityStatusRequest_0.insert(TradingSessionID_114.getString());
  FIX::TradingSessionSubID TradingSessionSubID_114("STRING_2");
  msg.set(TradingSessionSubID_114);
  SecurityStatusRequest_0.insert(TradingSessionSubID_114.getString());
  all_values.push_back(SecurityStatusRequest_0);

  all_compo_names.insert("SecurityStatusRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_147;
    FIX::EncodedLegIssuer EncodedLegIssuer_147("DATA_1012417161");
    noLegs_0_0.set(EncodedLegIssuer_147);
    InstrumentLeg_147.insert(EncodedLegIssuer_147.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_147(2031629903);
    noLegs_0_0.set(EncodedLegIssuerLen_147);
    InstrumentLeg_147.insert(EncodedLegIssuerLen_147.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_147("DATA_347918240");
    noLegs_0_0.set(EncodedLegSecurityDesc_147);
    InstrumentLeg_147.insert(EncodedLegSecurityDesc_147.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_147(1224621374);
    noLegs_0_0.set(EncodedLegSecurityDescLen_147);
    InstrumentLeg_147.insert(EncodedLegSecurityDescLen_147.getString());
    FIX::LegCFICode LegCFICode_147("STRING_194428361");
    noLegs_0_0.set(LegCFICode_147);
    InstrumentLeg_147.insert(LegCFICode_147.getString());
    FIX::LegContractMultiplier LegContractMultiplier_147;
    LegContractMultiplier_147.setString("16964358");
    noLegs_0_0.set(LegContractMultiplier_147);
    InstrumentLeg_147.insert(LegContractMultiplier_147.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_147(1020675478);
    noLegs_0_0.set(LegContractMultiplierUnit_147);
    InstrumentLeg_147.insert(LegContractMultiplierUnit_147.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_147("MONTHYEAR_168785716");
    noLegs_0_0.set(LegContractSettlMonth_147);
    InstrumentLeg_147.insert(LegContractSettlMonth_147.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_147("COUNTRY_1828222633");
    noLegs_0_0.set(LegCountryOfIssue_147);
    InstrumentLeg_147.insert(LegCountryOfIssue_147.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_147("LOCALMKTDATE_1907889839");
    noLegs_0_0.set(LegCouponPaymentDate_147);
    InstrumentLeg_147.insert(LegCouponPaymentDate_147.getString());
    FIX::LegCouponRate LegCouponRate_147;
    LegCouponRate_147.setString("82.720000");
    noLegs_0_0.set(LegCouponRate_147);
    InstrumentLeg_147.insert(LegCouponRate_147.getString());
    FIX::LegCreditRating LegCreditRating_147("STRING_1042675106");
    noLegs_0_0.set(LegCreditRating_147);
    InstrumentLeg_147.insert(LegCreditRating_147.getString());
    FIX::LegCurrency LegCurrency_147("CAN");
    noLegs_0_0.set(LegCurrency_147);
    InstrumentLeg_147.insert(LegCurrency_147.getString());
    FIX::LegDatedDate LegDatedDate_147("LOCALMKTDATE_730936299");
    noLegs_0_0.set(LegDatedDate_147);
    InstrumentLeg_147.insert(LegDatedDate_147.getString());
    FIX::LegExerciseStyle LegExerciseStyle_147(1217389566);
    noLegs_0_0.set(LegExerciseStyle_147);
    InstrumentLeg_147.insert(LegExerciseStyle_147.getString());
    FIX::LegFactor LegFactor_147;
    LegFactor_147.setString("20783579");
    noLegs_0_0.set(LegFactor_147);
    InstrumentLeg_147.insert(LegFactor_147.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_147(1190509720);
    noLegs_0_0.set(LegFlowScheduleType_147);
    InstrumentLeg_147.insert(LegFlowScheduleType_147.getString());
    FIX::LegInstrRegistry LegInstrRegistry_147("STRING_1680327206");
    noLegs_0_0.set(LegInstrRegistry_147);
    InstrumentLeg_147.insert(LegInstrRegistry_147.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_147("LOCALMKTDATE_535294495");
    noLegs_0_0.set(LegInterestAccrualDate_147);
    InstrumentLeg_147.insert(LegInterestAccrualDate_147.getString());
    FIX::LegIssueDate LegIssueDate_147("LOCALMKTDATE_1300859331");
    noLegs_0_0.set(LegIssueDate_147);
    InstrumentLeg_147.insert(LegIssueDate_147.getString());
    FIX::LegIssuer LegIssuer_147("STRING_1581378887");
    noLegs_0_0.set(LegIssuer_147);
    InstrumentLeg_147.insert(LegIssuer_147.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_147("STRING_291967134");
    noLegs_0_0.set(LegLocaleOfIssue_147);
    InstrumentLeg_147.insert(LegLocaleOfIssue_147.getString());
    FIX::LegMaturityDate LegMaturityDate_147("LOCALMKTDATE_1337443881");
    noLegs_0_0.set(LegMaturityDate_147);
    InstrumentLeg_147.insert(LegMaturityDate_147.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_147("MONTHYEAR_264048558");
    noLegs_0_0.set(LegMaturityMonthYear_147);
    InstrumentLeg_147.insert(LegMaturityMonthYear_147.getString());
    FIX::LegMaturityTime LegMaturityTime_147("TZTIMEONLY_976045781");
    noLegs_0_0.set(LegMaturityTime_147);
    InstrumentLeg_147.insert(LegMaturityTime_147.getString());
    FIX::LegOptAttribute LegOptAttribute_147('9');
    noLegs_0_0.set(LegOptAttribute_147);
    InstrumentLeg_147.insert(LegOptAttribute_147.getString());
    FIX::LegOptionRatio LegOptionRatio_147;
    LegOptionRatio_147.setString("18941800");
    noLegs_0_0.set(LegOptionRatio_147);
    InstrumentLeg_147.insert(LegOptionRatio_147.getString());
    FIX::LegPool LegPool_147("STRING_1980353281");
    noLegs_0_0.set(LegPool_147);
    InstrumentLeg_147.insert(LegPool_147.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_147("STRING_400766824");
    noLegs_0_0.set(LegPriceUnitOfMeasure_147);
    InstrumentLeg_147.insert(LegPriceUnitOfMeasure_147.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_147;
    LegPriceUnitOfMeasureQty_147.setString("16117353");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_147);
    InstrumentLeg_147.insert(LegPriceUnitOfMeasureQty_147.getString());
    FIX::LegProduct LegProduct_147(845286794);
    noLegs_0_0.set(LegProduct_147);
    InstrumentLeg_147.insert(LegProduct_147.getString());
    FIX::LegPutOrCall LegPutOrCall_147(284913079);
    noLegs_0_0.set(LegPutOrCall_147);
    InstrumentLeg_147.insert(LegPutOrCall_147.getString());
    FIX::LegRatioQty LegRatioQty_147;
    LegRatioQty_147.setString("19596536");
    noLegs_0_0.set(LegRatioQty_147);
    InstrumentLeg_147.insert(LegRatioQty_147.getString());
    FIX::LegRedemptionDate LegRedemptionDate_147("LOCALMKTDATE_2069908169");
    noLegs_0_0.set(LegRedemptionDate_147);
    InstrumentLeg_147.insert(LegRedemptionDate_147.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_147("STRING_479341441");
    noLegs_0_0.set(LegRepoCollateralSecurityType_147);
    InstrumentLeg_147.insert(LegRepoCollateralSecurityType_147.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_147;
    LegRepurchaseRate_147.setString("58.050000");
    noLegs_0_0.set(LegRepurchaseRate_147);
    InstrumentLeg_147.insert(LegRepurchaseRate_147.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_147(943099999);
    noLegs_0_0.set(LegRepurchaseTerm_147);
    InstrumentLeg_147.insert(LegRepurchaseTerm_147.getString());
    FIX::LegSecurityDesc LegSecurityDesc_147("STRING_648127157");
    noLegs_0_0.set(LegSecurityDesc_147);
    InstrumentLeg_147.insert(LegSecurityDesc_147.getString());
    FIX::LegSecurityExchange LegSecurityExchange_147("EXCHANGE_1189344790");
    noLegs_0_0.set(LegSecurityExchange_147);
    InstrumentLeg_147.insert(LegSecurityExchange_147.getString());
    FIX::LegSecurityID LegSecurityID_147("STRING_703506191");
    noLegs_0_0.set(LegSecurityID_147);
    InstrumentLeg_147.insert(LegSecurityID_147.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_147("STRING_1617355429");
    noLegs_0_0.set(LegSecurityIDSource_147);
    InstrumentLeg_147.insert(LegSecurityIDSource_147.getString());
    FIX::LegSecuritySubType LegSecuritySubType_147("STRING_84536248");
    noLegs_0_0.set(LegSecuritySubType_147);
    InstrumentLeg_147.insert(LegSecuritySubType_147.getString());
    FIX::LegSecurityType LegSecurityType_147("STRING_448270756");
    noLegs_0_0.set(LegSecurityType_147);
    InstrumentLeg_147.insert(LegSecurityType_147.getString());
    FIX::LegSide LegSide_147('8');
    noLegs_0_0.set(LegSide_147);
    InstrumentLeg_147.insert(LegSide_147.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_147("STRING_815472547");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_147);
    InstrumentLeg_147.insert(LegStateOrProvinceOfIssue_147.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_147("CHF");
    noLegs_0_0.set(LegStrikeCurrency_147);
    InstrumentLeg_147.insert(LegStrikeCurrency_147.getString());
    FIX::LegStrikePrice LegStrikePrice_147;
    LegStrikePrice_147.setString("20059822");
    noLegs_0_0.set(LegStrikePrice_147);
    InstrumentLeg_147.insert(LegStrikePrice_147.getString());
    FIX::LegSymbol LegSymbol_147("STRING_1198503881");
    noLegs_0_0.set(LegSymbol_147);
    InstrumentLeg_147.insert(LegSymbol_147.getString());
    FIX::LegSymbolSfx LegSymbolSfx_147("STRING_1268331334");
    noLegs_0_0.set(LegSymbolSfx_147);
    InstrumentLeg_147.insert(LegSymbolSfx_147.getString());
    FIX::LegTimeUnit LegTimeUnit_147("STRING_1159357951");
    noLegs_0_0.set(LegTimeUnit_147);
    InstrumentLeg_147.insert(LegTimeUnit_147.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_147("STRING_632399120");
    noLegs_0_0.set(LegUnitOfMeasure_147);
    InstrumentLeg_147.insert(LegUnitOfMeasure_147.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_147;
    LegUnitOfMeasureQty_147.setString("15602984");
    noLegs_0_0.set(LegUnitOfMeasureQty_147);
    InstrumentLeg_147.insert(LegUnitOfMeasureQty_147.getString());
    all_values.push_back(InstrumentLeg_147);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_285;
      FIX::LegSecurityAltID LegSecurityAltID_285("STRING_896447679");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_285);
      LegSecAltIDGrp_NoLegSecurityAltID_285.insert(LegSecurityAltID_285.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_285("STRING_388860602");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_285);
      LegSecAltIDGrp_NoLegSecurityAltID_285.insert(LegSecurityAltIDSource_285.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_285);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_148;
    FIX::EncodedLegIssuer EncodedLegIssuer_148("DATA_1313898610");
    noLegs_0_1.set(EncodedLegIssuer_148);
    InstrumentLeg_148.insert(EncodedLegIssuer_148.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_148(643144033);
    noLegs_0_1.set(EncodedLegIssuerLen_148);
    InstrumentLeg_148.insert(EncodedLegIssuerLen_148.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_148("DATA_221730236");
    noLegs_0_1.set(EncodedLegSecurityDesc_148);
    InstrumentLeg_148.insert(EncodedLegSecurityDesc_148.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_148(1714665435);
    noLegs_0_1.set(EncodedLegSecurityDescLen_148);
    InstrumentLeg_148.insert(EncodedLegSecurityDescLen_148.getString());
    FIX::LegCFICode LegCFICode_148("STRING_107395761");
    noLegs_0_1.set(LegCFICode_148);
    InstrumentLeg_148.insert(LegCFICode_148.getString());
    FIX::LegContractMultiplier LegContractMultiplier_148;
    LegContractMultiplier_148.setString("10670170");
    noLegs_0_1.set(LegContractMultiplier_148);
    InstrumentLeg_148.insert(LegContractMultiplier_148.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_148(1999578514);
    noLegs_0_1.set(LegContractMultiplierUnit_148);
    InstrumentLeg_148.insert(LegContractMultiplierUnit_148.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_148("MONTHYEAR_2067049377");
    noLegs_0_1.set(LegContractSettlMonth_148);
    InstrumentLeg_148.insert(LegContractSettlMonth_148.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_148("COUNTRY_989441551");
    noLegs_0_1.set(LegCountryOfIssue_148);
    InstrumentLeg_148.insert(LegCountryOfIssue_148.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_148("LOCALMKTDATE_331436307");
    noLegs_0_1.set(LegCouponPaymentDate_148);
    InstrumentLeg_148.insert(LegCouponPaymentDate_148.getString());
    FIX::LegCouponRate LegCouponRate_148;
    LegCouponRate_148.setString("15.340000");
    noLegs_0_1.set(LegCouponRate_148);
    InstrumentLeg_148.insert(LegCouponRate_148.getString());
    FIX::LegCreditRating LegCreditRating_148("STRING_1932541551");
    noLegs_0_1.set(LegCreditRating_148);
    InstrumentLeg_148.insert(LegCreditRating_148.getString());
    FIX::LegCurrency LegCurrency_148("CHF");
    noLegs_0_1.set(LegCurrency_148);
    InstrumentLeg_148.insert(LegCurrency_148.getString());
    FIX::LegDatedDate LegDatedDate_148("LOCALMKTDATE_488564094");
    noLegs_0_1.set(LegDatedDate_148);
    InstrumentLeg_148.insert(LegDatedDate_148.getString());
    FIX::LegExerciseStyle LegExerciseStyle_148(449435246);
    noLegs_0_1.set(LegExerciseStyle_148);
    InstrumentLeg_148.insert(LegExerciseStyle_148.getString());
    FIX::LegFactor LegFactor_148;
    LegFactor_148.setString("5545689");
    noLegs_0_1.set(LegFactor_148);
    InstrumentLeg_148.insert(LegFactor_148.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_148(936834850);
    noLegs_0_1.set(LegFlowScheduleType_148);
    InstrumentLeg_148.insert(LegFlowScheduleType_148.getString());
    FIX::LegInstrRegistry LegInstrRegistry_148("STRING_1251597793");
    noLegs_0_1.set(LegInstrRegistry_148);
    InstrumentLeg_148.insert(LegInstrRegistry_148.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_148("LOCALMKTDATE_1370041473");
    noLegs_0_1.set(LegInterestAccrualDate_148);
    InstrumentLeg_148.insert(LegInterestAccrualDate_148.getString());
    FIX::LegIssueDate LegIssueDate_148("LOCALMKTDATE_455011524");
    noLegs_0_1.set(LegIssueDate_148);
    InstrumentLeg_148.insert(LegIssueDate_148.getString());
    FIX::LegIssuer LegIssuer_148("STRING_1984634632");
    noLegs_0_1.set(LegIssuer_148);
    InstrumentLeg_148.insert(LegIssuer_148.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_148("STRING_1228540093");
    noLegs_0_1.set(LegLocaleOfIssue_148);
    InstrumentLeg_148.insert(LegLocaleOfIssue_148.getString());
    FIX::LegMaturityDate LegMaturityDate_148("LOCALMKTDATE_1653515405");
    noLegs_0_1.set(LegMaturityDate_148);
    InstrumentLeg_148.insert(LegMaturityDate_148.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_148("MONTHYEAR_1105482318");
    noLegs_0_1.set(LegMaturityMonthYear_148);
    InstrumentLeg_148.insert(LegMaturityMonthYear_148.getString());
    FIX::LegMaturityTime LegMaturityTime_148("TZTIMEONLY_240414396");
    noLegs_0_1.set(LegMaturityTime_148);
    InstrumentLeg_148.insert(LegMaturityTime_148.getString());
    FIX::LegOptAttribute LegOptAttribute_148('1');
    noLegs_0_1.set(LegOptAttribute_148);
    InstrumentLeg_148.insert(LegOptAttribute_148.getString());
    FIX::LegOptionRatio LegOptionRatio_148;
    LegOptionRatio_148.setString("5182971");
    noLegs_0_1.set(LegOptionRatio_148);
    InstrumentLeg_148.insert(LegOptionRatio_148.getString());
    FIX::LegPool LegPool_148("STRING_589732581");
    noLegs_0_1.set(LegPool_148);
    InstrumentLeg_148.insert(LegPool_148.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_148("STRING_1034878557");
    noLegs_0_1.set(LegPriceUnitOfMeasure_148);
    InstrumentLeg_148.insert(LegPriceUnitOfMeasure_148.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_148;
    LegPriceUnitOfMeasureQty_148.setString("9071577");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_148);
    InstrumentLeg_148.insert(LegPriceUnitOfMeasureQty_148.getString());
    FIX::LegProduct LegProduct_148(1903631192);
    noLegs_0_1.set(LegProduct_148);
    InstrumentLeg_148.insert(LegProduct_148.getString());
    FIX::LegPutOrCall LegPutOrCall_148(1678022590);
    noLegs_0_1.set(LegPutOrCall_148);
    InstrumentLeg_148.insert(LegPutOrCall_148.getString());
    FIX::LegRatioQty LegRatioQty_148;
    LegRatioQty_148.setString("11288879");
    noLegs_0_1.set(LegRatioQty_148);
    InstrumentLeg_148.insert(LegRatioQty_148.getString());
    FIX::LegRedemptionDate LegRedemptionDate_148("LOCALMKTDATE_1470812979");
    noLegs_0_1.set(LegRedemptionDate_148);
    InstrumentLeg_148.insert(LegRedemptionDate_148.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_148("STRING_1785418352");
    noLegs_0_1.set(LegRepoCollateralSecurityType_148);
    InstrumentLeg_148.insert(LegRepoCollateralSecurityType_148.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_148;
    LegRepurchaseRate_148.setString("13.600000");
    noLegs_0_1.set(LegRepurchaseRate_148);
    InstrumentLeg_148.insert(LegRepurchaseRate_148.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_148(1322907845);
    noLegs_0_1.set(LegRepurchaseTerm_148);
    InstrumentLeg_148.insert(LegRepurchaseTerm_148.getString());
    FIX::LegSecurityDesc LegSecurityDesc_148("STRING_1704984081");
    noLegs_0_1.set(LegSecurityDesc_148);
    InstrumentLeg_148.insert(LegSecurityDesc_148.getString());
    FIX::LegSecurityExchange LegSecurityExchange_148("EXCHANGE_1037862912");
    noLegs_0_1.set(LegSecurityExchange_148);
    InstrumentLeg_148.insert(LegSecurityExchange_148.getString());
    FIX::LegSecurityID LegSecurityID_148("STRING_1654344153");
    noLegs_0_1.set(LegSecurityID_148);
    InstrumentLeg_148.insert(LegSecurityID_148.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_148("STRING_985671968");
    noLegs_0_1.set(LegSecurityIDSource_148);
    InstrumentLeg_148.insert(LegSecurityIDSource_148.getString());
    FIX::LegSecuritySubType LegSecuritySubType_148("STRING_822920815");
    noLegs_0_1.set(LegSecuritySubType_148);
    InstrumentLeg_148.insert(LegSecuritySubType_148.getString());
    FIX::LegSecurityType LegSecurityType_148("STRING_486423969");
    noLegs_0_1.set(LegSecurityType_148);
    InstrumentLeg_148.insert(LegSecurityType_148.getString());
    FIX::LegSide LegSide_148('1');
    noLegs_0_1.set(LegSide_148);
    InstrumentLeg_148.insert(LegSide_148.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_148("STRING_1311484909");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_148);
    InstrumentLeg_148.insert(LegStateOrProvinceOfIssue_148.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_148("USD");
    noLegs_0_1.set(LegStrikeCurrency_148);
    InstrumentLeg_148.insert(LegStrikeCurrency_148.getString());
    FIX::LegStrikePrice LegStrikePrice_148;
    LegStrikePrice_148.setString("1008361");
    noLegs_0_1.set(LegStrikePrice_148);
    InstrumentLeg_148.insert(LegStrikePrice_148.getString());
    FIX::LegSymbol LegSymbol_148("STRING_39973360");
    noLegs_0_1.set(LegSymbol_148);
    InstrumentLeg_148.insert(LegSymbol_148.getString());
    FIX::LegSymbolSfx LegSymbolSfx_148("STRING_1232831395");
    noLegs_0_1.set(LegSymbolSfx_148);
    InstrumentLeg_148.insert(LegSymbolSfx_148.getString());
    FIX::LegTimeUnit LegTimeUnit_148("STRING_555847635");
    noLegs_0_1.set(LegTimeUnit_148);
    InstrumentLeg_148.insert(LegTimeUnit_148.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_148("STRING_2024607992");
    noLegs_0_1.set(LegUnitOfMeasure_148);
    InstrumentLeg_148.insert(LegUnitOfMeasure_148.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_148;
    LegUnitOfMeasureQty_148.setString("3138878");
    noLegs_0_1.set(LegUnitOfMeasureQty_148);
    InstrumentLeg_148.insert(LegUnitOfMeasureQty_148.getString());
    all_values.push_back(InstrumentLeg_148);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_286;
      FIX::LegSecurityAltID LegSecurityAltID_286("STRING_982606663");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_286);
      LegSecAltIDGrp_NoLegSecurityAltID_286.insert(LegSecurityAltID_286.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_286("STRING_554302237");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_286);
      LegSecAltIDGrp_NoLegSecurityAltID_286.insert(LegSecurityAltIDSource_286.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_286);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_287;
      FIX::LegSecurityAltID LegSecurityAltID_287("STRING_200310271");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_287);
      LegSecAltIDGrp_NoLegSecurityAltID_287.insert(LegSecurityAltID_287.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_287("STRING_1500903802");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_287);
      LegSecAltIDGrp_NoLegSecurityAltID_287.insert(LegSecurityAltIDSource_287.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_287);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_149;
    FIX::EncodedLegIssuer EncodedLegIssuer_149("DATA_1144034818");
    noLegs_0_2.set(EncodedLegIssuer_149);
    InstrumentLeg_149.insert(EncodedLegIssuer_149.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_149(1235188828);
    noLegs_0_2.set(EncodedLegIssuerLen_149);
    InstrumentLeg_149.insert(EncodedLegIssuerLen_149.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_149("DATA_260577896");
    noLegs_0_2.set(EncodedLegSecurityDesc_149);
    InstrumentLeg_149.insert(EncodedLegSecurityDesc_149.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_149(900182362);
    noLegs_0_2.set(EncodedLegSecurityDescLen_149);
    InstrumentLeg_149.insert(EncodedLegSecurityDescLen_149.getString());
    FIX::LegCFICode LegCFICode_149("STRING_765727770");
    noLegs_0_2.set(LegCFICode_149);
    InstrumentLeg_149.insert(LegCFICode_149.getString());
    FIX::LegContractMultiplier LegContractMultiplier_149;
    LegContractMultiplier_149.setString("13894658");
    noLegs_0_2.set(LegContractMultiplier_149);
    InstrumentLeg_149.insert(LegContractMultiplier_149.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_149(223511693);
    noLegs_0_2.set(LegContractMultiplierUnit_149);
    InstrumentLeg_149.insert(LegContractMultiplierUnit_149.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_149("MONTHYEAR_403662474");
    noLegs_0_2.set(LegContractSettlMonth_149);
    InstrumentLeg_149.insert(LegContractSettlMonth_149.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_149("COUNTRY_1437887235");
    noLegs_0_2.set(LegCountryOfIssue_149);
    InstrumentLeg_149.insert(LegCountryOfIssue_149.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_149("LOCALMKTDATE_1546419539");
    noLegs_0_2.set(LegCouponPaymentDate_149);
    InstrumentLeg_149.insert(LegCouponPaymentDate_149.getString());
    FIX::LegCouponRate LegCouponRate_149;
    LegCouponRate_149.setString("65.560000");
    noLegs_0_2.set(LegCouponRate_149);
    InstrumentLeg_149.insert(LegCouponRate_149.getString());
    FIX::LegCreditRating LegCreditRating_149("STRING_328266499");
    noLegs_0_2.set(LegCreditRating_149);
    InstrumentLeg_149.insert(LegCreditRating_149.getString());
    FIX::LegCurrency LegCurrency_149("JPY");
    noLegs_0_2.set(LegCurrency_149);
    InstrumentLeg_149.insert(LegCurrency_149.getString());
    FIX::LegDatedDate LegDatedDate_149("LOCALMKTDATE_1151187314");
    noLegs_0_2.set(LegDatedDate_149);
    InstrumentLeg_149.insert(LegDatedDate_149.getString());
    FIX::LegExerciseStyle LegExerciseStyle_149(1539704013);
    noLegs_0_2.set(LegExerciseStyle_149);
    InstrumentLeg_149.insert(LegExerciseStyle_149.getString());
    FIX::LegFactor LegFactor_149;
    LegFactor_149.setString("2550558");
    noLegs_0_2.set(LegFactor_149);
    InstrumentLeg_149.insert(LegFactor_149.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_149(315188575);
    noLegs_0_2.set(LegFlowScheduleType_149);
    InstrumentLeg_149.insert(LegFlowScheduleType_149.getString());
    FIX::LegInstrRegistry LegInstrRegistry_149("STRING_328079581");
    noLegs_0_2.set(LegInstrRegistry_149);
    InstrumentLeg_149.insert(LegInstrRegistry_149.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_149("LOCALMKTDATE_117845795");
    noLegs_0_2.set(LegInterestAccrualDate_149);
    InstrumentLeg_149.insert(LegInterestAccrualDate_149.getString());
    FIX::LegIssueDate LegIssueDate_149("LOCALMKTDATE_416024686");
    noLegs_0_2.set(LegIssueDate_149);
    InstrumentLeg_149.insert(LegIssueDate_149.getString());
    FIX::LegIssuer LegIssuer_149("STRING_368052941");
    noLegs_0_2.set(LegIssuer_149);
    InstrumentLeg_149.insert(LegIssuer_149.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_149("STRING_1350677191");
    noLegs_0_2.set(LegLocaleOfIssue_149);
    InstrumentLeg_149.insert(LegLocaleOfIssue_149.getString());
    FIX::LegMaturityDate LegMaturityDate_149("LOCALMKTDATE_971872321");
    noLegs_0_2.set(LegMaturityDate_149);
    InstrumentLeg_149.insert(LegMaturityDate_149.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_149("MONTHYEAR_245177286");
    noLegs_0_2.set(LegMaturityMonthYear_149);
    InstrumentLeg_149.insert(LegMaturityMonthYear_149.getString());
    FIX::LegMaturityTime LegMaturityTime_149("TZTIMEONLY_1664565031");
    noLegs_0_2.set(LegMaturityTime_149);
    InstrumentLeg_149.insert(LegMaturityTime_149.getString());
    FIX::LegOptAttribute LegOptAttribute_149('1');
    noLegs_0_2.set(LegOptAttribute_149);
    InstrumentLeg_149.insert(LegOptAttribute_149.getString());
    FIX::LegOptionRatio LegOptionRatio_149;
    LegOptionRatio_149.setString("12277839");
    noLegs_0_2.set(LegOptionRatio_149);
    InstrumentLeg_149.insert(LegOptionRatio_149.getString());
    FIX::LegPool LegPool_149("STRING_71383620");
    noLegs_0_2.set(LegPool_149);
    InstrumentLeg_149.insert(LegPool_149.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_149("STRING_1234061985");
    noLegs_0_2.set(LegPriceUnitOfMeasure_149);
    InstrumentLeg_149.insert(LegPriceUnitOfMeasure_149.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_149;
    LegPriceUnitOfMeasureQty_149.setString("5812041");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_149);
    InstrumentLeg_149.insert(LegPriceUnitOfMeasureQty_149.getString());
    FIX::LegProduct LegProduct_149(1215418439);
    noLegs_0_2.set(LegProduct_149);
    InstrumentLeg_149.insert(LegProduct_149.getString());
    FIX::LegPutOrCall LegPutOrCall_149(321767165);
    noLegs_0_2.set(LegPutOrCall_149);
    InstrumentLeg_149.insert(LegPutOrCall_149.getString());
    FIX::LegRatioQty LegRatioQty_149;
    LegRatioQty_149.setString("8417820");
    noLegs_0_2.set(LegRatioQty_149);
    InstrumentLeg_149.insert(LegRatioQty_149.getString());
    FIX::LegRedemptionDate LegRedemptionDate_149("LOCALMKTDATE_2115600801");
    noLegs_0_2.set(LegRedemptionDate_149);
    InstrumentLeg_149.insert(LegRedemptionDate_149.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_149("STRING_1087494936");
    noLegs_0_2.set(LegRepoCollateralSecurityType_149);
    InstrumentLeg_149.insert(LegRepoCollateralSecurityType_149.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_149;
    LegRepurchaseRate_149.setString("42.260000");
    noLegs_0_2.set(LegRepurchaseRate_149);
    InstrumentLeg_149.insert(LegRepurchaseRate_149.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_149(191628847);
    noLegs_0_2.set(LegRepurchaseTerm_149);
    InstrumentLeg_149.insert(LegRepurchaseTerm_149.getString());
    FIX::LegSecurityDesc LegSecurityDesc_149("STRING_1491157410");
    noLegs_0_2.set(LegSecurityDesc_149);
    InstrumentLeg_149.insert(LegSecurityDesc_149.getString());
    FIX::LegSecurityExchange LegSecurityExchange_149("EXCHANGE_1521651461");
    noLegs_0_2.set(LegSecurityExchange_149);
    InstrumentLeg_149.insert(LegSecurityExchange_149.getString());
    FIX::LegSecurityID LegSecurityID_149("STRING_1738048386");
    noLegs_0_2.set(LegSecurityID_149);
    InstrumentLeg_149.insert(LegSecurityID_149.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_149("STRING_1452320318");
    noLegs_0_2.set(LegSecurityIDSource_149);
    InstrumentLeg_149.insert(LegSecurityIDSource_149.getString());
    FIX::LegSecuritySubType LegSecuritySubType_149("STRING_1849917960");
    noLegs_0_2.set(LegSecuritySubType_149);
    InstrumentLeg_149.insert(LegSecuritySubType_149.getString());
    FIX::LegSecurityType LegSecurityType_149("STRING_643844782");
    noLegs_0_2.set(LegSecurityType_149);
    InstrumentLeg_149.insert(LegSecurityType_149.getString());
    FIX::LegSide LegSide_149('2');
    noLegs_0_2.set(LegSide_149);
    InstrumentLeg_149.insert(LegSide_149.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_149("STRING_853621626");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_149);
    InstrumentLeg_149.insert(LegStateOrProvinceOfIssue_149.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_149("CAN");
    noLegs_0_2.set(LegStrikeCurrency_149);
    InstrumentLeg_149.insert(LegStrikeCurrency_149.getString());
    FIX::LegStrikePrice LegStrikePrice_149;
    LegStrikePrice_149.setString("11688102");
    noLegs_0_2.set(LegStrikePrice_149);
    InstrumentLeg_149.insert(LegStrikePrice_149.getString());
    FIX::LegSymbol LegSymbol_149("STRING_364144728");
    noLegs_0_2.set(LegSymbol_149);
    InstrumentLeg_149.insert(LegSymbol_149.getString());
    FIX::LegSymbolSfx LegSymbolSfx_149("STRING_624573215");
    noLegs_0_2.set(LegSymbolSfx_149);
    InstrumentLeg_149.insert(LegSymbolSfx_149.getString());
    FIX::LegTimeUnit LegTimeUnit_149("STRING_1584834887");
    noLegs_0_2.set(LegTimeUnit_149);
    InstrumentLeg_149.insert(LegTimeUnit_149.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_149("STRING_732197670");
    noLegs_0_2.set(LegUnitOfMeasure_149);
    InstrumentLeg_149.insert(LegUnitOfMeasure_149.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_149;
    LegUnitOfMeasureQty_149.setString("19752504");
    noLegs_0_2.set(LegUnitOfMeasureQty_149);
    InstrumentLeg_149.insert(LegUnitOfMeasureQty_149.getString());
    all_values.push_back(InstrumentLeg_149);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_288;
      FIX::LegSecurityAltID LegSecurityAltID_288("STRING_977374956");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_288);
      LegSecAltIDGrp_NoLegSecurityAltID_288.insert(LegSecurityAltID_288.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_288("STRING_1492331789");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_288);
      LegSecAltIDGrp_NoLegSecurityAltID_288.insert(LegSecurityAltIDSource_288.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_288);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_289;
      FIX::LegSecurityAltID LegSecurityAltID_289("STRING_1442975275");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_289);
      LegSecAltIDGrp_NoLegSecurityAltID_289.insert(LegSecurityAltID_289.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_289("STRING_57675257");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_289);
      LegSecAltIDGrp_NoLegSecurityAltID_289.insert(LegSecurityAltIDSource_289.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_289);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_290;
      FIX::LegSecurityAltID LegSecurityAltID_290("STRING_1563715410");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_290);
      LegSecAltIDGrp_NoLegSecurityAltID_290.insert(LegSecurityAltID_290.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_290("STRING_529553613");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_290);
      LegSecAltIDGrp_NoLegSecurityAltID_290.insert(LegSecurityAltIDSource_290.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_290);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_89;
  FIX::AttachmentPoint AttachmentPoint_89;
  AttachmentPoint_89.setString("93.600000");
  msg.set(AttachmentPoint_89);
  Instrument_89.insert(AttachmentPoint_89.getString());
  FIX::CFICode CFICode_89("STRING_631650201");
  msg.set(CFICode_89);
  Instrument_89.insert(CFICode_89.getString());
  FIX::CPProgram CPProgram_89(99);
  msg.set(CPProgram_89);
  Instrument_89.insert(CPProgram_89.getString());
  FIX::CPRegType CPRegType_89("STRING_1480661360");
  msg.set(CPRegType_89);
  Instrument_89.insert(CPRegType_89.getString());
  FIX::CapPrice CapPrice_89;
  CapPrice_89.setString("5997673");
  msg.set(CapPrice_89);
  Instrument_89.insert(CapPrice_89.getString());
  FIX::ContractMultiplier ContractMultiplier_89;
  ContractMultiplier_89.setString("19388157");
  msg.set(ContractMultiplier_89);
  Instrument_89.insert(ContractMultiplier_89.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_89(2);
  msg.set(ContractMultiplierUnit_89);
  Instrument_89.insert(ContractMultiplierUnit_89.getString());
  FIX::ContractSettlMonth ContractSettlMonth_89("MONTHYEAR_791396201");
  msg.set(ContractSettlMonth_89);
  Instrument_89.insert(ContractSettlMonth_89.getString());
  FIX::CountryOfIssue CountryOfIssue_89("COUNTRY_1282489477");
  msg.set(CountryOfIssue_89);
  Instrument_89.insert(CountryOfIssue_89.getString());
  FIX::CouponPaymentDate CouponPaymentDate_89("LOCALMKTDATE_938593400");
  msg.set(CouponPaymentDate_89);
  Instrument_89.insert(CouponPaymentDate_89.getString());
  FIX::CouponRate CouponRate_89;
  CouponRate_89.setString("9.390000");
  msg.set(CouponRate_89);
  Instrument_89.insert(CouponRate_89.getString());
  FIX::CreditRating CreditRating_89("STRING_587326147");
  msg.set(CreditRating_89);
  Instrument_89.insert(CreditRating_89.getString());
  FIX::DatedDate DatedDate_89("LOCALMKTDATE_641027713");
  msg.set(DatedDate_89);
  Instrument_89.insert(DatedDate_89.getString());
  FIX::DetachmentPoint DetachmentPoint_89;
  DetachmentPoint_89.setString("57.210000");
  msg.set(DetachmentPoint_89);
  Instrument_89.insert(DetachmentPoint_89.getString());
  FIX::EncodedIssuer EncodedIssuer_89("DATA_838997694");
  msg.set(EncodedIssuer_89);
  Instrument_89.insert(EncodedIssuer_89.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_89(1494649339);
  msg.set(EncodedIssuerLen_89);
  Instrument_89.insert(EncodedIssuerLen_89.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_89("DATA_1061870869");
  msg.set(EncodedSecurityDesc_89);
  Instrument_89.insert(EncodedSecurityDesc_89.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_89(1345725113);
  msg.set(EncodedSecurityDescLen_89);
  Instrument_89.insert(EncodedSecurityDescLen_89.getString());
  FIX::ExerciseStyle ExerciseStyle_89(1);
  msg.set(ExerciseStyle_89);
  Instrument_89.insert(ExerciseStyle_89.getString());
  FIX::Factor Factor_89;
  Factor_89.setString("14260155");
  msg.set(Factor_89);
  Instrument_89.insert(Factor_89.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_89(true);
  msg.set(FlexProductEligibilityIndicator_89);
  Instrument_89.insert(FlexProductEligibilityIndicator_89.getString());
  FIX::FlexibleIndicator FlexibleIndicator_89(true);
  msg.set(FlexibleIndicator_89);
  Instrument_89.insert(FlexibleIndicator_89.getString());
  FIX::FloorPrice FloorPrice_89;
  FloorPrice_89.setString("107296");
  msg.set(FloorPrice_89);
  Instrument_89.insert(FloorPrice_89.getString());
  FIX::FlowScheduleType FlowScheduleType_89(1);
  msg.set(FlowScheduleType_89);
  Instrument_89.insert(FlowScheduleType_89.getString());
  FIX::InstrRegistry InstrRegistry_89("STRING_362550693");
  msg.set(InstrRegistry_89);
  Instrument_89.insert(InstrRegistry_89.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_89('9');
  msg.set(InstrmtAssignmentMethod_89);
  Instrument_89.insert(InstrmtAssignmentMethod_89.getString());
  FIX::InterestAccrualDate InterestAccrualDate_89("LOCALMKTDATE_1142913228");
  msg.set(InterestAccrualDate_89);
  Instrument_89.insert(InterestAccrualDate_89.getString());
  FIX::IssueDate IssueDate_89("LOCALMKTDATE_1805525969");
  msg.set(IssueDate_89);
  Instrument_89.insert(IssueDate_89.getString());
  FIX::Issuer Issuer_89("STRING_1045779832");
  msg.set(Issuer_89);
  Instrument_89.insert(Issuer_89.getString());
  FIX::ListMethod ListMethod_89(0);
  msg.set(ListMethod_89);
  Instrument_89.insert(ListMethod_89.getString());
  FIX::LocaleOfIssue LocaleOfIssue_89("STRING_187595934");
  msg.set(LocaleOfIssue_89);
  Instrument_89.insert(LocaleOfIssue_89.getString());
  FIX::MaturityDate MaturityDate_89("LOCALMKTDATE_1684659193");
  msg.set(MaturityDate_89);
  Instrument_89.insert(MaturityDate_89.getString());
  FIX::MaturityMonthYear MaturityMonthYear_89("MONTHYEAR_1190795191");
  msg.set(MaturityMonthYear_89);
  Instrument_89.insert(MaturityMonthYear_89.getString());
  FIX::MaturityTime MaturityTime_89("TZTIMEONLY_1038916712");
  msg.set(MaturityTime_89);
  Instrument_89.insert(MaturityTime_89.getString());
  FIX::MinPriceIncrement MinPriceIncrement_89;
  MinPriceIncrement_89.setString("10178369");
  msg.set(MinPriceIncrement_89);
  Instrument_89.insert(MinPriceIncrement_89.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_89;
  MinPriceIncrementAmount_89.setString("17905625");
  msg.set(MinPriceIncrementAmount_89);
  Instrument_89.insert(MinPriceIncrementAmount_89.getString());
  FIX::NTPositionLimit NTPositionLimit_89(830248779);
  msg.set(NTPositionLimit_89);
  Instrument_89.insert(NTPositionLimit_89.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_89;
  NotionalPercentageOutstanding_89.setString("88.440000");
  msg.set(NotionalPercentageOutstanding_89);
  Instrument_89.insert(NotionalPercentageOutstanding_89.getString());
  FIX::OptAttribute OptAttribute_89('4');
  msg.set(OptAttribute_89);
  Instrument_89.insert(OptAttribute_89.getString());
  FIX::OptPayoutAmount OptPayoutAmount_89;
  OptPayoutAmount_89.setString("21127382");
  msg.set(OptPayoutAmount_89);
  Instrument_89.insert(OptPayoutAmount_89.getString());
  FIX::OptPayoutType OptPayoutType_89(2);
  msg.set(OptPayoutType_89);
  Instrument_89.insert(OptPayoutType_89.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_89;
  OriginalNotionalPercentageOutstanding_89.setString("60.380000");
  msg.set(OriginalNotionalPercentageOutstanding_89);
  Instrument_89.insert(OriginalNotionalPercentageOutstanding_89.getString());
  FIX::Pool Pool_89("STRING_552580755");
  msg.set(Pool_89);
  Instrument_89.insert(Pool_89.getString());
  FIX::PositionLimit PositionLimit_89(2014399958);
  msg.set(PositionLimit_89);
  Instrument_89.insert(PositionLimit_89.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_89("STRING_STD");
  msg.set(PriceQuoteMethod_89);
  Instrument_89.insert(PriceQuoteMethod_89.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_89("STRING_1391578449");
  msg.set(PriceUnitOfMeasure_89);
  Instrument_89.insert(PriceUnitOfMeasure_89.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_89;
  PriceUnitOfMeasureQty_89.setString("13615656");
  msg.set(PriceUnitOfMeasureQty_89);
  Instrument_89.insert(PriceUnitOfMeasureQty_89.getString());
  FIX::Product Product_91(5);
  msg.set(Product_91);
  Instrument_89.insert(Product_91.getString());
  FIX::ProductComplex ProductComplex_89("STRING_589819915");
  msg.set(ProductComplex_89);
  Instrument_89.insert(ProductComplex_89.getString());
  FIX::PutOrCall PutOrCall_89(0);
  msg.set(PutOrCall_89);
  Instrument_89.insert(PutOrCall_89.getString());
  FIX::RedemptionDate RedemptionDate_89("LOCALMKTDATE_35160930");
  msg.set(RedemptionDate_89);
  Instrument_89.insert(RedemptionDate_89.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_89("STRING_412634595");
  msg.set(RepoCollateralSecurityType_89);
  Instrument_89.insert(RepoCollateralSecurityType_89.getString());
  FIX::RepurchaseRate RepurchaseRate_89;
  RepurchaseRate_89.setString("86.750000");
  msg.set(RepurchaseRate_89);
  Instrument_89.insert(RepurchaseRate_89.getString());
  FIX::RepurchaseTerm RepurchaseTerm_89(45890550);
  msg.set(RepurchaseTerm_89);
  Instrument_89.insert(RepurchaseTerm_89.getString());
  FIX::RestructuringType RestructuringType_89("STRING_MM");
  msg.set(RestructuringType_89);
  Instrument_89.insert(RestructuringType_89.getString());
  FIX::SecurityDesc SecurityDesc_89("STRING_45935720");
  msg.set(SecurityDesc_89);
  Instrument_89.insert(SecurityDesc_89.getString());
  FIX::SecurityExchange SecurityExchange_89("EXCHANGE_1033995125");
  msg.set(SecurityExchange_89);
  Instrument_89.insert(SecurityExchange_89.getString());
  FIX::SecurityGroup SecurityGroup_89("STRING_1206129262");
  msg.set(SecurityGroup_89);
  Instrument_89.insert(SecurityGroup_89.getString());
  FIX::SecurityID SecurityID_89("STRING_1851461689");
  msg.set(SecurityID_89);
  Instrument_89.insert(SecurityID_89.getString());
  FIX::SecurityIDSource SecurityIDSource_89("STRING_9");
  msg.set(SecurityIDSource_89);
  Instrument_89.insert(SecurityIDSource_89.getString());
  FIX::SecurityStatus SecurityStatus_90("STRING_1");
  msg.set(SecurityStatus_90);
  Instrument_89.insert(SecurityStatus_90.getString());
  FIX::SecuritySubType SecuritySubType_90("STRING_2039057623");
  msg.set(SecuritySubType_90);
  Instrument_89.insert(SecuritySubType_90.getString());
  FIX::SecurityType SecurityType_91("STRING_TPRN");
  msg.set(SecurityType_91);
  Instrument_89.insert(SecurityType_91.getString());
  FIX::Seniority Seniority_89("STRING_SR");
  msg.set(Seniority_89);
  Instrument_89.insert(Seniority_89.getString());
  FIX::SettlMethod SettlMethod_89('C');
  msg.set(SettlMethod_89);
  Instrument_89.insert(SettlMethod_89.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_89("STRING_487303760");
  msg.set(SettleOnOpenFlag_89);
  Instrument_89.insert(SettleOnOpenFlag_89.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_89("STRING_451664692");
  msg.set(StateOrProvinceOfIssue_89);
  Instrument_89.insert(StateOrProvinceOfIssue_89.getString());
  FIX::StrikeCurrency StrikeCurrency_89("EUR");
  msg.set(StrikeCurrency_89);
  Instrument_89.insert(StrikeCurrency_89.getString());
  FIX::StrikeMultiplier StrikeMultiplier_89;
  StrikeMultiplier_89.setString("8861397");
  msg.set(StrikeMultiplier_89);
  Instrument_89.insert(StrikeMultiplier_89.getString());
  FIX::StrikePrice StrikePrice_89;
  StrikePrice_89.setString("17259940");
  msg.set(StrikePrice_89);
  Instrument_89.insert(StrikePrice_89.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_89(3);
  msg.set(StrikePriceBoundaryMethod_89);
  Instrument_89.insert(StrikePriceBoundaryMethod_89.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_89;
  StrikePriceBoundaryPrecision_89.setString("58.300000");
  msg.set(StrikePriceBoundaryPrecision_89);
  Instrument_89.insert(StrikePriceBoundaryPrecision_89.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_89(3);
  msg.set(StrikePriceDeterminationMethod_89);
  Instrument_89.insert(StrikePriceDeterminationMethod_89.getString());
  FIX::StrikeValue StrikeValue_89;
  StrikeValue_89.setString("148875");
  msg.set(StrikeValue_89);
  Instrument_89.insert(StrikeValue_89.getString());
  FIX::Symbol Symbol_89("STRING_1397333942");
  msg.set(Symbol_89);
  Instrument_89.insert(Symbol_89.getString());
  FIX::SymbolSfx SymbolSfx_89("STRING_CD");
  msg.set(SymbolSfx_89);
  Instrument_89.insert(SymbolSfx_89.getString());
  FIX::TimeUnit TimeUnit_89("STRING_Yr");
  msg.set(TimeUnit_89);
  Instrument_89.insert(TimeUnit_89.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_89(4);
  msg.set(UnderlyingPriceDeterminationMethod_89);
  Instrument_89.insert(UnderlyingPriceDeterminationMethod_89.getString());
  FIX::UnitOfMeasure UnitOfMeasure_89("STRING_Alw");
  msg.set(UnitOfMeasure_89);
  Instrument_89.insert(UnitOfMeasure_89.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_89;
  UnitOfMeasureQty_89.setString("11065110");
  msg.set(UnitOfMeasureQty_89);
  Instrument_89.insert(UnitOfMeasureQty_89.getString());
  FIX::ValuationMethod ValuationMethod_89("STRING_EQTY");
  msg.set(ValuationMethod_89);
  Instrument_89.insert(ValuationMethod_89.getString());
  all_values.push_back(Instrument_89);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_181;
    FIX::ComplexEventCondition ComplexEventCondition_181(2);
    noComplexEvents_0_0.set(ComplexEventCondition_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventCondition_181.getString());
    FIX::ComplexEventPrice ComplexEventPrice_181;
    ComplexEventPrice_181.setString("875307");
    noComplexEvents_0_0.set(ComplexEventPrice_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPrice_181.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_181(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceBoundaryMethod_181.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_181;
    ComplexEventPriceBoundaryPrecision_181.setString("18.030000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceBoundaryPrecision_181.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_181(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceTimeType_181.getString());
    FIX::ComplexEventType ComplexEventType_181(2);
    noComplexEvents_0_0.set(ComplexEventType_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventType_181.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_181;
    ComplexOptPayoutAmount_181.setString("5398098");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexOptPayoutAmount_181.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_181);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_366;
      FIX::ComplexEventEndDate ComplexEventEndDate_366(FIX::UTCTIMESTAMP(20, 46, 29, 8, 7, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_366);
      ComplexEventDates_NoComplexEventDates_366.insert(ComplexEventEndDate_366.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_366(FIX::UTCTIMESTAMP(19, 45, 54, 1, 4, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_366);
      ComplexEventDates_NoComplexEventDates_366.insert(ComplexEventStartDate_366.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_366);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_743;
        FIX::ComplexEventEndTime ComplexEventEndTime_743(FIX::UTCTIMEONLY(1, 19, 16));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_743);
        ComplexEventTimes_NoComplexEventTimes_743.insert(ComplexEventEndTime_743.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_743(FIX::UTCTIMEONLY(7, 42, 14));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_743);
        ComplexEventTimes_NoComplexEventTimes_743.insert(ComplexEventStartTime_743.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_743);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_744;
        FIX::ComplexEventEndTime ComplexEventEndTime_744(FIX::UTCTIMEONLY(1, 3, 53));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_744);
        ComplexEventTimes_NoComplexEventTimes_744.insert(ComplexEventEndTime_744.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_744(FIX::UTCTIMEONLY(17, 30, 21));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_744);
        ComplexEventTimes_NoComplexEventTimes_744.insert(ComplexEventStartTime_744.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_744);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_182;
    FIX::ComplexEventCondition ComplexEventCondition_182(1);
    noComplexEvents_0_1.set(ComplexEventCondition_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventCondition_182.getString());
    FIX::ComplexEventPrice ComplexEventPrice_182;
    ComplexEventPrice_182.setString("7329639");
    noComplexEvents_0_1.set(ComplexEventPrice_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPrice_182.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_182(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPriceBoundaryMethod_182.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_182;
    ComplexEventPriceBoundaryPrecision_182.setString("79.210000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPriceBoundaryPrecision_182.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_182(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPriceTimeType_182.getString());
    FIX::ComplexEventType ComplexEventType_182(6);
    noComplexEvents_0_1.set(ComplexEventType_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventType_182.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_182;
    ComplexOptPayoutAmount_182.setString("19111211");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexOptPayoutAmount_182.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_182);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_367;
      FIX::ComplexEventEndDate ComplexEventEndDate_367(FIX::UTCTIMESTAMP(5, 13, 43, 20, 3, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_367);
      ComplexEventDates_NoComplexEventDates_367.insert(ComplexEventEndDate_367.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_367(FIX::UTCTIMESTAMP(15, 11, 58, 15, 7, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_367);
      ComplexEventDates_NoComplexEventDates_367.insert(ComplexEventStartDate_367.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_367);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_745;
        FIX::ComplexEventEndTime ComplexEventEndTime_745(FIX::UTCTIMEONLY(10, 21, 54));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_745);
        ComplexEventTimes_NoComplexEventTimes_745.insert(ComplexEventEndTime_745.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_745(FIX::UTCTIMEONLY(2, 24, 10));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_745);
        ComplexEventTimes_NoComplexEventTimes_745.insert(ComplexEventStartTime_745.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_745);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_368;
      FIX::ComplexEventEndDate ComplexEventEndDate_368(FIX::UTCTIMESTAMP(19, 9, 52, 19, 12, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_368);
      ComplexEventDates_NoComplexEventDates_368.insert(ComplexEventEndDate_368.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_368(FIX::UTCTIMESTAMP(5, 52, 43, 4, 6, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_368);
      ComplexEventDates_NoComplexEventDates_368.insert(ComplexEventStartDate_368.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_368);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_746;
        FIX::ComplexEventEndTime ComplexEventEndTime_746(FIX::UTCTIMEONLY(13, 32, 29));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_746);
        ComplexEventTimes_NoComplexEventTimes_746.insert(ComplexEventEndTime_746.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_746(FIX::UTCTIMEONLY(14, 2, 11));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_746);
        ComplexEventTimes_NoComplexEventTimes_746.insert(ComplexEventStartTime_746.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_746);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_747;
        FIX::ComplexEventEndTime ComplexEventEndTime_747(FIX::UTCTIMEONLY(12, 24, 37));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_747);
        ComplexEventTimes_NoComplexEventTimes_747.insert(ComplexEventEndTime_747.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_747(FIX::UTCTIMEONLY(18, 53, 2));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_747);
        ComplexEventTimes_NoComplexEventTimes_747.insert(ComplexEventStartTime_747.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_747);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_748;
        FIX::ComplexEventEndTime ComplexEventEndTime_748(FIX::UTCTIMEONLY(13, 12, 33));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_748);
        ComplexEventTimes_NoComplexEventTimes_748.insert(ComplexEventEndTime_748.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_748(FIX::UTCTIMEONLY(15, 24, 50));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_748);
        ComplexEventTimes_NoComplexEventTimes_748.insert(ComplexEventStartTime_748.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_748);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_183;
    FIX::ComplexEventCondition ComplexEventCondition_183(1);
    noComplexEvents_0_2.set(ComplexEventCondition_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventCondition_183.getString());
    FIX::ComplexEventPrice ComplexEventPrice_183;
    ComplexEventPrice_183.setString("13904475");
    noComplexEvents_0_2.set(ComplexEventPrice_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPrice_183.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_183(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPriceBoundaryMethod_183.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_183;
    ComplexEventPriceBoundaryPrecision_183.setString("57.120000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPriceBoundaryPrecision_183.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_183(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventPriceTimeType_183.getString());
    FIX::ComplexEventType ComplexEventType_183(6);
    noComplexEvents_0_2.set(ComplexEventType_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexEventType_183.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_183;
    ComplexOptPayoutAmount_183.setString("2555499");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_183);
    ComplexEvents_NoComplexEvents_183.insert(ComplexOptPayoutAmount_183.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_183);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_369;
      FIX::ComplexEventEndDate ComplexEventEndDate_369(FIX::UTCTIMESTAMP(13, 22, 46, 15, 5, 2001));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_369);
      ComplexEventDates_NoComplexEventDates_369.insert(ComplexEventEndDate_369.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_369(FIX::UTCTIMESTAMP(16, 13, 27, 5, 8, 2015));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_369);
      ComplexEventDates_NoComplexEventDates_369.insert(ComplexEventStartDate_369.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_369);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_749;
        FIX::ComplexEventEndTime ComplexEventEndTime_749(FIX::UTCTIMEONLY(2, 19, 1));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_749);
        ComplexEventTimes_NoComplexEventTimes_749.insert(ComplexEventEndTime_749.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_749(FIX::UTCTIMEONLY(3, 18, 8));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_749);
        ComplexEventTimes_NoComplexEventTimes_749.insert(ComplexEventStartTime_749.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_749);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_370;
      FIX::ComplexEventEndDate ComplexEventEndDate_370(FIX::UTCTIMESTAMP(23, 33, 16, 25, 10, 2009));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_370);
      ComplexEventDates_NoComplexEventDates_370.insert(ComplexEventEndDate_370.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_370(FIX::UTCTIMESTAMP(14, 34, 48, 8, 6, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_370);
      ComplexEventDates_NoComplexEventDates_370.insert(ComplexEventStartDate_370.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_370);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_750;
        FIX::ComplexEventEndTime ComplexEventEndTime_750(FIX::UTCTIMEONLY(9, 18, 51));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_750);
        ComplexEventTimes_NoComplexEventTimes_750.insert(ComplexEventEndTime_750.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_750(FIX::UTCTIMEONLY(13, 12, 2));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_750);
        ComplexEventTimes_NoComplexEventTimes_750.insert(ComplexEventStartTime_750.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_750);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_751;
        FIX::ComplexEventEndTime ComplexEventEndTime_751(FIX::UTCTIMEONLY(18, 21, 35));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_751);
        ComplexEventTimes_NoComplexEventTimes_751.insert(ComplexEventEndTime_751.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_751(FIX::UTCTIMEONLY(0, 53, 52));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_751);
        ComplexEventTimes_NoComplexEventTimes_751.insert(ComplexEventStartTime_751.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_751);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_371;
      FIX::ComplexEventEndDate ComplexEventEndDate_371(FIX::UTCTIMESTAMP(8, 18, 0, 17, 4, 2009));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_371);
      ComplexEventDates_NoComplexEventDates_371.insert(ComplexEventEndDate_371.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_371(FIX::UTCTIMESTAMP(9, 35, 24, 1, 9, 2017));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_371);
      ComplexEventDates_NoComplexEventDates_371.insert(ComplexEventStartDate_371.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_371);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_752;
        FIX::ComplexEventEndTime ComplexEventEndTime_752(FIX::UTCTIMEONLY(18, 20, 24));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_752);
        ComplexEventTimes_NoComplexEventTimes_752.insert(ComplexEventEndTime_752.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_752(FIX::UTCTIMEONLY(1, 36, 43));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_752);
        ComplexEventTimes_NoComplexEventTimes_752.insert(ComplexEventStartTime_752.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_752);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_753;
        FIX::ComplexEventEndTime ComplexEventEndTime_753(FIX::UTCTIMEONLY(23, 4, 35));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_753);
        ComplexEventTimes_NoComplexEventTimes_753.insert(ComplexEventEndTime_753.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_753(FIX::UTCTIMEONLY(21, 28, 8));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_753);
        ComplexEventTimes_NoComplexEventTimes_753.insert(ComplexEventStartTime_753.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_753);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_754;
        FIX::ComplexEventEndTime ComplexEventEndTime_754(FIX::UTCTIMEONLY(5, 26, 25));
        noComplexEventTimes_2_2_2_2.set(ComplexEventEndTime_754);
        ComplexEventTimes_NoComplexEventTimes_754.insert(ComplexEventEndTime_754.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_754(FIX::UTCTIMEONLY(5, 26, 18));
        noComplexEventTimes_2_2_2_2.set(ComplexEventStartTime_754);
        ComplexEventTimes_NoComplexEventTimes_754.insert(ComplexEventStartTime_754.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_754);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_177;
    FIX::EventDate EventDate_177("LOCALMKTDATE_127655813");
    noEvents_0_0.set(EventDate_177);
    EvntGrp_NoEvents_177.insert(EventDate_177.getString());
    FIX::EventPx EventPx_177;
    EventPx_177.setString("20287710");
    noEvents_0_0.set(EventPx_177);
    EvntGrp_NoEvents_177.insert(EventPx_177.getString());
    FIX::EventText EventText_177("STRING_1578345111");
    noEvents_0_0.set(EventText_177);
    EvntGrp_NoEvents_177.insert(EventText_177.getString());
    FIX::EventTime EventTime_177(FIX::UTCTIMESTAMP(3, 45, 34, 17, 10, 2010));
    noEvents_0_0.set(EventTime_177);
    EvntGrp_NoEvents_177.insert(EventTime_177.getString());
    FIX::EventType EventType_177(19);
    noEvents_0_0.set(EventType_177);
    EvntGrp_NoEvents_177.insert(EventType_177.getString());
    all_values.push_back(EvntGrp_NoEvents_177);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_178;
    FIX::EventDate EventDate_178("LOCALMKTDATE_440671102");
    noEvents_0_1.set(EventDate_178);
    EvntGrp_NoEvents_178.insert(EventDate_178.getString());
    FIX::EventPx EventPx_178;
    EventPx_178.setString("14733948");
    noEvents_0_1.set(EventPx_178);
    EvntGrp_NoEvents_178.insert(EventPx_178.getString());
    FIX::EventText EventText_178("STRING_1635477081");
    noEvents_0_1.set(EventText_178);
    EvntGrp_NoEvents_178.insert(EventText_178.getString());
    FIX::EventTime EventTime_178(FIX::UTCTIMESTAMP(5, 18, 57, 5, 8, 2011));
    noEvents_0_1.set(EventTime_178);
    EvntGrp_NoEvents_178.insert(EventTime_178.getString());
    FIX::EventType EventType_178(18);
    noEvents_0_1.set(EventType_178);
    EvntGrp_NoEvents_178.insert(EventType_178.getString());
    all_values.push_back(EvntGrp_NoEvents_178);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_179;
    FIX::EventDate EventDate_179("LOCALMKTDATE_201396152");
    noEvents_0_2.set(EventDate_179);
    EvntGrp_NoEvents_179.insert(EventDate_179.getString());
    FIX::EventPx EventPx_179;
    EventPx_179.setString("13901644");
    noEvents_0_2.set(EventPx_179);
    EvntGrp_NoEvents_179.insert(EventPx_179.getString());
    FIX::EventText EventText_179("STRING_625324083");
    noEvents_0_2.set(EventText_179);
    EvntGrp_NoEvents_179.insert(EventText_179.getString());
    FIX::EventTime EventTime_179(FIX::UTCTIMESTAMP(5, 24, 15, 27, 3, 2002));
    noEvents_0_2.set(EventTime_179);
    EvntGrp_NoEvents_179.insert(EventTime_179.getString());
    FIX::EventType EventType_179(6);
    noEvents_0_2.set(EventType_179);
    EvntGrp_NoEvents_179.insert(EventType_179.getString());
    all_values.push_back(EvntGrp_NoEvents_179);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_187;
    FIX::InstrumentPartyID InstrumentPartyID_187("STRING_1215588309");
    noInstrumentParties_0_0.set(InstrumentPartyID_187);
    InstrumentParties_NoInstrumentParties_187.insert(InstrumentPartyID_187.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_187('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_187);
    InstrumentParties_NoInstrumentParties_187.insert(InstrumentPartyIDSource_187.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_187(75317806);
    noInstrumentParties_0_0.set(InstrumentPartyRole_187);
    InstrumentParties_NoInstrumentParties_187.insert(InstrumentPartyRole_187.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_187);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363;
      FIX::InstrumentPartySubID InstrumentPartySubID_363("STRING_696105737");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_363);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubID_363.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_363(87020803);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_363);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubIDType_363.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364;
      FIX::InstrumentPartySubID InstrumentPartySubID_364("STRING_1730152053");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_364);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubID_364.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_364(1672286756);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_364);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubIDType_364.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365;
      FIX::InstrumentPartySubID InstrumentPartySubID_365("STRING_527691905");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_365);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubID_365.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_365(1056063292);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_365);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubIDType_365.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_166;
    FIX::SecurityAltID SecurityAltID_166("STRING_558080067");
    noSecurityAltID_0_0.set(SecurityAltID_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltID_166.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_166("STRING_1081082097");
    noSecurityAltID_0_0.set(SecurityAltIDSource_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltIDSource_166.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_166);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_178;
  FIX::SecurityXML SecurityXML_179("XMLDATA_454037299");
  msg.set(SecurityXML_179);
  FIX::SecurityXMLLen SecurityXMLLen_89(1439319024);
  msg.set(SecurityXMLLen_89);
  FIX::SecurityXMLSchema SecurityXMLSchema_89("STRING_1365662006");
  msg.set(SecurityXMLSchema_89);
  SecurityXML_178.insert(SecurityXMLSchema_89.getString());
  all_values.push_back(SecurityXML_178);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_18;
  FIX::DeliveryForm DeliveryForm_18(1);
  msg.set(DeliveryForm_18);
  InstrumentExtension_18.insert(DeliveryForm_18.getString());
  FIX::PctAtRisk PctAtRisk_18;
  PctAtRisk_18.setString("17.540000");
  msg.set(PctAtRisk_18);
  InstrumentExtension_18.insert(PctAtRisk_18.getString());
  all_values.push_back(InstrumentExtension_18);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_36;
    FIX::InstrAttribType InstrAttribType_36(29);
    noInstrAttrib_0_0.set(InstrAttribType_36);
    AttrbGrp_NoInstrAttrib_36.insert(InstrAttribType_36.getString());
    FIX::InstrAttribValue InstrAttribValue_36("STRING_1546696232");
    noInstrAttrib_0_0.set(InstrAttribValue_36);
    AttrbGrp_NoInstrAttrib_36.insert(InstrAttribValue_36.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_36);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_143;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_143("DATA_745171787");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingIssuer_143.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_143(1384744325);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingIssuerLen_143.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_143("DATA_383560882");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingSecurityDesc_143.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_143(857541062);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingSecurityDescLen_143.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_143;
    UnderlyingAdjustedQuantity_143.setString("3246735");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_143);
    UnderlyingInstrument_143.insert(UnderlyingAdjustedQuantity_143.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_143;
    UnderlyingAllocationPercent_143.setString("70.400000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_143);
    UnderlyingInstrument_143.insert(UnderlyingAllocationPercent_143.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_143;
    UnderlyingAttachmentPoint_143.setString("61.500000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_143);
    UnderlyingInstrument_143.insert(UnderlyingAttachmentPoint_143.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_143("STRING_1293373813");
    noUnderlyings_0_0.set(UnderlyingCFICode_143);
    UnderlyingInstrument_143.insert(UnderlyingCFICode_143.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_143("STRING_1836718309");
    noUnderlyings_0_0.set(UnderlyingCPProgram_143);
    UnderlyingInstrument_143.insert(UnderlyingCPProgram_143.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_143("STRING_165670812");
    noUnderlyings_0_0.set(UnderlyingCPRegType_143);
    UnderlyingInstrument_143.insert(UnderlyingCPRegType_143.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_143;
    UnderlyingCapValue_143.setString("10336747");
    noUnderlyings_0_0.set(UnderlyingCapValue_143);
    UnderlyingInstrument_143.insert(UnderlyingCapValue_143.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_143;
    UnderlyingCashAmount_143.setString("19120361");
    noUnderlyings_0_0.set(UnderlyingCashAmount_143);
    UnderlyingInstrument_143.insert(UnderlyingCashAmount_143.getString());
    FIX::UnderlyingCashType UnderlyingCashType_143("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_143);
    UnderlyingInstrument_143.insert(UnderlyingCashType_143.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_143;
    UnderlyingContractMultiplier_143.setString("17297804");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_143);
    UnderlyingInstrument_143.insert(UnderlyingContractMultiplier_143.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_143(1999056918);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_143);
    UnderlyingInstrument_143.insert(UnderlyingContractMultiplierUnit_143.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_143("COUNTRY_2134601901");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingCountryOfIssue_143.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_143("LOCALMKTDATE_1254583599");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_143);
    UnderlyingInstrument_143.insert(UnderlyingCouponPaymentDate_143.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_143;
    UnderlyingCouponRate_143.setString("51.760000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_143);
    UnderlyingInstrument_143.insert(UnderlyingCouponRate_143.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_143("STRING_1043181545");
    noUnderlyings_0_0.set(UnderlyingCreditRating_143);
    UnderlyingInstrument_143.insert(UnderlyingCreditRating_143.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_143("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_143);
    UnderlyingInstrument_143.insert(UnderlyingCurrency_143.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_143;
    UnderlyingCurrentValue_143.setString("21242636");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_143);
    UnderlyingInstrument_143.insert(UnderlyingCurrentValue_143.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_143;
    UnderlyingDetachmentPoint_143.setString("74.400000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_143);
    UnderlyingInstrument_143.insert(UnderlyingDetachmentPoint_143.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_143;
    UnderlyingDirtyPrice_143.setString("2291806");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_143);
    UnderlyingInstrument_143.insert(UnderlyingDirtyPrice_143.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_143;
    UnderlyingEndPrice_143.setString("13424420");
    noUnderlyings_0_0.set(UnderlyingEndPrice_143);
    UnderlyingInstrument_143.insert(UnderlyingEndPrice_143.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_143;
    UnderlyingEndValue_143.setString("240006");
    noUnderlyings_0_0.set(UnderlyingEndValue_143);
    UnderlyingInstrument_143.insert(UnderlyingEndValue_143.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_143(385712374);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_143);
    UnderlyingInstrument_143.insert(UnderlyingExerciseStyle_143.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_143;
    UnderlyingFXRate_143.setString("9287028");
    noUnderlyings_0_0.set(UnderlyingFXRate_143);
    UnderlyingInstrument_143.insert(UnderlyingFXRate_143.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_143('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_143);
    UnderlyingInstrument_143.insert(UnderlyingFXRateCalc_143.getString());
    FIX::UnderlyingFactor UnderlyingFactor_143;
    UnderlyingFactor_143.setString("19324086");
    noUnderlyings_0_0.set(UnderlyingFactor_143);
    UnderlyingInstrument_143.insert(UnderlyingFactor_143.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_143(1140287715);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_143);
    UnderlyingInstrument_143.insert(UnderlyingFlowScheduleType_143.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_143("STRING_273151856");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_143);
    UnderlyingInstrument_143.insert(UnderlyingInstrRegistry_143.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_143("LOCALMKTDATE_1169669284");
    noUnderlyings_0_0.set(UnderlyingIssueDate_143);
    UnderlyingInstrument_143.insert(UnderlyingIssueDate_143.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_143("STRING_1523848597");
    noUnderlyings_0_0.set(UnderlyingIssuer_143);
    UnderlyingInstrument_143.insert(UnderlyingIssuer_143.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_143("STRING_1130692919");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingLocaleOfIssue_143.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_143("LOCALMKTDATE_1494342832");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityDate_143.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_143("MONTHYEAR_1844815638");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityMonthYear_143.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_143("TZTIMEONLY_80775421");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityTime_143.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_143;
    UnderlyingNotionalPercentageOutstanding_143.setString("29.980000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_143);
    UnderlyingInstrument_143.insert(UnderlyingNotionalPercentageOutstanding_143.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_143('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_143);
    UnderlyingInstrument_143.insert(UnderlyingOptAttribute_143.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_143;
    UnderlyingOriginalNotionalPercentageOutstanding_143.setString("62.330000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_143);
    UnderlyingInstrument_143.insert(UnderlyingOriginalNotionalPercentageOutstanding_143.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_143("STRING_1673907751");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_143);
    UnderlyingInstrument_143.insert(UnderlyingPriceUnitOfMeasure_143.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_143;
    UnderlyingPriceUnitOfMeasureQty_143.setString("12986027");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_143);
    UnderlyingInstrument_143.insert(UnderlyingPriceUnitOfMeasureQty_143.getString());
    FIX::UnderlyingProduct UnderlyingProduct_143(650896081);
    noUnderlyings_0_0.set(UnderlyingProduct_143);
    UnderlyingInstrument_143.insert(UnderlyingProduct_143.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_143(1256204594);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_143);
    UnderlyingInstrument_143.insert(UnderlyingPutOrCall_143.getString());
    FIX::UnderlyingPx UnderlyingPx_143;
    UnderlyingPx_143.setString("11501760");
    noUnderlyings_0_0.set(UnderlyingPx_143);
    UnderlyingInstrument_143.insert(UnderlyingPx_143.getString());
    FIX::UnderlyingQty UnderlyingQty_143;
    UnderlyingQty_143.setString("6380143");
    noUnderlyings_0_0.set(UnderlyingQty_143);
    UnderlyingInstrument_143.insert(UnderlyingQty_143.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_143("LOCALMKTDATE_363304545");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_143);
    UnderlyingInstrument_143.insert(UnderlyingRedemptionDate_143.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_143("STRING_1529441213");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_143);
    UnderlyingInstrument_143.insert(UnderlyingRepoCollateralSecurityType_143.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_143;
    UnderlyingRepurchaseRate_143.setString("58.790000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_143);
    UnderlyingInstrument_143.insert(UnderlyingRepurchaseRate_143.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_143(630684686);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_143);
    UnderlyingInstrument_143.insert(UnderlyingRepurchaseTerm_143.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_143("STRING_319302809");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_143);
    UnderlyingInstrument_143.insert(UnderlyingRestructuringType_143.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_143("STRING_1657975873");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityDesc_143.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_143("EXCHANGE_1352102126");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityExchange_143.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_143("STRING_548483429");
    noUnderlyings_0_0.set(UnderlyingSecurityID_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityID_143.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_143("STRING_852934226");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityIDSource_143.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_143("STRING_1376102804");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_143);
    UnderlyingInstrument_143.insert(UnderlyingSecuritySubType_143.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_143("STRING_934195803");
    noUnderlyings_0_0.set(UnderlyingSecurityType_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityType_143.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_143("STRING_1781637043");
    noUnderlyings_0_0.set(UnderlyingSeniority_143);
    UnderlyingInstrument_143.insert(UnderlyingSeniority_143.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_143("STRING_904082873");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_143);
    UnderlyingInstrument_143.insert(UnderlyingSettlMethod_143.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_143(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_143);
    UnderlyingInstrument_143.insert(UnderlyingSettlementType_143.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_143;
    UnderlyingStartValue_143.setString("7744411");
    noUnderlyings_0_0.set(UnderlyingStartValue_143);
    UnderlyingInstrument_143.insert(UnderlyingStartValue_143.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_143("STRING_1177234730");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingStateOrProvinceOfIssue_143.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_143("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_143);
    UnderlyingInstrument_143.insert(UnderlyingStrikeCurrency_143.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_143;
    UnderlyingStrikePrice_143.setString("1604440");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_143);
    UnderlyingInstrument_143.insert(UnderlyingStrikePrice_143.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_143("STRING_1235649230");
    noUnderlyings_0_0.set(UnderlyingSymbol_143);
    UnderlyingInstrument_143.insert(UnderlyingSymbol_143.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_143("STRING_1995621697");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_143);
    UnderlyingInstrument_143.insert(UnderlyingSymbolSfx_143.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_143("STRING_241219422");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_143);
    UnderlyingInstrument_143.insert(UnderlyingTimeUnit_143.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_143("STRING_1875882228");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_143);
    UnderlyingInstrument_143.insert(UnderlyingUnitOfMeasure_143.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_143;
    UnderlyingUnitOfMeasureQty_143.setString("13821883");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_143);
    UnderlyingInstrument_143.insert(UnderlyingUnitOfMeasureQty_143.getString());
    all_values.push_back(UnderlyingInstrument_143);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_286;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_286("STRING_1402306331");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_286);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_286.insert(UnderlyingSecurityAltID_286.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_286("STRING_533307468");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_286);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_286.insert(UnderlyingSecurityAltIDSource_286.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_287;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_287("STRING_1138561737");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_287);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_287.insert(UnderlyingSecurityAltID_287.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_287("STRING_511027278");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_287);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_287.insert(UnderlyingSecurityAltIDSource_287.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_288;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_288("STRING_1683483505");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_288);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_288.insert(UnderlyingSecurityAltID_288.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_288("STRING_1776576071");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_288);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_288.insert(UnderlyingSecurityAltIDSource_288.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_280;
      FIX::UnderlyingStipType UnderlyingStipType_280("STRING_1065441071");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_280);
      UnderlyingStipulations_NoUnderlyingStips_280.insert(UnderlyingStipType_280.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_280("STRING_1310288302");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_280);
      UnderlyingStipulations_NoUnderlyingStips_280.insert(UnderlyingStipValue_280.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_280);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_275;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_275("STRING_1384743880");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_275);
      UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyID_275.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_275('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_275);
      UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyIDSource_275.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_275(709634987);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_275);
      UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyRole_275.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_275);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_550("STRING_1673714754");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_550);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550.insert(UnderlyingInstrumentPartySubID_550.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_550(2085737792);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_550);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550.insert(UnderlyingInstrumentPartySubIDType_550.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_276;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_276("STRING_719939464");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_276);
      UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyID_276.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_276('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_276);
      UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyIDSource_276.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_276(842337017);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_276);
      UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyRole_276.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_276);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_551("STRING_2082309259");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_551);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551.insert(UnderlyingInstrumentPartySubID_551.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_551(2019571747);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_551);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551.insert(UnderlyingInstrumentPartySubIDType_551.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_552("STRING_1180366623");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_552);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552.insert(UnderlyingInstrumentPartySubID_552.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_552(85631670);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_552);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552.insert(UnderlyingInstrumentPartySubIDType_552.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_553("STRING_32532100");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_553);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553.insert(UnderlyingInstrumentPartySubID_553.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_553(268532205);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_553);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553.insert(UnderlyingInstrumentPartySubIDType_553.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_277;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_277("STRING_2081253368");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_277);
      UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyID_277.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_277('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_277);
      UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyIDSource_277.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_277(2144414433);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_277);
      UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyRole_277.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_277);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_554("STRING_761417179");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_554);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554.insert(UnderlyingInstrumentPartySubID_554.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_554(1399237116);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_554);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554.insert(UnderlyingInstrumentPartySubIDType_554.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_555("STRING_1849265537");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_555);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555.insert(UnderlyingInstrumentPartySubID_555.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_555(1899978916);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_555);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555.insert(UnderlyingInstrumentPartySubIDType_555.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_556("STRING_1910264394");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_556);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556.insert(UnderlyingInstrumentPartySubID_556.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_556(1385265394);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_556);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556.insert(UnderlyingInstrumentPartySubIDType_556.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_144;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_144("DATA_1529071339");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingIssuer_144.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_144(637112570);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingIssuerLen_144.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_144("DATA_303222817");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingSecurityDesc_144.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_144(691875993);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingSecurityDescLen_144.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_144;
    UnderlyingAdjustedQuantity_144.setString("21421290");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_144);
    UnderlyingInstrument_144.insert(UnderlyingAdjustedQuantity_144.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_144;
    UnderlyingAllocationPercent_144.setString("66.970000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_144);
    UnderlyingInstrument_144.insert(UnderlyingAllocationPercent_144.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_144;
    UnderlyingAttachmentPoint_144.setString("65.200000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_144);
    UnderlyingInstrument_144.insert(UnderlyingAttachmentPoint_144.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_144("STRING_704280419");
    noUnderlyings_0_1.set(UnderlyingCFICode_144);
    UnderlyingInstrument_144.insert(UnderlyingCFICode_144.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_144("STRING_1473710358");
    noUnderlyings_0_1.set(UnderlyingCPProgram_144);
    UnderlyingInstrument_144.insert(UnderlyingCPProgram_144.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_144("STRING_1038887626");
    noUnderlyings_0_1.set(UnderlyingCPRegType_144);
    UnderlyingInstrument_144.insert(UnderlyingCPRegType_144.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_144;
    UnderlyingCapValue_144.setString("6425345");
    noUnderlyings_0_1.set(UnderlyingCapValue_144);
    UnderlyingInstrument_144.insert(UnderlyingCapValue_144.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_144;
    UnderlyingCashAmount_144.setString("461661");
    noUnderlyings_0_1.set(UnderlyingCashAmount_144);
    UnderlyingInstrument_144.insert(UnderlyingCashAmount_144.getString());
    FIX::UnderlyingCashType UnderlyingCashType_144("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_144);
    UnderlyingInstrument_144.insert(UnderlyingCashType_144.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_144;
    UnderlyingContractMultiplier_144.setString("14848715");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_144);
    UnderlyingInstrument_144.insert(UnderlyingContractMultiplier_144.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_144(1485226400);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_144);
    UnderlyingInstrument_144.insert(UnderlyingContractMultiplierUnit_144.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_144("COUNTRY_134097738");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingCountryOfIssue_144.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_144("LOCALMKTDATE_1356959680");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_144);
    UnderlyingInstrument_144.insert(UnderlyingCouponPaymentDate_144.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_144;
    UnderlyingCouponRate_144.setString("93.750000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_144);
    UnderlyingInstrument_144.insert(UnderlyingCouponRate_144.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_144("STRING_219729409");
    noUnderlyings_0_1.set(UnderlyingCreditRating_144);
    UnderlyingInstrument_144.insert(UnderlyingCreditRating_144.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_144("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_144);
    UnderlyingInstrument_144.insert(UnderlyingCurrency_144.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_144;
    UnderlyingCurrentValue_144.setString("1534991");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_144);
    UnderlyingInstrument_144.insert(UnderlyingCurrentValue_144.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_144;
    UnderlyingDetachmentPoint_144.setString("33.030000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_144);
    UnderlyingInstrument_144.insert(UnderlyingDetachmentPoint_144.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_144;
    UnderlyingDirtyPrice_144.setString("7835723");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_144);
    UnderlyingInstrument_144.insert(UnderlyingDirtyPrice_144.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_144;
    UnderlyingEndPrice_144.setString("14694571");
    noUnderlyings_0_1.set(UnderlyingEndPrice_144);
    UnderlyingInstrument_144.insert(UnderlyingEndPrice_144.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_144;
    UnderlyingEndValue_144.setString("2771768");
    noUnderlyings_0_1.set(UnderlyingEndValue_144);
    UnderlyingInstrument_144.insert(UnderlyingEndValue_144.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_144(35325833);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_144);
    UnderlyingInstrument_144.insert(UnderlyingExerciseStyle_144.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_144;
    UnderlyingFXRate_144.setString("11712390");
    noUnderlyings_0_1.set(UnderlyingFXRate_144);
    UnderlyingInstrument_144.insert(UnderlyingFXRate_144.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_144('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_144);
    UnderlyingInstrument_144.insert(UnderlyingFXRateCalc_144.getString());
    FIX::UnderlyingFactor UnderlyingFactor_144;
    UnderlyingFactor_144.setString("19455902");
    noUnderlyings_0_1.set(UnderlyingFactor_144);
    UnderlyingInstrument_144.insert(UnderlyingFactor_144.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_144(409020833);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_144);
    UnderlyingInstrument_144.insert(UnderlyingFlowScheduleType_144.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_144("STRING_1558743441");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_144);
    UnderlyingInstrument_144.insert(UnderlyingInstrRegistry_144.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_144("LOCALMKTDATE_435219150");
    noUnderlyings_0_1.set(UnderlyingIssueDate_144);
    UnderlyingInstrument_144.insert(UnderlyingIssueDate_144.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_144("STRING_712243651");
    noUnderlyings_0_1.set(UnderlyingIssuer_144);
    UnderlyingInstrument_144.insert(UnderlyingIssuer_144.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_144("STRING_103135786");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingLocaleOfIssue_144.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_144("LOCALMKTDATE_429864581");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityDate_144.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_144("MONTHYEAR_252726700");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityMonthYear_144.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_144("TZTIMEONLY_1615792307");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityTime_144.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_144;
    UnderlyingNotionalPercentageOutstanding_144.setString("50.000000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_144);
    UnderlyingInstrument_144.insert(UnderlyingNotionalPercentageOutstanding_144.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_144('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_144);
    UnderlyingInstrument_144.insert(UnderlyingOptAttribute_144.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_144;
    UnderlyingOriginalNotionalPercentageOutstanding_144.setString("62.850000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_144);
    UnderlyingInstrument_144.insert(UnderlyingOriginalNotionalPercentageOutstanding_144.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_144("STRING_1776679563");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_144);
    UnderlyingInstrument_144.insert(UnderlyingPriceUnitOfMeasure_144.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_144;
    UnderlyingPriceUnitOfMeasureQty_144.setString("17726032");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_144);
    UnderlyingInstrument_144.insert(UnderlyingPriceUnitOfMeasureQty_144.getString());
    FIX::UnderlyingProduct UnderlyingProduct_144(706468413);
    noUnderlyings_0_1.set(UnderlyingProduct_144);
    UnderlyingInstrument_144.insert(UnderlyingProduct_144.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_144(1114067496);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_144);
    UnderlyingInstrument_144.insert(UnderlyingPutOrCall_144.getString());
    FIX::UnderlyingPx UnderlyingPx_144;
    UnderlyingPx_144.setString("11103459");
    noUnderlyings_0_1.set(UnderlyingPx_144);
    UnderlyingInstrument_144.insert(UnderlyingPx_144.getString());
    FIX::UnderlyingQty UnderlyingQty_144;
    UnderlyingQty_144.setString("8405661");
    noUnderlyings_0_1.set(UnderlyingQty_144);
    UnderlyingInstrument_144.insert(UnderlyingQty_144.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_144("LOCALMKTDATE_323543528");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_144);
    UnderlyingInstrument_144.insert(UnderlyingRedemptionDate_144.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_144("STRING_1628455360");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_144);
    UnderlyingInstrument_144.insert(UnderlyingRepoCollateralSecurityType_144.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_144;
    UnderlyingRepurchaseRate_144.setString("55.600000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_144);
    UnderlyingInstrument_144.insert(UnderlyingRepurchaseRate_144.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_144(1713035308);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_144);
    UnderlyingInstrument_144.insert(UnderlyingRepurchaseTerm_144.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_144("STRING_267613292");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_144);
    UnderlyingInstrument_144.insert(UnderlyingRestructuringType_144.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_144("STRING_1213794689");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityDesc_144.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_144("EXCHANGE_1228794964");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityExchange_144.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_144("STRING_1051185657");
    noUnderlyings_0_1.set(UnderlyingSecurityID_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityID_144.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_144("STRING_535768239");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityIDSource_144.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_144("STRING_1505971798");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_144);
    UnderlyingInstrument_144.insert(UnderlyingSecuritySubType_144.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_144("STRING_1086511491");
    noUnderlyings_0_1.set(UnderlyingSecurityType_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityType_144.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_144("STRING_1707007326");
    noUnderlyings_0_1.set(UnderlyingSeniority_144);
    UnderlyingInstrument_144.insert(UnderlyingSeniority_144.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_144("STRING_1535643901");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_144);
    UnderlyingInstrument_144.insert(UnderlyingSettlMethod_144.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_144(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_144);
    UnderlyingInstrument_144.insert(UnderlyingSettlementType_144.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_144;
    UnderlyingStartValue_144.setString("21160281");
    noUnderlyings_0_1.set(UnderlyingStartValue_144);
    UnderlyingInstrument_144.insert(UnderlyingStartValue_144.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_144("STRING_946903694");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingStateOrProvinceOfIssue_144.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_144("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_144);
    UnderlyingInstrument_144.insert(UnderlyingStrikeCurrency_144.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_144;
    UnderlyingStrikePrice_144.setString("10500394");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_144);
    UnderlyingInstrument_144.insert(UnderlyingStrikePrice_144.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_144("STRING_1749701802");
    noUnderlyings_0_1.set(UnderlyingSymbol_144);
    UnderlyingInstrument_144.insert(UnderlyingSymbol_144.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_144("STRING_933514863");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_144);
    UnderlyingInstrument_144.insert(UnderlyingSymbolSfx_144.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_144("STRING_518348140");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_144);
    UnderlyingInstrument_144.insert(UnderlyingTimeUnit_144.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_144("STRING_736363155");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_144);
    UnderlyingInstrument_144.insert(UnderlyingUnitOfMeasure_144.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_144;
    UnderlyingUnitOfMeasureQty_144.setString("5124682");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_144);
    UnderlyingInstrument_144.insert(UnderlyingUnitOfMeasureQty_144.getString());
    all_values.push_back(UnderlyingInstrument_144);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_289;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_289("STRING_365559070");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_289);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_289.insert(UnderlyingSecurityAltID_289.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_289("STRING_137587860");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_289);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_289.insert(UnderlyingSecurityAltIDSource_289.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_289);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_290;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_290("STRING_1732012838");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_290);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_290.insert(UnderlyingSecurityAltID_290.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_290("STRING_1479626566");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_290);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_290.insert(UnderlyingSecurityAltIDSource_290.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_290);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_291;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_291("STRING_1247933845");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_291);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_291.insert(UnderlyingSecurityAltID_291.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_291("STRING_425095342");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_291);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_291.insert(UnderlyingSecurityAltIDSource_291.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_291);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_281;
      FIX::UnderlyingStipType UnderlyingStipType_281("STRING_728905558");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_281);
      UnderlyingStipulations_NoUnderlyingStips_281.insert(UnderlyingStipType_281.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_281("STRING_1485390902");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_281);
      UnderlyingStipulations_NoUnderlyingStips_281.insert(UnderlyingStipValue_281.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_281);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_278;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_278("STRING_996518850");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyID_278.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_278('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyIDSource_278.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_278(450033071);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_278);
      UndlyInstrumentParties_NoUndlyInstrumentParties_278.insert(UnderlyingInstrumentPartyRole_278.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_278);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_557("STRING_1087470183");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_557);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557.insert(UnderlyingInstrumentPartySubID_557.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_557(1956004869);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_557);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557.insert(UnderlyingInstrumentPartySubIDType_557.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_558("STRING_986732351");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_558);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558.insert(UnderlyingInstrumentPartySubID_558.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_558(646993862);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_558);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558.insert(UnderlyingInstrumentPartySubIDType_558.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
