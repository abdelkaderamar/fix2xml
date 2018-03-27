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
  FIX::DKReason DKReason_0('D');
  msg.set(DKReason_0);
  DontKnowTrade_0.insert(DKReason_0.getString());
  FIX::EncodedText EncodedText_33("DATA_1418829844");
  msg.set(EncodedText_33);
  DontKnowTrade_0.insert(EncodedText_33.getString());
  FIX::EncodedTextLen EncodedTextLen_33(1189043624);
  msg.set(EncodedTextLen_33);
  DontKnowTrade_0.insert(EncodedTextLen_33.getString());
  FIX::ExecID ExecID_19("STRING_29857105");
  msg.set(ExecID_19);
  DontKnowTrade_0.insert(ExecID_19.getString());
  FIX::LastPx LastPx_8;
  LastPx_8.setString("12148711");
  msg.set(LastPx_8);
  DontKnowTrade_0.insert(LastPx_8.getString());
  FIX::LastQty LastQty_8;
  LastQty_8.setString("13482060");
  msg.set(LastQty_8);
  DontKnowTrade_0.insert(LastQty_8.getString());
  FIX::OrderID OrderID_17("STRING_118136153");
  msg.set(OrderID_17);
  DontKnowTrade_0.insert(OrderID_17.getString());
  FIX::SecondaryOrderID SecondaryOrderID_15("STRING_114775052");
  msg.set(SecondaryOrderID_15);
  DontKnowTrade_0.insert(SecondaryOrderID_15.getString());
  FIX::Side Side_17('9');
  msg.set(Side_17);
  DontKnowTrade_0.insert(Side_17.getString());
  FIX::Text Text_33("STRING_2067623767");
  msg.set(Text_33);
  DontKnowTrade_0.insert(Text_33.getString());
  all_values.push_back(DontKnowTrade_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_34;
    FIX::EncodedLegIssuer EncodedLegIssuer_34("DATA_534838598");
    noLegs_0_0.set(EncodedLegIssuer_34);
    InstrumentLeg_34.insert(EncodedLegIssuer_34.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_34(2142182247);
    noLegs_0_0.set(EncodedLegIssuerLen_34);
    InstrumentLeg_34.insert(EncodedLegIssuerLen_34.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_34("DATA_1704126231");
    noLegs_0_0.set(EncodedLegSecurityDesc_34);
    InstrumentLeg_34.insert(EncodedLegSecurityDesc_34.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_34(553501005);
    noLegs_0_0.set(EncodedLegSecurityDescLen_34);
    InstrumentLeg_34.insert(EncodedLegSecurityDescLen_34.getString());
    FIX::LegCFICode LegCFICode_34("STRING_406410757");
    noLegs_0_0.set(LegCFICode_34);
    InstrumentLeg_34.insert(LegCFICode_34.getString());
    FIX::LegContractMultiplier LegContractMultiplier_34;
    LegContractMultiplier_34.setString("1365361");
    noLegs_0_0.set(LegContractMultiplier_34);
    InstrumentLeg_34.insert(LegContractMultiplier_34.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_34(482503778);
    noLegs_0_0.set(LegContractMultiplierUnit_34);
    InstrumentLeg_34.insert(LegContractMultiplierUnit_34.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_34("MONTHYEAR_2082713952");
    noLegs_0_0.set(LegContractSettlMonth_34);
    InstrumentLeg_34.insert(LegContractSettlMonth_34.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_34("COUNTRY_1426873686");
    noLegs_0_0.set(LegCountryOfIssue_34);
    InstrumentLeg_34.insert(LegCountryOfIssue_34.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_34("LOCALMKTDATE_460231296");
    noLegs_0_0.set(LegCouponPaymentDate_34);
    InstrumentLeg_34.insert(LegCouponPaymentDate_34.getString());
    FIX::LegCouponRate LegCouponRate_34;
    LegCouponRate_34.setString("51.140000");
    noLegs_0_0.set(LegCouponRate_34);
    InstrumentLeg_34.insert(LegCouponRate_34.getString());
    FIX::LegCreditRating LegCreditRating_34("STRING_1015066135");
    noLegs_0_0.set(LegCreditRating_34);
    InstrumentLeg_34.insert(LegCreditRating_34.getString());
    FIX::LegCurrency LegCurrency_34("CAN");
    noLegs_0_0.set(LegCurrency_34);
    InstrumentLeg_34.insert(LegCurrency_34.getString());
    FIX::LegDatedDate LegDatedDate_34("LOCALMKTDATE_972356488");
    noLegs_0_0.set(LegDatedDate_34);
    InstrumentLeg_34.insert(LegDatedDate_34.getString());
    FIX::LegExerciseStyle LegExerciseStyle_34(1456916391);
    noLegs_0_0.set(LegExerciseStyle_34);
    InstrumentLeg_34.insert(LegExerciseStyle_34.getString());
    FIX::LegFactor LegFactor_34;
    LegFactor_34.setString("568604");
    noLegs_0_0.set(LegFactor_34);
    InstrumentLeg_34.insert(LegFactor_34.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_34(103665404);
    noLegs_0_0.set(LegFlowScheduleType_34);
    InstrumentLeg_34.insert(LegFlowScheduleType_34.getString());
    FIX::LegInstrRegistry LegInstrRegistry_34("STRING_558036251");
    noLegs_0_0.set(LegInstrRegistry_34);
    InstrumentLeg_34.insert(LegInstrRegistry_34.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_34("LOCALMKTDATE_1917250292");
    noLegs_0_0.set(LegInterestAccrualDate_34);
    InstrumentLeg_34.insert(LegInterestAccrualDate_34.getString());
    FIX::LegIssueDate LegIssueDate_34("LOCALMKTDATE_1372912947");
    noLegs_0_0.set(LegIssueDate_34);
    InstrumentLeg_34.insert(LegIssueDate_34.getString());
    FIX::LegIssuer LegIssuer_34("STRING_1976866096");
    noLegs_0_0.set(LegIssuer_34);
    InstrumentLeg_34.insert(LegIssuer_34.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_34("STRING_958810268");
    noLegs_0_0.set(LegLocaleOfIssue_34);
    InstrumentLeg_34.insert(LegLocaleOfIssue_34.getString());
    FIX::LegMaturityDate LegMaturityDate_34("LOCALMKTDATE_1402770052");
    noLegs_0_0.set(LegMaturityDate_34);
    InstrumentLeg_34.insert(LegMaturityDate_34.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_34("MONTHYEAR_1044253637");
    noLegs_0_0.set(LegMaturityMonthYear_34);
    InstrumentLeg_34.insert(LegMaturityMonthYear_34.getString());
    FIX::LegMaturityTime LegMaturityTime_34("TZTIMEONLY_159532718");
    noLegs_0_0.set(LegMaturityTime_34);
    InstrumentLeg_34.insert(LegMaturityTime_34.getString());
    FIX::LegOptAttribute LegOptAttribute_34('1');
    noLegs_0_0.set(LegOptAttribute_34);
    InstrumentLeg_34.insert(LegOptAttribute_34.getString());
    FIX::LegOptionRatio LegOptionRatio_34;
    LegOptionRatio_34.setString("11590286");
    noLegs_0_0.set(LegOptionRatio_34);
    InstrumentLeg_34.insert(LegOptionRatio_34.getString());
    FIX::LegPool LegPool_34("STRING_667180967");
    noLegs_0_0.set(LegPool_34);
    InstrumentLeg_34.insert(LegPool_34.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_34("STRING_1441046325");
    noLegs_0_0.set(LegPriceUnitOfMeasure_34);
    InstrumentLeg_34.insert(LegPriceUnitOfMeasure_34.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_34;
    LegPriceUnitOfMeasureQty_34.setString("5337665");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_34);
    InstrumentLeg_34.insert(LegPriceUnitOfMeasureQty_34.getString());
    FIX::LegProduct LegProduct_34(1202019565);
    noLegs_0_0.set(LegProduct_34);
    InstrumentLeg_34.insert(LegProduct_34.getString());
    FIX::LegPutOrCall LegPutOrCall_34(1435744924);
    noLegs_0_0.set(LegPutOrCall_34);
    InstrumentLeg_34.insert(LegPutOrCall_34.getString());
    FIX::LegRatioQty LegRatioQty_34;
    LegRatioQty_34.setString("904091");
    noLegs_0_0.set(LegRatioQty_34);
    InstrumentLeg_34.insert(LegRatioQty_34.getString());
    FIX::LegRedemptionDate LegRedemptionDate_34("LOCALMKTDATE_1755520570");
    noLegs_0_0.set(LegRedemptionDate_34);
    InstrumentLeg_34.insert(LegRedemptionDate_34.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_34("STRING_1842155681");
    noLegs_0_0.set(LegRepoCollateralSecurityType_34);
    InstrumentLeg_34.insert(LegRepoCollateralSecurityType_34.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_34;
    LegRepurchaseRate_34.setString("53.250000");
    noLegs_0_0.set(LegRepurchaseRate_34);
    InstrumentLeg_34.insert(LegRepurchaseRate_34.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_34(90540701);
    noLegs_0_0.set(LegRepurchaseTerm_34);
    InstrumentLeg_34.insert(LegRepurchaseTerm_34.getString());
    FIX::LegSecurityDesc LegSecurityDesc_34("STRING_1777385985");
    noLegs_0_0.set(LegSecurityDesc_34);
    InstrumentLeg_34.insert(LegSecurityDesc_34.getString());
    FIX::LegSecurityExchange LegSecurityExchange_34("EXCHANGE_1653819012");
    noLegs_0_0.set(LegSecurityExchange_34);
    InstrumentLeg_34.insert(LegSecurityExchange_34.getString());
    FIX::LegSecurityID LegSecurityID_34("STRING_550771997");
    noLegs_0_0.set(LegSecurityID_34);
    InstrumentLeg_34.insert(LegSecurityID_34.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_34("STRING_1318357451");
    noLegs_0_0.set(LegSecurityIDSource_34);
    InstrumentLeg_34.insert(LegSecurityIDSource_34.getString());
    FIX::LegSecuritySubType LegSecuritySubType_34("STRING_521401499");
    noLegs_0_0.set(LegSecuritySubType_34);
    InstrumentLeg_34.insert(LegSecuritySubType_34.getString());
    FIX::LegSecurityType LegSecurityType_34("STRING_817491097");
    noLegs_0_0.set(LegSecurityType_34);
    InstrumentLeg_34.insert(LegSecurityType_34.getString());
    FIX::LegSide LegSide_34('1');
    noLegs_0_0.set(LegSide_34);
    InstrumentLeg_34.insert(LegSide_34.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_34("STRING_1493757988");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_34);
    InstrumentLeg_34.insert(LegStateOrProvinceOfIssue_34.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_34("JPY");
    noLegs_0_0.set(LegStrikeCurrency_34);
    InstrumentLeg_34.insert(LegStrikeCurrency_34.getString());
    FIX::LegStrikePrice LegStrikePrice_34;
    LegStrikePrice_34.setString("15974233");
    noLegs_0_0.set(LegStrikePrice_34);
    InstrumentLeg_34.insert(LegStrikePrice_34.getString());
    FIX::LegSymbol LegSymbol_34("STRING_684960091");
    noLegs_0_0.set(LegSymbol_34);
    InstrumentLeg_34.insert(LegSymbol_34.getString());
    FIX::LegSymbolSfx LegSymbolSfx_34("STRING_1047797992");
    noLegs_0_0.set(LegSymbolSfx_34);
    InstrumentLeg_34.insert(LegSymbolSfx_34.getString());
    FIX::LegTimeUnit LegTimeUnit_34("STRING_822852691");
    noLegs_0_0.set(LegTimeUnit_34);
    InstrumentLeg_34.insert(LegTimeUnit_34.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_34("STRING_514342539");
    noLegs_0_0.set(LegUnitOfMeasure_34);
    InstrumentLeg_34.insert(LegUnitOfMeasure_34.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_34;
    LegUnitOfMeasureQty_34.setString("20066082");
    noLegs_0_0.set(LegUnitOfMeasureQty_34);
    InstrumentLeg_34.insert(LegUnitOfMeasureQty_34.getString());
    all_values.push_back(InstrumentLeg_34);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_58;
      FIX::LegSecurityAltID LegSecurityAltID_58("STRING_1558596177");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_58);
      LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltID_58.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_58("STRING_18657331");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_58);
      LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltIDSource_58.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_58);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_35;
    FIX::EncodedLegIssuer EncodedLegIssuer_35("DATA_1599045301");
    noLegs_0_1.set(EncodedLegIssuer_35);
    InstrumentLeg_35.insert(EncodedLegIssuer_35.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_35(570141219);
    noLegs_0_1.set(EncodedLegIssuerLen_35);
    InstrumentLeg_35.insert(EncodedLegIssuerLen_35.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_35("DATA_685838298");
    noLegs_0_1.set(EncodedLegSecurityDesc_35);
    InstrumentLeg_35.insert(EncodedLegSecurityDesc_35.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_35(892607978);
    noLegs_0_1.set(EncodedLegSecurityDescLen_35);
    InstrumentLeg_35.insert(EncodedLegSecurityDescLen_35.getString());
    FIX::LegCFICode LegCFICode_35("STRING_1103907788");
    noLegs_0_1.set(LegCFICode_35);
    InstrumentLeg_35.insert(LegCFICode_35.getString());
    FIX::LegContractMultiplier LegContractMultiplier_35;
    LegContractMultiplier_35.setString("18878578");
    noLegs_0_1.set(LegContractMultiplier_35);
    InstrumentLeg_35.insert(LegContractMultiplier_35.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_35(180869254);
    noLegs_0_1.set(LegContractMultiplierUnit_35);
    InstrumentLeg_35.insert(LegContractMultiplierUnit_35.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_35("MONTHYEAR_1194316940");
    noLegs_0_1.set(LegContractSettlMonth_35);
    InstrumentLeg_35.insert(LegContractSettlMonth_35.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_35("COUNTRY_1495894786");
    noLegs_0_1.set(LegCountryOfIssue_35);
    InstrumentLeg_35.insert(LegCountryOfIssue_35.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_35("LOCALMKTDATE_2023024935");
    noLegs_0_1.set(LegCouponPaymentDate_35);
    InstrumentLeg_35.insert(LegCouponPaymentDate_35.getString());
    FIX::LegCouponRate LegCouponRate_35;
    LegCouponRate_35.setString("22.650000");
    noLegs_0_1.set(LegCouponRate_35);
    InstrumentLeg_35.insert(LegCouponRate_35.getString());
    FIX::LegCreditRating LegCreditRating_35("STRING_1586435487");
    noLegs_0_1.set(LegCreditRating_35);
    InstrumentLeg_35.insert(LegCreditRating_35.getString());
    FIX::LegCurrency LegCurrency_35("CAN");
    noLegs_0_1.set(LegCurrency_35);
    InstrumentLeg_35.insert(LegCurrency_35.getString());
    FIX::LegDatedDate LegDatedDate_35("LOCALMKTDATE_2137207484");
    noLegs_0_1.set(LegDatedDate_35);
    InstrumentLeg_35.insert(LegDatedDate_35.getString());
    FIX::LegExerciseStyle LegExerciseStyle_35(823801076);
    noLegs_0_1.set(LegExerciseStyle_35);
    InstrumentLeg_35.insert(LegExerciseStyle_35.getString());
    FIX::LegFactor LegFactor_35;
    LegFactor_35.setString("14489991");
    noLegs_0_1.set(LegFactor_35);
    InstrumentLeg_35.insert(LegFactor_35.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_35(807214933);
    noLegs_0_1.set(LegFlowScheduleType_35);
    InstrumentLeg_35.insert(LegFlowScheduleType_35.getString());
    FIX::LegInstrRegistry LegInstrRegistry_35("STRING_2044971952");
    noLegs_0_1.set(LegInstrRegistry_35);
    InstrumentLeg_35.insert(LegInstrRegistry_35.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_35("LOCALMKTDATE_795273469");
    noLegs_0_1.set(LegInterestAccrualDate_35);
    InstrumentLeg_35.insert(LegInterestAccrualDate_35.getString());
    FIX::LegIssueDate LegIssueDate_35("LOCALMKTDATE_934138773");
    noLegs_0_1.set(LegIssueDate_35);
    InstrumentLeg_35.insert(LegIssueDate_35.getString());
    FIX::LegIssuer LegIssuer_35("STRING_1175519653");
    noLegs_0_1.set(LegIssuer_35);
    InstrumentLeg_35.insert(LegIssuer_35.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_35("STRING_245213213");
    noLegs_0_1.set(LegLocaleOfIssue_35);
    InstrumentLeg_35.insert(LegLocaleOfIssue_35.getString());
    FIX::LegMaturityDate LegMaturityDate_35("LOCALMKTDATE_1619098864");
    noLegs_0_1.set(LegMaturityDate_35);
    InstrumentLeg_35.insert(LegMaturityDate_35.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_35("MONTHYEAR_75833997");
    noLegs_0_1.set(LegMaturityMonthYear_35);
    InstrumentLeg_35.insert(LegMaturityMonthYear_35.getString());
    FIX::LegMaturityTime LegMaturityTime_35("TZTIMEONLY_1068065905");
    noLegs_0_1.set(LegMaturityTime_35);
    InstrumentLeg_35.insert(LegMaturityTime_35.getString());
    FIX::LegOptAttribute LegOptAttribute_35('2');
    noLegs_0_1.set(LegOptAttribute_35);
    InstrumentLeg_35.insert(LegOptAttribute_35.getString());
    FIX::LegOptionRatio LegOptionRatio_35;
    LegOptionRatio_35.setString("20824422");
    noLegs_0_1.set(LegOptionRatio_35);
    InstrumentLeg_35.insert(LegOptionRatio_35.getString());
    FIX::LegPool LegPool_35("STRING_1146205000");
    noLegs_0_1.set(LegPool_35);
    InstrumentLeg_35.insert(LegPool_35.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_35("STRING_1544553933");
    noLegs_0_1.set(LegPriceUnitOfMeasure_35);
    InstrumentLeg_35.insert(LegPriceUnitOfMeasure_35.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_35;
    LegPriceUnitOfMeasureQty_35.setString("21010995");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_35);
    InstrumentLeg_35.insert(LegPriceUnitOfMeasureQty_35.getString());
    FIX::LegProduct LegProduct_35(597766653);
    noLegs_0_1.set(LegProduct_35);
    InstrumentLeg_35.insert(LegProduct_35.getString());
    FIX::LegPutOrCall LegPutOrCall_35(2114695152);
    noLegs_0_1.set(LegPutOrCall_35);
    InstrumentLeg_35.insert(LegPutOrCall_35.getString());
    FIX::LegRatioQty LegRatioQty_35;
    LegRatioQty_35.setString("6394542");
    noLegs_0_1.set(LegRatioQty_35);
    InstrumentLeg_35.insert(LegRatioQty_35.getString());
    FIX::LegRedemptionDate LegRedemptionDate_35("LOCALMKTDATE_1490374631");
    noLegs_0_1.set(LegRedemptionDate_35);
    InstrumentLeg_35.insert(LegRedemptionDate_35.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_35("STRING_1071119292");
    noLegs_0_1.set(LegRepoCollateralSecurityType_35);
    InstrumentLeg_35.insert(LegRepoCollateralSecurityType_35.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_35;
    LegRepurchaseRate_35.setString("84.540000");
    noLegs_0_1.set(LegRepurchaseRate_35);
    InstrumentLeg_35.insert(LegRepurchaseRate_35.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_35(1671243885);
    noLegs_0_1.set(LegRepurchaseTerm_35);
    InstrumentLeg_35.insert(LegRepurchaseTerm_35.getString());
    FIX::LegSecurityDesc LegSecurityDesc_35("STRING_117952584");
    noLegs_0_1.set(LegSecurityDesc_35);
    InstrumentLeg_35.insert(LegSecurityDesc_35.getString());
    FIX::LegSecurityExchange LegSecurityExchange_35("EXCHANGE_1875723240");
    noLegs_0_1.set(LegSecurityExchange_35);
    InstrumentLeg_35.insert(LegSecurityExchange_35.getString());
    FIX::LegSecurityID LegSecurityID_35("STRING_1546785172");
    noLegs_0_1.set(LegSecurityID_35);
    InstrumentLeg_35.insert(LegSecurityID_35.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_35("STRING_1539214849");
    noLegs_0_1.set(LegSecurityIDSource_35);
    InstrumentLeg_35.insert(LegSecurityIDSource_35.getString());
    FIX::LegSecuritySubType LegSecuritySubType_35("STRING_1314675079");
    noLegs_0_1.set(LegSecuritySubType_35);
    InstrumentLeg_35.insert(LegSecuritySubType_35.getString());
    FIX::LegSecurityType LegSecurityType_35("STRING_1052228797");
    noLegs_0_1.set(LegSecurityType_35);
    InstrumentLeg_35.insert(LegSecurityType_35.getString());
    FIX::LegSide LegSide_35('3');
    noLegs_0_1.set(LegSide_35);
    InstrumentLeg_35.insert(LegSide_35.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_35("STRING_1304398915");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_35);
    InstrumentLeg_35.insert(LegStateOrProvinceOfIssue_35.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_35("JPY");
    noLegs_0_1.set(LegStrikeCurrency_35);
    InstrumentLeg_35.insert(LegStrikeCurrency_35.getString());
    FIX::LegStrikePrice LegStrikePrice_35;
    LegStrikePrice_35.setString("21116138");
    noLegs_0_1.set(LegStrikePrice_35);
    InstrumentLeg_35.insert(LegStrikePrice_35.getString());
    FIX::LegSymbol LegSymbol_35("STRING_1773518177");
    noLegs_0_1.set(LegSymbol_35);
    InstrumentLeg_35.insert(LegSymbol_35.getString());
    FIX::LegSymbolSfx LegSymbolSfx_35("STRING_416117781");
    noLegs_0_1.set(LegSymbolSfx_35);
    InstrumentLeg_35.insert(LegSymbolSfx_35.getString());
    FIX::LegTimeUnit LegTimeUnit_35("STRING_898268973");
    noLegs_0_1.set(LegTimeUnit_35);
    InstrumentLeg_35.insert(LegTimeUnit_35.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_35("STRING_801554182");
    noLegs_0_1.set(LegUnitOfMeasure_35);
    InstrumentLeg_35.insert(LegUnitOfMeasure_35.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_35;
    LegUnitOfMeasureQty_35.setString("6613309");
    noLegs_0_1.set(LegUnitOfMeasureQty_35);
    InstrumentLeg_35.insert(LegUnitOfMeasureQty_35.getString());
    all_values.push_back(InstrumentLeg_35);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_59;
      FIX::LegSecurityAltID LegSecurityAltID_59("STRING_877388180");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_59);
      LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltID_59.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_59("STRING_1729396899");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_59);
      LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltIDSource_59.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_59);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_36;
    FIX::EncodedLegIssuer EncodedLegIssuer_36("DATA_355841946");
    noLegs_0_2.set(EncodedLegIssuer_36);
    InstrumentLeg_36.insert(EncodedLegIssuer_36.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_36(812346790);
    noLegs_0_2.set(EncodedLegIssuerLen_36);
    InstrumentLeg_36.insert(EncodedLegIssuerLen_36.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_36("DATA_728118252");
    noLegs_0_2.set(EncodedLegSecurityDesc_36);
    InstrumentLeg_36.insert(EncodedLegSecurityDesc_36.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_36(1900395879);
    noLegs_0_2.set(EncodedLegSecurityDescLen_36);
    InstrumentLeg_36.insert(EncodedLegSecurityDescLen_36.getString());
    FIX::LegCFICode LegCFICode_36("STRING_765962731");
    noLegs_0_2.set(LegCFICode_36);
    InstrumentLeg_36.insert(LegCFICode_36.getString());
    FIX::LegContractMultiplier LegContractMultiplier_36;
    LegContractMultiplier_36.setString("13258849");
    noLegs_0_2.set(LegContractMultiplier_36);
    InstrumentLeg_36.insert(LegContractMultiplier_36.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_36(1867607383);
    noLegs_0_2.set(LegContractMultiplierUnit_36);
    InstrumentLeg_36.insert(LegContractMultiplierUnit_36.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_36("MONTHYEAR_1405416970");
    noLegs_0_2.set(LegContractSettlMonth_36);
    InstrumentLeg_36.insert(LegContractSettlMonth_36.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_36("COUNTRY_668775889");
    noLegs_0_2.set(LegCountryOfIssue_36);
    InstrumentLeg_36.insert(LegCountryOfIssue_36.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_36("LOCALMKTDATE_791243027");
    noLegs_0_2.set(LegCouponPaymentDate_36);
    InstrumentLeg_36.insert(LegCouponPaymentDate_36.getString());
    FIX::LegCouponRate LegCouponRate_36;
    LegCouponRate_36.setString("54.240000");
    noLegs_0_2.set(LegCouponRate_36);
    InstrumentLeg_36.insert(LegCouponRate_36.getString());
    FIX::LegCreditRating LegCreditRating_36("STRING_192536126");
    noLegs_0_2.set(LegCreditRating_36);
    InstrumentLeg_36.insert(LegCreditRating_36.getString());
    FIX::LegCurrency LegCurrency_36("CAN");
    noLegs_0_2.set(LegCurrency_36);
    InstrumentLeg_36.insert(LegCurrency_36.getString());
    FIX::LegDatedDate LegDatedDate_36("LOCALMKTDATE_1739321299");
    noLegs_0_2.set(LegDatedDate_36);
    InstrumentLeg_36.insert(LegDatedDate_36.getString());
    FIX::LegExerciseStyle LegExerciseStyle_36(300926812);
    noLegs_0_2.set(LegExerciseStyle_36);
    InstrumentLeg_36.insert(LegExerciseStyle_36.getString());
    FIX::LegFactor LegFactor_36;
    LegFactor_36.setString("6806764");
    noLegs_0_2.set(LegFactor_36);
    InstrumentLeg_36.insert(LegFactor_36.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_36(644066448);
    noLegs_0_2.set(LegFlowScheduleType_36);
    InstrumentLeg_36.insert(LegFlowScheduleType_36.getString());
    FIX::LegInstrRegistry LegInstrRegistry_36("STRING_620255643");
    noLegs_0_2.set(LegInstrRegistry_36);
    InstrumentLeg_36.insert(LegInstrRegistry_36.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_36("LOCALMKTDATE_1985075364");
    noLegs_0_2.set(LegInterestAccrualDate_36);
    InstrumentLeg_36.insert(LegInterestAccrualDate_36.getString());
    FIX::LegIssueDate LegIssueDate_36("LOCALMKTDATE_372612673");
    noLegs_0_2.set(LegIssueDate_36);
    InstrumentLeg_36.insert(LegIssueDate_36.getString());
    FIX::LegIssuer LegIssuer_36("STRING_241099955");
    noLegs_0_2.set(LegIssuer_36);
    InstrumentLeg_36.insert(LegIssuer_36.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_36("STRING_1949205564");
    noLegs_0_2.set(LegLocaleOfIssue_36);
    InstrumentLeg_36.insert(LegLocaleOfIssue_36.getString());
    FIX::LegMaturityDate LegMaturityDate_36("LOCALMKTDATE_2146130850");
    noLegs_0_2.set(LegMaturityDate_36);
    InstrumentLeg_36.insert(LegMaturityDate_36.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_36("MONTHYEAR_657217736");
    noLegs_0_2.set(LegMaturityMonthYear_36);
    InstrumentLeg_36.insert(LegMaturityMonthYear_36.getString());
    FIX::LegMaturityTime LegMaturityTime_36("TZTIMEONLY_699990890");
    noLegs_0_2.set(LegMaturityTime_36);
    InstrumentLeg_36.insert(LegMaturityTime_36.getString());
    FIX::LegOptAttribute LegOptAttribute_36('8');
    noLegs_0_2.set(LegOptAttribute_36);
    InstrumentLeg_36.insert(LegOptAttribute_36.getString());
    FIX::LegOptionRatio LegOptionRatio_36;
    LegOptionRatio_36.setString("13185487");
    noLegs_0_2.set(LegOptionRatio_36);
    InstrumentLeg_36.insert(LegOptionRatio_36.getString());
    FIX::LegPool LegPool_36("STRING_1069875080");
    noLegs_0_2.set(LegPool_36);
    InstrumentLeg_36.insert(LegPool_36.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_36("STRING_1677589565");
    noLegs_0_2.set(LegPriceUnitOfMeasure_36);
    InstrumentLeg_36.insert(LegPriceUnitOfMeasure_36.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_36;
    LegPriceUnitOfMeasureQty_36.setString("9004619");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_36);
    InstrumentLeg_36.insert(LegPriceUnitOfMeasureQty_36.getString());
    FIX::LegProduct LegProduct_36(1425717026);
    noLegs_0_2.set(LegProduct_36);
    InstrumentLeg_36.insert(LegProduct_36.getString());
    FIX::LegPutOrCall LegPutOrCall_36(342452707);
    noLegs_0_2.set(LegPutOrCall_36);
    InstrumentLeg_36.insert(LegPutOrCall_36.getString());
    FIX::LegRatioQty LegRatioQty_36;
    LegRatioQty_36.setString("16285802");
    noLegs_0_2.set(LegRatioQty_36);
    InstrumentLeg_36.insert(LegRatioQty_36.getString());
    FIX::LegRedemptionDate LegRedemptionDate_36("LOCALMKTDATE_1178629257");
    noLegs_0_2.set(LegRedemptionDate_36);
    InstrumentLeg_36.insert(LegRedemptionDate_36.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_36("STRING_1108415438");
    noLegs_0_2.set(LegRepoCollateralSecurityType_36);
    InstrumentLeg_36.insert(LegRepoCollateralSecurityType_36.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_36;
    LegRepurchaseRate_36.setString("14.920000");
    noLegs_0_2.set(LegRepurchaseRate_36);
    InstrumentLeg_36.insert(LegRepurchaseRate_36.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_36(898752992);
    noLegs_0_2.set(LegRepurchaseTerm_36);
    InstrumentLeg_36.insert(LegRepurchaseTerm_36.getString());
    FIX::LegSecurityDesc LegSecurityDesc_36("STRING_366348760");
    noLegs_0_2.set(LegSecurityDesc_36);
    InstrumentLeg_36.insert(LegSecurityDesc_36.getString());
    FIX::LegSecurityExchange LegSecurityExchange_36("EXCHANGE_1475757381");
    noLegs_0_2.set(LegSecurityExchange_36);
    InstrumentLeg_36.insert(LegSecurityExchange_36.getString());
    FIX::LegSecurityID LegSecurityID_36("STRING_1689996019");
    noLegs_0_2.set(LegSecurityID_36);
    InstrumentLeg_36.insert(LegSecurityID_36.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_36("STRING_4110536");
    noLegs_0_2.set(LegSecurityIDSource_36);
    InstrumentLeg_36.insert(LegSecurityIDSource_36.getString());
    FIX::LegSecuritySubType LegSecuritySubType_36("STRING_1668293507");
    noLegs_0_2.set(LegSecuritySubType_36);
    InstrumentLeg_36.insert(LegSecuritySubType_36.getString());
    FIX::LegSecurityType LegSecurityType_36("STRING_451707982");
    noLegs_0_2.set(LegSecurityType_36);
    InstrumentLeg_36.insert(LegSecurityType_36.getString());
    FIX::LegSide LegSide_36('1');
    noLegs_0_2.set(LegSide_36);
    InstrumentLeg_36.insert(LegSide_36.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_36("STRING_1260131158");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_36);
    InstrumentLeg_36.insert(LegStateOrProvinceOfIssue_36.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_36("JPY");
    noLegs_0_2.set(LegStrikeCurrency_36);
    InstrumentLeg_36.insert(LegStrikeCurrency_36.getString());
    FIX::LegStrikePrice LegStrikePrice_36;
    LegStrikePrice_36.setString("19041976");
    noLegs_0_2.set(LegStrikePrice_36);
    InstrumentLeg_36.insert(LegStrikePrice_36.getString());
    FIX::LegSymbol LegSymbol_36("STRING_1372890438");
    noLegs_0_2.set(LegSymbol_36);
    InstrumentLeg_36.insert(LegSymbol_36.getString());
    FIX::LegSymbolSfx LegSymbolSfx_36("STRING_2035863718");
    noLegs_0_2.set(LegSymbolSfx_36);
    InstrumentLeg_36.insert(LegSymbolSfx_36.getString());
    FIX::LegTimeUnit LegTimeUnit_36("STRING_129326631");
    noLegs_0_2.set(LegTimeUnit_36);
    InstrumentLeg_36.insert(LegTimeUnit_36.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_36("STRING_1613990393");
    noLegs_0_2.set(LegUnitOfMeasure_36);
    InstrumentLeg_36.insert(LegUnitOfMeasure_36.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_36;
    LegUnitOfMeasureQty_36.setString("18375856");
    noLegs_0_2.set(LegUnitOfMeasureQty_36);
    InstrumentLeg_36.insert(LegUnitOfMeasureQty_36.getString());
    all_values.push_back(InstrumentLeg_36);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_60;
      FIX::LegSecurityAltID LegSecurityAltID_60("STRING_123724482");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_60);
      LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltID_60.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_60("STRING_390092876");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_60);
      LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltIDSource_60.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_60);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_61;
      FIX::LegSecurityAltID LegSecurityAltID_61("STRING_928175219");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_61);
      LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltID_61.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_61("STRING_1442273213");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_61);
      LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltIDSource_61.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_61);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_62;
      FIX::LegSecurityAltID LegSecurityAltID_62("STRING_1459967956");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_62);
      LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltID_62.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_62("STRING_458281136");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_62);
      LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltIDSource_62.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_62);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_21;
  FIX::AttachmentPoint AttachmentPoint_21;
  AttachmentPoint_21.setString("15.470000");
  msg.set(AttachmentPoint_21);
  Instrument_21.insert(AttachmentPoint_21.getString());
  FIX::CFICode CFICode_21("STRING_738201334");
  msg.set(CFICode_21);
  Instrument_21.insert(CFICode_21.getString());
  FIX::CPProgram CPProgram_21(1);
  msg.set(CPProgram_21);
  Instrument_21.insert(CPProgram_21.getString());
  FIX::CPRegType CPRegType_21("STRING_1823831782");
  msg.set(CPRegType_21);
  Instrument_21.insert(CPRegType_21.getString());
  FIX::CapPrice CapPrice_21;
  CapPrice_21.setString("19168305");
  msg.set(CapPrice_21);
  Instrument_21.insert(CapPrice_21.getString());
  FIX::ContractMultiplier ContractMultiplier_21;
  ContractMultiplier_21.setString("19091492");
  msg.set(ContractMultiplier_21);
  Instrument_21.insert(ContractMultiplier_21.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_21(1);
  msg.set(ContractMultiplierUnit_21);
  Instrument_21.insert(ContractMultiplierUnit_21.getString());
  FIX::ContractSettlMonth ContractSettlMonth_21("MONTHYEAR_668099935");
  msg.set(ContractSettlMonth_21);
  Instrument_21.insert(ContractSettlMonth_21.getString());
  FIX::CountryOfIssue CountryOfIssue_21("COUNTRY_128014393");
  msg.set(CountryOfIssue_21);
  Instrument_21.insert(CountryOfIssue_21.getString());
  FIX::CouponPaymentDate CouponPaymentDate_21("LOCALMKTDATE_1959087007");
  msg.set(CouponPaymentDate_21);
  Instrument_21.insert(CouponPaymentDate_21.getString());
  FIX::CouponRate CouponRate_21;
  CouponRate_21.setString("23.060000");
  msg.set(CouponRate_21);
  Instrument_21.insert(CouponRate_21.getString());
  FIX::CreditRating CreditRating_21("STRING_132124929");
  msg.set(CreditRating_21);
  Instrument_21.insert(CreditRating_21.getString());
  FIX::DatedDate DatedDate_21("LOCALMKTDATE_1479896866");
  msg.set(DatedDate_21);
  Instrument_21.insert(DatedDate_21.getString());
  FIX::DetachmentPoint DetachmentPoint_21;
  DetachmentPoint_21.setString("2.880000");
  msg.set(DetachmentPoint_21);
  Instrument_21.insert(DetachmentPoint_21.getString());
  FIX::EncodedIssuer EncodedIssuer_21("DATA_1649720483");
  msg.set(EncodedIssuer_21);
  Instrument_21.insert(EncodedIssuer_21.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_21(592544377);
  msg.set(EncodedIssuerLen_21);
  Instrument_21.insert(EncodedIssuerLen_21.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_21("DATA_1414955083");
  msg.set(EncodedSecurityDesc_21);
  Instrument_21.insert(EncodedSecurityDesc_21.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_21(1700508837);
  msg.set(EncodedSecurityDescLen_21);
  Instrument_21.insert(EncodedSecurityDescLen_21.getString());
  FIX::ExerciseStyle ExerciseStyle_21(0);
  msg.set(ExerciseStyle_21);
  Instrument_21.insert(ExerciseStyle_21.getString());
  FIX::Factor Factor_21;
  Factor_21.setString("6403618");
  msg.set(Factor_21);
  Instrument_21.insert(Factor_21.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_21(false);
  msg.set(FlexProductEligibilityIndicator_21);
  Instrument_21.insert(FlexProductEligibilityIndicator_21.getString());
  FIX::FlexibleIndicator FlexibleIndicator_21(false);
  msg.set(FlexibleIndicator_21);
  Instrument_21.insert(FlexibleIndicator_21.getString());
  FIX::FloorPrice FloorPrice_21;
  FloorPrice_21.setString("1068686");
  msg.set(FloorPrice_21);
  Instrument_21.insert(FloorPrice_21.getString());
  FIX::FlowScheduleType FlowScheduleType_21(3);
  msg.set(FlowScheduleType_21);
  Instrument_21.insert(FlowScheduleType_21.getString());
  FIX::InstrRegistry InstrRegistry_21("STRING_606558801");
  msg.set(InstrRegistry_21);
  Instrument_21.insert(InstrRegistry_21.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_21('2');
  msg.set(InstrmtAssignmentMethod_21);
  Instrument_21.insert(InstrmtAssignmentMethod_21.getString());
  FIX::InterestAccrualDate InterestAccrualDate_21("LOCALMKTDATE_1669083770");
  msg.set(InterestAccrualDate_21);
  Instrument_21.insert(InterestAccrualDate_21.getString());
  FIX::IssueDate IssueDate_21("LOCALMKTDATE_1534734020");
  msg.set(IssueDate_21);
  Instrument_21.insert(IssueDate_21.getString());
  FIX::Issuer Issuer_21("STRING_1672866313");
  msg.set(Issuer_21);
  Instrument_21.insert(Issuer_21.getString());
  FIX::ListMethod ListMethod_21(0);
  msg.set(ListMethod_21);
  Instrument_21.insert(ListMethod_21.getString());
  FIX::LocaleOfIssue LocaleOfIssue_21("STRING_1993015156");
  msg.set(LocaleOfIssue_21);
  Instrument_21.insert(LocaleOfIssue_21.getString());
  FIX::MaturityDate MaturityDate_21("LOCALMKTDATE_1868117861");
  msg.set(MaturityDate_21);
  Instrument_21.insert(MaturityDate_21.getString());
  FIX::MaturityMonthYear MaturityMonthYear_21("MONTHYEAR_1719769413");
  msg.set(MaturityMonthYear_21);
  Instrument_21.insert(MaturityMonthYear_21.getString());
  FIX::MaturityTime MaturityTime_21("TZTIMEONLY_646265351");
  msg.set(MaturityTime_21);
  Instrument_21.insert(MaturityTime_21.getString());
  FIX::MinPriceIncrement MinPriceIncrement_21;
  MinPriceIncrement_21.setString("15444659");
  msg.set(MinPriceIncrement_21);
  Instrument_21.insert(MinPriceIncrement_21.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_21;
  MinPriceIncrementAmount_21.setString("14891163");
  msg.set(MinPriceIncrementAmount_21);
  Instrument_21.insert(MinPriceIncrementAmount_21.getString());
  FIX::NTPositionLimit NTPositionLimit_21(407930984);
  msg.set(NTPositionLimit_21);
  Instrument_21.insert(NTPositionLimit_21.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_21;
  NotionalPercentageOutstanding_21.setString("56.210000");
  msg.set(NotionalPercentageOutstanding_21);
  Instrument_21.insert(NotionalPercentageOutstanding_21.getString());
  FIX::OptAttribute OptAttribute_21('9');
  msg.set(OptAttribute_21);
  Instrument_21.insert(OptAttribute_21.getString());
  FIX::OptPayoutAmount OptPayoutAmount_21;
  OptPayoutAmount_21.setString("5359453");
  msg.set(OptPayoutAmount_21);
  Instrument_21.insert(OptPayoutAmount_21.getString());
  FIX::OptPayoutType OptPayoutType_21(2);
  msg.set(OptPayoutType_21);
  Instrument_21.insert(OptPayoutType_21.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_21;
  OriginalNotionalPercentageOutstanding_21.setString("49.500000");
  msg.set(OriginalNotionalPercentageOutstanding_21);
  Instrument_21.insert(OriginalNotionalPercentageOutstanding_21.getString());
  FIX::Pool Pool_21("STRING_668070306");
  msg.set(Pool_21);
  Instrument_21.insert(Pool_21.getString());
  FIX::PositionLimit PositionLimit_21(1171812198);
  msg.set(PositionLimit_21);
  Instrument_21.insert(PositionLimit_21.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_21("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_21);
  Instrument_21.insert(PriceQuoteMethod_21.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_21("STRING_170307141");
  msg.set(PriceUnitOfMeasure_21);
  Instrument_21.insert(PriceUnitOfMeasure_21.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_21;
  PriceUnitOfMeasureQty_21.setString("17643565");
  msg.set(PriceUnitOfMeasureQty_21);
  Instrument_21.insert(PriceUnitOfMeasureQty_21.getString());
  FIX::Product Product_23(13);
  msg.set(Product_23);
  Instrument_21.insert(Product_23.getString());
  FIX::ProductComplex ProductComplex_21("STRING_1870815978");
  msg.set(ProductComplex_21);
  Instrument_21.insert(ProductComplex_21.getString());
  FIX::PutOrCall PutOrCall_21(1);
  msg.set(PutOrCall_21);
  Instrument_21.insert(PutOrCall_21.getString());
  FIX::RedemptionDate RedemptionDate_21("LOCALMKTDATE_790498547");
  msg.set(RedemptionDate_21);
  Instrument_21.insert(RedemptionDate_21.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_21("STRING_1312221237");
  msg.set(RepoCollateralSecurityType_21);
  Instrument_21.insert(RepoCollateralSecurityType_21.getString());
  FIX::RepurchaseRate RepurchaseRate_21;
  RepurchaseRate_21.setString("62.300000");
  msg.set(RepurchaseRate_21);
  Instrument_21.insert(RepurchaseRate_21.getString());
  FIX::RepurchaseTerm RepurchaseTerm_21(897367165);
  msg.set(RepurchaseTerm_21);
  Instrument_21.insert(RepurchaseTerm_21.getString());
  FIX::RestructuringType RestructuringType_21("STRING_XR");
  msg.set(RestructuringType_21);
  Instrument_21.insert(RestructuringType_21.getString());
  FIX::SecurityDesc SecurityDesc_21("STRING_1051275031");
  msg.set(SecurityDesc_21);
  Instrument_21.insert(SecurityDesc_21.getString());
  FIX::SecurityExchange SecurityExchange_21("EXCHANGE_1127960266");
  msg.set(SecurityExchange_21);
  Instrument_21.insert(SecurityExchange_21.getString());
  FIX::SecurityGroup SecurityGroup_21("STRING_2112812253");
  msg.set(SecurityGroup_21);
  Instrument_21.insert(SecurityGroup_21.getString());
  FIX::SecurityID SecurityID_21("STRING_438525403");
  msg.set(SecurityID_21);
  Instrument_21.insert(SecurityID_21.getString());
  FIX::SecurityIDSource SecurityIDSource_21("STRING_M");
  msg.set(SecurityIDSource_21);
  Instrument_21.insert(SecurityIDSource_21.getString());
  FIX::SecurityStatus SecurityStatus_21("STRING_2");
  msg.set(SecurityStatus_21);
  Instrument_21.insert(SecurityStatus_21.getString());
  FIX::SecuritySubType SecuritySubType_22("STRING_284056911");
  msg.set(SecuritySubType_22);
  Instrument_21.insert(SecuritySubType_22.getString());
  FIX::SecurityType SecurityType_23("STRING_REV");
  msg.set(SecurityType_23);
  Instrument_21.insert(SecurityType_23.getString());
  FIX::Seniority Seniority_21("STRING_SD");
  msg.set(Seniority_21);
  Instrument_21.insert(Seniority_21.getString());
  FIX::SettlMethod SettlMethod_21('C');
  msg.set(SettlMethod_21);
  Instrument_21.insert(SettlMethod_21.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_21("STRING_1918443139");
  msg.set(SettleOnOpenFlag_21);
  Instrument_21.insert(SettleOnOpenFlag_21.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_21("STRING_2008298805");
  msg.set(StateOrProvinceOfIssue_21);
  Instrument_21.insert(StateOrProvinceOfIssue_21.getString());
  FIX::StrikeCurrency StrikeCurrency_21("JPY");
  msg.set(StrikeCurrency_21);
  Instrument_21.insert(StrikeCurrency_21.getString());
  FIX::StrikeMultiplier StrikeMultiplier_21;
  StrikeMultiplier_21.setString("20180314");
  msg.set(StrikeMultiplier_21);
  Instrument_21.insert(StrikeMultiplier_21.getString());
  FIX::StrikePrice StrikePrice_21;
  StrikePrice_21.setString("18741986");
  msg.set(StrikePrice_21);
  Instrument_21.insert(StrikePrice_21.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_21(5);
  msg.set(StrikePriceBoundaryMethod_21);
  Instrument_21.insert(StrikePriceBoundaryMethod_21.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_21;
  StrikePriceBoundaryPrecision_21.setString("27.510000");
  msg.set(StrikePriceBoundaryPrecision_21);
  Instrument_21.insert(StrikePriceBoundaryPrecision_21.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_21(2);
  msg.set(StrikePriceDeterminationMethod_21);
  Instrument_21.insert(StrikePriceDeterminationMethod_21.getString());
  FIX::StrikeValue StrikeValue_21;
  StrikeValue_21.setString("5149989");
  msg.set(StrikeValue_21);
  Instrument_21.insert(StrikeValue_21.getString());
  FIX::Symbol Symbol_21("STRING_973557990");
  msg.set(Symbol_21);
  Instrument_21.insert(Symbol_21.getString());
  FIX::SymbolSfx SymbolSfx_21("STRING_WI");
  msg.set(SymbolSfx_21);
  Instrument_21.insert(SymbolSfx_21.getString());
  FIX::TimeUnit TimeUnit_21("STRING_H");
  msg.set(TimeUnit_21);
  Instrument_21.insert(TimeUnit_21.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_21(1);
  msg.set(UnderlyingPriceDeterminationMethod_21);
  Instrument_21.insert(UnderlyingPriceDeterminationMethod_21.getString());
  FIX::UnitOfMeasure UnitOfMeasure_21("STRING_lbs");
  msg.set(UnitOfMeasure_21);
  Instrument_21.insert(UnitOfMeasure_21.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_21;
  UnitOfMeasureQty_21.setString("980031");
  msg.set(UnitOfMeasureQty_21);
  Instrument_21.insert(UnitOfMeasureQty_21.getString());
  FIX::ValuationMethod ValuationMethod_21("STRING_FUT");
  msg.set(ValuationMethod_21);
  Instrument_21.insert(ValuationMethod_21.getString());
  all_values.push_back(Instrument_21);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_42;
    FIX::ComplexEventCondition ComplexEventCondition_42(2);
    noComplexEvents_0_0.set(ComplexEventCondition_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexEventCondition_42.getString());
    FIX::ComplexEventPrice ComplexEventPrice_42;
    ComplexEventPrice_42.setString("6640767");
    noComplexEvents_0_0.set(ComplexEventPrice_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexEventPrice_42.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_42(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryMethod_42.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_42;
    ComplexEventPriceBoundaryPrecision_42.setString("44.460000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryPrecision_42.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_42(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceTimeType_42.getString());
    FIX::ComplexEventType ComplexEventType_42(2);
    noComplexEvents_0_0.set(ComplexEventType_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexEventType_42.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_42;
    ComplexOptPayoutAmount_42.setString("20325198");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_42);
    ComplexEvents_NoComplexEvents_42.insert(ComplexOptPayoutAmount_42.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_42);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_89;
      FIX::ComplexEventEndDate ComplexEventEndDate_89(FIX::UTCTIMESTAMP(8, 23, 23, 22, 112006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_89);
      ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventEndDate_89.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_89(FIX::UTCTIMESTAMP(19, 21, 47, 23, 92011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_89);
      ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventStartDate_89.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_89);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_181;
        FIX::ComplexEventEndTime ComplexEventEndTime_181(FIX::UTCTIMEONLY(20, 33, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_181);
        ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventEndTime_181.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_181(FIX::UTCTIMEONLY(22, 23, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_181);
        ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventStartTime_181.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_181);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_90;
      FIX::ComplexEventEndDate ComplexEventEndDate_90(FIX::UTCTIMESTAMP(4, 34, 32, 11, 102002));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_90);
      ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventEndDate_90.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_90(FIX::UTCTIMESTAMP(8, 46, 20, 19, 102011));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_90);
      ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventStartDate_90.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_90);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_182;
        FIX::ComplexEventEndTime ComplexEventEndTime_182(FIX::UTCTIMEONLY(18, 48, 21));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_182);
        ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventEndTime_182.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_182(FIX::UTCTIMEONLY(20, 50, 0));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_182);
        ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventStartTime_182.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_182);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_183;
        FIX::ComplexEventEndTime ComplexEventEndTime_183(FIX::UTCTIMEONLY(14, 25, 27));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_183);
        ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventEndTime_183.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_183(FIX::UTCTIMEONLY(23, 50, 40));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_183);
        ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventStartTime_183.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_183);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_184;
        FIX::ComplexEventEndTime ComplexEventEndTime_184(FIX::UTCTIMEONLY(10, 14, 30));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_184);
        ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventEndTime_184.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_184(FIX::UTCTIMEONLY(12, 44, 22));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_184);
        ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventStartTime_184.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_184);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_43;
    FIX::ComplexEventCondition ComplexEventCondition_43(1);
    noComplexEvents_0_1.set(ComplexEventCondition_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexEventCondition_43.getString());
    FIX::ComplexEventPrice ComplexEventPrice_43;
    ComplexEventPrice_43.setString("13690316");
    noComplexEvents_0_1.set(ComplexEventPrice_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexEventPrice_43.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_43(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryMethod_43.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_43;
    ComplexEventPriceBoundaryPrecision_43.setString("19.270000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryPrecision_43.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_43(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceTimeType_43.getString());
    FIX::ComplexEventType ComplexEventType_43(5);
    noComplexEvents_0_1.set(ComplexEventType_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexEventType_43.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_43;
    ComplexOptPayoutAmount_43.setString("9173680");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_43);
    ComplexEvents_NoComplexEvents_43.insert(ComplexOptPayoutAmount_43.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_43);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_91;
      FIX::ComplexEventEndDate ComplexEventEndDate_91(FIX::UTCTIMESTAMP(14, 30, 1, 18, 12005));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_91);
      ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventEndDate_91.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_91(FIX::UTCTIMESTAMP(18, 18, 49, 21, 72007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_91);
      ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventStartDate_91.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_91);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_185;
        FIX::ComplexEventEndTime ComplexEventEndTime_185(FIX::UTCTIMEONLY(17, 56, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_185);
        ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventEndTime_185.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_185(FIX::UTCTIMEONLY(8, 45, 44));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_185);
        ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventStartTime_185.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_185);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_186;
        FIX::ComplexEventEndTime ComplexEventEndTime_186(FIX::UTCTIMEONLY(8, 19, 39));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_186);
        ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventEndTime_186.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_186(FIX::UTCTIMEONLY(21, 53, 0));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_186);
        ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventStartTime_186.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_186);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_44;
    FIX::ComplexEventCondition ComplexEventCondition_44(2);
    noComplexEvents_0_2.set(ComplexEventCondition_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexEventCondition_44.getString());
    FIX::ComplexEventPrice ComplexEventPrice_44;
    ComplexEventPrice_44.setString("2566318");
    noComplexEvents_0_2.set(ComplexEventPrice_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexEventPrice_44.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_44(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryMethod_44.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_44;
    ComplexEventPriceBoundaryPrecision_44.setString("75.670000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryPrecision_44.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_44(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceTimeType_44.getString());
    FIX::ComplexEventType ComplexEventType_44(8);
    noComplexEvents_0_2.set(ComplexEventType_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexEventType_44.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_44;
    ComplexOptPayoutAmount_44.setString("1983134");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_44);
    ComplexEvents_NoComplexEvents_44.insert(ComplexOptPayoutAmount_44.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_44);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_92;
      FIX::ComplexEventEndDate ComplexEventEndDate_92(FIX::UTCTIMESTAMP(11, 4, 54, 13, 122001));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_92);
      ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventEndDate_92.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_92(FIX::UTCTIMESTAMP(20, 39, 22, 26, 42017));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_92);
      ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventStartDate_92.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_92);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_187;
        FIX::ComplexEventEndTime ComplexEventEndTime_187(FIX::UTCTIMEONLY(7, 50, 58));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_187);
        ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventEndTime_187.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_187(FIX::UTCTIMEONLY(16, 51, 51));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_187);
        ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventStartTime_187.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_187);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_93;
      FIX::ComplexEventEndDate ComplexEventEndDate_93(FIX::UTCTIMESTAMP(14, 6, 48, 8, 92005));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_93);
      ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventEndDate_93.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_93(FIX::UTCTIMESTAMP(5, 28, 52, 15, 102007));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_93);
      ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventStartDate_93.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_93);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_188;
        FIX::ComplexEventEndTime ComplexEventEndTime_188(FIX::UTCTIMEONLY(4, 26, 35));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_188);
        ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventEndTime_188.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_188(FIX::UTCTIMEONLY(21, 27, 17));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_188);
        ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventStartTime_188.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_188);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_189;
        FIX::ComplexEventEndTime ComplexEventEndTime_189(FIX::UTCTIMEONLY(2, 8, 3));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_189);
        ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventEndTime_189.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_189(FIX::UTCTIMEONLY(4, 47, 1));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_189);
        ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventStartTime_189.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_189);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_94;
      FIX::ComplexEventEndDate ComplexEventEndDate_94(FIX::UTCTIMESTAMP(1, 7, 6, 5, 42003));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_94);
      ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventEndDate_94.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_94(FIX::UTCTIMESTAMP(8, 55, 29, 27, 92006));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_94);
      ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventStartDate_94.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_94);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_190;
        FIX::ComplexEventEndTime ComplexEventEndTime_190(FIX::UTCTIMEONLY(20, 4, 45));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_190);
        ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventEndTime_190.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_190(FIX::UTCTIMEONLY(5, 4, 28));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_190);
        ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventStartTime_190.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_190);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_191;
        FIX::ComplexEventEndTime ComplexEventEndTime_191(FIX::UTCTIMEONLY(18, 28, 42));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_191);
        ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventEndTime_191.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_191(FIX::UTCTIMEONLY(8, 29, 49));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_191);
        ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventStartTime_191.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_191);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_48;
    FIX::EventDate EventDate_48("LOCALMKTDATE_317209786");
    noEvents_0_0.set(EventDate_48);
    EvntGrp_NoEvents_48.insert(EventDate_48.getString());
    FIX::EventPx EventPx_48;
    EventPx_48.setString("5006887");
    noEvents_0_0.set(EventPx_48);
    EvntGrp_NoEvents_48.insert(EventPx_48.getString());
    FIX::EventText EventText_48("STRING_227880292");
    noEvents_0_0.set(EventText_48);
    EvntGrp_NoEvents_48.insert(EventText_48.getString());
    FIX::EventTime EventTime_48(FIX::UTCTIMESTAMP(3, 19, 21, 4, 32012));
    noEvents_0_0.set(EventTime_48);
    EvntGrp_NoEvents_48.insert(EventTime_48.getString());
    FIX::EventType EventType_48(16);
    noEvents_0_0.set(EventType_48);
    EvntGrp_NoEvents_48.insert(EventType_48.getString());
    all_values.push_back(EvntGrp_NoEvents_48);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_37;
    FIX::InstrumentPartyID InstrumentPartyID_37("STRING_144092302");
    noInstrumentParties_0_0.set(InstrumentPartyID_37);
    InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyID_37.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_37('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_37);
    InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyIDSource_37.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_37(539819891);
    noInstrumentParties_0_0.set(InstrumentPartyRole_37);
    InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyRole_37.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_37);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73;
      FIX::InstrumentPartySubID InstrumentPartySubID_73("STRING_1916181057");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_73);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubID_73.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_73(60488808);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_73);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubIDType_73.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74;
      FIX::InstrumentPartySubID InstrumentPartySubID_74("STRING_233245378");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_74);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubID_74.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_74(2130925359);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_74);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubIDType_74.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_38;
    FIX::InstrumentPartyID InstrumentPartyID_38("STRING_118781152");
    noInstrumentParties_0_1.set(InstrumentPartyID_38);
    InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyID_38.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_38('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_38);
    InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyIDSource_38.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_38(1575711077);
    noInstrumentParties_0_1.set(InstrumentPartyRole_38);
    InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyRole_38.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_38);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75;
      FIX::InstrumentPartySubID InstrumentPartySubID_75("STRING_1797013967");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_75);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubID_75.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_75(279124611);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_75);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubIDType_75.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76;
      FIX::InstrumentPartySubID InstrumentPartySubID_76("STRING_1508490371");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_76);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubID_76.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_76(1777537103);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_76);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubIDType_76.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77;
      FIX::InstrumentPartySubID InstrumentPartySubID_77("STRING_1335285860");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_77);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubID_77.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_77(1114534012);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_77);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubIDType_77.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_39;
    FIX::InstrumentPartyID InstrumentPartyID_39("STRING_515255229");
    noInstrumentParties_0_2.set(InstrumentPartyID_39);
    InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyID_39.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_39('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_39);
    InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyIDSource_39.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_39(1615222780);
    noInstrumentParties_0_2.set(InstrumentPartyRole_39);
    InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyRole_39.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_39);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78;
      FIX::InstrumentPartySubID InstrumentPartySubID_78("STRING_1601004223");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_78);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubID_78.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_78(1153288079);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_78);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubIDType_78.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79;
      FIX::InstrumentPartySubID InstrumentPartySubID_79("STRING_1097491340");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_79);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubID_79.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_79(1324274756);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_79);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubIDType_79.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_47;
    FIX::SecurityAltID SecurityAltID_47("STRING_545475146");
    noSecurityAltID_0_0.set(SecurityAltID_47);
    SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltID_47.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_47("STRING_1993934258");
    noSecurityAltID_0_0.set(SecurityAltIDSource_47);
    SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltIDSource_47.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_47);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_48;
    FIX::SecurityAltID SecurityAltID_48("STRING_89712675");
    noSecurityAltID_0_1.set(SecurityAltID_48);
    SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltID_48.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_48("STRING_855882748");
    noSecurityAltID_0_1.set(SecurityAltIDSource_48);
    SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltIDSource_48.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_48);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_42;
  FIX::SecurityXML SecurityXML_43("XMLDATA_2138026560");
  msg.set(SecurityXML_43);
  FIX::SecurityXMLLen SecurityXMLLen_21(993286268);
  msg.set(SecurityXMLLen_21);
  FIX::SecurityXMLSchema SecurityXMLSchema_21("STRING_1395702640");
  msg.set(SecurityXMLSchema_21);
  SecurityXML_42.insert(SecurityXMLSchema_21.getString());
  all_values.push_back(SecurityXML_42);

  // OrderQtyData
  multiset<string> OrderQtyData_5;
  FIX::CashOrderQty CashOrderQty_5;
  CashOrderQty_5.setString("13110951");
  msg.set(CashOrderQty_5);
  OrderQtyData_5.insert(CashOrderQty_5.getString());
  FIX::OrderPercent OrderPercent_5;
  OrderPercent_5.setString("36.780000");
  msg.set(OrderPercent_5);
  OrderQtyData_5.insert(OrderPercent_5.getString());
  FIX::OrderQty OrderQty_14;
  OrderQty_14.setString("14561914");
  msg.set(OrderQty_14);
  OrderQtyData_5.insert(OrderQty_14.getString());
  FIX::RoundingDirection RoundingDirection_5('0');
  msg.set(RoundingDirection_5);
  OrderQtyData_5.insert(RoundingDirection_5.getString());
  FIX::RoundingModulus RoundingModulus_5;
  RoundingModulus_5.setString("7454253");
  msg.set(RoundingModulus_5);
  OrderQtyData_5.insert(RoundingModulus_5.getString());
  all_values.push_back(OrderQtyData_5);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_29;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_29("DATA_1606960384");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuer_29.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_29(173652818);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingIssuerLen_29.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_29("DATA_1932199364");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDesc_29.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_29(1256490703);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_29);
    UnderlyingInstrument_29.insert(EncodedUnderlyingSecurityDescLen_29.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_29;
    UnderlyingAdjustedQuantity_29.setString("4527774");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_29);
    UnderlyingInstrument_29.insert(UnderlyingAdjustedQuantity_29.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_29;
    UnderlyingAllocationPercent_29.setString("60.870000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_29);
    UnderlyingInstrument_29.insert(UnderlyingAllocationPercent_29.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_29;
    UnderlyingAttachmentPoint_29.setString("41.580000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingAttachmentPoint_29.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_29("STRING_1788063290");
    noUnderlyings_0_0.set(UnderlyingCFICode_29);
    UnderlyingInstrument_29.insert(UnderlyingCFICode_29.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_29("STRING_260256451");
    noUnderlyings_0_0.set(UnderlyingCPProgram_29);
    UnderlyingInstrument_29.insert(UnderlyingCPProgram_29.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_29("STRING_1401799388");
    noUnderlyings_0_0.set(UnderlyingCPRegType_29);
    UnderlyingInstrument_29.insert(UnderlyingCPRegType_29.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_29;
    UnderlyingCapValue_29.setString("12930752");
    noUnderlyings_0_0.set(UnderlyingCapValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCapValue_29.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_29;
    UnderlyingCashAmount_29.setString("18754792");
    noUnderlyings_0_0.set(UnderlyingCashAmount_29);
    UnderlyingInstrument_29.insert(UnderlyingCashAmount_29.getString());
    FIX::UnderlyingCashType UnderlyingCashType_29("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_29);
    UnderlyingInstrument_29.insert(UnderlyingCashType_29.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_29;
    UnderlyingContractMultiplier_29.setString("7465958");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplier_29.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_29(881283662);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingContractMultiplierUnit_29.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_29("COUNTRY_1094942602");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingCountryOfIssue_29.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_29("LOCALMKTDATE_2070870620");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponPaymentDate_29.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_29;
    UnderlyingCouponRate_29.setString("44.100000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_29);
    UnderlyingInstrument_29.insert(UnderlyingCouponRate_29.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_29("STRING_1640417748");
    noUnderlyings_0_0.set(UnderlyingCreditRating_29);
    UnderlyingInstrument_29.insert(UnderlyingCreditRating_29.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_29("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrency_29.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_29;
    UnderlyingCurrentValue_29.setString("3488168");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_29);
    UnderlyingInstrument_29.insert(UnderlyingCurrentValue_29.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_29;
    UnderlyingDetachmentPoint_29.setString("41.430000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_29);
    UnderlyingInstrument_29.insert(UnderlyingDetachmentPoint_29.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_29;
    UnderlyingDirtyPrice_29.setString("1014797");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingDirtyPrice_29.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_29;
    UnderlyingEndPrice_29.setString("17445194");
    noUnderlyings_0_0.set(UnderlyingEndPrice_29);
    UnderlyingInstrument_29.insert(UnderlyingEndPrice_29.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_29;
    UnderlyingEndValue_29.setString("10714756");
    noUnderlyings_0_0.set(UnderlyingEndValue_29);
    UnderlyingInstrument_29.insert(UnderlyingEndValue_29.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_29(863463383);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_29);
    UnderlyingInstrument_29.insert(UnderlyingExerciseStyle_29.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_29;
    UnderlyingFXRate_29.setString("10532272");
    noUnderlyings_0_0.set(UnderlyingFXRate_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRate_29.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_29('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_29);
    UnderlyingInstrument_29.insert(UnderlyingFXRateCalc_29.getString());
    FIX::UnderlyingFactor UnderlyingFactor_29;
    UnderlyingFactor_29.setString("16088887");
    noUnderlyings_0_0.set(UnderlyingFactor_29);
    UnderlyingInstrument_29.insert(UnderlyingFactor_29.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_29(480716242);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_29);
    UnderlyingInstrument_29.insert(UnderlyingFlowScheduleType_29.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_29("STRING_2075292904");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_29);
    UnderlyingInstrument_29.insert(UnderlyingInstrRegistry_29.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_29("LOCALMKTDATE_1782541591");
    noUnderlyings_0_0.set(UnderlyingIssueDate_29);
    UnderlyingInstrument_29.insert(UnderlyingIssueDate_29.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_29("STRING_265431958");
    noUnderlyings_0_0.set(UnderlyingIssuer_29);
    UnderlyingInstrument_29.insert(UnderlyingIssuer_29.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_29("STRING_1184299959");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingLocaleOfIssue_29.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_29("LOCALMKTDATE_87835373");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityDate_29.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_29("MONTHYEAR_1558638045");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityMonthYear_29.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_29("TZTIMEONLY_2070844117");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_29);
    UnderlyingInstrument_29.insert(UnderlyingMaturityTime_29.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_29;
    UnderlyingNotionalPercentageOutstanding_29.setString("86.630000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_29('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_29);
    UnderlyingInstrument_29.insert(UnderlyingOptAttribute_29.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_29;
    UnderlyingOriginalNotionalPercentageOutstanding_29.setString("98.570000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_29);
    UnderlyingInstrument_29.insert(UnderlyingOriginalNotionalPercentageOutstanding_29.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_29("STRING_1021490305");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasure_29.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_29;
    UnderlyingPriceUnitOfMeasureQty_29.setString("15468900");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingPriceUnitOfMeasureQty_29.getString());
    FIX::UnderlyingProduct UnderlyingProduct_29(1322611119);
    noUnderlyings_0_0.set(UnderlyingProduct_29);
    UnderlyingInstrument_29.insert(UnderlyingProduct_29.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_29(1768086169);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_29);
    UnderlyingInstrument_29.insert(UnderlyingPutOrCall_29.getString());
    FIX::UnderlyingPx UnderlyingPx_29;
    UnderlyingPx_29.setString("2806900");
    noUnderlyings_0_0.set(UnderlyingPx_29);
    UnderlyingInstrument_29.insert(UnderlyingPx_29.getString());
    FIX::UnderlyingQty UnderlyingQty_29;
    UnderlyingQty_29.setString("2700700");
    noUnderlyings_0_0.set(UnderlyingQty_29);
    UnderlyingInstrument_29.insert(UnderlyingQty_29.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_29("LOCALMKTDATE_1691473142");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_29);
    UnderlyingInstrument_29.insert(UnderlyingRedemptionDate_29.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_29("STRING_1446654504");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingRepoCollateralSecurityType_29.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_29;
    UnderlyingRepurchaseRate_29.setString("78.210000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseRate_29.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_29(1461310724);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_29);
    UnderlyingInstrument_29.insert(UnderlyingRepurchaseTerm_29.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_29("STRING_554847941");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_29);
    UnderlyingInstrument_29.insert(UnderlyingRestructuringType_29.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_29("STRING_111821022");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityDesc_29.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_29("EXCHANGE_1221691219");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityExchange_29.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_29("STRING_656327646");
    noUnderlyings_0_0.set(UnderlyingSecurityID_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityID_29.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_29("STRING_1856340511");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityIDSource_29.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_29("STRING_145683214");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecuritySubType_29.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_29("STRING_1519791030");
    noUnderlyings_0_0.set(UnderlyingSecurityType_29);
    UnderlyingInstrument_29.insert(UnderlyingSecurityType_29.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_29("STRING_762084153");
    noUnderlyings_0_0.set(UnderlyingSeniority_29);
    UnderlyingInstrument_29.insert(UnderlyingSeniority_29.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_29("STRING_614015734");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlMethod_29.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_29(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_29);
    UnderlyingInstrument_29.insert(UnderlyingSettlementType_29.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_29;
    UnderlyingStartValue_29.setString("12428003");
    noUnderlyings_0_0.set(UnderlyingStartValue_29);
    UnderlyingInstrument_29.insert(UnderlyingStartValue_29.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_29("STRING_541824990");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_29);
    UnderlyingInstrument_29.insert(UnderlyingStateOrProvinceOfIssue_29.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_29("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikeCurrency_29.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_29;
    UnderlyingStrikePrice_29.setString("17261249");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_29);
    UnderlyingInstrument_29.insert(UnderlyingStrikePrice_29.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_29("STRING_704089470");
    noUnderlyings_0_0.set(UnderlyingSymbol_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbol_29.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_29("STRING_919386751");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_29);
    UnderlyingInstrument_29.insert(UnderlyingSymbolSfx_29.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_29("STRING_1649485418");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_29);
    UnderlyingInstrument_29.insert(UnderlyingTimeUnit_29.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_29("STRING_432504486");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasure_29.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_29;
    UnderlyingUnitOfMeasureQty_29.setString("5907976");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_29);
    UnderlyingInstrument_29.insert(UnderlyingUnitOfMeasureQty_29.getString());
    all_values.push_back(UnderlyingInstrument_29);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_56;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_56("STRING_1453994791");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltID_56.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_56("STRING_2137687679");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltIDSource_56.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_57;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_57("STRING_2289099");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltID_57.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_57("STRING_1074597312");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_57);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_57.insert(UnderlyingSecurityAltIDSource_57.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_58;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_58("STRING_270894125");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltID_58.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_58("STRING_272359172");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_58);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_58.insert(UnderlyingSecurityAltIDSource_58.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_55;
      FIX::UnderlyingStipType UnderlyingStipType_55("STRING_1717548629");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipType_55.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_55("STRING_35363345");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_55);
      UnderlyingStipulations_NoUnderlyingStips_55.insert(UnderlyingStipValue_55.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_55);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_54;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_54("STRING_124912922");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyID_54.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_54('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyIDSource_54.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_54(1154105102);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyRole_54.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_54);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_103("STRING_2003524879");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubID_103.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_103(1299788316);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubIDType_103.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
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
