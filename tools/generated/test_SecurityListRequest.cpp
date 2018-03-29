#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListRequest_0;
  FIX::Currency Currency_69("USD");
  msg.set(Currency_69);
  SecurityListRequest_0.insert(Currency_69.getString());
  FIX::EncodedText EncodedText_88("DATA_1975899724");
  msg.set(EncodedText_88);
  SecurityListRequest_0.insert(EncodedText_88.getString());
  FIX::EncodedTextLen EncodedTextLen_88(1694477144);
  msg.set(EncodedTextLen_88);
  SecurityListRequest_0.insert(EncodedTextLen_88.getString());
  FIX::MarketID MarketID_21("EXCHANGE_508978764");
  msg.set(MarketID_21);
  SecurityListRequest_0.insert(MarketID_21.getString());
  FIX::MarketSegmentID MarketSegmentID_21("STRING_807180131");
  msg.set(MarketSegmentID_21);
  SecurityListRequest_0.insert(MarketSegmentID_21.getString());
  FIX::SecurityListID SecurityListID_1("STRING_226218986");
  msg.set(SecurityListID_1);
  SecurityListRequest_0.insert(SecurityListID_1.getString());
  FIX::SecurityListRequestType SecurityListRequestType_1(3);
  msg.set(SecurityListRequestType_1);
  SecurityListRequest_0.insert(SecurityListRequestType_1.getString());
  FIX::SecurityListType SecurityListType_1(1);
  msg.set(SecurityListType_1);
  SecurityListRequest_0.insert(SecurityListType_1.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_1(1);
  msg.set(SecurityListTypeSource_1);
  SecurityListRequest_0.insert(SecurityListTypeSource_1.getString());
  FIX::SecurityReqID SecurityReqID_7("STRING_1681814570");
  msg.set(SecurityReqID_7);
  SecurityListRequest_0.insert(SecurityReqID_7.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_10('2');
  msg.set(SubscriptionRequestType_10);
  SecurityListRequest_0.insert(SubscriptionRequestType_10.getString());
  FIX::Text Text_88("STRING_1020208958");
  msg.set(Text_88);
  SecurityListRequest_0.insert(Text_88.getString());
  FIX::TradingSessionID TradingSessionID_109("STRING_5");
  msg.set(TradingSessionID_109);
  SecurityListRequest_0.insert(TradingSessionID_109.getString());
  FIX::TradingSessionSubID TradingSessionSubID_109("STRING_3");
  msg.set(TradingSessionSubID_109);
  SecurityListRequest_0.insert(TradingSessionSubID_109.getString());
  all_values.push_back(SecurityListRequest_0);

  all_compo_names.insert("SecurityListRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_28;
  FIX::AgreementCurrency AgreementCurrency_28("JPY");
  msg.set(AgreementCurrency_28);
  FinancingDetails_28.insert(AgreementCurrency_28.getString());
  FIX::AgreementDate AgreementDate_28("LOCALMKTDATE_2003635394");
  msg.set(AgreementDate_28);
  FinancingDetails_28.insert(AgreementDate_28.getString());
  FIX::AgreementDesc AgreementDesc_28("STRING_1107098167");
  msg.set(AgreementDesc_28);
  FinancingDetails_28.insert(AgreementDesc_28.getString());
  FIX::AgreementID AgreementID_28("STRING_568247810");
  msg.set(AgreementID_28);
  FinancingDetails_28.insert(AgreementID_28.getString());
  FIX::DeliveryType DeliveryType_28(1);
  msg.set(DeliveryType_28);
  FinancingDetails_28.insert(DeliveryType_28.getString());
  FIX::EndDate EndDate_28("LOCALMKTDATE_1866826644");
  msg.set(EndDate_28);
  FinancingDetails_28.insert(EndDate_28.getString());
  FIX::MarginRatio MarginRatio_28;
  MarginRatio_28.setString("67.530000");
  msg.set(MarginRatio_28);
  FinancingDetails_28.insert(MarginRatio_28.getString());
  FIX::StartDate StartDate_28("LOCALMKTDATE_1770803625");
  msg.set(StartDate_28);
  FinancingDetails_28.insert(StartDate_28.getString());
  FIX::TerminationType TerminationType_28(3);
  msg.set(TerminationType_28);
  FinancingDetails_28.insert(TerminationType_28.getString());
  all_values.push_back(FinancingDetails_28);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_141;
    FIX::EncodedLegIssuer EncodedLegIssuer_141("DATA_1497642530");
    noLegs_0_0.set(EncodedLegIssuer_141);
    InstrumentLeg_141.insert(EncodedLegIssuer_141.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_141(1840153176);
    noLegs_0_0.set(EncodedLegIssuerLen_141);
    InstrumentLeg_141.insert(EncodedLegIssuerLen_141.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_141("DATA_786417517");
    noLegs_0_0.set(EncodedLegSecurityDesc_141);
    InstrumentLeg_141.insert(EncodedLegSecurityDesc_141.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_141(584528795);
    noLegs_0_0.set(EncodedLegSecurityDescLen_141);
    InstrumentLeg_141.insert(EncodedLegSecurityDescLen_141.getString());
    FIX::LegCFICode LegCFICode_141("STRING_89573981");
    noLegs_0_0.set(LegCFICode_141);
    InstrumentLeg_141.insert(LegCFICode_141.getString());
    FIX::LegContractMultiplier LegContractMultiplier_141;
    LegContractMultiplier_141.setString("12300476");
    noLegs_0_0.set(LegContractMultiplier_141);
    InstrumentLeg_141.insert(LegContractMultiplier_141.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_141(1879371275);
    noLegs_0_0.set(LegContractMultiplierUnit_141);
    InstrumentLeg_141.insert(LegContractMultiplierUnit_141.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_141("MONTHYEAR_2065473705");
    noLegs_0_0.set(LegContractSettlMonth_141);
    InstrumentLeg_141.insert(LegContractSettlMonth_141.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_141("COUNTRY_777041131");
    noLegs_0_0.set(LegCountryOfIssue_141);
    InstrumentLeg_141.insert(LegCountryOfIssue_141.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_141("LOCALMKTDATE_240866391");
    noLegs_0_0.set(LegCouponPaymentDate_141);
    InstrumentLeg_141.insert(LegCouponPaymentDate_141.getString());
    FIX::LegCouponRate LegCouponRate_141;
    LegCouponRate_141.setString("1.890000");
    noLegs_0_0.set(LegCouponRate_141);
    InstrumentLeg_141.insert(LegCouponRate_141.getString());
    FIX::LegCreditRating LegCreditRating_141("STRING_1003260117");
    noLegs_0_0.set(LegCreditRating_141);
    InstrumentLeg_141.insert(LegCreditRating_141.getString());
    FIX::LegCurrency LegCurrency_141("EUR");
    noLegs_0_0.set(LegCurrency_141);
    InstrumentLeg_141.insert(LegCurrency_141.getString());
    FIX::LegDatedDate LegDatedDate_141("LOCALMKTDATE_1812357297");
    noLegs_0_0.set(LegDatedDate_141);
    InstrumentLeg_141.insert(LegDatedDate_141.getString());
    FIX::LegExerciseStyle LegExerciseStyle_141(916911072);
    noLegs_0_0.set(LegExerciseStyle_141);
    InstrumentLeg_141.insert(LegExerciseStyle_141.getString());
    FIX::LegFactor LegFactor_141;
    LegFactor_141.setString("18190721");
    noLegs_0_0.set(LegFactor_141);
    InstrumentLeg_141.insert(LegFactor_141.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_141(685082607);
    noLegs_0_0.set(LegFlowScheduleType_141);
    InstrumentLeg_141.insert(LegFlowScheduleType_141.getString());
    FIX::LegInstrRegistry LegInstrRegistry_141("STRING_1590612503");
    noLegs_0_0.set(LegInstrRegistry_141);
    InstrumentLeg_141.insert(LegInstrRegistry_141.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_141("LOCALMKTDATE_548997157");
    noLegs_0_0.set(LegInterestAccrualDate_141);
    InstrumentLeg_141.insert(LegInterestAccrualDate_141.getString());
    FIX::LegIssueDate LegIssueDate_141("LOCALMKTDATE_508123624");
    noLegs_0_0.set(LegIssueDate_141);
    InstrumentLeg_141.insert(LegIssueDate_141.getString());
    FIX::LegIssuer LegIssuer_141("STRING_478318711");
    noLegs_0_0.set(LegIssuer_141);
    InstrumentLeg_141.insert(LegIssuer_141.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_141("STRING_405148903");
    noLegs_0_0.set(LegLocaleOfIssue_141);
    InstrumentLeg_141.insert(LegLocaleOfIssue_141.getString());
    FIX::LegMaturityDate LegMaturityDate_141("LOCALMKTDATE_1615221792");
    noLegs_0_0.set(LegMaturityDate_141);
    InstrumentLeg_141.insert(LegMaturityDate_141.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_141("MONTHYEAR_1046566522");
    noLegs_0_0.set(LegMaturityMonthYear_141);
    InstrumentLeg_141.insert(LegMaturityMonthYear_141.getString());
    FIX::LegMaturityTime LegMaturityTime_141("TZTIMEONLY_385362220");
    noLegs_0_0.set(LegMaturityTime_141);
    InstrumentLeg_141.insert(LegMaturityTime_141.getString());
    FIX::LegOptAttribute LegOptAttribute_141('1');
    noLegs_0_0.set(LegOptAttribute_141);
    InstrumentLeg_141.insert(LegOptAttribute_141.getString());
    FIX::LegOptionRatio LegOptionRatio_141;
    LegOptionRatio_141.setString("10378096");
    noLegs_0_0.set(LegOptionRatio_141);
    InstrumentLeg_141.insert(LegOptionRatio_141.getString());
    FIX::LegPool LegPool_141("STRING_8682197");
    noLegs_0_0.set(LegPool_141);
    InstrumentLeg_141.insert(LegPool_141.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_141("STRING_316384922");
    noLegs_0_0.set(LegPriceUnitOfMeasure_141);
    InstrumentLeg_141.insert(LegPriceUnitOfMeasure_141.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_141;
    LegPriceUnitOfMeasureQty_141.setString("2790264");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_141);
    InstrumentLeg_141.insert(LegPriceUnitOfMeasureQty_141.getString());
    FIX::LegProduct LegProduct_141(1506324727);
    noLegs_0_0.set(LegProduct_141);
    InstrumentLeg_141.insert(LegProduct_141.getString());
    FIX::LegPutOrCall LegPutOrCall_141(9054450);
    noLegs_0_0.set(LegPutOrCall_141);
    InstrumentLeg_141.insert(LegPutOrCall_141.getString());
    FIX::LegRatioQty LegRatioQty_141;
    LegRatioQty_141.setString("10654439");
    noLegs_0_0.set(LegRatioQty_141);
    InstrumentLeg_141.insert(LegRatioQty_141.getString());
    FIX::LegRedemptionDate LegRedemptionDate_141("LOCALMKTDATE_2090853522");
    noLegs_0_0.set(LegRedemptionDate_141);
    InstrumentLeg_141.insert(LegRedemptionDate_141.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_141("STRING_98628431");
    noLegs_0_0.set(LegRepoCollateralSecurityType_141);
    InstrumentLeg_141.insert(LegRepoCollateralSecurityType_141.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_141;
    LegRepurchaseRate_141.setString("79.860000");
    noLegs_0_0.set(LegRepurchaseRate_141);
    InstrumentLeg_141.insert(LegRepurchaseRate_141.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_141(1822741149);
    noLegs_0_0.set(LegRepurchaseTerm_141);
    InstrumentLeg_141.insert(LegRepurchaseTerm_141.getString());
    FIX::LegSecurityDesc LegSecurityDesc_141("STRING_16618489");
    noLegs_0_0.set(LegSecurityDesc_141);
    InstrumentLeg_141.insert(LegSecurityDesc_141.getString());
    FIX::LegSecurityExchange LegSecurityExchange_141("EXCHANGE_925049117");
    noLegs_0_0.set(LegSecurityExchange_141);
    InstrumentLeg_141.insert(LegSecurityExchange_141.getString());
    FIX::LegSecurityID LegSecurityID_141("STRING_2063607540");
    noLegs_0_0.set(LegSecurityID_141);
    InstrumentLeg_141.insert(LegSecurityID_141.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_141("STRING_741788678");
    noLegs_0_0.set(LegSecurityIDSource_141);
    InstrumentLeg_141.insert(LegSecurityIDSource_141.getString());
    FIX::LegSecuritySubType LegSecuritySubType_141("STRING_1928309234");
    noLegs_0_0.set(LegSecuritySubType_141);
    InstrumentLeg_141.insert(LegSecuritySubType_141.getString());
    FIX::LegSecurityType LegSecurityType_141("STRING_1298704042");
    noLegs_0_0.set(LegSecurityType_141);
    InstrumentLeg_141.insert(LegSecurityType_141.getString());
    FIX::LegSide LegSide_141('1');
    noLegs_0_0.set(LegSide_141);
    InstrumentLeg_141.insert(LegSide_141.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_141("STRING_1593182883");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_141);
    InstrumentLeg_141.insert(LegStateOrProvinceOfIssue_141.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_141("JPY");
    noLegs_0_0.set(LegStrikeCurrency_141);
    InstrumentLeg_141.insert(LegStrikeCurrency_141.getString());
    FIX::LegStrikePrice LegStrikePrice_141;
    LegStrikePrice_141.setString("1307818");
    noLegs_0_0.set(LegStrikePrice_141);
    InstrumentLeg_141.insert(LegStrikePrice_141.getString());
    FIX::LegSymbol LegSymbol_141("STRING_1658743970");
    noLegs_0_0.set(LegSymbol_141);
    InstrumentLeg_141.insert(LegSymbol_141.getString());
    FIX::LegSymbolSfx LegSymbolSfx_141("STRING_2132562923");
    noLegs_0_0.set(LegSymbolSfx_141);
    InstrumentLeg_141.insert(LegSymbolSfx_141.getString());
    FIX::LegTimeUnit LegTimeUnit_141("STRING_638905466");
    noLegs_0_0.set(LegTimeUnit_141);
    InstrumentLeg_141.insert(LegTimeUnit_141.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_141("STRING_2137062681");
    noLegs_0_0.set(LegUnitOfMeasure_141);
    InstrumentLeg_141.insert(LegUnitOfMeasure_141.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_141;
    LegUnitOfMeasureQty_141.setString("3902281");
    noLegs_0_0.set(LegUnitOfMeasureQty_141);
    InstrumentLeg_141.insert(LegUnitOfMeasureQty_141.getString());
    all_values.push_back(InstrumentLeg_141);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_273;
      FIX::LegSecurityAltID LegSecurityAltID_273("STRING_1036145555");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_273);
      LegSecAltIDGrp_NoLegSecurityAltID_273.insert(LegSecurityAltID_273.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_273("STRING_775590398");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_273);
      LegSecAltIDGrp_NoLegSecurityAltID_273.insert(LegSecurityAltIDSource_273.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_273);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_142;
    FIX::EncodedLegIssuer EncodedLegIssuer_142("DATA_1441208398");
    noLegs_0_1.set(EncodedLegIssuer_142);
    InstrumentLeg_142.insert(EncodedLegIssuer_142.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_142(2073955183);
    noLegs_0_1.set(EncodedLegIssuerLen_142);
    InstrumentLeg_142.insert(EncodedLegIssuerLen_142.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_142("DATA_784272595");
    noLegs_0_1.set(EncodedLegSecurityDesc_142);
    InstrumentLeg_142.insert(EncodedLegSecurityDesc_142.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_142(1757593320);
    noLegs_0_1.set(EncodedLegSecurityDescLen_142);
    InstrumentLeg_142.insert(EncodedLegSecurityDescLen_142.getString());
    FIX::LegCFICode LegCFICode_142("STRING_205498016");
    noLegs_0_1.set(LegCFICode_142);
    InstrumentLeg_142.insert(LegCFICode_142.getString());
    FIX::LegContractMultiplier LegContractMultiplier_142;
    LegContractMultiplier_142.setString("1431136");
    noLegs_0_1.set(LegContractMultiplier_142);
    InstrumentLeg_142.insert(LegContractMultiplier_142.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_142(1766647771);
    noLegs_0_1.set(LegContractMultiplierUnit_142);
    InstrumentLeg_142.insert(LegContractMultiplierUnit_142.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_142("MONTHYEAR_1270942015");
    noLegs_0_1.set(LegContractSettlMonth_142);
    InstrumentLeg_142.insert(LegContractSettlMonth_142.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_142("COUNTRY_86483548");
    noLegs_0_1.set(LegCountryOfIssue_142);
    InstrumentLeg_142.insert(LegCountryOfIssue_142.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_142("LOCALMKTDATE_1865276202");
    noLegs_0_1.set(LegCouponPaymentDate_142);
    InstrumentLeg_142.insert(LegCouponPaymentDate_142.getString());
    FIX::LegCouponRate LegCouponRate_142;
    LegCouponRate_142.setString("0.010000");
    noLegs_0_1.set(LegCouponRate_142);
    InstrumentLeg_142.insert(LegCouponRate_142.getString());
    FIX::LegCreditRating LegCreditRating_142("STRING_1909224697");
    noLegs_0_1.set(LegCreditRating_142);
    InstrumentLeg_142.insert(LegCreditRating_142.getString());
    FIX::LegCurrency LegCurrency_142("GBP");
    noLegs_0_1.set(LegCurrency_142);
    InstrumentLeg_142.insert(LegCurrency_142.getString());
    FIX::LegDatedDate LegDatedDate_142("LOCALMKTDATE_1825348589");
    noLegs_0_1.set(LegDatedDate_142);
    InstrumentLeg_142.insert(LegDatedDate_142.getString());
    FIX::LegExerciseStyle LegExerciseStyle_142(476199721);
    noLegs_0_1.set(LegExerciseStyle_142);
    InstrumentLeg_142.insert(LegExerciseStyle_142.getString());
    FIX::LegFactor LegFactor_142;
    LegFactor_142.setString("21248247");
    noLegs_0_1.set(LegFactor_142);
    InstrumentLeg_142.insert(LegFactor_142.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_142(976568983);
    noLegs_0_1.set(LegFlowScheduleType_142);
    InstrumentLeg_142.insert(LegFlowScheduleType_142.getString());
    FIX::LegInstrRegistry LegInstrRegistry_142("STRING_240693356");
    noLegs_0_1.set(LegInstrRegistry_142);
    InstrumentLeg_142.insert(LegInstrRegistry_142.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_142("LOCALMKTDATE_1570523939");
    noLegs_0_1.set(LegInterestAccrualDate_142);
    InstrumentLeg_142.insert(LegInterestAccrualDate_142.getString());
    FIX::LegIssueDate LegIssueDate_142("LOCALMKTDATE_1044700450");
    noLegs_0_1.set(LegIssueDate_142);
    InstrumentLeg_142.insert(LegIssueDate_142.getString());
    FIX::LegIssuer LegIssuer_142("STRING_1824259122");
    noLegs_0_1.set(LegIssuer_142);
    InstrumentLeg_142.insert(LegIssuer_142.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_142("STRING_1701305781");
    noLegs_0_1.set(LegLocaleOfIssue_142);
    InstrumentLeg_142.insert(LegLocaleOfIssue_142.getString());
    FIX::LegMaturityDate LegMaturityDate_142("LOCALMKTDATE_555960772");
    noLegs_0_1.set(LegMaturityDate_142);
    InstrumentLeg_142.insert(LegMaturityDate_142.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_142("MONTHYEAR_1809338397");
    noLegs_0_1.set(LegMaturityMonthYear_142);
    InstrumentLeg_142.insert(LegMaturityMonthYear_142.getString());
    FIX::LegMaturityTime LegMaturityTime_142("TZTIMEONLY_192727600");
    noLegs_0_1.set(LegMaturityTime_142);
    InstrumentLeg_142.insert(LegMaturityTime_142.getString());
    FIX::LegOptAttribute LegOptAttribute_142('5');
    noLegs_0_1.set(LegOptAttribute_142);
    InstrumentLeg_142.insert(LegOptAttribute_142.getString());
    FIX::LegOptionRatio LegOptionRatio_142;
    LegOptionRatio_142.setString("520829");
    noLegs_0_1.set(LegOptionRatio_142);
    InstrumentLeg_142.insert(LegOptionRatio_142.getString());
    FIX::LegPool LegPool_142("STRING_299371210");
    noLegs_0_1.set(LegPool_142);
    InstrumentLeg_142.insert(LegPool_142.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_142("STRING_1581685361");
    noLegs_0_1.set(LegPriceUnitOfMeasure_142);
    InstrumentLeg_142.insert(LegPriceUnitOfMeasure_142.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_142;
    LegPriceUnitOfMeasureQty_142.setString("8276733");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_142);
    InstrumentLeg_142.insert(LegPriceUnitOfMeasureQty_142.getString());
    FIX::LegProduct LegProduct_142(1740579609);
    noLegs_0_1.set(LegProduct_142);
    InstrumentLeg_142.insert(LegProduct_142.getString());
    FIX::LegPutOrCall LegPutOrCall_142(1508156896);
    noLegs_0_1.set(LegPutOrCall_142);
    InstrumentLeg_142.insert(LegPutOrCall_142.getString());
    FIX::LegRatioQty LegRatioQty_142;
    LegRatioQty_142.setString("16119459");
    noLegs_0_1.set(LegRatioQty_142);
    InstrumentLeg_142.insert(LegRatioQty_142.getString());
    FIX::LegRedemptionDate LegRedemptionDate_142("LOCALMKTDATE_1350689281");
    noLegs_0_1.set(LegRedemptionDate_142);
    InstrumentLeg_142.insert(LegRedemptionDate_142.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_142("STRING_1713654913");
    noLegs_0_1.set(LegRepoCollateralSecurityType_142);
    InstrumentLeg_142.insert(LegRepoCollateralSecurityType_142.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_142;
    LegRepurchaseRate_142.setString("95.940000");
    noLegs_0_1.set(LegRepurchaseRate_142);
    InstrumentLeg_142.insert(LegRepurchaseRate_142.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_142(969853404);
    noLegs_0_1.set(LegRepurchaseTerm_142);
    InstrumentLeg_142.insert(LegRepurchaseTerm_142.getString());
    FIX::LegSecurityDesc LegSecurityDesc_142("STRING_837113280");
    noLegs_0_1.set(LegSecurityDesc_142);
    InstrumentLeg_142.insert(LegSecurityDesc_142.getString());
    FIX::LegSecurityExchange LegSecurityExchange_142("EXCHANGE_1841543142");
    noLegs_0_1.set(LegSecurityExchange_142);
    InstrumentLeg_142.insert(LegSecurityExchange_142.getString());
    FIX::LegSecurityID LegSecurityID_142("STRING_687645959");
    noLegs_0_1.set(LegSecurityID_142);
    InstrumentLeg_142.insert(LegSecurityID_142.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_142("STRING_108579634");
    noLegs_0_1.set(LegSecurityIDSource_142);
    InstrumentLeg_142.insert(LegSecurityIDSource_142.getString());
    FIX::LegSecuritySubType LegSecuritySubType_142("STRING_1603284191");
    noLegs_0_1.set(LegSecuritySubType_142);
    InstrumentLeg_142.insert(LegSecuritySubType_142.getString());
    FIX::LegSecurityType LegSecurityType_142("STRING_422057002");
    noLegs_0_1.set(LegSecurityType_142);
    InstrumentLeg_142.insert(LegSecurityType_142.getString());
    FIX::LegSide LegSide_142('3');
    noLegs_0_1.set(LegSide_142);
    InstrumentLeg_142.insert(LegSide_142.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_142("STRING_1281149132");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_142);
    InstrumentLeg_142.insert(LegStateOrProvinceOfIssue_142.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_142("CHF");
    noLegs_0_1.set(LegStrikeCurrency_142);
    InstrumentLeg_142.insert(LegStrikeCurrency_142.getString());
    FIX::LegStrikePrice LegStrikePrice_142;
    LegStrikePrice_142.setString("1102344");
    noLegs_0_1.set(LegStrikePrice_142);
    InstrumentLeg_142.insert(LegStrikePrice_142.getString());
    FIX::LegSymbol LegSymbol_142("STRING_1138950080");
    noLegs_0_1.set(LegSymbol_142);
    InstrumentLeg_142.insert(LegSymbol_142.getString());
    FIX::LegSymbolSfx LegSymbolSfx_142("STRING_1852960100");
    noLegs_0_1.set(LegSymbolSfx_142);
    InstrumentLeg_142.insert(LegSymbolSfx_142.getString());
    FIX::LegTimeUnit LegTimeUnit_142("STRING_1154934918");
    noLegs_0_1.set(LegTimeUnit_142);
    InstrumentLeg_142.insert(LegTimeUnit_142.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_142("STRING_815725555");
    noLegs_0_1.set(LegUnitOfMeasure_142);
    InstrumentLeg_142.insert(LegUnitOfMeasure_142.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_142;
    LegUnitOfMeasureQty_142.setString("14067822");
    noLegs_0_1.set(LegUnitOfMeasureQty_142);
    InstrumentLeg_142.insert(LegUnitOfMeasureQty_142.getString());
    all_values.push_back(InstrumentLeg_142);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_274;
      FIX::LegSecurityAltID LegSecurityAltID_274("STRING_477580304");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_274);
      LegSecAltIDGrp_NoLegSecurityAltID_274.insert(LegSecurityAltID_274.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_274("STRING_1599509834");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_274);
      LegSecAltIDGrp_NoLegSecurityAltID_274.insert(LegSecurityAltIDSource_274.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_274);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_275;
      FIX::LegSecurityAltID LegSecurityAltID_275("STRING_108951849");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_275);
      LegSecAltIDGrp_NoLegSecurityAltID_275.insert(LegSecurityAltID_275.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_275("STRING_529663232");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_275);
      LegSecAltIDGrp_NoLegSecurityAltID_275.insert(LegSecurityAltIDSource_275.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_275);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_276;
      FIX::LegSecurityAltID LegSecurityAltID_276("STRING_1898881044");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_276);
      LegSecAltIDGrp_NoLegSecurityAltID_276.insert(LegSecurityAltID_276.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_276("STRING_1690637210");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_276);
      LegSecAltIDGrp_NoLegSecurityAltID_276.insert(LegSecurityAltIDSource_276.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_276);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_86;
  FIX::AttachmentPoint AttachmentPoint_86;
  AttachmentPoint_86.setString("65.570000");
  msg.set(AttachmentPoint_86);
  Instrument_86.insert(AttachmentPoint_86.getString());
  FIX::CFICode CFICode_86("STRING_1491977005");
  msg.set(CFICode_86);
  Instrument_86.insert(CFICode_86.getString());
  FIX::CPProgram CPProgram_86(99);
  msg.set(CPProgram_86);
  Instrument_86.insert(CPProgram_86.getString());
  FIX::CPRegType CPRegType_86("STRING_821798830");
  msg.set(CPRegType_86);
  Instrument_86.insert(CPRegType_86.getString());
  FIX::CapPrice CapPrice_86;
  CapPrice_86.setString("6951826");
  msg.set(CapPrice_86);
  Instrument_86.insert(CapPrice_86.getString());
  FIX::ContractMultiplier ContractMultiplier_86;
  ContractMultiplier_86.setString("6174817");
  msg.set(ContractMultiplier_86);
  Instrument_86.insert(ContractMultiplier_86.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_86(1);
  msg.set(ContractMultiplierUnit_86);
  Instrument_86.insert(ContractMultiplierUnit_86.getString());
  FIX::ContractSettlMonth ContractSettlMonth_86("MONTHYEAR_1665036043");
  msg.set(ContractSettlMonth_86);
  Instrument_86.insert(ContractSettlMonth_86.getString());
  FIX::CountryOfIssue CountryOfIssue_86("COUNTRY_1454595004");
  msg.set(CountryOfIssue_86);
  Instrument_86.insert(CountryOfIssue_86.getString());
  FIX::CouponPaymentDate CouponPaymentDate_86("LOCALMKTDATE_123434271");
  msg.set(CouponPaymentDate_86);
  Instrument_86.insert(CouponPaymentDate_86.getString());
  FIX::CouponRate CouponRate_86;
  CouponRate_86.setString("83.540000");
  msg.set(CouponRate_86);
  Instrument_86.insert(CouponRate_86.getString());
  FIX::CreditRating CreditRating_86("STRING_1563174638");
  msg.set(CreditRating_86);
  Instrument_86.insert(CreditRating_86.getString());
  FIX::DatedDate DatedDate_86("LOCALMKTDATE_1726718462");
  msg.set(DatedDate_86);
  Instrument_86.insert(DatedDate_86.getString());
  FIX::DetachmentPoint DetachmentPoint_86;
  DetachmentPoint_86.setString("53.570000");
  msg.set(DetachmentPoint_86);
  Instrument_86.insert(DetachmentPoint_86.getString());
  FIX::EncodedIssuer EncodedIssuer_86("DATA_1868269743");
  msg.set(EncodedIssuer_86);
  Instrument_86.insert(EncodedIssuer_86.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_86(860383947);
  msg.set(EncodedIssuerLen_86);
  Instrument_86.insert(EncodedIssuerLen_86.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_86("DATA_1525512081");
  msg.set(EncodedSecurityDesc_86);
  Instrument_86.insert(EncodedSecurityDesc_86.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_86(3222256);
  msg.set(EncodedSecurityDescLen_86);
  Instrument_86.insert(EncodedSecurityDescLen_86.getString());
  FIX::ExerciseStyle ExerciseStyle_86(2);
  msg.set(ExerciseStyle_86);
  Instrument_86.insert(ExerciseStyle_86.getString());
  FIX::Factor Factor_86;
  Factor_86.setString("5169785");
  msg.set(Factor_86);
  Instrument_86.insert(Factor_86.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_86(true);
  msg.set(FlexProductEligibilityIndicator_86);
  Instrument_86.insert(FlexProductEligibilityIndicator_86.getString());
  FIX::FlexibleIndicator FlexibleIndicator_86(false);
  msg.set(FlexibleIndicator_86);
  Instrument_86.insert(FlexibleIndicator_86.getString());
  FIX::FloorPrice FloorPrice_86;
  FloorPrice_86.setString("13327040");
  msg.set(FloorPrice_86);
  Instrument_86.insert(FloorPrice_86.getString());
  FIX::FlowScheduleType FlowScheduleType_86(2);
  msg.set(FlowScheduleType_86);
  Instrument_86.insert(FlowScheduleType_86.getString());
  FIX::InstrRegistry InstrRegistry_86("STRING_1688965376");
  msg.set(InstrRegistry_86);
  Instrument_86.insert(InstrRegistry_86.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_86('1');
  msg.set(InstrmtAssignmentMethod_86);
  Instrument_86.insert(InstrmtAssignmentMethod_86.getString());
  FIX::InterestAccrualDate InterestAccrualDate_86("LOCALMKTDATE_567507128");
  msg.set(InterestAccrualDate_86);
  Instrument_86.insert(InterestAccrualDate_86.getString());
  FIX::IssueDate IssueDate_86("LOCALMKTDATE_1797917225");
  msg.set(IssueDate_86);
  Instrument_86.insert(IssueDate_86.getString());
  FIX::Issuer Issuer_86("STRING_192463957");
  msg.set(Issuer_86);
  Instrument_86.insert(Issuer_86.getString());
  FIX::ListMethod ListMethod_86(1);
  msg.set(ListMethod_86);
  Instrument_86.insert(ListMethod_86.getString());
  FIX::LocaleOfIssue LocaleOfIssue_86("STRING_1341070788");
  msg.set(LocaleOfIssue_86);
  Instrument_86.insert(LocaleOfIssue_86.getString());
  FIX::MaturityDate MaturityDate_86("LOCALMKTDATE_1549800514");
  msg.set(MaturityDate_86);
  Instrument_86.insert(MaturityDate_86.getString());
  FIX::MaturityMonthYear MaturityMonthYear_86("MONTHYEAR_1810881530");
  msg.set(MaturityMonthYear_86);
  Instrument_86.insert(MaturityMonthYear_86.getString());
  FIX::MaturityTime MaturityTime_86("TZTIMEONLY_244897599");
  msg.set(MaturityTime_86);
  Instrument_86.insert(MaturityTime_86.getString());
  FIX::MinPriceIncrement MinPriceIncrement_86;
  MinPriceIncrement_86.setString("2241156");
  msg.set(MinPriceIncrement_86);
  Instrument_86.insert(MinPriceIncrement_86.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_86;
  MinPriceIncrementAmount_86.setString("3585805");
  msg.set(MinPriceIncrementAmount_86);
  Instrument_86.insert(MinPriceIncrementAmount_86.getString());
  FIX::NTPositionLimit NTPositionLimit_86(862379323);
  msg.set(NTPositionLimit_86);
  Instrument_86.insert(NTPositionLimit_86.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_86;
  NotionalPercentageOutstanding_86.setString("4.730000");
  msg.set(NotionalPercentageOutstanding_86);
  Instrument_86.insert(NotionalPercentageOutstanding_86.getString());
  FIX::OptAttribute OptAttribute_86('2');
  msg.set(OptAttribute_86);
  Instrument_86.insert(OptAttribute_86.getString());
  FIX::OptPayoutAmount OptPayoutAmount_86;
  OptPayoutAmount_86.setString("1694906");
  msg.set(OptPayoutAmount_86);
  Instrument_86.insert(OptPayoutAmount_86.getString());
  FIX::OptPayoutType OptPayoutType_86(3);
  msg.set(OptPayoutType_86);
  Instrument_86.insert(OptPayoutType_86.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_86;
  OriginalNotionalPercentageOutstanding_86.setString("12.710000");
  msg.set(OriginalNotionalPercentageOutstanding_86);
  Instrument_86.insert(OriginalNotionalPercentageOutstanding_86.getString());
  FIX::Pool Pool_86("STRING_1732665318");
  msg.set(Pool_86);
  Instrument_86.insert(Pool_86.getString());
  FIX::PositionLimit PositionLimit_86(356159558);
  msg.set(PositionLimit_86);
  Instrument_86.insert(PositionLimit_86.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_86("STRING_STD");
  msg.set(PriceQuoteMethod_86);
  Instrument_86.insert(PriceQuoteMethod_86.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_86("STRING_1453451413");
  msg.set(PriceUnitOfMeasure_86);
  Instrument_86.insert(PriceUnitOfMeasure_86.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_86;
  PriceUnitOfMeasureQty_86.setString("12165435");
  msg.set(PriceUnitOfMeasureQty_86);
  Instrument_86.insert(PriceUnitOfMeasureQty_86.getString());
  FIX::Product Product_88(1);
  msg.set(Product_88);
  Instrument_86.insert(Product_88.getString());
  FIX::ProductComplex ProductComplex_86("STRING_1456673669");
  msg.set(ProductComplex_86);
  Instrument_86.insert(ProductComplex_86.getString());
  FIX::PutOrCall PutOrCall_86(0);
  msg.set(PutOrCall_86);
  Instrument_86.insert(PutOrCall_86.getString());
  FIX::RedemptionDate RedemptionDate_86("LOCALMKTDATE_603593575");
  msg.set(RedemptionDate_86);
  Instrument_86.insert(RedemptionDate_86.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_86("STRING_1165372377");
  msg.set(RepoCollateralSecurityType_86);
  Instrument_86.insert(RepoCollateralSecurityType_86.getString());
  FIX::RepurchaseRate RepurchaseRate_86;
  RepurchaseRate_86.setString("79.580000");
  msg.set(RepurchaseRate_86);
  Instrument_86.insert(RepurchaseRate_86.getString());
  FIX::RepurchaseTerm RepurchaseTerm_86(1936297643);
  msg.set(RepurchaseTerm_86);
  Instrument_86.insert(RepurchaseTerm_86.getString());
  FIX::RestructuringType RestructuringType_86("STRING_FR");
  msg.set(RestructuringType_86);
  Instrument_86.insert(RestructuringType_86.getString());
  FIX::SecurityDesc SecurityDesc_86("STRING_1706713334");
  msg.set(SecurityDesc_86);
  Instrument_86.insert(SecurityDesc_86.getString());
  FIX::SecurityExchange SecurityExchange_86("EXCHANGE_1599098368");
  msg.set(SecurityExchange_86);
  Instrument_86.insert(SecurityExchange_86.getString());
  FIX::SecurityGroup SecurityGroup_86("STRING_700876800");
  msg.set(SecurityGroup_86);
  Instrument_86.insert(SecurityGroup_86.getString());
  FIX::SecurityID SecurityID_86("STRING_1357146912");
  msg.set(SecurityID_86);
  Instrument_86.insert(SecurityID_86.getString());
  FIX::SecurityIDSource SecurityIDSource_86("STRING_4");
  msg.set(SecurityIDSource_86);
  Instrument_86.insert(SecurityIDSource_86.getString());
  FIX::SecurityStatus SecurityStatus_86("STRING_2");
  msg.set(SecurityStatus_86);
  Instrument_86.insert(SecurityStatus_86.getString());
  FIX::SecuritySubType SecuritySubType_87("STRING_550734052");
  msg.set(SecuritySubType_87);
  Instrument_86.insert(SecuritySubType_87.getString());
  FIX::SecurityType SecurityType_88("STRING_BRADY");
  msg.set(SecurityType_88);
  Instrument_86.insert(SecurityType_88.getString());
  FIX::Seniority Seniority_86("STRING_SB");
  msg.set(Seniority_86);
  Instrument_86.insert(Seniority_86.getString());
  FIX::SettlMethod SettlMethod_86('P');
  msg.set(SettlMethod_86);
  Instrument_86.insert(SettlMethod_86.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_86("STRING_1417994888");
  msg.set(SettleOnOpenFlag_86);
  Instrument_86.insert(SettleOnOpenFlag_86.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_86("STRING_1041759729");
  msg.set(StateOrProvinceOfIssue_86);
  Instrument_86.insert(StateOrProvinceOfIssue_86.getString());
  FIX::StrikeCurrency StrikeCurrency_86("EUR");
  msg.set(StrikeCurrency_86);
  Instrument_86.insert(StrikeCurrency_86.getString());
  FIX::StrikeMultiplier StrikeMultiplier_86;
  StrikeMultiplier_86.setString("9178926");
  msg.set(StrikeMultiplier_86);
  Instrument_86.insert(StrikeMultiplier_86.getString());
  FIX::StrikePrice StrikePrice_86;
  StrikePrice_86.setString("18275016");
  msg.set(StrikePrice_86);
  Instrument_86.insert(StrikePrice_86.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_86(3);
  msg.set(StrikePriceBoundaryMethod_86);
  Instrument_86.insert(StrikePriceBoundaryMethod_86.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_86;
  StrikePriceBoundaryPrecision_86.setString("39.180000");
  msg.set(StrikePriceBoundaryPrecision_86);
  Instrument_86.insert(StrikePriceBoundaryPrecision_86.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_86(4);
  msg.set(StrikePriceDeterminationMethod_86);
  Instrument_86.insert(StrikePriceDeterminationMethod_86.getString());
  FIX::StrikeValue StrikeValue_86;
  StrikeValue_86.setString("10570860");
  msg.set(StrikeValue_86);
  Instrument_86.insert(StrikeValue_86.getString());
  FIX::Symbol Symbol_86("STRING_1707810546");
  msg.set(Symbol_86);
  Instrument_86.insert(Symbol_86.getString());
  FIX::SymbolSfx SymbolSfx_86("STRING_CD");
  msg.set(SymbolSfx_86);
  Instrument_86.insert(SymbolSfx_86.getString());
  FIX::TimeUnit TimeUnit_86("STRING_H");
  msg.set(TimeUnit_86);
  Instrument_86.insert(TimeUnit_86.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_86(1);
  msg.set(UnderlyingPriceDeterminationMethod_86);
  Instrument_86.insert(UnderlyingPriceDeterminationMethod_86.getString());
  FIX::UnitOfMeasure UnitOfMeasure_86("STRING_tn");
  msg.set(UnitOfMeasure_86);
  Instrument_86.insert(UnitOfMeasure_86.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_86;
  UnitOfMeasureQty_86.setString("1658241");
  msg.set(UnitOfMeasureQty_86);
  Instrument_86.insert(UnitOfMeasureQty_86.getString());
  FIX::ValuationMethod ValuationMethod_86("STRING_EQTY");
  msg.set(ValuationMethod_86);
  Instrument_86.insert(ValuationMethod_86.getString());
  all_values.push_back(Instrument_86);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_175;
    FIX::ComplexEventCondition ComplexEventCondition_175(1);
    noComplexEvents_0_0.set(ComplexEventCondition_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventCondition_175.getString());
    FIX::ComplexEventPrice ComplexEventPrice_175;
    ComplexEventPrice_175.setString("393495");
    noComplexEvents_0_0.set(ComplexEventPrice_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPrice_175.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_175(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceBoundaryMethod_175.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_175;
    ComplexEventPriceBoundaryPrecision_175.setString("54.380000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceBoundaryPrecision_175.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_175(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceTimeType_175.getString());
    FIX::ComplexEventType ComplexEventType_175(8);
    noComplexEvents_0_0.set(ComplexEventType_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventType_175.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_175;
    ComplexOptPayoutAmount_175.setString("10999487");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexOptPayoutAmount_175.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_175);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_356;
      FIX::ComplexEventEndDate ComplexEventEndDate_356(FIX::UTCTIMESTAMP(2, 20, 45, 1, 6, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_356);
      ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventEndDate_356.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_356(FIX::UTCTIMESTAMP(10, 33, 37, 24, 12, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_356);
      ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventStartDate_356.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_356);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_721;
        FIX::ComplexEventEndTime ComplexEventEndTime_721(FIX::UTCTIMEONLY(5, 21, 49));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_721);
        ComplexEventTimes_NoComplexEventTimes_721.insert(ComplexEventEndTime_721.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_721(FIX::UTCTIMEONLY(7, 4, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_721);
        ComplexEventTimes_NoComplexEventTimes_721.insert(ComplexEventStartTime_721.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_721);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_722;
        FIX::ComplexEventEndTime ComplexEventEndTime_722(FIX::UTCTIMEONLY(23, 48, 22));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_722);
        ComplexEventTimes_NoComplexEventTimes_722.insert(ComplexEventEndTime_722.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_722(FIX::UTCTIMEONLY(0, 36, 14));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_722);
        ComplexEventTimes_NoComplexEventTimes_722.insert(ComplexEventStartTime_722.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_722);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_723;
        FIX::ComplexEventEndTime ComplexEventEndTime_723(FIX::UTCTIMEONLY(15, 35, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_723);
        ComplexEventTimes_NoComplexEventTimes_723.insert(ComplexEventEndTime_723.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_723(FIX::UTCTIMEONLY(20, 52, 4));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_723);
        ComplexEventTimes_NoComplexEventTimes_723.insert(ComplexEventStartTime_723.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_723);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_357;
      FIX::ComplexEventEndDate ComplexEventEndDate_357(FIX::UTCTIMESTAMP(13, 41, 2, 24, 6, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_357);
      ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventEndDate_357.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_357(FIX::UTCTIMESTAMP(10, 24, 51, 13, 12, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_357);
      ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventStartDate_357.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_357);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_724;
        FIX::ComplexEventEndTime ComplexEventEndTime_724(FIX::UTCTIMEONLY(15, 59, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_724);
        ComplexEventTimes_NoComplexEventTimes_724.insert(ComplexEventEndTime_724.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_724(FIX::UTCTIMEONLY(15, 25, 47));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_724);
        ComplexEventTimes_NoComplexEventTimes_724.insert(ComplexEventStartTime_724.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_724);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_725;
        FIX::ComplexEventEndTime ComplexEventEndTime_725(FIX::UTCTIMEONLY(20, 22, 18));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_725);
        ComplexEventTimes_NoComplexEventTimes_725.insert(ComplexEventEndTime_725.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_725(FIX::UTCTIMEONLY(18, 10, 33));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_725);
        ComplexEventTimes_NoComplexEventTimes_725.insert(ComplexEventStartTime_725.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_725);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_358;
      FIX::ComplexEventEndDate ComplexEventEndDate_358(FIX::UTCTIMESTAMP(4, 6, 31, 24, 12, 2010));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventEndDate_358.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_358(FIX::UTCTIMESTAMP(2, 50, 54, 15, 2, 2012));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventStartDate_358.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_358);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_726;
        FIX::ComplexEventEndTime ComplexEventEndTime_726(FIX::UTCTIMEONLY(13, 32, 29));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_726);
        ComplexEventTimes_NoComplexEventTimes_726.insert(ComplexEventEndTime_726.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_726(FIX::UTCTIMEONLY(3, 47, 9));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_726);
        ComplexEventTimes_NoComplexEventTimes_726.insert(ComplexEventStartTime_726.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_726);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_727;
        FIX::ComplexEventEndTime ComplexEventEndTime_727(FIX::UTCTIMEONLY(23, 24, 45));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_727);
        ComplexEventTimes_NoComplexEventTimes_727.insert(ComplexEventEndTime_727.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_727(FIX::UTCTIMEONLY(10, 48, 41));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_727);
        ComplexEventTimes_NoComplexEventTimes_727.insert(ComplexEventStartTime_727.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_727);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_728;
        FIX::ComplexEventEndTime ComplexEventEndTime_728(FIX::UTCTIMEONLY(16, 39, 27));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_728);
        ComplexEventTimes_NoComplexEventTimes_728.insert(ComplexEventEndTime_728.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_728(FIX::UTCTIMEONLY(19, 53, 27));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_728);
        ComplexEventTimes_NoComplexEventTimes_728.insert(ComplexEventStartTime_728.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_728);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_172;
    FIX::EventDate EventDate_172("LOCALMKTDATE_1326584143");
    noEvents_0_0.set(EventDate_172);
    EvntGrp_NoEvents_172.insert(EventDate_172.getString());
    FIX::EventPx EventPx_172;
    EventPx_172.setString("16135940");
    noEvents_0_0.set(EventPx_172);
    EvntGrp_NoEvents_172.insert(EventPx_172.getString());
    FIX::EventText EventText_172("STRING_387393708");
    noEvents_0_0.set(EventText_172);
    EvntGrp_NoEvents_172.insert(EventText_172.getString());
    FIX::EventTime EventTime_172(FIX::UTCTIMESTAMP(19, 29, 37, 16, 7, 2010));
    noEvents_0_0.set(EventTime_172);
    EvntGrp_NoEvents_172.insert(EventTime_172.getString());
    FIX::EventType EventType_172(7);
    noEvents_0_0.set(EventType_172);
    EvntGrp_NoEvents_172.insert(EventType_172.getString());
    all_values.push_back(EvntGrp_NoEvents_172);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_173;
    FIX::EventDate EventDate_173("LOCALMKTDATE_293433481");
    noEvents_0_1.set(EventDate_173);
    EvntGrp_NoEvents_173.insert(EventDate_173.getString());
    FIX::EventPx EventPx_173;
    EventPx_173.setString("14141434");
    noEvents_0_1.set(EventPx_173);
    EvntGrp_NoEvents_173.insert(EventPx_173.getString());
    FIX::EventText EventText_173("STRING_1928614215");
    noEvents_0_1.set(EventText_173);
    EvntGrp_NoEvents_173.insert(EventText_173.getString());
    FIX::EventTime EventTime_173(FIX::UTCTIMESTAMP(21, 31, 6, 21, 7, 2016));
    noEvents_0_1.set(EventTime_173);
    EvntGrp_NoEvents_173.insert(EventTime_173.getString());
    FIX::EventType EventType_173(16);
    noEvents_0_1.set(EventType_173);
    EvntGrp_NoEvents_173.insert(EventType_173.getString());
    all_values.push_back(EvntGrp_NoEvents_173);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_182;
    FIX::InstrumentPartyID InstrumentPartyID_182("STRING_565041234");
    noInstrumentParties_0_0.set(InstrumentPartyID_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyID_182.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_182('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyIDSource_182.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_182(1944043948);
    noInstrumentParties_0_0.set(InstrumentPartyRole_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyRole_182.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_182);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353;
      FIX::InstrumentPartySubID InstrumentPartySubID_353("STRING_503112261");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_353);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubID_353.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_353(1082514373);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_353);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubIDType_353.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354;
      FIX::InstrumentPartySubID InstrumentPartySubID_354("STRING_604877790");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubID_354.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_354(1676133106);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubIDType_354.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355;
      FIX::InstrumentPartySubID InstrumentPartySubID_355("STRING_261614868");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubID_355.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_355(70988203);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubIDType_355.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_160;
    FIX::SecurityAltID SecurityAltID_160("STRING_1789963005");
    noSecurityAltID_0_0.set(SecurityAltID_160);
    SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltID_160.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_160("STRING_831236798");
    noSecurityAltID_0_0.set(SecurityAltIDSource_160);
    SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltIDSource_160.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_160);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_161;
    FIX::SecurityAltID SecurityAltID_161("STRING_1788949616");
    noSecurityAltID_0_1.set(SecurityAltID_161);
    SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltID_161.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_161("STRING_1143231434");
    noSecurityAltID_0_1.set(SecurityAltIDSource_161);
    SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltIDSource_161.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_161);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_172;
  FIX::SecurityXML SecurityXML_173("XMLDATA_1655809822");
  msg.set(SecurityXML_173);
  FIX::SecurityXMLLen SecurityXMLLen_86(849438702);
  msg.set(SecurityXMLLen_86);
  FIX::SecurityXMLSchema SecurityXMLSchema_86("STRING_1739335212");
  msg.set(SecurityXMLSchema_86);
  SecurityXML_172.insert(SecurityXMLSchema_86.getString());
  all_values.push_back(SecurityXML_172);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_15;
  FIX::DeliveryForm DeliveryForm_15(1);
  msg.set(DeliveryForm_15);
  InstrumentExtension_15.insert(DeliveryForm_15.getString());
  FIX::PctAtRisk PctAtRisk_15;
  PctAtRisk_15.setString("21.830000");
  msg.set(PctAtRisk_15);
  InstrumentExtension_15.insert(PctAtRisk_15.getString());
  all_values.push_back(InstrumentExtension_15);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_29;
    FIX::InstrAttribType InstrAttribType_29(28);
    noInstrAttrib_0_0.set(InstrAttribType_29);
    AttrbGrp_NoInstrAttrib_29.insert(InstrAttribType_29.getString());
    FIX::InstrAttribValue InstrAttribValue_29("STRING_925275784");
    noInstrAttrib_0_0.set(InstrAttribValue_29);
    AttrbGrp_NoInstrAttrib_29.insert(InstrAttribValue_29.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_29);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_30;
    FIX::InstrAttribType InstrAttribType_30(16);
    noInstrAttrib_0_1.set(InstrAttribType_30);
    AttrbGrp_NoInstrAttrib_30.insert(InstrAttribType_30.getString());
    FIX::InstrAttribValue InstrAttribValue_30("STRING_368255099");
    noInstrAttrib_0_1.set(InstrAttribValue_30);
    AttrbGrp_NoInstrAttrib_30.insert(InstrAttribValue_30.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_30);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_31;
    FIX::InstrAttribType InstrAttribType_31(4);
    noInstrAttrib_0_2.set(InstrAttribType_31);
    AttrbGrp_NoInstrAttrib_31.insert(InstrAttribType_31.getString());
    FIX::InstrAttribValue InstrAttribValue_31("STRING_370359348");
    noInstrAttrib_0_2.set(InstrAttribValue_31);
    AttrbGrp_NoInstrAttrib_31.insert(InstrAttribValue_31.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_31);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_136;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_136("DATA_1491084289");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingIssuer_136.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_136(101600995);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingIssuerLen_136.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_136("DATA_440078106");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDesc_136.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_136(2056125524);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDescLen_136.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_136;
    UnderlyingAdjustedQuantity_136.setString("13641741");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_136);
    UnderlyingInstrument_136.insert(UnderlyingAdjustedQuantity_136.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_136;
    UnderlyingAllocationPercent_136.setString("84.070000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_136);
    UnderlyingInstrument_136.insert(UnderlyingAllocationPercent_136.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_136;
    UnderlyingAttachmentPoint_136.setString("73.070000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_136);
    UnderlyingInstrument_136.insert(UnderlyingAttachmentPoint_136.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_136("STRING_1867286403");
    noUnderlyings_0_0.set(UnderlyingCFICode_136);
    UnderlyingInstrument_136.insert(UnderlyingCFICode_136.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_136("STRING_1319152780");
    noUnderlyings_0_0.set(UnderlyingCPProgram_136);
    UnderlyingInstrument_136.insert(UnderlyingCPProgram_136.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_136("STRING_1772755097");
    noUnderlyings_0_0.set(UnderlyingCPRegType_136);
    UnderlyingInstrument_136.insert(UnderlyingCPRegType_136.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_136;
    UnderlyingCapValue_136.setString("13959358");
    noUnderlyings_0_0.set(UnderlyingCapValue_136);
    UnderlyingInstrument_136.insert(UnderlyingCapValue_136.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_136;
    UnderlyingCashAmount_136.setString("15807676");
    noUnderlyings_0_0.set(UnderlyingCashAmount_136);
    UnderlyingInstrument_136.insert(UnderlyingCashAmount_136.getString());
    FIX::UnderlyingCashType UnderlyingCashType_136("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_136);
    UnderlyingInstrument_136.insert(UnderlyingCashType_136.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_136;
    UnderlyingContractMultiplier_136.setString("13119790");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_136);
    UnderlyingInstrument_136.insert(UnderlyingContractMultiplier_136.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_136(1223247006);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_136);
    UnderlyingInstrument_136.insert(UnderlyingContractMultiplierUnit_136.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_136("COUNTRY_527496450");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingCountryOfIssue_136.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_136("LOCALMKTDATE_953444996");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_136);
    UnderlyingInstrument_136.insert(UnderlyingCouponPaymentDate_136.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_136;
    UnderlyingCouponRate_136.setString("47.920000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_136);
    UnderlyingInstrument_136.insert(UnderlyingCouponRate_136.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_136("STRING_35822624");
    noUnderlyings_0_0.set(UnderlyingCreditRating_136);
    UnderlyingInstrument_136.insert(UnderlyingCreditRating_136.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_136("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_136);
    UnderlyingInstrument_136.insert(UnderlyingCurrency_136.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_136;
    UnderlyingCurrentValue_136.setString("5856801");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_136);
    UnderlyingInstrument_136.insert(UnderlyingCurrentValue_136.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_136;
    UnderlyingDetachmentPoint_136.setString("22.340000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_136);
    UnderlyingInstrument_136.insert(UnderlyingDetachmentPoint_136.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_136;
    UnderlyingDirtyPrice_136.setString("8168413");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_136);
    UnderlyingInstrument_136.insert(UnderlyingDirtyPrice_136.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_136;
    UnderlyingEndPrice_136.setString("9166682");
    noUnderlyings_0_0.set(UnderlyingEndPrice_136);
    UnderlyingInstrument_136.insert(UnderlyingEndPrice_136.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_136;
    UnderlyingEndValue_136.setString("17235480");
    noUnderlyings_0_0.set(UnderlyingEndValue_136);
    UnderlyingInstrument_136.insert(UnderlyingEndValue_136.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_136(1438195581);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_136);
    UnderlyingInstrument_136.insert(UnderlyingExerciseStyle_136.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_136;
    UnderlyingFXRate_136.setString("12849233");
    noUnderlyings_0_0.set(UnderlyingFXRate_136);
    UnderlyingInstrument_136.insert(UnderlyingFXRate_136.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_136('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_136);
    UnderlyingInstrument_136.insert(UnderlyingFXRateCalc_136.getString());
    FIX::UnderlyingFactor UnderlyingFactor_136;
    UnderlyingFactor_136.setString("18085549");
    noUnderlyings_0_0.set(UnderlyingFactor_136);
    UnderlyingInstrument_136.insert(UnderlyingFactor_136.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_136(1761481535);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_136);
    UnderlyingInstrument_136.insert(UnderlyingFlowScheduleType_136.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_136("STRING_1755875643");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_136);
    UnderlyingInstrument_136.insert(UnderlyingInstrRegistry_136.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_136("LOCALMKTDATE_1910155925");
    noUnderlyings_0_0.set(UnderlyingIssueDate_136);
    UnderlyingInstrument_136.insert(UnderlyingIssueDate_136.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_136("STRING_54075994");
    noUnderlyings_0_0.set(UnderlyingIssuer_136);
    UnderlyingInstrument_136.insert(UnderlyingIssuer_136.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_136("STRING_1664517519");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingLocaleOfIssue_136.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_136("LOCALMKTDATE_1126846419");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityDate_136.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_136("MONTHYEAR_290714401");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityMonthYear_136.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_136("TZTIMEONLY_684911178");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityTime_136.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_136;
    UnderlyingNotionalPercentageOutstanding_136.setString("91.750000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_136);
    UnderlyingInstrument_136.insert(UnderlyingNotionalPercentageOutstanding_136.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_136('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_136);
    UnderlyingInstrument_136.insert(UnderlyingOptAttribute_136.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_136;
    UnderlyingOriginalNotionalPercentageOutstanding_136.setString("26.270000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_136);
    UnderlyingInstrument_136.insert(UnderlyingOriginalNotionalPercentageOutstanding_136.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_136("STRING_95101389");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_136);
    UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasure_136.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_136;
    UnderlyingPriceUnitOfMeasureQty_136.setString("10431511");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_136);
    UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasureQty_136.getString());
    FIX::UnderlyingProduct UnderlyingProduct_136(6442279);
    noUnderlyings_0_0.set(UnderlyingProduct_136);
    UnderlyingInstrument_136.insert(UnderlyingProduct_136.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_136(1407080417);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_136);
    UnderlyingInstrument_136.insert(UnderlyingPutOrCall_136.getString());
    FIX::UnderlyingPx UnderlyingPx_136;
    UnderlyingPx_136.setString("1189145");
    noUnderlyings_0_0.set(UnderlyingPx_136);
    UnderlyingInstrument_136.insert(UnderlyingPx_136.getString());
    FIX::UnderlyingQty UnderlyingQty_136;
    UnderlyingQty_136.setString("5339387");
    noUnderlyings_0_0.set(UnderlyingQty_136);
    UnderlyingInstrument_136.insert(UnderlyingQty_136.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_136("LOCALMKTDATE_213041766");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_136);
    UnderlyingInstrument_136.insert(UnderlyingRedemptionDate_136.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_136("STRING_337909332");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_136);
    UnderlyingInstrument_136.insert(UnderlyingRepoCollateralSecurityType_136.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_136;
    UnderlyingRepurchaseRate_136.setString("13.530000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_136);
    UnderlyingInstrument_136.insert(UnderlyingRepurchaseRate_136.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_136(2015925464);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_136);
    UnderlyingInstrument_136.insert(UnderlyingRepurchaseTerm_136.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_136("STRING_148755689");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_136);
    UnderlyingInstrument_136.insert(UnderlyingRestructuringType_136.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_136("STRING_1155441517");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityDesc_136.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_136("EXCHANGE_666714050");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityExchange_136.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_136("STRING_965597015");
    noUnderlyings_0_0.set(UnderlyingSecurityID_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityID_136.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_136("STRING_2072109788");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityIDSource_136.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_136("STRING_242778421");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_136);
    UnderlyingInstrument_136.insert(UnderlyingSecuritySubType_136.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_136("STRING_256308949");
    noUnderlyings_0_0.set(UnderlyingSecurityType_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityType_136.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_136("STRING_1209549511");
    noUnderlyings_0_0.set(UnderlyingSeniority_136);
    UnderlyingInstrument_136.insert(UnderlyingSeniority_136.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_136("STRING_507569774");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_136);
    UnderlyingInstrument_136.insert(UnderlyingSettlMethod_136.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_136(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_136);
    UnderlyingInstrument_136.insert(UnderlyingSettlementType_136.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_136;
    UnderlyingStartValue_136.setString("8235473");
    noUnderlyings_0_0.set(UnderlyingStartValue_136);
    UnderlyingInstrument_136.insert(UnderlyingStartValue_136.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_136("STRING_115961769");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingStateOrProvinceOfIssue_136.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_136("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_136);
    UnderlyingInstrument_136.insert(UnderlyingStrikeCurrency_136.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_136;
    UnderlyingStrikePrice_136.setString("17804792");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_136);
    UnderlyingInstrument_136.insert(UnderlyingStrikePrice_136.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_136("STRING_806898928");
    noUnderlyings_0_0.set(UnderlyingSymbol_136);
    UnderlyingInstrument_136.insert(UnderlyingSymbol_136.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_136("STRING_1168337793");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_136);
    UnderlyingInstrument_136.insert(UnderlyingSymbolSfx_136.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_136("STRING_317906818");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_136);
    UnderlyingInstrument_136.insert(UnderlyingTimeUnit_136.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_136("STRING_1653548103");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_136);
    UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasure_136.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_136;
    UnderlyingUnitOfMeasureQty_136.setString("6307213");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_136);
    UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasureQty_136.getString());
    all_values.push_back(UnderlyingInstrument_136);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_273;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_273("STRING_1748649492");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_273);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltID_273.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_273("STRING_1673872509");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_273);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltIDSource_273.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_274;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_274("STRING_634531724");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_274);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltID_274.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_274("STRING_1008246261");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_274);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltIDSource_274.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_269;
      FIX::UnderlyingStipType UnderlyingStipType_269("STRING_1168470453");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipType_269.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_269("STRING_1221288027");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipValue_269.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_269);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_270;
      FIX::UnderlyingStipType UnderlyingStipType_270("STRING_2130696382");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipType_270.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_270("STRING_1738231806");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipValue_270.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_270);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_261;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_261("STRING_131968423");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyID_261.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_261('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyIDSource_261.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_261(1756443894);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyRole_261.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_261);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_525("STRING_670815816");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_525);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubID_525.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_525(1999222315);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_525);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubIDType_525.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_526("STRING_1353874388");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_526);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubID_526.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_526(1880365327);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_526);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubIDType_526.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_262;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_262("STRING_359308442");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyID_262.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_262('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyIDSource_262.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_262(556429077);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyRole_262.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_262);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_527("STRING_951307127");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_527);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubID_527.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_527(1434052470);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_527);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubIDType_527.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_528("STRING_108265852");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_528);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubID_528.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_528(1758206055);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_528);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubIDType_528.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_529("STRING_454906615");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_529);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubID_529.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_529(426172670);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_529);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubIDType_529.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_137;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_137("DATA_1264270510");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingIssuer_137.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_137(1085627942);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingIssuerLen_137.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_137("DATA_1054262116");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingSecurityDesc_137.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_137(865436354);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_137);
    UnderlyingInstrument_137.insert(EncodedUnderlyingSecurityDescLen_137.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_137;
    UnderlyingAdjustedQuantity_137.setString("6120168");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_137);
    UnderlyingInstrument_137.insert(UnderlyingAdjustedQuantity_137.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_137;
    UnderlyingAllocationPercent_137.setString("38.400000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_137);
    UnderlyingInstrument_137.insert(UnderlyingAllocationPercent_137.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_137;
    UnderlyingAttachmentPoint_137.setString("26.160000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_137);
    UnderlyingInstrument_137.insert(UnderlyingAttachmentPoint_137.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_137("STRING_257320206");
    noUnderlyings_0_1.set(UnderlyingCFICode_137);
    UnderlyingInstrument_137.insert(UnderlyingCFICode_137.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_137("STRING_709780646");
    noUnderlyings_0_1.set(UnderlyingCPProgram_137);
    UnderlyingInstrument_137.insert(UnderlyingCPProgram_137.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_137("STRING_947486995");
    noUnderlyings_0_1.set(UnderlyingCPRegType_137);
    UnderlyingInstrument_137.insert(UnderlyingCPRegType_137.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_137;
    UnderlyingCapValue_137.setString("2405329");
    noUnderlyings_0_1.set(UnderlyingCapValue_137);
    UnderlyingInstrument_137.insert(UnderlyingCapValue_137.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_137;
    UnderlyingCashAmount_137.setString("3005288");
    noUnderlyings_0_1.set(UnderlyingCashAmount_137);
    UnderlyingInstrument_137.insert(UnderlyingCashAmount_137.getString());
    FIX::UnderlyingCashType UnderlyingCashType_137("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_137);
    UnderlyingInstrument_137.insert(UnderlyingCashType_137.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_137;
    UnderlyingContractMultiplier_137.setString("3725013");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_137);
    UnderlyingInstrument_137.insert(UnderlyingContractMultiplier_137.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_137(1046718480);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_137);
    UnderlyingInstrument_137.insert(UnderlyingContractMultiplierUnit_137.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_137("COUNTRY_1646177086");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingCountryOfIssue_137.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_137("LOCALMKTDATE_1470066803");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_137);
    UnderlyingInstrument_137.insert(UnderlyingCouponPaymentDate_137.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_137;
    UnderlyingCouponRate_137.setString("42.960000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_137);
    UnderlyingInstrument_137.insert(UnderlyingCouponRate_137.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_137("STRING_1497915753");
    noUnderlyings_0_1.set(UnderlyingCreditRating_137);
    UnderlyingInstrument_137.insert(UnderlyingCreditRating_137.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_137("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_137);
    UnderlyingInstrument_137.insert(UnderlyingCurrency_137.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_137;
    UnderlyingCurrentValue_137.setString("18572241");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_137);
    UnderlyingInstrument_137.insert(UnderlyingCurrentValue_137.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_137;
    UnderlyingDetachmentPoint_137.setString("21.620000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_137);
    UnderlyingInstrument_137.insert(UnderlyingDetachmentPoint_137.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_137;
    UnderlyingDirtyPrice_137.setString("20068450");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_137);
    UnderlyingInstrument_137.insert(UnderlyingDirtyPrice_137.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_137;
    UnderlyingEndPrice_137.setString("1850107");
    noUnderlyings_0_1.set(UnderlyingEndPrice_137);
    UnderlyingInstrument_137.insert(UnderlyingEndPrice_137.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_137;
    UnderlyingEndValue_137.setString("7515356");
    noUnderlyings_0_1.set(UnderlyingEndValue_137);
    UnderlyingInstrument_137.insert(UnderlyingEndValue_137.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_137(1293413874);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_137);
    UnderlyingInstrument_137.insert(UnderlyingExerciseStyle_137.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_137;
    UnderlyingFXRate_137.setString("2932766");
    noUnderlyings_0_1.set(UnderlyingFXRate_137);
    UnderlyingInstrument_137.insert(UnderlyingFXRate_137.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_137('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_137);
    UnderlyingInstrument_137.insert(UnderlyingFXRateCalc_137.getString());
    FIX::UnderlyingFactor UnderlyingFactor_137;
    UnderlyingFactor_137.setString("17483204");
    noUnderlyings_0_1.set(UnderlyingFactor_137);
    UnderlyingInstrument_137.insert(UnderlyingFactor_137.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_137(719449281);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_137);
    UnderlyingInstrument_137.insert(UnderlyingFlowScheduleType_137.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_137("STRING_1626528559");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_137);
    UnderlyingInstrument_137.insert(UnderlyingInstrRegistry_137.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_137("LOCALMKTDATE_686464784");
    noUnderlyings_0_1.set(UnderlyingIssueDate_137);
    UnderlyingInstrument_137.insert(UnderlyingIssueDate_137.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_137("STRING_1773711397");
    noUnderlyings_0_1.set(UnderlyingIssuer_137);
    UnderlyingInstrument_137.insert(UnderlyingIssuer_137.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_137("STRING_344481266");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingLocaleOfIssue_137.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_137("LOCALMKTDATE_1298481588");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityDate_137.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_137("MONTHYEAR_1315021590");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityMonthYear_137.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_137("TZTIMEONLY_70680234");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_137);
    UnderlyingInstrument_137.insert(UnderlyingMaturityTime_137.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_137;
    UnderlyingNotionalPercentageOutstanding_137.setString("17.940000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_137);
    UnderlyingInstrument_137.insert(UnderlyingNotionalPercentageOutstanding_137.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_137('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_137);
    UnderlyingInstrument_137.insert(UnderlyingOptAttribute_137.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_137;
    UnderlyingOriginalNotionalPercentageOutstanding_137.setString("72.290000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_137);
    UnderlyingInstrument_137.insert(UnderlyingOriginalNotionalPercentageOutstanding_137.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_137("STRING_1796334735");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_137);
    UnderlyingInstrument_137.insert(UnderlyingPriceUnitOfMeasure_137.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_137;
    UnderlyingPriceUnitOfMeasureQty_137.setString("1778473");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_137);
    UnderlyingInstrument_137.insert(UnderlyingPriceUnitOfMeasureQty_137.getString());
    FIX::UnderlyingProduct UnderlyingProduct_137(907900421);
    noUnderlyings_0_1.set(UnderlyingProduct_137);
    UnderlyingInstrument_137.insert(UnderlyingProduct_137.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_137(21352451);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_137);
    UnderlyingInstrument_137.insert(UnderlyingPutOrCall_137.getString());
    FIX::UnderlyingPx UnderlyingPx_137;
    UnderlyingPx_137.setString("12245658");
    noUnderlyings_0_1.set(UnderlyingPx_137);
    UnderlyingInstrument_137.insert(UnderlyingPx_137.getString());
    FIX::UnderlyingQty UnderlyingQty_137;
    UnderlyingQty_137.setString("4065938");
    noUnderlyings_0_1.set(UnderlyingQty_137);
    UnderlyingInstrument_137.insert(UnderlyingQty_137.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_137("LOCALMKTDATE_1491419254");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_137);
    UnderlyingInstrument_137.insert(UnderlyingRedemptionDate_137.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_137("STRING_794616520");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_137);
    UnderlyingInstrument_137.insert(UnderlyingRepoCollateralSecurityType_137.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_137;
    UnderlyingRepurchaseRate_137.setString("96.120000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_137);
    UnderlyingInstrument_137.insert(UnderlyingRepurchaseRate_137.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_137(20393149);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_137);
    UnderlyingInstrument_137.insert(UnderlyingRepurchaseTerm_137.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_137("STRING_97548847");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_137);
    UnderlyingInstrument_137.insert(UnderlyingRestructuringType_137.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_137("STRING_1614250160");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityDesc_137.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_137("EXCHANGE_1968105311");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityExchange_137.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_137("STRING_2104393900");
    noUnderlyings_0_1.set(UnderlyingSecurityID_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityID_137.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_137("STRING_1799260919");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityIDSource_137.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_137("STRING_572157304");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_137);
    UnderlyingInstrument_137.insert(UnderlyingSecuritySubType_137.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_137("STRING_1250324126");
    noUnderlyings_0_1.set(UnderlyingSecurityType_137);
    UnderlyingInstrument_137.insert(UnderlyingSecurityType_137.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_137("STRING_2092537530");
    noUnderlyings_0_1.set(UnderlyingSeniority_137);
    UnderlyingInstrument_137.insert(UnderlyingSeniority_137.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_137("STRING_934415353");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_137);
    UnderlyingInstrument_137.insert(UnderlyingSettlMethod_137.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_137(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_137);
    UnderlyingInstrument_137.insert(UnderlyingSettlementType_137.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_137;
    UnderlyingStartValue_137.setString("6645031");
    noUnderlyings_0_1.set(UnderlyingStartValue_137);
    UnderlyingInstrument_137.insert(UnderlyingStartValue_137.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_137("STRING_413460265");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_137);
    UnderlyingInstrument_137.insert(UnderlyingStateOrProvinceOfIssue_137.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_137("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_137);
    UnderlyingInstrument_137.insert(UnderlyingStrikeCurrency_137.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_137;
    UnderlyingStrikePrice_137.setString("7579415");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_137);
    UnderlyingInstrument_137.insert(UnderlyingStrikePrice_137.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_137("STRING_688623693");
    noUnderlyings_0_1.set(UnderlyingSymbol_137);
    UnderlyingInstrument_137.insert(UnderlyingSymbol_137.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_137("STRING_1605752503");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_137);
    UnderlyingInstrument_137.insert(UnderlyingSymbolSfx_137.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_137("STRING_828621765");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_137);
    UnderlyingInstrument_137.insert(UnderlyingTimeUnit_137.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_137("STRING_96941840");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_137);
    UnderlyingInstrument_137.insert(UnderlyingUnitOfMeasure_137.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_137;
    UnderlyingUnitOfMeasureQty_137.setString("14830710");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_137);
    UnderlyingInstrument_137.insert(UnderlyingUnitOfMeasureQty_137.getString());
    all_values.push_back(UnderlyingInstrument_137);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_275;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_275("STRING_1893276575");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_275);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltID_275.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_275("STRING_1660918483");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_275);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltIDSource_275.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_276;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_276("STRING_607205767");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_276);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltID_276.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_276("STRING_1914629026");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_276);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltIDSource_276.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_271;
      FIX::UnderlyingStipType UnderlyingStipType_271("STRING_1013799626");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_271);
      UnderlyingStipulations_NoUnderlyingStips_271.insert(UnderlyingStipType_271.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_271("STRING_1258564632");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_271);
      UnderlyingStipulations_NoUnderlyingStips_271.insert(UnderlyingStipValue_271.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_271);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_263;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_263("STRING_770825591");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyID_263.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_263('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyIDSource_263.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_263(1630166076);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyRole_263.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_263);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_530("STRING_1099579444");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_530);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubID_530.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_530(1587076328);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_530);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubIDType_530.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_531("STRING_2036853022");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_531);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubID_531.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_531(1671736748);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_531);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubIDType_531.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_532("STRING_689916806");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_532);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubID_532.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_532(1981906904);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_532);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubIDType_532.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_264;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_264("STRING_458668454");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyID_264.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_264('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyIDSource_264.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_264(498926419);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyRole_264.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_264);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_533("STRING_931219880");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_533);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubID_533.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_533(789657332);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_533);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubIDType_533.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_138;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_138("DATA_1630070250");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingIssuer_138.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_138(1619843573);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingIssuerLen_138.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_138("DATA_247926187");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingSecurityDesc_138.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_138(311208367);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_138);
    UnderlyingInstrument_138.insert(EncodedUnderlyingSecurityDescLen_138.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_138;
    UnderlyingAdjustedQuantity_138.setString("17167854");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_138);
    UnderlyingInstrument_138.insert(UnderlyingAdjustedQuantity_138.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_138;
    UnderlyingAllocationPercent_138.setString("72.780000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_138);
    UnderlyingInstrument_138.insert(UnderlyingAllocationPercent_138.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_138;
    UnderlyingAttachmentPoint_138.setString("37.130000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_138);
    UnderlyingInstrument_138.insert(UnderlyingAttachmentPoint_138.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_138("STRING_1462578340");
    noUnderlyings_0_2.set(UnderlyingCFICode_138);
    UnderlyingInstrument_138.insert(UnderlyingCFICode_138.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_138("STRING_1244432114");
    noUnderlyings_0_2.set(UnderlyingCPProgram_138);
    UnderlyingInstrument_138.insert(UnderlyingCPProgram_138.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_138("STRING_617719481");
    noUnderlyings_0_2.set(UnderlyingCPRegType_138);
    UnderlyingInstrument_138.insert(UnderlyingCPRegType_138.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_138;
    UnderlyingCapValue_138.setString("12297237");
    noUnderlyings_0_2.set(UnderlyingCapValue_138);
    UnderlyingInstrument_138.insert(UnderlyingCapValue_138.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_138;
    UnderlyingCashAmount_138.setString("19824328");
    noUnderlyings_0_2.set(UnderlyingCashAmount_138);
    UnderlyingInstrument_138.insert(UnderlyingCashAmount_138.getString());
    FIX::UnderlyingCashType UnderlyingCashType_138("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_138);
    UnderlyingInstrument_138.insert(UnderlyingCashType_138.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_138;
    UnderlyingContractMultiplier_138.setString("3408047");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_138);
    UnderlyingInstrument_138.insert(UnderlyingContractMultiplier_138.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_138(1367566402);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_138);
    UnderlyingInstrument_138.insert(UnderlyingContractMultiplierUnit_138.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_138("COUNTRY_254861050");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingCountryOfIssue_138.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_138("LOCALMKTDATE_1619762483");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_138);
    UnderlyingInstrument_138.insert(UnderlyingCouponPaymentDate_138.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_138;
    UnderlyingCouponRate_138.setString("88.300000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_138);
    UnderlyingInstrument_138.insert(UnderlyingCouponRate_138.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_138("STRING_492453153");
    noUnderlyings_0_2.set(UnderlyingCreditRating_138);
    UnderlyingInstrument_138.insert(UnderlyingCreditRating_138.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_138("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_138);
    UnderlyingInstrument_138.insert(UnderlyingCurrency_138.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_138;
    UnderlyingCurrentValue_138.setString("3818225");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_138);
    UnderlyingInstrument_138.insert(UnderlyingCurrentValue_138.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_138;
    UnderlyingDetachmentPoint_138.setString("13.800000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_138);
    UnderlyingInstrument_138.insert(UnderlyingDetachmentPoint_138.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_138;
    UnderlyingDirtyPrice_138.setString("9797583");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_138);
    UnderlyingInstrument_138.insert(UnderlyingDirtyPrice_138.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_138;
    UnderlyingEndPrice_138.setString("2162457");
    noUnderlyings_0_2.set(UnderlyingEndPrice_138);
    UnderlyingInstrument_138.insert(UnderlyingEndPrice_138.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_138;
    UnderlyingEndValue_138.setString("5547798");
    noUnderlyings_0_2.set(UnderlyingEndValue_138);
    UnderlyingInstrument_138.insert(UnderlyingEndValue_138.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_138(373352444);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_138);
    UnderlyingInstrument_138.insert(UnderlyingExerciseStyle_138.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_138;
    UnderlyingFXRate_138.setString("7151722");
    noUnderlyings_0_2.set(UnderlyingFXRate_138);
    UnderlyingInstrument_138.insert(UnderlyingFXRate_138.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_138('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_138);
    UnderlyingInstrument_138.insert(UnderlyingFXRateCalc_138.getString());
    FIX::UnderlyingFactor UnderlyingFactor_138;
    UnderlyingFactor_138.setString("13045723");
    noUnderlyings_0_2.set(UnderlyingFactor_138);
    UnderlyingInstrument_138.insert(UnderlyingFactor_138.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_138(1504829535);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_138);
    UnderlyingInstrument_138.insert(UnderlyingFlowScheduleType_138.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_138("STRING_909495155");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_138);
    UnderlyingInstrument_138.insert(UnderlyingInstrRegistry_138.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_138("LOCALMKTDATE_776932249");
    noUnderlyings_0_2.set(UnderlyingIssueDate_138);
    UnderlyingInstrument_138.insert(UnderlyingIssueDate_138.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_138("STRING_1752755723");
    noUnderlyings_0_2.set(UnderlyingIssuer_138);
    UnderlyingInstrument_138.insert(UnderlyingIssuer_138.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_138("STRING_1220703522");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingLocaleOfIssue_138.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_138("LOCALMKTDATE_346234015");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityDate_138.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_138("MONTHYEAR_1336269353");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityMonthYear_138.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_138("TZTIMEONLY_1231217235");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_138);
    UnderlyingInstrument_138.insert(UnderlyingMaturityTime_138.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_138;
    UnderlyingNotionalPercentageOutstanding_138.setString("23.550000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_138);
    UnderlyingInstrument_138.insert(UnderlyingNotionalPercentageOutstanding_138.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_138('4');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_138);
    UnderlyingInstrument_138.insert(UnderlyingOptAttribute_138.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_138;
    UnderlyingOriginalNotionalPercentageOutstanding_138.setString("67.160000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_138);
    UnderlyingInstrument_138.insert(UnderlyingOriginalNotionalPercentageOutstanding_138.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_138("STRING_891052426");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_138);
    UnderlyingInstrument_138.insert(UnderlyingPriceUnitOfMeasure_138.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_138;
    UnderlyingPriceUnitOfMeasureQty_138.setString("2681669");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_138);
    UnderlyingInstrument_138.insert(UnderlyingPriceUnitOfMeasureQty_138.getString());
    FIX::UnderlyingProduct UnderlyingProduct_138(1332972176);
    noUnderlyings_0_2.set(UnderlyingProduct_138);
    UnderlyingInstrument_138.insert(UnderlyingProduct_138.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_138(1231857128);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_138);
    UnderlyingInstrument_138.insert(UnderlyingPutOrCall_138.getString());
    FIX::UnderlyingPx UnderlyingPx_138;
    UnderlyingPx_138.setString("16357333");
    noUnderlyings_0_2.set(UnderlyingPx_138);
    UnderlyingInstrument_138.insert(UnderlyingPx_138.getString());
    FIX::UnderlyingQty UnderlyingQty_138;
    UnderlyingQty_138.setString("15878332");
    noUnderlyings_0_2.set(UnderlyingQty_138);
    UnderlyingInstrument_138.insert(UnderlyingQty_138.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_138("LOCALMKTDATE_704135964");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_138);
    UnderlyingInstrument_138.insert(UnderlyingRedemptionDate_138.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_138("STRING_338498578");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_138);
    UnderlyingInstrument_138.insert(UnderlyingRepoCollateralSecurityType_138.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_138;
    UnderlyingRepurchaseRate_138.setString("63.800000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_138);
    UnderlyingInstrument_138.insert(UnderlyingRepurchaseRate_138.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_138(1275994243);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_138);
    UnderlyingInstrument_138.insert(UnderlyingRepurchaseTerm_138.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_138("STRING_628340089");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_138);
    UnderlyingInstrument_138.insert(UnderlyingRestructuringType_138.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_138("STRING_314625259");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityDesc_138.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_138("EXCHANGE_1372105623");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityExchange_138.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_138("STRING_1608098406");
    noUnderlyings_0_2.set(UnderlyingSecurityID_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityID_138.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_138("STRING_530871043");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityIDSource_138.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_138("STRING_1926885457");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_138);
    UnderlyingInstrument_138.insert(UnderlyingSecuritySubType_138.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_138("STRING_1981450850");
    noUnderlyings_0_2.set(UnderlyingSecurityType_138);
    UnderlyingInstrument_138.insert(UnderlyingSecurityType_138.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_138("STRING_1246043246");
    noUnderlyings_0_2.set(UnderlyingSeniority_138);
    UnderlyingInstrument_138.insert(UnderlyingSeniority_138.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_138("STRING_1206310362");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_138);
    UnderlyingInstrument_138.insert(UnderlyingSettlMethod_138.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_138(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_138);
    UnderlyingInstrument_138.insert(UnderlyingSettlementType_138.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_138;
    UnderlyingStartValue_138.setString("6033891");
    noUnderlyings_0_2.set(UnderlyingStartValue_138);
    UnderlyingInstrument_138.insert(UnderlyingStartValue_138.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_138("STRING_2115805517");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_138);
    UnderlyingInstrument_138.insert(UnderlyingStateOrProvinceOfIssue_138.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_138("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_138);
    UnderlyingInstrument_138.insert(UnderlyingStrikeCurrency_138.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_138;
    UnderlyingStrikePrice_138.setString("11890253");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_138);
    UnderlyingInstrument_138.insert(UnderlyingStrikePrice_138.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_138("STRING_114222142");
    noUnderlyings_0_2.set(UnderlyingSymbol_138);
    UnderlyingInstrument_138.insert(UnderlyingSymbol_138.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_138("STRING_1544930562");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_138);
    UnderlyingInstrument_138.insert(UnderlyingSymbolSfx_138.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_138("STRING_272758979");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_138);
    UnderlyingInstrument_138.insert(UnderlyingTimeUnit_138.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_138("STRING_1923034498");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_138);
    UnderlyingInstrument_138.insert(UnderlyingUnitOfMeasure_138.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_138;
    UnderlyingUnitOfMeasureQty_138.setString("19781483");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_138);
    UnderlyingInstrument_138.insert(UnderlyingUnitOfMeasureQty_138.getString());
    all_values.push_back(UnderlyingInstrument_138);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_277;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_277("STRING_666603276");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_277);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltID_277.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_277("STRING_98831727");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_277);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltIDSource_277.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_278;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_278("STRING_1307184223");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltID_278.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_278("STRING_1898460404");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltIDSource_278.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_272;
      FIX::UnderlyingStipType UnderlyingStipType_272("STRING_747533802");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_272);
      UnderlyingStipulations_NoUnderlyingStips_272.insert(UnderlyingStipType_272.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_272("STRING_455112720");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_272);
      UnderlyingStipulations_NoUnderlyingStips_272.insert(UnderlyingStipValue_272.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_272);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_273;
      FIX::UnderlyingStipType UnderlyingStipType_273("STRING_2073063701");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_273);
      UnderlyingStipulations_NoUnderlyingStips_273.insert(UnderlyingStipType_273.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_273("STRING_680336534");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_273);
      UnderlyingStipulations_NoUnderlyingStips_273.insert(UnderlyingStipValue_273.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_273);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_265;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_265("STRING_553920142");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyID_265.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_265('9');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyIDSource_265.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_265(955728939);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyRole_265.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_265);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_534("STRING_1525832836");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_534);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubID_534.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_534(735130749);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_534);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubIDType_534.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_535("STRING_1995985750");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_535);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubID_535.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_535(624392434);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_535);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubIDType_535.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_536("STRING_1941441111");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_536);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubID_536.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_536(987041628);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_536);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubIDType_536.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_266;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_266("STRING_1227781568");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyID_266.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_266('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyIDSource_266.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_266(755029756);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyRole_266.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_266);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_537("STRING_951304724");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_537);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubID_537.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_537(869251898);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_537);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubIDType_537.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_538("STRING_833889690");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_538);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubID_538.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_538(1224063703);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_538);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubIDType_538.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_539("STRING_644802748");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_539);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubID_539.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_539(664554424);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_539);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubIDType_539.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_267;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_267("STRING_1198275751");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyID_267.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_267('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyIDSource_267.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_267(763386151);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyRole_267.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_267);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_540("STRING_1062382781");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_540);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubID_540.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_540(350467626);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_540);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubIDType_540.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
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
