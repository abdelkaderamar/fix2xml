#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTrade, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DontKnowTrade msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTrade_0;
  FIX::DKReason DKReason_0('D');
  msg.set(DKReason_0);
  DontKnowTrade_0.insert(DKReason_0.getString());
  FIX::EncodedText EncodedText_35("DATA_1803512964");
  msg.set(EncodedText_35);
  DontKnowTrade_0.insert(EncodedText_35.getString());
  FIX::EncodedTextLen EncodedTextLen_35(2093148893);
  msg.set(EncodedTextLen_35);
  DontKnowTrade_0.insert(EncodedTextLen_35.getString());
  FIX::ExecID ExecID_21("STRING_187695065");
  msg.set(ExecID_21);
  DontKnowTrade_0.insert(ExecID_21.getString());
  FIX::LastPx LastPx_6;
  LastPx_6.setString("8787831");
  msg.set(LastPx_6);
  DontKnowTrade_0.insert(LastPx_6.getString());
  FIX::LastQty LastQty_6;
  LastQty_6.setString("2121749");
  msg.set(LastQty_6);
  DontKnowTrade_0.insert(LastQty_6.getString());
  FIX::OrderID OrderID_18("STRING_853645927");
  msg.set(OrderID_18);
  DontKnowTrade_0.insert(OrderID_18.getString());
  FIX::SecondaryOrderID SecondaryOrderID_16("STRING_57623026");
  msg.set(SecondaryOrderID_16);
  DontKnowTrade_0.insert(SecondaryOrderID_16.getString());
  FIX::Side Side_19('9');
  msg.set(Side_19);
  DontKnowTrade_0.insert(Side_19.getString());
  FIX::Text Text_35("STRING_1132734936");
  msg.set(Text_35);
  DontKnowTrade_0.insert(Text_35.getString());
  all_values.push_back(DontKnowTrade_0);

  all_compo_names.insert("DontKnowTrade");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_40;
    FIX::EncodedLegIssuer EncodedLegIssuer_40("DATA_719395714");
    noLegs_0_0.set(EncodedLegIssuer_40);
    InstrumentLeg_40.insert(EncodedLegIssuer_40.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_40(56372519);
    noLegs_0_0.set(EncodedLegIssuerLen_40);
    InstrumentLeg_40.insert(EncodedLegIssuerLen_40.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_40("DATA_1190813454");
    noLegs_0_0.set(EncodedLegSecurityDesc_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDesc_40.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_40(783661085);
    noLegs_0_0.set(EncodedLegSecurityDescLen_40);
    InstrumentLeg_40.insert(EncodedLegSecurityDescLen_40.getString());
    FIX::LegCFICode LegCFICode_40("STRING_1215869229");
    noLegs_0_0.set(LegCFICode_40);
    InstrumentLeg_40.insert(LegCFICode_40.getString());
    FIX::LegContractMultiplier LegContractMultiplier_40;
    LegContractMultiplier_40.setString("6471334");
    noLegs_0_0.set(LegContractMultiplier_40);
    InstrumentLeg_40.insert(LegContractMultiplier_40.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_40(1285217373);
    noLegs_0_0.set(LegContractMultiplierUnit_40);
    InstrumentLeg_40.insert(LegContractMultiplierUnit_40.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_40("MONTHYEAR_197418914");
    noLegs_0_0.set(LegContractSettlMonth_40);
    InstrumentLeg_40.insert(LegContractSettlMonth_40.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_40("COUNTRY_2126652508");
    noLegs_0_0.set(LegCountryOfIssue_40);
    InstrumentLeg_40.insert(LegCountryOfIssue_40.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_40("LOCALMKTDATE_456878975");
    noLegs_0_0.set(LegCouponPaymentDate_40);
    InstrumentLeg_40.insert(LegCouponPaymentDate_40.getString());
    FIX::LegCouponRate LegCouponRate_40;
    LegCouponRate_40.setString("24.400000");
    noLegs_0_0.set(LegCouponRate_40);
    InstrumentLeg_40.insert(LegCouponRate_40.getString());
    FIX::LegCreditRating LegCreditRating_40("STRING_1888008031");
    noLegs_0_0.set(LegCreditRating_40);
    InstrumentLeg_40.insert(LegCreditRating_40.getString());
    FIX::LegCurrency LegCurrency_40("CHF");
    noLegs_0_0.set(LegCurrency_40);
    InstrumentLeg_40.insert(LegCurrency_40.getString());
    FIX::LegDatedDate LegDatedDate_40("LOCALMKTDATE_944822118");
    noLegs_0_0.set(LegDatedDate_40);
    InstrumentLeg_40.insert(LegDatedDate_40.getString());
    FIX::LegExerciseStyle LegExerciseStyle_40(1821957353);
    noLegs_0_0.set(LegExerciseStyle_40);
    InstrumentLeg_40.insert(LegExerciseStyle_40.getString());
    FIX::LegFactor LegFactor_40;
    LegFactor_40.setString("1242417");
    noLegs_0_0.set(LegFactor_40);
    InstrumentLeg_40.insert(LegFactor_40.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_40(1935202120);
    noLegs_0_0.set(LegFlowScheduleType_40);
    InstrumentLeg_40.insert(LegFlowScheduleType_40.getString());
    FIX::LegInstrRegistry LegInstrRegistry_40("STRING_269560091");
    noLegs_0_0.set(LegInstrRegistry_40);
    InstrumentLeg_40.insert(LegInstrRegistry_40.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_40("LOCALMKTDATE_1861560361");
    noLegs_0_0.set(LegInterestAccrualDate_40);
    InstrumentLeg_40.insert(LegInterestAccrualDate_40.getString());
    FIX::LegIssueDate LegIssueDate_40("LOCALMKTDATE_1314758767");
    noLegs_0_0.set(LegIssueDate_40);
    InstrumentLeg_40.insert(LegIssueDate_40.getString());
    FIX::LegIssuer LegIssuer_40("STRING_2073073055");
    noLegs_0_0.set(LegIssuer_40);
    InstrumentLeg_40.insert(LegIssuer_40.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_40("STRING_1807225606");
    noLegs_0_0.set(LegLocaleOfIssue_40);
    InstrumentLeg_40.insert(LegLocaleOfIssue_40.getString());
    FIX::LegMaturityDate LegMaturityDate_40("LOCALMKTDATE_1502453832");
    noLegs_0_0.set(LegMaturityDate_40);
    InstrumentLeg_40.insert(LegMaturityDate_40.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_40("MONTHYEAR_804372595");
    noLegs_0_0.set(LegMaturityMonthYear_40);
    InstrumentLeg_40.insert(LegMaturityMonthYear_40.getString());
    FIX::LegMaturityTime LegMaturityTime_40("TZTIMEONLY_2019400540");
    noLegs_0_0.set(LegMaturityTime_40);
    InstrumentLeg_40.insert(LegMaturityTime_40.getString());
    FIX::LegOptAttribute LegOptAttribute_40('2');
    noLegs_0_0.set(LegOptAttribute_40);
    InstrumentLeg_40.insert(LegOptAttribute_40.getString());
    FIX::LegOptionRatio LegOptionRatio_40;
    LegOptionRatio_40.setString("8619956");
    noLegs_0_0.set(LegOptionRatio_40);
    InstrumentLeg_40.insert(LegOptionRatio_40.getString());
    FIX::LegPool LegPool_40("STRING_496622788");
    noLegs_0_0.set(LegPool_40);
    InstrumentLeg_40.insert(LegPool_40.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_40("STRING_1341351048");
    noLegs_0_0.set(LegPriceUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasure_40.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_40;
    LegPriceUnitOfMeasureQty_40.setString("6734257");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegPriceUnitOfMeasureQty_40.getString());
    FIX::LegProduct LegProduct_40(1216018502);
    noLegs_0_0.set(LegProduct_40);
    InstrumentLeg_40.insert(LegProduct_40.getString());
    FIX::LegPutOrCall LegPutOrCall_40(1397723567);
    noLegs_0_0.set(LegPutOrCall_40);
    InstrumentLeg_40.insert(LegPutOrCall_40.getString());
    FIX::LegRatioQty LegRatioQty_40;
    LegRatioQty_40.setString("18642391");
    noLegs_0_0.set(LegRatioQty_40);
    InstrumentLeg_40.insert(LegRatioQty_40.getString());
    FIX::LegRedemptionDate LegRedemptionDate_40("LOCALMKTDATE_1999679588");
    noLegs_0_0.set(LegRedemptionDate_40);
    InstrumentLeg_40.insert(LegRedemptionDate_40.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_40("STRING_466109148");
    noLegs_0_0.set(LegRepoCollateralSecurityType_40);
    InstrumentLeg_40.insert(LegRepoCollateralSecurityType_40.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_40;
    LegRepurchaseRate_40.setString("90.160000");
    noLegs_0_0.set(LegRepurchaseRate_40);
    InstrumentLeg_40.insert(LegRepurchaseRate_40.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_40(1137413313);
    noLegs_0_0.set(LegRepurchaseTerm_40);
    InstrumentLeg_40.insert(LegRepurchaseTerm_40.getString());
    FIX::LegSecurityDesc LegSecurityDesc_40("STRING_663528062");
    noLegs_0_0.set(LegSecurityDesc_40);
    InstrumentLeg_40.insert(LegSecurityDesc_40.getString());
    FIX::LegSecurityExchange LegSecurityExchange_40("EXCHANGE_343057876");
    noLegs_0_0.set(LegSecurityExchange_40);
    InstrumentLeg_40.insert(LegSecurityExchange_40.getString());
    FIX::LegSecurityID LegSecurityID_40("STRING_1594292288");
    noLegs_0_0.set(LegSecurityID_40);
    InstrumentLeg_40.insert(LegSecurityID_40.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_40("STRING_123736855");
    noLegs_0_0.set(LegSecurityIDSource_40);
    InstrumentLeg_40.insert(LegSecurityIDSource_40.getString());
    FIX::LegSecuritySubType LegSecuritySubType_40("STRING_83582259");
    noLegs_0_0.set(LegSecuritySubType_40);
    InstrumentLeg_40.insert(LegSecuritySubType_40.getString());
    FIX::LegSecurityType LegSecurityType_40("STRING_1639457676");
    noLegs_0_0.set(LegSecurityType_40);
    InstrumentLeg_40.insert(LegSecurityType_40.getString());
    FIX::LegSide LegSide_40('2');
    noLegs_0_0.set(LegSide_40);
    InstrumentLeg_40.insert(LegSide_40.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_40("STRING_1028404378");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_40);
    InstrumentLeg_40.insert(LegStateOrProvinceOfIssue_40.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_40("EUR");
    noLegs_0_0.set(LegStrikeCurrency_40);
    InstrumentLeg_40.insert(LegStrikeCurrency_40.getString());
    FIX::LegStrikePrice LegStrikePrice_40;
    LegStrikePrice_40.setString("8161228");
    noLegs_0_0.set(LegStrikePrice_40);
    InstrumentLeg_40.insert(LegStrikePrice_40.getString());
    FIX::LegSymbol LegSymbol_40("STRING_1583491472");
    noLegs_0_0.set(LegSymbol_40);
    InstrumentLeg_40.insert(LegSymbol_40.getString());
    FIX::LegSymbolSfx LegSymbolSfx_40("STRING_1843689708");
    noLegs_0_0.set(LegSymbolSfx_40);
    InstrumentLeg_40.insert(LegSymbolSfx_40.getString());
    FIX::LegTimeUnit LegTimeUnit_40("STRING_2130881617");
    noLegs_0_0.set(LegTimeUnit_40);
    InstrumentLeg_40.insert(LegTimeUnit_40.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_40("STRING_1509080879");
    noLegs_0_0.set(LegUnitOfMeasure_40);
    InstrumentLeg_40.insert(LegUnitOfMeasure_40.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_40;
    LegUnitOfMeasureQty_40.setString("15034316");
    noLegs_0_0.set(LegUnitOfMeasureQty_40);
    InstrumentLeg_40.insert(LegUnitOfMeasureQty_40.getString());
    all_values.push_back(InstrumentLeg_40);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_77;
      FIX::LegSecurityAltID LegSecurityAltID_77("STRING_165969826");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_77);
      LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltID_77.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_77("STRING_1375348559");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_77);
      LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltIDSource_77.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_77);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_41;
    FIX::EncodedLegIssuer EncodedLegIssuer_41("DATA_1694467913");
    noLegs_0_1.set(EncodedLegIssuer_41);
    InstrumentLeg_41.insert(EncodedLegIssuer_41.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_41(1027965447);
    noLegs_0_1.set(EncodedLegIssuerLen_41);
    InstrumentLeg_41.insert(EncodedLegIssuerLen_41.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_41("DATA_1871971348");
    noLegs_0_1.set(EncodedLegSecurityDesc_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDesc_41.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_41(888335313);
    noLegs_0_1.set(EncodedLegSecurityDescLen_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDescLen_41.getString());
    FIX::LegCFICode LegCFICode_41("STRING_1701391165");
    noLegs_0_1.set(LegCFICode_41);
    InstrumentLeg_41.insert(LegCFICode_41.getString());
    FIX::LegContractMultiplier LegContractMultiplier_41;
    LegContractMultiplier_41.setString("9405062");
    noLegs_0_1.set(LegContractMultiplier_41);
    InstrumentLeg_41.insert(LegContractMultiplier_41.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_41(138575232);
    noLegs_0_1.set(LegContractMultiplierUnit_41);
    InstrumentLeg_41.insert(LegContractMultiplierUnit_41.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_41("MONTHYEAR_1418146689");
    noLegs_0_1.set(LegContractSettlMonth_41);
    InstrumentLeg_41.insert(LegContractSettlMonth_41.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_41("COUNTRY_792702142");
    noLegs_0_1.set(LegCountryOfIssue_41);
    InstrumentLeg_41.insert(LegCountryOfIssue_41.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_41("LOCALMKTDATE_604684380");
    noLegs_0_1.set(LegCouponPaymentDate_41);
    InstrumentLeg_41.insert(LegCouponPaymentDate_41.getString());
    FIX::LegCouponRate LegCouponRate_41;
    LegCouponRate_41.setString("57.050000");
    noLegs_0_1.set(LegCouponRate_41);
    InstrumentLeg_41.insert(LegCouponRate_41.getString());
    FIX::LegCreditRating LegCreditRating_41("STRING_1930115455");
    noLegs_0_1.set(LegCreditRating_41);
    InstrumentLeg_41.insert(LegCreditRating_41.getString());
    FIX::LegCurrency LegCurrency_41("CHF");
    noLegs_0_1.set(LegCurrency_41);
    InstrumentLeg_41.insert(LegCurrency_41.getString());
    FIX::LegDatedDate LegDatedDate_41("LOCALMKTDATE_1376924096");
    noLegs_0_1.set(LegDatedDate_41);
    InstrumentLeg_41.insert(LegDatedDate_41.getString());
    FIX::LegExerciseStyle LegExerciseStyle_41(1391949298);
    noLegs_0_1.set(LegExerciseStyle_41);
    InstrumentLeg_41.insert(LegExerciseStyle_41.getString());
    FIX::LegFactor LegFactor_41;
    LegFactor_41.setString("611921");
    noLegs_0_1.set(LegFactor_41);
    InstrumentLeg_41.insert(LegFactor_41.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_41(868898124);
    noLegs_0_1.set(LegFlowScheduleType_41);
    InstrumentLeg_41.insert(LegFlowScheduleType_41.getString());
    FIX::LegInstrRegistry LegInstrRegistry_41("STRING_1249836882");
    noLegs_0_1.set(LegInstrRegistry_41);
    InstrumentLeg_41.insert(LegInstrRegistry_41.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_41("LOCALMKTDATE_1089596571");
    noLegs_0_1.set(LegInterestAccrualDate_41);
    InstrumentLeg_41.insert(LegInterestAccrualDate_41.getString());
    FIX::LegIssueDate LegIssueDate_41("LOCALMKTDATE_35345857");
    noLegs_0_1.set(LegIssueDate_41);
    InstrumentLeg_41.insert(LegIssueDate_41.getString());
    FIX::LegIssuer LegIssuer_41("STRING_1231966229");
    noLegs_0_1.set(LegIssuer_41);
    InstrumentLeg_41.insert(LegIssuer_41.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_41("STRING_1905719421");
    noLegs_0_1.set(LegLocaleOfIssue_41);
    InstrumentLeg_41.insert(LegLocaleOfIssue_41.getString());
    FIX::LegMaturityDate LegMaturityDate_41("LOCALMKTDATE_1618837329");
    noLegs_0_1.set(LegMaturityDate_41);
    InstrumentLeg_41.insert(LegMaturityDate_41.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_41("MONTHYEAR_928172290");
    noLegs_0_1.set(LegMaturityMonthYear_41);
    InstrumentLeg_41.insert(LegMaturityMonthYear_41.getString());
    FIX::LegMaturityTime LegMaturityTime_41("TZTIMEONLY_1889117391");
    noLegs_0_1.set(LegMaturityTime_41);
    InstrumentLeg_41.insert(LegMaturityTime_41.getString());
    FIX::LegOptAttribute LegOptAttribute_41('9');
    noLegs_0_1.set(LegOptAttribute_41);
    InstrumentLeg_41.insert(LegOptAttribute_41.getString());
    FIX::LegOptionRatio LegOptionRatio_41;
    LegOptionRatio_41.setString("2841203");
    noLegs_0_1.set(LegOptionRatio_41);
    InstrumentLeg_41.insert(LegOptionRatio_41.getString());
    FIX::LegPool LegPool_41("STRING_1227485545");
    noLegs_0_1.set(LegPool_41);
    InstrumentLeg_41.insert(LegPool_41.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_41("STRING_1146404386");
    noLegs_0_1.set(LegPriceUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasure_41.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_41;
    LegPriceUnitOfMeasureQty_41.setString("16594688");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasureQty_41.getString());
    FIX::LegProduct LegProduct_41(774469810);
    noLegs_0_1.set(LegProduct_41);
    InstrumentLeg_41.insert(LegProduct_41.getString());
    FIX::LegPutOrCall LegPutOrCall_41(26886185);
    noLegs_0_1.set(LegPutOrCall_41);
    InstrumentLeg_41.insert(LegPutOrCall_41.getString());
    FIX::LegRatioQty LegRatioQty_41;
    LegRatioQty_41.setString("13839565");
    noLegs_0_1.set(LegRatioQty_41);
    InstrumentLeg_41.insert(LegRatioQty_41.getString());
    FIX::LegRedemptionDate LegRedemptionDate_41("LOCALMKTDATE_1662805124");
    noLegs_0_1.set(LegRedemptionDate_41);
    InstrumentLeg_41.insert(LegRedemptionDate_41.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_41("STRING_1728277350");
    noLegs_0_1.set(LegRepoCollateralSecurityType_41);
    InstrumentLeg_41.insert(LegRepoCollateralSecurityType_41.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_41;
    LegRepurchaseRate_41.setString("91.230000");
    noLegs_0_1.set(LegRepurchaseRate_41);
    InstrumentLeg_41.insert(LegRepurchaseRate_41.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_41(1801380356);
    noLegs_0_1.set(LegRepurchaseTerm_41);
    InstrumentLeg_41.insert(LegRepurchaseTerm_41.getString());
    FIX::LegSecurityDesc LegSecurityDesc_41("STRING_998940391");
    noLegs_0_1.set(LegSecurityDesc_41);
    InstrumentLeg_41.insert(LegSecurityDesc_41.getString());
    FIX::LegSecurityExchange LegSecurityExchange_41("EXCHANGE_969681265");
    noLegs_0_1.set(LegSecurityExchange_41);
    InstrumentLeg_41.insert(LegSecurityExchange_41.getString());
    FIX::LegSecurityID LegSecurityID_41("STRING_258581089");
    noLegs_0_1.set(LegSecurityID_41);
    InstrumentLeg_41.insert(LegSecurityID_41.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_41("STRING_633492448");
    noLegs_0_1.set(LegSecurityIDSource_41);
    InstrumentLeg_41.insert(LegSecurityIDSource_41.getString());
    FIX::LegSecuritySubType LegSecuritySubType_41("STRING_752313073");
    noLegs_0_1.set(LegSecuritySubType_41);
    InstrumentLeg_41.insert(LegSecuritySubType_41.getString());
    FIX::LegSecurityType LegSecurityType_41("STRING_1526793532");
    noLegs_0_1.set(LegSecurityType_41);
    InstrumentLeg_41.insert(LegSecurityType_41.getString());
    FIX::LegSide LegSide_41('6');
    noLegs_0_1.set(LegSide_41);
    InstrumentLeg_41.insert(LegSide_41.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_41("STRING_2129237169");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_41);
    InstrumentLeg_41.insert(LegStateOrProvinceOfIssue_41.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_41("JPY");
    noLegs_0_1.set(LegStrikeCurrency_41);
    InstrumentLeg_41.insert(LegStrikeCurrency_41.getString());
    FIX::LegStrikePrice LegStrikePrice_41;
    LegStrikePrice_41.setString("8506516");
    noLegs_0_1.set(LegStrikePrice_41);
    InstrumentLeg_41.insert(LegStrikePrice_41.getString());
    FIX::LegSymbol LegSymbol_41("STRING_2021096064");
    noLegs_0_1.set(LegSymbol_41);
    InstrumentLeg_41.insert(LegSymbol_41.getString());
    FIX::LegSymbolSfx LegSymbolSfx_41("STRING_1761891145");
    noLegs_0_1.set(LegSymbolSfx_41);
    InstrumentLeg_41.insert(LegSymbolSfx_41.getString());
    FIX::LegTimeUnit LegTimeUnit_41("STRING_885997502");
    noLegs_0_1.set(LegTimeUnit_41);
    InstrumentLeg_41.insert(LegTimeUnit_41.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_41("STRING_1105578646");
    noLegs_0_1.set(LegUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegUnitOfMeasure_41.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_41;
    LegUnitOfMeasureQty_41.setString("15201269");
    noLegs_0_1.set(LegUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegUnitOfMeasureQty_41.getString());
    all_values.push_back(InstrumentLeg_41);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_78;
      FIX::LegSecurityAltID LegSecurityAltID_78("STRING_2033750936");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_78);
      LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltID_78.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_78("STRING_1261760662");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_78);
      LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltIDSource_78.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_78);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_21;
  FIX::AttachmentPoint AttachmentPoint_21;
  AttachmentPoint_21.setString("57.430000");
  msg.set(AttachmentPoint_21);
  Instrument_21.insert(AttachmentPoint_21.getString());
  FIX::CFICode CFICode_21("STRING_170387597");
  msg.set(CFICode_21);
  Instrument_21.insert(CFICode_21.getString());
  FIX::CPProgram CPProgram_21(1);
  msg.set(CPProgram_21);
  Instrument_21.insert(CPProgram_21.getString());
  FIX::CPRegType CPRegType_21("STRING_336706481");
  msg.set(CPRegType_21);
  Instrument_21.insert(CPRegType_21.getString());
  FIX::CapPrice CapPrice_21;
  CapPrice_21.setString("18298564");
  msg.set(CapPrice_21);
  Instrument_21.insert(CapPrice_21.getString());
  FIX::ContractMultiplier ContractMultiplier_21;
  ContractMultiplier_21.setString("11162323");
  msg.set(ContractMultiplier_21);
  Instrument_21.insert(ContractMultiplier_21.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_21(1);
  msg.set(ContractMultiplierUnit_21);
  Instrument_21.insert(ContractMultiplierUnit_21.getString());
  FIX::ContractSettlMonth ContractSettlMonth_21("MONTHYEAR_1066329386");
  msg.set(ContractSettlMonth_21);
  Instrument_21.insert(ContractSettlMonth_21.getString());
  FIX::CountryOfIssue CountryOfIssue_21("COUNTRY_631553845");
  msg.set(CountryOfIssue_21);
  Instrument_21.insert(CountryOfIssue_21.getString());
  FIX::CouponPaymentDate CouponPaymentDate_21("LOCALMKTDATE_2091870016");
  msg.set(CouponPaymentDate_21);
  Instrument_21.insert(CouponPaymentDate_21.getString());
  FIX::CouponRate CouponRate_21;
  CouponRate_21.setString("85.090000");
  msg.set(CouponRate_21);
  Instrument_21.insert(CouponRate_21.getString());
  FIX::CreditRating CreditRating_21("STRING_285450554");
  msg.set(CreditRating_21);
  Instrument_21.insert(CreditRating_21.getString());
  FIX::DatedDate DatedDate_21("LOCALMKTDATE_943326759");
  msg.set(DatedDate_21);
  Instrument_21.insert(DatedDate_21.getString());
  FIX::DetachmentPoint DetachmentPoint_21;
  DetachmentPoint_21.setString("61.260000");
  msg.set(DetachmentPoint_21);
  Instrument_21.insert(DetachmentPoint_21.getString());
  FIX::EncodedIssuer EncodedIssuer_21("DATA_544031643");
  msg.set(EncodedIssuer_21);
  Instrument_21.insert(EncodedIssuer_21.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_21(1576819207);
  msg.set(EncodedIssuerLen_21);
  Instrument_21.insert(EncodedIssuerLen_21.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_21("DATA_817819199");
  msg.set(EncodedSecurityDesc_21);
  Instrument_21.insert(EncodedSecurityDesc_21.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_21(2070825175);
  msg.set(EncodedSecurityDescLen_21);
  Instrument_21.insert(EncodedSecurityDescLen_21.getString());
  FIX::ExerciseStyle ExerciseStyle_21(1);
  msg.set(ExerciseStyle_21);
  Instrument_21.insert(ExerciseStyle_21.getString());
  FIX::Factor Factor_21;
  Factor_21.setString("7995727");
  msg.set(Factor_21);
  Instrument_21.insert(Factor_21.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_21(false);
  msg.set(FlexProductEligibilityIndicator_21);
  Instrument_21.insert(FlexProductEligibilityIndicator_21.getString());
  FIX::FlexibleIndicator FlexibleIndicator_21(false);
  msg.set(FlexibleIndicator_21);
  Instrument_21.insert(FlexibleIndicator_21.getString());
  FIX::FloorPrice FloorPrice_21;
  FloorPrice_21.setString("16502243");
  msg.set(FloorPrice_21);
  Instrument_21.insert(FloorPrice_21.getString());
  FIX::FlowScheduleType FlowScheduleType_21(0);
  msg.set(FlowScheduleType_21);
  Instrument_21.insert(FlowScheduleType_21.getString());
  FIX::InstrRegistry InstrRegistry_21("STRING_327140012");
  msg.set(InstrRegistry_21);
  Instrument_21.insert(InstrRegistry_21.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_21('3');
  msg.set(InstrmtAssignmentMethod_21);
  Instrument_21.insert(InstrmtAssignmentMethod_21.getString());
  FIX::InterestAccrualDate InterestAccrualDate_21("LOCALMKTDATE_1673791771");
  msg.set(InterestAccrualDate_21);
  Instrument_21.insert(InterestAccrualDate_21.getString());
  FIX::IssueDate IssueDate_21("LOCALMKTDATE_1847266931");
  msg.set(IssueDate_21);
  Instrument_21.insert(IssueDate_21.getString());
  FIX::Issuer Issuer_21("STRING_746089402");
  msg.set(Issuer_21);
  Instrument_21.insert(Issuer_21.getString());
  FIX::ListMethod ListMethod_21(1);
  msg.set(ListMethod_21);
  Instrument_21.insert(ListMethod_21.getString());
  FIX::LocaleOfIssue LocaleOfIssue_21("STRING_961543945");
  msg.set(LocaleOfIssue_21);
  Instrument_21.insert(LocaleOfIssue_21.getString());
  FIX::MaturityDate MaturityDate_21("LOCALMKTDATE_2083875145");
  msg.set(MaturityDate_21);
  Instrument_21.insert(MaturityDate_21.getString());
  FIX::MaturityMonthYear MaturityMonthYear_21("MONTHYEAR_1730446656");
  msg.set(MaturityMonthYear_21);
  Instrument_21.insert(MaturityMonthYear_21.getString());
  FIX::MaturityTime MaturityTime_21("TZTIMEONLY_1303306504");
  msg.set(MaturityTime_21);
  Instrument_21.insert(MaturityTime_21.getString());
  FIX::MinPriceIncrement MinPriceIncrement_21;
  MinPriceIncrement_21.setString("2730979");
  msg.set(MinPriceIncrement_21);
  Instrument_21.insert(MinPriceIncrement_21.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_21;
  MinPriceIncrementAmount_21.setString("14128194");
  msg.set(MinPriceIncrementAmount_21);
  Instrument_21.insert(MinPriceIncrementAmount_21.getString());
  FIX::NTPositionLimit NTPositionLimit_21(272055226);
  msg.set(NTPositionLimit_21);
  Instrument_21.insert(NTPositionLimit_21.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_21;
  NotionalPercentageOutstanding_21.setString("6.440000");
  msg.set(NotionalPercentageOutstanding_21);
  Instrument_21.insert(NotionalPercentageOutstanding_21.getString());
  FIX::OptAttribute OptAttribute_21('3');
  msg.set(OptAttribute_21);
  Instrument_21.insert(OptAttribute_21.getString());
  FIX::OptPayoutAmount OptPayoutAmount_21;
  OptPayoutAmount_21.setString("9036090");
  msg.set(OptPayoutAmount_21);
  Instrument_21.insert(OptPayoutAmount_21.getString());
  FIX::OptPayoutType OptPayoutType_21(2);
  msg.set(OptPayoutType_21);
  Instrument_21.insert(OptPayoutType_21.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_21;
  OriginalNotionalPercentageOutstanding_21.setString("37.210000");
  msg.set(OriginalNotionalPercentageOutstanding_21);
  Instrument_21.insert(OriginalNotionalPercentageOutstanding_21.getString());
  FIX::Pool Pool_21("STRING_1189059625");
  msg.set(Pool_21);
  Instrument_21.insert(Pool_21.getString());
  FIX::PositionLimit PositionLimit_21(1524403771);
  msg.set(PositionLimit_21);
  Instrument_21.insert(PositionLimit_21.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_21("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_21);
  Instrument_21.insert(PriceQuoteMethod_21.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_21("STRING_1733091268");
  msg.set(PriceUnitOfMeasure_21);
  Instrument_21.insert(PriceUnitOfMeasure_21.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_21;
  PriceUnitOfMeasureQty_21.setString("9537393");
  msg.set(PriceUnitOfMeasureQty_21);
  Instrument_21.insert(PriceUnitOfMeasureQty_21.getString());
  FIX::Product Product_23(12);
  msg.set(Product_23);
  Instrument_21.insert(Product_23.getString());
  FIX::ProductComplex ProductComplex_21("STRING_1656432795");
  msg.set(ProductComplex_21);
  Instrument_21.insert(ProductComplex_21.getString());
  FIX::PutOrCall PutOrCall_21(1);
  msg.set(PutOrCall_21);
  Instrument_21.insert(PutOrCall_21.getString());
  FIX::RedemptionDate RedemptionDate_21("LOCALMKTDATE_1110388119");
  msg.set(RedemptionDate_21);
  Instrument_21.insert(RedemptionDate_21.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_21("STRING_203549856");
  msg.set(RepoCollateralSecurityType_21);
  Instrument_21.insert(RepoCollateralSecurityType_21.getString());
  FIX::RepurchaseRate RepurchaseRate_21;
  RepurchaseRate_21.setString("97.860000");
  msg.set(RepurchaseRate_21);
  Instrument_21.insert(RepurchaseRate_21.getString());
  FIX::RepurchaseTerm RepurchaseTerm_21(613128837);
  msg.set(RepurchaseTerm_21);
  Instrument_21.insert(RepurchaseTerm_21.getString());
  FIX::RestructuringType RestructuringType_21("STRING_MM");
  msg.set(RestructuringType_21);
  Instrument_21.insert(RestructuringType_21.getString());
  FIX::SecurityDesc SecurityDesc_21("STRING_2034049798");
  msg.set(SecurityDesc_21);
  Instrument_21.insert(SecurityDesc_21.getString());
  FIX::SecurityExchange SecurityExchange_21("EXCHANGE_1001867056");
  msg.set(SecurityExchange_21);
  Instrument_21.insert(SecurityExchange_21.getString());
  FIX::SecurityGroup SecurityGroup_21("STRING_298071105");
  msg.set(SecurityGroup_21);
  Instrument_21.insert(SecurityGroup_21.getString());
  FIX::SecurityID SecurityID_21("STRING_1733833082");
  msg.set(SecurityID_21);
  Instrument_21.insert(SecurityID_21.getString());
  FIX::SecurityIDSource SecurityIDSource_21("STRING_8");
  msg.set(SecurityIDSource_21);
  Instrument_21.insert(SecurityIDSource_21.getString());
  FIX::SecurityStatus SecurityStatus_21("STRING_2");
  msg.set(SecurityStatus_21);
  Instrument_21.insert(SecurityStatus_21.getString());
  FIX::SecuritySubType SecuritySubType_22("STRING_547893379");
  msg.set(SecuritySubType_22);
  Instrument_21.insert(SecuritySubType_22.getString());
  FIX::SecurityType SecurityType_23("STRING_PS");
  msg.set(SecurityType_23);
  Instrument_21.insert(SecurityType_23.getString());
  FIX::Seniority Seniority_21("STRING_SD");
  msg.set(Seniority_21);
  Instrument_21.insert(Seniority_21.getString());
  FIX::SettlMethod SettlMethod_21('C');
  msg.set(SettlMethod_21);
  Instrument_21.insert(SettlMethod_21.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_21("STRING_1957445935");
  msg.set(SettleOnOpenFlag_21);
  Instrument_21.insert(SettleOnOpenFlag_21.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_21("STRING_706428999");
  msg.set(StateOrProvinceOfIssue_21);
  Instrument_21.insert(StateOrProvinceOfIssue_21.getString());
  FIX::StrikeCurrency StrikeCurrency_21("EUR");
  msg.set(StrikeCurrency_21);
  Instrument_21.insert(StrikeCurrency_21.getString());
  FIX::StrikeMultiplier StrikeMultiplier_21;
  StrikeMultiplier_21.setString("10380942");
  msg.set(StrikeMultiplier_21);
  Instrument_21.insert(StrikeMultiplier_21.getString());
  FIX::StrikePrice StrikePrice_21;
  StrikePrice_21.setString("8793805");
  msg.set(StrikePrice_21);
  Instrument_21.insert(StrikePrice_21.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_21(5);
  msg.set(StrikePriceBoundaryMethod_21);
  Instrument_21.insert(StrikePriceBoundaryMethod_21.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_21;
  StrikePriceBoundaryPrecision_21.setString("42.840000");
  msg.set(StrikePriceBoundaryPrecision_21);
  Instrument_21.insert(StrikePriceBoundaryPrecision_21.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_21(4);
  msg.set(StrikePriceDeterminationMethod_21);
  Instrument_21.insert(StrikePriceDeterminationMethod_21.getString());
  FIX::StrikeValue StrikeValue_21;
  StrikeValue_21.setString("4046500");
  msg.set(StrikeValue_21);
  Instrument_21.insert(StrikeValue_21.getString());
  FIX::Symbol Symbol_21("STRING_2106064132");
  msg.set(Symbol_21);
  Instrument_21.insert(Symbol_21.getString());
  FIX::SymbolSfx SymbolSfx_21("STRING_WI");
  msg.set(SymbolSfx_21);
  Instrument_21.insert(SymbolSfx_21.getString());
  FIX::TimeUnit TimeUnit_21("STRING_S");
  msg.set(TimeUnit_21);
  Instrument_21.insert(TimeUnit_21.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_21(4);
  msg.set(UnderlyingPriceDeterminationMethod_21);
  Instrument_21.insert(UnderlyingPriceDeterminationMethod_21.getString());
  FIX::UnitOfMeasure UnitOfMeasure_21("STRING_MMbbl");
  msg.set(UnitOfMeasure_21);
  Instrument_21.insert(UnitOfMeasure_21.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_21;
  UnitOfMeasureQty_21.setString("2050830");
  msg.set(UnitOfMeasureQty_21);
  Instrument_21.insert(UnitOfMeasureQty_21.getString());
  FIX::ValuationMethod ValuationMethod_21("STRING_FUTDA");
  msg.set(ValuationMethod_21);
  Instrument_21.insert(ValuationMethod_21.getString());
  all_values.push_back(Instrument_21);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_45;
    FIX::ComplexEventCondition ComplexEventCondition_45(2);
    noComplexEvents_0_0.set(ComplexEventCondition_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexEventCondition_45.getString());
    FIX::ComplexEventPrice ComplexEventPrice_45;
    ComplexEventPrice_45.setString("19929128");
    noComplexEvents_0_0.set(ComplexEventPrice_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexEventPrice_45.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_45(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryMethod_45.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_45;
    ComplexEventPriceBoundaryPrecision_45.setString("89.570000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryPrecision_45.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_45(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceTimeType_45.getString());
    FIX::ComplexEventType ComplexEventType_45(5);
    noComplexEvents_0_0.set(ComplexEventType_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexEventType_45.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_45;
    ComplexOptPayoutAmount_45.setString("13849083");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_45);
    ComplexEvents_NoComplexEvents_45.insert(ComplexOptPayoutAmount_45.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_45);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_91;
      FIX::ComplexEventEndDate ComplexEventEndDate_91(FIX::UTCTIMESTAMP(3, 35, 13, 19, 11, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_91);
      ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventEndDate_91.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_91(FIX::UTCTIMESTAMP(10, 56, 14, 22, 2, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_91);
      ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventStartDate_91.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_91);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_187;
        FIX::ComplexEventEndTime ComplexEventEndTime_187(FIX::UTCTIMEONLY(21, 7, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_187);
        ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventEndTime_187.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_187(FIX::UTCTIMEONLY(16, 2, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_187);
        ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventStartTime_187.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_187);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_46;
    FIX::ComplexEventCondition ComplexEventCondition_46(2);
    noComplexEvents_0_1.set(ComplexEventCondition_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventCondition_46.getString());
    FIX::ComplexEventPrice ComplexEventPrice_46;
    ComplexEventPrice_46.setString("8089666");
    noComplexEvents_0_1.set(ComplexEventPrice_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPrice_46.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_46(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryMethod_46.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_46;
    ComplexEventPriceBoundaryPrecision_46.setString("18.370000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryPrecision_46.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_46(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceTimeType_46.getString());
    FIX::ComplexEventType ComplexEventType_46(1);
    noComplexEvents_0_1.set(ComplexEventType_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexEventType_46.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_46;
    ComplexOptPayoutAmount_46.setString("18901102");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_46);
    ComplexEvents_NoComplexEvents_46.insert(ComplexOptPayoutAmount_46.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_46);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_92;
      FIX::ComplexEventEndDate ComplexEventEndDate_92(FIX::UTCTIMESTAMP(15, 8, 53, 26, 12, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_92);
      ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventEndDate_92.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_92(FIX::UTCTIMESTAMP(21, 27, 6, 19, 9, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_92);
      ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventStartDate_92.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_92);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_188;
        FIX::ComplexEventEndTime ComplexEventEndTime_188(FIX::UTCTIMEONLY(4, 8, 5));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_188);
        ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventEndTime_188.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_188(FIX::UTCTIMEONLY(16, 7, 32));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_188);
        ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventStartTime_188.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_188);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_93;
      FIX::ComplexEventEndDate ComplexEventEndDate_93(FIX::UTCTIMESTAMP(5, 41, 13, 7, 6, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_93);
      ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventEndDate_93.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_93(FIX::UTCTIMESTAMP(9, 57, 21, 10, 4, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_93);
      ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventStartDate_93.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_93);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_189;
        FIX::ComplexEventEndTime ComplexEventEndTime_189(FIX::UTCTIMEONLY(9, 4, 37));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_189);
        ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventEndTime_189.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_189(FIX::UTCTIMEONLY(12, 20, 48));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_189);
        ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventStartTime_189.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_189);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_190;
        FIX::ComplexEventEndTime ComplexEventEndTime_190(FIX::UTCTIMEONLY(13, 48, 26));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_190);
        ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventEndTime_190.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_190(FIX::UTCTIMEONLY(5, 25, 17));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_190);
        ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventStartTime_190.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_190);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_94;
      FIX::ComplexEventEndDate ComplexEventEndDate_94(FIX::UTCTIMESTAMP(23, 58, 50, 18, 8, 2007));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_94);
      ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventEndDate_94.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_94(FIX::UTCTIMESTAMP(4, 52, 40, 7, 1, 2016));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_94);
      ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventStartDate_94.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_94);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_191;
        FIX::ComplexEventEndTime ComplexEventEndTime_191(FIX::UTCTIMEONLY(17, 32, 24));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_191);
        ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventEndTime_191.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_191(FIX::UTCTIMEONLY(12, 44, 21));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_191);
        ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventStartTime_191.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_191);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_192;
        FIX::ComplexEventEndTime ComplexEventEndTime_192(FIX::UTCTIMEONLY(13, 2, 27));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_192);
        ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventEndTime_192.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_192(FIX::UTCTIMEONLY(23, 44, 20));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_192);
        ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventStartTime_192.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_192);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_42;
    FIX::EventDate EventDate_42("LOCALMKTDATE_1147742455");
    noEvents_0_0.set(EventDate_42);
    EvntGrp_NoEvents_42.insert(EventDate_42.getString());
    FIX::EventPx EventPx_42;
    EventPx_42.setString("1475618");
    noEvents_0_0.set(EventPx_42);
    EvntGrp_NoEvents_42.insert(EventPx_42.getString());
    FIX::EventText EventText_42("STRING_1566651518");
    noEvents_0_0.set(EventText_42);
    EvntGrp_NoEvents_42.insert(EventText_42.getString());
    FIX::EventTime EventTime_42(FIX::UTCTIMESTAMP(6, 25, 5, 7, 7, 2007));
    noEvents_0_0.set(EventTime_42);
    EvntGrp_NoEvents_42.insert(EventTime_42.getString());
    FIX::EventType EventType_42(7);
    noEvents_0_0.set(EventType_42);
    EvntGrp_NoEvents_42.insert(EventType_42.getString());
    all_values.push_back(EvntGrp_NoEvents_42);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_39;
    FIX::InstrumentPartyID InstrumentPartyID_39("STRING_1212212453");
    noInstrumentParties_0_0.set(InstrumentPartyID_39);
    InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyID_39.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_39('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_39);
    InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyIDSource_39.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_39(848161289);
    noInstrumentParties_0_0.set(InstrumentPartyRole_39);
    InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyRole_39.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_39);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77;
      FIX::InstrumentPartySubID InstrumentPartySubID_77("STRING_361769118");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_77);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubID_77.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_77(1455725633);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_77);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubIDType_77.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78;
      FIX::InstrumentPartySubID InstrumentPartySubID_78("STRING_292540151");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_78);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubID_78.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_78(783457866);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_78);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubIDType_78.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79;
      FIX::InstrumentPartySubID InstrumentPartySubID_79("STRING_855340049");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_79);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubID_79.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_79(190103124);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_79);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubIDType_79.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_39;
    FIX::SecurityAltID SecurityAltID_39("STRING_57309287");
    noSecurityAltID_0_0.set(SecurityAltID_39);
    SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltID_39.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_39("STRING_1524171206");
    noSecurityAltID_0_0.set(SecurityAltIDSource_39);
    SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltIDSource_39.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_39);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_42;
  FIX::SecurityXML SecurityXML_43("XMLDATA_688537474");
  msg.set(SecurityXML_43);
  FIX::SecurityXMLLen SecurityXMLLen_21(1006642018);
  msg.set(SecurityXMLLen_21);
  FIX::SecurityXMLSchema SecurityXMLSchema_21("STRING_598594589");
  msg.set(SecurityXMLSchema_21);
  SecurityXML_42.insert(SecurityXMLSchema_21.getString());
  all_values.push_back(SecurityXML_42);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_4;
  FIX::CashOrderQty CashOrderQty_4;
  CashOrderQty_4.setString("13176181");
  msg.set(CashOrderQty_4);
  OrderQtyData_4.insert(CashOrderQty_4.getString());
  FIX::OrderPercent OrderPercent_4;
  OrderPercent_4.setString("66.780000");
  msg.set(OrderPercent_4);
  OrderQtyData_4.insert(OrderPercent_4.getString());
  FIX::OrderQty OrderQty_14;
  OrderQty_14.setString("10138009");
  msg.set(OrderQty_14);
  OrderQtyData_4.insert(OrderQty_14.getString());
  FIX::RoundingDirection RoundingDirection_4('0');
  msg.set(RoundingDirection_4);
  OrderQtyData_4.insert(RoundingDirection_4.getString());
  FIX::RoundingModulus RoundingModulus_4;
  RoundingModulus_4.setString("16547085");
  msg.set(RoundingModulus_4);
  OrderQtyData_4.insert(RoundingModulus_4.getString());
  all_values.push_back(OrderQtyData_4);
  all_compo_names.insert("OrderQtyData");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_35;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_35("DATA_135415312");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingIssuer_35.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_35(1978703232);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingIssuerLen_35.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_35("DATA_556870633");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDesc_35.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_35(1025399337);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDescLen_35.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_35;
    UnderlyingAdjustedQuantity_35.setString("12940569");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_35);
    UnderlyingInstrument_35.insert(UnderlyingAdjustedQuantity_35.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_35;
    UnderlyingAllocationPercent_35.setString("99.030000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_35);
    UnderlyingInstrument_35.insert(UnderlyingAllocationPercent_35.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_35;
    UnderlyingAttachmentPoint_35.setString("31.740000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_35);
    UnderlyingInstrument_35.insert(UnderlyingAttachmentPoint_35.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_35("STRING_289366857");
    noUnderlyings_0_0.set(UnderlyingCFICode_35);
    UnderlyingInstrument_35.insert(UnderlyingCFICode_35.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_35("STRING_408272817");
    noUnderlyings_0_0.set(UnderlyingCPProgram_35);
    UnderlyingInstrument_35.insert(UnderlyingCPProgram_35.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_35("STRING_101421979");
    noUnderlyings_0_0.set(UnderlyingCPRegType_35);
    UnderlyingInstrument_35.insert(UnderlyingCPRegType_35.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_35;
    UnderlyingCapValue_35.setString("15264835");
    noUnderlyings_0_0.set(UnderlyingCapValue_35);
    UnderlyingInstrument_35.insert(UnderlyingCapValue_35.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_35;
    UnderlyingCashAmount_35.setString("12564341");
    noUnderlyings_0_0.set(UnderlyingCashAmount_35);
    UnderlyingInstrument_35.insert(UnderlyingCashAmount_35.getString());
    FIX::UnderlyingCashType UnderlyingCashType_35("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_35);
    UnderlyingInstrument_35.insert(UnderlyingCashType_35.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_35;
    UnderlyingContractMultiplier_35.setString("18882526");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_35);
    UnderlyingInstrument_35.insert(UnderlyingContractMultiplier_35.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_35(564676091);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_35);
    UnderlyingInstrument_35.insert(UnderlyingContractMultiplierUnit_35.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_35("COUNTRY_568760648");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_35);
    UnderlyingInstrument_35.insert(UnderlyingCountryOfIssue_35.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_35("LOCALMKTDATE_524226847");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_35);
    UnderlyingInstrument_35.insert(UnderlyingCouponPaymentDate_35.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_35;
    UnderlyingCouponRate_35.setString("61.400000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_35);
    UnderlyingInstrument_35.insert(UnderlyingCouponRate_35.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_35("STRING_758863772");
    noUnderlyings_0_0.set(UnderlyingCreditRating_35);
    UnderlyingInstrument_35.insert(UnderlyingCreditRating_35.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_35("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_35);
    UnderlyingInstrument_35.insert(UnderlyingCurrency_35.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_35;
    UnderlyingCurrentValue_35.setString("1355513");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_35);
    UnderlyingInstrument_35.insert(UnderlyingCurrentValue_35.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_35;
    UnderlyingDetachmentPoint_35.setString("44.280000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_35);
    UnderlyingInstrument_35.insert(UnderlyingDetachmentPoint_35.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_35;
    UnderlyingDirtyPrice_35.setString("3364837");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_35);
    UnderlyingInstrument_35.insert(UnderlyingDirtyPrice_35.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_35;
    UnderlyingEndPrice_35.setString("7341459");
    noUnderlyings_0_0.set(UnderlyingEndPrice_35);
    UnderlyingInstrument_35.insert(UnderlyingEndPrice_35.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_35;
    UnderlyingEndValue_35.setString("1711789");
    noUnderlyings_0_0.set(UnderlyingEndValue_35);
    UnderlyingInstrument_35.insert(UnderlyingEndValue_35.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_35(1843630476);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_35);
    UnderlyingInstrument_35.insert(UnderlyingExerciseStyle_35.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_35;
    UnderlyingFXRate_35.setString("17479468");
    noUnderlyings_0_0.set(UnderlyingFXRate_35);
    UnderlyingInstrument_35.insert(UnderlyingFXRate_35.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_35('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_35);
    UnderlyingInstrument_35.insert(UnderlyingFXRateCalc_35.getString());
    FIX::UnderlyingFactor UnderlyingFactor_35;
    UnderlyingFactor_35.setString("13508553");
    noUnderlyings_0_0.set(UnderlyingFactor_35);
    UnderlyingInstrument_35.insert(UnderlyingFactor_35.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_35(33432017);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_35);
    UnderlyingInstrument_35.insert(UnderlyingFlowScheduleType_35.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_35("STRING_624471176");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_35);
    UnderlyingInstrument_35.insert(UnderlyingInstrRegistry_35.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_35("LOCALMKTDATE_1182074941");
    noUnderlyings_0_0.set(UnderlyingIssueDate_35);
    UnderlyingInstrument_35.insert(UnderlyingIssueDate_35.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_35("STRING_590302650");
    noUnderlyings_0_0.set(UnderlyingIssuer_35);
    UnderlyingInstrument_35.insert(UnderlyingIssuer_35.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_35("STRING_1649870513");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_35);
    UnderlyingInstrument_35.insert(UnderlyingLocaleOfIssue_35.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_35("LOCALMKTDATE_328648232");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_35);
    UnderlyingInstrument_35.insert(UnderlyingMaturityDate_35.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_35("MONTHYEAR_1057042553");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_35);
    UnderlyingInstrument_35.insert(UnderlyingMaturityMonthYear_35.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_35("TZTIMEONLY_539080039");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_35);
    UnderlyingInstrument_35.insert(UnderlyingMaturityTime_35.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_35;
    UnderlyingNotionalPercentageOutstanding_35.setString("50.890000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_35);
    UnderlyingInstrument_35.insert(UnderlyingNotionalPercentageOutstanding_35.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_35('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_35);
    UnderlyingInstrument_35.insert(UnderlyingOptAttribute_35.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_35;
    UnderlyingOriginalNotionalPercentageOutstanding_35.setString("20.180000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_35);
    UnderlyingInstrument_35.insert(UnderlyingOriginalNotionalPercentageOutstanding_35.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_35("STRING_2144498600");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_35);
    UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasure_35.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_35;
    UnderlyingPriceUnitOfMeasureQty_35.setString("5742658");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_35);
    UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasureQty_35.getString());
    FIX::UnderlyingProduct UnderlyingProduct_35(916722515);
    noUnderlyings_0_0.set(UnderlyingProduct_35);
    UnderlyingInstrument_35.insert(UnderlyingProduct_35.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_35(1885267581);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_35);
    UnderlyingInstrument_35.insert(UnderlyingPutOrCall_35.getString());
    FIX::UnderlyingPx UnderlyingPx_35;
    UnderlyingPx_35.setString("11389419");
    noUnderlyings_0_0.set(UnderlyingPx_35);
    UnderlyingInstrument_35.insert(UnderlyingPx_35.getString());
    FIX::UnderlyingQty UnderlyingQty_35;
    UnderlyingQty_35.setString("14854831");
    noUnderlyings_0_0.set(UnderlyingQty_35);
    UnderlyingInstrument_35.insert(UnderlyingQty_35.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_35("LOCALMKTDATE_262010780");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_35);
    UnderlyingInstrument_35.insert(UnderlyingRedemptionDate_35.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_35("STRING_411474412");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_35);
    UnderlyingInstrument_35.insert(UnderlyingRepoCollateralSecurityType_35.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_35;
    UnderlyingRepurchaseRate_35.setString("32.880000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_35);
    UnderlyingInstrument_35.insert(UnderlyingRepurchaseRate_35.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_35(574517734);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_35);
    UnderlyingInstrument_35.insert(UnderlyingRepurchaseTerm_35.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_35("STRING_1888799839");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_35);
    UnderlyingInstrument_35.insert(UnderlyingRestructuringType_35.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_35("STRING_232414619");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityDesc_35.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_35("EXCHANGE_1575562162");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityExchange_35.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_35("STRING_77799989");
    noUnderlyings_0_0.set(UnderlyingSecurityID_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityID_35.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_35("STRING_966560539");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityIDSource_35.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_35("STRING_1746741081");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_35);
    UnderlyingInstrument_35.insert(UnderlyingSecuritySubType_35.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_35("STRING_1921430465");
    noUnderlyings_0_0.set(UnderlyingSecurityType_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityType_35.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_35("STRING_567023749");
    noUnderlyings_0_0.set(UnderlyingSeniority_35);
    UnderlyingInstrument_35.insert(UnderlyingSeniority_35.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_35("STRING_88313297");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_35);
    UnderlyingInstrument_35.insert(UnderlyingSettlMethod_35.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_35(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_35);
    UnderlyingInstrument_35.insert(UnderlyingSettlementType_35.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_35;
    UnderlyingStartValue_35.setString("6004557");
    noUnderlyings_0_0.set(UnderlyingStartValue_35);
    UnderlyingInstrument_35.insert(UnderlyingStartValue_35.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_35("STRING_712784474");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_35);
    UnderlyingInstrument_35.insert(UnderlyingStateOrProvinceOfIssue_35.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_35("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_35);
    UnderlyingInstrument_35.insert(UnderlyingStrikeCurrency_35.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_35;
    UnderlyingStrikePrice_35.setString("2151713");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_35);
    UnderlyingInstrument_35.insert(UnderlyingStrikePrice_35.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_35("STRING_488041700");
    noUnderlyings_0_0.set(UnderlyingSymbol_35);
    UnderlyingInstrument_35.insert(UnderlyingSymbol_35.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_35("STRING_100317323");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_35);
    UnderlyingInstrument_35.insert(UnderlyingSymbolSfx_35.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_35("STRING_754251379");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_35);
    UnderlyingInstrument_35.insert(UnderlyingTimeUnit_35.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_35("STRING_1106056790");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_35);
    UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasure_35.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_35;
    UnderlyingUnitOfMeasureQty_35.setString("15656326");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_35);
    UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasureQty_35.getString());
    all_values.push_back(UnderlyingInstrument_35);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_77;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_77("STRING_1103071742");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_77);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltID_77.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_77("STRING_2139898522");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_77);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltIDSource_77.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_69;
      FIX::UnderlyingStipType UnderlyingStipType_69("STRING_840855676");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipType_69.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_69("STRING_1131356793");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipValue_69.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_69);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_70;
      FIX::UnderlyingStipType UnderlyingStipType_70("STRING_1649475428");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipType_70.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_70("STRING_1102866456");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipValue_70.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_70);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_68;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_68("STRING_1746338716");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_68);
      UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyID_68.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_68('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_68);
      UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyIDSource_68.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_68(1284147397);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_68);
      UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyRole_68.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_68);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_135("STRING_1105462705");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubID_135.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_135(1361947386);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubIDType_135.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_69;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_69("STRING_797830227");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_69);
      UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyID_69.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_69('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_69);
      UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyIDSource_69.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_69(1135894203);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_69);
      UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyRole_69.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_69);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_136("STRING_793033436");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_136);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubID_136.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_136(113212729);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_136);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubIDType_136.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_137("STRING_1965309743");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_137);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubID_137.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_137(1505817910);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_137);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubIDType_137.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_36;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_36("DATA_272606197");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuer_36.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_36(1008584513);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuerLen_36.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_36("DATA_1720989249");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDesc_36.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_36(760647898);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDescLen_36.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_36;
    UnderlyingAdjustedQuantity_36.setString("11089018");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_36);
    UnderlyingInstrument_36.insert(UnderlyingAdjustedQuantity_36.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_36;
    UnderlyingAllocationPercent_36.setString("69.800000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_36);
    UnderlyingInstrument_36.insert(UnderlyingAllocationPercent_36.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_36;
    UnderlyingAttachmentPoint_36.setString("46.880000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingAttachmentPoint_36.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_36("STRING_527050881");
    noUnderlyings_0_1.set(UnderlyingCFICode_36);
    UnderlyingInstrument_36.insert(UnderlyingCFICode_36.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_36("STRING_1722510378");
    noUnderlyings_0_1.set(UnderlyingCPProgram_36);
    UnderlyingInstrument_36.insert(UnderlyingCPProgram_36.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_36("STRING_822292782");
    noUnderlyings_0_1.set(UnderlyingCPRegType_36);
    UnderlyingInstrument_36.insert(UnderlyingCPRegType_36.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_36;
    UnderlyingCapValue_36.setString("5194657");
    noUnderlyings_0_1.set(UnderlyingCapValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCapValue_36.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_36;
    UnderlyingCashAmount_36.setString("18865026");
    noUnderlyings_0_1.set(UnderlyingCashAmount_36);
    UnderlyingInstrument_36.insert(UnderlyingCashAmount_36.getString());
    FIX::UnderlyingCashType UnderlyingCashType_36("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_36);
    UnderlyingInstrument_36.insert(UnderlyingCashType_36.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_36;
    UnderlyingContractMultiplier_36.setString("16508225");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplier_36.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_36(1388494423);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplierUnit_36.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_36("COUNTRY_618531267");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingCountryOfIssue_36.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_36("LOCALMKTDATE_1046170106");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponPaymentDate_36.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_36;
    UnderlyingCouponRate_36.setString("94.920000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponRate_36.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_36("STRING_148431810");
    noUnderlyings_0_1.set(UnderlyingCreditRating_36);
    UnderlyingInstrument_36.insert(UnderlyingCreditRating_36.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_36("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrency_36.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_36;
    UnderlyingCurrentValue_36.setString("12538945");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrentValue_36.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_36;
    UnderlyingDetachmentPoint_36.setString("12.410000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingDetachmentPoint_36.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_36;
    UnderlyingDirtyPrice_36.setString("16164494");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingDirtyPrice_36.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_36;
    UnderlyingEndPrice_36.setString("19586146");
    noUnderlyings_0_1.set(UnderlyingEndPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingEndPrice_36.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_36;
    UnderlyingEndValue_36.setString("5331917");
    noUnderlyings_0_1.set(UnderlyingEndValue_36);
    UnderlyingInstrument_36.insert(UnderlyingEndValue_36.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_36(833819735);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_36);
    UnderlyingInstrument_36.insert(UnderlyingExerciseStyle_36.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_36;
    UnderlyingFXRate_36.setString("6041644");
    noUnderlyings_0_1.set(UnderlyingFXRate_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRate_36.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_36('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRateCalc_36.getString());
    FIX::UnderlyingFactor UnderlyingFactor_36;
    UnderlyingFactor_36.setString("6516458");
    noUnderlyings_0_1.set(UnderlyingFactor_36);
    UnderlyingInstrument_36.insert(UnderlyingFactor_36.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_36(2109982352);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_36);
    UnderlyingInstrument_36.insert(UnderlyingFlowScheduleType_36.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_36("STRING_919010723");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_36);
    UnderlyingInstrument_36.insert(UnderlyingInstrRegistry_36.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_36("LOCALMKTDATE_1660230343");
    noUnderlyings_0_1.set(UnderlyingIssueDate_36);
    UnderlyingInstrument_36.insert(UnderlyingIssueDate_36.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_36("STRING_1683487953");
    noUnderlyings_0_1.set(UnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(UnderlyingIssuer_36.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_36("STRING_1679658621");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingLocaleOfIssue_36.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_36("LOCALMKTDATE_621648531");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityDate_36.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_36("MONTHYEAR_2011244934");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityMonthYear_36.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_36("TZTIMEONLY_1398879661");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityTime_36.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_36;
    UnderlyingNotionalPercentageOutstanding_36.setString("94.130000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_36('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_36);
    UnderlyingInstrument_36.insert(UnderlyingOptAttribute_36.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_36;
    UnderlyingOriginalNotionalPercentageOutstanding_36.setString("87.960000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingOriginalNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_36("STRING_1668165168");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasure_36.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_36;
    UnderlyingPriceUnitOfMeasureQty_36.setString("13252906");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasureQty_36.getString());
    FIX::UnderlyingProduct UnderlyingProduct_36(1736837254);
    noUnderlyings_0_1.set(UnderlyingProduct_36);
    UnderlyingInstrument_36.insert(UnderlyingProduct_36.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_36(1171504069);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_36);
    UnderlyingInstrument_36.insert(UnderlyingPutOrCall_36.getString());
    FIX::UnderlyingPx UnderlyingPx_36;
    UnderlyingPx_36.setString("5663014");
    noUnderlyings_0_1.set(UnderlyingPx_36);
    UnderlyingInstrument_36.insert(UnderlyingPx_36.getString());
    FIX::UnderlyingQty UnderlyingQty_36;
    UnderlyingQty_36.setString("2078848");
    noUnderlyings_0_1.set(UnderlyingQty_36);
    UnderlyingInstrument_36.insert(UnderlyingQty_36.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_36("LOCALMKTDATE_70190528");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_36);
    UnderlyingInstrument_36.insert(UnderlyingRedemptionDate_36.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_36("STRING_1553650926");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingRepoCollateralSecurityType_36.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_36;
    UnderlyingRepurchaseRate_36.setString("66.830000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseRate_36.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_36(253024383);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseTerm_36.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_36("STRING_224786458");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_36);
    UnderlyingInstrument_36.insert(UnderlyingRestructuringType_36.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_36("STRING_1610211199");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityDesc_36.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_36("EXCHANGE_1797805625");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityExchange_36.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_36("STRING_1841235864");
    noUnderlyings_0_1.set(UnderlyingSecurityID_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityID_36.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_36("STRING_1421342205");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityIDSource_36.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_36("STRING_183513773");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecuritySubType_36.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_36("STRING_527571951");
    noUnderlyings_0_1.set(UnderlyingSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityType_36.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_36("STRING_2025506647");
    noUnderlyings_0_1.set(UnderlyingSeniority_36);
    UnderlyingInstrument_36.insert(UnderlyingSeniority_36.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_36("STRING_829918299");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlMethod_36.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_36(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlementType_36.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_36;
    UnderlyingStartValue_36.setString("19880053");
    noUnderlyings_0_1.set(UnderlyingStartValue_36);
    UnderlyingInstrument_36.insert(UnderlyingStartValue_36.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_36("STRING_1748929023");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingStateOrProvinceOfIssue_36.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_36("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikeCurrency_36.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_36;
    UnderlyingStrikePrice_36.setString("12811039");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikePrice_36.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_36("STRING_1313613009");
    noUnderlyings_0_1.set(UnderlyingSymbol_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbol_36.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_36("STRING_1387770942");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbolSfx_36.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_36("STRING_532500010");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingTimeUnit_36.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_36("STRING_314828774");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasure_36.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_36;
    UnderlyingUnitOfMeasureQty_36.setString("8265589");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasureQty_36.getString());
    all_values.push_back(UnderlyingInstrument_36);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_78;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_78("STRING_1982993942");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltID_78.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_78("STRING_4365969");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltIDSource_78.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_79;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_79("STRING_195542412");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_79);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltID_79.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_79("STRING_1007014364");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_79);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltIDSource_79.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_71;
      FIX::UnderlyingStipType UnderlyingStipType_71("STRING_403427286");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipType_71.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_71("STRING_1077204892");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipValue_71.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_71);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_70;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_70("STRING_759743969");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_70);
      UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyID_70.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_70('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_70);
      UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyIDSource_70.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_70(201621140);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_70);
      UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyRole_70.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_138("STRING_980551252");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_138);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubID_138.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_138(2042857005);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_138);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubIDType_138.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_139("STRING_1643813725");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_139);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubID_139.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_139(1164065026);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_139);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubIDType_139.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_37;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_37("DATA_422945308");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuer_37.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_37(1521836724);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuerLen_37.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_37("DATA_1993983325");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDesc_37.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_37(1602163090);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDescLen_37.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_37;
    UnderlyingAdjustedQuantity_37.setString("13623584");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_37);
    UnderlyingInstrument_37.insert(UnderlyingAdjustedQuantity_37.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_37;
    UnderlyingAllocationPercent_37.setString("87.000000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_37);
    UnderlyingInstrument_37.insert(UnderlyingAllocationPercent_37.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_37;
    UnderlyingAttachmentPoint_37.setString("39.200000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingAttachmentPoint_37.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_37("STRING_738884436");
    noUnderlyings_0_2.set(UnderlyingCFICode_37);
    UnderlyingInstrument_37.insert(UnderlyingCFICode_37.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_37("STRING_729049049");
    noUnderlyings_0_2.set(UnderlyingCPProgram_37);
    UnderlyingInstrument_37.insert(UnderlyingCPProgram_37.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_37("STRING_1460256929");
    noUnderlyings_0_2.set(UnderlyingCPRegType_37);
    UnderlyingInstrument_37.insert(UnderlyingCPRegType_37.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_37;
    UnderlyingCapValue_37.setString("21266553");
    noUnderlyings_0_2.set(UnderlyingCapValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCapValue_37.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_37;
    UnderlyingCashAmount_37.setString("12615490");
    noUnderlyings_0_2.set(UnderlyingCashAmount_37);
    UnderlyingInstrument_37.insert(UnderlyingCashAmount_37.getString());
    FIX::UnderlyingCashType UnderlyingCashType_37("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_37);
    UnderlyingInstrument_37.insert(UnderlyingCashType_37.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_37;
    UnderlyingContractMultiplier_37.setString("8057306");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplier_37.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_37(1867737865);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplierUnit_37.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_37("COUNTRY_1610595997");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingCountryOfIssue_37.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_37("LOCALMKTDATE_810096658");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponPaymentDate_37.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_37;
    UnderlyingCouponRate_37.setString("2.770000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponRate_37.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_37("STRING_470126713");
    noUnderlyings_0_2.set(UnderlyingCreditRating_37);
    UnderlyingInstrument_37.insert(UnderlyingCreditRating_37.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_37("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrency_37.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_37;
    UnderlyingCurrentValue_37.setString("15473316");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrentValue_37.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_37;
    UnderlyingDetachmentPoint_37.setString("87.450000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingDetachmentPoint_37.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_37;
    UnderlyingDirtyPrice_37.setString("10789678");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingDirtyPrice_37.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_37;
    UnderlyingEndPrice_37.setString("7300772");
    noUnderlyings_0_2.set(UnderlyingEndPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingEndPrice_37.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_37;
    UnderlyingEndValue_37.setString("15592198");
    noUnderlyings_0_2.set(UnderlyingEndValue_37);
    UnderlyingInstrument_37.insert(UnderlyingEndValue_37.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_37(1301439405);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_37);
    UnderlyingInstrument_37.insert(UnderlyingExerciseStyle_37.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_37;
    UnderlyingFXRate_37.setString("17106284");
    noUnderlyings_0_2.set(UnderlyingFXRate_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRate_37.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_37('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRateCalc_37.getString());
    FIX::UnderlyingFactor UnderlyingFactor_37;
    UnderlyingFactor_37.setString("7977694");
    noUnderlyings_0_2.set(UnderlyingFactor_37);
    UnderlyingInstrument_37.insert(UnderlyingFactor_37.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_37(727209863);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_37);
    UnderlyingInstrument_37.insert(UnderlyingFlowScheduleType_37.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_37("STRING_1877538551");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_37);
    UnderlyingInstrument_37.insert(UnderlyingInstrRegistry_37.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_37("LOCALMKTDATE_172122559");
    noUnderlyings_0_2.set(UnderlyingIssueDate_37);
    UnderlyingInstrument_37.insert(UnderlyingIssueDate_37.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_37("STRING_573709541");
    noUnderlyings_0_2.set(UnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(UnderlyingIssuer_37.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_37("STRING_1332217993");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingLocaleOfIssue_37.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_37("LOCALMKTDATE_1534480987");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityDate_37.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_37("MONTHYEAR_21654593");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityMonthYear_37.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_37("TZTIMEONLY_1478861913");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityTime_37.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_37;
    UnderlyingNotionalPercentageOutstanding_37.setString("17.750000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_37('7');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_37);
    UnderlyingInstrument_37.insert(UnderlyingOptAttribute_37.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_37;
    UnderlyingOriginalNotionalPercentageOutstanding_37.setString("51.940000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingOriginalNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_37("STRING_105053505");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasure_37.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_37;
    UnderlyingPriceUnitOfMeasureQty_37.setString("20122527");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasureQty_37.getString());
    FIX::UnderlyingProduct UnderlyingProduct_37(419237249);
    noUnderlyings_0_2.set(UnderlyingProduct_37);
    UnderlyingInstrument_37.insert(UnderlyingProduct_37.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_37(910784194);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_37);
    UnderlyingInstrument_37.insert(UnderlyingPutOrCall_37.getString());
    FIX::UnderlyingPx UnderlyingPx_37;
    UnderlyingPx_37.setString("17325069");
    noUnderlyings_0_2.set(UnderlyingPx_37);
    UnderlyingInstrument_37.insert(UnderlyingPx_37.getString());
    FIX::UnderlyingQty UnderlyingQty_37;
    UnderlyingQty_37.setString("20298332");
    noUnderlyings_0_2.set(UnderlyingQty_37);
    UnderlyingInstrument_37.insert(UnderlyingQty_37.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_37("LOCALMKTDATE_1720880853");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_37);
    UnderlyingInstrument_37.insert(UnderlyingRedemptionDate_37.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_37("STRING_1648303548");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingRepoCollateralSecurityType_37.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_37;
    UnderlyingRepurchaseRate_37.setString("63.120000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseRate_37.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_37(954161267);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseTerm_37.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_37("STRING_1967527463");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_37);
    UnderlyingInstrument_37.insert(UnderlyingRestructuringType_37.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_37("STRING_1899807918");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityDesc_37.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_37("EXCHANGE_164276364");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityExchange_37.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_37("STRING_899011700");
    noUnderlyings_0_2.set(UnderlyingSecurityID_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityID_37.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_37("STRING_482401503");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityIDSource_37.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_37("STRING_1723496250");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecuritySubType_37.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_37("STRING_52967458");
    noUnderlyings_0_2.set(UnderlyingSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityType_37.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_37("STRING_45546340");
    noUnderlyings_0_2.set(UnderlyingSeniority_37);
    UnderlyingInstrument_37.insert(UnderlyingSeniority_37.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_37("STRING_1030605844");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlMethod_37.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_37(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlementType_37.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_37;
    UnderlyingStartValue_37.setString("7727562");
    noUnderlyings_0_2.set(UnderlyingStartValue_37);
    UnderlyingInstrument_37.insert(UnderlyingStartValue_37.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_37("STRING_760660747");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingStateOrProvinceOfIssue_37.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_37("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikeCurrency_37.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_37;
    UnderlyingStrikePrice_37.setString("20928787");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikePrice_37.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_37("STRING_409856839");
    noUnderlyings_0_2.set(UnderlyingSymbol_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbol_37.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_37("STRING_1368120338");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbolSfx_37.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_37("STRING_1424257006");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingTimeUnit_37.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_37("STRING_535738614");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasure_37.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_37;
    UnderlyingUnitOfMeasureQty_37.setString("21188239");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasureQty_37.getString());
    all_values.push_back(UnderlyingInstrument_37);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_80;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_80("STRING_640792120");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_80);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltID_80.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_80("STRING_1983593034");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_80);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltIDSource_80.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_72;
      FIX::UnderlyingStipType UnderlyingStipType_72("STRING_1551576314");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipType_72.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_72("STRING_1568616305");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipValue_72.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_72);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_73;
      FIX::UnderlyingStipType UnderlyingStipType_73("STRING_369995401");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipType_73.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_73("STRING_1124973519");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipValue_73.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_73);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_74;
      FIX::UnderlyingStipType UnderlyingStipType_74("STRING_1069436205");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipType_74.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_74("STRING_722471714");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipValue_74.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_74);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_71;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_71("STRING_889480020");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_71);
      UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyID_71.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_71('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_71);
      UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyIDSource_71.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_71(95927503);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_71);
      UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyRole_71.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_140("STRING_957197487");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_140);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubID_140.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_140(1819423753);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_140);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubIDType_140.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
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
