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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CrossOrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> CrossOrderCancelRequest_0;
  FIX::CrossID CrossID_1("STRING_403218862");
  msg.set(CrossID_1);
  CrossOrderCancelRequest_0.insert(CrossID_1.getString());
  FIX::CrossPrioritization CrossPrioritization_1(0);
  msg.set(CrossPrioritization_1);
  CrossOrderCancelRequest_0.insert(CrossPrioritization_1.getString());
  FIX::CrossType CrossType_1(2);
  msg.set(CrossType_1);
  CrossOrderCancelRequest_0.insert(CrossType_1.getString());
  FIX::HostCrossID HostCrossID_1("STRING_1954516946");
  msg.set(HostCrossID_1);
  CrossOrderCancelRequest_0.insert(HostCrossID_1.getString());
  FIX::OrderID OrderID_16("STRING_597888408");
  msg.set(OrderID_16);
  CrossOrderCancelRequest_0.insert(OrderID_16.getString());
  FIX::OrigCrossID OrigCrossID_1("STRING_1942155584");
  msg.set(OrigCrossID_1);
  CrossOrderCancelRequest_0.insert(OrigCrossID_1.getString());
  FIX::TransactTime TransactTime_15(FIX::UTCTIMESTAMP(0, 17, 15, 20, 112002));
  msg.set(TransactTime_15);
  CrossOrderCancelRequest_0.insert(TransactTime_15.getString());
  all_values.push_back(CrossOrderCancelRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_22;
    FIX::EncodedLegIssuer EncodedLegIssuer_22("DATA_1418538267");
    noLegs_0_0.set(EncodedLegIssuer_22);
    InstrumentLeg_22.insert(EncodedLegIssuer_22.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_22(966200906);
    noLegs_0_0.set(EncodedLegIssuerLen_22);
    InstrumentLeg_22.insert(EncodedLegIssuerLen_22.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_22("DATA_1782211445");
    noLegs_0_0.set(EncodedLegSecurityDesc_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDesc_22.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_22(1391779598);
    noLegs_0_0.set(EncodedLegSecurityDescLen_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDescLen_22.getString());
    FIX::LegCFICode LegCFICode_22("STRING_1538251432");
    noLegs_0_0.set(LegCFICode_22);
    InstrumentLeg_22.insert(LegCFICode_22.getString());
    FIX::LegContractMultiplier LegContractMultiplier_22;
    LegContractMultiplier_22.setString("20423878");
    noLegs_0_0.set(LegContractMultiplier_22);
    InstrumentLeg_22.insert(LegContractMultiplier_22.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_22(287116694);
    noLegs_0_0.set(LegContractMultiplierUnit_22);
    InstrumentLeg_22.insert(LegContractMultiplierUnit_22.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_22("MONTHYEAR_1313889497");
    noLegs_0_0.set(LegContractSettlMonth_22);
    InstrumentLeg_22.insert(LegContractSettlMonth_22.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_22("COUNTRY_389183860");
    noLegs_0_0.set(LegCountryOfIssue_22);
    InstrumentLeg_22.insert(LegCountryOfIssue_22.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_22("LOCALMKTDATE_1076491792");
    noLegs_0_0.set(LegCouponPaymentDate_22);
    InstrumentLeg_22.insert(LegCouponPaymentDate_22.getString());
    FIX::LegCouponRate LegCouponRate_22;
    LegCouponRate_22.setString("79.870000");
    noLegs_0_0.set(LegCouponRate_22);
    InstrumentLeg_22.insert(LegCouponRate_22.getString());
    FIX::LegCreditRating LegCreditRating_22("STRING_1521222128");
    noLegs_0_0.set(LegCreditRating_22);
    InstrumentLeg_22.insert(LegCreditRating_22.getString());
    FIX::LegCurrency LegCurrency_22("JPY");
    noLegs_0_0.set(LegCurrency_22);
    InstrumentLeg_22.insert(LegCurrency_22.getString());
    FIX::LegDatedDate LegDatedDate_22("LOCALMKTDATE_1916974555");
    noLegs_0_0.set(LegDatedDate_22);
    InstrumentLeg_22.insert(LegDatedDate_22.getString());
    FIX::LegExerciseStyle LegExerciseStyle_22(267320204);
    noLegs_0_0.set(LegExerciseStyle_22);
    InstrumentLeg_22.insert(LegExerciseStyle_22.getString());
    FIX::LegFactor LegFactor_22;
    LegFactor_22.setString("11156860");
    noLegs_0_0.set(LegFactor_22);
    InstrumentLeg_22.insert(LegFactor_22.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_22(172709770);
    noLegs_0_0.set(LegFlowScheduleType_22);
    InstrumentLeg_22.insert(LegFlowScheduleType_22.getString());
    FIX::LegInstrRegistry LegInstrRegistry_22("STRING_295062239");
    noLegs_0_0.set(LegInstrRegistry_22);
    InstrumentLeg_22.insert(LegInstrRegistry_22.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_22("LOCALMKTDATE_1698246990");
    noLegs_0_0.set(LegInterestAccrualDate_22);
    InstrumentLeg_22.insert(LegInterestAccrualDate_22.getString());
    FIX::LegIssueDate LegIssueDate_22("LOCALMKTDATE_2127226716");
    noLegs_0_0.set(LegIssueDate_22);
    InstrumentLeg_22.insert(LegIssueDate_22.getString());
    FIX::LegIssuer LegIssuer_22("STRING_892950647");
    noLegs_0_0.set(LegIssuer_22);
    InstrumentLeg_22.insert(LegIssuer_22.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_22("STRING_1492918927");
    noLegs_0_0.set(LegLocaleOfIssue_22);
    InstrumentLeg_22.insert(LegLocaleOfIssue_22.getString());
    FIX::LegMaturityDate LegMaturityDate_22("LOCALMKTDATE_134331262");
    noLegs_0_0.set(LegMaturityDate_22);
    InstrumentLeg_22.insert(LegMaturityDate_22.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_22("MONTHYEAR_373388631");
    noLegs_0_0.set(LegMaturityMonthYear_22);
    InstrumentLeg_22.insert(LegMaturityMonthYear_22.getString());
    FIX::LegMaturityTime LegMaturityTime_22("TZTIMEONLY_514333456");
    noLegs_0_0.set(LegMaturityTime_22);
    InstrumentLeg_22.insert(LegMaturityTime_22.getString());
    FIX::LegOptAttribute LegOptAttribute_22('1');
    noLegs_0_0.set(LegOptAttribute_22);
    InstrumentLeg_22.insert(LegOptAttribute_22.getString());
    FIX::LegOptionRatio LegOptionRatio_22;
    LegOptionRatio_22.setString("10748654");
    noLegs_0_0.set(LegOptionRatio_22);
    InstrumentLeg_22.insert(LegOptionRatio_22.getString());
    FIX::LegPool LegPool_22("STRING_930258879");
    noLegs_0_0.set(LegPool_22);
    InstrumentLeg_22.insert(LegPool_22.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_22("STRING_1979370592");
    noLegs_0_0.set(LegPriceUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasure_22.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_22;
    LegPriceUnitOfMeasureQty_22.setString("3731129");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasureQty_22.getString());
    FIX::LegProduct LegProduct_22(201313498);
    noLegs_0_0.set(LegProduct_22);
    InstrumentLeg_22.insert(LegProduct_22.getString());
    FIX::LegPutOrCall LegPutOrCall_22(798087850);
    noLegs_0_0.set(LegPutOrCall_22);
    InstrumentLeg_22.insert(LegPutOrCall_22.getString());
    FIX::LegRatioQty LegRatioQty_22;
    LegRatioQty_22.setString("78407");
    noLegs_0_0.set(LegRatioQty_22);
    InstrumentLeg_22.insert(LegRatioQty_22.getString());
    FIX::LegRedemptionDate LegRedemptionDate_22("LOCALMKTDATE_1593093096");
    noLegs_0_0.set(LegRedemptionDate_22);
    InstrumentLeg_22.insert(LegRedemptionDate_22.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_22("STRING_188855634");
    noLegs_0_0.set(LegRepoCollateralSecurityType_22);
    InstrumentLeg_22.insert(LegRepoCollateralSecurityType_22.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_22;
    LegRepurchaseRate_22.setString("85.620000");
    noLegs_0_0.set(LegRepurchaseRate_22);
    InstrumentLeg_22.insert(LegRepurchaseRate_22.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_22(1880209790);
    noLegs_0_0.set(LegRepurchaseTerm_22);
    InstrumentLeg_22.insert(LegRepurchaseTerm_22.getString());
    FIX::LegSecurityDesc LegSecurityDesc_22("STRING_1502745132");
    noLegs_0_0.set(LegSecurityDesc_22);
    InstrumentLeg_22.insert(LegSecurityDesc_22.getString());
    FIX::LegSecurityExchange LegSecurityExchange_22("EXCHANGE_291928774");
    noLegs_0_0.set(LegSecurityExchange_22);
    InstrumentLeg_22.insert(LegSecurityExchange_22.getString());
    FIX::LegSecurityID LegSecurityID_22("STRING_809217935");
    noLegs_0_0.set(LegSecurityID_22);
    InstrumentLeg_22.insert(LegSecurityID_22.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_22("STRING_1201749471");
    noLegs_0_0.set(LegSecurityIDSource_22);
    InstrumentLeg_22.insert(LegSecurityIDSource_22.getString());
    FIX::LegSecuritySubType LegSecuritySubType_22("STRING_1813150903");
    noLegs_0_0.set(LegSecuritySubType_22);
    InstrumentLeg_22.insert(LegSecuritySubType_22.getString());
    FIX::LegSecurityType LegSecurityType_22("STRING_1600370646");
    noLegs_0_0.set(LegSecurityType_22);
    InstrumentLeg_22.insert(LegSecurityType_22.getString());
    FIX::LegSide LegSide_22('9');
    noLegs_0_0.set(LegSide_22);
    InstrumentLeg_22.insert(LegSide_22.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_22("STRING_1582641810");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_22);
    InstrumentLeg_22.insert(LegStateOrProvinceOfIssue_22.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_22("CHF");
    noLegs_0_0.set(LegStrikeCurrency_22);
    InstrumentLeg_22.insert(LegStrikeCurrency_22.getString());
    FIX::LegStrikePrice LegStrikePrice_22;
    LegStrikePrice_22.setString("17553515");
    noLegs_0_0.set(LegStrikePrice_22);
    InstrumentLeg_22.insert(LegStrikePrice_22.getString());
    FIX::LegSymbol LegSymbol_22("STRING_15269441");
    noLegs_0_0.set(LegSymbol_22);
    InstrumentLeg_22.insert(LegSymbol_22.getString());
    FIX::LegSymbolSfx LegSymbolSfx_22("STRING_1662042061");
    noLegs_0_0.set(LegSymbolSfx_22);
    InstrumentLeg_22.insert(LegSymbolSfx_22.getString());
    FIX::LegTimeUnit LegTimeUnit_22("STRING_1735094649");
    noLegs_0_0.set(LegTimeUnit_22);
    InstrumentLeg_22.insert(LegTimeUnit_22.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_22("STRING_908220089");
    noLegs_0_0.set(LegUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegUnitOfMeasure_22.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_22;
    LegUnitOfMeasureQty_22.setString("10074773");
    noLegs_0_0.set(LegUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegUnitOfMeasureQty_22.getString());
    all_values.push_back(InstrumentLeg_22);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_37;
      FIX::LegSecurityAltID LegSecurityAltID_37("STRING_1281608720");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltID_37.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_37("STRING_1521810797");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltIDSource_37.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_37);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_38;
      FIX::LegSecurityAltID LegSecurityAltID_38("STRING_1221833281");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltID_38.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_38("STRING_208990500");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltIDSource_38.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_38);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    FIX::EncodedLegIssuer EncodedLegIssuer_23("DATA_304586028");
    noLegs_0_1.set(EncodedLegIssuer_23);
    InstrumentLeg_23.insert(EncodedLegIssuer_23.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_23(1053720225);
    noLegs_0_1.set(EncodedLegIssuerLen_23);
    InstrumentLeg_23.insert(EncodedLegIssuerLen_23.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_23("DATA_582103459");
    noLegs_0_1.set(EncodedLegSecurityDesc_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDesc_23.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_23(505899526);
    noLegs_0_1.set(EncodedLegSecurityDescLen_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDescLen_23.getString());
    FIX::LegCFICode LegCFICode_23("STRING_1851808075");
    noLegs_0_1.set(LegCFICode_23);
    InstrumentLeg_23.insert(LegCFICode_23.getString());
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("5899442");
    noLegs_0_1.set(LegContractMultiplier_23);
    InstrumentLeg_23.insert(LegContractMultiplier_23.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_23(2098992622);
    noLegs_0_1.set(LegContractMultiplierUnit_23);
    InstrumentLeg_23.insert(LegContractMultiplierUnit_23.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_23("MONTHYEAR_2040663709");
    noLegs_0_1.set(LegContractSettlMonth_23);
    InstrumentLeg_23.insert(LegContractSettlMonth_23.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_23("COUNTRY_492689129");
    noLegs_0_1.set(LegCountryOfIssue_23);
    InstrumentLeg_23.insert(LegCountryOfIssue_23.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_23("LOCALMKTDATE_1831718764");
    noLegs_0_1.set(LegCouponPaymentDate_23);
    InstrumentLeg_23.insert(LegCouponPaymentDate_23.getString());
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("51.930000");
    noLegs_0_1.set(LegCouponRate_23);
    InstrumentLeg_23.insert(LegCouponRate_23.getString());
    FIX::LegCreditRating LegCreditRating_23("STRING_784617903");
    noLegs_0_1.set(LegCreditRating_23);
    InstrumentLeg_23.insert(LegCreditRating_23.getString());
    FIX::LegCurrency LegCurrency_23("USD");
    noLegs_0_1.set(LegCurrency_23);
    InstrumentLeg_23.insert(LegCurrency_23.getString());
    FIX::LegDatedDate LegDatedDate_23("LOCALMKTDATE_450285158");
    noLegs_0_1.set(LegDatedDate_23);
    InstrumentLeg_23.insert(LegDatedDate_23.getString());
    FIX::LegExerciseStyle LegExerciseStyle_23(2093823698);
    noLegs_0_1.set(LegExerciseStyle_23);
    InstrumentLeg_23.insert(LegExerciseStyle_23.getString());
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("14457836");
    noLegs_0_1.set(LegFactor_23);
    InstrumentLeg_23.insert(LegFactor_23.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_23(2032926969);
    noLegs_0_1.set(LegFlowScheduleType_23);
    InstrumentLeg_23.insert(LegFlowScheduleType_23.getString());
    FIX::LegInstrRegistry LegInstrRegistry_23("STRING_1814030900");
    noLegs_0_1.set(LegInstrRegistry_23);
    InstrumentLeg_23.insert(LegInstrRegistry_23.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_23("LOCALMKTDATE_1409578765");
    noLegs_0_1.set(LegInterestAccrualDate_23);
    InstrumentLeg_23.insert(LegInterestAccrualDate_23.getString());
    FIX::LegIssueDate LegIssueDate_23("LOCALMKTDATE_1640794901");
    noLegs_0_1.set(LegIssueDate_23);
    InstrumentLeg_23.insert(LegIssueDate_23.getString());
    FIX::LegIssuer LegIssuer_23("STRING_1829300342");
    noLegs_0_1.set(LegIssuer_23);
    InstrumentLeg_23.insert(LegIssuer_23.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_23("STRING_924137178");
    noLegs_0_1.set(LegLocaleOfIssue_23);
    InstrumentLeg_23.insert(LegLocaleOfIssue_23.getString());
    FIX::LegMaturityDate LegMaturityDate_23("LOCALMKTDATE_1228405902");
    noLegs_0_1.set(LegMaturityDate_23);
    InstrumentLeg_23.insert(LegMaturityDate_23.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_23("MONTHYEAR_590036783");
    noLegs_0_1.set(LegMaturityMonthYear_23);
    InstrumentLeg_23.insert(LegMaturityMonthYear_23.getString());
    FIX::LegMaturityTime LegMaturityTime_23("TZTIMEONLY_1931614519");
    noLegs_0_1.set(LegMaturityTime_23);
    InstrumentLeg_23.insert(LegMaturityTime_23.getString());
    FIX::LegOptAttribute LegOptAttribute_23('9');
    noLegs_0_1.set(LegOptAttribute_23);
    InstrumentLeg_23.insert(LegOptAttribute_23.getString());
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("18716455");
    noLegs_0_1.set(LegOptionRatio_23);
    InstrumentLeg_23.insert(LegOptionRatio_23.getString());
    FIX::LegPool LegPool_23("STRING_1305941668");
    noLegs_0_1.set(LegPool_23);
    InstrumentLeg_23.insert(LegPool_23.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_23("STRING_24697799");
    noLegs_0_1.set(LegPriceUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasure_23.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("20806360");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasureQty_23.getString());
    FIX::LegProduct LegProduct_23(1610527696);
    noLegs_0_1.set(LegProduct_23);
    InstrumentLeg_23.insert(LegProduct_23.getString());
    FIX::LegPutOrCall LegPutOrCall_23(1078418024);
    noLegs_0_1.set(LegPutOrCall_23);
    InstrumentLeg_23.insert(LegPutOrCall_23.getString());
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("5152558");
    noLegs_0_1.set(LegRatioQty_23);
    InstrumentLeg_23.insert(LegRatioQty_23.getString());
    FIX::LegRedemptionDate LegRedemptionDate_23("LOCALMKTDATE_2116427222");
    noLegs_0_1.set(LegRedemptionDate_23);
    InstrumentLeg_23.insert(LegRedemptionDate_23.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_23("STRING_782742451");
    noLegs_0_1.set(LegRepoCollateralSecurityType_23);
    InstrumentLeg_23.insert(LegRepoCollateralSecurityType_23.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("0.290000");
    noLegs_0_1.set(LegRepurchaseRate_23);
    InstrumentLeg_23.insert(LegRepurchaseRate_23.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_23(2067936196);
    noLegs_0_1.set(LegRepurchaseTerm_23);
    InstrumentLeg_23.insert(LegRepurchaseTerm_23.getString());
    FIX::LegSecurityDesc LegSecurityDesc_23("STRING_675922512");
    noLegs_0_1.set(LegSecurityDesc_23);
    InstrumentLeg_23.insert(LegSecurityDesc_23.getString());
    FIX::LegSecurityExchange LegSecurityExchange_23("EXCHANGE_1597889158");
    noLegs_0_1.set(LegSecurityExchange_23);
    InstrumentLeg_23.insert(LegSecurityExchange_23.getString());
    FIX::LegSecurityID LegSecurityID_23("STRING_1752171312");
    noLegs_0_1.set(LegSecurityID_23);
    InstrumentLeg_23.insert(LegSecurityID_23.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_23("STRING_2071847706");
    noLegs_0_1.set(LegSecurityIDSource_23);
    InstrumentLeg_23.insert(LegSecurityIDSource_23.getString());
    FIX::LegSecuritySubType LegSecuritySubType_23("STRING_235023414");
    noLegs_0_1.set(LegSecuritySubType_23);
    InstrumentLeg_23.insert(LegSecuritySubType_23.getString());
    FIX::LegSecurityType LegSecurityType_23("STRING_98140716");
    noLegs_0_1.set(LegSecurityType_23);
    InstrumentLeg_23.insert(LegSecurityType_23.getString());
    FIX::LegSide LegSide_23('3');
    noLegs_0_1.set(LegSide_23);
    InstrumentLeg_23.insert(LegSide_23.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_23("STRING_685308572");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_23);
    InstrumentLeg_23.insert(LegStateOrProvinceOfIssue_23.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_23("JPY");
    noLegs_0_1.set(LegStrikeCurrency_23);
    InstrumentLeg_23.insert(LegStrikeCurrency_23.getString());
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("5707518");
    noLegs_0_1.set(LegStrikePrice_23);
    InstrumentLeg_23.insert(LegStrikePrice_23.getString());
    FIX::LegSymbol LegSymbol_23("STRING_1858511666");
    noLegs_0_1.set(LegSymbol_23);
    InstrumentLeg_23.insert(LegSymbol_23.getString());
    FIX::LegSymbolSfx LegSymbolSfx_23("STRING_1082433885");
    noLegs_0_1.set(LegSymbolSfx_23);
    InstrumentLeg_23.insert(LegSymbolSfx_23.getString());
    FIX::LegTimeUnit LegTimeUnit_23("STRING_64063147");
    noLegs_0_1.set(LegTimeUnit_23);
    InstrumentLeg_23.insert(LegTimeUnit_23.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_23("STRING_1540328360");
    noLegs_0_1.set(LegUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegUnitOfMeasure_23.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("20065710");
    noLegs_0_1.set(LegUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegUnitOfMeasureQty_23.getString());
    all_values.push_back(InstrumentLeg_23);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_39;
      FIX::LegSecurityAltID LegSecurityAltID_39("STRING_2130365143");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltID_39.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_39("STRING_1790701935");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltIDSource_39.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_39);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_40;
      FIX::LegSecurityAltID LegSecurityAltID_40("STRING_95333567");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltID_40.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_40("STRING_1854526999");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltIDSource_40.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_40);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_24;
    FIX::EncodedLegIssuer EncodedLegIssuer_24("DATA_949159955");
    noLegs_0_2.set(EncodedLegIssuer_24);
    InstrumentLeg_24.insert(EncodedLegIssuer_24.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_24(120031366);
    noLegs_0_2.set(EncodedLegIssuerLen_24);
    InstrumentLeg_24.insert(EncodedLegIssuerLen_24.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_24("DATA_1787679355");
    noLegs_0_2.set(EncodedLegSecurityDesc_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDesc_24.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_24(412204003);
    noLegs_0_2.set(EncodedLegSecurityDescLen_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDescLen_24.getString());
    FIX::LegCFICode LegCFICode_24("STRING_1198449390");
    noLegs_0_2.set(LegCFICode_24);
    InstrumentLeg_24.insert(LegCFICode_24.getString());
    FIX::LegContractMultiplier LegContractMultiplier_24;
    LegContractMultiplier_24.setString("1554515");
    noLegs_0_2.set(LegContractMultiplier_24);
    InstrumentLeg_24.insert(LegContractMultiplier_24.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_24(381147577);
    noLegs_0_2.set(LegContractMultiplierUnit_24);
    InstrumentLeg_24.insert(LegContractMultiplierUnit_24.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_24("MONTHYEAR_1981191841");
    noLegs_0_2.set(LegContractSettlMonth_24);
    InstrumentLeg_24.insert(LegContractSettlMonth_24.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_24("COUNTRY_1260651551");
    noLegs_0_2.set(LegCountryOfIssue_24);
    InstrumentLeg_24.insert(LegCountryOfIssue_24.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_24("LOCALMKTDATE_301600125");
    noLegs_0_2.set(LegCouponPaymentDate_24);
    InstrumentLeg_24.insert(LegCouponPaymentDate_24.getString());
    FIX::LegCouponRate LegCouponRate_24;
    LegCouponRate_24.setString("7.060000");
    noLegs_0_2.set(LegCouponRate_24);
    InstrumentLeg_24.insert(LegCouponRate_24.getString());
    FIX::LegCreditRating LegCreditRating_24("STRING_711057062");
    noLegs_0_2.set(LegCreditRating_24);
    InstrumentLeg_24.insert(LegCreditRating_24.getString());
    FIX::LegCurrency LegCurrency_24("JPY");
    noLegs_0_2.set(LegCurrency_24);
    InstrumentLeg_24.insert(LegCurrency_24.getString());
    FIX::LegDatedDate LegDatedDate_24("LOCALMKTDATE_946080476");
    noLegs_0_2.set(LegDatedDate_24);
    InstrumentLeg_24.insert(LegDatedDate_24.getString());
    FIX::LegExerciseStyle LegExerciseStyle_24(4428505);
    noLegs_0_2.set(LegExerciseStyle_24);
    InstrumentLeg_24.insert(LegExerciseStyle_24.getString());
    FIX::LegFactor LegFactor_24;
    LegFactor_24.setString("8085498");
    noLegs_0_2.set(LegFactor_24);
    InstrumentLeg_24.insert(LegFactor_24.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_24(1631389048);
    noLegs_0_2.set(LegFlowScheduleType_24);
    InstrumentLeg_24.insert(LegFlowScheduleType_24.getString());
    FIX::LegInstrRegistry LegInstrRegistry_24("STRING_48909271");
    noLegs_0_2.set(LegInstrRegistry_24);
    InstrumentLeg_24.insert(LegInstrRegistry_24.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_24("LOCALMKTDATE_481404959");
    noLegs_0_2.set(LegInterestAccrualDate_24);
    InstrumentLeg_24.insert(LegInterestAccrualDate_24.getString());
    FIX::LegIssueDate LegIssueDate_24("LOCALMKTDATE_54657294");
    noLegs_0_2.set(LegIssueDate_24);
    InstrumentLeg_24.insert(LegIssueDate_24.getString());
    FIX::LegIssuer LegIssuer_24("STRING_1907420938");
    noLegs_0_2.set(LegIssuer_24);
    InstrumentLeg_24.insert(LegIssuer_24.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_24("STRING_1563838844");
    noLegs_0_2.set(LegLocaleOfIssue_24);
    InstrumentLeg_24.insert(LegLocaleOfIssue_24.getString());
    FIX::LegMaturityDate LegMaturityDate_24("LOCALMKTDATE_118720441");
    noLegs_0_2.set(LegMaturityDate_24);
    InstrumentLeg_24.insert(LegMaturityDate_24.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_24("MONTHYEAR_1300265650");
    noLegs_0_2.set(LegMaturityMonthYear_24);
    InstrumentLeg_24.insert(LegMaturityMonthYear_24.getString());
    FIX::LegMaturityTime LegMaturityTime_24("TZTIMEONLY_1422926260");
    noLegs_0_2.set(LegMaturityTime_24);
    InstrumentLeg_24.insert(LegMaturityTime_24.getString());
    FIX::LegOptAttribute LegOptAttribute_24('1');
    noLegs_0_2.set(LegOptAttribute_24);
    InstrumentLeg_24.insert(LegOptAttribute_24.getString());
    FIX::LegOptionRatio LegOptionRatio_24;
    LegOptionRatio_24.setString("12831471");
    noLegs_0_2.set(LegOptionRatio_24);
    InstrumentLeg_24.insert(LegOptionRatio_24.getString());
    FIX::LegPool LegPool_24("STRING_1066144547");
    noLegs_0_2.set(LegPool_24);
    InstrumentLeg_24.insert(LegPool_24.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_24("STRING_1506523058");
    noLegs_0_2.set(LegPriceUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasure_24.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
    LegPriceUnitOfMeasureQty_24.setString("9901904");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasureQty_24.getString());
    FIX::LegProduct LegProduct_24(2015304502);
    noLegs_0_2.set(LegProduct_24);
    InstrumentLeg_24.insert(LegProduct_24.getString());
    FIX::LegPutOrCall LegPutOrCall_24(1626554424);
    noLegs_0_2.set(LegPutOrCall_24);
    InstrumentLeg_24.insert(LegPutOrCall_24.getString());
    FIX::LegRatioQty LegRatioQty_24;
    LegRatioQty_24.setString("6303862");
    noLegs_0_2.set(LegRatioQty_24);
    InstrumentLeg_24.insert(LegRatioQty_24.getString());
    FIX::LegRedemptionDate LegRedemptionDate_24("LOCALMKTDATE_280024857");
    noLegs_0_2.set(LegRedemptionDate_24);
    InstrumentLeg_24.insert(LegRedemptionDate_24.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_24("STRING_677520167");
    noLegs_0_2.set(LegRepoCollateralSecurityType_24);
    InstrumentLeg_24.insert(LegRepoCollateralSecurityType_24.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_24;
    LegRepurchaseRate_24.setString("77.260000");
    noLegs_0_2.set(LegRepurchaseRate_24);
    InstrumentLeg_24.insert(LegRepurchaseRate_24.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_24(661172434);
    noLegs_0_2.set(LegRepurchaseTerm_24);
    InstrumentLeg_24.insert(LegRepurchaseTerm_24.getString());
    FIX::LegSecurityDesc LegSecurityDesc_24("STRING_511228360");
    noLegs_0_2.set(LegSecurityDesc_24);
    InstrumentLeg_24.insert(LegSecurityDesc_24.getString());
    FIX::LegSecurityExchange LegSecurityExchange_24("EXCHANGE_2046489277");
    noLegs_0_2.set(LegSecurityExchange_24);
    InstrumentLeg_24.insert(LegSecurityExchange_24.getString());
    FIX::LegSecurityID LegSecurityID_24("STRING_962772559");
    noLegs_0_2.set(LegSecurityID_24);
    InstrumentLeg_24.insert(LegSecurityID_24.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_24("STRING_1020859066");
    noLegs_0_2.set(LegSecurityIDSource_24);
    InstrumentLeg_24.insert(LegSecurityIDSource_24.getString());
    FIX::LegSecuritySubType LegSecuritySubType_24("STRING_610062691");
    noLegs_0_2.set(LegSecuritySubType_24);
    InstrumentLeg_24.insert(LegSecuritySubType_24.getString());
    FIX::LegSecurityType LegSecurityType_24("STRING_869060349");
    noLegs_0_2.set(LegSecurityType_24);
    InstrumentLeg_24.insert(LegSecurityType_24.getString());
    FIX::LegSide LegSide_24('1');
    noLegs_0_2.set(LegSide_24);
    InstrumentLeg_24.insert(LegSide_24.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_24("STRING_1556143167");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_24);
    InstrumentLeg_24.insert(LegStateOrProvinceOfIssue_24.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_24("CHF");
    noLegs_0_2.set(LegStrikeCurrency_24);
    InstrumentLeg_24.insert(LegStrikeCurrency_24.getString());
    FIX::LegStrikePrice LegStrikePrice_24;
    LegStrikePrice_24.setString("10400485");
    noLegs_0_2.set(LegStrikePrice_24);
    InstrumentLeg_24.insert(LegStrikePrice_24.getString());
    FIX::LegSymbol LegSymbol_24("STRING_922398126");
    noLegs_0_2.set(LegSymbol_24);
    InstrumentLeg_24.insert(LegSymbol_24.getString());
    FIX::LegSymbolSfx LegSymbolSfx_24("STRING_597324980");
    noLegs_0_2.set(LegSymbolSfx_24);
    InstrumentLeg_24.insert(LegSymbolSfx_24.getString());
    FIX::LegTimeUnit LegTimeUnit_24("STRING_1094705862");
    noLegs_0_2.set(LegTimeUnit_24);
    InstrumentLeg_24.insert(LegTimeUnit_24.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_24("STRING_682335416");
    noLegs_0_2.set(LegUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegUnitOfMeasure_24.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
    LegUnitOfMeasureQty_24.setString("136801");
    noLegs_0_2.set(LegUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegUnitOfMeasureQty_24.getString());
    all_values.push_back(InstrumentLeg_24);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_41;
      FIX::LegSecurityAltID LegSecurityAltID_41("STRING_1982601066");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltID_41.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_41("STRING_1436606437");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltIDSource_41.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_41);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_42;
      FIX::LegSecurityAltID LegSecurityAltID_42("STRING_477132145");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltID_42.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_42("STRING_1118264564");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltIDSource_42.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_42);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_16;
  FIX::AttachmentPoint AttachmentPoint_16;
  AttachmentPoint_16.setString("73.360000");
  msg.set(AttachmentPoint_16);
  Instrument_16.insert(AttachmentPoint_16.getString());
  FIX::CFICode CFICode_16("STRING_1983655203");
  msg.set(CFICode_16);
  Instrument_16.insert(CFICode_16.getString());
  FIX::CPProgram CPProgram_16(99);
  msg.set(CPProgram_16);
  Instrument_16.insert(CPProgram_16.getString());
  FIX::CPRegType CPRegType_16("STRING_223088191");
  msg.set(CPRegType_16);
  Instrument_16.insert(CPRegType_16.getString());
  FIX::CapPrice CapPrice_16;
  CapPrice_16.setString("14627259");
  msg.set(CapPrice_16);
  Instrument_16.insert(CapPrice_16.getString());
  FIX::ContractMultiplier ContractMultiplier_16;
  ContractMultiplier_16.setString("5913576");
  msg.set(ContractMultiplier_16);
  Instrument_16.insert(ContractMultiplier_16.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_16(1);
  msg.set(ContractMultiplierUnit_16);
  Instrument_16.insert(ContractMultiplierUnit_16.getString());
  FIX::ContractSettlMonth ContractSettlMonth_16("MONTHYEAR_2140246147");
  msg.set(ContractSettlMonth_16);
  Instrument_16.insert(ContractSettlMonth_16.getString());
  FIX::CountryOfIssue CountryOfIssue_16("COUNTRY_1377195343");
  msg.set(CountryOfIssue_16);
  Instrument_16.insert(CountryOfIssue_16.getString());
  FIX::CouponPaymentDate CouponPaymentDate_16("LOCALMKTDATE_1164285483");
  msg.set(CouponPaymentDate_16);
  Instrument_16.insert(CouponPaymentDate_16.getString());
  FIX::CouponRate CouponRate_16;
  CouponRate_16.setString("8.590000");
  msg.set(CouponRate_16);
  Instrument_16.insert(CouponRate_16.getString());
  FIX::CreditRating CreditRating_16("STRING_1276200973");
  msg.set(CreditRating_16);
  Instrument_16.insert(CreditRating_16.getString());
  FIX::DatedDate DatedDate_16("LOCALMKTDATE_2127058042");
  msg.set(DatedDate_16);
  Instrument_16.insert(DatedDate_16.getString());
  FIX::DetachmentPoint DetachmentPoint_16;
  DetachmentPoint_16.setString("99.260000");
  msg.set(DetachmentPoint_16);
  Instrument_16.insert(DetachmentPoint_16.getString());
  FIX::EncodedIssuer EncodedIssuer_16("DATA_1886263664");
  msg.set(EncodedIssuer_16);
  Instrument_16.insert(EncodedIssuer_16.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_16(848634743);
  msg.set(EncodedIssuerLen_16);
  Instrument_16.insert(EncodedIssuerLen_16.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_16("DATA_832220108");
  msg.set(EncodedSecurityDesc_16);
  Instrument_16.insert(EncodedSecurityDesc_16.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_16(1294923184);
  msg.set(EncodedSecurityDescLen_16);
  Instrument_16.insert(EncodedSecurityDescLen_16.getString());
  FIX::ExerciseStyle ExerciseStyle_16(1);
  msg.set(ExerciseStyle_16);
  Instrument_16.insert(ExerciseStyle_16.getString());
  FIX::Factor Factor_16;
  Factor_16.setString("9481401");
  msg.set(Factor_16);
  Instrument_16.insert(Factor_16.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_16(true);
  msg.set(FlexProductEligibilityIndicator_16);
  Instrument_16.insert(FlexProductEligibilityIndicator_16.getString());
  FIX::FlexibleIndicator FlexibleIndicator_16(true);
  msg.set(FlexibleIndicator_16);
  Instrument_16.insert(FlexibleIndicator_16.getString());
  FIX::FloorPrice FloorPrice_16;
  FloorPrice_16.setString("15454651");
  msg.set(FloorPrice_16);
  Instrument_16.insert(FloorPrice_16.getString());
  FIX::FlowScheduleType FlowScheduleType_16(1);
  msg.set(FlowScheduleType_16);
  Instrument_16.insert(FlowScheduleType_16.getString());
  FIX::InstrRegistry InstrRegistry_16("STRING_1179373492");
  msg.set(InstrRegistry_16);
  Instrument_16.insert(InstrRegistry_16.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_16('1');
  msg.set(InstrmtAssignmentMethod_16);
  Instrument_16.insert(InstrmtAssignmentMethod_16.getString());
  FIX::InterestAccrualDate InterestAccrualDate_16("LOCALMKTDATE_348136621");
  msg.set(InterestAccrualDate_16);
  Instrument_16.insert(InterestAccrualDate_16.getString());
  FIX::IssueDate IssueDate_16("LOCALMKTDATE_1014490910");
  msg.set(IssueDate_16);
  Instrument_16.insert(IssueDate_16.getString());
  FIX::Issuer Issuer_16("STRING_848268075");
  msg.set(Issuer_16);
  Instrument_16.insert(Issuer_16.getString());
  FIX::ListMethod ListMethod_16(0);
  msg.set(ListMethod_16);
  Instrument_16.insert(ListMethod_16.getString());
  FIX::LocaleOfIssue LocaleOfIssue_16("STRING_2132755475");
  msg.set(LocaleOfIssue_16);
  Instrument_16.insert(LocaleOfIssue_16.getString());
  FIX::MaturityDate MaturityDate_16("LOCALMKTDATE_1203535411");
  msg.set(MaturityDate_16);
  Instrument_16.insert(MaturityDate_16.getString());
  FIX::MaturityMonthYear MaturityMonthYear_16("MONTHYEAR_661440322");
  msg.set(MaturityMonthYear_16);
  Instrument_16.insert(MaturityMonthYear_16.getString());
  FIX::MaturityTime MaturityTime_16("TZTIMEONLY_2093726888");
  msg.set(MaturityTime_16);
  Instrument_16.insert(MaturityTime_16.getString());
  FIX::MinPriceIncrement MinPriceIncrement_16;
  MinPriceIncrement_16.setString("14266236");
  msg.set(MinPriceIncrement_16);
  Instrument_16.insert(MinPriceIncrement_16.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
  MinPriceIncrementAmount_16.setString("21241663");
  msg.set(MinPriceIncrementAmount_16);
  Instrument_16.insert(MinPriceIncrementAmount_16.getString());
  FIX::NTPositionLimit NTPositionLimit_16(537600858);
  msg.set(NTPositionLimit_16);
  Instrument_16.insert(NTPositionLimit_16.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
  NotionalPercentageOutstanding_16.setString("66.510000");
  msg.set(NotionalPercentageOutstanding_16);
  Instrument_16.insert(NotionalPercentageOutstanding_16.getString());
  FIX::OptAttribute OptAttribute_16('2');
  msg.set(OptAttribute_16);
  Instrument_16.insert(OptAttribute_16.getString());
  FIX::OptPayoutAmount OptPayoutAmount_16;
  OptPayoutAmount_16.setString("19147962");
  msg.set(OptPayoutAmount_16);
  Instrument_16.insert(OptPayoutAmount_16.getString());
  FIX::OptPayoutType OptPayoutType_16(3);
  msg.set(OptPayoutType_16);
  Instrument_16.insert(OptPayoutType_16.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
  OriginalNotionalPercentageOutstanding_16.setString("60.120000");
  msg.set(OriginalNotionalPercentageOutstanding_16);
  Instrument_16.insert(OriginalNotionalPercentageOutstanding_16.getString());
  FIX::Pool Pool_16("STRING_1043513526");
  msg.set(Pool_16);
  Instrument_16.insert(Pool_16.getString());
  FIX::PositionLimit PositionLimit_16(926112880);
  msg.set(PositionLimit_16);
  Instrument_16.insert(PositionLimit_16.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_16("STRING_INT");
  msg.set(PriceQuoteMethod_16);
  Instrument_16.insert(PriceQuoteMethod_16.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_16("STRING_782293543");
  msg.set(PriceUnitOfMeasure_16);
  Instrument_16.insert(PriceUnitOfMeasure_16.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
  PriceUnitOfMeasureQty_16.setString("17747476");
  msg.set(PriceUnitOfMeasureQty_16);
  Instrument_16.insert(PriceUnitOfMeasureQty_16.getString());
  FIX::Product Product_18(8);
  msg.set(Product_18);
  Instrument_16.insert(Product_18.getString());
  FIX::ProductComplex ProductComplex_16("STRING_2077216727");
  msg.set(ProductComplex_16);
  Instrument_16.insert(ProductComplex_16.getString());
  FIX::PutOrCall PutOrCall_16(0);
  msg.set(PutOrCall_16);
  Instrument_16.insert(PutOrCall_16.getString());
  FIX::RedemptionDate RedemptionDate_16("LOCALMKTDATE_1631162528");
  msg.set(RedemptionDate_16);
  Instrument_16.insert(RedemptionDate_16.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_16("STRING_117221183");
  msg.set(RepoCollateralSecurityType_16);
  Instrument_16.insert(RepoCollateralSecurityType_16.getString());
  FIX::RepurchaseRate RepurchaseRate_16;
  RepurchaseRate_16.setString("56.500000");
  msg.set(RepurchaseRate_16);
  Instrument_16.insert(RepurchaseRate_16.getString());
  FIX::RepurchaseTerm RepurchaseTerm_16(1029143990);
  msg.set(RepurchaseTerm_16);
  Instrument_16.insert(RepurchaseTerm_16.getString());
  FIX::RestructuringType RestructuringType_16("STRING_MR");
  msg.set(RestructuringType_16);
  Instrument_16.insert(RestructuringType_16.getString());
  FIX::SecurityDesc SecurityDesc_16("STRING_878315494");
  msg.set(SecurityDesc_16);
  Instrument_16.insert(SecurityDesc_16.getString());
  FIX::SecurityExchange SecurityExchange_16("EXCHANGE_440805628");
  msg.set(SecurityExchange_16);
  Instrument_16.insert(SecurityExchange_16.getString());
  FIX::SecurityGroup SecurityGroup_16("STRING_1747551770");
  msg.set(SecurityGroup_16);
  Instrument_16.insert(SecurityGroup_16.getString());
  FIX::SecurityID SecurityID_16("STRING_1892806404");
  msg.set(SecurityID_16);
  Instrument_16.insert(SecurityID_16.getString());
  FIX::SecurityIDSource SecurityIDSource_16("STRING_6");
  msg.set(SecurityIDSource_16);
  Instrument_16.insert(SecurityIDSource_16.getString());
  FIX::SecurityStatus SecurityStatus_16("STRING_1");
  msg.set(SecurityStatus_16);
  Instrument_16.insert(SecurityStatus_16.getString());
  FIX::SecuritySubType SecuritySubType_16("STRING_1878078231");
  msg.set(SecuritySubType_16);
  Instrument_16.insert(SecuritySubType_16.getString());
  FIX::SecurityType SecurityType_18("STRING_DUAL");
  msg.set(SecurityType_18);
  Instrument_16.insert(SecurityType_18.getString());
  FIX::Seniority Seniority_16("STRING_SD");
  msg.set(Seniority_16);
  Instrument_16.insert(Seniority_16.getString());
  FIX::SettlMethod SettlMethod_16('C');
  msg.set(SettlMethod_16);
  Instrument_16.insert(SettlMethod_16.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_16("STRING_1771749069");
  msg.set(SettleOnOpenFlag_16);
  Instrument_16.insert(SettleOnOpenFlag_16.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_16("STRING_1063459864");
  msg.set(StateOrProvinceOfIssue_16);
  Instrument_16.insert(StateOrProvinceOfIssue_16.getString());
  FIX::StrikeCurrency StrikeCurrency_16("GBP");
  msg.set(StrikeCurrency_16);
  Instrument_16.insert(StrikeCurrency_16.getString());
  FIX::StrikeMultiplier StrikeMultiplier_16;
  StrikeMultiplier_16.setString("10329050");
  msg.set(StrikeMultiplier_16);
  Instrument_16.insert(StrikeMultiplier_16.getString());
  FIX::StrikePrice StrikePrice_16;
  StrikePrice_16.setString("21292348");
  msg.set(StrikePrice_16);
  Instrument_16.insert(StrikePrice_16.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_16(1);
  msg.set(StrikePriceBoundaryMethod_16);
  Instrument_16.insert(StrikePriceBoundaryMethod_16.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
  StrikePriceBoundaryPrecision_16.setString("10.300000");
  msg.set(StrikePriceBoundaryPrecision_16);
  Instrument_16.insert(StrikePriceBoundaryPrecision_16.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_16(3);
  msg.set(StrikePriceDeterminationMethod_16);
  Instrument_16.insert(StrikePriceDeterminationMethod_16.getString());
  FIX::StrikeValue StrikeValue_16;
  StrikeValue_16.setString("12791697");
  msg.set(StrikeValue_16);
  Instrument_16.insert(StrikeValue_16.getString());
  FIX::Symbol Symbol_16("STRING_1357143320");
  msg.set(Symbol_16);
  Instrument_16.insert(Symbol_16.getString());
  FIX::SymbolSfx SymbolSfx_16("STRING_WI");
  msg.set(SymbolSfx_16);
  Instrument_16.insert(SymbolSfx_16.getString());
  FIX::TimeUnit TimeUnit_16("STRING_H");
  msg.set(TimeUnit_16);
  Instrument_16.insert(TimeUnit_16.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_16(4);
  msg.set(UnderlyingPriceDeterminationMethod_16);
  Instrument_16.insert(UnderlyingPriceDeterminationMethod_16.getString());
  FIX::UnitOfMeasure UnitOfMeasure_16("STRING_tn");
  msg.set(UnitOfMeasure_16);
  Instrument_16.insert(UnitOfMeasure_16.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
  UnitOfMeasureQty_16.setString("1083376");
  msg.set(UnitOfMeasureQty_16);
  Instrument_16.insert(UnitOfMeasureQty_16.getString());
  FIX::ValuationMethod ValuationMethod_16("STRING_EQTY");
  msg.set(ValuationMethod_16);
  Instrument_16.insert(ValuationMethod_16.getString());
  all_values.push_back(Instrument_16);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_35;
    FIX::ComplexEventCondition ComplexEventCondition_35(1);
    noComplexEvents_0_0.set(ComplexEventCondition_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventCondition_35.getString());
    FIX::ComplexEventPrice ComplexEventPrice_35;
    ComplexEventPrice_35.setString("4055049");
    noComplexEvents_0_0.set(ComplexEventPrice_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPrice_35.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_35(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryMethod_35.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_35;
    ComplexEventPriceBoundaryPrecision_35.setString("51.880000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryPrecision_35.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_35(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceTimeType_35.getString());
    FIX::ComplexEventType ComplexEventType_35(5);
    noComplexEvents_0_0.set(ComplexEventType_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexEventType_35.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_35;
    ComplexOptPayoutAmount_35.setString("4309179");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_35);
    ComplexEvents_NoComplexEvents_35.insert(ComplexOptPayoutAmount_35.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_35);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_75;
      FIX::ComplexEventEndDate ComplexEventEndDate_75(FIX::UTCTIMESTAMP(16, 51, 41, 24, 12009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_75);
      ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventEndDate_75.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_75(FIX::UTCTIMESTAMP(0, 15, 10, 6, 62006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_75);
      ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventStartDate_75.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_75);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_155;
        FIX::ComplexEventEndTime ComplexEventEndTime_155(FIX::UTCTIMEONLY(1, 3, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_155);
        ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventEndTime_155.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_155(FIX::UTCTIMEONLY(16, 1, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_155);
        ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventStartTime_155.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_155);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_156;
        FIX::ComplexEventEndTime ComplexEventEndTime_156(FIX::UTCTIMEONLY(7, 12, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_156);
        ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventEndTime_156.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_156(FIX::UTCTIMEONLY(10, 16, 38));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_156);
        ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventStartTime_156.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_156);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_76;
      FIX::ComplexEventEndDate ComplexEventEndDate_76(FIX::UTCTIMESTAMP(20, 29, 13, 5, 112011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_76);
      ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventEndDate_76.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_76(FIX::UTCTIMESTAMP(14, 14, 21, 25, 122003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_76);
      ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventStartDate_76.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_76);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_157;
        FIX::ComplexEventEndTime ComplexEventEndTime_157(FIX::UTCTIMEONLY(14, 17, 29));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_157);
        ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventEndTime_157.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_157(FIX::UTCTIMEONLY(13, 30, 3));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_157);
        ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventStartTime_157.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_157);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_158;
        FIX::ComplexEventEndTime ComplexEventEndTime_158(FIX::UTCTIMEONLY(1, 15, 59));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_158);
        ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventEndTime_158.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_158(FIX::UTCTIMEONLY(5, 15, 36));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_158);
        ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventStartTime_158.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_158);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_77;
      FIX::ComplexEventEndDate ComplexEventEndDate_77(FIX::UTCTIMESTAMP(15, 58, 7, 24, 12016));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_77);
      ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventEndDate_77.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_77(FIX::UTCTIMESTAMP(14, 4, 13, 27, 82003));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_77);
      ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventStartDate_77.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_77);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_159;
        FIX::ComplexEventEndTime ComplexEventEndTime_159(FIX::UTCTIMEONLY(5, 59, 57));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_159);
        ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventEndTime_159.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_159(FIX::UTCTIMEONLY(0, 28, 8));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_159);
        ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventStartTime_159.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_159);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_160;
        FIX::ComplexEventEndTime ComplexEventEndTime_160(FIX::UTCTIMEONLY(21, 16, 43));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_160);
        ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventEndTime_160.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_160(FIX::UTCTIMEONLY(13, 50, 8));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_160);
        ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventStartTime_160.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_160);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_36;
    FIX::ComplexEventCondition ComplexEventCondition_36(2);
    noComplexEvents_0_1.set(ComplexEventCondition_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventCondition_36.getString());
    FIX::ComplexEventPrice ComplexEventPrice_36;
    ComplexEventPrice_36.setString("2566156");
    noComplexEvents_0_1.set(ComplexEventPrice_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPrice_36.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_36(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryMethod_36.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_36;
    ComplexEventPriceBoundaryPrecision_36.setString("58.990000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryPrecision_36.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_36(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceTimeType_36.getString());
    FIX::ComplexEventType ComplexEventType_36(8);
    noComplexEvents_0_1.set(ComplexEventType_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexEventType_36.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_36;
    ComplexOptPayoutAmount_36.setString("7025405");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_36);
    ComplexEvents_NoComplexEvents_36.insert(ComplexOptPayoutAmount_36.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_36);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_78;
      FIX::ComplexEventEndDate ComplexEventEndDate_78(FIX::UTCTIMESTAMP(22, 20, 28, 9, 42004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_78);
      ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventEndDate_78.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_78(FIX::UTCTIMESTAMP(20, 9, 59, 13, 22001));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_78);
      ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventStartDate_78.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_78);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_161;
        FIX::ComplexEventEndTime ComplexEventEndTime_161(FIX::UTCTIMEONLY(16, 6, 45));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_161);
        ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventEndTime_161.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_161(FIX::UTCTIMEONLY(19, 36, 25));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_161);
        ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventStartTime_161.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_161);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_162;
        FIX::ComplexEventEndTime ComplexEventEndTime_162(FIX::UTCTIMEONLY(14, 23, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_162);
        ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventEndTime_162.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_162(FIX::UTCTIMEONLY(2, 7, 31));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_162);
        ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventStartTime_162.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_162);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_163;
        FIX::ComplexEventEndTime ComplexEventEndTime_163(FIX::UTCTIMEONLY(5, 43, 47));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_163);
        ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventEndTime_163.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_163(FIX::UTCTIMEONLY(22, 49, 16));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_163);
        ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventStartTime_163.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_163);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_37;
    FIX::ComplexEventCondition ComplexEventCondition_37(1);
    noComplexEvents_0_2.set(ComplexEventCondition_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventCondition_37.getString());
    FIX::ComplexEventPrice ComplexEventPrice_37;
    ComplexEventPrice_37.setString("15108650");
    noComplexEvents_0_2.set(ComplexEventPrice_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPrice_37.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_37(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryMethod_37.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_37;
    ComplexEventPriceBoundaryPrecision_37.setString("37.320000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryPrecision_37.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_37(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceTimeType_37.getString());
    FIX::ComplexEventType ComplexEventType_37(9);
    noComplexEvents_0_2.set(ComplexEventType_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventType_37.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_37;
    ComplexOptPayoutAmount_37.setString("10063781");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexOptPayoutAmount_37.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_37);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_79;
      FIX::ComplexEventEndDate ComplexEventEndDate_79(FIX::UTCTIMESTAMP(16, 11, 35, 11, 42012));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_79);
      ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventEndDate_79.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_79(FIX::UTCTIMESTAMP(5, 16, 8, 22, 72008));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_79);
      ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventStartDate_79.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_79);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_164;
        FIX::ComplexEventEndTime ComplexEventEndTime_164(FIX::UTCTIMEONLY(17, 56, 40));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_164);
        ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventEndTime_164.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_164(FIX::UTCTIMEONLY(18, 30, 5));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_164);
        ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventStartTime_164.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_164);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_80;
      FIX::ComplexEventEndDate ComplexEventEndDate_80(FIX::UTCTIMESTAMP(8, 4, 24, 20, 82012));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_80);
      ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventEndDate_80.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_80(FIX::UTCTIMESTAMP(18, 38, 6, 13, 32007));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_80);
      ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventStartDate_80.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_80);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_165;
        FIX::ComplexEventEndTime ComplexEventEndTime_165(FIX::UTCTIMEONLY(11, 26, 25));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_165);
        ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventEndTime_165.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_165(FIX::UTCTIMEONLY(0, 33, 22));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_165);
        ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventStartTime_165.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_165);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_81;
      FIX::ComplexEventEndDate ComplexEventEndDate_81(FIX::UTCTIMESTAMP(18, 18, 33, 19, 52013));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_81);
      ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventEndDate_81.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_81(FIX::UTCTIMESTAMP(0, 16, 4, 9, 92003));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_81);
      ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventStartDate_81.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_81);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_166;
        FIX::ComplexEventEndTime ComplexEventEndTime_166(FIX::UTCTIMEONLY(9, 6, 37));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_166);
        ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventEndTime_166.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_166(FIX::UTCTIMEONLY(12, 14, 37));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_166);
        ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventStartTime_166.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_166);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_34;
    FIX::EventDate EventDate_34("LOCALMKTDATE_1281329785");
    noEvents_0_0.set(EventDate_34);
    EvntGrp_NoEvents_34.insert(EventDate_34.getString());
    FIX::EventPx EventPx_34;
    EventPx_34.setString("244294");
    noEvents_0_0.set(EventPx_34);
    EvntGrp_NoEvents_34.insert(EventPx_34.getString());
    FIX::EventText EventText_34("STRING_1953260441");
    noEvents_0_0.set(EventText_34);
    EvntGrp_NoEvents_34.insert(EventText_34.getString());
    FIX::EventTime EventTime_34(FIX::UTCTIMESTAMP(7, 6, 48, 24, 22010));
    noEvents_0_0.set(EventTime_34);
    EvntGrp_NoEvents_34.insert(EventTime_34.getString());
    FIX::EventType EventType_34(2);
    noEvents_0_0.set(EventType_34);
    EvntGrp_NoEvents_34.insert(EventType_34.getString());
    all_values.push_back(EvntGrp_NoEvents_34);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_35;
    FIX::EventDate EventDate_35("LOCALMKTDATE_1862178908");
    noEvents_0_1.set(EventDate_35);
    EvntGrp_NoEvents_35.insert(EventDate_35.getString());
    FIX::EventPx EventPx_35;
    EventPx_35.setString("20588094");
    noEvents_0_1.set(EventPx_35);
    EvntGrp_NoEvents_35.insert(EventPx_35.getString());
    FIX::EventText EventText_35("STRING_1562389697");
    noEvents_0_1.set(EventText_35);
    EvntGrp_NoEvents_35.insert(EventText_35.getString());
    FIX::EventTime EventTime_35(FIX::UTCTIMESTAMP(7, 25, 56, 4, 22010));
    noEvents_0_1.set(EventTime_35);
    EvntGrp_NoEvents_35.insert(EventTime_35.getString());
    FIX::EventType EventType_35(12);
    noEvents_0_1.set(EventType_35);
    EvntGrp_NoEvents_35.insert(EventType_35.getString());
    all_values.push_back(EvntGrp_NoEvents_35);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_28;
    FIX::InstrumentPartyID InstrumentPartyID_28("STRING_1166355505");
    noInstrumentParties_0_0.set(InstrumentPartyID_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyID_28.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_28('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyIDSource_28.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_28(10184469);
    noInstrumentParties_0_0.set(InstrumentPartyRole_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyRole_28.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_28);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51;
      FIX::InstrumentPartySubID InstrumentPartySubID_51("STRING_1287730597");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubID_51.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_51(1191409044);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubIDType_51.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52;
      FIX::InstrumentPartySubID InstrumentPartySubID_52("STRING_1963203741");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubID_52.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_52(1499313354);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubIDType_52.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53;
      FIX::InstrumentPartySubID InstrumentPartySubID_53("STRING_325255181");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubID_53.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_53(1987633156);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubIDType_53.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_29;
    FIX::InstrumentPartyID InstrumentPartyID_29("STRING_1305090147");
    noInstrumentParties_0_1.set(InstrumentPartyID_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyID_29.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_29('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyIDSource_29.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_29(2053204811);
    noInstrumentParties_0_1.set(InstrumentPartyRole_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyRole_29.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_29);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54;
      FIX::InstrumentPartySubID InstrumentPartySubID_54("STRING_463842408");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubID_54.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_54(1719312239);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubIDType_54.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55;
      FIX::InstrumentPartySubID InstrumentPartySubID_55("STRING_628484491");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubID_55.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_55(1330911707);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubIDType_55.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56;
      FIX::InstrumentPartySubID InstrumentPartySubID_56("STRING_310392133");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubID_56.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_56(343179751);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubIDType_56.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_34;
    FIX::SecurityAltID SecurityAltID_34("STRING_1872781830");
    noSecurityAltID_0_0.set(SecurityAltID_34);
    SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltID_34.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_34("STRING_1897773391");
    noSecurityAltID_0_0.set(SecurityAltIDSource_34);
    SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltIDSource_34.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_34);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_35;
    FIX::SecurityAltID SecurityAltID_35("STRING_754586272");
    noSecurityAltID_0_1.set(SecurityAltID_35);
    SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltID_35.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_35("STRING_1226265467");
    noSecurityAltID_0_1.set(SecurityAltIDSource_35);
    SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltIDSource_35.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_35);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_36;
    FIX::SecurityAltID SecurityAltID_36("STRING_1206215359");
    noSecurityAltID_0_2.set(SecurityAltID_36);
    SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltID_36.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_36("STRING_830068256");
    noSecurityAltID_0_2.set(SecurityAltIDSource_36);
    SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltIDSource_36.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_36);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_32;
  FIX::SecurityXML SecurityXML_33("XMLDATA_1732558668");
  msg.set(SecurityXML_33);
  FIX::SecurityXMLLen SecurityXMLLen_16(1365364295);
  msg.set(SecurityXMLLen_16);
  FIX::SecurityXMLSchema SecurityXMLSchema_16("STRING_1289688148");
  msg.set(SecurityXMLSchema_16);
  SecurityXML_32.insert(SecurityXMLSchema_16.getString());
  all_values.push_back(SecurityXML_32);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_2;
    FIX::RootPartyID RootPartyID_2("STRING_384236153");
    noRootPartyIDs_0_0.set(RootPartyID_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyID_2.getString());
    FIX::RootPartyIDSource RootPartyIDSource_2('6');
    noRootPartyIDs_0_0.set(RootPartyIDSource_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyIDSource_2.getString());
    FIX::RootPartyRole RootPartyRole_2(1267136910);
    noRootPartyIDs_0_0.set(RootPartyRole_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyRole_2.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_2);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_5;
      FIX::RootPartySubID RootPartySubID_5("STRING_1356755555");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubID_5.getString());
      FIX::RootPartySubIDType RootPartySubIDType_5(311062306);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubIDType_5.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_5);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_6;
      FIX::RootPartySubID RootPartySubID_6("STRING_778872231");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubID_6.getString());
      FIX::RootPartySubIDType RootPartySubIDType_6(708585261);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_6);
      RootSubParties_NoRootPartySubIDs_6.insert(RootPartySubIDType_6.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_6);

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
    FIX::ClOrdID ClOrdID_18("STRING_619021739");
    noSides_0_0.set(ClOrdID_18);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdID_18.getString());
    FIX::ClOrdLinkID ClOrdLinkID_3("STRING_2013675408");
    noSides_0_0.set(ClOrdLinkID_3);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdLinkID_3.getString());
    FIX::ComplianceID ComplianceID_1("STRING_1665911616");
    noSides_0_0.set(ComplianceID_1);
    SideCrossOrdCxlGrp_NoSides_0.insert(ComplianceID_1.getString());
    FIX::EncodedText EncodedText_26("DATA_524742903");
    noSides_0_0.set(EncodedText_26);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedText_26.getString());
    FIX::EncodedTextLen EncodedTextLen_26(803873046);
    noSides_0_0.set(EncodedTextLen_26);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedTextLen_26.getString());
    FIX::OrigClOrdID OrigClOrdID_3("STRING_2129754024");
    noSides_0_0.set(OrigClOrdID_3);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigClOrdID_3.getString());
    FIX::OrigOrdModTime OrigOrdModTime_0(FIX::UTCTIMESTAMP(1, 3, 7, 0, 22005));
    noSides_0_0.set(OrigOrdModTime_0);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigOrdModTime_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_18("STRING_1525827031");
    noSides_0_0.set(SecondaryClOrdID_18);
    SideCrossOrdCxlGrp_NoSides_0.insert(SecondaryClOrdID_18.getString());
    FIX::Side Side_15('E');
    noSides_0_0.set(Side_15);
    SideCrossOrdCxlGrp_NoSides_0.insert(Side_15.getString());
    FIX::Text Text_26("STRING_1358527276");
    noSides_0_0.set(Text_26);
    SideCrossOrdCxlGrp_NoSides_0.insert(Text_26.getString());
    FIX::TradeDate TradeDate_12("LOCALMKTDATE_584558743");
    noSides_0_0.set(TradeDate_12);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeDate_12.getString());
    FIX::TradeOriginationDate TradeOriginationDate_6("LOCALMKTDATE_1992590462");
    noSides_0_0.set(TradeOriginationDate_6);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeOriginationDate_6.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_0);

    // OrderQtyData
    multiset<string> OrderQtyData_3;
    FIX::CashOrderQty CashOrderQty_3;
    CashOrderQty_3.setString("9436022");
    noSides_0_0.set(CashOrderQty_3);
    OrderQtyData_3.insert(CashOrderQty_3.getString());
    FIX::OrderPercent OrderPercent_3;
    OrderPercent_3.setString("30.380000");
    noSides_0_0.set(OrderPercent_3);
    OrderQtyData_3.insert(OrderPercent_3.getString());
    FIX::OrderQty OrderQty_12;
    OrderQty_12.setString("11347949");
    noSides_0_0.set(OrderQty_12);
    OrderQtyData_3.insert(OrderQty_12.getString());
    FIX::RoundingDirection RoundingDirection_3('1');
    noSides_0_0.set(RoundingDirection_3);
    OrderQtyData_3.insert(RoundingDirection_3.getString());
    FIX::RoundingModulus RoundingModulus_3;
    RoundingModulus_3.setString("1866755");
    noSides_0_0.set(RoundingModulus_3);
    OrderQtyData_3.insert(RoundingModulus_3.getString());
    all_values.push_back(OrderQtyData_3);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_41;
      FIX::PartyID PartyID_41("STRING_1320208000");
      noPartyIDs_0_1_0.set(PartyID_41);
      Parties_NoPartyIDs_41.insert(PartyID_41.getString());
      FIX::PartyIDSource PartyIDSource_41('B');
      noPartyIDs_0_1_0.set(PartyIDSource_41);
      Parties_NoPartyIDs_41.insert(PartyIDSource_41.getString());
      FIX::PartyRole PartyRole_41(72);
      noPartyIDs_0_1_0.set(PartyRole_41);
      Parties_NoPartyIDs_41.insert(PartyRole_41.getString());
      all_values.push_back(Parties_NoPartyIDs_41);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_83;
        FIX::PartySubID PartySubID_83("STRING_1928699912");
        noPartySubIDs_0_0_2_0.set(PartySubID_83);
        PtysSubGrp_NoPartySubIDs_83.insert(PartySubID_83.getString());
        FIX::PartySubIDType PartySubIDType_83(26);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_83);
        PtysSubGrp_NoPartySubIDs_83.insert(PartySubIDType_83.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_83);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_42;
      FIX::PartyID PartyID_42("STRING_120104147");
      noPartyIDs_0_1_1.set(PartyID_42);
      Parties_NoPartyIDs_42.insert(PartyID_42.getString());
      FIX::PartyIDSource PartyIDSource_42('B');
      noPartyIDs_0_1_1.set(PartyIDSource_42);
      Parties_NoPartyIDs_42.insert(PartyIDSource_42.getString());
      FIX::PartyRole PartyRole_42(38);
      noPartyIDs_0_1_1.set(PartyRole_42);
      Parties_NoPartyIDs_42.insert(PartyRole_42.getString());
      all_values.push_back(Parties_NoPartyIDs_42);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_84;
        FIX::PartySubID PartySubID_84("STRING_924980906");
        noPartySubIDs_0_1_2_0.set(PartySubID_84);
        PtysSubGrp_NoPartySubIDs_84.insert(PartySubID_84.getString());
        FIX::PartySubIDType PartySubIDType_84(31);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_84);
        PtysSubGrp_NoPartySubIDs_84.insert(PartySubIDType_84.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_84);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_85;
        FIX::PartySubID PartySubID_85("STRING_1768286139");
        noPartySubIDs_0_1_2_1.set(PartySubID_85);
        PtysSubGrp_NoPartySubIDs_85.insert(PartySubID_85.getString());
        FIX::PartySubIDType PartySubIDType_85(13);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_85);
        PtysSubGrp_NoPartySubIDs_85.insert(PartySubIDType_85.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_85);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_86;
        FIX::PartySubID PartySubID_86("STRING_1076615784");
        noPartySubIDs_0_1_2_2.set(PartySubID_86);
        PtysSubGrp_NoPartySubIDs_86.insert(PartySubID_86.getString());
        FIX::PartySubIDType PartySubIDType_86(30);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_86);
        PtysSubGrp_NoPartySubIDs_86.insert(PartySubIDType_86.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_86);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_1;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_1;
    FIX::ClOrdID ClOrdID_19("STRING_1428516028");
    noSides_0_1.set(ClOrdID_19);
    SideCrossOrdCxlGrp_NoSides_1.insert(ClOrdID_19.getString());
    FIX::ClOrdLinkID ClOrdLinkID_4("STRING_704669424");
    noSides_0_1.set(ClOrdLinkID_4);
    SideCrossOrdCxlGrp_NoSides_1.insert(ClOrdLinkID_4.getString());
    FIX::ComplianceID ComplianceID_2("STRING_1341920508");
    noSides_0_1.set(ComplianceID_2);
    SideCrossOrdCxlGrp_NoSides_1.insert(ComplianceID_2.getString());
    FIX::EncodedText EncodedText_27("DATA_1560777838");
    noSides_0_1.set(EncodedText_27);
    SideCrossOrdCxlGrp_NoSides_1.insert(EncodedText_27.getString());
    FIX::EncodedTextLen EncodedTextLen_27(83012808);
    noSides_0_1.set(EncodedTextLen_27);
    SideCrossOrdCxlGrp_NoSides_1.insert(EncodedTextLen_27.getString());
    FIX::OrigClOrdID OrigClOrdID_4("STRING_356959065");
    noSides_0_1.set(OrigClOrdID_4);
    SideCrossOrdCxlGrp_NoSides_1.insert(OrigClOrdID_4.getString());
    FIX::OrigOrdModTime OrigOrdModTime_1(FIX::UTCTIMESTAMP(7, 39, 3, 1, 22001));
    noSides_0_1.set(OrigOrdModTime_1);
    SideCrossOrdCxlGrp_NoSides_1.insert(OrigOrdModTime_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_19("STRING_656686485");
    noSides_0_1.set(SecondaryClOrdID_19);
    SideCrossOrdCxlGrp_NoSides_1.insert(SecondaryClOrdID_19.getString());
    FIX::Side Side_16('A');
    noSides_0_1.set(Side_16);
    SideCrossOrdCxlGrp_NoSides_1.insert(Side_16.getString());
    FIX::Text Text_27("STRING_941219206");
    noSides_0_1.set(Text_27);
    SideCrossOrdCxlGrp_NoSides_1.insert(Text_27.getString());
    FIX::TradeDate TradeDate_13("LOCALMKTDATE_1806514166");
    noSides_0_1.set(TradeDate_13);
    SideCrossOrdCxlGrp_NoSides_1.insert(TradeDate_13.getString());
    FIX::TradeOriginationDate TradeOriginationDate_7("LOCALMKTDATE_806288939");
    noSides_0_1.set(TradeOriginationDate_7);
    SideCrossOrdCxlGrp_NoSides_1.insert(TradeOriginationDate_7.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_1);

    // OrderQtyData
    multiset<string> OrderQtyData_4;
    FIX::CashOrderQty CashOrderQty_4;
    CashOrderQty_4.setString("4250058");
    noSides_0_1.set(CashOrderQty_4);
    OrderQtyData_4.insert(CashOrderQty_4.getString());
    FIX::OrderPercent OrderPercent_4;
    OrderPercent_4.setString("4.300000");
    noSides_0_1.set(OrderPercent_4);
    OrderQtyData_4.insert(OrderPercent_4.getString());
    FIX::OrderQty OrderQty_13;
    OrderQty_13.setString("19279660");
    noSides_0_1.set(OrderQty_13);
    OrderQtyData_4.insert(OrderQty_13.getString());
    FIX::RoundingDirection RoundingDirection_4('1');
    noSides_0_1.set(RoundingDirection_4);
    OrderQtyData_4.insert(RoundingDirection_4.getString());
    FIX::RoundingModulus RoundingModulus_4;
    RoundingModulus_4.setString("19879684");
    noSides_0_1.set(RoundingModulus_4);
    OrderQtyData_4.insert(RoundingModulus_4.getString());
    all_values.push_back(OrderQtyData_4);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_43;
      FIX::PartyID PartyID_43("STRING_183642127");
      noPartyIDs_1_1_0.set(PartyID_43);
      Parties_NoPartyIDs_43.insert(PartyID_43.getString());
      FIX::PartyIDSource PartyIDSource_43('E');
      noPartyIDs_1_1_0.set(PartyIDSource_43);
      Parties_NoPartyIDs_43.insert(PartyIDSource_43.getString());
      FIX::PartyRole PartyRole_43(47);
      noPartyIDs_1_1_0.set(PartyRole_43);
      Parties_NoPartyIDs_43.insert(PartyRole_43.getString());
      all_values.push_back(Parties_NoPartyIDs_43);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_87;
        FIX::PartySubID PartySubID_87("STRING_1787018093");
        noPartySubIDs_1_0_2_0.set(PartySubID_87);
        PtysSubGrp_NoPartySubIDs_87.insert(PartySubID_87.getString());
        FIX::PartySubIDType PartySubIDType_87(4);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_87);
        PtysSubGrp_NoPartySubIDs_87.insert(PartySubIDType_87.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_87);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_88;
        FIX::PartySubID PartySubID_88("STRING_738429193");
        noPartySubIDs_1_0_2_1.set(PartySubID_88);
        PtysSubGrp_NoPartySubIDs_88.insert(PartySubID_88.getString());
        FIX::PartySubIDType PartySubIDType_88(29);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_88);
        PtysSubGrp_NoPartySubIDs_88.insert(PartySubIDType_88.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_88);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_44;
      FIX::PartyID PartyID_44("STRING_46411034");
      noPartyIDs_1_1_1.set(PartyID_44);
      Parties_NoPartyIDs_44.insert(PartyID_44.getString());
      FIX::PartyIDSource PartyIDSource_44('3');
      noPartyIDs_1_1_1.set(PartyIDSource_44);
      Parties_NoPartyIDs_44.insert(PartyIDSource_44.getString());
      FIX::PartyRole PartyRole_44(53);
      noPartyIDs_1_1_1.set(PartyRole_44);
      Parties_NoPartyIDs_44.insert(PartyRole_44.getString());
      all_values.push_back(Parties_NoPartyIDs_44);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_89;
        FIX::PartySubID PartySubID_89("STRING_289825119");
        noPartySubIDs_1_1_2_0.set(PartySubID_89);
        PtysSubGrp_NoPartySubIDs_89.insert(PartySubID_89.getString());
        FIX::PartySubIDType PartySubIDType_89(8);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_89);
        PtysSubGrp_NoPartySubIDs_89.insert(PartySubIDType_89.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_89);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_90;
        FIX::PartySubID PartySubID_90("STRING_796995393");
        noPartySubIDs_1_1_2_1.set(PartySubID_90);
        PtysSubGrp_NoPartySubIDs_90.insert(PartySubID_90.getString());
        FIX::PartySubIDType PartySubIDType_90(28);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_90);
        PtysSubGrp_NoPartySubIDs_90.insert(PartySubIDType_90.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_90);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_91;
        FIX::PartySubID PartySubID_91("STRING_821106245");
        noPartySubIDs_1_1_2_2.set(PartySubID_91);
        PtysSubGrp_NoPartySubIDs_91.insert(PartySubID_91.getString());
        FIX::PartySubIDType PartySubIDType_91(12);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_91);
        PtysSubGrp_NoPartySubIDs_91.insert(PartySubIDType_91.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_91);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_45;
      FIX::PartyID PartyID_45("STRING_1828751840");
      noPartyIDs_1_1_2.set(PartyID_45);
      Parties_NoPartyIDs_45.insert(PartyID_45.getString());
      FIX::PartyIDSource PartyIDSource_45('B');
      noPartyIDs_1_1_2.set(PartyIDSource_45);
      Parties_NoPartyIDs_45.insert(PartyIDSource_45.getString());
      FIX::PartyRole PartyRole_45(85);
      noPartyIDs_1_1_2.set(PartyRole_45);
      Parties_NoPartyIDs_45.insert(PartyRole_45.getString());
      all_values.push_back(Parties_NoPartyIDs_45);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_92;
        FIX::PartySubID PartySubID_92("STRING_1383336657");
        noPartySubIDs_1_2_2_0.set(PartySubID_92);
        PtysSubGrp_NoPartySubIDs_92.insert(PartySubID_92.getString());
        FIX::PartySubIDType PartySubIDType_92(9);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_92);
        PtysSubGrp_NoPartySubIDs_92.insert(PartySubIDType_92.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_92);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_93;
        FIX::PartySubID PartySubID_93("STRING_880754244");
        noPartySubIDs_1_2_2_1.set(PartySubID_93);
        PtysSubGrp_NoPartySubIDs_93.insert(PartySubID_93.getString());
        FIX::PartySubIDType PartySubIDType_93(9);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_93);
        PtysSubGrp_NoPartySubIDs_93.insert(PartySubIDType_93.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_93);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
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
    multiset<string> UnderlyingInstrument_23;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_23("DATA_661236623");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuer_23.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_23(205968886);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuerLen_23.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_23("DATA_863454905");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDesc_23.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_23(1429587850);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDescLen_23.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_23;
    UnderlyingAdjustedQuantity_23.setString("3896110");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_23);
    UnderlyingInstrument_23.insert(UnderlyingAdjustedQuantity_23.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_23;
    UnderlyingAllocationPercent_23.setString("5.970000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_23);
    UnderlyingInstrument_23.insert(UnderlyingAllocationPercent_23.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_23;
    UnderlyingAttachmentPoint_23.setString("73.240000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingAttachmentPoint_23.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_23("STRING_194055631");
    noUnderlyings_0_0.set(UnderlyingCFICode_23);
    UnderlyingInstrument_23.insert(UnderlyingCFICode_23.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_23("STRING_1268455042");
    noUnderlyings_0_0.set(UnderlyingCPProgram_23);
    UnderlyingInstrument_23.insert(UnderlyingCPProgram_23.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_23("STRING_1183938933");
    noUnderlyings_0_0.set(UnderlyingCPRegType_23);
    UnderlyingInstrument_23.insert(UnderlyingCPRegType_23.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_23;
    UnderlyingCapValue_23.setString("9324848");
    noUnderlyings_0_0.set(UnderlyingCapValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCapValue_23.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_23;
    UnderlyingCashAmount_23.setString("1890218");
    noUnderlyings_0_0.set(UnderlyingCashAmount_23);
    UnderlyingInstrument_23.insert(UnderlyingCashAmount_23.getString());
    FIX::UnderlyingCashType UnderlyingCashType_23("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_23);
    UnderlyingInstrument_23.insert(UnderlyingCashType_23.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_23;
    UnderlyingContractMultiplier_23.setString("8653508");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplier_23.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_23(670366531);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplierUnit_23.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_23("COUNTRY_1359773809");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingCountryOfIssue_23.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_23("LOCALMKTDATE_1155175997");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponPaymentDate_23.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_23;
    UnderlyingCouponRate_23.setString("26.610000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponRate_23.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_23("STRING_9285554");
    noUnderlyings_0_0.set(UnderlyingCreditRating_23);
    UnderlyingInstrument_23.insert(UnderlyingCreditRating_23.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_23("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrency_23.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_23;
    UnderlyingCurrentValue_23.setString("12762918");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrentValue_23.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_23;
    UnderlyingDetachmentPoint_23.setString("51.880000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingDetachmentPoint_23.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_23;
    UnderlyingDirtyPrice_23.setString("10392727");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingDirtyPrice_23.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_23;
    UnderlyingEndPrice_23.setString("10525010");
    noUnderlyings_0_0.set(UnderlyingEndPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingEndPrice_23.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_23;
    UnderlyingEndValue_23.setString("14028004");
    noUnderlyings_0_0.set(UnderlyingEndValue_23);
    UnderlyingInstrument_23.insert(UnderlyingEndValue_23.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_23(275125718);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_23);
    UnderlyingInstrument_23.insert(UnderlyingExerciseStyle_23.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_23;
    UnderlyingFXRate_23.setString("4877407");
    noUnderlyings_0_0.set(UnderlyingFXRate_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRate_23.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_23('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRateCalc_23.getString());
    FIX::UnderlyingFactor UnderlyingFactor_23;
    UnderlyingFactor_23.setString("20834682");
    noUnderlyings_0_0.set(UnderlyingFactor_23);
    UnderlyingInstrument_23.insert(UnderlyingFactor_23.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_23(1510710869);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_23);
    UnderlyingInstrument_23.insert(UnderlyingFlowScheduleType_23.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_23("STRING_797307713");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_23);
    UnderlyingInstrument_23.insert(UnderlyingInstrRegistry_23.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_23("LOCALMKTDATE_141953478");
    noUnderlyings_0_0.set(UnderlyingIssueDate_23);
    UnderlyingInstrument_23.insert(UnderlyingIssueDate_23.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_23("STRING_226682126");
    noUnderlyings_0_0.set(UnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(UnderlyingIssuer_23.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_23("STRING_79411915");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingLocaleOfIssue_23.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_23("LOCALMKTDATE_531564491");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityDate_23.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_23("MONTHYEAR_1855602723");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityMonthYear_23.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_23("TZTIMEONLY_1921609239");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityTime_23.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_23;
    UnderlyingNotionalPercentageOutstanding_23.setString("1.230000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_23('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_23);
    UnderlyingInstrument_23.insert(UnderlyingOptAttribute_23.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_23;
    UnderlyingOriginalNotionalPercentageOutstanding_23.setString("45.250000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingOriginalNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_23("STRING_1658104948");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasure_23.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_23;
    UnderlyingPriceUnitOfMeasureQty_23.setString("11655959");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasureQty_23.getString());
    FIX::UnderlyingProduct UnderlyingProduct_23(40930844);
    noUnderlyings_0_0.set(UnderlyingProduct_23);
    UnderlyingInstrument_23.insert(UnderlyingProduct_23.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_23(375972178);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_23);
    UnderlyingInstrument_23.insert(UnderlyingPutOrCall_23.getString());
    FIX::UnderlyingPx UnderlyingPx_23;
    UnderlyingPx_23.setString("18359625");
    noUnderlyings_0_0.set(UnderlyingPx_23);
    UnderlyingInstrument_23.insert(UnderlyingPx_23.getString());
    FIX::UnderlyingQty UnderlyingQty_23;
    UnderlyingQty_23.setString("14007046");
    noUnderlyings_0_0.set(UnderlyingQty_23);
    UnderlyingInstrument_23.insert(UnderlyingQty_23.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_23("LOCALMKTDATE_1531148176");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_23);
    UnderlyingInstrument_23.insert(UnderlyingRedemptionDate_23.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_23("STRING_1612011529");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingRepoCollateralSecurityType_23.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_23;
    UnderlyingRepurchaseRate_23.setString("2.080000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseRate_23.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_23(1030731524);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseTerm_23.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_23("STRING_61683139");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_23);
    UnderlyingInstrument_23.insert(UnderlyingRestructuringType_23.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_23("STRING_538798449");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityDesc_23.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_23("EXCHANGE_211583064");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityExchange_23.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_23("STRING_1100955849");
    noUnderlyings_0_0.set(UnderlyingSecurityID_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityID_23.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_23("STRING_1591299510");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityIDSource_23.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_23("STRING_1614383557");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecuritySubType_23.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_23("STRING_1376081567");
    noUnderlyings_0_0.set(UnderlyingSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityType_23.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_23("STRING_2079040260");
    noUnderlyings_0_0.set(UnderlyingSeniority_23);
    UnderlyingInstrument_23.insert(UnderlyingSeniority_23.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_23("STRING_1750454646");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlMethod_23.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_23(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlementType_23.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_23;
    UnderlyingStartValue_23.setString("14422674");
    noUnderlyings_0_0.set(UnderlyingStartValue_23);
    UnderlyingInstrument_23.insert(UnderlyingStartValue_23.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_23("STRING_400278711");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingStateOrProvinceOfIssue_23.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_23("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikeCurrency_23.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_23;
    UnderlyingStrikePrice_23.setString("4796906");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikePrice_23.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_23("STRING_1985584130");
    noUnderlyings_0_0.set(UnderlyingSymbol_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbol_23.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_23("STRING_1377068683");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbolSfx_23.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_23("STRING_253816218");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingTimeUnit_23.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_23("STRING_563720605");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasure_23.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_23;
    UnderlyingUnitOfMeasureQty_23.setString("2061591");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasureQty_23.getString());
    all_values.push_back(UnderlyingInstrument_23);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_42;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_42("STRING_74341905");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltID_42.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_42("STRING_1371755138");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltIDSource_42.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_43;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_43("STRING_1252811588");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltID_43.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_43("STRING_450314083");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltIDSource_43.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_44;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_44("STRING_1060234006");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltID_44.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_44("STRING_506032594");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltIDSource_44.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_40;
      FIX::UnderlyingStipType UnderlyingStipType_40("STRING_524761887");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipType_40.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_40("STRING_1916022802");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipValue_40.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_40);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_41;
      FIX::UnderlyingStipType UnderlyingStipType_41("STRING_864710135");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipType_41.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_41("STRING_586445026");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipValue_41.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_41);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_42;
      FIX::UnderlyingStipType UnderlyingStipType_42("STRING_307337604");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipType_42.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_42("STRING_1076293199");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipValue_42.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_42);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_42;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_42("STRING_1898637114");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyID_42.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_42('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyIDSource_42.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_42(915998795);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyRole_42.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_42);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_80("STRING_146164107");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubID_80.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_80(80581307);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubIDType_80.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_81("STRING_1124977559");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubID_81.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_81(546442818);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubIDType_81.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_43;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_43("STRING_1534600945");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyID_43.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_43('6');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyIDSource_43.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_43(1026133445);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyRole_43.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_43);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_82("STRING_2023512203");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubID_82.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_82(1279949664);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubIDType_82.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_83("STRING_1936422032");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubID_83.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_83(82187708);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubIDType_83.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_24;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_24("DATA_344346759");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuer_24.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_24(2010763937);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuerLen_24.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_24("DATA_1453942846");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDesc_24.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_24(1597158347);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDescLen_24.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
    UnderlyingAdjustedQuantity_24.setString("3135943");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_24);
    UnderlyingInstrument_24.insert(UnderlyingAdjustedQuantity_24.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
    UnderlyingAllocationPercent_24.setString("32.040000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_24);
    UnderlyingInstrument_24.insert(UnderlyingAllocationPercent_24.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
    UnderlyingAttachmentPoint_24.setString("9.410000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingAttachmentPoint_24.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_24("STRING_147572984");
    noUnderlyings_0_1.set(UnderlyingCFICode_24);
    UnderlyingInstrument_24.insert(UnderlyingCFICode_24.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_24("STRING_891455091");
    noUnderlyings_0_1.set(UnderlyingCPProgram_24);
    UnderlyingInstrument_24.insert(UnderlyingCPProgram_24.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_24("STRING_1871730096");
    noUnderlyings_0_1.set(UnderlyingCPRegType_24);
    UnderlyingInstrument_24.insert(UnderlyingCPRegType_24.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_24;
    UnderlyingCapValue_24.setString("10122831");
    noUnderlyings_0_1.set(UnderlyingCapValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCapValue_24.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
    UnderlyingCashAmount_24.setString("14779001");
    noUnderlyings_0_1.set(UnderlyingCashAmount_24);
    UnderlyingInstrument_24.insert(UnderlyingCashAmount_24.getString());
    FIX::UnderlyingCashType UnderlyingCashType_24("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_24);
    UnderlyingInstrument_24.insert(UnderlyingCashType_24.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
    UnderlyingContractMultiplier_24.setString("20885763");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplier_24.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_24(1017817345);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplierUnit_24.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_24("COUNTRY_1930221166");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingCountryOfIssue_24.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_24("LOCALMKTDATE_484285780");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponPaymentDate_24.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
    UnderlyingCouponRate_24.setString("61.400000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponRate_24.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_24("STRING_1612931244");
    noUnderlyings_0_1.set(UnderlyingCreditRating_24);
    UnderlyingInstrument_24.insert(UnderlyingCreditRating_24.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_24("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrency_24.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
    UnderlyingCurrentValue_24.setString("5904251");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrentValue_24.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
    UnderlyingDetachmentPoint_24.setString("27.050000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingDetachmentPoint_24.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
    UnderlyingDirtyPrice_24.setString("14015147");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingDirtyPrice_24.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
    UnderlyingEndPrice_24.setString("12368686");
    noUnderlyings_0_1.set(UnderlyingEndPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingEndPrice_24.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_24;
    UnderlyingEndValue_24.setString("555425");
    noUnderlyings_0_1.set(UnderlyingEndValue_24);
    UnderlyingInstrument_24.insert(UnderlyingEndValue_24.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_24(626732524);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_24);
    UnderlyingInstrument_24.insert(UnderlyingExerciseStyle_24.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_24;
    UnderlyingFXRate_24.setString("11128972");
    noUnderlyings_0_1.set(UnderlyingFXRate_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRate_24.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_24('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRateCalc_24.getString());
    FIX::UnderlyingFactor UnderlyingFactor_24;
    UnderlyingFactor_24.setString("4156709");
    noUnderlyings_0_1.set(UnderlyingFactor_24);
    UnderlyingInstrument_24.insert(UnderlyingFactor_24.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_24(1195084938);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_24);
    UnderlyingInstrument_24.insert(UnderlyingFlowScheduleType_24.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_24("STRING_1679838926");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_24);
    UnderlyingInstrument_24.insert(UnderlyingInstrRegistry_24.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_24("LOCALMKTDATE_278951198");
    noUnderlyings_0_1.set(UnderlyingIssueDate_24);
    UnderlyingInstrument_24.insert(UnderlyingIssueDate_24.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_24("STRING_501544136");
    noUnderlyings_0_1.set(UnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(UnderlyingIssuer_24.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_24("STRING_1129513626");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingLocaleOfIssue_24.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_24("LOCALMKTDATE_592545571");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityDate_24.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_24("MONTHYEAR_868237340");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityMonthYear_24.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_24("TZTIMEONLY_1085220919");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityTime_24.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
    UnderlyingNotionalPercentageOutstanding_24.setString("85.550000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_24('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_24);
    UnderlyingInstrument_24.insert(UnderlyingOptAttribute_24.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
    UnderlyingOriginalNotionalPercentageOutstanding_24.setString("73.670000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingOriginalNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_24("STRING_1752401675");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasure_24.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
    UnderlyingPriceUnitOfMeasureQty_24.setString("10901089");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasureQty_24.getString());
    FIX::UnderlyingProduct UnderlyingProduct_24(841051419);
    noUnderlyings_0_1.set(UnderlyingProduct_24);
    UnderlyingInstrument_24.insert(UnderlyingProduct_24.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_24(1693494347);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_24);
    UnderlyingInstrument_24.insert(UnderlyingPutOrCall_24.getString());
    FIX::UnderlyingPx UnderlyingPx_24;
    UnderlyingPx_24.setString("21079262");
    noUnderlyings_0_1.set(UnderlyingPx_24);
    UnderlyingInstrument_24.insert(UnderlyingPx_24.getString());
    FIX::UnderlyingQty UnderlyingQty_24;
    UnderlyingQty_24.setString("6237889");
    noUnderlyings_0_1.set(UnderlyingQty_24);
    UnderlyingInstrument_24.insert(UnderlyingQty_24.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_24("LOCALMKTDATE_30296479");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_24);
    UnderlyingInstrument_24.insert(UnderlyingRedemptionDate_24.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_24("STRING_1894258737");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingRepoCollateralSecurityType_24.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
    UnderlyingRepurchaseRate_24.setString("65.330000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseRate_24.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_24(660746366);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseTerm_24.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_24("STRING_1761172536");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_24);
    UnderlyingInstrument_24.insert(UnderlyingRestructuringType_24.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_24("STRING_679661689");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityDesc_24.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_24("EXCHANGE_1837639071");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityExchange_24.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_24("STRING_1015203633");
    noUnderlyings_0_1.set(UnderlyingSecurityID_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityID_24.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_24("STRING_1916530364");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityIDSource_24.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_24("STRING_1893181574");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecuritySubType_24.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_24("STRING_1641936157");
    noUnderlyings_0_1.set(UnderlyingSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityType_24.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_24("STRING_881943946");
    noUnderlyings_0_1.set(UnderlyingSeniority_24);
    UnderlyingInstrument_24.insert(UnderlyingSeniority_24.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_24("STRING_1081190093");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlMethod_24.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_24(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlementType_24.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_24;
    UnderlyingStartValue_24.setString("20770288");
    noUnderlyings_0_1.set(UnderlyingStartValue_24);
    UnderlyingInstrument_24.insert(UnderlyingStartValue_24.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_24("STRING_613545372");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingStateOrProvinceOfIssue_24.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_24("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikeCurrency_24.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
    UnderlyingStrikePrice_24.setString("17430589");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikePrice_24.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_24("STRING_781620186");
    noUnderlyings_0_1.set(UnderlyingSymbol_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbol_24.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_24("STRING_1299326712");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbolSfx_24.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_24("STRING_680796269");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingTimeUnit_24.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_24("STRING_1521738742");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasure_24.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
    UnderlyingUnitOfMeasureQty_24.setString("9115354");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasureQty_24.getString());
    all_values.push_back(UnderlyingInstrument_24);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_45;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_45("STRING_1126656769");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltID_45.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_45("STRING_2001644395");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltIDSource_45.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_46;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_46("STRING_183831408");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltID_46.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_46("STRING_672667468");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltIDSource_46.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_47;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_47("STRING_1962086993");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltID_47.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_47("STRING_807620346");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltIDSource_47.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_43;
      FIX::UnderlyingStipType UnderlyingStipType_43("STRING_1708862082");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipType_43.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_43("STRING_896856879");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipValue_43.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_43);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_44;
      FIX::UnderlyingStipType UnderlyingStipType_44("STRING_1363710313");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipType_44.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_44("STRING_1322550971");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipValue_44.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_44);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_45;
      FIX::UnderlyingStipType UnderlyingStipType_45("STRING_1576518568");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipType_45.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_45("STRING_1053865737");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipValue_45.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_45);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_44;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_44("STRING_1345565284");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyID_44.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_44('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyIDSource_44.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_44(1832207113);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyRole_44.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_44);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_84("STRING_1880753757");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubID_84.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_84(1742330530);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubIDType_84.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_25;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_25("DATA_9570818");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuer_25.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_25(346815481);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuerLen_25.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_25("DATA_1931405146");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDesc_25.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_25(440660190);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDescLen_25.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_25;
    UnderlyingAdjustedQuantity_25.setString("20898744");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_25);
    UnderlyingInstrument_25.insert(UnderlyingAdjustedQuantity_25.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_25;
    UnderlyingAllocationPercent_25.setString("16.840000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_25);
    UnderlyingInstrument_25.insert(UnderlyingAllocationPercent_25.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_25;
    UnderlyingAttachmentPoint_25.setString("69.020000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingAttachmentPoint_25.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_25("STRING_623187100");
    noUnderlyings_0_2.set(UnderlyingCFICode_25);
    UnderlyingInstrument_25.insert(UnderlyingCFICode_25.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_25("STRING_2087280426");
    noUnderlyings_0_2.set(UnderlyingCPProgram_25);
    UnderlyingInstrument_25.insert(UnderlyingCPProgram_25.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_25("STRING_504038749");
    noUnderlyings_0_2.set(UnderlyingCPRegType_25);
    UnderlyingInstrument_25.insert(UnderlyingCPRegType_25.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_25;
    UnderlyingCapValue_25.setString("21134507");
    noUnderlyings_0_2.set(UnderlyingCapValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCapValue_25.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_25;
    UnderlyingCashAmount_25.setString("10664535");
    noUnderlyings_0_2.set(UnderlyingCashAmount_25);
    UnderlyingInstrument_25.insert(UnderlyingCashAmount_25.getString());
    FIX::UnderlyingCashType UnderlyingCashType_25("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_25);
    UnderlyingInstrument_25.insert(UnderlyingCashType_25.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_25;
    UnderlyingContractMultiplier_25.setString("1497984");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplier_25.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_25(1739121016);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplierUnit_25.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_25("COUNTRY_172802842");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingCountryOfIssue_25.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_25("LOCALMKTDATE_957418844");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponPaymentDate_25.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_25;
    UnderlyingCouponRate_25.setString("13.160000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponRate_25.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_25("STRING_1881664924");
    noUnderlyings_0_2.set(UnderlyingCreditRating_25);
    UnderlyingInstrument_25.insert(UnderlyingCreditRating_25.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_25("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrency_25.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_25;
    UnderlyingCurrentValue_25.setString("10567322");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrentValue_25.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_25;
    UnderlyingDetachmentPoint_25.setString("6.440000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingDetachmentPoint_25.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_25;
    UnderlyingDirtyPrice_25.setString("5646937");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingDirtyPrice_25.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_25;
    UnderlyingEndPrice_25.setString("12470032");
    noUnderlyings_0_2.set(UnderlyingEndPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingEndPrice_25.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_25;
    UnderlyingEndValue_25.setString("4813922");
    noUnderlyings_0_2.set(UnderlyingEndValue_25);
    UnderlyingInstrument_25.insert(UnderlyingEndValue_25.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_25(1364257382);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_25);
    UnderlyingInstrument_25.insert(UnderlyingExerciseStyle_25.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_25;
    UnderlyingFXRate_25.setString("9317266");
    noUnderlyings_0_2.set(UnderlyingFXRate_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRate_25.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_25('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRateCalc_25.getString());
    FIX::UnderlyingFactor UnderlyingFactor_25;
    UnderlyingFactor_25.setString("10975274");
    noUnderlyings_0_2.set(UnderlyingFactor_25);
    UnderlyingInstrument_25.insert(UnderlyingFactor_25.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_25(526573551);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_25);
    UnderlyingInstrument_25.insert(UnderlyingFlowScheduleType_25.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_25("STRING_570988681");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_25);
    UnderlyingInstrument_25.insert(UnderlyingInstrRegistry_25.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_25("LOCALMKTDATE_1444342972");
    noUnderlyings_0_2.set(UnderlyingIssueDate_25);
    UnderlyingInstrument_25.insert(UnderlyingIssueDate_25.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_25("STRING_310495049");
    noUnderlyings_0_2.set(UnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(UnderlyingIssuer_25.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_25("STRING_1011648872");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingLocaleOfIssue_25.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_25("LOCALMKTDATE_1386733803");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityDate_25.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_25("MONTHYEAR_876036733");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityMonthYear_25.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_25("TZTIMEONLY_604152126");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityTime_25.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_25;
    UnderlyingNotionalPercentageOutstanding_25.setString("9.030000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_25('8');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_25);
    UnderlyingInstrument_25.insert(UnderlyingOptAttribute_25.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_25;
    UnderlyingOriginalNotionalPercentageOutstanding_25.setString("8.760000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingOriginalNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_25("STRING_1975887993");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasure_25.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_25;
    UnderlyingPriceUnitOfMeasureQty_25.setString("18822870");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasureQty_25.getString());
    FIX::UnderlyingProduct UnderlyingProduct_25(1466390373);
    noUnderlyings_0_2.set(UnderlyingProduct_25);
    UnderlyingInstrument_25.insert(UnderlyingProduct_25.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_25(2125686491);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_25);
    UnderlyingInstrument_25.insert(UnderlyingPutOrCall_25.getString());
    FIX::UnderlyingPx UnderlyingPx_25;
    UnderlyingPx_25.setString("14739244");
    noUnderlyings_0_2.set(UnderlyingPx_25);
    UnderlyingInstrument_25.insert(UnderlyingPx_25.getString());
    FIX::UnderlyingQty UnderlyingQty_25;
    UnderlyingQty_25.setString("16391932");
    noUnderlyings_0_2.set(UnderlyingQty_25);
    UnderlyingInstrument_25.insert(UnderlyingQty_25.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_25("LOCALMKTDATE_935621687");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_25);
    UnderlyingInstrument_25.insert(UnderlyingRedemptionDate_25.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_25("STRING_1768525744");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingRepoCollateralSecurityType_25.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_25;
    UnderlyingRepurchaseRate_25.setString("44.910000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseRate_25.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_25(642413762);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseTerm_25.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_25("STRING_1279353726");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_25);
    UnderlyingInstrument_25.insert(UnderlyingRestructuringType_25.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_25("STRING_282623091");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityDesc_25.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_25("EXCHANGE_1925724406");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityExchange_25.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_25("STRING_1844047444");
    noUnderlyings_0_2.set(UnderlyingSecurityID_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityID_25.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_25("STRING_1529626294");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityIDSource_25.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_25("STRING_259633039");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecuritySubType_25.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_25("STRING_1060821178");
    noUnderlyings_0_2.set(UnderlyingSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityType_25.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_25("STRING_313869315");
    noUnderlyings_0_2.set(UnderlyingSeniority_25);
    UnderlyingInstrument_25.insert(UnderlyingSeniority_25.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_25("STRING_821050902");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlMethod_25.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_25(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlementType_25.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_25;
    UnderlyingStartValue_25.setString("8404428");
    noUnderlyings_0_2.set(UnderlyingStartValue_25);
    UnderlyingInstrument_25.insert(UnderlyingStartValue_25.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_25("STRING_1392039583");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingStateOrProvinceOfIssue_25.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_25("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikeCurrency_25.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_25;
    UnderlyingStrikePrice_25.setString("2562048");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikePrice_25.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_25("STRING_694458148");
    noUnderlyings_0_2.set(UnderlyingSymbol_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbol_25.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_25("STRING_2026974648");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbolSfx_25.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_25("STRING_860356934");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingTimeUnit_25.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_25("STRING_556895404");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasure_25.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_25;
    UnderlyingUnitOfMeasureQty_25.setString("6953245");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasureQty_25.getString());
    all_values.push_back(UnderlyingInstrument_25);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_48;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_48("STRING_385299749");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltID_48.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_48("STRING_430127924");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltIDSource_48.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_49;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_49("STRING_1287454535");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltID_49.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_49("STRING_363502592");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltIDSource_49.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_46;
      FIX::UnderlyingStipType UnderlyingStipType_46("STRING_779164102");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipType_46.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_46("STRING_1299124279");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipValue_46.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_46);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_47;
      FIX::UnderlyingStipType UnderlyingStipType_47("STRING_1525094449");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipType_47.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_47("STRING_5054945");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipValue_47.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_47);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_48;
      FIX::UnderlyingStipType UnderlyingStipType_48("STRING_1941538041");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipType_48.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_48("STRING_656964527");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipValue_48.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_48);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_45;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_45("STRING_1719778800");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyID_45.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_45('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyIDSource_45.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_45(1817304331);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyRole_45.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_45);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_85("STRING_1414349502");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubID_85.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_85(2131173646);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubIDType_85.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_86("STRING_652979093");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubID_86.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_86(1425214524);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubIDType_86.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_46;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_46("STRING_824132864");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyID_46.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_46('2');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyIDSource_46.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_46(732938869);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyRole_46.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_46);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_87("STRING_153739836");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubID_87.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_87(1427397018);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubIDType_87.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_88("STRING_1854561779");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubID_88.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_88(1014096770);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubIDType_88.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_47;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_47("STRING_1984292422");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyID_47.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_47('4');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyIDSource_47.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_47(835160932);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyRole_47.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_47);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_89("STRING_832530568");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubID_89.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_89(2122615467);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubIDType_89.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_90("STRING_585611115");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubID_90.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_90(589099273);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubIDType_90.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
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
