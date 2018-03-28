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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DontKnowTrade msg;

  list<multiset<string>> all_values;
  multiset<string> DontKnowTrade_0;
  FIX::DKReason DKReason_0('Z');
  msg.set(DKReason_0);
  DontKnowTrade_0.insert(DKReason_0.getString());
  FIX::EncodedText EncodedText_36("DATA_2134035915");
  msg.set(EncodedText_36);
  DontKnowTrade_0.insert(EncodedText_36.getString());
  FIX::EncodedTextLen EncodedTextLen_36(291995761);
  msg.set(EncodedTextLen_36);
  DontKnowTrade_0.insert(EncodedTextLen_36.getString());
  FIX::ExecID ExecID_20("STRING_1878040511");
  msg.set(ExecID_20);
  DontKnowTrade_0.insert(ExecID_20.getString());
  FIX::LastPx LastPx_7;
  LastPx_7.setString("8752311");
  msg.set(LastPx_7);
  DontKnowTrade_0.insert(LastPx_7.getString());
  FIX::LastQty LastQty_7;
  LastQty_7.setString("2786130");
  msg.set(LastQty_7);
  DontKnowTrade_0.insert(LastQty_7.getString());
  FIX::OrderID OrderID_16("STRING_990942693");
  msg.set(OrderID_16);
  DontKnowTrade_0.insert(OrderID_16.getString());
  FIX::SecondaryOrderID SecondaryOrderID_14("STRING_1021176299");
  msg.set(SecondaryOrderID_14);
  DontKnowTrade_0.insert(SecondaryOrderID_14.getString());
  FIX::Side Side_20('4');
  msg.set(Side_20);
  DontKnowTrade_0.insert(Side_20.getString());
  FIX::Text Text_36("STRING_554463895");
  msg.set(Text_36);
  DontKnowTrade_0.insert(Text_36.getString());
  all_values.push_back(DontKnowTrade_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_38;
    FIX::EncodedLegIssuer EncodedLegIssuer_38("DATA_638656943");
    noLegs_0_0.set(EncodedLegIssuer_38);
    InstrumentLeg_38.insert(EncodedLegIssuer_38.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_38(393792098);
    noLegs_0_0.set(EncodedLegIssuerLen_38);
    InstrumentLeg_38.insert(EncodedLegIssuerLen_38.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_38("DATA_302896078");
    noLegs_0_0.set(EncodedLegSecurityDesc_38);
    InstrumentLeg_38.insert(EncodedLegSecurityDesc_38.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_38(1924726294);
    noLegs_0_0.set(EncodedLegSecurityDescLen_38);
    InstrumentLeg_38.insert(EncodedLegSecurityDescLen_38.getString());
    FIX::LegCFICode LegCFICode_38("STRING_1108672713");
    noLegs_0_0.set(LegCFICode_38);
    InstrumentLeg_38.insert(LegCFICode_38.getString());
    FIX::LegContractMultiplier LegContractMultiplier_38;
    LegContractMultiplier_38.setString("12428824");
    noLegs_0_0.set(LegContractMultiplier_38);
    InstrumentLeg_38.insert(LegContractMultiplier_38.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_38(981502645);
    noLegs_0_0.set(LegContractMultiplierUnit_38);
    InstrumentLeg_38.insert(LegContractMultiplierUnit_38.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_38("MONTHYEAR_259657953");
    noLegs_0_0.set(LegContractSettlMonth_38);
    InstrumentLeg_38.insert(LegContractSettlMonth_38.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_38("COUNTRY_303337746");
    noLegs_0_0.set(LegCountryOfIssue_38);
    InstrumentLeg_38.insert(LegCountryOfIssue_38.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_38("LOCALMKTDATE_1421778747");
    noLegs_0_0.set(LegCouponPaymentDate_38);
    InstrumentLeg_38.insert(LegCouponPaymentDate_38.getString());
    FIX::LegCouponRate LegCouponRate_38;
    LegCouponRate_38.setString("27.240000");
    noLegs_0_0.set(LegCouponRate_38);
    InstrumentLeg_38.insert(LegCouponRate_38.getString());
    FIX::LegCreditRating LegCreditRating_38("STRING_1992652957");
    noLegs_0_0.set(LegCreditRating_38);
    InstrumentLeg_38.insert(LegCreditRating_38.getString());
    FIX::LegCurrency LegCurrency_38("GBP");
    noLegs_0_0.set(LegCurrency_38);
    InstrumentLeg_38.insert(LegCurrency_38.getString());
    FIX::LegDatedDate LegDatedDate_38("LOCALMKTDATE_1308355386");
    noLegs_0_0.set(LegDatedDate_38);
    InstrumentLeg_38.insert(LegDatedDate_38.getString());
    FIX::LegExerciseStyle LegExerciseStyle_38(293478969);
    noLegs_0_0.set(LegExerciseStyle_38);
    InstrumentLeg_38.insert(LegExerciseStyle_38.getString());
    FIX::LegFactor LegFactor_38;
    LegFactor_38.setString("5158633");
    noLegs_0_0.set(LegFactor_38);
    InstrumentLeg_38.insert(LegFactor_38.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_38(1096810786);
    noLegs_0_0.set(LegFlowScheduleType_38);
    InstrumentLeg_38.insert(LegFlowScheduleType_38.getString());
    FIX::LegInstrRegistry LegInstrRegistry_38("STRING_140727230");
    noLegs_0_0.set(LegInstrRegistry_38);
    InstrumentLeg_38.insert(LegInstrRegistry_38.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_38("LOCALMKTDATE_1749496674");
    noLegs_0_0.set(LegInterestAccrualDate_38);
    InstrumentLeg_38.insert(LegInterestAccrualDate_38.getString());
    FIX::LegIssueDate LegIssueDate_38("LOCALMKTDATE_1030800756");
    noLegs_0_0.set(LegIssueDate_38);
    InstrumentLeg_38.insert(LegIssueDate_38.getString());
    FIX::LegIssuer LegIssuer_38("STRING_127279497");
    noLegs_0_0.set(LegIssuer_38);
    InstrumentLeg_38.insert(LegIssuer_38.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_38("STRING_2041492435");
    noLegs_0_0.set(LegLocaleOfIssue_38);
    InstrumentLeg_38.insert(LegLocaleOfIssue_38.getString());
    FIX::LegMaturityDate LegMaturityDate_38("LOCALMKTDATE_761357619");
    noLegs_0_0.set(LegMaturityDate_38);
    InstrumentLeg_38.insert(LegMaturityDate_38.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_38("MONTHYEAR_1002510686");
    noLegs_0_0.set(LegMaturityMonthYear_38);
    InstrumentLeg_38.insert(LegMaturityMonthYear_38.getString());
    FIX::LegMaturityTime LegMaturityTime_38("TZTIMEONLY_172621856");
    noLegs_0_0.set(LegMaturityTime_38);
    InstrumentLeg_38.insert(LegMaturityTime_38.getString());
    FIX::LegOptAttribute LegOptAttribute_38('1');
    noLegs_0_0.set(LegOptAttribute_38);
    InstrumentLeg_38.insert(LegOptAttribute_38.getString());
    FIX::LegOptionRatio LegOptionRatio_38;
    LegOptionRatio_38.setString("20236869");
    noLegs_0_0.set(LegOptionRatio_38);
    InstrumentLeg_38.insert(LegOptionRatio_38.getString());
    FIX::LegPool LegPool_38("STRING_36231172");
    noLegs_0_0.set(LegPool_38);
    InstrumentLeg_38.insert(LegPool_38.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_38("STRING_159280559");
    noLegs_0_0.set(LegPriceUnitOfMeasure_38);
    InstrumentLeg_38.insert(LegPriceUnitOfMeasure_38.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_38;
    LegPriceUnitOfMeasureQty_38.setString("10205467");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_38);
    InstrumentLeg_38.insert(LegPriceUnitOfMeasureQty_38.getString());
    FIX::LegProduct LegProduct_38(674888115);
    noLegs_0_0.set(LegProduct_38);
    InstrumentLeg_38.insert(LegProduct_38.getString());
    FIX::LegPutOrCall LegPutOrCall_38(553072657);
    noLegs_0_0.set(LegPutOrCall_38);
    InstrumentLeg_38.insert(LegPutOrCall_38.getString());
    FIX::LegRatioQty LegRatioQty_38;
    LegRatioQty_38.setString("13234428");
    noLegs_0_0.set(LegRatioQty_38);
    InstrumentLeg_38.insert(LegRatioQty_38.getString());
    FIX::LegRedemptionDate LegRedemptionDate_38("LOCALMKTDATE_452130762");
    noLegs_0_0.set(LegRedemptionDate_38);
    InstrumentLeg_38.insert(LegRedemptionDate_38.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_38("STRING_1661745371");
    noLegs_0_0.set(LegRepoCollateralSecurityType_38);
    InstrumentLeg_38.insert(LegRepoCollateralSecurityType_38.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_38;
    LegRepurchaseRate_38.setString("16.190000");
    noLegs_0_0.set(LegRepurchaseRate_38);
    InstrumentLeg_38.insert(LegRepurchaseRate_38.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_38(1433633407);
    noLegs_0_0.set(LegRepurchaseTerm_38);
    InstrumentLeg_38.insert(LegRepurchaseTerm_38.getString());
    FIX::LegSecurityDesc LegSecurityDesc_38("STRING_1921403324");
    noLegs_0_0.set(LegSecurityDesc_38);
    InstrumentLeg_38.insert(LegSecurityDesc_38.getString());
    FIX::LegSecurityExchange LegSecurityExchange_38("EXCHANGE_722179366");
    noLegs_0_0.set(LegSecurityExchange_38);
    InstrumentLeg_38.insert(LegSecurityExchange_38.getString());
    FIX::LegSecurityID LegSecurityID_38("STRING_707928506");
    noLegs_0_0.set(LegSecurityID_38);
    InstrumentLeg_38.insert(LegSecurityID_38.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_38("STRING_1744322400");
    noLegs_0_0.set(LegSecurityIDSource_38);
    InstrumentLeg_38.insert(LegSecurityIDSource_38.getString());
    FIX::LegSecuritySubType LegSecuritySubType_38("STRING_567348675");
    noLegs_0_0.set(LegSecuritySubType_38);
    InstrumentLeg_38.insert(LegSecuritySubType_38.getString());
    FIX::LegSecurityType LegSecurityType_38("STRING_104329432");
    noLegs_0_0.set(LegSecurityType_38);
    InstrumentLeg_38.insert(LegSecurityType_38.getString());
    FIX::LegSide LegSide_38('1');
    noLegs_0_0.set(LegSide_38);
    InstrumentLeg_38.insert(LegSide_38.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_38("STRING_1875704062");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_38);
    InstrumentLeg_38.insert(LegStateOrProvinceOfIssue_38.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_38("EUR");
    noLegs_0_0.set(LegStrikeCurrency_38);
    InstrumentLeg_38.insert(LegStrikeCurrency_38.getString());
    FIX::LegStrikePrice LegStrikePrice_38;
    LegStrikePrice_38.setString("8250312");
    noLegs_0_0.set(LegStrikePrice_38);
    InstrumentLeg_38.insert(LegStrikePrice_38.getString());
    FIX::LegSymbol LegSymbol_38("STRING_538535632");
    noLegs_0_0.set(LegSymbol_38);
    InstrumentLeg_38.insert(LegSymbol_38.getString());
    FIX::LegSymbolSfx LegSymbolSfx_38("STRING_1816135507");
    noLegs_0_0.set(LegSymbolSfx_38);
    InstrumentLeg_38.insert(LegSymbolSfx_38.getString());
    FIX::LegTimeUnit LegTimeUnit_38("STRING_1855831956");
    noLegs_0_0.set(LegTimeUnit_38);
    InstrumentLeg_38.insert(LegTimeUnit_38.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_38("STRING_665815129");
    noLegs_0_0.set(LegUnitOfMeasure_38);
    InstrumentLeg_38.insert(LegUnitOfMeasure_38.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_38;
    LegUnitOfMeasureQty_38.setString("17101442");
    noLegs_0_0.set(LegUnitOfMeasureQty_38);
    InstrumentLeg_38.insert(LegUnitOfMeasureQty_38.getString());
    all_values.push_back(InstrumentLeg_38);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_83;
      FIX::LegSecurityAltID LegSecurityAltID_83("STRING_1668325815");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltID_83.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_83("STRING_1882766151");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltIDSource_83.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_83);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_84;
      FIX::LegSecurityAltID LegSecurityAltID_84("STRING_74522592");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltID_84.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_84("STRING_1544529152");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltIDSource_84.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_84);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_85;
      FIX::LegSecurityAltID LegSecurityAltID_85("STRING_1918997323");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltID_85.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_85("STRING_233803152");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltIDSource_85.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_85);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_39;
    FIX::EncodedLegIssuer EncodedLegIssuer_39("DATA_417592272");
    noLegs_0_1.set(EncodedLegIssuer_39);
    InstrumentLeg_39.insert(EncodedLegIssuer_39.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_39(446401790);
    noLegs_0_1.set(EncodedLegIssuerLen_39);
    InstrumentLeg_39.insert(EncodedLegIssuerLen_39.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_39("DATA_786875809");
    noLegs_0_1.set(EncodedLegSecurityDesc_39);
    InstrumentLeg_39.insert(EncodedLegSecurityDesc_39.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_39(1741035118);
    noLegs_0_1.set(EncodedLegSecurityDescLen_39);
    InstrumentLeg_39.insert(EncodedLegSecurityDescLen_39.getString());
    FIX::LegCFICode LegCFICode_39("STRING_898532552");
    noLegs_0_1.set(LegCFICode_39);
    InstrumentLeg_39.insert(LegCFICode_39.getString());
    FIX::LegContractMultiplier LegContractMultiplier_39;
    LegContractMultiplier_39.setString("3011375");
    noLegs_0_1.set(LegContractMultiplier_39);
    InstrumentLeg_39.insert(LegContractMultiplier_39.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_39(12393090);
    noLegs_0_1.set(LegContractMultiplierUnit_39);
    InstrumentLeg_39.insert(LegContractMultiplierUnit_39.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_39("MONTHYEAR_184682312");
    noLegs_0_1.set(LegContractSettlMonth_39);
    InstrumentLeg_39.insert(LegContractSettlMonth_39.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_39("COUNTRY_75057208");
    noLegs_0_1.set(LegCountryOfIssue_39);
    InstrumentLeg_39.insert(LegCountryOfIssue_39.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_39("LOCALMKTDATE_734572456");
    noLegs_0_1.set(LegCouponPaymentDate_39);
    InstrumentLeg_39.insert(LegCouponPaymentDate_39.getString());
    FIX::LegCouponRate LegCouponRate_39;
    LegCouponRate_39.setString("8.180000");
    noLegs_0_1.set(LegCouponRate_39);
    InstrumentLeg_39.insert(LegCouponRate_39.getString());
    FIX::LegCreditRating LegCreditRating_39("STRING_1819379608");
    noLegs_0_1.set(LegCreditRating_39);
    InstrumentLeg_39.insert(LegCreditRating_39.getString());
    FIX::LegCurrency LegCurrency_39("CHF");
    noLegs_0_1.set(LegCurrency_39);
    InstrumentLeg_39.insert(LegCurrency_39.getString());
    FIX::LegDatedDate LegDatedDate_39("LOCALMKTDATE_1370155124");
    noLegs_0_1.set(LegDatedDate_39);
    InstrumentLeg_39.insert(LegDatedDate_39.getString());
    FIX::LegExerciseStyle LegExerciseStyle_39(1030141545);
    noLegs_0_1.set(LegExerciseStyle_39);
    InstrumentLeg_39.insert(LegExerciseStyle_39.getString());
    FIX::LegFactor LegFactor_39;
    LegFactor_39.setString("13947486");
    noLegs_0_1.set(LegFactor_39);
    InstrumentLeg_39.insert(LegFactor_39.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_39(1436793958);
    noLegs_0_1.set(LegFlowScheduleType_39);
    InstrumentLeg_39.insert(LegFlowScheduleType_39.getString());
    FIX::LegInstrRegistry LegInstrRegistry_39("STRING_1855172746");
    noLegs_0_1.set(LegInstrRegistry_39);
    InstrumentLeg_39.insert(LegInstrRegistry_39.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_39("LOCALMKTDATE_1933284284");
    noLegs_0_1.set(LegInterestAccrualDate_39);
    InstrumentLeg_39.insert(LegInterestAccrualDate_39.getString());
    FIX::LegIssueDate LegIssueDate_39("LOCALMKTDATE_1105445817");
    noLegs_0_1.set(LegIssueDate_39);
    InstrumentLeg_39.insert(LegIssueDate_39.getString());
    FIX::LegIssuer LegIssuer_39("STRING_1563521054");
    noLegs_0_1.set(LegIssuer_39);
    InstrumentLeg_39.insert(LegIssuer_39.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_39("STRING_451615766");
    noLegs_0_1.set(LegLocaleOfIssue_39);
    InstrumentLeg_39.insert(LegLocaleOfIssue_39.getString());
    FIX::LegMaturityDate LegMaturityDate_39("LOCALMKTDATE_668106464");
    noLegs_0_1.set(LegMaturityDate_39);
    InstrumentLeg_39.insert(LegMaturityDate_39.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_39("MONTHYEAR_2033226982");
    noLegs_0_1.set(LegMaturityMonthYear_39);
    InstrumentLeg_39.insert(LegMaturityMonthYear_39.getString());
    FIX::LegMaturityTime LegMaturityTime_39("TZTIMEONLY_2119941581");
    noLegs_0_1.set(LegMaturityTime_39);
    InstrumentLeg_39.insert(LegMaturityTime_39.getString());
    FIX::LegOptAttribute LegOptAttribute_39('4');
    noLegs_0_1.set(LegOptAttribute_39);
    InstrumentLeg_39.insert(LegOptAttribute_39.getString());
    FIX::LegOptionRatio LegOptionRatio_39;
    LegOptionRatio_39.setString("21077495");
    noLegs_0_1.set(LegOptionRatio_39);
    InstrumentLeg_39.insert(LegOptionRatio_39.getString());
    FIX::LegPool LegPool_39("STRING_1516987086");
    noLegs_0_1.set(LegPool_39);
    InstrumentLeg_39.insert(LegPool_39.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_39("STRING_174902642");
    noLegs_0_1.set(LegPriceUnitOfMeasure_39);
    InstrumentLeg_39.insert(LegPriceUnitOfMeasure_39.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_39;
    LegPriceUnitOfMeasureQty_39.setString("1940690");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_39);
    InstrumentLeg_39.insert(LegPriceUnitOfMeasureQty_39.getString());
    FIX::LegProduct LegProduct_39(1934579358);
    noLegs_0_1.set(LegProduct_39);
    InstrumentLeg_39.insert(LegProduct_39.getString());
    FIX::LegPutOrCall LegPutOrCall_39(621304432);
    noLegs_0_1.set(LegPutOrCall_39);
    InstrumentLeg_39.insert(LegPutOrCall_39.getString());
    FIX::LegRatioQty LegRatioQty_39;
    LegRatioQty_39.setString("9809448");
    noLegs_0_1.set(LegRatioQty_39);
    InstrumentLeg_39.insert(LegRatioQty_39.getString());
    FIX::LegRedemptionDate LegRedemptionDate_39("LOCALMKTDATE_1528130829");
    noLegs_0_1.set(LegRedemptionDate_39);
    InstrumentLeg_39.insert(LegRedemptionDate_39.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_39("STRING_1519836985");
    noLegs_0_1.set(LegRepoCollateralSecurityType_39);
    InstrumentLeg_39.insert(LegRepoCollateralSecurityType_39.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_39;
    LegRepurchaseRate_39.setString("24.210000");
    noLegs_0_1.set(LegRepurchaseRate_39);
    InstrumentLeg_39.insert(LegRepurchaseRate_39.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_39(1540523919);
    noLegs_0_1.set(LegRepurchaseTerm_39);
    InstrumentLeg_39.insert(LegRepurchaseTerm_39.getString());
    FIX::LegSecurityDesc LegSecurityDesc_39("STRING_1704519297");
    noLegs_0_1.set(LegSecurityDesc_39);
    InstrumentLeg_39.insert(LegSecurityDesc_39.getString());
    FIX::LegSecurityExchange LegSecurityExchange_39("EXCHANGE_1357139629");
    noLegs_0_1.set(LegSecurityExchange_39);
    InstrumentLeg_39.insert(LegSecurityExchange_39.getString());
    FIX::LegSecurityID LegSecurityID_39("STRING_127612727");
    noLegs_0_1.set(LegSecurityID_39);
    InstrumentLeg_39.insert(LegSecurityID_39.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_39("STRING_449646467");
    noLegs_0_1.set(LegSecurityIDSource_39);
    InstrumentLeg_39.insert(LegSecurityIDSource_39.getString());
    FIX::LegSecuritySubType LegSecuritySubType_39("STRING_1029035590");
    noLegs_0_1.set(LegSecuritySubType_39);
    InstrumentLeg_39.insert(LegSecuritySubType_39.getString());
    FIX::LegSecurityType LegSecurityType_39("STRING_1429533858");
    noLegs_0_1.set(LegSecurityType_39);
    InstrumentLeg_39.insert(LegSecurityType_39.getString());
    FIX::LegSide LegSide_39('1');
    noLegs_0_1.set(LegSide_39);
    InstrumentLeg_39.insert(LegSide_39.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_39("STRING_251707066");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_39);
    InstrumentLeg_39.insert(LegStateOrProvinceOfIssue_39.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_39("CAN");
    noLegs_0_1.set(LegStrikeCurrency_39);
    InstrumentLeg_39.insert(LegStrikeCurrency_39.getString());
    FIX::LegStrikePrice LegStrikePrice_39;
    LegStrikePrice_39.setString("16885010");
    noLegs_0_1.set(LegStrikePrice_39);
    InstrumentLeg_39.insert(LegStrikePrice_39.getString());
    FIX::LegSymbol LegSymbol_39("STRING_19880854");
    noLegs_0_1.set(LegSymbol_39);
    InstrumentLeg_39.insert(LegSymbol_39.getString());
    FIX::LegSymbolSfx LegSymbolSfx_39("STRING_479652359");
    noLegs_0_1.set(LegSymbolSfx_39);
    InstrumentLeg_39.insert(LegSymbolSfx_39.getString());
    FIX::LegTimeUnit LegTimeUnit_39("STRING_646463194");
    noLegs_0_1.set(LegTimeUnit_39);
    InstrumentLeg_39.insert(LegTimeUnit_39.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_39("STRING_1583401908");
    noLegs_0_1.set(LegUnitOfMeasure_39);
    InstrumentLeg_39.insert(LegUnitOfMeasure_39.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_39;
    LegUnitOfMeasureQty_39.setString("9312681");
    noLegs_0_1.set(LegUnitOfMeasureQty_39);
    InstrumentLeg_39.insert(LegUnitOfMeasureQty_39.getString());
    all_values.push_back(InstrumentLeg_39);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_86;
      FIX::LegSecurityAltID LegSecurityAltID_86("STRING_1469145243");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_86);
      LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltID_86.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_86("STRING_903726059");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_86);
      LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltIDSource_86.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_86);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_22;
  FIX::AttachmentPoint AttachmentPoint_22;
  AttachmentPoint_22.setString("86.250000");
  msg.set(AttachmentPoint_22);
  Instrument_22.insert(AttachmentPoint_22.getString());
  FIX::CFICode CFICode_22("STRING_1429411170");
  msg.set(CFICode_22);
  Instrument_22.insert(CFICode_22.getString());
  FIX::CPProgram CPProgram_22(1);
  msg.set(CPProgram_22);
  Instrument_22.insert(CPProgram_22.getString());
  FIX::CPRegType CPRegType_22("STRING_1892861267");
  msg.set(CPRegType_22);
  Instrument_22.insert(CPRegType_22.getString());
  FIX::CapPrice CapPrice_22;
  CapPrice_22.setString("16234802");
  msg.set(CapPrice_22);
  Instrument_22.insert(CapPrice_22.getString());
  FIX::ContractMultiplier ContractMultiplier_22;
  ContractMultiplier_22.setString("603252");
  msg.set(ContractMultiplier_22);
  Instrument_22.insert(ContractMultiplier_22.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_22(1);
  msg.set(ContractMultiplierUnit_22);
  Instrument_22.insert(ContractMultiplierUnit_22.getString());
  FIX::ContractSettlMonth ContractSettlMonth_22("MONTHYEAR_456941489");
  msg.set(ContractSettlMonth_22);
  Instrument_22.insert(ContractSettlMonth_22.getString());
  FIX::CountryOfIssue CountryOfIssue_22("COUNTRY_1588456036");
  msg.set(CountryOfIssue_22);
  Instrument_22.insert(CountryOfIssue_22.getString());
  FIX::CouponPaymentDate CouponPaymentDate_22("LOCALMKTDATE_1886519036");
  msg.set(CouponPaymentDate_22);
  Instrument_22.insert(CouponPaymentDate_22.getString());
  FIX::CouponRate CouponRate_22;
  CouponRate_22.setString("39.100000");
  msg.set(CouponRate_22);
  Instrument_22.insert(CouponRate_22.getString());
  FIX::CreditRating CreditRating_22("STRING_981496307");
  msg.set(CreditRating_22);
  Instrument_22.insert(CreditRating_22.getString());
  FIX::DatedDate DatedDate_22("LOCALMKTDATE_1443554685");
  msg.set(DatedDate_22);
  Instrument_22.insert(DatedDate_22.getString());
  FIX::DetachmentPoint DetachmentPoint_22;
  DetachmentPoint_22.setString("98.920000");
  msg.set(DetachmentPoint_22);
  Instrument_22.insert(DetachmentPoint_22.getString());
  FIX::EncodedIssuer EncodedIssuer_22("DATA_1109109034");
  msg.set(EncodedIssuer_22);
  Instrument_22.insert(EncodedIssuer_22.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_22(1893201153);
  msg.set(EncodedIssuerLen_22);
  Instrument_22.insert(EncodedIssuerLen_22.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_22("DATA_1977715482");
  msg.set(EncodedSecurityDesc_22);
  Instrument_22.insert(EncodedSecurityDesc_22.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_22(391159245);
  msg.set(EncodedSecurityDescLen_22);
  Instrument_22.insert(EncodedSecurityDescLen_22.getString());
  FIX::ExerciseStyle ExerciseStyle_22(0);
  msg.set(ExerciseStyle_22);
  Instrument_22.insert(ExerciseStyle_22.getString());
  FIX::Factor Factor_22;
  Factor_22.setString("819389");
  msg.set(Factor_22);
  Instrument_22.insert(Factor_22.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_22(false);
  msg.set(FlexProductEligibilityIndicator_22);
  Instrument_22.insert(FlexProductEligibilityIndicator_22.getString());
  FIX::FlexibleIndicator FlexibleIndicator_22(true);
  msg.set(FlexibleIndicator_22);
  Instrument_22.insert(FlexibleIndicator_22.getString());
  FIX::FloorPrice FloorPrice_22;
  FloorPrice_22.setString("17704399");
  msg.set(FloorPrice_22);
  Instrument_22.insert(FloorPrice_22.getString());
  FIX::FlowScheduleType FlowScheduleType_22(0);
  msg.set(FlowScheduleType_22);
  Instrument_22.insert(FlowScheduleType_22.getString());
  FIX::InstrRegistry InstrRegistry_22("STRING_218324658");
  msg.set(InstrRegistry_22);
  Instrument_22.insert(InstrRegistry_22.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_22('2');
  msg.set(InstrmtAssignmentMethod_22);
  Instrument_22.insert(InstrmtAssignmentMethod_22.getString());
  FIX::InterestAccrualDate InterestAccrualDate_22("LOCALMKTDATE_159150115");
  msg.set(InterestAccrualDate_22);
  Instrument_22.insert(InterestAccrualDate_22.getString());
  FIX::IssueDate IssueDate_22("LOCALMKTDATE_1149592783");
  msg.set(IssueDate_22);
  Instrument_22.insert(IssueDate_22.getString());
  FIX::Issuer Issuer_22("STRING_1583989129");
  msg.set(Issuer_22);
  Instrument_22.insert(Issuer_22.getString());
  FIX::ListMethod ListMethod_22(0);
  msg.set(ListMethod_22);
  Instrument_22.insert(ListMethod_22.getString());
  FIX::LocaleOfIssue LocaleOfIssue_22("STRING_2053318842");
  msg.set(LocaleOfIssue_22);
  Instrument_22.insert(LocaleOfIssue_22.getString());
  FIX::MaturityDate MaturityDate_22("LOCALMKTDATE_1154464106");
  msg.set(MaturityDate_22);
  Instrument_22.insert(MaturityDate_22.getString());
  FIX::MaturityMonthYear MaturityMonthYear_22("MONTHYEAR_910222880");
  msg.set(MaturityMonthYear_22);
  Instrument_22.insert(MaturityMonthYear_22.getString());
  FIX::MaturityTime MaturityTime_22("TZTIMEONLY_179064691");
  msg.set(MaturityTime_22);
  Instrument_22.insert(MaturityTime_22.getString());
  FIX::MinPriceIncrement MinPriceIncrement_22;
  MinPriceIncrement_22.setString("8998417");
  msg.set(MinPriceIncrement_22);
  Instrument_22.insert(MinPriceIncrement_22.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_22;
  MinPriceIncrementAmount_22.setString("3862194");
  msg.set(MinPriceIncrementAmount_22);
  Instrument_22.insert(MinPriceIncrementAmount_22.getString());
  FIX::NTPositionLimit NTPositionLimit_22(239389899);
  msg.set(NTPositionLimit_22);
  Instrument_22.insert(NTPositionLimit_22.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_22;
  NotionalPercentageOutstanding_22.setString("37.760000");
  msg.set(NotionalPercentageOutstanding_22);
  Instrument_22.insert(NotionalPercentageOutstanding_22.getString());
  FIX::OptAttribute OptAttribute_22('8');
  msg.set(OptAttribute_22);
  Instrument_22.insert(OptAttribute_22.getString());
  FIX::OptPayoutAmount OptPayoutAmount_22;
  OptPayoutAmount_22.setString("18278459");
  msg.set(OptPayoutAmount_22);
  Instrument_22.insert(OptPayoutAmount_22.getString());
  FIX::OptPayoutType OptPayoutType_22(2);
  msg.set(OptPayoutType_22);
  Instrument_22.insert(OptPayoutType_22.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_22;
  OriginalNotionalPercentageOutstanding_22.setString("12.330000");
  msg.set(OriginalNotionalPercentageOutstanding_22);
  Instrument_22.insert(OriginalNotionalPercentageOutstanding_22.getString());
  FIX::Pool Pool_22("STRING_661858595");
  msg.set(Pool_22);
  Instrument_22.insert(Pool_22.getString());
  FIX::PositionLimit PositionLimit_22(301630202);
  msg.set(PositionLimit_22);
  Instrument_22.insert(PositionLimit_22.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_22("STRING_INX");
  msg.set(PriceQuoteMethod_22);
  Instrument_22.insert(PriceQuoteMethod_22.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_22("STRING_1770967629");
  msg.set(PriceUnitOfMeasure_22);
  Instrument_22.insert(PriceUnitOfMeasure_22.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_22;
  PriceUnitOfMeasureQty_22.setString("473477");
  msg.set(PriceUnitOfMeasureQty_22);
  Instrument_22.insert(PriceUnitOfMeasureQty_22.getString());
  FIX::Product Product_24(1);
  msg.set(Product_24);
  Instrument_22.insert(Product_24.getString());
  FIX::ProductComplex ProductComplex_22("STRING_14643226");
  msg.set(ProductComplex_22);
  Instrument_22.insert(ProductComplex_22.getString());
  FIX::PutOrCall PutOrCall_22(1);
  msg.set(PutOrCall_22);
  Instrument_22.insert(PutOrCall_22.getString());
  FIX::RedemptionDate RedemptionDate_22("LOCALMKTDATE_1295551860");
  msg.set(RedemptionDate_22);
  Instrument_22.insert(RedemptionDate_22.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_22("STRING_717994227");
  msg.set(RepoCollateralSecurityType_22);
  Instrument_22.insert(RepoCollateralSecurityType_22.getString());
  FIX::RepurchaseRate RepurchaseRate_22;
  RepurchaseRate_22.setString("42.290000");
  msg.set(RepurchaseRate_22);
  Instrument_22.insert(RepurchaseRate_22.getString());
  FIX::RepurchaseTerm RepurchaseTerm_22(918508137);
  msg.set(RepurchaseTerm_22);
  Instrument_22.insert(RepurchaseTerm_22.getString());
  FIX::RestructuringType RestructuringType_22("STRING_MM");
  msg.set(RestructuringType_22);
  Instrument_22.insert(RestructuringType_22.getString());
  FIX::SecurityDesc SecurityDesc_22("STRING_1196648887");
  msg.set(SecurityDesc_22);
  Instrument_22.insert(SecurityDesc_22.getString());
  FIX::SecurityExchange SecurityExchange_22("EXCHANGE_1187927608");
  msg.set(SecurityExchange_22);
  Instrument_22.insert(SecurityExchange_22.getString());
  FIX::SecurityGroup SecurityGroup_22("STRING_1600376198");
  msg.set(SecurityGroup_22);
  Instrument_22.insert(SecurityGroup_22.getString());
  FIX::SecurityID SecurityID_22("STRING_198758023");
  msg.set(SecurityID_22);
  Instrument_22.insert(SecurityID_22.getString());
  FIX::SecurityIDSource SecurityIDSource_22("STRING_6");
  msg.set(SecurityIDSource_22);
  Instrument_22.insert(SecurityIDSource_22.getString());
  FIX::SecurityStatus SecurityStatus_22("STRING_1");
  msg.set(SecurityStatus_22);
  Instrument_22.insert(SecurityStatus_22.getString());
  FIX::SecuritySubType SecuritySubType_23("STRING_104593217");
  msg.set(SecuritySubType_23);
  Instrument_22.insert(SecuritySubType_23.getString());
  FIX::SecurityType SecurityType_24("STRING_CASH");
  msg.set(SecurityType_24);
  Instrument_22.insert(SecurityType_24.getString());
  FIX::Seniority Seniority_22("STRING_SR");
  msg.set(Seniority_22);
  Instrument_22.insert(Seniority_22.getString());
  FIX::SettlMethod SettlMethod_22('P');
  msg.set(SettlMethod_22);
  Instrument_22.insert(SettlMethod_22.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_22("STRING_531255272");
  msg.set(SettleOnOpenFlag_22);
  Instrument_22.insert(SettleOnOpenFlag_22.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_22("STRING_230146622");
  msg.set(StateOrProvinceOfIssue_22);
  Instrument_22.insert(StateOrProvinceOfIssue_22.getString());
  FIX::StrikeCurrency StrikeCurrency_22("GBP");
  msg.set(StrikeCurrency_22);
  Instrument_22.insert(StrikeCurrency_22.getString());
  FIX::StrikeMultiplier StrikeMultiplier_22;
  StrikeMultiplier_22.setString("10733075");
  msg.set(StrikeMultiplier_22);
  Instrument_22.insert(StrikeMultiplier_22.getString());
  FIX::StrikePrice StrikePrice_22;
  StrikePrice_22.setString("2034100");
  msg.set(StrikePrice_22);
  Instrument_22.insert(StrikePrice_22.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_22(1);
  msg.set(StrikePriceBoundaryMethod_22);
  Instrument_22.insert(StrikePriceBoundaryMethod_22.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_22;
  StrikePriceBoundaryPrecision_22.setString("88.270000");
  msg.set(StrikePriceBoundaryPrecision_22);
  Instrument_22.insert(StrikePriceBoundaryPrecision_22.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_22(3);
  msg.set(StrikePriceDeterminationMethod_22);
  Instrument_22.insert(StrikePriceDeterminationMethod_22.getString());
  FIX::StrikeValue StrikeValue_22;
  StrikeValue_22.setString("9574847");
  msg.set(StrikeValue_22);
  Instrument_22.insert(StrikeValue_22.getString());
  FIX::Symbol Symbol_22("STRING_743906304");
  msg.set(Symbol_22);
  Instrument_22.insert(Symbol_22.getString());
  FIX::SymbolSfx SymbolSfx_22("STRING_CD");
  msg.set(SymbolSfx_22);
  Instrument_22.insert(SymbolSfx_22.getString());
  FIX::TimeUnit TimeUnit_22("STRING_D");
  msg.set(TimeUnit_22);
  Instrument_22.insert(TimeUnit_22.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_22(1);
  msg.set(UnderlyingPriceDeterminationMethod_22);
  Instrument_22.insert(UnderlyingPriceDeterminationMethod_22.getString());
  FIX::UnitOfMeasure UnitOfMeasure_22("STRING_Bu");
  msg.set(UnitOfMeasure_22);
  Instrument_22.insert(UnitOfMeasure_22.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_22;
  UnitOfMeasureQty_22.setString("970007");
  msg.set(UnitOfMeasureQty_22);
  Instrument_22.insert(UnitOfMeasureQty_22.getString());
  FIX::ValuationMethod ValuationMethod_22("STRING_FUT");
  msg.set(ValuationMethod_22);
  Instrument_22.insert(ValuationMethod_22.getString());
  all_values.push_back(Instrument_22);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_47;
    FIX::ComplexEventCondition ComplexEventCondition_47(1);
    noComplexEvents_0_0.set(ComplexEventCondition_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventCondition_47.getString());
    FIX::ComplexEventPrice ComplexEventPrice_47;
    ComplexEventPrice_47.setString("20240956");
    noComplexEvents_0_0.set(ComplexEventPrice_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPrice_47.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_47(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryMethod_47.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_47;
    ComplexEventPriceBoundaryPrecision_47.setString("2.270000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceBoundaryPrecision_47.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_47(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventPriceTimeType_47.getString());
    FIX::ComplexEventType ComplexEventType_47(7);
    noComplexEvents_0_0.set(ComplexEventType_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexEventType_47.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_47;
    ComplexOptPayoutAmount_47.setString("3232482");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_47);
    ComplexEvents_NoComplexEvents_47.insert(ComplexOptPayoutAmount_47.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_47);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_98;
      FIX::ComplexEventEndDate ComplexEventEndDate_98(FIX::UTCTIMESTAMP(20, 49, 20, 1, 10, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_98);
      ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventEndDate_98.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_98(FIX::UTCTIMESTAMP(9, 8, 40, 19, 12, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_98);
      ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventStartDate_98.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_98);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_208;
        FIX::ComplexEventEndTime ComplexEventEndTime_208(FIX::UTCTIMEONLY(3, 2, 55));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_208);
        ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventEndTime_208.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_208(FIX::UTCTIMEONLY(9, 43, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_208);
        ComplexEventTimes_NoComplexEventTimes_208.insert(ComplexEventStartTime_208.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_208);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_209;
        FIX::ComplexEventEndTime ComplexEventEndTime_209(FIX::UTCTIMEONLY(4, 32, 28));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_209);
        ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventEndTime_209.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_209(FIX::UTCTIMEONLY(18, 19, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_209);
        ComplexEventTimes_NoComplexEventTimes_209.insert(ComplexEventStartTime_209.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_209);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_99;
      FIX::ComplexEventEndDate ComplexEventEndDate_99(FIX::UTCTIMESTAMP(15, 36, 33, 8, 2, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_99);
      ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventEndDate_99.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_99(FIX::UTCTIMESTAMP(11, 4, 13, 10, 8, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_99);
      ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventStartDate_99.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_99);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_210;
        FIX::ComplexEventEndTime ComplexEventEndTime_210(FIX::UTCTIMEONLY(15, 43, 10));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_210);
        ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventEndTime_210.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_210(FIX::UTCTIMEONLY(20, 45, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_210);
        ComplexEventTimes_NoComplexEventTimes_210.insert(ComplexEventStartTime_210.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_210);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_211;
        FIX::ComplexEventEndTime ComplexEventEndTime_211(FIX::UTCTIMEONLY(2, 0, 38));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_211);
        ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventEndTime_211.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_211(FIX::UTCTIMEONLY(23, 57, 35));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_211);
        ComplexEventTimes_NoComplexEventTimes_211.insert(ComplexEventStartTime_211.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_211);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_40;
    FIX::EventDate EventDate_40("LOCALMKTDATE_1651413316");
    noEvents_0_0.set(EventDate_40);
    EvntGrp_NoEvents_40.insert(EventDate_40.getString());
    FIX::EventPx EventPx_40;
    EventPx_40.setString("10583007");
    noEvents_0_0.set(EventPx_40);
    EvntGrp_NoEvents_40.insert(EventPx_40.getString());
    FIX::EventText EventText_40("STRING_385435882");
    noEvents_0_0.set(EventText_40);
    EvntGrp_NoEvents_40.insert(EventText_40.getString());
    FIX::EventTime EventTime_40(FIX::UTCTIMESTAMP(13, 18, 5, 0, 3, 2010));
    noEvents_0_0.set(EventTime_40);
    EvntGrp_NoEvents_40.insert(EventTime_40.getString());
    FIX::EventType EventType_40(7);
    noEvents_0_0.set(EventType_40);
    EvntGrp_NoEvents_40.insert(EventType_40.getString());
    all_values.push_back(EvntGrp_NoEvents_40);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_41;
    FIX::EventDate EventDate_41("LOCALMKTDATE_467660017");
    noEvents_0_1.set(EventDate_41);
    EvntGrp_NoEvents_41.insert(EventDate_41.getString());
    FIX::EventPx EventPx_41;
    EventPx_41.setString("15450284");
    noEvents_0_1.set(EventPx_41);
    EvntGrp_NoEvents_41.insert(EventPx_41.getString());
    FIX::EventText EventText_41("STRING_1825533635");
    noEvents_0_1.set(EventText_41);
    EvntGrp_NoEvents_41.insert(EventText_41.getString());
    FIX::EventTime EventTime_41(FIX::UTCTIMESTAMP(18, 10, 1, 23, 8, 2017));
    noEvents_0_1.set(EventTime_41);
    EvntGrp_NoEvents_41.insert(EventTime_41.getString());
    FIX::EventType EventType_41(9);
    noEvents_0_1.set(EventType_41);
    EvntGrp_NoEvents_41.insert(EventType_41.getString());
    all_values.push_back(EvntGrp_NoEvents_41);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_42;
    FIX::EventDate EventDate_42("LOCALMKTDATE_132001516");
    noEvents_0_2.set(EventDate_42);
    EvntGrp_NoEvents_42.insert(EventDate_42.getString());
    FIX::EventPx EventPx_42;
    EventPx_42.setString("19416512");
    noEvents_0_2.set(EventPx_42);
    EvntGrp_NoEvents_42.insert(EventPx_42.getString());
    FIX::EventText EventText_42("STRING_333607700");
    noEvents_0_2.set(EventText_42);
    EvntGrp_NoEvents_42.insert(EventText_42.getString());
    FIX::EventTime EventTime_42(FIX::UTCTIMESTAMP(4, 55, 43, 23, 9, 2005));
    noEvents_0_2.set(EventTime_42);
    EvntGrp_NoEvents_42.insert(EventTime_42.getString());
    FIX::EventType EventType_42(8);
    noEvents_0_2.set(EventType_42);
    EvntGrp_NoEvents_42.insert(EventType_42.getString());
    all_values.push_back(EvntGrp_NoEvents_42);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_43;
    FIX::InstrumentPartyID InstrumentPartyID_43("STRING_1983417803");
    noInstrumentParties_0_0.set(InstrumentPartyID_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyID_43.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_43('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyIDSource_43.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_43(744645376);
    noInstrumentParties_0_0.set(InstrumentPartyRole_43);
    InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyRole_43.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_43);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99;
      FIX::InstrumentPartySubID InstrumentPartySubID_99("STRING_578017096");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_99);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubID_99.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_99(130447402);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_99);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubIDType_99.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100;
      FIX::InstrumentPartySubID InstrumentPartySubID_100("STRING_1875739111");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_100);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubID_100.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_100(1642130882);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_100);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubIDType_100.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101;
      FIX::InstrumentPartySubID InstrumentPartySubID_101("STRING_598107419");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_101);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubID_101.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_101(1273283890);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_101);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubIDType_101.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_47;
    FIX::SecurityAltID SecurityAltID_47("STRING_153683990");
    noSecurityAltID_0_0.set(SecurityAltID_47);
    SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltID_47.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_47("STRING_285665972");
    noSecurityAltID_0_0.set(SecurityAltIDSource_47);
    SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltIDSource_47.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_47);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_48;
    FIX::SecurityAltID SecurityAltID_48("STRING_1584792099");
    noSecurityAltID_0_1.set(SecurityAltID_48);
    SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltID_48.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_48("STRING_908238592");
    noSecurityAltID_0_1.set(SecurityAltIDSource_48);
    SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltIDSource_48.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_48);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_49;
    FIX::SecurityAltID SecurityAltID_49("STRING_60776252");
    noSecurityAltID_0_2.set(SecurityAltID_49);
    SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltID_49.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_49("STRING_210623078");
    noSecurityAltID_0_2.set(SecurityAltIDSource_49);
    SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltIDSource_49.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_49);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_44;
  FIX::SecurityXML SecurityXML_45("XMLDATA_1783452879");
  msg.set(SecurityXML_45);
  FIX::SecurityXMLLen SecurityXMLLen_22(820412100);
  msg.set(SecurityXMLLen_22);
  FIX::SecurityXMLSchema SecurityXMLSchema_22("STRING_342624595");
  msg.set(SecurityXMLSchema_22);
  SecurityXML_44.insert(SecurityXMLSchema_22.getString());
  all_values.push_back(SecurityXML_44);

  // OrderQtyData
  multiset<string> OrderQtyData_5;
  FIX::CashOrderQty CashOrderQty_5;
  CashOrderQty_5.setString("15776204");
  msg.set(CashOrderQty_5);
  OrderQtyData_5.insert(CashOrderQty_5.getString());
  FIX::OrderPercent OrderPercent_5;
  OrderPercent_5.setString("98.000000");
  msg.set(OrderPercent_5);
  OrderQtyData_5.insert(OrderPercent_5.getString());
  FIX::OrderQty OrderQty_13;
  OrderQty_13.setString("9552703");
  msg.set(OrderQty_13);
  OrderQtyData_5.insert(OrderQty_13.getString());
  FIX::RoundingDirection RoundingDirection_5('1');
  msg.set(RoundingDirection_5);
  OrderQtyData_5.insert(RoundingDirection_5.getString());
  FIX::RoundingModulus RoundingModulus_5;
  RoundingModulus_5.setString("17665543");
  msg.set(RoundingModulus_5);
  OrderQtyData_5.insert(RoundingModulus_5.getString());
  all_values.push_back(OrderQtyData_5);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_36;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_36("DATA_1210604660");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuer_36.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_36(117216652);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuerLen_36.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_36("DATA_1241224044");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDesc_36.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_36(1178451879);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDescLen_36.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_36;
    UnderlyingAdjustedQuantity_36.setString("10007984");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_36);
    UnderlyingInstrument_36.insert(UnderlyingAdjustedQuantity_36.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_36;
    UnderlyingAllocationPercent_36.setString("82.000000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_36);
    UnderlyingInstrument_36.insert(UnderlyingAllocationPercent_36.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_36;
    UnderlyingAttachmentPoint_36.setString("24.710000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingAttachmentPoint_36.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_36("STRING_1745443814");
    noUnderlyings_0_0.set(UnderlyingCFICode_36);
    UnderlyingInstrument_36.insert(UnderlyingCFICode_36.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_36("STRING_378211192");
    noUnderlyings_0_0.set(UnderlyingCPProgram_36);
    UnderlyingInstrument_36.insert(UnderlyingCPProgram_36.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_36("STRING_1063999567");
    noUnderlyings_0_0.set(UnderlyingCPRegType_36);
    UnderlyingInstrument_36.insert(UnderlyingCPRegType_36.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_36;
    UnderlyingCapValue_36.setString("18758912");
    noUnderlyings_0_0.set(UnderlyingCapValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCapValue_36.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_36;
    UnderlyingCashAmount_36.setString("1064666");
    noUnderlyings_0_0.set(UnderlyingCashAmount_36);
    UnderlyingInstrument_36.insert(UnderlyingCashAmount_36.getString());
    FIX::UnderlyingCashType UnderlyingCashType_36("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_36);
    UnderlyingInstrument_36.insert(UnderlyingCashType_36.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_36;
    UnderlyingContractMultiplier_36.setString("3265149");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplier_36.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_36(1379750545);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplierUnit_36.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_36("COUNTRY_1878827670");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingCountryOfIssue_36.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_36("LOCALMKTDATE_480198977");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponPaymentDate_36.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_36;
    UnderlyingCouponRate_36.setString("65.180000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponRate_36.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_36("STRING_1316136121");
    noUnderlyings_0_0.set(UnderlyingCreditRating_36);
    UnderlyingInstrument_36.insert(UnderlyingCreditRating_36.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_36("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrency_36.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_36;
    UnderlyingCurrentValue_36.setString("15267592");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrentValue_36.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_36;
    UnderlyingDetachmentPoint_36.setString("68.000000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingDetachmentPoint_36.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_36;
    UnderlyingDirtyPrice_36.setString("3991212");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingDirtyPrice_36.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_36;
    UnderlyingEndPrice_36.setString("18693837");
    noUnderlyings_0_0.set(UnderlyingEndPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingEndPrice_36.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_36;
    UnderlyingEndValue_36.setString("4545436");
    noUnderlyings_0_0.set(UnderlyingEndValue_36);
    UnderlyingInstrument_36.insert(UnderlyingEndValue_36.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_36(1553141022);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_36);
    UnderlyingInstrument_36.insert(UnderlyingExerciseStyle_36.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_36;
    UnderlyingFXRate_36.setString("6771705");
    noUnderlyings_0_0.set(UnderlyingFXRate_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRate_36.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_36('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRateCalc_36.getString());
    FIX::UnderlyingFactor UnderlyingFactor_36;
    UnderlyingFactor_36.setString("11722117");
    noUnderlyings_0_0.set(UnderlyingFactor_36);
    UnderlyingInstrument_36.insert(UnderlyingFactor_36.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_36(2023452889);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_36);
    UnderlyingInstrument_36.insert(UnderlyingFlowScheduleType_36.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_36("STRING_1818722849");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_36);
    UnderlyingInstrument_36.insert(UnderlyingInstrRegistry_36.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_36("LOCALMKTDATE_1289428422");
    noUnderlyings_0_0.set(UnderlyingIssueDate_36);
    UnderlyingInstrument_36.insert(UnderlyingIssueDate_36.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_36("STRING_1117193286");
    noUnderlyings_0_0.set(UnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(UnderlyingIssuer_36.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_36("STRING_849691080");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingLocaleOfIssue_36.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_36("LOCALMKTDATE_142743212");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityDate_36.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_36("MONTHYEAR_46867838");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityMonthYear_36.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_36("TZTIMEONLY_1335673551");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityTime_36.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_36;
    UnderlyingNotionalPercentageOutstanding_36.setString("70.260000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_36('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_36);
    UnderlyingInstrument_36.insert(UnderlyingOptAttribute_36.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_36;
    UnderlyingOriginalNotionalPercentageOutstanding_36.setString("94.700000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingOriginalNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_36("STRING_1616594594");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasure_36.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_36;
    UnderlyingPriceUnitOfMeasureQty_36.setString("5315456");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasureQty_36.getString());
    FIX::UnderlyingProduct UnderlyingProduct_36(810836271);
    noUnderlyings_0_0.set(UnderlyingProduct_36);
    UnderlyingInstrument_36.insert(UnderlyingProduct_36.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_36(1943109581);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_36);
    UnderlyingInstrument_36.insert(UnderlyingPutOrCall_36.getString());
    FIX::UnderlyingPx UnderlyingPx_36;
    UnderlyingPx_36.setString("19112962");
    noUnderlyings_0_0.set(UnderlyingPx_36);
    UnderlyingInstrument_36.insert(UnderlyingPx_36.getString());
    FIX::UnderlyingQty UnderlyingQty_36;
    UnderlyingQty_36.setString("5421802");
    noUnderlyings_0_0.set(UnderlyingQty_36);
    UnderlyingInstrument_36.insert(UnderlyingQty_36.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_36("LOCALMKTDATE_275824911");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_36);
    UnderlyingInstrument_36.insert(UnderlyingRedemptionDate_36.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_36("STRING_1429229101");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingRepoCollateralSecurityType_36.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_36;
    UnderlyingRepurchaseRate_36.setString("64.140000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseRate_36.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_36(1664262480);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseTerm_36.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_36("STRING_1007938223");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_36);
    UnderlyingInstrument_36.insert(UnderlyingRestructuringType_36.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_36("STRING_1237591966");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityDesc_36.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_36("EXCHANGE_541185633");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityExchange_36.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_36("STRING_1407059445");
    noUnderlyings_0_0.set(UnderlyingSecurityID_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityID_36.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_36("STRING_959492113");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityIDSource_36.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_36("STRING_995729257");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecuritySubType_36.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_36("STRING_812716820");
    noUnderlyings_0_0.set(UnderlyingSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityType_36.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_36("STRING_1636662630");
    noUnderlyings_0_0.set(UnderlyingSeniority_36);
    UnderlyingInstrument_36.insert(UnderlyingSeniority_36.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_36("STRING_1603847446");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlMethod_36.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_36(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlementType_36.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_36;
    UnderlyingStartValue_36.setString("15126318");
    noUnderlyings_0_0.set(UnderlyingStartValue_36);
    UnderlyingInstrument_36.insert(UnderlyingStartValue_36.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_36("STRING_1275086647");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingStateOrProvinceOfIssue_36.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_36("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikeCurrency_36.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_36;
    UnderlyingStrikePrice_36.setString("21247777");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikePrice_36.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_36("STRING_1269616577");
    noUnderlyings_0_0.set(UnderlyingSymbol_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbol_36.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_36("STRING_529209347");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbolSfx_36.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_36("STRING_1312967630");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingTimeUnit_36.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_36("STRING_1010319956");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasure_36.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_36;
    UnderlyingUnitOfMeasureQty_36.setString("9542883");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasureQty_36.getString());
    all_values.push_back(UnderlyingInstrument_36);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_78;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_78("STRING_479430902");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltID_78.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_78("STRING_1485834064");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltIDSource_78.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_79;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_79("STRING_228509723");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_79);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltID_79.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_79("STRING_275056836");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_79);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltIDSource_79.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_69;
      FIX::UnderlyingStipType UnderlyingStipType_69("STRING_770690016");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipType_69.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_69("STRING_550881747");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipValue_69.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_69);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_70;
      FIX::UnderlyingStipType UnderlyingStipType_70("STRING_531392101");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipType_70.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_70("STRING_481522783");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipValue_70.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_70);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_72;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_72("STRING_1539330324");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyID_72.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_72('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyIDSource_72.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_72(608846212);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyRole_72.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_72);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_153("STRING_531123215");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_153);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubID_153.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_153(1604575470);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_153);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubIDType_153.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_154("STRING_1611622942");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_154);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubID_154.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_154(20302197);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_154);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubIDType_154.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_155("STRING_1060939268");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_155);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubID_155.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_155(1449067884);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_155);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubIDType_155.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_73;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_73("STRING_1532934068");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyID_73.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_73('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyIDSource_73.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_73(428457601);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyRole_73.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_73);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_156("STRING_165836347");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_156);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubID_156.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_156(1698074179);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_156);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubIDType_156.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
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
