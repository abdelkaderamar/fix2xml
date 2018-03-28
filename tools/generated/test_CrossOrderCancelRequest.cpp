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
  multiset<string> CrossOrderCancelRequest_0;
  FIX::CrossID CrossID_1("STRING_2041798729");
  msg.set(CrossID_1);
  CrossOrderCancelRequest_0.insert(CrossID_1.getString());
  FIX::CrossPrioritization CrossPrioritization_1(0);
  msg.set(CrossPrioritization_1);
  CrossOrderCancelRequest_0.insert(CrossPrioritization_1.getString());
  FIX::CrossType CrossType_1(2);
  msg.set(CrossType_1);
  CrossOrderCancelRequest_0.insert(CrossType_1.getString());
  FIX::HostCrossID HostCrossID_1("STRING_147019906");
  msg.set(HostCrossID_1);
  CrossOrderCancelRequest_0.insert(HostCrossID_1.getString());
  FIX::OrderID OrderID_18("STRING_340347544");
  msg.set(OrderID_18);
  CrossOrderCancelRequest_0.insert(OrderID_18.getString());
  FIX::OrigCrossID OrigCrossID_1("STRING_971985570");
  msg.set(OrigCrossID_1);
  CrossOrderCancelRequest_0.insert(OrigCrossID_1.getString());
  FIX::TransactTime TransactTime_15(FIX::UTCTIMESTAMP(22, 42, 17, 11, 9, 2004));
  msg.set(TransactTime_15);
  CrossOrderCancelRequest_0.insert(TransactTime_15.getString());
  all_values.push_back(CrossOrderCancelRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_24;
    FIX::EncodedLegIssuer EncodedLegIssuer_24("DATA_617790790");
    noLegs_0_0.set(EncodedLegIssuer_24);
    InstrumentLeg_24.insert(EncodedLegIssuer_24.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_24(140722668);
    noLegs_0_0.set(EncodedLegIssuerLen_24);
    InstrumentLeg_24.insert(EncodedLegIssuerLen_24.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_24("DATA_1294461863");
    noLegs_0_0.set(EncodedLegSecurityDesc_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDesc_24.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_24(569897434);
    noLegs_0_0.set(EncodedLegSecurityDescLen_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDescLen_24.getString());
    FIX::LegCFICode LegCFICode_24("STRING_904653584");
    noLegs_0_0.set(LegCFICode_24);
    InstrumentLeg_24.insert(LegCFICode_24.getString());
    FIX::LegContractMultiplier LegContractMultiplier_24;
    LegContractMultiplier_24.setString("21354342");
    noLegs_0_0.set(LegContractMultiplier_24);
    InstrumentLeg_24.insert(LegContractMultiplier_24.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_24(1967951228);
    noLegs_0_0.set(LegContractMultiplierUnit_24);
    InstrumentLeg_24.insert(LegContractMultiplierUnit_24.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_24("MONTHYEAR_300265276");
    noLegs_0_0.set(LegContractSettlMonth_24);
    InstrumentLeg_24.insert(LegContractSettlMonth_24.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_24("COUNTRY_436173570");
    noLegs_0_0.set(LegCountryOfIssue_24);
    InstrumentLeg_24.insert(LegCountryOfIssue_24.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_24("LOCALMKTDATE_2112064580");
    noLegs_0_0.set(LegCouponPaymentDate_24);
    InstrumentLeg_24.insert(LegCouponPaymentDate_24.getString());
    FIX::LegCouponRate LegCouponRate_24;
    LegCouponRate_24.setString("30.880000");
    noLegs_0_0.set(LegCouponRate_24);
    InstrumentLeg_24.insert(LegCouponRate_24.getString());
    FIX::LegCreditRating LegCreditRating_24("STRING_676413084");
    noLegs_0_0.set(LegCreditRating_24);
    InstrumentLeg_24.insert(LegCreditRating_24.getString());
    FIX::LegCurrency LegCurrency_24("JPY");
    noLegs_0_0.set(LegCurrency_24);
    InstrumentLeg_24.insert(LegCurrency_24.getString());
    FIX::LegDatedDate LegDatedDate_24("LOCALMKTDATE_1551049167");
    noLegs_0_0.set(LegDatedDate_24);
    InstrumentLeg_24.insert(LegDatedDate_24.getString());
    FIX::LegExerciseStyle LegExerciseStyle_24(1609471013);
    noLegs_0_0.set(LegExerciseStyle_24);
    InstrumentLeg_24.insert(LegExerciseStyle_24.getString());
    FIX::LegFactor LegFactor_24;
    LegFactor_24.setString("9463232");
    noLegs_0_0.set(LegFactor_24);
    InstrumentLeg_24.insert(LegFactor_24.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_24(1445364248);
    noLegs_0_0.set(LegFlowScheduleType_24);
    InstrumentLeg_24.insert(LegFlowScheduleType_24.getString());
    FIX::LegInstrRegistry LegInstrRegistry_24("STRING_2062365170");
    noLegs_0_0.set(LegInstrRegistry_24);
    InstrumentLeg_24.insert(LegInstrRegistry_24.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_24("LOCALMKTDATE_1407303004");
    noLegs_0_0.set(LegInterestAccrualDate_24);
    InstrumentLeg_24.insert(LegInterestAccrualDate_24.getString());
    FIX::LegIssueDate LegIssueDate_24("LOCALMKTDATE_1592384154");
    noLegs_0_0.set(LegIssueDate_24);
    InstrumentLeg_24.insert(LegIssueDate_24.getString());
    FIX::LegIssuer LegIssuer_24("STRING_255229067");
    noLegs_0_0.set(LegIssuer_24);
    InstrumentLeg_24.insert(LegIssuer_24.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_24("STRING_231804926");
    noLegs_0_0.set(LegLocaleOfIssue_24);
    InstrumentLeg_24.insert(LegLocaleOfIssue_24.getString());
    FIX::LegMaturityDate LegMaturityDate_24("LOCALMKTDATE_1443349135");
    noLegs_0_0.set(LegMaturityDate_24);
    InstrumentLeg_24.insert(LegMaturityDate_24.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_24("MONTHYEAR_834107529");
    noLegs_0_0.set(LegMaturityMonthYear_24);
    InstrumentLeg_24.insert(LegMaturityMonthYear_24.getString());
    FIX::LegMaturityTime LegMaturityTime_24("TZTIMEONLY_741630968");
    noLegs_0_0.set(LegMaturityTime_24);
    InstrumentLeg_24.insert(LegMaturityTime_24.getString());
    FIX::LegOptAttribute LegOptAttribute_24('1');
    noLegs_0_0.set(LegOptAttribute_24);
    InstrumentLeg_24.insert(LegOptAttribute_24.getString());
    FIX::LegOptionRatio LegOptionRatio_24;
    LegOptionRatio_24.setString("15748678");
    noLegs_0_0.set(LegOptionRatio_24);
    InstrumentLeg_24.insert(LegOptionRatio_24.getString());
    FIX::LegPool LegPool_24("STRING_1185399904");
    noLegs_0_0.set(LegPool_24);
    InstrumentLeg_24.insert(LegPool_24.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_24("STRING_1103055943");
    noLegs_0_0.set(LegPriceUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasure_24.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
    LegPriceUnitOfMeasureQty_24.setString("16406289");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasureQty_24.getString());
    FIX::LegProduct LegProduct_24(1803190694);
    noLegs_0_0.set(LegProduct_24);
    InstrumentLeg_24.insert(LegProduct_24.getString());
    FIX::LegPutOrCall LegPutOrCall_24(1243778611);
    noLegs_0_0.set(LegPutOrCall_24);
    InstrumentLeg_24.insert(LegPutOrCall_24.getString());
    FIX::LegRatioQty LegRatioQty_24;
    LegRatioQty_24.setString("7876071");
    noLegs_0_0.set(LegRatioQty_24);
    InstrumentLeg_24.insert(LegRatioQty_24.getString());
    FIX::LegRedemptionDate LegRedemptionDate_24("LOCALMKTDATE_225604480");
    noLegs_0_0.set(LegRedemptionDate_24);
    InstrumentLeg_24.insert(LegRedemptionDate_24.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_24("STRING_948548");
    noLegs_0_0.set(LegRepoCollateralSecurityType_24);
    InstrumentLeg_24.insert(LegRepoCollateralSecurityType_24.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_24;
    LegRepurchaseRate_24.setString("77.830000");
    noLegs_0_0.set(LegRepurchaseRate_24);
    InstrumentLeg_24.insert(LegRepurchaseRate_24.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_24(46072061);
    noLegs_0_0.set(LegRepurchaseTerm_24);
    InstrumentLeg_24.insert(LegRepurchaseTerm_24.getString());
    FIX::LegSecurityDesc LegSecurityDesc_24("STRING_301213824");
    noLegs_0_0.set(LegSecurityDesc_24);
    InstrumentLeg_24.insert(LegSecurityDesc_24.getString());
    FIX::LegSecurityExchange LegSecurityExchange_24("EXCHANGE_1211731353");
    noLegs_0_0.set(LegSecurityExchange_24);
    InstrumentLeg_24.insert(LegSecurityExchange_24.getString());
    FIX::LegSecurityID LegSecurityID_24("STRING_10652993");
    noLegs_0_0.set(LegSecurityID_24);
    InstrumentLeg_24.insert(LegSecurityID_24.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_24("STRING_1420616912");
    noLegs_0_0.set(LegSecurityIDSource_24);
    InstrumentLeg_24.insert(LegSecurityIDSource_24.getString());
    FIX::LegSecuritySubType LegSecuritySubType_24("STRING_1888144438");
    noLegs_0_0.set(LegSecuritySubType_24);
    InstrumentLeg_24.insert(LegSecuritySubType_24.getString());
    FIX::LegSecurityType LegSecurityType_24("STRING_1578099883");
    noLegs_0_0.set(LegSecurityType_24);
    InstrumentLeg_24.insert(LegSecurityType_24.getString());
    FIX::LegSide LegSide_24('1');
    noLegs_0_0.set(LegSide_24);
    InstrumentLeg_24.insert(LegSide_24.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_24("STRING_1291709957");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_24);
    InstrumentLeg_24.insert(LegStateOrProvinceOfIssue_24.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_24("JPY");
    noLegs_0_0.set(LegStrikeCurrency_24);
    InstrumentLeg_24.insert(LegStrikeCurrency_24.getString());
    FIX::LegStrikePrice LegStrikePrice_24;
    LegStrikePrice_24.setString("5895905");
    noLegs_0_0.set(LegStrikePrice_24);
    InstrumentLeg_24.insert(LegStrikePrice_24.getString());
    FIX::LegSymbol LegSymbol_24("STRING_954968771");
    noLegs_0_0.set(LegSymbol_24);
    InstrumentLeg_24.insert(LegSymbol_24.getString());
    FIX::LegSymbolSfx LegSymbolSfx_24("STRING_1940611496");
    noLegs_0_0.set(LegSymbolSfx_24);
    InstrumentLeg_24.insert(LegSymbolSfx_24.getString());
    FIX::LegTimeUnit LegTimeUnit_24("STRING_34491064");
    noLegs_0_0.set(LegTimeUnit_24);
    InstrumentLeg_24.insert(LegTimeUnit_24.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_24("STRING_1210197838");
    noLegs_0_0.set(LegUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegUnitOfMeasure_24.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
    LegUnitOfMeasureQty_24.setString("249327");
    noLegs_0_0.set(LegUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegUnitOfMeasureQty_24.getString());
    all_values.push_back(InstrumentLeg_24);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_44;
      FIX::LegSecurityAltID LegSecurityAltID_44("STRING_2044305367");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_44);
      LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltID_44.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_44("STRING_766563742");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_44);
      LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltIDSource_44.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_44);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_45;
      FIX::LegSecurityAltID LegSecurityAltID_45("STRING_732433856");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_45);
      LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltID_45.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_45("STRING_1471689531");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_45);
      LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltIDSource_45.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_45);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_46;
      FIX::LegSecurityAltID LegSecurityAltID_46("STRING_1951963646");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_46);
      LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltID_46.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_46("STRING_1835489799");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_46);
      LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltIDSource_46.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_46);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_25;
    FIX::EncodedLegIssuer EncodedLegIssuer_25("DATA_964834864");
    noLegs_0_1.set(EncodedLegIssuer_25);
    InstrumentLeg_25.insert(EncodedLegIssuer_25.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_25(1607670692);
    noLegs_0_1.set(EncodedLegIssuerLen_25);
    InstrumentLeg_25.insert(EncodedLegIssuerLen_25.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_25("DATA_931784763");
    noLegs_0_1.set(EncodedLegSecurityDesc_25);
    InstrumentLeg_25.insert(EncodedLegSecurityDesc_25.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_25(1752442061);
    noLegs_0_1.set(EncodedLegSecurityDescLen_25);
    InstrumentLeg_25.insert(EncodedLegSecurityDescLen_25.getString());
    FIX::LegCFICode LegCFICode_25("STRING_1833275172");
    noLegs_0_1.set(LegCFICode_25);
    InstrumentLeg_25.insert(LegCFICode_25.getString());
    FIX::LegContractMultiplier LegContractMultiplier_25;
    LegContractMultiplier_25.setString("9327333");
    noLegs_0_1.set(LegContractMultiplier_25);
    InstrumentLeg_25.insert(LegContractMultiplier_25.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_25(380516196);
    noLegs_0_1.set(LegContractMultiplierUnit_25);
    InstrumentLeg_25.insert(LegContractMultiplierUnit_25.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_25("MONTHYEAR_1879347233");
    noLegs_0_1.set(LegContractSettlMonth_25);
    InstrumentLeg_25.insert(LegContractSettlMonth_25.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_25("COUNTRY_1233947135");
    noLegs_0_1.set(LegCountryOfIssue_25);
    InstrumentLeg_25.insert(LegCountryOfIssue_25.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_25("LOCALMKTDATE_1592247550");
    noLegs_0_1.set(LegCouponPaymentDate_25);
    InstrumentLeg_25.insert(LegCouponPaymentDate_25.getString());
    FIX::LegCouponRate LegCouponRate_25;
    LegCouponRate_25.setString("2.260000");
    noLegs_0_1.set(LegCouponRate_25);
    InstrumentLeg_25.insert(LegCouponRate_25.getString());
    FIX::LegCreditRating LegCreditRating_25("STRING_507080400");
    noLegs_0_1.set(LegCreditRating_25);
    InstrumentLeg_25.insert(LegCreditRating_25.getString());
    FIX::LegCurrency LegCurrency_25("CHF");
    noLegs_0_1.set(LegCurrency_25);
    InstrumentLeg_25.insert(LegCurrency_25.getString());
    FIX::LegDatedDate LegDatedDate_25("LOCALMKTDATE_94065665");
    noLegs_0_1.set(LegDatedDate_25);
    InstrumentLeg_25.insert(LegDatedDate_25.getString());
    FIX::LegExerciseStyle LegExerciseStyle_25(477134649);
    noLegs_0_1.set(LegExerciseStyle_25);
    InstrumentLeg_25.insert(LegExerciseStyle_25.getString());
    FIX::LegFactor LegFactor_25;
    LegFactor_25.setString("2132200");
    noLegs_0_1.set(LegFactor_25);
    InstrumentLeg_25.insert(LegFactor_25.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_25(627374157);
    noLegs_0_1.set(LegFlowScheduleType_25);
    InstrumentLeg_25.insert(LegFlowScheduleType_25.getString());
    FIX::LegInstrRegistry LegInstrRegistry_25("STRING_1066725206");
    noLegs_0_1.set(LegInstrRegistry_25);
    InstrumentLeg_25.insert(LegInstrRegistry_25.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_25("LOCALMKTDATE_1168188833");
    noLegs_0_1.set(LegInterestAccrualDate_25);
    InstrumentLeg_25.insert(LegInterestAccrualDate_25.getString());
    FIX::LegIssueDate LegIssueDate_25("LOCALMKTDATE_420502005");
    noLegs_0_1.set(LegIssueDate_25);
    InstrumentLeg_25.insert(LegIssueDate_25.getString());
    FIX::LegIssuer LegIssuer_25("STRING_1101216270");
    noLegs_0_1.set(LegIssuer_25);
    InstrumentLeg_25.insert(LegIssuer_25.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_25("STRING_230903023");
    noLegs_0_1.set(LegLocaleOfIssue_25);
    InstrumentLeg_25.insert(LegLocaleOfIssue_25.getString());
    FIX::LegMaturityDate LegMaturityDate_25("LOCALMKTDATE_445434779");
    noLegs_0_1.set(LegMaturityDate_25);
    InstrumentLeg_25.insert(LegMaturityDate_25.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_25("MONTHYEAR_431572822");
    noLegs_0_1.set(LegMaturityMonthYear_25);
    InstrumentLeg_25.insert(LegMaturityMonthYear_25.getString());
    FIX::LegMaturityTime LegMaturityTime_25("TZTIMEONLY_127724742");
    noLegs_0_1.set(LegMaturityTime_25);
    InstrumentLeg_25.insert(LegMaturityTime_25.getString());
    FIX::LegOptAttribute LegOptAttribute_25('1');
    noLegs_0_1.set(LegOptAttribute_25);
    InstrumentLeg_25.insert(LegOptAttribute_25.getString());
    FIX::LegOptionRatio LegOptionRatio_25;
    LegOptionRatio_25.setString("11640066");
    noLegs_0_1.set(LegOptionRatio_25);
    InstrumentLeg_25.insert(LegOptionRatio_25.getString());
    FIX::LegPool LegPool_25("STRING_1599414273");
    noLegs_0_1.set(LegPool_25);
    InstrumentLeg_25.insert(LegPool_25.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_25("STRING_1016478519");
    noLegs_0_1.set(LegPriceUnitOfMeasure_25);
    InstrumentLeg_25.insert(LegPriceUnitOfMeasure_25.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
    LegPriceUnitOfMeasureQty_25.setString("8520128");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_25);
    InstrumentLeg_25.insert(LegPriceUnitOfMeasureQty_25.getString());
    FIX::LegProduct LegProduct_25(416765489);
    noLegs_0_1.set(LegProduct_25);
    InstrumentLeg_25.insert(LegProduct_25.getString());
    FIX::LegPutOrCall LegPutOrCall_25(476665563);
    noLegs_0_1.set(LegPutOrCall_25);
    InstrumentLeg_25.insert(LegPutOrCall_25.getString());
    FIX::LegRatioQty LegRatioQty_25;
    LegRatioQty_25.setString("17837975");
    noLegs_0_1.set(LegRatioQty_25);
    InstrumentLeg_25.insert(LegRatioQty_25.getString());
    FIX::LegRedemptionDate LegRedemptionDate_25("LOCALMKTDATE_21723903");
    noLegs_0_1.set(LegRedemptionDate_25);
    InstrumentLeg_25.insert(LegRedemptionDate_25.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_25("STRING_162457087");
    noLegs_0_1.set(LegRepoCollateralSecurityType_25);
    InstrumentLeg_25.insert(LegRepoCollateralSecurityType_25.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_25;
    LegRepurchaseRate_25.setString("72.560000");
    noLegs_0_1.set(LegRepurchaseRate_25);
    InstrumentLeg_25.insert(LegRepurchaseRate_25.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_25(402240099);
    noLegs_0_1.set(LegRepurchaseTerm_25);
    InstrumentLeg_25.insert(LegRepurchaseTerm_25.getString());
    FIX::LegSecurityDesc LegSecurityDesc_25("STRING_2041804321");
    noLegs_0_1.set(LegSecurityDesc_25);
    InstrumentLeg_25.insert(LegSecurityDesc_25.getString());
    FIX::LegSecurityExchange LegSecurityExchange_25("EXCHANGE_1802994391");
    noLegs_0_1.set(LegSecurityExchange_25);
    InstrumentLeg_25.insert(LegSecurityExchange_25.getString());
    FIX::LegSecurityID LegSecurityID_25("STRING_1994487649");
    noLegs_0_1.set(LegSecurityID_25);
    InstrumentLeg_25.insert(LegSecurityID_25.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_25("STRING_1784320899");
    noLegs_0_1.set(LegSecurityIDSource_25);
    InstrumentLeg_25.insert(LegSecurityIDSource_25.getString());
    FIX::LegSecuritySubType LegSecuritySubType_25("STRING_162591143");
    noLegs_0_1.set(LegSecuritySubType_25);
    InstrumentLeg_25.insert(LegSecuritySubType_25.getString());
    FIX::LegSecurityType LegSecurityType_25("STRING_1179912341");
    noLegs_0_1.set(LegSecurityType_25);
    InstrumentLeg_25.insert(LegSecurityType_25.getString());
    FIX::LegSide LegSide_25('9');
    noLegs_0_1.set(LegSide_25);
    InstrumentLeg_25.insert(LegSide_25.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_25("STRING_256656808");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_25);
    InstrumentLeg_25.insert(LegStateOrProvinceOfIssue_25.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_25("CAN");
    noLegs_0_1.set(LegStrikeCurrency_25);
    InstrumentLeg_25.insert(LegStrikeCurrency_25.getString());
    FIX::LegStrikePrice LegStrikePrice_25;
    LegStrikePrice_25.setString("8840309");
    noLegs_0_1.set(LegStrikePrice_25);
    InstrumentLeg_25.insert(LegStrikePrice_25.getString());
    FIX::LegSymbol LegSymbol_25("STRING_576288549");
    noLegs_0_1.set(LegSymbol_25);
    InstrumentLeg_25.insert(LegSymbol_25.getString());
    FIX::LegSymbolSfx LegSymbolSfx_25("STRING_191378960");
    noLegs_0_1.set(LegSymbolSfx_25);
    InstrumentLeg_25.insert(LegSymbolSfx_25.getString());
    FIX::LegTimeUnit LegTimeUnit_25("STRING_1304532970");
    noLegs_0_1.set(LegTimeUnit_25);
    InstrumentLeg_25.insert(LegTimeUnit_25.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_25("STRING_1677504819");
    noLegs_0_1.set(LegUnitOfMeasure_25);
    InstrumentLeg_25.insert(LegUnitOfMeasure_25.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
    LegUnitOfMeasureQty_25.setString("4222819");
    noLegs_0_1.set(LegUnitOfMeasureQty_25);
    InstrumentLeg_25.insert(LegUnitOfMeasureQty_25.getString());
    all_values.push_back(InstrumentLeg_25);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_47;
      FIX::LegSecurityAltID LegSecurityAltID_47("STRING_2109077641");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_47);
      LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltID_47.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_47("STRING_550006725");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_47);
      LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltIDSource_47.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_47);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_26;
    FIX::EncodedLegIssuer EncodedLegIssuer_26("DATA_814482622");
    noLegs_0_2.set(EncodedLegIssuer_26);
    InstrumentLeg_26.insert(EncodedLegIssuer_26.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_26(1125600672);
    noLegs_0_2.set(EncodedLegIssuerLen_26);
    InstrumentLeg_26.insert(EncodedLegIssuerLen_26.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_26("DATA_1937350");
    noLegs_0_2.set(EncodedLegSecurityDesc_26);
    InstrumentLeg_26.insert(EncodedLegSecurityDesc_26.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_26(1830961141);
    noLegs_0_2.set(EncodedLegSecurityDescLen_26);
    InstrumentLeg_26.insert(EncodedLegSecurityDescLen_26.getString());
    FIX::LegCFICode LegCFICode_26("STRING_1977613502");
    noLegs_0_2.set(LegCFICode_26);
    InstrumentLeg_26.insert(LegCFICode_26.getString());
    FIX::LegContractMultiplier LegContractMultiplier_26;
    LegContractMultiplier_26.setString("4187028");
    noLegs_0_2.set(LegContractMultiplier_26);
    InstrumentLeg_26.insert(LegContractMultiplier_26.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_26(160143056);
    noLegs_0_2.set(LegContractMultiplierUnit_26);
    InstrumentLeg_26.insert(LegContractMultiplierUnit_26.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_26("MONTHYEAR_1613927447");
    noLegs_0_2.set(LegContractSettlMonth_26);
    InstrumentLeg_26.insert(LegContractSettlMonth_26.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_26("COUNTRY_440426742");
    noLegs_0_2.set(LegCountryOfIssue_26);
    InstrumentLeg_26.insert(LegCountryOfIssue_26.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_26("LOCALMKTDATE_322600144");
    noLegs_0_2.set(LegCouponPaymentDate_26);
    InstrumentLeg_26.insert(LegCouponPaymentDate_26.getString());
    FIX::LegCouponRate LegCouponRate_26;
    LegCouponRate_26.setString("10.550000");
    noLegs_0_2.set(LegCouponRate_26);
    InstrumentLeg_26.insert(LegCouponRate_26.getString());
    FIX::LegCreditRating LegCreditRating_26("STRING_842666842");
    noLegs_0_2.set(LegCreditRating_26);
    InstrumentLeg_26.insert(LegCreditRating_26.getString());
    FIX::LegCurrency LegCurrency_26("USD");
    noLegs_0_2.set(LegCurrency_26);
    InstrumentLeg_26.insert(LegCurrency_26.getString());
    FIX::LegDatedDate LegDatedDate_26("LOCALMKTDATE_689670843");
    noLegs_0_2.set(LegDatedDate_26);
    InstrumentLeg_26.insert(LegDatedDate_26.getString());
    FIX::LegExerciseStyle LegExerciseStyle_26(2001241716);
    noLegs_0_2.set(LegExerciseStyle_26);
    InstrumentLeg_26.insert(LegExerciseStyle_26.getString());
    FIX::LegFactor LegFactor_26;
    LegFactor_26.setString("20010765");
    noLegs_0_2.set(LegFactor_26);
    InstrumentLeg_26.insert(LegFactor_26.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_26(1869583185);
    noLegs_0_2.set(LegFlowScheduleType_26);
    InstrumentLeg_26.insert(LegFlowScheduleType_26.getString());
    FIX::LegInstrRegistry LegInstrRegistry_26("STRING_811211781");
    noLegs_0_2.set(LegInstrRegistry_26);
    InstrumentLeg_26.insert(LegInstrRegistry_26.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_26("LOCALMKTDATE_110249750");
    noLegs_0_2.set(LegInterestAccrualDate_26);
    InstrumentLeg_26.insert(LegInterestAccrualDate_26.getString());
    FIX::LegIssueDate LegIssueDate_26("LOCALMKTDATE_1379146527");
    noLegs_0_2.set(LegIssueDate_26);
    InstrumentLeg_26.insert(LegIssueDate_26.getString());
    FIX::LegIssuer LegIssuer_26("STRING_1981885556");
    noLegs_0_2.set(LegIssuer_26);
    InstrumentLeg_26.insert(LegIssuer_26.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_26("STRING_994280716");
    noLegs_0_2.set(LegLocaleOfIssue_26);
    InstrumentLeg_26.insert(LegLocaleOfIssue_26.getString());
    FIX::LegMaturityDate LegMaturityDate_26("LOCALMKTDATE_1955435076");
    noLegs_0_2.set(LegMaturityDate_26);
    InstrumentLeg_26.insert(LegMaturityDate_26.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_26("MONTHYEAR_25780868");
    noLegs_0_2.set(LegMaturityMonthYear_26);
    InstrumentLeg_26.insert(LegMaturityMonthYear_26.getString());
    FIX::LegMaturityTime LegMaturityTime_26("TZTIMEONLY_151330038");
    noLegs_0_2.set(LegMaturityTime_26);
    InstrumentLeg_26.insert(LegMaturityTime_26.getString());
    FIX::LegOptAttribute LegOptAttribute_26('1');
    noLegs_0_2.set(LegOptAttribute_26);
    InstrumentLeg_26.insert(LegOptAttribute_26.getString());
    FIX::LegOptionRatio LegOptionRatio_26;
    LegOptionRatio_26.setString("4480628");
    noLegs_0_2.set(LegOptionRatio_26);
    InstrumentLeg_26.insert(LegOptionRatio_26.getString());
    FIX::LegPool LegPool_26("STRING_1901297788");
    noLegs_0_2.set(LegPool_26);
    InstrumentLeg_26.insert(LegPool_26.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_26("STRING_1447050241");
    noLegs_0_2.set(LegPriceUnitOfMeasure_26);
    InstrumentLeg_26.insert(LegPriceUnitOfMeasure_26.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_26;
    LegPriceUnitOfMeasureQty_26.setString("9980695");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_26);
    InstrumentLeg_26.insert(LegPriceUnitOfMeasureQty_26.getString());
    FIX::LegProduct LegProduct_26(568296762);
    noLegs_0_2.set(LegProduct_26);
    InstrumentLeg_26.insert(LegProduct_26.getString());
    FIX::LegPutOrCall LegPutOrCall_26(425167265);
    noLegs_0_2.set(LegPutOrCall_26);
    InstrumentLeg_26.insert(LegPutOrCall_26.getString());
    FIX::LegRatioQty LegRatioQty_26;
    LegRatioQty_26.setString("10000069");
    noLegs_0_2.set(LegRatioQty_26);
    InstrumentLeg_26.insert(LegRatioQty_26.getString());
    FIX::LegRedemptionDate LegRedemptionDate_26("LOCALMKTDATE_251774256");
    noLegs_0_2.set(LegRedemptionDate_26);
    InstrumentLeg_26.insert(LegRedemptionDate_26.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_26("STRING_255297119");
    noLegs_0_2.set(LegRepoCollateralSecurityType_26);
    InstrumentLeg_26.insert(LegRepoCollateralSecurityType_26.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_26;
    LegRepurchaseRate_26.setString("97.660000");
    noLegs_0_2.set(LegRepurchaseRate_26);
    InstrumentLeg_26.insert(LegRepurchaseRate_26.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_26(411917312);
    noLegs_0_2.set(LegRepurchaseTerm_26);
    InstrumentLeg_26.insert(LegRepurchaseTerm_26.getString());
    FIX::LegSecurityDesc LegSecurityDesc_26("STRING_1869224566");
    noLegs_0_2.set(LegSecurityDesc_26);
    InstrumentLeg_26.insert(LegSecurityDesc_26.getString());
    FIX::LegSecurityExchange LegSecurityExchange_26("EXCHANGE_1859136508");
    noLegs_0_2.set(LegSecurityExchange_26);
    InstrumentLeg_26.insert(LegSecurityExchange_26.getString());
    FIX::LegSecurityID LegSecurityID_26("STRING_734517456");
    noLegs_0_2.set(LegSecurityID_26);
    InstrumentLeg_26.insert(LegSecurityID_26.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_26("STRING_1904715621");
    noLegs_0_2.set(LegSecurityIDSource_26);
    InstrumentLeg_26.insert(LegSecurityIDSource_26.getString());
    FIX::LegSecuritySubType LegSecuritySubType_26("STRING_554319702");
    noLegs_0_2.set(LegSecuritySubType_26);
    InstrumentLeg_26.insert(LegSecuritySubType_26.getString());
    FIX::LegSecurityType LegSecurityType_26("STRING_951438273");
    noLegs_0_2.set(LegSecurityType_26);
    InstrumentLeg_26.insert(LegSecurityType_26.getString());
    FIX::LegSide LegSide_26('1');
    noLegs_0_2.set(LegSide_26);
    InstrumentLeg_26.insert(LegSide_26.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_26("STRING_1243990546");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_26);
    InstrumentLeg_26.insert(LegStateOrProvinceOfIssue_26.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_26("USD");
    noLegs_0_2.set(LegStrikeCurrency_26);
    InstrumentLeg_26.insert(LegStrikeCurrency_26.getString());
    FIX::LegStrikePrice LegStrikePrice_26;
    LegStrikePrice_26.setString("9660900");
    noLegs_0_2.set(LegStrikePrice_26);
    InstrumentLeg_26.insert(LegStrikePrice_26.getString());
    FIX::LegSymbol LegSymbol_26("STRING_1616408123");
    noLegs_0_2.set(LegSymbol_26);
    InstrumentLeg_26.insert(LegSymbol_26.getString());
    FIX::LegSymbolSfx LegSymbolSfx_26("STRING_1559560112");
    noLegs_0_2.set(LegSymbolSfx_26);
    InstrumentLeg_26.insert(LegSymbolSfx_26.getString());
    FIX::LegTimeUnit LegTimeUnit_26("STRING_197752962");
    noLegs_0_2.set(LegTimeUnit_26);
    InstrumentLeg_26.insert(LegTimeUnit_26.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_26("STRING_1450810032");
    noLegs_0_2.set(LegUnitOfMeasure_26);
    InstrumentLeg_26.insert(LegUnitOfMeasure_26.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_26;
    LegUnitOfMeasureQty_26.setString("4063571");
    noLegs_0_2.set(LegUnitOfMeasureQty_26);
    InstrumentLeg_26.insert(LegUnitOfMeasureQty_26.getString());
    all_values.push_back(InstrumentLeg_26);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_48;
      FIX::LegSecurityAltID LegSecurityAltID_48("STRING_1476590900");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_48);
      LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltID_48.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_48("STRING_557687219");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_48);
      LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltIDSource_48.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_48);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
      FIX::LegSecurityAltID LegSecurityAltID_49("STRING_1491160639");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltID_49.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_49("STRING_1924653752");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltIDSource_49.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_50;
      FIX::LegSecurityAltID LegSecurityAltID_50("STRING_311501359");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_50);
      LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltID_50.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_50("STRING_790727232");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_50);
      LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltIDSource_50.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_50);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_17;
  FIX::AttachmentPoint AttachmentPoint_17;
  AttachmentPoint_17.setString("96.800000");
  msg.set(AttachmentPoint_17);
  Instrument_17.insert(AttachmentPoint_17.getString());
  FIX::CFICode CFICode_17("STRING_879798121");
  msg.set(CFICode_17);
  Instrument_17.insert(CFICode_17.getString());
  FIX::CPProgram CPProgram_17(1);
  msg.set(CPProgram_17);
  Instrument_17.insert(CPProgram_17.getString());
  FIX::CPRegType CPRegType_17("STRING_1775246607");
  msg.set(CPRegType_17);
  Instrument_17.insert(CPRegType_17.getString());
  FIX::CapPrice CapPrice_17;
  CapPrice_17.setString("11315723");
  msg.set(CapPrice_17);
  Instrument_17.insert(CapPrice_17.getString());
  FIX::ContractMultiplier ContractMultiplier_17;
  ContractMultiplier_17.setString("14711916");
  msg.set(ContractMultiplier_17);
  Instrument_17.insert(ContractMultiplier_17.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_17(2);
  msg.set(ContractMultiplierUnit_17);
  Instrument_17.insert(ContractMultiplierUnit_17.getString());
  FIX::ContractSettlMonth ContractSettlMonth_17("MONTHYEAR_1543489690");
  msg.set(ContractSettlMonth_17);
  Instrument_17.insert(ContractSettlMonth_17.getString());
  FIX::CountryOfIssue CountryOfIssue_17("COUNTRY_1192932536");
  msg.set(CountryOfIssue_17);
  Instrument_17.insert(CountryOfIssue_17.getString());
  FIX::CouponPaymentDate CouponPaymentDate_17("LOCALMKTDATE_758125585");
  msg.set(CouponPaymentDate_17);
  Instrument_17.insert(CouponPaymentDate_17.getString());
  FIX::CouponRate CouponRate_17;
  CouponRate_17.setString("34.980000");
  msg.set(CouponRate_17);
  Instrument_17.insert(CouponRate_17.getString());
  FIX::CreditRating CreditRating_17("STRING_950164509");
  msg.set(CreditRating_17);
  Instrument_17.insert(CreditRating_17.getString());
  FIX::DatedDate DatedDate_17("LOCALMKTDATE_1312445288");
  msg.set(DatedDate_17);
  Instrument_17.insert(DatedDate_17.getString());
  FIX::DetachmentPoint DetachmentPoint_17;
  DetachmentPoint_17.setString("17.720000");
  msg.set(DetachmentPoint_17);
  Instrument_17.insert(DetachmentPoint_17.getString());
  FIX::EncodedIssuer EncodedIssuer_17("DATA_398398281");
  msg.set(EncodedIssuer_17);
  Instrument_17.insert(EncodedIssuer_17.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_17(408952186);
  msg.set(EncodedIssuerLen_17);
  Instrument_17.insert(EncodedIssuerLen_17.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_17("DATA_1887158114");
  msg.set(EncodedSecurityDesc_17);
  Instrument_17.insert(EncodedSecurityDesc_17.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_17(1847708643);
  msg.set(EncodedSecurityDescLen_17);
  Instrument_17.insert(EncodedSecurityDescLen_17.getString());
  FIX::ExerciseStyle ExerciseStyle_17(0);
  msg.set(ExerciseStyle_17);
  Instrument_17.insert(ExerciseStyle_17.getString());
  FIX::Factor Factor_17;
  Factor_17.setString("13560825");
  msg.set(Factor_17);
  Instrument_17.insert(Factor_17.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_17(true);
  msg.set(FlexProductEligibilityIndicator_17);
  Instrument_17.insert(FlexProductEligibilityIndicator_17.getString());
  FIX::FlexibleIndicator FlexibleIndicator_17(false);
  msg.set(FlexibleIndicator_17);
  Instrument_17.insert(FlexibleIndicator_17.getString());
  FIX::FloorPrice FloorPrice_17;
  FloorPrice_17.setString("6594089");
  msg.set(FloorPrice_17);
  Instrument_17.insert(FloorPrice_17.getString());
  FIX::FlowScheduleType FlowScheduleType_17(3);
  msg.set(FlowScheduleType_17);
  Instrument_17.insert(FlowScheduleType_17.getString());
  FIX::InstrRegistry InstrRegistry_17("STRING_1578499622");
  msg.set(InstrRegistry_17);
  Instrument_17.insert(InstrRegistry_17.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_17('2');
  msg.set(InstrmtAssignmentMethod_17);
  Instrument_17.insert(InstrmtAssignmentMethod_17.getString());
  FIX::InterestAccrualDate InterestAccrualDate_17("LOCALMKTDATE_76345859");
  msg.set(InterestAccrualDate_17);
  Instrument_17.insert(InterestAccrualDate_17.getString());
  FIX::IssueDate IssueDate_17("LOCALMKTDATE_922176613");
  msg.set(IssueDate_17);
  Instrument_17.insert(IssueDate_17.getString());
  FIX::Issuer Issuer_17("STRING_1913169978");
  msg.set(Issuer_17);
  Instrument_17.insert(Issuer_17.getString());
  FIX::ListMethod ListMethod_17(0);
  msg.set(ListMethod_17);
  Instrument_17.insert(ListMethod_17.getString());
  FIX::LocaleOfIssue LocaleOfIssue_17("STRING_1712903846");
  msg.set(LocaleOfIssue_17);
  Instrument_17.insert(LocaleOfIssue_17.getString());
  FIX::MaturityDate MaturityDate_17("LOCALMKTDATE_540926010");
  msg.set(MaturityDate_17);
  Instrument_17.insert(MaturityDate_17.getString());
  FIX::MaturityMonthYear MaturityMonthYear_17("MONTHYEAR_1267645340");
  msg.set(MaturityMonthYear_17);
  Instrument_17.insert(MaturityMonthYear_17.getString());
  FIX::MaturityTime MaturityTime_17("TZTIMEONLY_781314696");
  msg.set(MaturityTime_17);
  Instrument_17.insert(MaturityTime_17.getString());
  FIX::MinPriceIncrement MinPriceIncrement_17;
  MinPriceIncrement_17.setString("1686889");
  msg.set(MinPriceIncrement_17);
  Instrument_17.insert(MinPriceIncrement_17.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_17;
  MinPriceIncrementAmount_17.setString("2517340");
  msg.set(MinPriceIncrementAmount_17);
  Instrument_17.insert(MinPriceIncrementAmount_17.getString());
  FIX::NTPositionLimit NTPositionLimit_17(105022665);
  msg.set(NTPositionLimit_17);
  Instrument_17.insert(NTPositionLimit_17.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_17;
  NotionalPercentageOutstanding_17.setString("16.940000");
  msg.set(NotionalPercentageOutstanding_17);
  Instrument_17.insert(NotionalPercentageOutstanding_17.getString());
  FIX::OptAttribute OptAttribute_17('1');
  msg.set(OptAttribute_17);
  Instrument_17.insert(OptAttribute_17.getString());
  FIX::OptPayoutAmount OptPayoutAmount_17;
  OptPayoutAmount_17.setString("12979552");
  msg.set(OptPayoutAmount_17);
  Instrument_17.insert(OptPayoutAmount_17.getString());
  FIX::OptPayoutType OptPayoutType_17(3);
  msg.set(OptPayoutType_17);
  Instrument_17.insert(OptPayoutType_17.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_17;
  OriginalNotionalPercentageOutstanding_17.setString("72.580000");
  msg.set(OriginalNotionalPercentageOutstanding_17);
  Instrument_17.insert(OriginalNotionalPercentageOutstanding_17.getString());
  FIX::Pool Pool_17("STRING_100636063");
  msg.set(Pool_17);
  Instrument_17.insert(Pool_17.getString());
  FIX::PositionLimit PositionLimit_17(1138248920);
  msg.set(PositionLimit_17);
  Instrument_17.insert(PositionLimit_17.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_17("STRING_INT");
  msg.set(PriceQuoteMethod_17);
  Instrument_17.insert(PriceQuoteMethod_17.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_17("STRING_499034344");
  msg.set(PriceUnitOfMeasure_17);
  Instrument_17.insert(PriceUnitOfMeasure_17.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_17;
  PriceUnitOfMeasureQty_17.setString("15472011");
  msg.set(PriceUnitOfMeasureQty_17);
  Instrument_17.insert(PriceUnitOfMeasureQty_17.getString());
  FIX::Product Product_19(3);
  msg.set(Product_19);
  Instrument_17.insert(Product_19.getString());
  FIX::ProductComplex ProductComplex_17("STRING_199259340");
  msg.set(ProductComplex_17);
  Instrument_17.insert(ProductComplex_17.getString());
  FIX::PutOrCall PutOrCall_17(1);
  msg.set(PutOrCall_17);
  Instrument_17.insert(PutOrCall_17.getString());
  FIX::RedemptionDate RedemptionDate_17("LOCALMKTDATE_1955982437");
  msg.set(RedemptionDate_17);
  Instrument_17.insert(RedemptionDate_17.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_17("STRING_1459044448");
  msg.set(RepoCollateralSecurityType_17);
  Instrument_17.insert(RepoCollateralSecurityType_17.getString());
  FIX::RepurchaseRate RepurchaseRate_17;
  RepurchaseRate_17.setString("13.100000");
  msg.set(RepurchaseRate_17);
  Instrument_17.insert(RepurchaseRate_17.getString());
  FIX::RepurchaseTerm RepurchaseTerm_17(467907763);
  msg.set(RepurchaseTerm_17);
  Instrument_17.insert(RepurchaseTerm_17.getString());
  FIX::RestructuringType RestructuringType_17("STRING_FR");
  msg.set(RestructuringType_17);
  Instrument_17.insert(RestructuringType_17.getString());
  FIX::SecurityDesc SecurityDesc_17("STRING_1778570933");
  msg.set(SecurityDesc_17);
  Instrument_17.insert(SecurityDesc_17.getString());
  FIX::SecurityExchange SecurityExchange_17("EXCHANGE_456423989");
  msg.set(SecurityExchange_17);
  Instrument_17.insert(SecurityExchange_17.getString());
  FIX::SecurityGroup SecurityGroup_17("STRING_1054048948");
  msg.set(SecurityGroup_17);
  Instrument_17.insert(SecurityGroup_17.getString());
  FIX::SecurityID SecurityID_17("STRING_553263898");
  msg.set(SecurityID_17);
  Instrument_17.insert(SecurityID_17.getString());
  FIX::SecurityIDSource SecurityIDSource_17("STRING_E");
  msg.set(SecurityIDSource_17);
  Instrument_17.insert(SecurityIDSource_17.getString());
  FIX::SecurityStatus SecurityStatus_17("STRING_1");
  msg.set(SecurityStatus_17);
  Instrument_17.insert(SecurityStatus_17.getString());
  FIX::SecuritySubType SecuritySubType_17("STRING_118684096");
  msg.set(SecuritySubType_17);
  Instrument_17.insert(SecuritySubType_17.getString());
  FIX::SecurityType SecurityType_19("STRING_EUCD");
  msg.set(SecurityType_19);
  Instrument_17.insert(SecurityType_19.getString());
  FIX::Seniority Seniority_17("STRING_SR");
  msg.set(Seniority_17);
  Instrument_17.insert(Seniority_17.getString());
  FIX::SettlMethod SettlMethod_17('C');
  msg.set(SettlMethod_17);
  Instrument_17.insert(SettlMethod_17.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_17("STRING_931725299");
  msg.set(SettleOnOpenFlag_17);
  Instrument_17.insert(SettleOnOpenFlag_17.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_17("STRING_813791928");
  msg.set(StateOrProvinceOfIssue_17);
  Instrument_17.insert(StateOrProvinceOfIssue_17.getString());
  FIX::StrikeCurrency StrikeCurrency_17("CAN");
  msg.set(StrikeCurrency_17);
  Instrument_17.insert(StrikeCurrency_17.getString());
  FIX::StrikeMultiplier StrikeMultiplier_17;
  StrikeMultiplier_17.setString("4615320");
  msg.set(StrikeMultiplier_17);
  Instrument_17.insert(StrikeMultiplier_17.getString());
  FIX::StrikePrice StrikePrice_17;
  StrikePrice_17.setString("1554930");
  msg.set(StrikePrice_17);
  Instrument_17.insert(StrikePrice_17.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_17(1);
  msg.set(StrikePriceBoundaryMethod_17);
  Instrument_17.insert(StrikePriceBoundaryMethod_17.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_17;
  StrikePriceBoundaryPrecision_17.setString("56.490000");
  msg.set(StrikePriceBoundaryPrecision_17);
  Instrument_17.insert(StrikePriceBoundaryPrecision_17.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_17(3);
  msg.set(StrikePriceDeterminationMethod_17);
  Instrument_17.insert(StrikePriceDeterminationMethod_17.getString());
  FIX::StrikeValue StrikeValue_17;
  StrikeValue_17.setString("9634558");
  msg.set(StrikeValue_17);
  Instrument_17.insert(StrikeValue_17.getString());
  FIX::Symbol Symbol_17("STRING_1100021031");
  msg.set(Symbol_17);
  Instrument_17.insert(Symbol_17.getString());
  FIX::SymbolSfx SymbolSfx_17("STRING_WI");
  msg.set(SymbolSfx_17);
  Instrument_17.insert(SymbolSfx_17.getString());
  FIX::TimeUnit TimeUnit_17("STRING_Yr");
  msg.set(TimeUnit_17);
  Instrument_17.insert(TimeUnit_17.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_17(4);
  msg.set(UnderlyingPriceDeterminationMethod_17);
  Instrument_17.insert(UnderlyingPriceDeterminationMethod_17.getString());
  FIX::UnitOfMeasure UnitOfMeasure_17("STRING_Bbl");
  msg.set(UnitOfMeasure_17);
  Instrument_17.insert(UnitOfMeasure_17.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_17;
  UnitOfMeasureQty_17.setString("11379330");
  msg.set(UnitOfMeasureQty_17);
  Instrument_17.insert(UnitOfMeasureQty_17.getString());
  FIX::ValuationMethod ValuationMethod_17("STRING_CDSD");
  msg.set(ValuationMethod_17);
  Instrument_17.insert(ValuationMethod_17.getString());
  all_values.push_back(Instrument_17);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_29;
    FIX::ComplexEventCondition ComplexEventCondition_29(2);
    noComplexEvents_0_0.set(ComplexEventCondition_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventCondition_29.getString());
    FIX::ComplexEventPrice ComplexEventPrice_29;
    ComplexEventPrice_29.setString("19763274");
    noComplexEvents_0_0.set(ComplexEventPrice_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPrice_29.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_29(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryMethod_29.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_29;
    ComplexEventPriceBoundaryPrecision_29.setString("16.780000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryPrecision_29.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_29(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceTimeType_29.getString());
    FIX::ComplexEventType ComplexEventType_29(8);
    noComplexEvents_0_0.set(ComplexEventType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventType_29.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_29;
    ComplexOptPayoutAmount_29.setString("15223555");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexOptPayoutAmount_29.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_29);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_55;
      FIX::ComplexEventEndDate ComplexEventEndDate_55(FIX::UTCTIMESTAMP(1, 41, 44, 5, 9, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventEndDate_55.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_55(FIX::UTCTIMESTAMP(18, 12, 47, 3, 10, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventStartDate_55.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_55);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_109;
        FIX::ComplexEventEndTime ComplexEventEndTime_109(FIX::UTCTIMEONLY(20, 48, 36));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventEndTime_109.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_109(FIX::UTCTIMEONLY(3, 25, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventStartTime_109.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_109);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_56;
      FIX::ComplexEventEndDate ComplexEventEndDate_56(FIX::UTCTIMESTAMP(1, 30, 6, 26, 2, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventEndDate_56.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_56(FIX::UTCTIMESTAMP(23, 7, 48, 20, 6, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventStartDate_56.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_56);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_110;
        FIX::ComplexEventEndTime ComplexEventEndTime_110(FIX::UTCTIMEONLY(2, 44, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventEndTime_110.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_110(FIX::UTCTIMEONLY(18, 45, 27));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventStartTime_110.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_110);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_111;
        FIX::ComplexEventEndTime ComplexEventEndTime_111(FIX::UTCTIMEONLY(5, 7, 39));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventEndTime_111.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_111(FIX::UTCTIMEONLY(22, 5, 31));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventStartTime_111.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_111);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_57;
      FIX::ComplexEventEndDate ComplexEventEndDate_57(FIX::UTCTIMESTAMP(22, 1, 24, 17, 8, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventEndDate_57.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_57(FIX::UTCTIMESTAMP(18, 18, 15, 2, 12, 2016));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventStartDate_57.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_57);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_112;
        FIX::ComplexEventEndTime ComplexEventEndTime_112(FIX::UTCTIMEONLY(10, 19, 59));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventEndTime_112.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_112(FIX::UTCTIMEONLY(5, 44, 11));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventStartTime_112.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_112);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_113;
        FIX::ComplexEventEndTime ComplexEventEndTime_113(FIX::UTCTIMEONLY(14, 11, 0));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventEndTime_113.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_113(FIX::UTCTIMEONLY(21, 57, 6));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventStartTime_113.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_113);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_114;
        FIX::ComplexEventEndTime ComplexEventEndTime_114(FIX::UTCTIMEONLY(19, 0, 56));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventEndTime_114.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_114(FIX::UTCTIMEONLY(19, 7, 32));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventStartTime_114.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_114);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_30;
    FIX::ComplexEventCondition ComplexEventCondition_30(2);
    noComplexEvents_0_1.set(ComplexEventCondition_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventCondition_30.getString());
    FIX::ComplexEventPrice ComplexEventPrice_30;
    ComplexEventPrice_30.setString("2208777");
    noComplexEvents_0_1.set(ComplexEventPrice_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPrice_30.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_30(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryMethod_30.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_30;
    ComplexEventPriceBoundaryPrecision_30.setString("30.600000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryPrecision_30.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_30(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceTimeType_30.getString());
    FIX::ComplexEventType ComplexEventType_30(9);
    noComplexEvents_0_1.set(ComplexEventType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventType_30.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_30;
    ComplexOptPayoutAmount_30.setString("3406661");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexOptPayoutAmount_30.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_30);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_58;
      FIX::ComplexEventEndDate ComplexEventEndDate_58(FIX::UTCTIMESTAMP(6, 29, 50, 20, 6, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventEndDate_58.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_58(FIX::UTCTIMESTAMP(11, 5, 36, 6, 7, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventStartDate_58.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_58);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_115;
        FIX::ComplexEventEndTime ComplexEventEndTime_115(FIX::UTCTIMEONLY(9, 41, 39));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventEndTime_115.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_115(FIX::UTCTIMEONLY(16, 46, 37));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventStartTime_115.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_115);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_116;
        FIX::ComplexEventEndTime ComplexEventEndTime_116(FIX::UTCTIMEONLY(0, 9, 33));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventEndTime_116.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_116(FIX::UTCTIMEONLY(8, 20, 23));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventStartTime_116.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_116);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_117;
        FIX::ComplexEventEndTime ComplexEventEndTime_117(FIX::UTCTIMEONLY(3, 44, 41));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventEndTime_117.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_117(FIX::UTCTIMEONLY(14, 35, 19));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventStartTime_117.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_117);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_59;
      FIX::ComplexEventEndDate ComplexEventEndDate_59(FIX::UTCTIMESTAMP(8, 48, 24, 18, 10, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventEndDate_59.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_59(FIX::UTCTIMESTAMP(6, 38, 12, 12, 7, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventStartDate_59.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_59);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_118;
        FIX::ComplexEventEndTime ComplexEventEndTime_118(FIX::UTCTIMEONLY(15, 6, 29));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventEndTime_118.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_118(FIX::UTCTIMEONLY(19, 49, 4));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventStartTime_118.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_118);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_119;
        FIX::ComplexEventEndTime ComplexEventEndTime_119(FIX::UTCTIMEONLY(20, 49, 46));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventEndTime_119.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_119(FIX::UTCTIMEONLY(7, 21, 3));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventStartTime_119.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_119);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_120;
        FIX::ComplexEventEndTime ComplexEventEndTime_120(FIX::UTCTIMEONLY(21, 51, 28));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventEndTime_120.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_120(FIX::UTCTIMEONLY(16, 17, 1));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventStartTime_120.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_120);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_60;
      FIX::ComplexEventEndDate ComplexEventEndDate_60(FIX::UTCTIMESTAMP(19, 5, 55, 9, 8, 2006));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventEndDate_60.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_60(FIX::UTCTIMESTAMP(14, 59, 54, 7, 7, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventStartDate_60.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_60);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_121;
        FIX::ComplexEventEndTime ComplexEventEndTime_121(FIX::UTCTIMEONLY(8, 17, 58));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventEndTime_121.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_121(FIX::UTCTIMEONLY(4, 11, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventStartTime_121.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_121);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_29;
    FIX::EventDate EventDate_29("LOCALMKTDATE_1136146257");
    noEvents_0_0.set(EventDate_29);
    EvntGrp_NoEvents_29.insert(EventDate_29.getString());
    FIX::EventPx EventPx_29;
    EventPx_29.setString("6436695");
    noEvents_0_0.set(EventPx_29);
    EvntGrp_NoEvents_29.insert(EventPx_29.getString());
    FIX::EventText EventText_29("STRING_773067785");
    noEvents_0_0.set(EventText_29);
    EvntGrp_NoEvents_29.insert(EventText_29.getString());
    FIX::EventTime EventTime_29(FIX::UTCTIMESTAMP(10, 22, 26, 17, 7, 2005));
    noEvents_0_0.set(EventTime_29);
    EvntGrp_NoEvents_29.insert(EventTime_29.getString());
    FIX::EventType EventType_29(5);
    noEvents_0_0.set(EventType_29);
    EvntGrp_NoEvents_29.insert(EventType_29.getString());
    all_values.push_back(EvntGrp_NoEvents_29);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_30;
    FIX::EventDate EventDate_30("LOCALMKTDATE_311530419");
    noEvents_0_1.set(EventDate_30);
    EvntGrp_NoEvents_30.insert(EventDate_30.getString());
    FIX::EventPx EventPx_30;
    EventPx_30.setString("4435031");
    noEvents_0_1.set(EventPx_30);
    EvntGrp_NoEvents_30.insert(EventPx_30.getString());
    FIX::EventText EventText_30("STRING_681278416");
    noEvents_0_1.set(EventText_30);
    EvntGrp_NoEvents_30.insert(EventText_30.getString());
    FIX::EventTime EventTime_30(FIX::UTCTIMESTAMP(5, 15, 58, 20, 10, 2016));
    noEvents_0_1.set(EventTime_30);
    EvntGrp_NoEvents_30.insert(EventTime_30.getString());
    FIX::EventType EventType_30(1);
    noEvents_0_1.set(EventType_30);
    EvntGrp_NoEvents_30.insert(EventType_30.getString());
    all_values.push_back(EvntGrp_NoEvents_30);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_31;
    FIX::EventDate EventDate_31("LOCALMKTDATE_1825405653");
    noEvents_0_2.set(EventDate_31);
    EvntGrp_NoEvents_31.insert(EventDate_31.getString());
    FIX::EventPx EventPx_31;
    EventPx_31.setString("12517919");
    noEvents_0_2.set(EventPx_31);
    EvntGrp_NoEvents_31.insert(EventPx_31.getString());
    FIX::EventText EventText_31("STRING_981161889");
    noEvents_0_2.set(EventText_31);
    EvntGrp_NoEvents_31.insert(EventText_31.getString());
    FIX::EventTime EventTime_31(FIX::UTCTIMESTAMP(1, 49, 34, 4, 3, 2011));
    noEvents_0_2.set(EventTime_31);
    EvntGrp_NoEvents_31.insert(EventTime_31.getString());
    FIX::EventType EventType_31(6);
    noEvents_0_2.set(EventType_31);
    EvntGrp_NoEvents_31.insert(EventType_31.getString());
    all_values.push_back(EvntGrp_NoEvents_31);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_35;
    FIX::InstrumentPartyID InstrumentPartyID_35("STRING_1906727808");
    noInstrumentParties_0_0.set(InstrumentPartyID_35);
    InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyID_35.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_35('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_35);
    InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyIDSource_35.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_35(56857785);
    noInstrumentParties_0_0.set(InstrumentPartyRole_35);
    InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyRole_35.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_35);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70;
      FIX::InstrumentPartySubID InstrumentPartySubID_70("STRING_2120127636");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_70);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubID_70.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_70(453355);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_70);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubIDType_70.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_36;
    FIX::InstrumentPartyID InstrumentPartyID_36("STRING_461956461");
    noInstrumentParties_0_1.set(InstrumentPartyID_36);
    InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyID_36.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_36('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_36);
    InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyIDSource_36.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_36(311983775);
    noInstrumentParties_0_1.set(InstrumentPartyRole_36);
    InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyRole_36.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_36);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71;
      FIX::InstrumentPartySubID InstrumentPartySubID_71("STRING_1851956229");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_71);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubID_71.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_71(827313159);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_71);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubIDType_71.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72;
      FIX::InstrumentPartySubID InstrumentPartySubID_72("STRING_935635225");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_72);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubID_72.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_72(434948416);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_72);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubIDType_72.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73;
      FIX::InstrumentPartySubID InstrumentPartySubID_73("STRING_1886762738");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_73);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubID_73.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_73(1628159329);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_73);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubIDType_73.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_35;
    FIX::SecurityAltID SecurityAltID_35("STRING_380809744");
    noSecurityAltID_0_0.set(SecurityAltID_35);
    SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltID_35.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_35("STRING_1489118742");
    noSecurityAltID_0_0.set(SecurityAltIDSource_35);
    SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltIDSource_35.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_35);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_36;
    FIX::SecurityAltID SecurityAltID_36("STRING_1146271383");
    noSecurityAltID_0_1.set(SecurityAltID_36);
    SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltID_36.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_36("STRING_1632601702");
    noSecurityAltID_0_1.set(SecurityAltIDSource_36);
    SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltIDSource_36.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_36);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_37;
    FIX::SecurityAltID SecurityAltID_37("STRING_322796983");
    noSecurityAltID_0_2.set(SecurityAltID_37);
    SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltID_37.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_37("STRING_2145431786");
    noSecurityAltID_0_2.set(SecurityAltIDSource_37);
    SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltIDSource_37.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_37);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_34;
  FIX::SecurityXML SecurityXML_35("XMLDATA_1685690879");
  msg.set(SecurityXML_35);
  FIX::SecurityXMLLen SecurityXMLLen_17(11024965);
  msg.set(SecurityXMLLen_17);
  FIX::SecurityXMLSchema SecurityXMLSchema_17("STRING_1912639552");
  msg.set(SecurityXMLSchema_17);
  SecurityXML_34.insert(SecurityXMLSchema_17.getString());
  all_values.push_back(SecurityXML_34);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_3;
    FIX::RootPartyID RootPartyID_3("STRING_560307831");
    noRootPartyIDs_0_0.set(RootPartyID_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyID_3.getString());
    FIX::RootPartyIDSource RootPartyIDSource_3('6');
    noRootPartyIDs_0_0.set(RootPartyIDSource_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyIDSource_3.getString());
    FIX::RootPartyRole RootPartyRole_3(1638405777);
    noRootPartyIDs_0_0.set(RootPartyRole_3);
    RootParties_NoRootPartyIDs_3.insert(RootPartyRole_3.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_3);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_6;
      FIX::RootPartySubID RootPartySubID_6("STRING_427754088");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubID_6.getString());
      FIX::RootPartySubIDType RootPartySubIDType_6(755059676);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubIDType_6.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_6);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_7;
      FIX::RootPartySubID RootPartySubID_7("STRING_1939516267");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubID_7.getString());
      FIX::RootPartySubIDType RootPartySubIDType_7(82994807);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubIDType_7.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_7);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdCxlGrp
  // Group SideCrossOrdCxlGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_0;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_0;
    FIX::ClOrdID ClOrdID_18("STRING_1939969623");
    noSides_0_0.set(ClOrdID_18);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdID_18.getString());
    FIX::ClOrdLinkID ClOrdLinkID_1("STRING_544951268");
    noSides_0_0.set(ClOrdLinkID_1);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdLinkID_1.getString());
    FIX::ComplianceID ComplianceID_1("STRING_1898381477");
    noSides_0_0.set(ComplianceID_1);
    SideCrossOrdCxlGrp_NoSides_0.insert(ComplianceID_1.getString());
    FIX::EncodedText EncodedText_24("DATA_104469750");
    noSides_0_0.set(EncodedText_24);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedText_24.getString());
    FIX::EncodedTextLen EncodedTextLen_24(1450410880);
    noSides_0_0.set(EncodedTextLen_24);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedTextLen_24.getString());
    FIX::OrigClOrdID OrigClOrdID_1("STRING_1602854058");
    noSides_0_0.set(OrigClOrdID_1);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigClOrdID_1.getString());
    FIX::OrigOrdModTime OrigOrdModTime_0(FIX::UTCTIMESTAMP(9, 35, 39, 7, 6, 2001));
    noSides_0_0.set(OrigOrdModTime_0);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigOrdModTime_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_18("STRING_1208356881");
    noSides_0_0.set(SecondaryClOrdID_18);
    SideCrossOrdCxlGrp_NoSides_0.insert(SecondaryClOrdID_18.getString());
    FIX::Side Side_12('5');
    noSides_0_0.set(Side_12);
    SideCrossOrdCxlGrp_NoSides_0.insert(Side_12.getString());
    FIX::Text Text_24("STRING_536989797");
    noSides_0_0.set(Text_24);
    SideCrossOrdCxlGrp_NoSides_0.insert(Text_24.getString());
    FIX::TradeDate TradeDate_10("LOCALMKTDATE_1531153864");
    noSides_0_0.set(TradeDate_10);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeDate_10.getString());
    FIX::TradeOriginationDate TradeOriginationDate_4("LOCALMKTDATE_355404078");
    noSides_0_0.set(TradeOriginationDate_4);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeOriginationDate_4.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_0);

    // OrderQtyData
    multiset<string> OrderQtyData_1;
    FIX::CashOrderQty CashOrderQty_1;
    CashOrderQty_1.setString("751970");
    noSides_0_0.set(CashOrderQty_1);
    OrderQtyData_1.insert(CashOrderQty_1.getString());
    FIX::OrderPercent OrderPercent_1;
    OrderPercent_1.setString("88.290000");
    noSides_0_0.set(OrderPercent_1);
    OrderQtyData_1.insert(OrderPercent_1.getString());
    FIX::OrderQty OrderQty_12;
    OrderQty_12.setString("1205599");
    noSides_0_0.set(OrderQty_12);
    OrderQtyData_1.insert(OrderQty_12.getString());
    FIX::RoundingDirection RoundingDirection_1('1');
    noSides_0_0.set(RoundingDirection_1);
    OrderQtyData_1.insert(RoundingDirection_1.getString());
    FIX::RoundingModulus RoundingModulus_1;
    RoundingModulus_1.setString("21024866");
    noSides_0_0.set(RoundingModulus_1);
    OrderQtyData_1.insert(RoundingModulus_1.getString());
    all_values.push_back(OrderQtyData_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_35;
      FIX::PartyID PartyID_35("STRING_1980074557");
      noPartyIDs_0_1_0.set(PartyID_35);
      Parties_NoPartyIDs_35.insert(PartyID_35.getString());
      FIX::PartyIDSource PartyIDSource_35('A');
      noPartyIDs_0_1_0.set(PartyIDSource_35);
      Parties_NoPartyIDs_35.insert(PartyIDSource_35.getString());
      FIX::PartyRole PartyRole_35(85);
      noPartyIDs_0_1_0.set(PartyRole_35);
      Parties_NoPartyIDs_35.insert(PartyRole_35.getString());
      all_values.push_back(Parties_NoPartyIDs_35);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_70;
        FIX::PartySubID PartySubID_70("STRING_1629694114");
        noPartySubIDs_0_0_2_0.set(PartySubID_70);
        PtysSubGrp_NoPartySubIDs_70.insert(PartySubID_70.getString());
        FIX::PartySubIDType PartySubIDType_70(23);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_70);
        PtysSubGrp_NoPartySubIDs_70.insert(PartySubIDType_70.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_70);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_71;
        FIX::PartySubID PartySubID_71("STRING_1315354251");
        noPartySubIDs_0_0_2_1.set(PartySubID_71);
        PtysSubGrp_NoPartySubIDs_71.insert(PartySubID_71.getString());
        FIX::PartySubIDType PartySubIDType_71(12);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_71);
        PtysSubGrp_NoPartySubIDs_71.insert(PartySubIDType_71.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_71);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_72;
        FIX::PartySubID PartySubID_72("STRING_1844770074");
        noPartySubIDs_0_0_2_2.set(PartySubID_72);
        PtysSubGrp_NoPartySubIDs_72.insert(PartySubID_72.getString());
        FIX::PartySubIDType PartySubIDType_72(4);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_72);
        PtysSubGrp_NoPartySubIDs_72.insert(PartySubIDType_72.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_72);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_36;
      FIX::PartyID PartyID_36("STRING_1526649839");
      noPartyIDs_0_1_1.set(PartyID_36);
      Parties_NoPartyIDs_36.insert(PartyID_36.getString());
      FIX::PartyIDSource PartyIDSource_36('5');
      noPartyIDs_0_1_1.set(PartyIDSource_36);
      Parties_NoPartyIDs_36.insert(PartyIDSource_36.getString());
      FIX::PartyRole PartyRole_36(49);
      noPartyIDs_0_1_1.set(PartyRole_36);
      Parties_NoPartyIDs_36.insert(PartyRole_36.getString());
      all_values.push_back(Parties_NoPartyIDs_36);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_73;
        FIX::PartySubID PartySubID_73("STRING_1386259764");
        noPartySubIDs_0_1_2_0.set(PartySubID_73);
        PtysSubGrp_NoPartySubIDs_73.insert(PartySubID_73.getString());
        FIX::PartySubIDType PartySubIDType_73(9);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_73);
        PtysSubGrp_NoPartySubIDs_73.insert(PartySubIDType_73.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_73);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_1;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_1;
    FIX::ClOrdID ClOrdID_19("STRING_982011100");
    noSides_0_1.set(ClOrdID_19);
    SideCrossOrdCxlGrp_NoSides_1.insert(ClOrdID_19.getString());
    FIX::ClOrdLinkID ClOrdLinkID_2("STRING_1105497903");
    noSides_0_1.set(ClOrdLinkID_2);
    SideCrossOrdCxlGrp_NoSides_1.insert(ClOrdLinkID_2.getString());
    FIX::ComplianceID ComplianceID_2("STRING_1770609523");
    noSides_0_1.set(ComplianceID_2);
    SideCrossOrdCxlGrp_NoSides_1.insert(ComplianceID_2.getString());
    FIX::EncodedText EncodedText_25("DATA_2033882843");
    noSides_0_1.set(EncodedText_25);
    SideCrossOrdCxlGrp_NoSides_1.insert(EncodedText_25.getString());
    FIX::EncodedTextLen EncodedTextLen_25(166371136);
    noSides_0_1.set(EncodedTextLen_25);
    SideCrossOrdCxlGrp_NoSides_1.insert(EncodedTextLen_25.getString());
    FIX::OrigClOrdID OrigClOrdID_2("STRING_2128065463");
    noSides_0_1.set(OrigClOrdID_2);
    SideCrossOrdCxlGrp_NoSides_1.insert(OrigClOrdID_2.getString());
    FIX::OrigOrdModTime OrigOrdModTime_1(FIX::UTCTIMESTAMP(9, 53, 2, 18, 8, 2006));
    noSides_0_1.set(OrigOrdModTime_1);
    SideCrossOrdCxlGrp_NoSides_1.insert(OrigOrdModTime_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_19("STRING_1047223195");
    noSides_0_1.set(SecondaryClOrdID_19);
    SideCrossOrdCxlGrp_NoSides_1.insert(SecondaryClOrdID_19.getString());
    FIX::Side Side_13('B');
    noSides_0_1.set(Side_13);
    SideCrossOrdCxlGrp_NoSides_1.insert(Side_13.getString());
    FIX::Text Text_25("STRING_672845712");
    noSides_0_1.set(Text_25);
    SideCrossOrdCxlGrp_NoSides_1.insert(Text_25.getString());
    FIX::TradeDate TradeDate_11("LOCALMKTDATE_737401041");
    noSides_0_1.set(TradeDate_11);
    SideCrossOrdCxlGrp_NoSides_1.insert(TradeDate_11.getString());
    FIX::TradeOriginationDate TradeOriginationDate_5("LOCALMKTDATE_314956137");
    noSides_0_1.set(TradeOriginationDate_5);
    SideCrossOrdCxlGrp_NoSides_1.insert(TradeOriginationDate_5.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_1);

    // OrderQtyData
    multiset<string> OrderQtyData_2;
    FIX::CashOrderQty CashOrderQty_2;
    CashOrderQty_2.setString("12604962");
    noSides_0_1.set(CashOrderQty_2);
    OrderQtyData_2.insert(CashOrderQty_2.getString());
    FIX::OrderPercent OrderPercent_2;
    OrderPercent_2.setString("15.070000");
    noSides_0_1.set(OrderPercent_2);
    OrderQtyData_2.insert(OrderPercent_2.getString());
    FIX::OrderQty OrderQty_13;
    OrderQty_13.setString("16147749");
    noSides_0_1.set(OrderQty_13);
    OrderQtyData_2.insert(OrderQty_13.getString());
    FIX::RoundingDirection RoundingDirection_2('0');
    noSides_0_1.set(RoundingDirection_2);
    OrderQtyData_2.insert(RoundingDirection_2.getString());
    FIX::RoundingModulus RoundingModulus_2;
    RoundingModulus_2.setString("16417915");
    noSides_0_1.set(RoundingModulus_2);
    OrderQtyData_2.insert(RoundingModulus_2.getString());
    all_values.push_back(OrderQtyData_2);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_37;
      FIX::PartyID PartyID_37("STRING_1494618981");
      noPartyIDs_1_1_0.set(PartyID_37);
      Parties_NoPartyIDs_37.insert(PartyID_37.getString());
      FIX::PartyIDSource PartyIDSource_37('7');
      noPartyIDs_1_1_0.set(PartyIDSource_37);
      Parties_NoPartyIDs_37.insert(PartyIDSource_37.getString());
      FIX::PartyRole PartyRole_37(74);
      noPartyIDs_1_1_0.set(PartyRole_37);
      Parties_NoPartyIDs_37.insert(PartyRole_37.getString());
      all_values.push_back(Parties_NoPartyIDs_37);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_74;
        FIX::PartySubID PartySubID_74("STRING_1331906888");
        noPartySubIDs_1_0_2_0.set(PartySubID_74);
        PtysSubGrp_NoPartySubIDs_74.insert(PartySubID_74.getString());
        FIX::PartySubIDType PartySubIDType_74(11);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_74);
        PtysSubGrp_NoPartySubIDs_74.insert(PartySubIDType_74.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_74);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_75;
        FIX::PartySubID PartySubID_75("STRING_280699142");
        noPartySubIDs_1_0_2_1.set(PartySubID_75);
        PtysSubGrp_NoPartySubIDs_75.insert(PartySubID_75.getString());
        FIX::PartySubIDType PartySubIDType_75(29);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_75);
        PtysSubGrp_NoPartySubIDs_75.insert(PartySubIDType_75.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_75);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_76;
        FIX::PartySubID PartySubID_76("STRING_656549048");
        noPartySubIDs_1_0_2_2.set(PartySubID_76);
        PtysSubGrp_NoPartySubIDs_76.insert(PartySubID_76.getString());
        FIX::PartySubIDType PartySubIDType_76(22);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_76);
        PtysSubGrp_NoPartySubIDs_76.insert(PartySubIDType_76.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_76);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_38;
      FIX::PartyID PartyID_38("STRING_52833535");
      noPartyIDs_1_1_1.set(PartyID_38);
      Parties_NoPartyIDs_38.insert(PartyID_38.getString());
      FIX::PartyIDSource PartyIDSource_38('7');
      noPartyIDs_1_1_1.set(PartyIDSource_38);
      Parties_NoPartyIDs_38.insert(PartyIDSource_38.getString());
      FIX::PartyRole PartyRole_38(34);
      noPartyIDs_1_1_1.set(PartyRole_38);
      Parties_NoPartyIDs_38.insert(PartyRole_38.getString());
      all_values.push_back(Parties_NoPartyIDs_38);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_77;
        FIX::PartySubID PartySubID_77("STRING_372961538");
        noPartySubIDs_1_1_2_0.set(PartySubID_77);
        PtysSubGrp_NoPartySubIDs_77.insert(PartySubID_77.getString());
        FIX::PartySubIDType PartySubIDType_77(15);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_77);
        PtysSubGrp_NoPartySubIDs_77.insert(PartySubIDType_77.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_77);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_78;
        FIX::PartySubID PartySubID_78("STRING_974808550");
        noPartySubIDs_1_1_2_1.set(PartySubID_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubID_78.getString());
        FIX::PartySubIDType PartySubIDType_78(3);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_78);
        PtysSubGrp_NoPartySubIDs_78.insert(PartySubIDType_78.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_78);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_79;
        FIX::PartySubID PartySubID_79("STRING_676938601");
        noPartySubIDs_1_1_2_2.set(PartySubID_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubID_79.getString());
        FIX::PartySubIDType PartySubIDType_79(27);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_79);
        PtysSubGrp_NoPartySubIDs_79.insert(PartySubIDType_79.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_79);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_39;
      FIX::PartyID PartyID_39("STRING_364921267");
      noPartyIDs_1_1_2.set(PartyID_39);
      Parties_NoPartyIDs_39.insert(PartyID_39.getString());
      FIX::PartyIDSource PartyIDSource_39('7');
      noPartyIDs_1_1_2.set(PartyIDSource_39);
      Parties_NoPartyIDs_39.insert(PartyIDSource_39.getString());
      FIX::PartyRole PartyRole_39(47);
      noPartyIDs_1_1_2.set(PartyRole_39);
      Parties_NoPartyIDs_39.insert(PartyRole_39.getString());
      all_values.push_back(Parties_NoPartyIDs_39);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_80;
        FIX::PartySubID PartySubID_80("STRING_90026876");
        noPartySubIDs_1_2_2_0.set(PartySubID_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubID_80.getString());
        FIX::PartySubIDType PartySubIDType_80(9);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_80);
        PtysSubGrp_NoPartySubIDs_80.insert(PartySubIDType_80.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_80);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_81;
        FIX::PartySubID PartySubID_81("STRING_1321933816");
        noPartySubIDs_1_2_2_1.set(PartySubID_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubID_81.getString());
        FIX::PartySubIDType PartySubIDType_81(7);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_81);
        PtysSubGrp_NoPartySubIDs_81.insert(PartySubIDType_81.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_81);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_82;
        FIX::PartySubID PartySubID_82("STRING_2029288616");
        noPartySubIDs_1_2_2_2.set(PartySubID_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubID_82.getString());
        FIX::PartySubIDType PartySubIDType_82(32);
        noPartySubIDs_1_2_2_2.set(PartySubIDType_82);
        PtysSubGrp_NoPartySubIDs_82.insert(PartySubIDType_82.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_82);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_32;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_32("DATA_1376423949");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingIssuer_32.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_32(1837199552);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingIssuerLen_32.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_32("DATA_1181654569");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDesc_32.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_32(1245181774);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDescLen_32.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_32;
    UnderlyingAdjustedQuantity_32.setString("10216227");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_32);
    UnderlyingInstrument_32.insert(UnderlyingAdjustedQuantity_32.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_32;
    UnderlyingAllocationPercent_32.setString("57.140000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_32);
    UnderlyingInstrument_32.insert(UnderlyingAllocationPercent_32.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_32;
    UnderlyingAttachmentPoint_32.setString("9.160000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_32);
    UnderlyingInstrument_32.insert(UnderlyingAttachmentPoint_32.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_32("STRING_1188057132");
    noUnderlyings_0_0.set(UnderlyingCFICode_32);
    UnderlyingInstrument_32.insert(UnderlyingCFICode_32.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_32("STRING_1389254762");
    noUnderlyings_0_0.set(UnderlyingCPProgram_32);
    UnderlyingInstrument_32.insert(UnderlyingCPProgram_32.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_32("STRING_1429705934");
    noUnderlyings_0_0.set(UnderlyingCPRegType_32);
    UnderlyingInstrument_32.insert(UnderlyingCPRegType_32.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_32;
    UnderlyingCapValue_32.setString("12408906");
    noUnderlyings_0_0.set(UnderlyingCapValue_32);
    UnderlyingInstrument_32.insert(UnderlyingCapValue_32.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_32;
    UnderlyingCashAmount_32.setString("646912");
    noUnderlyings_0_0.set(UnderlyingCashAmount_32);
    UnderlyingInstrument_32.insert(UnderlyingCashAmount_32.getString());
    FIX::UnderlyingCashType UnderlyingCashType_32("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_32);
    UnderlyingInstrument_32.insert(UnderlyingCashType_32.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_32;
    UnderlyingContractMultiplier_32.setString("17171131");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_32);
    UnderlyingInstrument_32.insert(UnderlyingContractMultiplier_32.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_32(437652837);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_32);
    UnderlyingInstrument_32.insert(UnderlyingContractMultiplierUnit_32.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_32("COUNTRY_1534505492");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingCountryOfIssue_32.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_32("LOCALMKTDATE_544438099");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_32);
    UnderlyingInstrument_32.insert(UnderlyingCouponPaymentDate_32.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_32;
    UnderlyingCouponRate_32.setString("45.580000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_32);
    UnderlyingInstrument_32.insert(UnderlyingCouponRate_32.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_32("STRING_63960445");
    noUnderlyings_0_0.set(UnderlyingCreditRating_32);
    UnderlyingInstrument_32.insert(UnderlyingCreditRating_32.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_32("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_32);
    UnderlyingInstrument_32.insert(UnderlyingCurrency_32.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_32;
    UnderlyingCurrentValue_32.setString("19865148");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_32);
    UnderlyingInstrument_32.insert(UnderlyingCurrentValue_32.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_32;
    UnderlyingDetachmentPoint_32.setString("32.210000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_32);
    UnderlyingInstrument_32.insert(UnderlyingDetachmentPoint_32.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_32;
    UnderlyingDirtyPrice_32.setString("12225944");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_32);
    UnderlyingInstrument_32.insert(UnderlyingDirtyPrice_32.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_32;
    UnderlyingEndPrice_32.setString("20765417");
    noUnderlyings_0_0.set(UnderlyingEndPrice_32);
    UnderlyingInstrument_32.insert(UnderlyingEndPrice_32.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_32;
    UnderlyingEndValue_32.setString("58812");
    noUnderlyings_0_0.set(UnderlyingEndValue_32);
    UnderlyingInstrument_32.insert(UnderlyingEndValue_32.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_32(397044655);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_32);
    UnderlyingInstrument_32.insert(UnderlyingExerciseStyle_32.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_32;
    UnderlyingFXRate_32.setString("16338598");
    noUnderlyings_0_0.set(UnderlyingFXRate_32);
    UnderlyingInstrument_32.insert(UnderlyingFXRate_32.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_32('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_32);
    UnderlyingInstrument_32.insert(UnderlyingFXRateCalc_32.getString());
    FIX::UnderlyingFactor UnderlyingFactor_32;
    UnderlyingFactor_32.setString("12132864");
    noUnderlyings_0_0.set(UnderlyingFactor_32);
    UnderlyingInstrument_32.insert(UnderlyingFactor_32.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_32(355755771);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_32);
    UnderlyingInstrument_32.insert(UnderlyingFlowScheduleType_32.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_32("STRING_1264110205");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_32);
    UnderlyingInstrument_32.insert(UnderlyingInstrRegistry_32.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_32("LOCALMKTDATE_903002324");
    noUnderlyings_0_0.set(UnderlyingIssueDate_32);
    UnderlyingInstrument_32.insert(UnderlyingIssueDate_32.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_32("STRING_1537410340");
    noUnderlyings_0_0.set(UnderlyingIssuer_32);
    UnderlyingInstrument_32.insert(UnderlyingIssuer_32.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_32("STRING_361808331");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingLocaleOfIssue_32.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_32("LOCALMKTDATE_1924625117");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityDate_32.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_32("MONTHYEAR_122632406");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityMonthYear_32.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_32("TZTIMEONLY_1887689248");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityTime_32.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_32;
    UnderlyingNotionalPercentageOutstanding_32.setString("86.010000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_32);
    UnderlyingInstrument_32.insert(UnderlyingNotionalPercentageOutstanding_32.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_32('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_32);
    UnderlyingInstrument_32.insert(UnderlyingOptAttribute_32.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_32;
    UnderlyingOriginalNotionalPercentageOutstanding_32.setString("15.340000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_32);
    UnderlyingInstrument_32.insert(UnderlyingOriginalNotionalPercentageOutstanding_32.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_32("STRING_58605621");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_32);
    UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasure_32.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_32;
    UnderlyingPriceUnitOfMeasureQty_32.setString("15765784");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_32);
    UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasureQty_32.getString());
    FIX::UnderlyingProduct UnderlyingProduct_32(336540652);
    noUnderlyings_0_0.set(UnderlyingProduct_32);
    UnderlyingInstrument_32.insert(UnderlyingProduct_32.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_32(1775718818);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_32);
    UnderlyingInstrument_32.insert(UnderlyingPutOrCall_32.getString());
    FIX::UnderlyingPx UnderlyingPx_32;
    UnderlyingPx_32.setString("20142313");
    noUnderlyings_0_0.set(UnderlyingPx_32);
    UnderlyingInstrument_32.insert(UnderlyingPx_32.getString());
    FIX::UnderlyingQty UnderlyingQty_32;
    UnderlyingQty_32.setString("18710461");
    noUnderlyings_0_0.set(UnderlyingQty_32);
    UnderlyingInstrument_32.insert(UnderlyingQty_32.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_32("LOCALMKTDATE_172673269");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_32);
    UnderlyingInstrument_32.insert(UnderlyingRedemptionDate_32.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_32("STRING_1769582216");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_32);
    UnderlyingInstrument_32.insert(UnderlyingRepoCollateralSecurityType_32.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_32;
    UnderlyingRepurchaseRate_32.setString("65.890000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_32);
    UnderlyingInstrument_32.insert(UnderlyingRepurchaseRate_32.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_32(384691073);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_32);
    UnderlyingInstrument_32.insert(UnderlyingRepurchaseTerm_32.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_32("STRING_1889854393");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_32);
    UnderlyingInstrument_32.insert(UnderlyingRestructuringType_32.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_32("STRING_1774037773");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityDesc_32.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_32("EXCHANGE_937134294");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityExchange_32.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_32("STRING_964965232");
    noUnderlyings_0_0.set(UnderlyingSecurityID_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityID_32.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_32("STRING_1703095833");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityIDSource_32.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_32("STRING_943015582");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_32);
    UnderlyingInstrument_32.insert(UnderlyingSecuritySubType_32.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_32("STRING_1362009887");
    noUnderlyings_0_0.set(UnderlyingSecurityType_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityType_32.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_32("STRING_1189472064");
    noUnderlyings_0_0.set(UnderlyingSeniority_32);
    UnderlyingInstrument_32.insert(UnderlyingSeniority_32.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_32("STRING_830701838");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_32);
    UnderlyingInstrument_32.insert(UnderlyingSettlMethod_32.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_32(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_32);
    UnderlyingInstrument_32.insert(UnderlyingSettlementType_32.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_32;
    UnderlyingStartValue_32.setString("15452278");
    noUnderlyings_0_0.set(UnderlyingStartValue_32);
    UnderlyingInstrument_32.insert(UnderlyingStartValue_32.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_32("STRING_2094812043");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingStateOrProvinceOfIssue_32.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_32("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_32);
    UnderlyingInstrument_32.insert(UnderlyingStrikeCurrency_32.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_32;
    UnderlyingStrikePrice_32.setString("3091367");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_32);
    UnderlyingInstrument_32.insert(UnderlyingStrikePrice_32.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_32("STRING_1107956452");
    noUnderlyings_0_0.set(UnderlyingSymbol_32);
    UnderlyingInstrument_32.insert(UnderlyingSymbol_32.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_32("STRING_1057786935");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_32);
    UnderlyingInstrument_32.insert(UnderlyingSymbolSfx_32.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_32("STRING_49342327");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_32);
    UnderlyingInstrument_32.insert(UnderlyingTimeUnit_32.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_32("STRING_2073155054");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_32);
    UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasure_32.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_32;
    UnderlyingUnitOfMeasureQty_32.setString("4221904");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_32);
    UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasureQty_32.getString());
    all_values.push_back(UnderlyingInstrument_32);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_65;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_65("STRING_2131760675");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltID_65.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_65("STRING_1998768924");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltIDSource_65.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_66;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_66("STRING_1555794513");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltID_66.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_66("STRING_1759995845");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltIDSource_66.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_67;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_67("STRING_1865516582");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltID_67.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_67("STRING_1279357010");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltIDSource_67.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_58;
      FIX::UnderlyingStipType UnderlyingStipType_58("STRING_1487615150");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipType_58.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_58("STRING_1066879951");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipValue_58.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_58);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_66;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_66("STRING_1229985896");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_66);
      UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyID_66.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_66('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_66);
      UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyIDSource_66.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_66(1107010833);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_66);
      UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyRole_66.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_66);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_134("STRING_249046262");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_134);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubID_134.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_134(2050026415);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_134);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubIDType_134.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_135("STRING_1409477367");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubID_135.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_135(1438518327);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubIDType_135.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
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
