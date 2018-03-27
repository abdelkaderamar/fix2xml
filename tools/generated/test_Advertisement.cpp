#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Advertisement msg;

  list<multiset<string>> all_values;
  multiset<string> Advertisement_0;
  FIX::AdvId AdvId_0("STRING_832582498");
  msg.set(AdvId_0);
  Advertisement_0.insert(AdvId_0.getString());
  FIX::AdvRefID AdvRefID_0("STRING_290602629");
  msg.set(AdvRefID_0);
  Advertisement_0.insert(AdvRefID_0.getString());
  FIX::AdvSide AdvSide_0('S');
  msg.set(AdvSide_0);
  Advertisement_0.insert(AdvSide_0.getString());
  FIX::AdvTransType AdvTransType_0("STRING_C");
  msg.set(AdvTransType_0);
  Advertisement_0.insert(AdvTransType_0.getString());
  FIX::Currency Currency_0("CAN");
  msg.set(Currency_0);
  Advertisement_0.insert(Currency_0.getString());
  FIX::EncodedText EncodedText_0("DATA_601496963");
  msg.set(EncodedText_0);
  Advertisement_0.insert(EncodedText_0.getString());
  FIX::EncodedTextLen EncodedTextLen_0(883509460);
  msg.set(EncodedTextLen_0);
  Advertisement_0.insert(EncodedTextLen_0.getString());
  FIX::LastMkt LastMkt_0("EXCHANGE_166626317");
  msg.set(LastMkt_0);
  Advertisement_0.insert(LastMkt_0.getString());
  FIX::Price Price_0;
  Price_0.setString("6756955");
  msg.set(Price_0);
  Advertisement_0.insert(Price_0.getString());
  FIX::QtyType QtyType_0(0);
  msg.set(QtyType_0);
  Advertisement_0.insert(QtyType_0.getString());
  FIX::Quantity Quantity_0;
  Quantity_0.setString("2750241");
  msg.set(Quantity_0);
  Advertisement_0.insert(Quantity_0.getString());
  FIX::Text Text_0("STRING_1050449271");
  msg.set(Text_0);
  Advertisement_0.insert(Text_0.getString());
  FIX::TradeDate TradeDate_0("LOCALMKTDATE_2078885158");
  msg.set(TradeDate_0);
  Advertisement_0.insert(TradeDate_0.getString());
  FIX::TradingSessionID TradingSessionID_0("STRING_4");
  msg.set(TradingSessionID_0);
  Advertisement_0.insert(TradingSessionID_0.getString());
  FIX::TradingSessionSubID TradingSessionSubID_0("STRING_2");
  msg.set(TradingSessionSubID_0);
  Advertisement_0.insert(TradingSessionSubID_0.getString());
  FIX::TransactTime TransactTime_0(FIX::UTCTIMESTAMP(17, 9, 22, 5, 12011));
  msg.set(TransactTime_0);
  Advertisement_0.insert(TransactTime_0.getString());
  FIX::URLLink URLLink_0("STRING_251016395");
  msg.set(URLLink_0);
  Advertisement_0.insert(URLLink_0.getString());
  all_values.push_back(Advertisement_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_0;
    FIX::EncodedLegIssuer EncodedLegIssuer_0("DATA_1439972685");
    noLegs_0_0.set(EncodedLegIssuer_0);
    InstrumentLeg_0.insert(EncodedLegIssuer_0.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_0(515093095);
    noLegs_0_0.set(EncodedLegIssuerLen_0);
    InstrumentLeg_0.insert(EncodedLegIssuerLen_0.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_0("DATA_2042800570");
    noLegs_0_0.set(EncodedLegSecurityDesc_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDesc_0.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_0(670990889);
    noLegs_0_0.set(EncodedLegSecurityDescLen_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDescLen_0.getString());
    FIX::LegCFICode LegCFICode_0("STRING_516922545");
    noLegs_0_0.set(LegCFICode_0);
    InstrumentLeg_0.insert(LegCFICode_0.getString());
    FIX::LegContractMultiplier LegContractMultiplier_0;
    LegContractMultiplier_0.setString("119631");
    noLegs_0_0.set(LegContractMultiplier_0);
    InstrumentLeg_0.insert(LegContractMultiplier_0.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_0(1503573387);
    noLegs_0_0.set(LegContractMultiplierUnit_0);
    InstrumentLeg_0.insert(LegContractMultiplierUnit_0.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_0("MONTHYEAR_807525174");
    noLegs_0_0.set(LegContractSettlMonth_0);
    InstrumentLeg_0.insert(LegContractSettlMonth_0.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_0("COUNTRY_1505149235");
    noLegs_0_0.set(LegCountryOfIssue_0);
    InstrumentLeg_0.insert(LegCountryOfIssue_0.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_0("LOCALMKTDATE_616552946");
    noLegs_0_0.set(LegCouponPaymentDate_0);
    InstrumentLeg_0.insert(LegCouponPaymentDate_0.getString());
    FIX::LegCouponRate LegCouponRate_0;
    LegCouponRate_0.setString("64.640000");
    noLegs_0_0.set(LegCouponRate_0);
    InstrumentLeg_0.insert(LegCouponRate_0.getString());
    FIX::LegCreditRating LegCreditRating_0("STRING_712920326");
    noLegs_0_0.set(LegCreditRating_0);
    InstrumentLeg_0.insert(LegCreditRating_0.getString());
    FIX::LegCurrency LegCurrency_0("CHF");
    noLegs_0_0.set(LegCurrency_0);
    InstrumentLeg_0.insert(LegCurrency_0.getString());
    FIX::LegDatedDate LegDatedDate_0("LOCALMKTDATE_879546643");
    noLegs_0_0.set(LegDatedDate_0);
    InstrumentLeg_0.insert(LegDatedDate_0.getString());
    FIX::LegExerciseStyle LegExerciseStyle_0(1893745484);
    noLegs_0_0.set(LegExerciseStyle_0);
    InstrumentLeg_0.insert(LegExerciseStyle_0.getString());
    FIX::LegFactor LegFactor_0;
    LegFactor_0.setString("20985033");
    noLegs_0_0.set(LegFactor_0);
    InstrumentLeg_0.insert(LegFactor_0.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_0(1154570820);
    noLegs_0_0.set(LegFlowScheduleType_0);
    InstrumentLeg_0.insert(LegFlowScheduleType_0.getString());
    FIX::LegInstrRegistry LegInstrRegistry_0("STRING_796711107");
    noLegs_0_0.set(LegInstrRegistry_0);
    InstrumentLeg_0.insert(LegInstrRegistry_0.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_0("LOCALMKTDATE_2029904898");
    noLegs_0_0.set(LegInterestAccrualDate_0);
    InstrumentLeg_0.insert(LegInterestAccrualDate_0.getString());
    FIX::LegIssueDate LegIssueDate_0("LOCALMKTDATE_2013325305");
    noLegs_0_0.set(LegIssueDate_0);
    InstrumentLeg_0.insert(LegIssueDate_0.getString());
    FIX::LegIssuer LegIssuer_0("STRING_928266763");
    noLegs_0_0.set(LegIssuer_0);
    InstrumentLeg_0.insert(LegIssuer_0.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_0("STRING_326654870");
    noLegs_0_0.set(LegLocaleOfIssue_0);
    InstrumentLeg_0.insert(LegLocaleOfIssue_0.getString());
    FIX::LegMaturityDate LegMaturityDate_0("LOCALMKTDATE_1552910466");
    noLegs_0_0.set(LegMaturityDate_0);
    InstrumentLeg_0.insert(LegMaturityDate_0.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_0("MONTHYEAR_484566464");
    noLegs_0_0.set(LegMaturityMonthYear_0);
    InstrumentLeg_0.insert(LegMaturityMonthYear_0.getString());
    FIX::LegMaturityTime LegMaturityTime_0("TZTIMEONLY_1896155352");
    noLegs_0_0.set(LegMaturityTime_0);
    InstrumentLeg_0.insert(LegMaturityTime_0.getString());
    FIX::LegOptAttribute LegOptAttribute_0('8');
    noLegs_0_0.set(LegOptAttribute_0);
    InstrumentLeg_0.insert(LegOptAttribute_0.getString());
    FIX::LegOptionRatio LegOptionRatio_0;
    LegOptionRatio_0.setString("12419587");
    noLegs_0_0.set(LegOptionRatio_0);
    InstrumentLeg_0.insert(LegOptionRatio_0.getString());
    FIX::LegPool LegPool_0("STRING_529550703");
    noLegs_0_0.set(LegPool_0);
    InstrumentLeg_0.insert(LegPool_0.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_0("STRING_1103188407");
    noLegs_0_0.set(LegPriceUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasure_0.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_0;
    LegPriceUnitOfMeasureQty_0.setString("5723557");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasureQty_0.getString());
    FIX::LegProduct LegProduct_0(1969523389);
    noLegs_0_0.set(LegProduct_0);
    InstrumentLeg_0.insert(LegProduct_0.getString());
    FIX::LegPutOrCall LegPutOrCall_0(1618281503);
    noLegs_0_0.set(LegPutOrCall_0);
    InstrumentLeg_0.insert(LegPutOrCall_0.getString());
    FIX::LegRatioQty LegRatioQty_0;
    LegRatioQty_0.setString("4676727");
    noLegs_0_0.set(LegRatioQty_0);
    InstrumentLeg_0.insert(LegRatioQty_0.getString());
    FIX::LegRedemptionDate LegRedemptionDate_0("LOCALMKTDATE_493030630");
    noLegs_0_0.set(LegRedemptionDate_0);
    InstrumentLeg_0.insert(LegRedemptionDate_0.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_0("STRING_2135204048");
    noLegs_0_0.set(LegRepoCollateralSecurityType_0);
    InstrumentLeg_0.insert(LegRepoCollateralSecurityType_0.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_0;
    LegRepurchaseRate_0.setString("58.540000");
    noLegs_0_0.set(LegRepurchaseRate_0);
    InstrumentLeg_0.insert(LegRepurchaseRate_0.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_0(1996604017);
    noLegs_0_0.set(LegRepurchaseTerm_0);
    InstrumentLeg_0.insert(LegRepurchaseTerm_0.getString());
    FIX::LegSecurityDesc LegSecurityDesc_0("STRING_795245575");
    noLegs_0_0.set(LegSecurityDesc_0);
    InstrumentLeg_0.insert(LegSecurityDesc_0.getString());
    FIX::LegSecurityExchange LegSecurityExchange_0("EXCHANGE_1984785089");
    noLegs_0_0.set(LegSecurityExchange_0);
    InstrumentLeg_0.insert(LegSecurityExchange_0.getString());
    FIX::LegSecurityID LegSecurityID_0("STRING_465673315");
    noLegs_0_0.set(LegSecurityID_0);
    InstrumentLeg_0.insert(LegSecurityID_0.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_0("STRING_800912039");
    noLegs_0_0.set(LegSecurityIDSource_0);
    InstrumentLeg_0.insert(LegSecurityIDSource_0.getString());
    FIX::LegSecuritySubType LegSecuritySubType_0("STRING_550221767");
    noLegs_0_0.set(LegSecuritySubType_0);
    InstrumentLeg_0.insert(LegSecuritySubType_0.getString());
    FIX::LegSecurityType LegSecurityType_0("STRING_1683723225");
    noLegs_0_0.set(LegSecurityType_0);
    InstrumentLeg_0.insert(LegSecurityType_0.getString());
    FIX::LegSide LegSide_0('1');
    noLegs_0_0.set(LegSide_0);
    InstrumentLeg_0.insert(LegSide_0.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_0("STRING_1429768410");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_0);
    InstrumentLeg_0.insert(LegStateOrProvinceOfIssue_0.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_0("JPY");
    noLegs_0_0.set(LegStrikeCurrency_0);
    InstrumentLeg_0.insert(LegStrikeCurrency_0.getString());
    FIX::LegStrikePrice LegStrikePrice_0;
    LegStrikePrice_0.setString("4368555");
    noLegs_0_0.set(LegStrikePrice_0);
    InstrumentLeg_0.insert(LegStrikePrice_0.getString());
    FIX::LegSymbol LegSymbol_0("STRING_79212520");
    noLegs_0_0.set(LegSymbol_0);
    InstrumentLeg_0.insert(LegSymbol_0.getString());
    FIX::LegSymbolSfx LegSymbolSfx_0("STRING_1523528954");
    noLegs_0_0.set(LegSymbolSfx_0);
    InstrumentLeg_0.insert(LegSymbolSfx_0.getString());
    FIX::LegTimeUnit LegTimeUnit_0("STRING_302697239");
    noLegs_0_0.set(LegTimeUnit_0);
    InstrumentLeg_0.insert(LegTimeUnit_0.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_0("STRING_1007479284");
    noLegs_0_0.set(LegUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegUnitOfMeasure_0.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_0;
    LegUnitOfMeasureQty_0.setString("18501838");
    noLegs_0_0.set(LegUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegUnitOfMeasureQty_0.getString());
    all_values.push_back(InstrumentLeg_0);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_0;
      FIX::LegSecurityAltID LegSecurityAltID_0("STRING_1492045748");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltID_0.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_0("STRING_1598855528");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltIDSource_0.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_0);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_1;
    FIX::EncodedLegIssuer EncodedLegIssuer_1("DATA_560296070");
    noLegs_0_1.set(EncodedLegIssuer_1);
    InstrumentLeg_1.insert(EncodedLegIssuer_1.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_1(586520877);
    noLegs_0_1.set(EncodedLegIssuerLen_1);
    InstrumentLeg_1.insert(EncodedLegIssuerLen_1.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_1("DATA_2128406231");
    noLegs_0_1.set(EncodedLegSecurityDesc_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDesc_1.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_1(1663484477);
    noLegs_0_1.set(EncodedLegSecurityDescLen_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDescLen_1.getString());
    FIX::LegCFICode LegCFICode_1("STRING_1158876663");
    noLegs_0_1.set(LegCFICode_1);
    InstrumentLeg_1.insert(LegCFICode_1.getString());
    FIX::LegContractMultiplier LegContractMultiplier_1;
    LegContractMultiplier_1.setString("19504459");
    noLegs_0_1.set(LegContractMultiplier_1);
    InstrumentLeg_1.insert(LegContractMultiplier_1.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_1(1134282332);
    noLegs_0_1.set(LegContractMultiplierUnit_1);
    InstrumentLeg_1.insert(LegContractMultiplierUnit_1.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_1("MONTHYEAR_1626549372");
    noLegs_0_1.set(LegContractSettlMonth_1);
    InstrumentLeg_1.insert(LegContractSettlMonth_1.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_1("COUNTRY_295992954");
    noLegs_0_1.set(LegCountryOfIssue_1);
    InstrumentLeg_1.insert(LegCountryOfIssue_1.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_1("LOCALMKTDATE_1122002733");
    noLegs_0_1.set(LegCouponPaymentDate_1);
    InstrumentLeg_1.insert(LegCouponPaymentDate_1.getString());
    FIX::LegCouponRate LegCouponRate_1;
    LegCouponRate_1.setString("52.260000");
    noLegs_0_1.set(LegCouponRate_1);
    InstrumentLeg_1.insert(LegCouponRate_1.getString());
    FIX::LegCreditRating LegCreditRating_1("STRING_145113323");
    noLegs_0_1.set(LegCreditRating_1);
    InstrumentLeg_1.insert(LegCreditRating_1.getString());
    FIX::LegCurrency LegCurrency_1("CHF");
    noLegs_0_1.set(LegCurrency_1);
    InstrumentLeg_1.insert(LegCurrency_1.getString());
    FIX::LegDatedDate LegDatedDate_1("LOCALMKTDATE_610786639");
    noLegs_0_1.set(LegDatedDate_1);
    InstrumentLeg_1.insert(LegDatedDate_1.getString());
    FIX::LegExerciseStyle LegExerciseStyle_1(570676699);
    noLegs_0_1.set(LegExerciseStyle_1);
    InstrumentLeg_1.insert(LegExerciseStyle_1.getString());
    FIX::LegFactor LegFactor_1;
    LegFactor_1.setString("3462247");
    noLegs_0_1.set(LegFactor_1);
    InstrumentLeg_1.insert(LegFactor_1.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_1(147026216);
    noLegs_0_1.set(LegFlowScheduleType_1);
    InstrumentLeg_1.insert(LegFlowScheduleType_1.getString());
    FIX::LegInstrRegistry LegInstrRegistry_1("STRING_113281016");
    noLegs_0_1.set(LegInstrRegistry_1);
    InstrumentLeg_1.insert(LegInstrRegistry_1.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_1("LOCALMKTDATE_1775993196");
    noLegs_0_1.set(LegInterestAccrualDate_1);
    InstrumentLeg_1.insert(LegInterestAccrualDate_1.getString());
    FIX::LegIssueDate LegIssueDate_1("LOCALMKTDATE_1577011278");
    noLegs_0_1.set(LegIssueDate_1);
    InstrumentLeg_1.insert(LegIssueDate_1.getString());
    FIX::LegIssuer LegIssuer_1("STRING_1754388720");
    noLegs_0_1.set(LegIssuer_1);
    InstrumentLeg_1.insert(LegIssuer_1.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_1("STRING_65365131");
    noLegs_0_1.set(LegLocaleOfIssue_1);
    InstrumentLeg_1.insert(LegLocaleOfIssue_1.getString());
    FIX::LegMaturityDate LegMaturityDate_1("LOCALMKTDATE_1656223798");
    noLegs_0_1.set(LegMaturityDate_1);
    InstrumentLeg_1.insert(LegMaturityDate_1.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_1("MONTHYEAR_1130434026");
    noLegs_0_1.set(LegMaturityMonthYear_1);
    InstrumentLeg_1.insert(LegMaturityMonthYear_1.getString());
    FIX::LegMaturityTime LegMaturityTime_1("TZTIMEONLY_368062370");
    noLegs_0_1.set(LegMaturityTime_1);
    InstrumentLeg_1.insert(LegMaturityTime_1.getString());
    FIX::LegOptAttribute LegOptAttribute_1('5');
    noLegs_0_1.set(LegOptAttribute_1);
    InstrumentLeg_1.insert(LegOptAttribute_1.getString());
    FIX::LegOptionRatio LegOptionRatio_1;
    LegOptionRatio_1.setString("8331342");
    noLegs_0_1.set(LegOptionRatio_1);
    InstrumentLeg_1.insert(LegOptionRatio_1.getString());
    FIX::LegPool LegPool_1("STRING_76186428");
    noLegs_0_1.set(LegPool_1);
    InstrumentLeg_1.insert(LegPool_1.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_1("STRING_2008265183");
    noLegs_0_1.set(LegPriceUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasure_1.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_1;
    LegPriceUnitOfMeasureQty_1.setString("2845060");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasureQty_1.getString());
    FIX::LegProduct LegProduct_1(636482498);
    noLegs_0_1.set(LegProduct_1);
    InstrumentLeg_1.insert(LegProduct_1.getString());
    FIX::LegPutOrCall LegPutOrCall_1(447302412);
    noLegs_0_1.set(LegPutOrCall_1);
    InstrumentLeg_1.insert(LegPutOrCall_1.getString());
    FIX::LegRatioQty LegRatioQty_1;
    LegRatioQty_1.setString("2654286");
    noLegs_0_1.set(LegRatioQty_1);
    InstrumentLeg_1.insert(LegRatioQty_1.getString());
    FIX::LegRedemptionDate LegRedemptionDate_1("LOCALMKTDATE_152483328");
    noLegs_0_1.set(LegRedemptionDate_1);
    InstrumentLeg_1.insert(LegRedemptionDate_1.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_1("STRING_1606179076");
    noLegs_0_1.set(LegRepoCollateralSecurityType_1);
    InstrumentLeg_1.insert(LegRepoCollateralSecurityType_1.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_1;
    LegRepurchaseRate_1.setString("9.900000");
    noLegs_0_1.set(LegRepurchaseRate_1);
    InstrumentLeg_1.insert(LegRepurchaseRate_1.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_1(1286765660);
    noLegs_0_1.set(LegRepurchaseTerm_1);
    InstrumentLeg_1.insert(LegRepurchaseTerm_1.getString());
    FIX::LegSecurityDesc LegSecurityDesc_1("STRING_1085244800");
    noLegs_0_1.set(LegSecurityDesc_1);
    InstrumentLeg_1.insert(LegSecurityDesc_1.getString());
    FIX::LegSecurityExchange LegSecurityExchange_1("EXCHANGE_364383944");
    noLegs_0_1.set(LegSecurityExchange_1);
    InstrumentLeg_1.insert(LegSecurityExchange_1.getString());
    FIX::LegSecurityID LegSecurityID_1("STRING_261284745");
    noLegs_0_1.set(LegSecurityID_1);
    InstrumentLeg_1.insert(LegSecurityID_1.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_1("STRING_1043946378");
    noLegs_0_1.set(LegSecurityIDSource_1);
    InstrumentLeg_1.insert(LegSecurityIDSource_1.getString());
    FIX::LegSecuritySubType LegSecuritySubType_1("STRING_509497268");
    noLegs_0_1.set(LegSecuritySubType_1);
    InstrumentLeg_1.insert(LegSecuritySubType_1.getString());
    FIX::LegSecurityType LegSecurityType_1("STRING_31049405");
    noLegs_0_1.set(LegSecurityType_1);
    InstrumentLeg_1.insert(LegSecurityType_1.getString());
    FIX::LegSide LegSide_1('8');
    noLegs_0_1.set(LegSide_1);
    InstrumentLeg_1.insert(LegSide_1.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_1("STRING_1120283907");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_1);
    InstrumentLeg_1.insert(LegStateOrProvinceOfIssue_1.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_1("EUR");
    noLegs_0_1.set(LegStrikeCurrency_1);
    InstrumentLeg_1.insert(LegStrikeCurrency_1.getString());
    FIX::LegStrikePrice LegStrikePrice_1;
    LegStrikePrice_1.setString("12673101");
    noLegs_0_1.set(LegStrikePrice_1);
    InstrumentLeg_1.insert(LegStrikePrice_1.getString());
    FIX::LegSymbol LegSymbol_1("STRING_715007121");
    noLegs_0_1.set(LegSymbol_1);
    InstrumentLeg_1.insert(LegSymbol_1.getString());
    FIX::LegSymbolSfx LegSymbolSfx_1("STRING_814683731");
    noLegs_0_1.set(LegSymbolSfx_1);
    InstrumentLeg_1.insert(LegSymbolSfx_1.getString());
    FIX::LegTimeUnit LegTimeUnit_1("STRING_696837753");
    noLegs_0_1.set(LegTimeUnit_1);
    InstrumentLeg_1.insert(LegTimeUnit_1.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_1("STRING_321912193");
    noLegs_0_1.set(LegUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegUnitOfMeasure_1.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_1;
    LegUnitOfMeasureQty_1.setString("8800488");
    noLegs_0_1.set(LegUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegUnitOfMeasureQty_1.getString());
    all_values.push_back(InstrumentLeg_1);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_1;
      FIX::LegSecurityAltID LegSecurityAltID_1("STRING_1452346219");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltID_1.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_1("STRING_1248111233");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltIDSource_1.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_1);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_2;
    FIX::EncodedLegIssuer EncodedLegIssuer_2("DATA_721797338");
    noLegs_0_2.set(EncodedLegIssuer_2);
    InstrumentLeg_2.insert(EncodedLegIssuer_2.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_2(137996773);
    noLegs_0_2.set(EncodedLegIssuerLen_2);
    InstrumentLeg_2.insert(EncodedLegIssuerLen_2.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_2("DATA_1324297661");
    noLegs_0_2.set(EncodedLegSecurityDesc_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDesc_2.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_2(582578873);
    noLegs_0_2.set(EncodedLegSecurityDescLen_2);
    InstrumentLeg_2.insert(EncodedLegSecurityDescLen_2.getString());
    FIX::LegCFICode LegCFICode_2("STRING_422502855");
    noLegs_0_2.set(LegCFICode_2);
    InstrumentLeg_2.insert(LegCFICode_2.getString());
    FIX::LegContractMultiplier LegContractMultiplier_2;
    LegContractMultiplier_2.setString("19607801");
    noLegs_0_2.set(LegContractMultiplier_2);
    InstrumentLeg_2.insert(LegContractMultiplier_2.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_2(1029881286);
    noLegs_0_2.set(LegContractMultiplierUnit_2);
    InstrumentLeg_2.insert(LegContractMultiplierUnit_2.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_2("MONTHYEAR_687931520");
    noLegs_0_2.set(LegContractSettlMonth_2);
    InstrumentLeg_2.insert(LegContractSettlMonth_2.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_2("COUNTRY_2113263488");
    noLegs_0_2.set(LegCountryOfIssue_2);
    InstrumentLeg_2.insert(LegCountryOfIssue_2.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_2("LOCALMKTDATE_488576714");
    noLegs_0_2.set(LegCouponPaymentDate_2);
    InstrumentLeg_2.insert(LegCouponPaymentDate_2.getString());
    FIX::LegCouponRate LegCouponRate_2;
    LegCouponRate_2.setString("25.100000");
    noLegs_0_2.set(LegCouponRate_2);
    InstrumentLeg_2.insert(LegCouponRate_2.getString());
    FIX::LegCreditRating LegCreditRating_2("STRING_1252545500");
    noLegs_0_2.set(LegCreditRating_2);
    InstrumentLeg_2.insert(LegCreditRating_2.getString());
    FIX::LegCurrency LegCurrency_2("EUR");
    noLegs_0_2.set(LegCurrency_2);
    InstrumentLeg_2.insert(LegCurrency_2.getString());
    FIX::LegDatedDate LegDatedDate_2("LOCALMKTDATE_1513830246");
    noLegs_0_2.set(LegDatedDate_2);
    InstrumentLeg_2.insert(LegDatedDate_2.getString());
    FIX::LegExerciseStyle LegExerciseStyle_2(470284244);
    noLegs_0_2.set(LegExerciseStyle_2);
    InstrumentLeg_2.insert(LegExerciseStyle_2.getString());
    FIX::LegFactor LegFactor_2;
    LegFactor_2.setString("16302037");
    noLegs_0_2.set(LegFactor_2);
    InstrumentLeg_2.insert(LegFactor_2.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_2(1544879651);
    noLegs_0_2.set(LegFlowScheduleType_2);
    InstrumentLeg_2.insert(LegFlowScheduleType_2.getString());
    FIX::LegInstrRegistry LegInstrRegistry_2("STRING_1310233641");
    noLegs_0_2.set(LegInstrRegistry_2);
    InstrumentLeg_2.insert(LegInstrRegistry_2.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_2("LOCALMKTDATE_603003982");
    noLegs_0_2.set(LegInterestAccrualDate_2);
    InstrumentLeg_2.insert(LegInterestAccrualDate_2.getString());
    FIX::LegIssueDate LegIssueDate_2("LOCALMKTDATE_2146605756");
    noLegs_0_2.set(LegIssueDate_2);
    InstrumentLeg_2.insert(LegIssueDate_2.getString());
    FIX::LegIssuer LegIssuer_2("STRING_348924176");
    noLegs_0_2.set(LegIssuer_2);
    InstrumentLeg_2.insert(LegIssuer_2.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_2("STRING_1870314105");
    noLegs_0_2.set(LegLocaleOfIssue_2);
    InstrumentLeg_2.insert(LegLocaleOfIssue_2.getString());
    FIX::LegMaturityDate LegMaturityDate_2("LOCALMKTDATE_714129229");
    noLegs_0_2.set(LegMaturityDate_2);
    InstrumentLeg_2.insert(LegMaturityDate_2.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_2("MONTHYEAR_1163607907");
    noLegs_0_2.set(LegMaturityMonthYear_2);
    InstrumentLeg_2.insert(LegMaturityMonthYear_2.getString());
    FIX::LegMaturityTime LegMaturityTime_2("TZTIMEONLY_419668211");
    noLegs_0_2.set(LegMaturityTime_2);
    InstrumentLeg_2.insert(LegMaturityTime_2.getString());
    FIX::LegOptAttribute LegOptAttribute_2('1');
    noLegs_0_2.set(LegOptAttribute_2);
    InstrumentLeg_2.insert(LegOptAttribute_2.getString());
    FIX::LegOptionRatio LegOptionRatio_2;
    LegOptionRatio_2.setString("20436567");
    noLegs_0_2.set(LegOptionRatio_2);
    InstrumentLeg_2.insert(LegOptionRatio_2.getString());
    FIX::LegPool LegPool_2("STRING_625246115");
    noLegs_0_2.set(LegPool_2);
    InstrumentLeg_2.insert(LegPool_2.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_2("STRING_340903993");
    noLegs_0_2.set(LegPriceUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasure_2.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_2;
    LegPriceUnitOfMeasureQty_2.setString("11442843");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegPriceUnitOfMeasureQty_2.getString());
    FIX::LegProduct LegProduct_2(1347043453);
    noLegs_0_2.set(LegProduct_2);
    InstrumentLeg_2.insert(LegProduct_2.getString());
    FIX::LegPutOrCall LegPutOrCall_2(478900766);
    noLegs_0_2.set(LegPutOrCall_2);
    InstrumentLeg_2.insert(LegPutOrCall_2.getString());
    FIX::LegRatioQty LegRatioQty_2;
    LegRatioQty_2.setString("3210983");
    noLegs_0_2.set(LegRatioQty_2);
    InstrumentLeg_2.insert(LegRatioQty_2.getString());
    FIX::LegRedemptionDate LegRedemptionDate_2("LOCALMKTDATE_1929622327");
    noLegs_0_2.set(LegRedemptionDate_2);
    InstrumentLeg_2.insert(LegRedemptionDate_2.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_2("STRING_901403621");
    noLegs_0_2.set(LegRepoCollateralSecurityType_2);
    InstrumentLeg_2.insert(LegRepoCollateralSecurityType_2.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_2;
    LegRepurchaseRate_2.setString("48.800000");
    noLegs_0_2.set(LegRepurchaseRate_2);
    InstrumentLeg_2.insert(LegRepurchaseRate_2.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_2(812019965);
    noLegs_0_2.set(LegRepurchaseTerm_2);
    InstrumentLeg_2.insert(LegRepurchaseTerm_2.getString());
    FIX::LegSecurityDesc LegSecurityDesc_2("STRING_1589335142");
    noLegs_0_2.set(LegSecurityDesc_2);
    InstrumentLeg_2.insert(LegSecurityDesc_2.getString());
    FIX::LegSecurityExchange LegSecurityExchange_2("EXCHANGE_100174720");
    noLegs_0_2.set(LegSecurityExchange_2);
    InstrumentLeg_2.insert(LegSecurityExchange_2.getString());
    FIX::LegSecurityID LegSecurityID_2("STRING_1300596679");
    noLegs_0_2.set(LegSecurityID_2);
    InstrumentLeg_2.insert(LegSecurityID_2.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_2("STRING_198174004");
    noLegs_0_2.set(LegSecurityIDSource_2);
    InstrumentLeg_2.insert(LegSecurityIDSource_2.getString());
    FIX::LegSecuritySubType LegSecuritySubType_2("STRING_1352720221");
    noLegs_0_2.set(LegSecuritySubType_2);
    InstrumentLeg_2.insert(LegSecuritySubType_2.getString());
    FIX::LegSecurityType LegSecurityType_2("STRING_726934545");
    noLegs_0_2.set(LegSecurityType_2);
    InstrumentLeg_2.insert(LegSecurityType_2.getString());
    FIX::LegSide LegSide_2('1');
    noLegs_0_2.set(LegSide_2);
    InstrumentLeg_2.insert(LegSide_2.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_2("STRING_719066819");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_2);
    InstrumentLeg_2.insert(LegStateOrProvinceOfIssue_2.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_2("USD");
    noLegs_0_2.set(LegStrikeCurrency_2);
    InstrumentLeg_2.insert(LegStrikeCurrency_2.getString());
    FIX::LegStrikePrice LegStrikePrice_2;
    LegStrikePrice_2.setString("1164628");
    noLegs_0_2.set(LegStrikePrice_2);
    InstrumentLeg_2.insert(LegStrikePrice_2.getString());
    FIX::LegSymbol LegSymbol_2("STRING_359968782");
    noLegs_0_2.set(LegSymbol_2);
    InstrumentLeg_2.insert(LegSymbol_2.getString());
    FIX::LegSymbolSfx LegSymbolSfx_2("STRING_1404604516");
    noLegs_0_2.set(LegSymbolSfx_2);
    InstrumentLeg_2.insert(LegSymbolSfx_2.getString());
    FIX::LegTimeUnit LegTimeUnit_2("STRING_115584931");
    noLegs_0_2.set(LegTimeUnit_2);
    InstrumentLeg_2.insert(LegTimeUnit_2.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_2("STRING_708892958");
    noLegs_0_2.set(LegUnitOfMeasure_2);
    InstrumentLeg_2.insert(LegUnitOfMeasure_2.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_2;
    LegUnitOfMeasureQty_2.setString("11274349");
    noLegs_0_2.set(LegUnitOfMeasureQty_2);
    InstrumentLeg_2.insert(LegUnitOfMeasureQty_2.getString());
    all_values.push_back(InstrumentLeg_2);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_2;
      FIX::LegSecurityAltID LegSecurityAltID_2("STRING_1872500865");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltID_2.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_2("STRING_1547103185");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltIDSource_2.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_2);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_3;
      FIX::LegSecurityAltID LegSecurityAltID_3("STRING_1865755583");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltID_3.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_3("STRING_1768673987");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltIDSource_3.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_3);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_4;
      FIX::LegSecurityAltID LegSecurityAltID_4("STRING_24865652");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltID_4.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_4("STRING_59175928");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_4);
      LegSecAltIDGrp_NoLegSecurityAltID_4.insert(LegSecurityAltIDSource_4.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_4);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_2;
  FIX::AttachmentPoint AttachmentPoint_2;
  AttachmentPoint_2.setString("46.940000");
  msg.set(AttachmentPoint_2);
  Instrument_2.insert(AttachmentPoint_2.getString());
  FIX::CFICode CFICode_2("STRING_1371909105");
  msg.set(CFICode_2);
  Instrument_2.insert(CFICode_2.getString());
  FIX::CPProgram CPProgram_2(2);
  msg.set(CPProgram_2);
  Instrument_2.insert(CPProgram_2.getString());
  FIX::CPRegType CPRegType_2("STRING_1086573063");
  msg.set(CPRegType_2);
  Instrument_2.insert(CPRegType_2.getString());
  FIX::CapPrice CapPrice_2;
  CapPrice_2.setString("11540477");
  msg.set(CapPrice_2);
  Instrument_2.insert(CapPrice_2.getString());
  FIX::ContractMultiplier ContractMultiplier_2;
  ContractMultiplier_2.setString("14394803");
  msg.set(ContractMultiplier_2);
  Instrument_2.insert(ContractMultiplier_2.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_2(1);
  msg.set(ContractMultiplierUnit_2);
  Instrument_2.insert(ContractMultiplierUnit_2.getString());
  FIX::ContractSettlMonth ContractSettlMonth_2("MONTHYEAR_1966067749");
  msg.set(ContractSettlMonth_2);
  Instrument_2.insert(ContractSettlMonth_2.getString());
  FIX::CountryOfIssue CountryOfIssue_2("COUNTRY_881331810");
  msg.set(CountryOfIssue_2);
  Instrument_2.insert(CountryOfIssue_2.getString());
  FIX::CouponPaymentDate CouponPaymentDate_2("LOCALMKTDATE_1321142664");
  msg.set(CouponPaymentDate_2);
  Instrument_2.insert(CouponPaymentDate_2.getString());
  FIX::CouponRate CouponRate_2;
  CouponRate_2.setString("7.800000");
  msg.set(CouponRate_2);
  Instrument_2.insert(CouponRate_2.getString());
  FIX::CreditRating CreditRating_2("STRING_1079505815");
  msg.set(CreditRating_2);
  Instrument_2.insert(CreditRating_2.getString());
  FIX::DatedDate DatedDate_2("LOCALMKTDATE_526379237");
  msg.set(DatedDate_2);
  Instrument_2.insert(DatedDate_2.getString());
  FIX::DetachmentPoint DetachmentPoint_2;
  DetachmentPoint_2.setString("53.250000");
  msg.set(DetachmentPoint_2);
  Instrument_2.insert(DetachmentPoint_2.getString());
  FIX::EncodedIssuer EncodedIssuer_2("DATA_250902626");
  msg.set(EncodedIssuer_2);
  Instrument_2.insert(EncodedIssuer_2.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_2(1245446056);
  msg.set(EncodedIssuerLen_2);
  Instrument_2.insert(EncodedIssuerLen_2.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_2("DATA_895850466");
  msg.set(EncodedSecurityDesc_2);
  Instrument_2.insert(EncodedSecurityDesc_2.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_2(1052503161);
  msg.set(EncodedSecurityDescLen_2);
  Instrument_2.insert(EncodedSecurityDescLen_2.getString());
  FIX::ExerciseStyle ExerciseStyle_2(0);
  msg.set(ExerciseStyle_2);
  Instrument_2.insert(ExerciseStyle_2.getString());
  FIX::Factor Factor_2;
  Factor_2.setString("12558192");
  msg.set(Factor_2);
  Instrument_2.insert(Factor_2.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_2(false);
  msg.set(FlexProductEligibilityIndicator_2);
  Instrument_2.insert(FlexProductEligibilityIndicator_2.getString());
  FIX::FlexibleIndicator FlexibleIndicator_2(false);
  msg.set(FlexibleIndicator_2);
  Instrument_2.insert(FlexibleIndicator_2.getString());
  FIX::FloorPrice FloorPrice_2;
  FloorPrice_2.setString("19647122");
  msg.set(FloorPrice_2);
  Instrument_2.insert(FloorPrice_2.getString());
  FIX::FlowScheduleType FlowScheduleType_2(3);
  msg.set(FlowScheduleType_2);
  Instrument_2.insert(FlowScheduleType_2.getString());
  FIX::InstrRegistry InstrRegistry_2("STRING_159724322");
  msg.set(InstrRegistry_2);
  Instrument_2.insert(InstrRegistry_2.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_2('1');
  msg.set(InstrmtAssignmentMethod_2);
  Instrument_2.insert(InstrmtAssignmentMethod_2.getString());
  FIX::InterestAccrualDate InterestAccrualDate_2("LOCALMKTDATE_836678540");
  msg.set(InterestAccrualDate_2);
  Instrument_2.insert(InterestAccrualDate_2.getString());
  FIX::IssueDate IssueDate_2("LOCALMKTDATE_2025479905");
  msg.set(IssueDate_2);
  Instrument_2.insert(IssueDate_2.getString());
  FIX::Issuer Issuer_2("STRING_1310919763");
  msg.set(Issuer_2);
  Instrument_2.insert(Issuer_2.getString());
  FIX::ListMethod ListMethod_2(0);
  msg.set(ListMethod_2);
  Instrument_2.insert(ListMethod_2.getString());
  FIX::LocaleOfIssue LocaleOfIssue_2("STRING_2084655833");
  msg.set(LocaleOfIssue_2);
  Instrument_2.insert(LocaleOfIssue_2.getString());
  FIX::MaturityDate MaturityDate_2("LOCALMKTDATE_2076394458");
  msg.set(MaturityDate_2);
  Instrument_2.insert(MaturityDate_2.getString());
  FIX::MaturityMonthYear MaturityMonthYear_2("MONTHYEAR_85969650");
  msg.set(MaturityMonthYear_2);
  Instrument_2.insert(MaturityMonthYear_2.getString());
  FIX::MaturityTime MaturityTime_2("TZTIMEONLY_475248880");
  msg.set(MaturityTime_2);
  Instrument_2.insert(MaturityTime_2.getString());
  FIX::MinPriceIncrement MinPriceIncrement_2;
  MinPriceIncrement_2.setString("10154838");
  msg.set(MinPriceIncrement_2);
  Instrument_2.insert(MinPriceIncrement_2.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_2;
  MinPriceIncrementAmount_2.setString("12400174");
  msg.set(MinPriceIncrementAmount_2);
  Instrument_2.insert(MinPriceIncrementAmount_2.getString());
  FIX::NTPositionLimit NTPositionLimit_2(1914729197);
  msg.set(NTPositionLimit_2);
  Instrument_2.insert(NTPositionLimit_2.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_2;
  NotionalPercentageOutstanding_2.setString("81.680000");
  msg.set(NotionalPercentageOutstanding_2);
  Instrument_2.insert(NotionalPercentageOutstanding_2.getString());
  FIX::OptAttribute OptAttribute_2('1');
  msg.set(OptAttribute_2);
  Instrument_2.insert(OptAttribute_2.getString());
  FIX::OptPayoutAmount OptPayoutAmount_2;
  OptPayoutAmount_2.setString("6485773");
  msg.set(OptPayoutAmount_2);
  Instrument_2.insert(OptPayoutAmount_2.getString());
  FIX::OptPayoutType OptPayoutType_2(1);
  msg.set(OptPayoutType_2);
  Instrument_2.insert(OptPayoutType_2.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_2;
  OriginalNotionalPercentageOutstanding_2.setString("86.680000");
  msg.set(OriginalNotionalPercentageOutstanding_2);
  Instrument_2.insert(OriginalNotionalPercentageOutstanding_2.getString());
  FIX::Pool Pool_2("STRING_1728083174");
  msg.set(Pool_2);
  Instrument_2.insert(Pool_2.getString());
  FIX::PositionLimit PositionLimit_2(1936490069);
  msg.set(PositionLimit_2);
  Instrument_2.insert(PositionLimit_2.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_2("STRING_INT");
  msg.set(PriceQuoteMethod_2);
  Instrument_2.insert(PriceQuoteMethod_2.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_2("STRING_1978985801");
  msg.set(PriceUnitOfMeasure_2);
  Instrument_2.insert(PriceUnitOfMeasure_2.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_2;
  PriceUnitOfMeasureQty_2.setString("10344524");
  msg.set(PriceUnitOfMeasureQty_2);
  Instrument_2.insert(PriceUnitOfMeasureQty_2.getString());
  FIX::Product Product_2(7);
  msg.set(Product_2);
  Instrument_2.insert(Product_2.getString());
  FIX::ProductComplex ProductComplex_2("STRING_884005314");
  msg.set(ProductComplex_2);
  Instrument_2.insert(ProductComplex_2.getString());
  FIX::PutOrCall PutOrCall_2(0);
  msg.set(PutOrCall_2);
  Instrument_2.insert(PutOrCall_2.getString());
  FIX::RedemptionDate RedemptionDate_2("LOCALMKTDATE_1880600061");
  msg.set(RedemptionDate_2);
  Instrument_2.insert(RedemptionDate_2.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_2("STRING_1193629343");
  msg.set(RepoCollateralSecurityType_2);
  Instrument_2.insert(RepoCollateralSecurityType_2.getString());
  FIX::RepurchaseRate RepurchaseRate_2;
  RepurchaseRate_2.setString("15.170000");
  msg.set(RepurchaseRate_2);
  Instrument_2.insert(RepurchaseRate_2.getString());
  FIX::RepurchaseTerm RepurchaseTerm_2(1697828619);
  msg.set(RepurchaseTerm_2);
  Instrument_2.insert(RepurchaseTerm_2.getString());
  FIX::RestructuringType RestructuringType_2("STRING_XR");
  msg.set(RestructuringType_2);
  Instrument_2.insert(RestructuringType_2.getString());
  FIX::SecurityDesc SecurityDesc_2("STRING_1886095839");
  msg.set(SecurityDesc_2);
  Instrument_2.insert(SecurityDesc_2.getString());
  FIX::SecurityExchange SecurityExchange_2("EXCHANGE_1240074395");
  msg.set(SecurityExchange_2);
  Instrument_2.insert(SecurityExchange_2.getString());
  FIX::SecurityGroup SecurityGroup_2("STRING_1319883239");
  msg.set(SecurityGroup_2);
  Instrument_2.insert(SecurityGroup_2.getString());
  FIX::SecurityID SecurityID_2("STRING_1764092096");
  msg.set(SecurityID_2);
  Instrument_2.insert(SecurityID_2.getString());
  FIX::SecurityIDSource SecurityIDSource_2("STRING_K");
  msg.set(SecurityIDSource_2);
  Instrument_2.insert(SecurityIDSource_2.getString());
  FIX::SecurityStatus SecurityStatus_2("STRING_1");
  msg.set(SecurityStatus_2);
  Instrument_2.insert(SecurityStatus_2.getString());
  FIX::SecuritySubType SecuritySubType_2("STRING_1701264282");
  msg.set(SecuritySubType_2);
  Instrument_2.insert(SecuritySubType_2.getString());
  FIX::SecurityType SecurityType_2("STRING_SPCLA");
  msg.set(SecurityType_2);
  Instrument_2.insert(SecurityType_2.getString());
  FIX::Seniority Seniority_2("STRING_SB");
  msg.set(Seniority_2);
  Instrument_2.insert(Seniority_2.getString());
  FIX::SettlMethod SettlMethod_2('C');
  msg.set(SettlMethod_2);
  Instrument_2.insert(SettlMethod_2.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_2("STRING_1347905194");
  msg.set(SettleOnOpenFlag_2);
  Instrument_2.insert(SettleOnOpenFlag_2.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_2("STRING_1359930868");
  msg.set(StateOrProvinceOfIssue_2);
  Instrument_2.insert(StateOrProvinceOfIssue_2.getString());
  FIX::StrikeCurrency StrikeCurrency_2("JPY");
  msg.set(StrikeCurrency_2);
  Instrument_2.insert(StrikeCurrency_2.getString());
  FIX::StrikeMultiplier StrikeMultiplier_2;
  StrikeMultiplier_2.setString("2710487");
  msg.set(StrikeMultiplier_2);
  Instrument_2.insert(StrikeMultiplier_2.getString());
  FIX::StrikePrice StrikePrice_2;
  StrikePrice_2.setString("4448524");
  msg.set(StrikePrice_2);
  Instrument_2.insert(StrikePrice_2.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_2(3);
  msg.set(StrikePriceBoundaryMethod_2);
  Instrument_2.insert(StrikePriceBoundaryMethod_2.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_2;
  StrikePriceBoundaryPrecision_2.setString("74.250000");
  msg.set(StrikePriceBoundaryPrecision_2);
  Instrument_2.insert(StrikePriceBoundaryPrecision_2.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_2(2);
  msg.set(StrikePriceDeterminationMethod_2);
  Instrument_2.insert(StrikePriceDeterminationMethod_2.getString());
  FIX::StrikeValue StrikeValue_2;
  StrikeValue_2.setString("4885069");
  msg.set(StrikeValue_2);
  Instrument_2.insert(StrikeValue_2.getString());
  FIX::Symbol Symbol_2("STRING_30277771");
  msg.set(Symbol_2);
  Instrument_2.insert(Symbol_2.getString());
  FIX::SymbolSfx SymbolSfx_2("STRING_CD");
  msg.set(SymbolSfx_2);
  Instrument_2.insert(SymbolSfx_2.getString());
  FIX::TimeUnit TimeUnit_2("STRING_Min");
  msg.set(TimeUnit_2);
  Instrument_2.insert(TimeUnit_2.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_2(4);
  msg.set(UnderlyingPriceDeterminationMethod_2);
  Instrument_2.insert(UnderlyingPriceDeterminationMethod_2.getString());
  FIX::UnitOfMeasure UnitOfMeasure_2("STRING_MMBtu");
  msg.set(UnitOfMeasure_2);
  Instrument_2.insert(UnitOfMeasure_2.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_2;
  UnitOfMeasureQty_2.setString("17718371");
  msg.set(UnitOfMeasureQty_2);
  Instrument_2.insert(UnitOfMeasureQty_2.getString());
  FIX::ValuationMethod ValuationMethod_2("STRING_FUT");
  msg.set(ValuationMethod_2);
  Instrument_2.insert(ValuationMethod_2.getString());
  all_values.push_back(Instrument_2);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_4;
    FIX::ComplexEventCondition ComplexEventCondition_4(2);
    noComplexEvents_0_0.set(ComplexEventCondition_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventCondition_4.getString());
    FIX::ComplexEventPrice ComplexEventPrice_4;
    ComplexEventPrice_4.setString("20860036");
    noComplexEvents_0_0.set(ComplexEventPrice_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPrice_4.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_4(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryMethod_4.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_4;
    ComplexEventPriceBoundaryPrecision_4.setString("72.150000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryPrecision_4.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_4(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceTimeType_4.getString());
    FIX::ComplexEventType ComplexEventType_4(7);
    noComplexEvents_0_0.set(ComplexEventType_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexEventType_4.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_4;
    ComplexOptPayoutAmount_4.setString("7059456");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_4);
    ComplexEvents_NoComplexEvents_4.insert(ComplexOptPayoutAmount_4.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_4);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_8;
      FIX::ComplexEventEndDate ComplexEventEndDate_8(FIX::UTCTIMESTAMP(1, 55, 28, 16, 102007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_8);
      ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventEndDate_8.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_8(FIX::UTCTIMESTAMP(0, 5, 18, 23, 112004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_8);
      ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventStartDate_8.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_8);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_15;
        FIX::ComplexEventEndTime ComplexEventEndTime_15(FIX::UTCTIMEONLY(22, 9, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_15);
        ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventEndTime_15.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_15(FIX::UTCTIMEONLY(3, 53, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_15);
        ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventStartTime_15.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_15);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_9;
      FIX::ComplexEventEndDate ComplexEventEndDate_9(FIX::UTCTIMESTAMP(5, 10, 6, 9, 92009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_9);
      ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventEndDate_9.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_9(FIX::UTCTIMESTAMP(15, 47, 19, 7, 42010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_9);
      ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventStartDate_9.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_9);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
        FIX::ComplexEventEndTime ComplexEventEndTime_16(FIX::UTCTIMEONLY(20, 54, 5));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_16);
        ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventEndTime_16.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_16(FIX::UTCTIMEONLY(8, 33, 55));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_16);
        ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventStartTime_16.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Advertisement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_5;
    FIX::EventDate EventDate_5("LOCALMKTDATE_1574235763");
    noEvents_0_0.set(EventDate_5);
    EvntGrp_NoEvents_5.insert(EventDate_5.getString());
    FIX::EventPx EventPx_5;
    EventPx_5.setString("16620211");
    noEvents_0_0.set(EventPx_5);
    EvntGrp_NoEvents_5.insert(EventPx_5.getString());
    FIX::EventText EventText_5("STRING_770480827");
    noEvents_0_0.set(EventText_5);
    EvntGrp_NoEvents_5.insert(EventText_5.getString());
    FIX::EventTime EventTime_5(FIX::UTCTIMESTAMP(0, 0, 1, 19, 72003));
    noEvents_0_0.set(EventTime_5);
    EvntGrp_NoEvents_5.insert(EventTime_5.getString());
    FIX::EventType EventType_5(10);
    noEvents_0_0.set(EventType_5);
    EvntGrp_NoEvents_5.insert(EventType_5.getString());
    all_values.push_back(EvntGrp_NoEvents_5);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_4;
    FIX::InstrumentPartyID InstrumentPartyID_4("STRING_1236907896");
    noInstrumentParties_0_0.set(InstrumentPartyID_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyID_4.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_4('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyIDSource_4.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_4(2050052530);
    noInstrumentParties_0_0.set(InstrumentPartyRole_4);
    InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyRole_4.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_4);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8;
      FIX::InstrumentPartySubID InstrumentPartySubID_8("STRING_2080519977");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_8);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubID_8.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_8(676268361);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_8);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubIDType_8.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_5;
    FIX::SecurityAltID SecurityAltID_5("STRING_2072216968");
    noSecurityAltID_0_0.set(SecurityAltID_5);
    SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltID_5.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_5("STRING_417431934");
    noSecurityAltID_0_0.set(SecurityAltIDSource_5);
    SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltIDSource_5.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_5);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_6;
    FIX::SecurityAltID SecurityAltID_6("STRING_1776617463");
    noSecurityAltID_0_1.set(SecurityAltID_6);
    SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltID_6.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_6("STRING_1461187");
    noSecurityAltID_0_1.set(SecurityAltIDSource_6);
    SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltIDSource_6.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_6);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_7;
    FIX::SecurityAltID SecurityAltID_7("STRING_562932962");
    noSecurityAltID_0_2.set(SecurityAltID_7);
    SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltID_7.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_7("STRING_1539770449");
    noSecurityAltID_0_2.set(SecurityAltIDSource_7);
    SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltIDSource_7.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_7);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_4;
  FIX::SecurityXML SecurityXML_5("XMLDATA_608072352");
  msg.set(SecurityXML_5);
  FIX::SecurityXMLLen SecurityXMLLen_2(1812271994);
  msg.set(SecurityXMLLen_2);
  FIX::SecurityXMLSchema SecurityXMLSchema_2("STRING_684333457");
  msg.set(SecurityXMLSchema_2);
  SecurityXML_4.insert(SecurityXMLSchema_2.getString());
  all_values.push_back(SecurityXML_4);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_0;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_0("DATA_358988701");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuer_0.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_0(1388067907);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuerLen_0.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_0("DATA_1196770880");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDesc_0.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_0(2021009825);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDescLen_0.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_0;
    UnderlyingAdjustedQuantity_0.setString("110650");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_0);
    UnderlyingInstrument_0.insert(UnderlyingAdjustedQuantity_0.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_0;
    UnderlyingAllocationPercent_0.setString("17.630000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_0);
    UnderlyingInstrument_0.insert(UnderlyingAllocationPercent_0.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_0;
    UnderlyingAttachmentPoint_0.setString("15.770000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingAttachmentPoint_0.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_0("STRING_1236467287");
    noUnderlyings_0_0.set(UnderlyingCFICode_0);
    UnderlyingInstrument_0.insert(UnderlyingCFICode_0.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_0("STRING_1149642876");
    noUnderlyings_0_0.set(UnderlyingCPProgram_0);
    UnderlyingInstrument_0.insert(UnderlyingCPProgram_0.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_0("STRING_2029848980");
    noUnderlyings_0_0.set(UnderlyingCPRegType_0);
    UnderlyingInstrument_0.insert(UnderlyingCPRegType_0.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_0;
    UnderlyingCapValue_0.setString("7078271");
    noUnderlyings_0_0.set(UnderlyingCapValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCapValue_0.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_0;
    UnderlyingCashAmount_0.setString("17331776");
    noUnderlyings_0_0.set(UnderlyingCashAmount_0);
    UnderlyingInstrument_0.insert(UnderlyingCashAmount_0.getString());
    FIX::UnderlyingCashType UnderlyingCashType_0("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_0);
    UnderlyingInstrument_0.insert(UnderlyingCashType_0.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_0;
    UnderlyingContractMultiplier_0.setString("17512227");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplier_0.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_0(822601928);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplierUnit_0.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_0("COUNTRY_899340752");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingCountryOfIssue_0.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_0("LOCALMKTDATE_1653791662");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponPaymentDate_0.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_0;
    UnderlyingCouponRate_0.setString("24.550000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponRate_0.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_0("STRING_832377081");
    noUnderlyings_0_0.set(UnderlyingCreditRating_0);
    UnderlyingInstrument_0.insert(UnderlyingCreditRating_0.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_0("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrency_0.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_0;
    UnderlyingCurrentValue_0.setString("7571104");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrentValue_0.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_0;
    UnderlyingDetachmentPoint_0.setString("83.100000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingDetachmentPoint_0.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_0;
    UnderlyingDirtyPrice_0.setString("7647133");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingDirtyPrice_0.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_0;
    UnderlyingEndPrice_0.setString("7585715");
    noUnderlyings_0_0.set(UnderlyingEndPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingEndPrice_0.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_0;
    UnderlyingEndValue_0.setString("11629412");
    noUnderlyings_0_0.set(UnderlyingEndValue_0);
    UnderlyingInstrument_0.insert(UnderlyingEndValue_0.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_0(157000145);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_0);
    UnderlyingInstrument_0.insert(UnderlyingExerciseStyle_0.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_0;
    UnderlyingFXRate_0.setString("13666439");
    noUnderlyings_0_0.set(UnderlyingFXRate_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRate_0.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_0('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRateCalc_0.getString());
    FIX::UnderlyingFactor UnderlyingFactor_0;
    UnderlyingFactor_0.setString("8413336");
    noUnderlyings_0_0.set(UnderlyingFactor_0);
    UnderlyingInstrument_0.insert(UnderlyingFactor_0.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_0(989179058);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_0);
    UnderlyingInstrument_0.insert(UnderlyingFlowScheduleType_0.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_0("STRING_1186718319");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_0);
    UnderlyingInstrument_0.insert(UnderlyingInstrRegistry_0.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_0("LOCALMKTDATE_81917862");
    noUnderlyings_0_0.set(UnderlyingIssueDate_0);
    UnderlyingInstrument_0.insert(UnderlyingIssueDate_0.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_0("STRING_38466290");
    noUnderlyings_0_0.set(UnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(UnderlyingIssuer_0.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_0("STRING_1060244497");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingLocaleOfIssue_0.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_0("LOCALMKTDATE_92982949");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityDate_0.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_0("MONTHYEAR_1815238053");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityMonthYear_0.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_0("TZTIMEONLY_1040482426");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityTime_0.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_0;
    UnderlyingNotionalPercentageOutstanding_0.setString("2.360000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_0('8');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_0);
    UnderlyingInstrument_0.insert(UnderlyingOptAttribute_0.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_0;
    UnderlyingOriginalNotionalPercentageOutstanding_0.setString("77.590000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingOriginalNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_0("STRING_2037277417");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasure_0.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_0;
    UnderlyingPriceUnitOfMeasureQty_0.setString("4030913");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasureQty_0.getString());
    FIX::UnderlyingProduct UnderlyingProduct_0(1592093360);
    noUnderlyings_0_0.set(UnderlyingProduct_0);
    UnderlyingInstrument_0.insert(UnderlyingProduct_0.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_0(1641016549);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_0);
    UnderlyingInstrument_0.insert(UnderlyingPutOrCall_0.getString());
    FIX::UnderlyingPx UnderlyingPx_0;
    UnderlyingPx_0.setString("12256932");
    noUnderlyings_0_0.set(UnderlyingPx_0);
    UnderlyingInstrument_0.insert(UnderlyingPx_0.getString());
    FIX::UnderlyingQty UnderlyingQty_0;
    UnderlyingQty_0.setString("3439504");
    noUnderlyings_0_0.set(UnderlyingQty_0);
    UnderlyingInstrument_0.insert(UnderlyingQty_0.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_0("LOCALMKTDATE_1147324563");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_0);
    UnderlyingInstrument_0.insert(UnderlyingRedemptionDate_0.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_0("STRING_1267745697");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingRepoCollateralSecurityType_0.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_0;
    UnderlyingRepurchaseRate_0.setString("75.460000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseRate_0.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_0(1329900939);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseTerm_0.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_0("STRING_255841578");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_0);
    UnderlyingInstrument_0.insert(UnderlyingRestructuringType_0.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_0("STRING_1933437948");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityDesc_0.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_0("EXCHANGE_1929909249");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityExchange_0.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_0("STRING_1020554923");
    noUnderlyings_0_0.set(UnderlyingSecurityID_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityID_0.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_0("STRING_544525889");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityIDSource_0.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_0("STRING_945366874");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecuritySubType_0.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_0("STRING_1177555068");
    noUnderlyings_0_0.set(UnderlyingSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityType_0.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_0("STRING_1911169830");
    noUnderlyings_0_0.set(UnderlyingSeniority_0);
    UnderlyingInstrument_0.insert(UnderlyingSeniority_0.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_0("STRING_1773096492");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlMethod_0.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_0(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlementType_0.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_0;
    UnderlyingStartValue_0.setString("7528652");
    noUnderlyings_0_0.set(UnderlyingStartValue_0);
    UnderlyingInstrument_0.insert(UnderlyingStartValue_0.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_0("STRING_812331164");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingStateOrProvinceOfIssue_0.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_0("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikeCurrency_0.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_0;
    UnderlyingStrikePrice_0.setString("18725756");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikePrice_0.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_0("STRING_46305835");
    noUnderlyings_0_0.set(UnderlyingSymbol_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbol_0.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_0("STRING_459085936");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbolSfx_0.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_0("STRING_765574439");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingTimeUnit_0.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_0("STRING_1375756071");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasure_0.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_0;
    UnderlyingUnitOfMeasureQty_0.setString("12764832");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasureQty_0.getString());
    all_values.push_back(UnderlyingInstrument_0);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_0;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_0("STRING_1265549840");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltID_0.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_0("STRING_1679574532");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltIDSource_0.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_1;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_1("STRING_1133031911");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltID_1.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_1("STRING_759082741");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltIDSource_1.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_0;
      FIX::UnderlyingStipType UnderlyingStipType_0("STRING_1476982375");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipType_0.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_0("STRING_1906407304");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipValue_0.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_0);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_1;
      FIX::UnderlyingStipType UnderlyingStipType_1("STRING_2025529823");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipType_1.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_1("STRING_505826273");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipValue_1.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_1);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_2;
      FIX::UnderlyingStipType UnderlyingStipType_2("STRING_1088824596");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipType_2.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_2("STRING_133887753");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipValue_2.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_2);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_0;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_0("STRING_871250197");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyID_0.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_0('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyIDSource_0.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_0(836306462);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyRole_0.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_0);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_0("STRING_184514097");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubID_0.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_0(599992644);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubIDType_0.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_1("STRING_1442229916");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubID_1.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_1(55919120);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubIDType_1.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_2("STRING_1352857884");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubID_2.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_2(107077432);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubIDType_2.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
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
