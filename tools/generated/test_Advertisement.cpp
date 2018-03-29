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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Advertisement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_0;
  FIX::AdvId AdvId_0("STRING_827947710");
  msg.set(AdvId_0);
  Advertisement_0.insert(AdvId_0.getString());
  FIX::AdvRefID AdvRefID_0("STRING_181524164");
  msg.set(AdvRefID_0);
  Advertisement_0.insert(AdvRefID_0.getString());
  FIX::AdvSide AdvSide_0('X');
  msg.set(AdvSide_0);
  Advertisement_0.insert(AdvSide_0.getString());
  FIX::AdvTransType AdvTransType_0("STRING_N");
  msg.set(AdvTransType_0);
  Advertisement_0.insert(AdvTransType_0.getString());
  FIX::Currency Currency_0("JPY");
  msg.set(Currency_0);
  Advertisement_0.insert(Currency_0.getString());
  FIX::EncodedText EncodedText_0("DATA_992084390");
  msg.set(EncodedText_0);
  Advertisement_0.insert(EncodedText_0.getString());
  FIX::EncodedTextLen EncodedTextLen_0(50778920);
  msg.set(EncodedTextLen_0);
  Advertisement_0.insert(EncodedTextLen_0.getString());
  FIX::LastMkt LastMkt_0("EXCHANGE_772261829");
  msg.set(LastMkt_0);
  Advertisement_0.insert(LastMkt_0.getString());
  FIX::Price Price_0;
  Price_0.setString("1833575");
  msg.set(Price_0);
  Advertisement_0.insert(Price_0.getString());
  FIX::QtyType QtyType_0(0);
  msg.set(QtyType_0);
  Advertisement_0.insert(QtyType_0.getString());
  FIX::Quantity Quantity_0;
  Quantity_0.setString("8609739");
  msg.set(Quantity_0);
  Advertisement_0.insert(Quantity_0.getString());
  FIX::Text Text_0("STRING_1335400460");
  msg.set(Text_0);
  Advertisement_0.insert(Text_0.getString());
  FIX::TradeDate TradeDate_0("LOCALMKTDATE_1304764498");
  msg.set(TradeDate_0);
  Advertisement_0.insert(TradeDate_0.getString());
  FIX::TradingSessionID TradingSessionID_0("STRING_1");
  msg.set(TradingSessionID_0);
  Advertisement_0.insert(TradingSessionID_0.getString());
  FIX::TradingSessionSubID TradingSessionSubID_0("STRING_6");
  msg.set(TradingSessionSubID_0);
  Advertisement_0.insert(TradingSessionSubID_0.getString());
  FIX::TransactTime TransactTime_0(FIX::UTCTIMESTAMP(20, 33, 40, 6, 5, 2005));
  msg.set(TransactTime_0);
  Advertisement_0.insert(TransactTime_0.getString());
  FIX::URLLink URLLink_0("STRING_1145525802");
  msg.set(URLLink_0);
  Advertisement_0.insert(URLLink_0.getString());
  all_values.push_back(Advertisement_0);

  all_compo_names.insert("Advertisement");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_0;
    FIX::EncodedLegIssuer EncodedLegIssuer_0("DATA_803293477");
    noLegs_0_0.set(EncodedLegIssuer_0);
    InstrumentLeg_0.insert(EncodedLegIssuer_0.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_0(1245046464);
    noLegs_0_0.set(EncodedLegIssuerLen_0);
    InstrumentLeg_0.insert(EncodedLegIssuerLen_0.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_0("DATA_467740957");
    noLegs_0_0.set(EncodedLegSecurityDesc_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDesc_0.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_0(1637800107);
    noLegs_0_0.set(EncodedLegSecurityDescLen_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDescLen_0.getString());
    FIX::LegCFICode LegCFICode_0("STRING_2050202046");
    noLegs_0_0.set(LegCFICode_0);
    InstrumentLeg_0.insert(LegCFICode_0.getString());
    FIX::LegContractMultiplier LegContractMultiplier_0;
    LegContractMultiplier_0.setString("7853528");
    noLegs_0_0.set(LegContractMultiplier_0);
    InstrumentLeg_0.insert(LegContractMultiplier_0.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_0(318264169);
    noLegs_0_0.set(LegContractMultiplierUnit_0);
    InstrumentLeg_0.insert(LegContractMultiplierUnit_0.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_0("MONTHYEAR_84242562");
    noLegs_0_0.set(LegContractSettlMonth_0);
    InstrumentLeg_0.insert(LegContractSettlMonth_0.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_0("COUNTRY_812846550");
    noLegs_0_0.set(LegCountryOfIssue_0);
    InstrumentLeg_0.insert(LegCountryOfIssue_0.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_0("LOCALMKTDATE_183000407");
    noLegs_0_0.set(LegCouponPaymentDate_0);
    InstrumentLeg_0.insert(LegCouponPaymentDate_0.getString());
    FIX::LegCouponRate LegCouponRate_0;
    LegCouponRate_0.setString("54.460000");
    noLegs_0_0.set(LegCouponRate_0);
    InstrumentLeg_0.insert(LegCouponRate_0.getString());
    FIX::LegCreditRating LegCreditRating_0("STRING_1751751359");
    noLegs_0_0.set(LegCreditRating_0);
    InstrumentLeg_0.insert(LegCreditRating_0.getString());
    FIX::LegCurrency LegCurrency_0("JPY");
    noLegs_0_0.set(LegCurrency_0);
    InstrumentLeg_0.insert(LegCurrency_0.getString());
    FIX::LegDatedDate LegDatedDate_0("LOCALMKTDATE_376529540");
    noLegs_0_0.set(LegDatedDate_0);
    InstrumentLeg_0.insert(LegDatedDate_0.getString());
    FIX::LegExerciseStyle LegExerciseStyle_0(1358442302);
    noLegs_0_0.set(LegExerciseStyle_0);
    InstrumentLeg_0.insert(LegExerciseStyle_0.getString());
    FIX::LegFactor LegFactor_0;
    LegFactor_0.setString("17621570");
    noLegs_0_0.set(LegFactor_0);
    InstrumentLeg_0.insert(LegFactor_0.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_0(1237503488);
    noLegs_0_0.set(LegFlowScheduleType_0);
    InstrumentLeg_0.insert(LegFlowScheduleType_0.getString());
    FIX::LegInstrRegistry LegInstrRegistry_0("STRING_546359115");
    noLegs_0_0.set(LegInstrRegistry_0);
    InstrumentLeg_0.insert(LegInstrRegistry_0.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_0("LOCALMKTDATE_919437856");
    noLegs_0_0.set(LegInterestAccrualDate_0);
    InstrumentLeg_0.insert(LegInterestAccrualDate_0.getString());
    FIX::LegIssueDate LegIssueDate_0("LOCALMKTDATE_1333415852");
    noLegs_0_0.set(LegIssueDate_0);
    InstrumentLeg_0.insert(LegIssueDate_0.getString());
    FIX::LegIssuer LegIssuer_0("STRING_78991896");
    noLegs_0_0.set(LegIssuer_0);
    InstrumentLeg_0.insert(LegIssuer_0.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_0("STRING_977307274");
    noLegs_0_0.set(LegLocaleOfIssue_0);
    InstrumentLeg_0.insert(LegLocaleOfIssue_0.getString());
    FIX::LegMaturityDate LegMaturityDate_0("LOCALMKTDATE_769851417");
    noLegs_0_0.set(LegMaturityDate_0);
    InstrumentLeg_0.insert(LegMaturityDate_0.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_0("MONTHYEAR_1275360969");
    noLegs_0_0.set(LegMaturityMonthYear_0);
    InstrumentLeg_0.insert(LegMaturityMonthYear_0.getString());
    FIX::LegMaturityTime LegMaturityTime_0("TZTIMEONLY_2034616274");
    noLegs_0_0.set(LegMaturityTime_0);
    InstrumentLeg_0.insert(LegMaturityTime_0.getString());
    FIX::LegOptAttribute LegOptAttribute_0('2');
    noLegs_0_0.set(LegOptAttribute_0);
    InstrumentLeg_0.insert(LegOptAttribute_0.getString());
    FIX::LegOptionRatio LegOptionRatio_0;
    LegOptionRatio_0.setString("6613083");
    noLegs_0_0.set(LegOptionRatio_0);
    InstrumentLeg_0.insert(LegOptionRatio_0.getString());
    FIX::LegPool LegPool_0("STRING_1199758979");
    noLegs_0_0.set(LegPool_0);
    InstrumentLeg_0.insert(LegPool_0.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_0("STRING_1071973865");
    noLegs_0_0.set(LegPriceUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasure_0.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_0;
    LegPriceUnitOfMeasureQty_0.setString("19911050");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasureQty_0.getString());
    FIX::LegProduct LegProduct_0(2003052457);
    noLegs_0_0.set(LegProduct_0);
    InstrumentLeg_0.insert(LegProduct_0.getString());
    FIX::LegPutOrCall LegPutOrCall_0(169536681);
    noLegs_0_0.set(LegPutOrCall_0);
    InstrumentLeg_0.insert(LegPutOrCall_0.getString());
    FIX::LegRatioQty LegRatioQty_0;
    LegRatioQty_0.setString("3113623");
    noLegs_0_0.set(LegRatioQty_0);
    InstrumentLeg_0.insert(LegRatioQty_0.getString());
    FIX::LegRedemptionDate LegRedemptionDate_0("LOCALMKTDATE_1493368916");
    noLegs_0_0.set(LegRedemptionDate_0);
    InstrumentLeg_0.insert(LegRedemptionDate_0.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_0("STRING_72255080");
    noLegs_0_0.set(LegRepoCollateralSecurityType_0);
    InstrumentLeg_0.insert(LegRepoCollateralSecurityType_0.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_0;
    LegRepurchaseRate_0.setString("52.500000");
    noLegs_0_0.set(LegRepurchaseRate_0);
    InstrumentLeg_0.insert(LegRepurchaseRate_0.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_0(1811633086);
    noLegs_0_0.set(LegRepurchaseTerm_0);
    InstrumentLeg_0.insert(LegRepurchaseTerm_0.getString());
    FIX::LegSecurityDesc LegSecurityDesc_0("STRING_156497642");
    noLegs_0_0.set(LegSecurityDesc_0);
    InstrumentLeg_0.insert(LegSecurityDesc_0.getString());
    FIX::LegSecurityExchange LegSecurityExchange_0("EXCHANGE_1909561800");
    noLegs_0_0.set(LegSecurityExchange_0);
    InstrumentLeg_0.insert(LegSecurityExchange_0.getString());
    FIX::LegSecurityID LegSecurityID_0("STRING_1994633493");
    noLegs_0_0.set(LegSecurityID_0);
    InstrumentLeg_0.insert(LegSecurityID_0.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_0("STRING_45339441");
    noLegs_0_0.set(LegSecurityIDSource_0);
    InstrumentLeg_0.insert(LegSecurityIDSource_0.getString());
    FIX::LegSecuritySubType LegSecuritySubType_0("STRING_1513829511");
    noLegs_0_0.set(LegSecuritySubType_0);
    InstrumentLeg_0.insert(LegSecuritySubType_0.getString());
    FIX::LegSecurityType LegSecurityType_0("STRING_1022234643");
    noLegs_0_0.set(LegSecurityType_0);
    InstrumentLeg_0.insert(LegSecurityType_0.getString());
    FIX::LegSide LegSide_0('2');
    noLegs_0_0.set(LegSide_0);
    InstrumentLeg_0.insert(LegSide_0.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_0("STRING_1890359051");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_0);
    InstrumentLeg_0.insert(LegStateOrProvinceOfIssue_0.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_0("GBP");
    noLegs_0_0.set(LegStrikeCurrency_0);
    InstrumentLeg_0.insert(LegStrikeCurrency_0.getString());
    FIX::LegStrikePrice LegStrikePrice_0;
    LegStrikePrice_0.setString("9803788");
    noLegs_0_0.set(LegStrikePrice_0);
    InstrumentLeg_0.insert(LegStrikePrice_0.getString());
    FIX::LegSymbol LegSymbol_0("STRING_779552412");
    noLegs_0_0.set(LegSymbol_0);
    InstrumentLeg_0.insert(LegSymbol_0.getString());
    FIX::LegSymbolSfx LegSymbolSfx_0("STRING_519071374");
    noLegs_0_0.set(LegSymbolSfx_0);
    InstrumentLeg_0.insert(LegSymbolSfx_0.getString());
    FIX::LegTimeUnit LegTimeUnit_0("STRING_166311096");
    noLegs_0_0.set(LegTimeUnit_0);
    InstrumentLeg_0.insert(LegTimeUnit_0.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_0("STRING_858544308");
    noLegs_0_0.set(LegUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegUnitOfMeasure_0.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_0;
    LegUnitOfMeasureQty_0.setString("14963786");
    noLegs_0_0.set(LegUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegUnitOfMeasureQty_0.getString());
    all_values.push_back(InstrumentLeg_0);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_0;
      FIX::LegSecurityAltID LegSecurityAltID_0("STRING_2133905278");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltID_0.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_0("STRING_1383511275");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltIDSource_0.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_0);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_1;
    FIX::EncodedLegIssuer EncodedLegIssuer_1("DATA_862610576");
    noLegs_0_1.set(EncodedLegIssuer_1);
    InstrumentLeg_1.insert(EncodedLegIssuer_1.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_1(647729935);
    noLegs_0_1.set(EncodedLegIssuerLen_1);
    InstrumentLeg_1.insert(EncodedLegIssuerLen_1.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_1("DATA_435786607");
    noLegs_0_1.set(EncodedLegSecurityDesc_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDesc_1.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_1(1934584442);
    noLegs_0_1.set(EncodedLegSecurityDescLen_1);
    InstrumentLeg_1.insert(EncodedLegSecurityDescLen_1.getString());
    FIX::LegCFICode LegCFICode_1("STRING_491351352");
    noLegs_0_1.set(LegCFICode_1);
    InstrumentLeg_1.insert(LegCFICode_1.getString());
    FIX::LegContractMultiplier LegContractMultiplier_1;
    LegContractMultiplier_1.setString("2913554");
    noLegs_0_1.set(LegContractMultiplier_1);
    InstrumentLeg_1.insert(LegContractMultiplier_1.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_1(2104121123);
    noLegs_0_1.set(LegContractMultiplierUnit_1);
    InstrumentLeg_1.insert(LegContractMultiplierUnit_1.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_1("MONTHYEAR_802713727");
    noLegs_0_1.set(LegContractSettlMonth_1);
    InstrumentLeg_1.insert(LegContractSettlMonth_1.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_1("COUNTRY_1784724332");
    noLegs_0_1.set(LegCountryOfIssue_1);
    InstrumentLeg_1.insert(LegCountryOfIssue_1.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_1("LOCALMKTDATE_28892555");
    noLegs_0_1.set(LegCouponPaymentDate_1);
    InstrumentLeg_1.insert(LegCouponPaymentDate_1.getString());
    FIX::LegCouponRate LegCouponRate_1;
    LegCouponRate_1.setString("89.770000");
    noLegs_0_1.set(LegCouponRate_1);
    InstrumentLeg_1.insert(LegCouponRate_1.getString());
    FIX::LegCreditRating LegCreditRating_1("STRING_1448873770");
    noLegs_0_1.set(LegCreditRating_1);
    InstrumentLeg_1.insert(LegCreditRating_1.getString());
    FIX::LegCurrency LegCurrency_1("CAN");
    noLegs_0_1.set(LegCurrency_1);
    InstrumentLeg_1.insert(LegCurrency_1.getString());
    FIX::LegDatedDate LegDatedDate_1("LOCALMKTDATE_1296023616");
    noLegs_0_1.set(LegDatedDate_1);
    InstrumentLeg_1.insert(LegDatedDate_1.getString());
    FIX::LegExerciseStyle LegExerciseStyle_1(230729639);
    noLegs_0_1.set(LegExerciseStyle_1);
    InstrumentLeg_1.insert(LegExerciseStyle_1.getString());
    FIX::LegFactor LegFactor_1;
    LegFactor_1.setString("10278529");
    noLegs_0_1.set(LegFactor_1);
    InstrumentLeg_1.insert(LegFactor_1.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_1(170774611);
    noLegs_0_1.set(LegFlowScheduleType_1);
    InstrumentLeg_1.insert(LegFlowScheduleType_1.getString());
    FIX::LegInstrRegistry LegInstrRegistry_1("STRING_215689798");
    noLegs_0_1.set(LegInstrRegistry_1);
    InstrumentLeg_1.insert(LegInstrRegistry_1.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_1("LOCALMKTDATE_770728396");
    noLegs_0_1.set(LegInterestAccrualDate_1);
    InstrumentLeg_1.insert(LegInterestAccrualDate_1.getString());
    FIX::LegIssueDate LegIssueDate_1("LOCALMKTDATE_403967908");
    noLegs_0_1.set(LegIssueDate_1);
    InstrumentLeg_1.insert(LegIssueDate_1.getString());
    FIX::LegIssuer LegIssuer_1("STRING_1962806964");
    noLegs_0_1.set(LegIssuer_1);
    InstrumentLeg_1.insert(LegIssuer_1.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_1("STRING_1751107288");
    noLegs_0_1.set(LegLocaleOfIssue_1);
    InstrumentLeg_1.insert(LegLocaleOfIssue_1.getString());
    FIX::LegMaturityDate LegMaturityDate_1("LOCALMKTDATE_1183520321");
    noLegs_0_1.set(LegMaturityDate_1);
    InstrumentLeg_1.insert(LegMaturityDate_1.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_1("MONTHYEAR_334394691");
    noLegs_0_1.set(LegMaturityMonthYear_1);
    InstrumentLeg_1.insert(LegMaturityMonthYear_1.getString());
    FIX::LegMaturityTime LegMaturityTime_1("TZTIMEONLY_1917418384");
    noLegs_0_1.set(LegMaturityTime_1);
    InstrumentLeg_1.insert(LegMaturityTime_1.getString());
    FIX::LegOptAttribute LegOptAttribute_1('2');
    noLegs_0_1.set(LegOptAttribute_1);
    InstrumentLeg_1.insert(LegOptAttribute_1.getString());
    FIX::LegOptionRatio LegOptionRatio_1;
    LegOptionRatio_1.setString("18307733");
    noLegs_0_1.set(LegOptionRatio_1);
    InstrumentLeg_1.insert(LegOptionRatio_1.getString());
    FIX::LegPool LegPool_1("STRING_706097249");
    noLegs_0_1.set(LegPool_1);
    InstrumentLeg_1.insert(LegPool_1.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_1("STRING_2028486259");
    noLegs_0_1.set(LegPriceUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasure_1.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_1;
    LegPriceUnitOfMeasureQty_1.setString("10668009");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegPriceUnitOfMeasureQty_1.getString());
    FIX::LegProduct LegProduct_1(1568707825);
    noLegs_0_1.set(LegProduct_1);
    InstrumentLeg_1.insert(LegProduct_1.getString());
    FIX::LegPutOrCall LegPutOrCall_1(528732547);
    noLegs_0_1.set(LegPutOrCall_1);
    InstrumentLeg_1.insert(LegPutOrCall_1.getString());
    FIX::LegRatioQty LegRatioQty_1;
    LegRatioQty_1.setString("15025875");
    noLegs_0_1.set(LegRatioQty_1);
    InstrumentLeg_1.insert(LegRatioQty_1.getString());
    FIX::LegRedemptionDate LegRedemptionDate_1("LOCALMKTDATE_1355808619");
    noLegs_0_1.set(LegRedemptionDate_1);
    InstrumentLeg_1.insert(LegRedemptionDate_1.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_1("STRING_1020083899");
    noLegs_0_1.set(LegRepoCollateralSecurityType_1);
    InstrumentLeg_1.insert(LegRepoCollateralSecurityType_1.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_1;
    LegRepurchaseRate_1.setString("29.900000");
    noLegs_0_1.set(LegRepurchaseRate_1);
    InstrumentLeg_1.insert(LegRepurchaseRate_1.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_1(1312446095);
    noLegs_0_1.set(LegRepurchaseTerm_1);
    InstrumentLeg_1.insert(LegRepurchaseTerm_1.getString());
    FIX::LegSecurityDesc LegSecurityDesc_1("STRING_1822797626");
    noLegs_0_1.set(LegSecurityDesc_1);
    InstrumentLeg_1.insert(LegSecurityDesc_1.getString());
    FIX::LegSecurityExchange LegSecurityExchange_1("EXCHANGE_1431183675");
    noLegs_0_1.set(LegSecurityExchange_1);
    InstrumentLeg_1.insert(LegSecurityExchange_1.getString());
    FIX::LegSecurityID LegSecurityID_1("STRING_1341338650");
    noLegs_0_1.set(LegSecurityID_1);
    InstrumentLeg_1.insert(LegSecurityID_1.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_1("STRING_1574742955");
    noLegs_0_1.set(LegSecurityIDSource_1);
    InstrumentLeg_1.insert(LegSecurityIDSource_1.getString());
    FIX::LegSecuritySubType LegSecuritySubType_1("STRING_732573797");
    noLegs_0_1.set(LegSecuritySubType_1);
    InstrumentLeg_1.insert(LegSecuritySubType_1.getString());
    FIX::LegSecurityType LegSecurityType_1("STRING_1526728848");
    noLegs_0_1.set(LegSecurityType_1);
    InstrumentLeg_1.insert(LegSecurityType_1.getString());
    FIX::LegSide LegSide_1('1');
    noLegs_0_1.set(LegSide_1);
    InstrumentLeg_1.insert(LegSide_1.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_1("STRING_2028597413");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_1);
    InstrumentLeg_1.insert(LegStateOrProvinceOfIssue_1.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_1("USD");
    noLegs_0_1.set(LegStrikeCurrency_1);
    InstrumentLeg_1.insert(LegStrikeCurrency_1.getString());
    FIX::LegStrikePrice LegStrikePrice_1;
    LegStrikePrice_1.setString("518883");
    noLegs_0_1.set(LegStrikePrice_1);
    InstrumentLeg_1.insert(LegStrikePrice_1.getString());
    FIX::LegSymbol LegSymbol_1("STRING_1973148286");
    noLegs_0_1.set(LegSymbol_1);
    InstrumentLeg_1.insert(LegSymbol_1.getString());
    FIX::LegSymbolSfx LegSymbolSfx_1("STRING_739864178");
    noLegs_0_1.set(LegSymbolSfx_1);
    InstrumentLeg_1.insert(LegSymbolSfx_1.getString());
    FIX::LegTimeUnit LegTimeUnit_1("STRING_455856285");
    noLegs_0_1.set(LegTimeUnit_1);
    InstrumentLeg_1.insert(LegTimeUnit_1.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_1("STRING_1788471602");
    noLegs_0_1.set(LegUnitOfMeasure_1);
    InstrumentLeg_1.insert(LegUnitOfMeasure_1.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_1;
    LegUnitOfMeasureQty_1.setString("3434878");
    noLegs_0_1.set(LegUnitOfMeasureQty_1);
    InstrumentLeg_1.insert(LegUnitOfMeasureQty_1.getString());
    all_values.push_back(InstrumentLeg_1);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_1;
      FIX::LegSecurityAltID LegSecurityAltID_1("STRING_2122866293");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltID_1.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_1("STRING_113422554");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_1);
      LegSecAltIDGrp_NoLegSecurityAltID_1.insert(LegSecurityAltIDSource_1.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_1);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_2;
      FIX::LegSecurityAltID LegSecurityAltID_2("STRING_1533957587");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltID_2.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_2("STRING_1806155985");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_2);
      LegSecAltIDGrp_NoLegSecurityAltID_2.insert(LegSecurityAltIDSource_2.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_2);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_3;
      FIX::LegSecurityAltID LegSecurityAltID_3("STRING_819519803");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltID_3.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_3("STRING_1414960199");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_3);
      LegSecAltIDGrp_NoLegSecurityAltID_3.insert(LegSecurityAltIDSource_3.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_3);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_1;
  FIX::AttachmentPoint AttachmentPoint_1;
  AttachmentPoint_1.setString("33.050000");
  msg.set(AttachmentPoint_1);
  Instrument_1.insert(AttachmentPoint_1.getString());
  FIX::CFICode CFICode_1("STRING_240743981");
  msg.set(CFICode_1);
  Instrument_1.insert(CFICode_1.getString());
  FIX::CPProgram CPProgram_1(1);
  msg.set(CPProgram_1);
  Instrument_1.insert(CPProgram_1.getString());
  FIX::CPRegType CPRegType_1("STRING_80577231");
  msg.set(CPRegType_1);
  Instrument_1.insert(CPRegType_1.getString());
  FIX::CapPrice CapPrice_1;
  CapPrice_1.setString("15965526");
  msg.set(CapPrice_1);
  Instrument_1.insert(CapPrice_1.getString());
  FIX::ContractMultiplier ContractMultiplier_1;
  ContractMultiplier_1.setString("8162929");
  msg.set(ContractMultiplier_1);
  Instrument_1.insert(ContractMultiplier_1.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_1(0);
  msg.set(ContractMultiplierUnit_1);
  Instrument_1.insert(ContractMultiplierUnit_1.getString());
  FIX::ContractSettlMonth ContractSettlMonth_1("MONTHYEAR_761515047");
  msg.set(ContractSettlMonth_1);
  Instrument_1.insert(ContractSettlMonth_1.getString());
  FIX::CountryOfIssue CountryOfIssue_1("COUNTRY_491606976");
  msg.set(CountryOfIssue_1);
  Instrument_1.insert(CountryOfIssue_1.getString());
  FIX::CouponPaymentDate CouponPaymentDate_1("LOCALMKTDATE_1158220249");
  msg.set(CouponPaymentDate_1);
  Instrument_1.insert(CouponPaymentDate_1.getString());
  FIX::CouponRate CouponRate_1;
  CouponRate_1.setString("36.980000");
  msg.set(CouponRate_1);
  Instrument_1.insert(CouponRate_1.getString());
  FIX::CreditRating CreditRating_1("STRING_2066349931");
  msg.set(CreditRating_1);
  Instrument_1.insert(CreditRating_1.getString());
  FIX::DatedDate DatedDate_1("LOCALMKTDATE_1890794046");
  msg.set(DatedDate_1);
  Instrument_1.insert(DatedDate_1.getString());
  FIX::DetachmentPoint DetachmentPoint_1;
  DetachmentPoint_1.setString("88.980000");
  msg.set(DetachmentPoint_1);
  Instrument_1.insert(DetachmentPoint_1.getString());
  FIX::EncodedIssuer EncodedIssuer_1("DATA_1007632720");
  msg.set(EncodedIssuer_1);
  Instrument_1.insert(EncodedIssuer_1.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_1(1771907812);
  msg.set(EncodedIssuerLen_1);
  Instrument_1.insert(EncodedIssuerLen_1.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_1("DATA_1092073738");
  msg.set(EncodedSecurityDesc_1);
  Instrument_1.insert(EncodedSecurityDesc_1.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_1(976768502);
  msg.set(EncodedSecurityDescLen_1);
  Instrument_1.insert(EncodedSecurityDescLen_1.getString());
  FIX::ExerciseStyle ExerciseStyle_1(2);
  msg.set(ExerciseStyle_1);
  Instrument_1.insert(ExerciseStyle_1.getString());
  FIX::Factor Factor_1;
  Factor_1.setString("9177383");
  msg.set(Factor_1);
  Instrument_1.insert(Factor_1.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_1(false);
  msg.set(FlexProductEligibilityIndicator_1);
  Instrument_1.insert(FlexProductEligibilityIndicator_1.getString());
  FIX::FlexibleIndicator FlexibleIndicator_1(false);
  msg.set(FlexibleIndicator_1);
  Instrument_1.insert(FlexibleIndicator_1.getString());
  FIX::FloorPrice FloorPrice_1;
  FloorPrice_1.setString("5587263");
  msg.set(FloorPrice_1);
  Instrument_1.insert(FloorPrice_1.getString());
  FIX::FlowScheduleType FlowScheduleType_1(4);
  msg.set(FlowScheduleType_1);
  Instrument_1.insert(FlowScheduleType_1.getString());
  FIX::InstrRegistry InstrRegistry_1("STRING_1771545431");
  msg.set(InstrRegistry_1);
  Instrument_1.insert(InstrRegistry_1.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_1('5');
  msg.set(InstrmtAssignmentMethod_1);
  Instrument_1.insert(InstrmtAssignmentMethod_1.getString());
  FIX::InterestAccrualDate InterestAccrualDate_1("LOCALMKTDATE_26059406");
  msg.set(InterestAccrualDate_1);
  Instrument_1.insert(InterestAccrualDate_1.getString());
  FIX::IssueDate IssueDate_1("LOCALMKTDATE_1158019371");
  msg.set(IssueDate_1);
  Instrument_1.insert(IssueDate_1.getString());
  FIX::Issuer Issuer_1("STRING_192781313");
  msg.set(Issuer_1);
  Instrument_1.insert(Issuer_1.getString());
  FIX::ListMethod ListMethod_1(1);
  msg.set(ListMethod_1);
  Instrument_1.insert(ListMethod_1.getString());
  FIX::LocaleOfIssue LocaleOfIssue_1("STRING_425495922");
  msg.set(LocaleOfIssue_1);
  Instrument_1.insert(LocaleOfIssue_1.getString());
  FIX::MaturityDate MaturityDate_1("LOCALMKTDATE_918254618");
  msg.set(MaturityDate_1);
  Instrument_1.insert(MaturityDate_1.getString());
  FIX::MaturityMonthYear MaturityMonthYear_1("MONTHYEAR_1086323190");
  msg.set(MaturityMonthYear_1);
  Instrument_1.insert(MaturityMonthYear_1.getString());
  FIX::MaturityTime MaturityTime_1("TZTIMEONLY_221705020");
  msg.set(MaturityTime_1);
  Instrument_1.insert(MaturityTime_1.getString());
  FIX::MinPriceIncrement MinPriceIncrement_1;
  MinPriceIncrement_1.setString("9988318");
  msg.set(MinPriceIncrement_1);
  Instrument_1.insert(MinPriceIncrement_1.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_1;
  MinPriceIncrementAmount_1.setString("5353921");
  msg.set(MinPriceIncrementAmount_1);
  Instrument_1.insert(MinPriceIncrementAmount_1.getString());
  FIX::NTPositionLimit NTPositionLimit_1(1037998017);
  msg.set(NTPositionLimit_1);
  Instrument_1.insert(NTPositionLimit_1.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_1;
  NotionalPercentageOutstanding_1.setString("84.240000");
  msg.set(NotionalPercentageOutstanding_1);
  Instrument_1.insert(NotionalPercentageOutstanding_1.getString());
  FIX::OptAttribute OptAttribute_1('1');
  msg.set(OptAttribute_1);
  Instrument_1.insert(OptAttribute_1.getString());
  FIX::OptPayoutAmount OptPayoutAmount_1;
  OptPayoutAmount_1.setString("15296049");
  msg.set(OptPayoutAmount_1);
  Instrument_1.insert(OptPayoutAmount_1.getString());
  FIX::OptPayoutType OptPayoutType_1(3);
  msg.set(OptPayoutType_1);
  Instrument_1.insert(OptPayoutType_1.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_1;
  OriginalNotionalPercentageOutstanding_1.setString("72.400000");
  msg.set(OriginalNotionalPercentageOutstanding_1);
  Instrument_1.insert(OriginalNotionalPercentageOutstanding_1.getString());
  FIX::Pool Pool_1("STRING_1448471277");
  msg.set(Pool_1);
  Instrument_1.insert(Pool_1.getString());
  FIX::PositionLimit PositionLimit_1(1627399071);
  msg.set(PositionLimit_1);
  Instrument_1.insert(PositionLimit_1.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_1("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_1);
  Instrument_1.insert(PriceQuoteMethod_1.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_1("STRING_308620349");
  msg.set(PriceUnitOfMeasure_1);
  Instrument_1.insert(PriceUnitOfMeasure_1.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_1;
  PriceUnitOfMeasureQty_1.setString("12518232");
  msg.set(PriceUnitOfMeasureQty_1);
  Instrument_1.insert(PriceUnitOfMeasureQty_1.getString());
  FIX::Product Product_1(6);
  msg.set(Product_1);
  Instrument_1.insert(Product_1.getString());
  FIX::ProductComplex ProductComplex_1("STRING_1285388852");
  msg.set(ProductComplex_1);
  Instrument_1.insert(ProductComplex_1.getString());
  FIX::PutOrCall PutOrCall_1(0);
  msg.set(PutOrCall_1);
  Instrument_1.insert(PutOrCall_1.getString());
  FIX::RedemptionDate RedemptionDate_1("LOCALMKTDATE_449220957");
  msg.set(RedemptionDate_1);
  Instrument_1.insert(RedemptionDate_1.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_1("STRING_854537885");
  msg.set(RepoCollateralSecurityType_1);
  Instrument_1.insert(RepoCollateralSecurityType_1.getString());
  FIX::RepurchaseRate RepurchaseRate_1;
  RepurchaseRate_1.setString("46.010000");
  msg.set(RepurchaseRate_1);
  Instrument_1.insert(RepurchaseRate_1.getString());
  FIX::RepurchaseTerm RepurchaseTerm_1(1007947287);
  msg.set(RepurchaseTerm_1);
  Instrument_1.insert(RepurchaseTerm_1.getString());
  FIX::RestructuringType RestructuringType_1("STRING_FR");
  msg.set(RestructuringType_1);
  Instrument_1.insert(RestructuringType_1.getString());
  FIX::SecurityDesc SecurityDesc_1("STRING_684366385");
  msg.set(SecurityDesc_1);
  Instrument_1.insert(SecurityDesc_1.getString());
  FIX::SecurityExchange SecurityExchange_1("EXCHANGE_1542056263");
  msg.set(SecurityExchange_1);
  Instrument_1.insert(SecurityExchange_1.getString());
  FIX::SecurityGroup SecurityGroup_1("STRING_793234142");
  msg.set(SecurityGroup_1);
  Instrument_1.insert(SecurityGroup_1.getString());
  FIX::SecurityID SecurityID_1("STRING_1842385756");
  msg.set(SecurityID_1);
  Instrument_1.insert(SecurityID_1.getString());
  FIX::SecurityIDSource SecurityIDSource_1("STRING_C");
  msg.set(SecurityIDSource_1);
  Instrument_1.insert(SecurityIDSource_1.getString());
  FIX::SecurityStatus SecurityStatus_1("STRING_1");
  msg.set(SecurityStatus_1);
  Instrument_1.insert(SecurityStatus_1.getString());
  FIX::SecuritySubType SecuritySubType_1("STRING_120398030");
  msg.set(SecuritySubType_1);
  Instrument_1.insert(SecuritySubType_1.getString());
  FIX::SecurityType SecurityType_1("STRING_IRS");
  msg.set(SecurityType_1);
  Instrument_1.insert(SecurityType_1.getString());
  FIX::Seniority Seniority_1("STRING_SB");
  msg.set(Seniority_1);
  Instrument_1.insert(Seniority_1.getString());
  FIX::SettlMethod SettlMethod_1('C');
  msg.set(SettlMethod_1);
  Instrument_1.insert(SettlMethod_1.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_1("STRING_1504440397");
  msg.set(SettleOnOpenFlag_1);
  Instrument_1.insert(SettleOnOpenFlag_1.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_1("STRING_1113045037");
  msg.set(StateOrProvinceOfIssue_1);
  Instrument_1.insert(StateOrProvinceOfIssue_1.getString());
  FIX::StrikeCurrency StrikeCurrency_1("CHF");
  msg.set(StrikeCurrency_1);
  Instrument_1.insert(StrikeCurrency_1.getString());
  FIX::StrikeMultiplier StrikeMultiplier_1;
  StrikeMultiplier_1.setString("2624685");
  msg.set(StrikeMultiplier_1);
  Instrument_1.insert(StrikeMultiplier_1.getString());
  FIX::StrikePrice StrikePrice_1;
  StrikePrice_1.setString("7622224");
  msg.set(StrikePrice_1);
  Instrument_1.insert(StrikePrice_1.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_1(2);
  msg.set(StrikePriceBoundaryMethod_1);
  Instrument_1.insert(StrikePriceBoundaryMethod_1.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_1;
  StrikePriceBoundaryPrecision_1.setString("58.200000");
  msg.set(StrikePriceBoundaryPrecision_1);
  Instrument_1.insert(StrikePriceBoundaryPrecision_1.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_1(3);
  msg.set(StrikePriceDeterminationMethod_1);
  Instrument_1.insert(StrikePriceDeterminationMethod_1.getString());
  FIX::StrikeValue StrikeValue_1;
  StrikeValue_1.setString("14468292");
  msg.set(StrikeValue_1);
  Instrument_1.insert(StrikeValue_1.getString());
  FIX::Symbol Symbol_1("STRING_2101638311");
  msg.set(Symbol_1);
  Instrument_1.insert(Symbol_1.getString());
  FIX::SymbolSfx SymbolSfx_1("STRING_WI");
  msg.set(SymbolSfx_1);
  Instrument_1.insert(SymbolSfx_1.getString());
  FIX::TimeUnit TimeUnit_1("STRING_Min");
  msg.set(TimeUnit_1);
  Instrument_1.insert(TimeUnit_1.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_1(1);
  msg.set(UnderlyingPriceDeterminationMethod_1);
  Instrument_1.insert(UnderlyingPriceDeterminationMethod_1.getString());
  FIX::UnitOfMeasure UnitOfMeasure_1("STRING_Bbl");
  msg.set(UnitOfMeasure_1);
  Instrument_1.insert(UnitOfMeasure_1.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_1;
  UnitOfMeasureQty_1.setString("14793046");
  msg.set(UnitOfMeasureQty_1);
  Instrument_1.insert(UnitOfMeasureQty_1.getString());
  FIX::ValuationMethod ValuationMethod_1("STRING_CDSD");
  msg.set(ValuationMethod_1);
  Instrument_1.insert(ValuationMethod_1.getString());
  all_values.push_back(Instrument_1);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_2;
    FIX::ComplexEventCondition ComplexEventCondition_2(2);
    noComplexEvents_0_0.set(ComplexEventCondition_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexEventCondition_2.getString());
    FIX::ComplexEventPrice ComplexEventPrice_2;
    ComplexEventPrice_2.setString("9428054");
    noComplexEvents_0_0.set(ComplexEventPrice_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexEventPrice_2.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_2(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryMethod_2.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_2;
    ComplexEventPriceBoundaryPrecision_2.setString("19.720000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryPrecision_2.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_2(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceTimeType_2.getString());
    FIX::ComplexEventType ComplexEventType_2(5);
    noComplexEvents_0_0.set(ComplexEventType_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexEventType_2.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_2;
    ComplexOptPayoutAmount_2.setString("7713940");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_2);
    ComplexEvents_NoComplexEvents_2.insert(ComplexOptPayoutAmount_2.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_2);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_6;
      FIX::ComplexEventEndDate ComplexEventEndDate_6(FIX::UTCTIMESTAMP(14, 1, 18, 8, 3, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_6);
      ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventEndDate_6.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_6(FIX::UTCTIMESTAMP(0, 7, 32, 2, 5, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_6);
      ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventStartDate_6.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_6);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_12;
        FIX::ComplexEventEndTime ComplexEventEndTime_12(FIX::UTCTIMEONLY(2, 10, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_12);
        ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventEndTime_12.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_12(FIX::UTCTIMEONLY(15, 37, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_12);
        ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventStartTime_12.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_12);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_13;
        FIX::ComplexEventEndTime ComplexEventEndTime_13(FIX::UTCTIMEONLY(18, 51, 26));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_13);
        ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventEndTime_13.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_13(FIX::UTCTIMEONLY(14, 26, 36));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_13);
        ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventStartTime_13.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_13);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_14;
        FIX::ComplexEventEndTime ComplexEventEndTime_14(FIX::UTCTIMEONLY(4, 37, 16));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_14);
        ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventEndTime_14.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_14(FIX::UTCTIMEONLY(20, 55, 8));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_14);
        ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventStartTime_14.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_14);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_7;
      FIX::ComplexEventEndDate ComplexEventEndDate_7(FIX::UTCTIMESTAMP(15, 32, 34, 23, 12, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_7);
      ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventEndDate_7.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_7(FIX::UTCTIMESTAMP(5, 9, 26, 18, 5, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_7);
      ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventStartDate_7.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_7);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_15;
        FIX::ComplexEventEndTime ComplexEventEndTime_15(FIX::UTCTIMEONLY(2, 23, 17));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_15);
        ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventEndTime_15.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_15(FIX::UTCTIMEONLY(14, 44, 26));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_15);
        ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventStartTime_15.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_15);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
        FIX::ComplexEventEndTime ComplexEventEndTime_16(FIX::UTCTIMEONLY(16, 55, 40));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_16);
        ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventEndTime_16.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_16(FIX::UTCTIMEONLY(7, 27, 21));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_16);
        ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventStartTime_16.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_3;
    FIX::ComplexEventCondition ComplexEventCondition_3(2);
    noComplexEvents_0_1.set(ComplexEventCondition_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexEventCondition_3.getString());
    FIX::ComplexEventPrice ComplexEventPrice_3;
    ComplexEventPrice_3.setString("16317255");
    noComplexEvents_0_1.set(ComplexEventPrice_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexEventPrice_3.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_3(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryMethod_3.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_3;
    ComplexEventPriceBoundaryPrecision_3.setString("53.340000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryPrecision_3.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_3(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceTimeType_3.getString());
    FIX::ComplexEventType ComplexEventType_3(6);
    noComplexEvents_0_1.set(ComplexEventType_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexEventType_3.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_3;
    ComplexOptPayoutAmount_3.setString("4221896");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_3);
    ComplexEvents_NoComplexEvents_3.insert(ComplexOptPayoutAmount_3.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_3);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_8;
      FIX::ComplexEventEndDate ComplexEventEndDate_8(FIX::UTCTIMESTAMP(18, 42, 28, 10, 3, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_8);
      ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventEndDate_8.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_8(FIX::UTCTIMESTAMP(9, 24, 59, 14, 7, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_8);
      ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventStartDate_8.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_8);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_17;
        FIX::ComplexEventEndTime ComplexEventEndTime_17(FIX::UTCTIMEONLY(15, 48, 38));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_17);
        ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventEndTime_17.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_17(FIX::UTCTIMEONLY(11, 5, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_17);
        ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventStartTime_17.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_17);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_18;
        FIX::ComplexEventEndTime ComplexEventEndTime_18(FIX::UTCTIMEONLY(0, 47, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_18);
        ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventEndTime_18.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_18(FIX::UTCTIMEONLY(23, 42, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_18);
        ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventStartTime_18.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_18);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_9;
      FIX::ComplexEventEndDate ComplexEventEndDate_9(FIX::UTCTIMESTAMP(4, 24, 53, 22, 3, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_9);
      ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventEndDate_9.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_9(FIX::UTCTIMESTAMP(15, 9, 47, 18, 8, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_9);
      ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventStartDate_9.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_9);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_19;
        FIX::ComplexEventEndTime ComplexEventEndTime_19(FIX::UTCTIMEONLY(1, 46, 27));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_19);
        ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventEndTime_19.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_19(FIX::UTCTIMEONLY(22, 25, 23));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_19);
        ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventStartTime_19.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_19);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Advertisement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_3;
    FIX::EventDate EventDate_3("LOCALMKTDATE_25983353");
    noEvents_0_0.set(EventDate_3);
    EvntGrp_NoEvents_3.insert(EventDate_3.getString());
    FIX::EventPx EventPx_3;
    EventPx_3.setString("11399107");
    noEvents_0_0.set(EventPx_3);
    EvntGrp_NoEvents_3.insert(EventPx_3.getString());
    FIX::EventText EventText_3("STRING_29559898");
    noEvents_0_0.set(EventText_3);
    EvntGrp_NoEvents_3.insert(EventText_3.getString());
    FIX::EventTime EventTime_3(FIX::UTCTIMESTAMP(6, 40, 8, 19, 9, 2008));
    noEvents_0_0.set(EventTime_3);
    EvntGrp_NoEvents_3.insert(EventTime_3.getString());
    FIX::EventType EventType_3(5);
    noEvents_0_0.set(EventType_3);
    EvntGrp_NoEvents_3.insert(EventType_3.getString());
    all_values.push_back(EvntGrp_NoEvents_3);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_2;
    FIX::InstrumentPartyID InstrumentPartyID_2("STRING_1001173826");
    noInstrumentParties_0_0.set(InstrumentPartyID_2);
    InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyID_2.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_2('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_2);
    InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyIDSource_2.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_2(1343142042);
    noInstrumentParties_0_0.set(InstrumentPartyRole_2);
    InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyRole_2.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_2);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5;
      FIX::InstrumentPartySubID InstrumentPartySubID_5("STRING_265809731");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_5);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubID_5.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_5(590812461);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_5);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubIDType_5.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_3;
    FIX::SecurityAltID SecurityAltID_3("STRING_728553654");
    noSecurityAltID_0_0.set(SecurityAltID_3);
    SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltID_3.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_3("STRING_1297119583");
    noSecurityAltID_0_0.set(SecurityAltIDSource_3);
    SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltIDSource_3.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_3);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_2;
  FIX::SecurityXML SecurityXML_3("XMLDATA_2129831598");
  msg.set(SecurityXML_3);
  FIX::SecurityXMLLen SecurityXMLLen_1(1981147244);
  msg.set(SecurityXMLLen_1);
  FIX::SecurityXMLSchema SecurityXMLSchema_1("STRING_233896945");
  msg.set(SecurityXMLSchema_1);
  SecurityXML_2.insert(SecurityXMLSchema_1.getString());
  all_values.push_back(SecurityXML_2);
  all_compo_names.insert("SecurityXML");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_0;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_0("DATA_1540369803");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuer_0.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_0(1705532455);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuerLen_0.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_0("DATA_1755869231");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDesc_0.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_0(1590851788);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDescLen_0.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_0;
    UnderlyingAdjustedQuantity_0.setString("8356117");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_0);
    UnderlyingInstrument_0.insert(UnderlyingAdjustedQuantity_0.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_0;
    UnderlyingAllocationPercent_0.setString("56.200000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_0);
    UnderlyingInstrument_0.insert(UnderlyingAllocationPercent_0.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_0;
    UnderlyingAttachmentPoint_0.setString("51.410000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingAttachmentPoint_0.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_0("STRING_1975522573");
    noUnderlyings_0_0.set(UnderlyingCFICode_0);
    UnderlyingInstrument_0.insert(UnderlyingCFICode_0.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_0("STRING_1527575518");
    noUnderlyings_0_0.set(UnderlyingCPProgram_0);
    UnderlyingInstrument_0.insert(UnderlyingCPProgram_0.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_0("STRING_1138614040");
    noUnderlyings_0_0.set(UnderlyingCPRegType_0);
    UnderlyingInstrument_0.insert(UnderlyingCPRegType_0.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_0;
    UnderlyingCapValue_0.setString("6690465");
    noUnderlyings_0_0.set(UnderlyingCapValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCapValue_0.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_0;
    UnderlyingCashAmount_0.setString("1192548");
    noUnderlyings_0_0.set(UnderlyingCashAmount_0);
    UnderlyingInstrument_0.insert(UnderlyingCashAmount_0.getString());
    FIX::UnderlyingCashType UnderlyingCashType_0("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_0);
    UnderlyingInstrument_0.insert(UnderlyingCashType_0.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_0;
    UnderlyingContractMultiplier_0.setString("3485206");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplier_0.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_0(1465012106);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplierUnit_0.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_0("COUNTRY_1822787832");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingCountryOfIssue_0.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_0("LOCALMKTDATE_623445966");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponPaymentDate_0.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_0;
    UnderlyingCouponRate_0.setString("42.200000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponRate_0.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_0("STRING_676478010");
    noUnderlyings_0_0.set(UnderlyingCreditRating_0);
    UnderlyingInstrument_0.insert(UnderlyingCreditRating_0.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_0("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrency_0.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_0;
    UnderlyingCurrentValue_0.setString("17210251");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrentValue_0.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_0;
    UnderlyingDetachmentPoint_0.setString("57.260000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingDetachmentPoint_0.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_0;
    UnderlyingDirtyPrice_0.setString("14475150");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingDirtyPrice_0.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_0;
    UnderlyingEndPrice_0.setString("18450427");
    noUnderlyings_0_0.set(UnderlyingEndPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingEndPrice_0.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_0;
    UnderlyingEndValue_0.setString("19601193");
    noUnderlyings_0_0.set(UnderlyingEndValue_0);
    UnderlyingInstrument_0.insert(UnderlyingEndValue_0.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_0(597151012);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_0);
    UnderlyingInstrument_0.insert(UnderlyingExerciseStyle_0.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_0;
    UnderlyingFXRate_0.setString("18273906");
    noUnderlyings_0_0.set(UnderlyingFXRate_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRate_0.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_0('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRateCalc_0.getString());
    FIX::UnderlyingFactor UnderlyingFactor_0;
    UnderlyingFactor_0.setString("8310479");
    noUnderlyings_0_0.set(UnderlyingFactor_0);
    UnderlyingInstrument_0.insert(UnderlyingFactor_0.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_0(1493588028);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_0);
    UnderlyingInstrument_0.insert(UnderlyingFlowScheduleType_0.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_0("STRING_1186669132");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_0);
    UnderlyingInstrument_0.insert(UnderlyingInstrRegistry_0.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_0("LOCALMKTDATE_389096764");
    noUnderlyings_0_0.set(UnderlyingIssueDate_0);
    UnderlyingInstrument_0.insert(UnderlyingIssueDate_0.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_0("STRING_1101973611");
    noUnderlyings_0_0.set(UnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(UnderlyingIssuer_0.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_0("STRING_630037273");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingLocaleOfIssue_0.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_0("LOCALMKTDATE_1224708554");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityDate_0.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_0("MONTHYEAR_452505583");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityMonthYear_0.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_0("TZTIMEONLY_99388766");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityTime_0.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_0;
    UnderlyingNotionalPercentageOutstanding_0.setString("74.790000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_0('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_0);
    UnderlyingInstrument_0.insert(UnderlyingOptAttribute_0.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_0;
    UnderlyingOriginalNotionalPercentageOutstanding_0.setString("28.060000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingOriginalNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_0("STRING_1721794050");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasure_0.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_0;
    UnderlyingPriceUnitOfMeasureQty_0.setString("20993359");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasureQty_0.getString());
    FIX::UnderlyingProduct UnderlyingProduct_0(1493649466);
    noUnderlyings_0_0.set(UnderlyingProduct_0);
    UnderlyingInstrument_0.insert(UnderlyingProduct_0.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_0(2070314712);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_0);
    UnderlyingInstrument_0.insert(UnderlyingPutOrCall_0.getString());
    FIX::UnderlyingPx UnderlyingPx_0;
    UnderlyingPx_0.setString("14168644");
    noUnderlyings_0_0.set(UnderlyingPx_0);
    UnderlyingInstrument_0.insert(UnderlyingPx_0.getString());
    FIX::UnderlyingQty UnderlyingQty_0;
    UnderlyingQty_0.setString("11689536");
    noUnderlyings_0_0.set(UnderlyingQty_0);
    UnderlyingInstrument_0.insert(UnderlyingQty_0.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_0("LOCALMKTDATE_546277030");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_0);
    UnderlyingInstrument_0.insert(UnderlyingRedemptionDate_0.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_0("STRING_930425021");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingRepoCollateralSecurityType_0.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_0;
    UnderlyingRepurchaseRate_0.setString("16.610000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseRate_0.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_0(1512033026);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseTerm_0.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_0("STRING_1787127636");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_0);
    UnderlyingInstrument_0.insert(UnderlyingRestructuringType_0.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_0("STRING_1418973169");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityDesc_0.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_0("EXCHANGE_596115104");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityExchange_0.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_0("STRING_1087159065");
    noUnderlyings_0_0.set(UnderlyingSecurityID_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityID_0.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_0("STRING_1116532230");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityIDSource_0.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_0("STRING_408750837");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecuritySubType_0.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_0("STRING_1684310077");
    noUnderlyings_0_0.set(UnderlyingSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityType_0.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_0("STRING_796439241");
    noUnderlyings_0_0.set(UnderlyingSeniority_0);
    UnderlyingInstrument_0.insert(UnderlyingSeniority_0.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_0("STRING_55050166");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlMethod_0.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_0(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlementType_0.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_0;
    UnderlyingStartValue_0.setString("1425436");
    noUnderlyings_0_0.set(UnderlyingStartValue_0);
    UnderlyingInstrument_0.insert(UnderlyingStartValue_0.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_0("STRING_1241719299");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingStateOrProvinceOfIssue_0.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_0("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikeCurrency_0.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_0;
    UnderlyingStrikePrice_0.setString("18717565");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikePrice_0.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_0("STRING_1981679704");
    noUnderlyings_0_0.set(UnderlyingSymbol_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbol_0.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_0("STRING_1697022815");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbolSfx_0.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_0("STRING_1971145338");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingTimeUnit_0.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_0("STRING_886943536");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasure_0.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_0;
    UnderlyingUnitOfMeasureQty_0.setString("15296202");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasureQty_0.getString());
    all_values.push_back(UnderlyingInstrument_0);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_0;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_0("STRING_461253938");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltID_0.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_0("STRING_1481472611");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltIDSource_0.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_1;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_1("STRING_407830315");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltID_1.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_1("STRING_384085003");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltIDSource_1.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_2;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_2("STRING_750853412");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltID_2.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_2("STRING_1576783966");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltIDSource_2.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_0;
      FIX::UnderlyingStipType UnderlyingStipType_0("STRING_1681278433");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipType_0.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_0("STRING_1274731979");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipValue_0.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_0);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_1;
      FIX::UnderlyingStipType UnderlyingStipType_1("STRING_294911411");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipType_1.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_1("STRING_1320922422");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_1);
      UnderlyingStipulations_NoUnderlyingStips_1.insert(UnderlyingStipValue_1.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_1);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_2;
      FIX::UnderlyingStipType UnderlyingStipType_2("STRING_546221500");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipType_2.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_2("STRING_891026516");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_2);
      UnderlyingStipulations_NoUnderlyingStips_2.insert(UnderlyingStipValue_2.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_2);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_0;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_0("STRING_1662753730");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyID_0.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_0('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyIDSource_0.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_0(1944907916);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyRole_0.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_0("STRING_1354827520");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubID_0.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_0(165298654);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubIDType_0.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_1("STRING_454252944");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubID_1.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_1(449063171);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubIDType_1.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_2("STRING_922269804");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubID_2.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_2(1698770176);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubIDType_2.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_1;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_1("STRING_173336095");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyID_1.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_1('7');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyIDSource_1.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_1(1248309343);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyRole_1.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_3("STRING_1643409396");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubID_3.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_3(630445963);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_3);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3.insert(UnderlyingInstrumentPartySubIDType_3.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_4("STRING_1058662282");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubID_4.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_4(2104663335);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_4);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4.insert(UnderlyingInstrumentPartySubIDType_4.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
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
