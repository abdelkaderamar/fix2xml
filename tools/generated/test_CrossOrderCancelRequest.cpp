#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CrossOrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CrossOrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelRequest_0;
  FIX::CrossID CrossID_1("STRING_1037970508");
  msg.set(CrossID_1);
  CrossOrderCancelRequest_0.insert(CrossID_1.getString());
  FIX::CrossPrioritization CrossPrioritization_1(0);
  msg.set(CrossPrioritization_1);
  CrossOrderCancelRequest_0.insert(CrossPrioritization_1.getString());
  FIX::CrossType CrossType_1(1);
  msg.set(CrossType_1);
  CrossOrderCancelRequest_0.insert(CrossType_1.getString());
  FIX::HostCrossID HostCrossID_1("STRING_961733635");
  msg.set(HostCrossID_1);
  CrossOrderCancelRequest_0.insert(HostCrossID_1.getString());
  FIX::OrderID OrderID_17("STRING_1157359803");
  msg.set(OrderID_17);
  CrossOrderCancelRequest_0.insert(OrderID_17.getString());
  FIX::OrigCrossID OrigCrossID_1("STRING_796558409");
  msg.set(OrigCrossID_1);
  CrossOrderCancelRequest_0.insert(OrigCrossID_1.getString());
  FIX::TransactTime TransactTime_15(FIX::UTCTIMESTAMP(7, 17, 44, 4, 2, 2001));
  msg.set(TransactTime_15);
  CrossOrderCancelRequest_0.insert(TransactTime_15.getString());
  all_values.push_back(CrossOrderCancelRequest_0);

  all_compo_names.insert("CrossOrderCancelRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_29;
    FIX::EncodedLegIssuer EncodedLegIssuer_29("DATA_154054361");
    noLegs_0_0.set(EncodedLegIssuer_29);
    InstrumentLeg_29.insert(EncodedLegIssuer_29.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_29(1190014629);
    noLegs_0_0.set(EncodedLegIssuerLen_29);
    InstrumentLeg_29.insert(EncodedLegIssuerLen_29.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_29("DATA_1488941951");
    noLegs_0_0.set(EncodedLegSecurityDesc_29);
    InstrumentLeg_29.insert(EncodedLegSecurityDesc_29.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_29(667276961);
    noLegs_0_0.set(EncodedLegSecurityDescLen_29);
    InstrumentLeg_29.insert(EncodedLegSecurityDescLen_29.getString());
    FIX::LegCFICode LegCFICode_29("STRING_990452936");
    noLegs_0_0.set(LegCFICode_29);
    InstrumentLeg_29.insert(LegCFICode_29.getString());
    FIX::LegContractMultiplier LegContractMultiplier_29;
    LegContractMultiplier_29.setString("19548703");
    noLegs_0_0.set(LegContractMultiplier_29);
    InstrumentLeg_29.insert(LegContractMultiplier_29.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_29(743354758);
    noLegs_0_0.set(LegContractMultiplierUnit_29);
    InstrumentLeg_29.insert(LegContractMultiplierUnit_29.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_29("MONTHYEAR_408852814");
    noLegs_0_0.set(LegContractSettlMonth_29);
    InstrumentLeg_29.insert(LegContractSettlMonth_29.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_29("COUNTRY_1483945061");
    noLegs_0_0.set(LegCountryOfIssue_29);
    InstrumentLeg_29.insert(LegCountryOfIssue_29.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_29("LOCALMKTDATE_864065094");
    noLegs_0_0.set(LegCouponPaymentDate_29);
    InstrumentLeg_29.insert(LegCouponPaymentDate_29.getString());
    FIX::LegCouponRate LegCouponRate_29;
    LegCouponRate_29.setString("33.720000");
    noLegs_0_0.set(LegCouponRate_29);
    InstrumentLeg_29.insert(LegCouponRate_29.getString());
    FIX::LegCreditRating LegCreditRating_29("STRING_537549633");
    noLegs_0_0.set(LegCreditRating_29);
    InstrumentLeg_29.insert(LegCreditRating_29.getString());
    FIX::LegCurrency LegCurrency_29("CHF");
    noLegs_0_0.set(LegCurrency_29);
    InstrumentLeg_29.insert(LegCurrency_29.getString());
    FIX::LegDatedDate LegDatedDate_29("LOCALMKTDATE_1051337780");
    noLegs_0_0.set(LegDatedDate_29);
    InstrumentLeg_29.insert(LegDatedDate_29.getString());
    FIX::LegExerciseStyle LegExerciseStyle_29(937319620);
    noLegs_0_0.set(LegExerciseStyle_29);
    InstrumentLeg_29.insert(LegExerciseStyle_29.getString());
    FIX::LegFactor LegFactor_29;
    LegFactor_29.setString("15920317");
    noLegs_0_0.set(LegFactor_29);
    InstrumentLeg_29.insert(LegFactor_29.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_29(2089308288);
    noLegs_0_0.set(LegFlowScheduleType_29);
    InstrumentLeg_29.insert(LegFlowScheduleType_29.getString());
    FIX::LegInstrRegistry LegInstrRegistry_29("STRING_1878203584");
    noLegs_0_0.set(LegInstrRegistry_29);
    InstrumentLeg_29.insert(LegInstrRegistry_29.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_29("LOCALMKTDATE_1137163782");
    noLegs_0_0.set(LegInterestAccrualDate_29);
    InstrumentLeg_29.insert(LegInterestAccrualDate_29.getString());
    FIX::LegIssueDate LegIssueDate_29("LOCALMKTDATE_903558276");
    noLegs_0_0.set(LegIssueDate_29);
    InstrumentLeg_29.insert(LegIssueDate_29.getString());
    FIX::LegIssuer LegIssuer_29("STRING_888079739");
    noLegs_0_0.set(LegIssuer_29);
    InstrumentLeg_29.insert(LegIssuer_29.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_29("STRING_1933722191");
    noLegs_0_0.set(LegLocaleOfIssue_29);
    InstrumentLeg_29.insert(LegLocaleOfIssue_29.getString());
    FIX::LegMaturityDate LegMaturityDate_29("LOCALMKTDATE_1679889721");
    noLegs_0_0.set(LegMaturityDate_29);
    InstrumentLeg_29.insert(LegMaturityDate_29.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_29("MONTHYEAR_502152034");
    noLegs_0_0.set(LegMaturityMonthYear_29);
    InstrumentLeg_29.insert(LegMaturityMonthYear_29.getString());
    FIX::LegMaturityTime LegMaturityTime_29("TZTIMEONLY_1542712640");
    noLegs_0_0.set(LegMaturityTime_29);
    InstrumentLeg_29.insert(LegMaturityTime_29.getString());
    FIX::LegOptAttribute LegOptAttribute_29('1');
    noLegs_0_0.set(LegOptAttribute_29);
    InstrumentLeg_29.insert(LegOptAttribute_29.getString());
    FIX::LegOptionRatio LegOptionRatio_29;
    LegOptionRatio_29.setString("16696928");
    noLegs_0_0.set(LegOptionRatio_29);
    InstrumentLeg_29.insert(LegOptionRatio_29.getString());
    FIX::LegPool LegPool_29("STRING_1255613726");
    noLegs_0_0.set(LegPool_29);
    InstrumentLeg_29.insert(LegPool_29.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_29("STRING_1738191387");
    noLegs_0_0.set(LegPriceUnitOfMeasure_29);
    InstrumentLeg_29.insert(LegPriceUnitOfMeasure_29.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_29;
    LegPriceUnitOfMeasureQty_29.setString("6316041");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_29);
    InstrumentLeg_29.insert(LegPriceUnitOfMeasureQty_29.getString());
    FIX::LegProduct LegProduct_29(1409668087);
    noLegs_0_0.set(LegProduct_29);
    InstrumentLeg_29.insert(LegProduct_29.getString());
    FIX::LegPutOrCall LegPutOrCall_29(780722369);
    noLegs_0_0.set(LegPutOrCall_29);
    InstrumentLeg_29.insert(LegPutOrCall_29.getString());
    FIX::LegRatioQty LegRatioQty_29;
    LegRatioQty_29.setString("21205460");
    noLegs_0_0.set(LegRatioQty_29);
    InstrumentLeg_29.insert(LegRatioQty_29.getString());
    FIX::LegRedemptionDate LegRedemptionDate_29("LOCALMKTDATE_2076945048");
    noLegs_0_0.set(LegRedemptionDate_29);
    InstrumentLeg_29.insert(LegRedemptionDate_29.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_29("STRING_1771175305");
    noLegs_0_0.set(LegRepoCollateralSecurityType_29);
    InstrumentLeg_29.insert(LegRepoCollateralSecurityType_29.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_29;
    LegRepurchaseRate_29.setString("28.270000");
    noLegs_0_0.set(LegRepurchaseRate_29);
    InstrumentLeg_29.insert(LegRepurchaseRate_29.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_29(672816159);
    noLegs_0_0.set(LegRepurchaseTerm_29);
    InstrumentLeg_29.insert(LegRepurchaseTerm_29.getString());
    FIX::LegSecurityDesc LegSecurityDesc_29("STRING_32544471");
    noLegs_0_0.set(LegSecurityDesc_29);
    InstrumentLeg_29.insert(LegSecurityDesc_29.getString());
    FIX::LegSecurityExchange LegSecurityExchange_29("EXCHANGE_1264394240");
    noLegs_0_0.set(LegSecurityExchange_29);
    InstrumentLeg_29.insert(LegSecurityExchange_29.getString());
    FIX::LegSecurityID LegSecurityID_29("STRING_1536881253");
    noLegs_0_0.set(LegSecurityID_29);
    InstrumentLeg_29.insert(LegSecurityID_29.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_29("STRING_81897843");
    noLegs_0_0.set(LegSecurityIDSource_29);
    InstrumentLeg_29.insert(LegSecurityIDSource_29.getString());
    FIX::LegSecuritySubType LegSecuritySubType_29("STRING_1801943873");
    noLegs_0_0.set(LegSecuritySubType_29);
    InstrumentLeg_29.insert(LegSecuritySubType_29.getString());
    FIX::LegSecurityType LegSecurityType_29("STRING_1374155384");
    noLegs_0_0.set(LegSecurityType_29);
    InstrumentLeg_29.insert(LegSecurityType_29.getString());
    FIX::LegSide LegSide_29('4');
    noLegs_0_0.set(LegSide_29);
    InstrumentLeg_29.insert(LegSide_29.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_29("STRING_705798006");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_29);
    InstrumentLeg_29.insert(LegStateOrProvinceOfIssue_29.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_29("EUR");
    noLegs_0_0.set(LegStrikeCurrency_29);
    InstrumentLeg_29.insert(LegStrikeCurrency_29.getString());
    FIX::LegStrikePrice LegStrikePrice_29;
    LegStrikePrice_29.setString("6476226");
    noLegs_0_0.set(LegStrikePrice_29);
    InstrumentLeg_29.insert(LegStrikePrice_29.getString());
    FIX::LegSymbol LegSymbol_29("STRING_2042194940");
    noLegs_0_0.set(LegSymbol_29);
    InstrumentLeg_29.insert(LegSymbol_29.getString());
    FIX::LegSymbolSfx LegSymbolSfx_29("STRING_1043448701");
    noLegs_0_0.set(LegSymbolSfx_29);
    InstrumentLeg_29.insert(LegSymbolSfx_29.getString());
    FIX::LegTimeUnit LegTimeUnit_29("STRING_1551180922");
    noLegs_0_0.set(LegTimeUnit_29);
    InstrumentLeg_29.insert(LegTimeUnit_29.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_29("STRING_782791032");
    noLegs_0_0.set(LegUnitOfMeasure_29);
    InstrumentLeg_29.insert(LegUnitOfMeasure_29.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_29;
    LegUnitOfMeasureQty_29.setString("8296872");
    noLegs_0_0.set(LegUnitOfMeasureQty_29);
    InstrumentLeg_29.insert(LegUnitOfMeasureQty_29.getString());
    all_values.push_back(InstrumentLeg_29);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_57;
      FIX::LegSecurityAltID LegSecurityAltID_57("STRING_1284943066");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_57);
      LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltID_57.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_57("STRING_224916237");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_57);
      LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltIDSource_57.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_57);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_58;
      FIX::LegSecurityAltID LegSecurityAltID_58("STRING_206434126");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_58);
      LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltID_58.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_58("STRING_807152265");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_58);
      LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltIDSource_58.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_58);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_30;
    FIX::EncodedLegIssuer EncodedLegIssuer_30("DATA_1480529963");
    noLegs_0_1.set(EncodedLegIssuer_30);
    InstrumentLeg_30.insert(EncodedLegIssuer_30.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_30(1944625513);
    noLegs_0_1.set(EncodedLegIssuerLen_30);
    InstrumentLeg_30.insert(EncodedLegIssuerLen_30.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_30("DATA_1438756390");
    noLegs_0_1.set(EncodedLegSecurityDesc_30);
    InstrumentLeg_30.insert(EncodedLegSecurityDesc_30.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_30(742714403);
    noLegs_0_1.set(EncodedLegSecurityDescLen_30);
    InstrumentLeg_30.insert(EncodedLegSecurityDescLen_30.getString());
    FIX::LegCFICode LegCFICode_30("STRING_577864234");
    noLegs_0_1.set(LegCFICode_30);
    InstrumentLeg_30.insert(LegCFICode_30.getString());
    FIX::LegContractMultiplier LegContractMultiplier_30;
    LegContractMultiplier_30.setString("14118188");
    noLegs_0_1.set(LegContractMultiplier_30);
    InstrumentLeg_30.insert(LegContractMultiplier_30.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_30(672175803);
    noLegs_0_1.set(LegContractMultiplierUnit_30);
    InstrumentLeg_30.insert(LegContractMultiplierUnit_30.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_30("MONTHYEAR_201555891");
    noLegs_0_1.set(LegContractSettlMonth_30);
    InstrumentLeg_30.insert(LegContractSettlMonth_30.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_30("COUNTRY_1192267996");
    noLegs_0_1.set(LegCountryOfIssue_30);
    InstrumentLeg_30.insert(LegCountryOfIssue_30.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_30("LOCALMKTDATE_1344991962");
    noLegs_0_1.set(LegCouponPaymentDate_30);
    InstrumentLeg_30.insert(LegCouponPaymentDate_30.getString());
    FIX::LegCouponRate LegCouponRate_30;
    LegCouponRate_30.setString("3.620000");
    noLegs_0_1.set(LegCouponRate_30);
    InstrumentLeg_30.insert(LegCouponRate_30.getString());
    FIX::LegCreditRating LegCreditRating_30("STRING_309178589");
    noLegs_0_1.set(LegCreditRating_30);
    InstrumentLeg_30.insert(LegCreditRating_30.getString());
    FIX::LegCurrency LegCurrency_30("JPY");
    noLegs_0_1.set(LegCurrency_30);
    InstrumentLeg_30.insert(LegCurrency_30.getString());
    FIX::LegDatedDate LegDatedDate_30("LOCALMKTDATE_2111122462");
    noLegs_0_1.set(LegDatedDate_30);
    InstrumentLeg_30.insert(LegDatedDate_30.getString());
    FIX::LegExerciseStyle LegExerciseStyle_30(2108544952);
    noLegs_0_1.set(LegExerciseStyle_30);
    InstrumentLeg_30.insert(LegExerciseStyle_30.getString());
    FIX::LegFactor LegFactor_30;
    LegFactor_30.setString("7777349");
    noLegs_0_1.set(LegFactor_30);
    InstrumentLeg_30.insert(LegFactor_30.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_30(669436820);
    noLegs_0_1.set(LegFlowScheduleType_30);
    InstrumentLeg_30.insert(LegFlowScheduleType_30.getString());
    FIX::LegInstrRegistry LegInstrRegistry_30("STRING_125052661");
    noLegs_0_1.set(LegInstrRegistry_30);
    InstrumentLeg_30.insert(LegInstrRegistry_30.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_30("LOCALMKTDATE_684019894");
    noLegs_0_1.set(LegInterestAccrualDate_30);
    InstrumentLeg_30.insert(LegInterestAccrualDate_30.getString());
    FIX::LegIssueDate LegIssueDate_30("LOCALMKTDATE_1317059467");
    noLegs_0_1.set(LegIssueDate_30);
    InstrumentLeg_30.insert(LegIssueDate_30.getString());
    FIX::LegIssuer LegIssuer_30("STRING_19763953");
    noLegs_0_1.set(LegIssuer_30);
    InstrumentLeg_30.insert(LegIssuer_30.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_30("STRING_1727468595");
    noLegs_0_1.set(LegLocaleOfIssue_30);
    InstrumentLeg_30.insert(LegLocaleOfIssue_30.getString());
    FIX::LegMaturityDate LegMaturityDate_30("LOCALMKTDATE_720756741");
    noLegs_0_1.set(LegMaturityDate_30);
    InstrumentLeg_30.insert(LegMaturityDate_30.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_30("MONTHYEAR_802554985");
    noLegs_0_1.set(LegMaturityMonthYear_30);
    InstrumentLeg_30.insert(LegMaturityMonthYear_30.getString());
    FIX::LegMaturityTime LegMaturityTime_30("TZTIMEONLY_409672192");
    noLegs_0_1.set(LegMaturityTime_30);
    InstrumentLeg_30.insert(LegMaturityTime_30.getString());
    FIX::LegOptAttribute LegOptAttribute_30('1');
    noLegs_0_1.set(LegOptAttribute_30);
    InstrumentLeg_30.insert(LegOptAttribute_30.getString());
    FIX::LegOptionRatio LegOptionRatio_30;
    LegOptionRatio_30.setString("20874980");
    noLegs_0_1.set(LegOptionRatio_30);
    InstrumentLeg_30.insert(LegOptionRatio_30.getString());
    FIX::LegPool LegPool_30("STRING_634588430");
    noLegs_0_1.set(LegPool_30);
    InstrumentLeg_30.insert(LegPool_30.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_30("STRING_2010777863");
    noLegs_0_1.set(LegPriceUnitOfMeasure_30);
    InstrumentLeg_30.insert(LegPriceUnitOfMeasure_30.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_30;
    LegPriceUnitOfMeasureQty_30.setString("7471666");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_30);
    InstrumentLeg_30.insert(LegPriceUnitOfMeasureQty_30.getString());
    FIX::LegProduct LegProduct_30(2115118393);
    noLegs_0_1.set(LegProduct_30);
    InstrumentLeg_30.insert(LegProduct_30.getString());
    FIX::LegPutOrCall LegPutOrCall_30(1807919729);
    noLegs_0_1.set(LegPutOrCall_30);
    InstrumentLeg_30.insert(LegPutOrCall_30.getString());
    FIX::LegRatioQty LegRatioQty_30;
    LegRatioQty_30.setString("384394");
    noLegs_0_1.set(LegRatioQty_30);
    InstrumentLeg_30.insert(LegRatioQty_30.getString());
    FIX::LegRedemptionDate LegRedemptionDate_30("LOCALMKTDATE_710349148");
    noLegs_0_1.set(LegRedemptionDate_30);
    InstrumentLeg_30.insert(LegRedemptionDate_30.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_30("STRING_238300315");
    noLegs_0_1.set(LegRepoCollateralSecurityType_30);
    InstrumentLeg_30.insert(LegRepoCollateralSecurityType_30.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_30;
    LegRepurchaseRate_30.setString("82.290000");
    noLegs_0_1.set(LegRepurchaseRate_30);
    InstrumentLeg_30.insert(LegRepurchaseRate_30.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_30(1382524952);
    noLegs_0_1.set(LegRepurchaseTerm_30);
    InstrumentLeg_30.insert(LegRepurchaseTerm_30.getString());
    FIX::LegSecurityDesc LegSecurityDesc_30("STRING_439856207");
    noLegs_0_1.set(LegSecurityDesc_30);
    InstrumentLeg_30.insert(LegSecurityDesc_30.getString());
    FIX::LegSecurityExchange LegSecurityExchange_30("EXCHANGE_495042577");
    noLegs_0_1.set(LegSecurityExchange_30);
    InstrumentLeg_30.insert(LegSecurityExchange_30.getString());
    FIX::LegSecurityID LegSecurityID_30("STRING_580033266");
    noLegs_0_1.set(LegSecurityID_30);
    InstrumentLeg_30.insert(LegSecurityID_30.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_30("STRING_673956569");
    noLegs_0_1.set(LegSecurityIDSource_30);
    InstrumentLeg_30.insert(LegSecurityIDSource_30.getString());
    FIX::LegSecuritySubType LegSecuritySubType_30("STRING_804221166");
    noLegs_0_1.set(LegSecuritySubType_30);
    InstrumentLeg_30.insert(LegSecuritySubType_30.getString());
    FIX::LegSecurityType LegSecurityType_30("STRING_1314422834");
    noLegs_0_1.set(LegSecurityType_30);
    InstrumentLeg_30.insert(LegSecurityType_30.getString());
    FIX::LegSide LegSide_30('9');
    noLegs_0_1.set(LegSide_30);
    InstrumentLeg_30.insert(LegSide_30.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_30("STRING_767859981");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_30);
    InstrumentLeg_30.insert(LegStateOrProvinceOfIssue_30.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_30("GBP");
    noLegs_0_1.set(LegStrikeCurrency_30);
    InstrumentLeg_30.insert(LegStrikeCurrency_30.getString());
    FIX::LegStrikePrice LegStrikePrice_30;
    LegStrikePrice_30.setString("14372968");
    noLegs_0_1.set(LegStrikePrice_30);
    InstrumentLeg_30.insert(LegStrikePrice_30.getString());
    FIX::LegSymbol LegSymbol_30("STRING_1400536800");
    noLegs_0_1.set(LegSymbol_30);
    InstrumentLeg_30.insert(LegSymbol_30.getString());
    FIX::LegSymbolSfx LegSymbolSfx_30("STRING_304225996");
    noLegs_0_1.set(LegSymbolSfx_30);
    InstrumentLeg_30.insert(LegSymbolSfx_30.getString());
    FIX::LegTimeUnit LegTimeUnit_30("STRING_606872620");
    noLegs_0_1.set(LegTimeUnit_30);
    InstrumentLeg_30.insert(LegTimeUnit_30.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_30("STRING_1420300753");
    noLegs_0_1.set(LegUnitOfMeasure_30);
    InstrumentLeg_30.insert(LegUnitOfMeasure_30.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_30;
    LegUnitOfMeasureQty_30.setString("20316945");
    noLegs_0_1.set(LegUnitOfMeasureQty_30);
    InstrumentLeg_30.insert(LegUnitOfMeasureQty_30.getString());
    all_values.push_back(InstrumentLeg_30);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_59;
      FIX::LegSecurityAltID LegSecurityAltID_59("STRING_75372091");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_59);
      LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltID_59.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_59("STRING_293883136");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_59);
      LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltIDSource_59.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_59);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_60;
      FIX::LegSecurityAltID LegSecurityAltID_60("STRING_984489451");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_60);
      LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltID_60.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_60("STRING_15386495");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_60);
      LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltIDSource_60.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_60);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_61;
      FIX::LegSecurityAltID LegSecurityAltID_61("STRING_928471566");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_61);
      LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltID_61.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_61("STRING_847783667");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_61);
      LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltIDSource_61.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_61);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_15;
  FIX::AttachmentPoint AttachmentPoint_15;
  AttachmentPoint_15.setString("31.640000");
  msg.set(AttachmentPoint_15);
  Instrument_15.insert(AttachmentPoint_15.getString());
  FIX::CFICode CFICode_15("STRING_896106312");
  msg.set(CFICode_15);
  Instrument_15.insert(CFICode_15.getString());
  FIX::CPProgram CPProgram_15(99);
  msg.set(CPProgram_15);
  Instrument_15.insert(CPProgram_15.getString());
  FIX::CPRegType CPRegType_15("STRING_800992576");
  msg.set(CPRegType_15);
  Instrument_15.insert(CPRegType_15.getString());
  FIX::CapPrice CapPrice_15;
  CapPrice_15.setString("16064554");
  msg.set(CapPrice_15);
  Instrument_15.insert(CapPrice_15.getString());
  FIX::ContractMultiplier ContractMultiplier_15;
  ContractMultiplier_15.setString("7465200");
  msg.set(ContractMultiplier_15);
  Instrument_15.insert(ContractMultiplier_15.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_15(1);
  msg.set(ContractMultiplierUnit_15);
  Instrument_15.insert(ContractMultiplierUnit_15.getString());
  FIX::ContractSettlMonth ContractSettlMonth_15("MONTHYEAR_841496764");
  msg.set(ContractSettlMonth_15);
  Instrument_15.insert(ContractSettlMonth_15.getString());
  FIX::CountryOfIssue CountryOfIssue_15("COUNTRY_1186376270");
  msg.set(CountryOfIssue_15);
  Instrument_15.insert(CountryOfIssue_15.getString());
  FIX::CouponPaymentDate CouponPaymentDate_15("LOCALMKTDATE_598809734");
  msg.set(CouponPaymentDate_15);
  Instrument_15.insert(CouponPaymentDate_15.getString());
  FIX::CouponRate CouponRate_15;
  CouponRate_15.setString("0.310000");
  msg.set(CouponRate_15);
  Instrument_15.insert(CouponRate_15.getString());
  FIX::CreditRating CreditRating_15("STRING_1860332840");
  msg.set(CreditRating_15);
  Instrument_15.insert(CreditRating_15.getString());
  FIX::DatedDate DatedDate_15("LOCALMKTDATE_1403030901");
  msg.set(DatedDate_15);
  Instrument_15.insert(DatedDate_15.getString());
  FIX::DetachmentPoint DetachmentPoint_15;
  DetachmentPoint_15.setString("92.170000");
  msg.set(DetachmentPoint_15);
  Instrument_15.insert(DetachmentPoint_15.getString());
  FIX::EncodedIssuer EncodedIssuer_15("DATA_702803967");
  msg.set(EncodedIssuer_15);
  Instrument_15.insert(EncodedIssuer_15.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_15(23407234);
  msg.set(EncodedIssuerLen_15);
  Instrument_15.insert(EncodedIssuerLen_15.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_15("DATA_1863953356");
  msg.set(EncodedSecurityDesc_15);
  Instrument_15.insert(EncodedSecurityDesc_15.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_15(323010070);
  msg.set(EncodedSecurityDescLen_15);
  Instrument_15.insert(EncodedSecurityDescLen_15.getString());
  FIX::ExerciseStyle ExerciseStyle_15(0);
  msg.set(ExerciseStyle_15);
  Instrument_15.insert(ExerciseStyle_15.getString());
  FIX::Factor Factor_15;
  Factor_15.setString("11170065");
  msg.set(Factor_15);
  Instrument_15.insert(Factor_15.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_15(true);
  msg.set(FlexProductEligibilityIndicator_15);
  Instrument_15.insert(FlexProductEligibilityIndicator_15.getString());
  FIX::FlexibleIndicator FlexibleIndicator_15(true);
  msg.set(FlexibleIndicator_15);
  Instrument_15.insert(FlexibleIndicator_15.getString());
  FIX::FloorPrice FloorPrice_15;
  FloorPrice_15.setString("3898236");
  msg.set(FloorPrice_15);
  Instrument_15.insert(FloorPrice_15.getString());
  FIX::FlowScheduleType FlowScheduleType_15(0);
  msg.set(FlowScheduleType_15);
  Instrument_15.insert(FlowScheduleType_15.getString());
  FIX::InstrRegistry InstrRegistry_15("STRING_1247722370");
  msg.set(InstrRegistry_15);
  Instrument_15.insert(InstrRegistry_15.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_15('4');
  msg.set(InstrmtAssignmentMethod_15);
  Instrument_15.insert(InstrmtAssignmentMethod_15.getString());
  FIX::InterestAccrualDate InterestAccrualDate_15("LOCALMKTDATE_805330147");
  msg.set(InterestAccrualDate_15);
  Instrument_15.insert(InterestAccrualDate_15.getString());
  FIX::IssueDate IssueDate_15("LOCALMKTDATE_84728173");
  msg.set(IssueDate_15);
  Instrument_15.insert(IssueDate_15.getString());
  FIX::Issuer Issuer_15("STRING_480582200");
  msg.set(Issuer_15);
  Instrument_15.insert(Issuer_15.getString());
  FIX::ListMethod ListMethod_15(1);
  msg.set(ListMethod_15);
  Instrument_15.insert(ListMethod_15.getString());
  FIX::LocaleOfIssue LocaleOfIssue_15("STRING_932511840");
  msg.set(LocaleOfIssue_15);
  Instrument_15.insert(LocaleOfIssue_15.getString());
  FIX::MaturityDate MaturityDate_15("LOCALMKTDATE_1243135364");
  msg.set(MaturityDate_15);
  Instrument_15.insert(MaturityDate_15.getString());
  FIX::MaturityMonthYear MaturityMonthYear_15("MONTHYEAR_482424377");
  msg.set(MaturityMonthYear_15);
  Instrument_15.insert(MaturityMonthYear_15.getString());
  FIX::MaturityTime MaturityTime_15("TZTIMEONLY_1440731588");
  msg.set(MaturityTime_15);
  Instrument_15.insert(MaturityTime_15.getString());
  FIX::MinPriceIncrement MinPriceIncrement_15;
  MinPriceIncrement_15.setString("20441279");
  msg.set(MinPriceIncrement_15);
  Instrument_15.insert(MinPriceIncrement_15.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_15;
  MinPriceIncrementAmount_15.setString("20888798");
  msg.set(MinPriceIncrementAmount_15);
  Instrument_15.insert(MinPriceIncrementAmount_15.getString());
  FIX::NTPositionLimit NTPositionLimit_15(39768004);
  msg.set(NTPositionLimit_15);
  Instrument_15.insert(NTPositionLimit_15.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_15;
  NotionalPercentageOutstanding_15.setString("14.490000");
  msg.set(NotionalPercentageOutstanding_15);
  Instrument_15.insert(NotionalPercentageOutstanding_15.getString());
  FIX::OptAttribute OptAttribute_15('7');
  msg.set(OptAttribute_15);
  Instrument_15.insert(OptAttribute_15.getString());
  FIX::OptPayoutAmount OptPayoutAmount_15;
  OptPayoutAmount_15.setString("12261442");
  msg.set(OptPayoutAmount_15);
  Instrument_15.insert(OptPayoutAmount_15.getString());
  FIX::OptPayoutType OptPayoutType_15(3);
  msg.set(OptPayoutType_15);
  Instrument_15.insert(OptPayoutType_15.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_15;
  OriginalNotionalPercentageOutstanding_15.setString("93.370000");
  msg.set(OriginalNotionalPercentageOutstanding_15);
  Instrument_15.insert(OriginalNotionalPercentageOutstanding_15.getString());
  FIX::Pool Pool_15("STRING_938993466");
  msg.set(Pool_15);
  Instrument_15.insert(Pool_15.getString());
  FIX::PositionLimit PositionLimit_15(2002252085);
  msg.set(PositionLimit_15);
  Instrument_15.insert(PositionLimit_15.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_15("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_15);
  Instrument_15.insert(PriceQuoteMethod_15.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_15("STRING_1641797434");
  msg.set(PriceUnitOfMeasure_15);
  Instrument_15.insert(PriceUnitOfMeasure_15.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_15;
  PriceUnitOfMeasureQty_15.setString("20256593");
  msg.set(PriceUnitOfMeasureQty_15);
  Instrument_15.insert(PriceUnitOfMeasureQty_15.getString());
  FIX::Product Product_17(7);
  msg.set(Product_17);
  Instrument_15.insert(Product_17.getString());
  FIX::ProductComplex ProductComplex_15("STRING_1964807504");
  msg.set(ProductComplex_15);
  Instrument_15.insert(ProductComplex_15.getString());
  FIX::PutOrCall PutOrCall_15(0);
  msg.set(PutOrCall_15);
  Instrument_15.insert(PutOrCall_15.getString());
  FIX::RedemptionDate RedemptionDate_15("LOCALMKTDATE_1478884772");
  msg.set(RedemptionDate_15);
  Instrument_15.insert(RedemptionDate_15.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_15("STRING_444559922");
  msg.set(RepoCollateralSecurityType_15);
  Instrument_15.insert(RepoCollateralSecurityType_15.getString());
  FIX::RepurchaseRate RepurchaseRate_15;
  RepurchaseRate_15.setString("27.140000");
  msg.set(RepurchaseRate_15);
  Instrument_15.insert(RepurchaseRate_15.getString());
  FIX::RepurchaseTerm RepurchaseTerm_15(1868708386);
  msg.set(RepurchaseTerm_15);
  Instrument_15.insert(RepurchaseTerm_15.getString());
  FIX::RestructuringType RestructuringType_15("STRING_MR");
  msg.set(RestructuringType_15);
  Instrument_15.insert(RestructuringType_15.getString());
  FIX::SecurityDesc SecurityDesc_15("STRING_359211436");
  msg.set(SecurityDesc_15);
  Instrument_15.insert(SecurityDesc_15.getString());
  FIX::SecurityExchange SecurityExchange_15("EXCHANGE_186420443");
  msg.set(SecurityExchange_15);
  Instrument_15.insert(SecurityExchange_15.getString());
  FIX::SecurityGroup SecurityGroup_15("STRING_1761337080");
  msg.set(SecurityGroup_15);
  Instrument_15.insert(SecurityGroup_15.getString());
  FIX::SecurityID SecurityID_15("STRING_443939610");
  msg.set(SecurityID_15);
  Instrument_15.insert(SecurityID_15.getString());
  FIX::SecurityIDSource SecurityIDSource_15("STRING_M");
  msg.set(SecurityIDSource_15);
  Instrument_15.insert(SecurityIDSource_15.getString());
  FIX::SecurityStatus SecurityStatus_15("STRING_2");
  msg.set(SecurityStatus_15);
  Instrument_15.insert(SecurityStatus_15.getString());
  FIX::SecuritySubType SecuritySubType_15("STRING_1376451450");
  msg.set(SecuritySubType_15);
  Instrument_15.insert(SecuritySubType_15.getString());
  FIX::SecurityType SecurityType_17("STRING_REPO");
  msg.set(SecurityType_17);
  Instrument_15.insert(SecurityType_17.getString());
  FIX::Seniority Seniority_15("STRING_SB");
  msg.set(Seniority_15);
  Instrument_15.insert(Seniority_15.getString());
  FIX::SettlMethod SettlMethod_15('P');
  msg.set(SettlMethod_15);
  Instrument_15.insert(SettlMethod_15.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_15("STRING_1806782300");
  msg.set(SettleOnOpenFlag_15);
  Instrument_15.insert(SettleOnOpenFlag_15.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_15("STRING_1771475713");
  msg.set(StateOrProvinceOfIssue_15);
  Instrument_15.insert(StateOrProvinceOfIssue_15.getString());
  FIX::StrikeCurrency StrikeCurrency_15("EUR");
  msg.set(StrikeCurrency_15);
  Instrument_15.insert(StrikeCurrency_15.getString());
  FIX::StrikeMultiplier StrikeMultiplier_15;
  StrikeMultiplier_15.setString("4068850");
  msg.set(StrikeMultiplier_15);
  Instrument_15.insert(StrikeMultiplier_15.getString());
  FIX::StrikePrice StrikePrice_15;
  StrikePrice_15.setString("19356116");
  msg.set(StrikePrice_15);
  Instrument_15.insert(StrikePrice_15.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_15(1);
  msg.set(StrikePriceBoundaryMethod_15);
  Instrument_15.insert(StrikePriceBoundaryMethod_15.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_15;
  StrikePriceBoundaryPrecision_15.setString("43.570000");
  msg.set(StrikePriceBoundaryPrecision_15);
  Instrument_15.insert(StrikePriceBoundaryPrecision_15.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_15(1);
  msg.set(StrikePriceDeterminationMethod_15);
  Instrument_15.insert(StrikePriceDeterminationMethod_15.getString());
  FIX::StrikeValue StrikeValue_15;
  StrikeValue_15.setString("1136997");
  msg.set(StrikeValue_15);
  Instrument_15.insert(StrikeValue_15.getString());
  FIX::Symbol Symbol_15("STRING_1109232912");
  msg.set(Symbol_15);
  Instrument_15.insert(Symbol_15.getString());
  FIX::SymbolSfx SymbolSfx_15("STRING_CD");
  msg.set(SymbolSfx_15);
  Instrument_15.insert(SymbolSfx_15.getString());
  FIX::TimeUnit TimeUnit_15("STRING_Min");
  msg.set(TimeUnit_15);
  Instrument_15.insert(TimeUnit_15.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_15(4);
  msg.set(UnderlyingPriceDeterminationMethod_15);
  Instrument_15.insert(UnderlyingPriceDeterminationMethod_15.getString());
  FIX::UnitOfMeasure UnitOfMeasure_15("STRING_Gal");
  msg.set(UnitOfMeasure_15);
  Instrument_15.insert(UnitOfMeasure_15.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_15;
  UnitOfMeasureQty_15.setString("13307551");
  msg.set(UnitOfMeasureQty_15);
  Instrument_15.insert(UnitOfMeasureQty_15.getString());
  FIX::ValuationMethod ValuationMethod_15("STRING_CDSD");
  msg.set(ValuationMethod_15);
  Instrument_15.insert(ValuationMethod_15.getString());
  all_values.push_back(Instrument_15);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_32;
    FIX::ComplexEventCondition ComplexEventCondition_32(1);
    noComplexEvents_0_0.set(ComplexEventCondition_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventCondition_32.getString());
    FIX::ComplexEventPrice ComplexEventPrice_32;
    ComplexEventPrice_32.setString("5237370");
    noComplexEvents_0_0.set(ComplexEventPrice_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPrice_32.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_32(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryMethod_32.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_32;
    ComplexEventPriceBoundaryPrecision_32.setString("56.030000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryPrecision_32.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_32(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceTimeType_32.getString());
    FIX::ComplexEventType ComplexEventType_32(3);
    noComplexEvents_0_0.set(ComplexEventType_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventType_32.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_32;
    ComplexOptPayoutAmount_32.setString("12453952");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexOptPayoutAmount_32.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_32);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_68;
      FIX::ComplexEventEndDate ComplexEventEndDate_68(FIX::UTCTIMESTAMP(15, 3, 38, 18, 4, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_68);
      ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventEndDate_68.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_68(FIX::UTCTIMESTAMP(20, 42, 43, 2, 8, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_68);
      ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventStartDate_68.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_68);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_137;
        FIX::ComplexEventEndTime ComplexEventEndTime_137(FIX::UTCTIMEONLY(9, 38, 11));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_137);
        ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventEndTime_137.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_137(FIX::UTCTIMEONLY(10, 10, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_137);
        ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventStartTime_137.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_137);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_138;
        FIX::ComplexEventEndTime ComplexEventEndTime_138(FIX::UTCTIMEONLY(16, 17, 39));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_138);
        ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventEndTime_138.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_138(FIX::UTCTIMEONLY(10, 24, 24));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_138);
        ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventStartTime_138.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_138);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_139;
        FIX::ComplexEventEndTime ComplexEventEndTime_139(FIX::UTCTIMEONLY(16, 19, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_139);
        ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventEndTime_139.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_139(FIX::UTCTIMEONLY(22, 54, 40));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_139);
        ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventStartTime_139.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_139);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_69;
      FIX::ComplexEventEndDate ComplexEventEndDate_69(FIX::UTCTIMESTAMP(5, 15, 44, 8, 7, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_69);
      ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventEndDate_69.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_69(FIX::UTCTIMESTAMP(15, 59, 47, 6, 10, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_69);
      ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventStartDate_69.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_69);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_140;
        FIX::ComplexEventEndTime ComplexEventEndTime_140(FIX::UTCTIMEONLY(5, 50, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_140);
        ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventEndTime_140.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_140(FIX::UTCTIMEONLY(5, 21, 26));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_140);
        ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventStartTime_140.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_140);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_33;
    FIX::ComplexEventCondition ComplexEventCondition_33(1);
    noComplexEvents_0_1.set(ComplexEventCondition_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventCondition_33.getString());
    FIX::ComplexEventPrice ComplexEventPrice_33;
    ComplexEventPrice_33.setString("11864817");
    noComplexEvents_0_1.set(ComplexEventPrice_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPrice_33.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_33(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryMethod_33.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_33;
    ComplexEventPriceBoundaryPrecision_33.setString("57.180000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryPrecision_33.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_33(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceTimeType_33.getString());
    FIX::ComplexEventType ComplexEventType_33(7);
    noComplexEvents_0_1.set(ComplexEventType_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexEventType_33.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_33;
    ComplexOptPayoutAmount_33.setString("3751095");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_33);
    ComplexEvents_NoComplexEvents_33.insert(ComplexOptPayoutAmount_33.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_33);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_70;
      FIX::ComplexEventEndDate ComplexEventEndDate_70(FIX::UTCTIMESTAMP(21, 7, 10, 2, 6, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_70);
      ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventEndDate_70.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_70(FIX::UTCTIMESTAMP(0, 30, 41, 18, 8, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_70);
      ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventStartDate_70.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_70);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_141;
        FIX::ComplexEventEndTime ComplexEventEndTime_141(FIX::UTCTIMEONLY(4, 14, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_141);
        ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventEndTime_141.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_141(FIX::UTCTIMEONLY(19, 15, 12));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_141);
        ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventStartTime_141.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_141);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_142;
        FIX::ComplexEventEndTime ComplexEventEndTime_142(FIX::UTCTIMEONLY(8, 41, 39));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_142);
        ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventEndTime_142.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_142(FIX::UTCTIMEONLY(20, 44, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_142);
        ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventStartTime_142.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_142);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_71;
      FIX::ComplexEventEndDate ComplexEventEndDate_71(FIX::UTCTIMESTAMP(9, 19, 11, 27, 5, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_71);
      ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventEndDate_71.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_71(FIX::UTCTIMESTAMP(4, 56, 10, 6, 4, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_71);
      ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventStartDate_71.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_71);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_143;
        FIX::ComplexEventEndTime ComplexEventEndTime_143(FIX::UTCTIMEONLY(5, 20, 9));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_143);
        ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventEndTime_143.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_143(FIX::UTCTIMEONLY(19, 16, 15));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_143);
        ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventStartTime_143.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_143);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_144;
        FIX::ComplexEventEndTime ComplexEventEndTime_144(FIX::UTCTIMEONLY(1, 56, 44));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_144);
        ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventEndTime_144.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_144(FIX::UTCTIMEONLY(20, 20, 58));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_144);
        ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventStartTime_144.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_144);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_145;
        FIX::ComplexEventEndTime ComplexEventEndTime_145(FIX::UTCTIMEONLY(17, 9, 45));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_145);
        ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventEndTime_145.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_145(FIX::UTCTIMEONLY(14, 11, 26));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_145);
        ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventStartTime_145.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_145);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_34;
    FIX::ComplexEventCondition ComplexEventCondition_34(1);
    noComplexEvents_0_2.set(ComplexEventCondition_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventCondition_34.getString());
    FIX::ComplexEventPrice ComplexEventPrice_34;
    ComplexEventPrice_34.setString("15475237");
    noComplexEvents_0_2.set(ComplexEventPrice_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPrice_34.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_34(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryMethod_34.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_34;
    ComplexEventPriceBoundaryPrecision_34.setString("7.850000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryPrecision_34.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_34(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceTimeType_34.getString());
    FIX::ComplexEventType ComplexEventType_34(7);
    noComplexEvents_0_2.set(ComplexEventType_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexEventType_34.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_34;
    ComplexOptPayoutAmount_34.setString("48652");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_34);
    ComplexEvents_NoComplexEvents_34.insert(ComplexOptPayoutAmount_34.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_34);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_72;
      FIX::ComplexEventEndDate ComplexEventEndDate_72(FIX::UTCTIMESTAMP(19, 45, 6, 22, 2, 2015));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_72);
      ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventEndDate_72.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_72(FIX::UTCTIMESTAMP(6, 9, 2, 12, 6, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_72);
      ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventStartDate_72.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_72);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_146;
        FIX::ComplexEventEndTime ComplexEventEndTime_146(FIX::UTCTIMEONLY(20, 55, 51));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_146);
        ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventEndTime_146.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_146(FIX::UTCTIMEONLY(1, 55, 7));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_146);
        ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventStartTime_146.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_146);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_73;
      FIX::ComplexEventEndDate ComplexEventEndDate_73(FIX::UTCTIMESTAMP(3, 36, 53, 14, 7, 2004));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_73);
      ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventEndDate_73.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_73(FIX::UTCTIMESTAMP(9, 35, 51, 7, 6, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_73);
      ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventStartDate_73.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_73);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_147;
        FIX::ComplexEventEndTime ComplexEventEndTime_147(FIX::UTCTIMEONLY(19, 1, 54));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_147);
        ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventEndTime_147.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_147(FIX::UTCTIMEONLY(22, 8, 37));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_147);
        ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventStartTime_147.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_147);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_148;
        FIX::ComplexEventEndTime ComplexEventEndTime_148(FIX::UTCTIMEONLY(16, 32, 24));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_148);
        ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventEndTime_148.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_148(FIX::UTCTIMEONLY(22, 11, 41));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_148);
        ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventStartTime_148.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_148);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_30;
    FIX::EventDate EventDate_30("LOCALMKTDATE_2037337574");
    noEvents_0_0.set(EventDate_30);
    EvntGrp_NoEvents_30.insert(EventDate_30.getString());
    FIX::EventPx EventPx_30;
    EventPx_30.setString("20584234");
    noEvents_0_0.set(EventPx_30);
    EvntGrp_NoEvents_30.insert(EventPx_30.getString());
    FIX::EventText EventText_30("STRING_1265709391");
    noEvents_0_0.set(EventText_30);
    EvntGrp_NoEvents_30.insert(EventText_30.getString());
    FIX::EventTime EventTime_30(FIX::UTCTIMESTAMP(4, 27, 35, 17, 7, 2000));
    noEvents_0_0.set(EventTime_30);
    EvntGrp_NoEvents_30.insert(EventTime_30.getString());
    FIX::EventType EventType_30(14);
    noEvents_0_0.set(EventType_30);
    EvntGrp_NoEvents_30.insert(EventType_30.getString());
    all_values.push_back(EvntGrp_NoEvents_30);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_31;
    FIX::EventDate EventDate_31("LOCALMKTDATE_842068355");
    noEvents_0_1.set(EventDate_31);
    EvntGrp_NoEvents_31.insert(EventDate_31.getString());
    FIX::EventPx EventPx_31;
    EventPx_31.setString("10814728");
    noEvents_0_1.set(EventPx_31);
    EvntGrp_NoEvents_31.insert(EventPx_31.getString());
    FIX::EventText EventText_31("STRING_1577527725");
    noEvents_0_1.set(EventText_31);
    EvntGrp_NoEvents_31.insert(EventText_31.getString());
    FIX::EventTime EventTime_31(FIX::UTCTIMESTAMP(1, 39, 20, 0, 6, 2009));
    noEvents_0_1.set(EventTime_31);
    EvntGrp_NoEvents_31.insert(EventTime_31.getString());
    FIX::EventType EventType_31(10);
    noEvents_0_1.set(EventType_31);
    EvntGrp_NoEvents_31.insert(EventType_31.getString());
    all_values.push_back(EvntGrp_NoEvents_31);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_32;
    FIX::EventDate EventDate_32("LOCALMKTDATE_307359578");
    noEvents_0_2.set(EventDate_32);
    EvntGrp_NoEvents_32.insert(EventDate_32.getString());
    FIX::EventPx EventPx_32;
    EventPx_32.setString("9515242");
    noEvents_0_2.set(EventPx_32);
    EvntGrp_NoEvents_32.insert(EventPx_32.getString());
    FIX::EventText EventText_32("STRING_383758894");
    noEvents_0_2.set(EventText_32);
    EvntGrp_NoEvents_32.insert(EventText_32.getString());
    FIX::EventTime EventTime_32(FIX::UTCTIMESTAMP(11, 32, 14, 0, 11, 2009));
    noEvents_0_2.set(EventTime_32);
    EvntGrp_NoEvents_32.insert(EventTime_32.getString());
    FIX::EventType EventType_32(10);
    noEvents_0_2.set(EventType_32);
    EvntGrp_NoEvents_32.insert(EventType_32.getString());
    all_values.push_back(EvntGrp_NoEvents_32);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_30;
    FIX::InstrumentPartyID InstrumentPartyID_30("STRING_149333262");
    noInstrumentParties_0_0.set(InstrumentPartyID_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyID_30.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_30('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyIDSource_30.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_30(1409366940);
    noInstrumentParties_0_0.set(InstrumentPartyRole_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyRole_30.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_30);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58;
      FIX::InstrumentPartySubID InstrumentPartySubID_58("STRING_672980775");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_58);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubID_58.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_58(1449406734);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_58);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubIDType_58.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59;
      FIX::InstrumentPartySubID InstrumentPartySubID_59("STRING_1713735627");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_59);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubID_59.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_59(33675180);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_59);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubIDType_59.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60;
      FIX::InstrumentPartySubID InstrumentPartySubID_60("STRING_143991441");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_60);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubID_60.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_60(647724793);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_60);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubIDType_60.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_27;
    FIX::SecurityAltID SecurityAltID_27("STRING_500538947");
    noSecurityAltID_0_0.set(SecurityAltID_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltID_27.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_27("STRING_131872675");
    noSecurityAltID_0_0.set(SecurityAltIDSource_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltIDSource_27.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_30;
  FIX::SecurityXML SecurityXML_31("XMLDATA_558391936");
  msg.set(SecurityXML_31);
  FIX::SecurityXMLLen SecurityXMLLen_15(2033591888);
  msg.set(SecurityXMLLen_15);
  FIX::SecurityXMLSchema SecurityXMLSchema_15("STRING_602425107");
  msg.set(SecurityXMLSchema_15);
  SecurityXML_30.insert(SecurityXMLSchema_15.getString());
  all_values.push_back(SecurityXML_30);
  all_compo_names.insert("SecurityXML");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_1;
    FIX::RootPartyID RootPartyID_1("STRING_2124290729");
    noRootPartyIDs_0_0.set(RootPartyID_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyID_1.getString());
    FIX::RootPartyIDSource RootPartyIDSource_1('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyIDSource_1.getString());
    FIX::RootPartyRole RootPartyRole_1(1471503480);
    noRootPartyIDs_0_0.set(RootPartyRole_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyRole_1.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_1);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_1;
      FIX::RootPartySubID RootPartySubID_1("STRING_2133039971");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubID_1.getString());
      FIX::RootPartySubIDType RootPartySubIDType_1(1308858835);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_1);
      RootSubParties_NoRootPartySubIDs_1.insert(RootPartySubIDType_1.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_1);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_2;
      FIX::RootPartySubID RootPartySubID_2("STRING_551528173");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubID_2.getString());
      FIX::RootPartySubIDType RootPartySubIDType_2(1887897095);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubIDType_2.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_2);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_2;
    FIX::RootPartyID RootPartyID_2("STRING_1156119002");
    noRootPartyIDs_0_1.set(RootPartyID_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyID_2.getString());
    FIX::RootPartyIDSource RootPartyIDSource_2('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyIDSource_2.getString());
    FIX::RootPartyRole RootPartyRole_2(1751337637);
    noRootPartyIDs_0_1.set(RootPartyRole_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyRole_2.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_2);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_3;
      FIX::RootPartySubID RootPartySubID_3("STRING_190736575");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubID_3.getString());
      FIX::RootPartySubIDType RootPartySubIDType_3(733003922);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubIDType_3.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_3);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // SideCrossOrdCxlGrp
  // Group SideCrossOrdCxlGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_0;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_0;
    FIX::ClOrdID ClOrdID_19("STRING_1860942304");
    noSides_0_0.set(ClOrdID_19);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdID_19.getString());
    FIX::ClOrdLinkID ClOrdLinkID_3("STRING_2142370862");
    noSides_0_0.set(ClOrdLinkID_3);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdLinkID_3.getString());
    FIX::ComplianceID ComplianceID_1("STRING_975558726");
    noSides_0_0.set(ComplianceID_1);
    SideCrossOrdCxlGrp_NoSides_0.insert(ComplianceID_1.getString());
    FIX::EncodedText EncodedText_28("DATA_386439431");
    noSides_0_0.set(EncodedText_28);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedText_28.getString());
    FIX::EncodedTextLen EncodedTextLen_28(1444293948);
    noSides_0_0.set(EncodedTextLen_28);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedTextLen_28.getString());
    FIX::OrigClOrdID OrigClOrdID_3("STRING_541810705");
    noSides_0_0.set(OrigClOrdID_3);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigClOrdID_3.getString());
    FIX::OrigOrdModTime OrigOrdModTime_0(FIX::UTCTIMESTAMP(21, 38, 57, 4, 10, 2005));
    noSides_0_0.set(OrigOrdModTime_0);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigOrdModTime_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_19("STRING_1974932576");
    noSides_0_0.set(SecondaryClOrdID_19);
    SideCrossOrdCxlGrp_NoSides_0.insert(SecondaryClOrdID_19.getString());
    FIX::Side Side_18('2');
    noSides_0_0.set(Side_18);
    SideCrossOrdCxlGrp_NoSides_0.insert(Side_18.getString());
    FIX::Text Text_28("STRING_1606369707");
    noSides_0_0.set(Text_28);
    SideCrossOrdCxlGrp_NoSides_0.insert(Text_28.getString());
    FIX::TradeDate TradeDate_12("LOCALMKTDATE_1951739657");
    noSides_0_0.set(TradeDate_12);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeDate_12.getString());
    FIX::TradeOriginationDate TradeOriginationDate_6("LOCALMKTDATE_1525630710");
    noSides_0_0.set(TradeOriginationDate_6);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeOriginationDate_6.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_0);
    all_compo_names.insert("SideCrossOrdCxlGrp.NoSides");

    // OrderQtyData
    multiset<string> OrderQtyData_3;
    FIX::CashOrderQty CashOrderQty_3;
    CashOrderQty_3.setString("9303895");
    noSides_0_0.set(CashOrderQty_3);
    OrderQtyData_3.insert(CashOrderQty_3.getString());
    FIX::OrderPercent OrderPercent_3;
    OrderPercent_3.setString("73.240000");
    noSides_0_0.set(OrderPercent_3);
    OrderQtyData_3.insert(OrderPercent_3.getString());
    FIX::OrderQty OrderQty_13;
    OrderQty_13.setString("15111870");
    noSides_0_0.set(OrderQty_13);
    OrderQtyData_3.insert(OrderQty_13.getString());
    FIX::RoundingDirection RoundingDirection_3('1');
    noSides_0_0.set(RoundingDirection_3);
    OrderQtyData_3.insert(RoundingDirection_3.getString());
    FIX::RoundingModulus RoundingModulus_3;
    RoundingModulus_3.setString("12841154");
    noSides_0_0.set(RoundingModulus_3);
    OrderQtyData_3.insert(RoundingModulus_3.getString());
    all_values.push_back(OrderQtyData_3);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_37;
      FIX::PartyID PartyID_37("STRING_1247883729");
      noPartyIDs_0_1_0.set(PartyID_37);
      Parties_NoPartyIDs_37.insert(PartyID_37.getString());
      FIX::PartyIDSource PartyIDSource_37('B');
      noPartyIDs_0_1_0.set(PartyIDSource_37);
      Parties_NoPartyIDs_37.insert(PartyIDSource_37.getString());
      FIX::PartyRole PartyRole_37(67);
      noPartyIDs_0_1_0.set(PartyRole_37);
      Parties_NoPartyIDs_37.insert(PartyRole_37.getString());
      all_values.push_back(Parties_NoPartyIDs_37);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_82;
        FIX::PartySubID PartySubID_82("STRING_816772698");
        noPartySubIDs_0_0_2_0.set(PartySubID_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubID_82.getString());
        FIX::PartySubIDType PartySubIDType_82(26);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubIDType_82.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_82);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    msg.addGroup(noSides_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_30;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_30("DATA_530231354");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuer_30.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_30(1583345605);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuerLen_30.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_30("DATA_2011758259");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDesc_30.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_30(916670786);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDescLen_30.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_30;
    UnderlyingAdjustedQuantity_30.setString("8801559");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_30);
    UnderlyingInstrument_30.insert(UnderlyingAdjustedQuantity_30.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_30;
    UnderlyingAllocationPercent_30.setString("53.160000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_30);
    UnderlyingInstrument_30.insert(UnderlyingAllocationPercent_30.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_30;
    UnderlyingAttachmentPoint_30.setString("53.970000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingAttachmentPoint_30.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_30("STRING_320957646");
    noUnderlyings_0_0.set(UnderlyingCFICode_30);
    UnderlyingInstrument_30.insert(UnderlyingCFICode_30.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_30("STRING_1595620815");
    noUnderlyings_0_0.set(UnderlyingCPProgram_30);
    UnderlyingInstrument_30.insert(UnderlyingCPProgram_30.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_30("STRING_1220619266");
    noUnderlyings_0_0.set(UnderlyingCPRegType_30);
    UnderlyingInstrument_30.insert(UnderlyingCPRegType_30.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_30;
    UnderlyingCapValue_30.setString("2622983");
    noUnderlyings_0_0.set(UnderlyingCapValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCapValue_30.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_30;
    UnderlyingCashAmount_30.setString("7695453");
    noUnderlyings_0_0.set(UnderlyingCashAmount_30);
    UnderlyingInstrument_30.insert(UnderlyingCashAmount_30.getString());
    FIX::UnderlyingCashType UnderlyingCashType_30("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_30);
    UnderlyingInstrument_30.insert(UnderlyingCashType_30.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_30;
    UnderlyingContractMultiplier_30.setString("897472");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplier_30.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_30(545894973);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplierUnit_30.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_30("COUNTRY_1121731131");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingCountryOfIssue_30.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_30("LOCALMKTDATE_2041486920");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponPaymentDate_30.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_30;
    UnderlyingCouponRate_30.setString("56.830000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponRate_30.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_30("STRING_2052120671");
    noUnderlyings_0_0.set(UnderlyingCreditRating_30);
    UnderlyingInstrument_30.insert(UnderlyingCreditRating_30.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_30("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrency_30.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_30;
    UnderlyingCurrentValue_30.setString("21438853");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrentValue_30.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_30;
    UnderlyingDetachmentPoint_30.setString("60.940000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingDetachmentPoint_30.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_30;
    UnderlyingDirtyPrice_30.setString("5393459");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingDirtyPrice_30.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_30;
    UnderlyingEndPrice_30.setString("12442854");
    noUnderlyings_0_0.set(UnderlyingEndPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingEndPrice_30.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_30;
    UnderlyingEndValue_30.setString("3892585");
    noUnderlyings_0_0.set(UnderlyingEndValue_30);
    UnderlyingInstrument_30.insert(UnderlyingEndValue_30.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_30(1394800369);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_30);
    UnderlyingInstrument_30.insert(UnderlyingExerciseStyle_30.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_30;
    UnderlyingFXRate_30.setString("12379186");
    noUnderlyings_0_0.set(UnderlyingFXRate_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRate_30.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_30('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRateCalc_30.getString());
    FIX::UnderlyingFactor UnderlyingFactor_30;
    UnderlyingFactor_30.setString("8357751");
    noUnderlyings_0_0.set(UnderlyingFactor_30);
    UnderlyingInstrument_30.insert(UnderlyingFactor_30.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_30(126634542);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_30);
    UnderlyingInstrument_30.insert(UnderlyingFlowScheduleType_30.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_30("STRING_1736262621");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_30);
    UnderlyingInstrument_30.insert(UnderlyingInstrRegistry_30.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_30("LOCALMKTDATE_271637069");
    noUnderlyings_0_0.set(UnderlyingIssueDate_30);
    UnderlyingInstrument_30.insert(UnderlyingIssueDate_30.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_30("STRING_2138392802");
    noUnderlyings_0_0.set(UnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(UnderlyingIssuer_30.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_30("STRING_505449759");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingLocaleOfIssue_30.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_30("LOCALMKTDATE_1151792974");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityDate_30.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_30("MONTHYEAR_396994470");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityMonthYear_30.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_30("TZTIMEONLY_1842235157");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityTime_30.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_30;
    UnderlyingNotionalPercentageOutstanding_30.setString("6.200000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_30('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_30);
    UnderlyingInstrument_30.insert(UnderlyingOptAttribute_30.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_30;
    UnderlyingOriginalNotionalPercentageOutstanding_30.setString("7.750000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingOriginalNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_30("STRING_1735048955");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasure_30.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_30;
    UnderlyingPriceUnitOfMeasureQty_30.setString("6146769");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasureQty_30.getString());
    FIX::UnderlyingProduct UnderlyingProduct_30(430732199);
    noUnderlyings_0_0.set(UnderlyingProduct_30);
    UnderlyingInstrument_30.insert(UnderlyingProduct_30.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_30(1824796218);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_30);
    UnderlyingInstrument_30.insert(UnderlyingPutOrCall_30.getString());
    FIX::UnderlyingPx UnderlyingPx_30;
    UnderlyingPx_30.setString("11605719");
    noUnderlyings_0_0.set(UnderlyingPx_30);
    UnderlyingInstrument_30.insert(UnderlyingPx_30.getString());
    FIX::UnderlyingQty UnderlyingQty_30;
    UnderlyingQty_30.setString("15524633");
    noUnderlyings_0_0.set(UnderlyingQty_30);
    UnderlyingInstrument_30.insert(UnderlyingQty_30.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_30("LOCALMKTDATE_1718799490");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_30);
    UnderlyingInstrument_30.insert(UnderlyingRedemptionDate_30.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_30("STRING_1084613987");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingRepoCollateralSecurityType_30.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_30;
    UnderlyingRepurchaseRate_30.setString("3.540000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseRate_30.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_30(197906439);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseTerm_30.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_30("STRING_372359407");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_30);
    UnderlyingInstrument_30.insert(UnderlyingRestructuringType_30.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_30("STRING_1453502105");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityDesc_30.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_30("EXCHANGE_2108612533");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityExchange_30.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_30("STRING_911705308");
    noUnderlyings_0_0.set(UnderlyingSecurityID_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityID_30.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_30("STRING_550303938");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityIDSource_30.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_30("STRING_350387454");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecuritySubType_30.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_30("STRING_159022029");
    noUnderlyings_0_0.set(UnderlyingSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityType_30.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_30("STRING_1788222595");
    noUnderlyings_0_0.set(UnderlyingSeniority_30);
    UnderlyingInstrument_30.insert(UnderlyingSeniority_30.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_30("STRING_1556418721");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlMethod_30.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_30(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlementType_30.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_30;
    UnderlyingStartValue_30.setString("19148571");
    noUnderlyings_0_0.set(UnderlyingStartValue_30);
    UnderlyingInstrument_30.insert(UnderlyingStartValue_30.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_30("STRING_1145197694");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingStateOrProvinceOfIssue_30.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_30("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikeCurrency_30.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_30;
    UnderlyingStrikePrice_30.setString("16506474");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikePrice_30.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_30("STRING_270743538");
    noUnderlyings_0_0.set(UnderlyingSymbol_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbol_30.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_30("STRING_155277114");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbolSfx_30.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_30("STRING_1345398963");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingTimeUnit_30.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_30("STRING_1743494158");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasure_30.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_30;
    UnderlyingUnitOfMeasureQty_30.setString("4087");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasureQty_30.getString());
    all_values.push_back(UnderlyingInstrument_30);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_67;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_67("STRING_1331059465");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltID_67.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_67("STRING_615085729");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltIDSource_67.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_60;
      FIX::UnderlyingStipType UnderlyingStipType_60("STRING_1008372035");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_60);
      UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipType_60.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_60("STRING_1775657681");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_60);
      UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipValue_60.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_60);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_59;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_59("STRING_579687878");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyID_59.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_59('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyIDSource_59.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_59(1406098327);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_59);
      UndlyInstrumentParties_NoUndlyInstrumentParties_59.insert(UnderlyingInstrumentPartyRole_59.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_59);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_118("STRING_1085147427");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubID_118.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_118(712116785);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_118);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118.insert(UnderlyingInstrumentPartySubIDType_118.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_119("STRING_738723202");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubID_119.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_119(1996852735);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_119);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119.insert(UnderlyingInstrumentPartySubIDType_119.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_120("STRING_1262420723");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubID_120.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_120(1089110656);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_120);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120.insert(UnderlyingInstrumentPartySubIDType_120.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_31;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_31("DATA_8391117");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuer_31.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_31(903159670);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuerLen_31.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_31("DATA_498045729");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDesc_31.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_31(1003188259);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDescLen_31.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_31;
    UnderlyingAdjustedQuantity_31.setString("6705331");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_31);
    UnderlyingInstrument_31.insert(UnderlyingAdjustedQuantity_31.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_31;
    UnderlyingAllocationPercent_31.setString("34.230000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_31);
    UnderlyingInstrument_31.insert(UnderlyingAllocationPercent_31.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_31;
    UnderlyingAttachmentPoint_31.setString("88.220000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingAttachmentPoint_31.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_31("STRING_428815803");
    noUnderlyings_0_1.set(UnderlyingCFICode_31);
    UnderlyingInstrument_31.insert(UnderlyingCFICode_31.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_31("STRING_1146407229");
    noUnderlyings_0_1.set(UnderlyingCPProgram_31);
    UnderlyingInstrument_31.insert(UnderlyingCPProgram_31.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_31("STRING_392882360");
    noUnderlyings_0_1.set(UnderlyingCPRegType_31);
    UnderlyingInstrument_31.insert(UnderlyingCPRegType_31.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_31;
    UnderlyingCapValue_31.setString("5840929");
    noUnderlyings_0_1.set(UnderlyingCapValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCapValue_31.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_31;
    UnderlyingCashAmount_31.setString("3443225");
    noUnderlyings_0_1.set(UnderlyingCashAmount_31);
    UnderlyingInstrument_31.insert(UnderlyingCashAmount_31.getString());
    FIX::UnderlyingCashType UnderlyingCashType_31("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_31);
    UnderlyingInstrument_31.insert(UnderlyingCashType_31.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_31;
    UnderlyingContractMultiplier_31.setString("5845016");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplier_31.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_31(457608635);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplierUnit_31.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_31("COUNTRY_1319952336");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingCountryOfIssue_31.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_31("LOCALMKTDATE_1199587398");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponPaymentDate_31.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_31;
    UnderlyingCouponRate_31.setString("69.250000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponRate_31.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_31("STRING_180840724");
    noUnderlyings_0_1.set(UnderlyingCreditRating_31);
    UnderlyingInstrument_31.insert(UnderlyingCreditRating_31.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_31("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrency_31.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_31;
    UnderlyingCurrentValue_31.setString("7605286");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrentValue_31.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_31;
    UnderlyingDetachmentPoint_31.setString("94.510000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingDetachmentPoint_31.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_31;
    UnderlyingDirtyPrice_31.setString("2092395");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingDirtyPrice_31.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_31;
    UnderlyingEndPrice_31.setString("15381229");
    noUnderlyings_0_1.set(UnderlyingEndPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingEndPrice_31.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_31;
    UnderlyingEndValue_31.setString("4782132");
    noUnderlyings_0_1.set(UnderlyingEndValue_31);
    UnderlyingInstrument_31.insert(UnderlyingEndValue_31.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_31(921356362);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_31);
    UnderlyingInstrument_31.insert(UnderlyingExerciseStyle_31.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_31;
    UnderlyingFXRate_31.setString("1293624");
    noUnderlyings_0_1.set(UnderlyingFXRate_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRate_31.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_31('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRateCalc_31.getString());
    FIX::UnderlyingFactor UnderlyingFactor_31;
    UnderlyingFactor_31.setString("362934");
    noUnderlyings_0_1.set(UnderlyingFactor_31);
    UnderlyingInstrument_31.insert(UnderlyingFactor_31.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_31(1218473129);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_31);
    UnderlyingInstrument_31.insert(UnderlyingFlowScheduleType_31.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_31("STRING_335973435");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_31);
    UnderlyingInstrument_31.insert(UnderlyingInstrRegistry_31.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_31("LOCALMKTDATE_939453107");
    noUnderlyings_0_1.set(UnderlyingIssueDate_31);
    UnderlyingInstrument_31.insert(UnderlyingIssueDate_31.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_31("STRING_1716518858");
    noUnderlyings_0_1.set(UnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(UnderlyingIssuer_31.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_31("STRING_1339161694");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingLocaleOfIssue_31.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_31("LOCALMKTDATE_1609986267");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityDate_31.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_31("MONTHYEAR_1212278633");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityMonthYear_31.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_31("TZTIMEONLY_1461300516");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityTime_31.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_31;
    UnderlyingNotionalPercentageOutstanding_31.setString("20.700000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_31('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_31);
    UnderlyingInstrument_31.insert(UnderlyingOptAttribute_31.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_31;
    UnderlyingOriginalNotionalPercentageOutstanding_31.setString("28.770000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingOriginalNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_31("STRING_475411339");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasure_31.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_31;
    UnderlyingPriceUnitOfMeasureQty_31.setString("5555247");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasureQty_31.getString());
    FIX::UnderlyingProduct UnderlyingProduct_31(1843075748);
    noUnderlyings_0_1.set(UnderlyingProduct_31);
    UnderlyingInstrument_31.insert(UnderlyingProduct_31.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_31(1059913007);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_31);
    UnderlyingInstrument_31.insert(UnderlyingPutOrCall_31.getString());
    FIX::UnderlyingPx UnderlyingPx_31;
    UnderlyingPx_31.setString("10131333");
    noUnderlyings_0_1.set(UnderlyingPx_31);
    UnderlyingInstrument_31.insert(UnderlyingPx_31.getString());
    FIX::UnderlyingQty UnderlyingQty_31;
    UnderlyingQty_31.setString("10155444");
    noUnderlyings_0_1.set(UnderlyingQty_31);
    UnderlyingInstrument_31.insert(UnderlyingQty_31.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_31("LOCALMKTDATE_112016757");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_31);
    UnderlyingInstrument_31.insert(UnderlyingRedemptionDate_31.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_31("STRING_2014760319");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingRepoCollateralSecurityType_31.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_31;
    UnderlyingRepurchaseRate_31.setString("51.600000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseRate_31.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_31(939778188);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseTerm_31.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_31("STRING_817901569");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_31);
    UnderlyingInstrument_31.insert(UnderlyingRestructuringType_31.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_31("STRING_1956913762");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityDesc_31.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_31("EXCHANGE_332843991");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityExchange_31.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_31("STRING_1027141147");
    noUnderlyings_0_1.set(UnderlyingSecurityID_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityID_31.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_31("STRING_1347553033");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityIDSource_31.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_31("STRING_811057222");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecuritySubType_31.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_31("STRING_1948497509");
    noUnderlyings_0_1.set(UnderlyingSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityType_31.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_31("STRING_1476915506");
    noUnderlyings_0_1.set(UnderlyingSeniority_31);
    UnderlyingInstrument_31.insert(UnderlyingSeniority_31.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_31("STRING_1138639540");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlMethod_31.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_31(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlementType_31.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_31;
    UnderlyingStartValue_31.setString("5479049");
    noUnderlyings_0_1.set(UnderlyingStartValue_31);
    UnderlyingInstrument_31.insert(UnderlyingStartValue_31.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_31("STRING_1474612975");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingStateOrProvinceOfIssue_31.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_31("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikeCurrency_31.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_31;
    UnderlyingStrikePrice_31.setString("6662910");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikePrice_31.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_31("STRING_239263025");
    noUnderlyings_0_1.set(UnderlyingSymbol_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbol_31.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_31("STRING_1329218831");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbolSfx_31.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_31("STRING_2127591537");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingTimeUnit_31.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_31("STRING_130581447");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasure_31.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_31;
    UnderlyingUnitOfMeasureQty_31.setString("15404210");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasureQty_31.getString());
    all_values.push_back(UnderlyingInstrument_31);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_68;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_68("STRING_605992786");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_68);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltID_68.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_68("STRING_2095945805");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_68);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltIDSource_68.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_69;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_69("STRING_1529882866");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_69);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltID_69.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_69("STRING_1665905794");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_69);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltIDSource_69.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_61;
      FIX::UnderlyingStipType UnderlyingStipType_61("STRING_397943655");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_61);
      UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipType_61.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_61("STRING_1777922551");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_61);
      UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipValue_61.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_61);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
      FIX::UnderlyingStipType UnderlyingStipType_62("STRING_828872223");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_62);
      UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipType_62.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_62("STRING_1594328815");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_62);
      UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipValue_62.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_63;
      FIX::UnderlyingStipType UnderlyingStipType_63("STRING_570217092");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_63);
      UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipType_63.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_63("STRING_1646773793");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_63);
      UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipValue_63.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_63);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_60;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_60("STRING_903061083");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyID_60.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_60('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyIDSource_60.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_60(603828315);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyRole_60.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_60);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_121("STRING_327445153");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubID_121.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_121(2080743822);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_121);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121.insert(UnderlyingInstrumentPartySubIDType_121.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_122("STRING_705274197");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubID_122.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_122(164752452);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_122);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122.insert(UnderlyingInstrumentPartySubIDType_122.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_61;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_61("STRING_481165161");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyID_61.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_61('3');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyIDSource_61.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_61(941512859);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyRole_61.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_61);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_123("STRING_698694545");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubID_123.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_123(1180775884);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_123);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123.insert(UnderlyingInstrumentPartySubIDType_123.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
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
